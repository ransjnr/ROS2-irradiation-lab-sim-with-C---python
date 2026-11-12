#!/usr/bin/env python3
"""LAN-only touch controller and live monitoring dashboard for the simulation."""

import argparse
import json
import threading
from http import HTTPStatus
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path

import cv2
import numpy as np
from ament_index_python.packages import get_package_share_directory
from control_msgs.action import FollowJointTrajectory
from cv_bridge import CvBridge
from geometry_msgs.msg import Twist
from nav_msgs.msg import OccupancyGrid, Odometry
import rclpy
from rclpy.action import ActionClient
from rclpy.duration import Duration
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image
from std_msgs.msg import String
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint


ARM_JOINTS = ["ur5e_shoulder_pan_joint", "ur5e_shoulder_lift_joint", "ur5e_elbow_joint",
              "ur5e_wrist_1_joint", "ur5e_wrist_2_joint", "ur5e_wrist_3_joint"]
ARM_POSES = {"stow": [0.0, -1.57, 1.57, -1.57, -1.57, 0.0],
             "scan": [0.0, -1.20, 1.40, -1.80, -1.57, 0.0],
             "ready": [0.0, -1.05, 1.70, -2.20, -1.57, 0.0]}


class PhoneControl(Node):
    def __init__(self):
        super().__init__("phone_control_server")
        self.drive = self.create_publisher(Twist, "/lab/teleop_cmd", 10)
        self.drive_mode = self.create_publisher(String, "/lab/drive_mode", 10)
        self.automation_mode = self.create_publisher(String, "/lab/automation_mode", 10)
        self.approval = self.create_publisher(String, "/lab/task_approval", 10)
        self.arm = ActionClient(self, FollowJointTrajectory, "/joint_trajectory_controller/follow_joint_trajectory")
        self.gripper = ActionClient(self, FollowJointTrajectory, "/gripper_controller/follow_joint_trajectory")
        self.state = {"mission": "Waiting for a barcode scan", "execution": "Idle", "drive_mode": "Manual stop", "speed": 50}
        self.command = Twist()
        self.bridge, self.frames, self.frames_lock = CvBridge(), {}, threading.Condition()
        self.odom = None
        self.create_subscription(String, "/lab/mission_state", self._mission, 10)
        self.create_subscription(String, "/lab/execution_state", self._execution, 10)
        self.create_subscription(Image, "/wrist_camera/image", lambda m: self._image(m, "bgr8", "camera"), qos_profile_sensor_data)
        self.create_subscription(Image, "/lab/vision/binary_mask", lambda m: self._image(m, "mono8", "mask"), 10)
        self.create_subscription(Image, "/lab/vision/overlay", lambda m: self._image(m, "bgr8", "overlay"), 10)
        self.create_subscription(OccupancyGrid, "/map", self._map, 10)
        self.create_subscription(Odometry, "/odom", self._odom, 10)
        # Steady output replaces an old direction immediately and prevents a
        # bridge from retaining a stale velocity command.
        self.create_timer(0.05, lambda: self.drive.publish(self.command))

    def _mission(self, message): self.state["mission"] = message.data
    def _execution(self, message): self.state["execution"] = message.data
    def _odom(self, message): self.odom = message

    def _set_frame(self, name, image):
        ok, encoded = cv2.imencode(".jpg", image, [cv2.IMWRITE_JPEG_QUALITY, 82])
        if ok:
            with self.frames_lock:
                self.frames[name] = encoded.tobytes()
                self.frames_lock.notify_all()

    def _image(self, message, encoding, name):
        try:
            image = self.bridge.imgmsg_to_cv2(message, desired_encoding=encoding)
            if image.ndim == 2:
                image = cv2.cvtColor(image, cv2.COLOR_GRAY2BGR)
            self._set_frame(name, image)
        except Exception as error:
            self.get_logger().debug(f"{name} display conversion skipped: {error}")

    def _map(self, message):
        if not message.info.width or not message.info.height:
            return
        raw = np.asarray(message.data, dtype=np.int16).reshape(message.info.height, message.info.width)
        canvas = np.full(raw.shape, 128, dtype=np.uint8); canvas[raw == 0] = 242; canvas[raw > 50] = 36
        canvas = cv2.cvtColor(np.flipud(canvas), cv2.COLOR_GRAY2BGR)
        if self.odom and message.info.resolution > 0:
            x = int((self.odom.pose.pose.position.x - message.info.origin.position.x) / message.info.resolution)
            y = canvas.shape[0] - int((self.odom.pose.pose.position.y - message.info.origin.position.y) / message.info.resolution)
            if 0 <= x < canvas.shape[1] and 0 <= y < canvas.shape[0]:
                cv2.circle(canvas, (x, y), 7, (0, 80, 255), -1); cv2.circle(canvas, (x, y), 7, (255, 255, 255), 1)
        self._set_frame("map", canvas)

    def command_request(self, payload):
        action = payload.get("action", "")
        if action == "drive":
            speed = max(10, min(100, int(payload.get("speed", 50))))
            self.command = Twist()
            self.command.linear.x = max(-0.8, min(0.8, float(payload.get("linear", 0)))) * speed / 100.0
            self.command.angular.z = max(-1.5, min(1.5, float(payload.get("angular", 0)))) * speed / 100.0
            self.drive_mode.publish(String(data="manual")); self.state.update({"drive_mode": "Manual drive", "speed": speed})
            return {"ok": True}
        if action == "stop":
            self.command = Twist(); self.drive_mode.publish(String(data="manual")); self.state["drive_mode"] = "Manual stop (latched)"
            return {"ok": True}
        if action == "resume_autonomy":
            self.command = Twist(); self.drive_mode.publish(String(data="autonomy")); self.state["drive_mode"] = "Autonomy enabled"
            return {"ok": True}
        if action == "automatic":
            self.command = Twist(); self.drive_mode.publish(String(data="autonomy"))
            self.automation_mode.publish(String(data="automatic")); self.state["drive_mode"] = "Automatic batch enabled"
            return {"ok": True}
        if action == "manual":
            self.command = Twist(); self.drive_mode.publish(String(data="manual"))
            self.automation_mode.publish(String(data="manual")); self.state["drive_mode"] = "Manual mode"
            return {"ok": True}
        if action == "approve":
            sample_id = str(payload.get("sample_id", "")).strip()
            if not sample_id.isdecimal(): return {"ok": False, "error": "Enter a numeric sample ID"}
            self.approval.publish(String(data=f"APPROVE:{sample_id}")); return {"ok": True}
        if action in ARM_POSES: return self._trajectory(self.arm, ARM_JOINTS, ARM_POSES[action], 3.0)
        if action in ("grip_open", "grip_close"):
            # 0.13 m per finger clears the 0.24 m labelled containers.
            opening = 0.130 if action == "grip_open" else 0.0
            return self._trajectory(self.gripper, ["finger_left_joint", "finger_right_joint"], [opening, opening], 1.0)
        return {"ok": False, "error": "Unknown command"}

    def _trajectory(self, client, joints, positions, seconds):
        if not client.wait_for_server(timeout_sec=0.3): return {"ok": False, "error": "Robot controller is not ready"}
        point = JointTrajectoryPoint(positions=positions, time_from_start=Duration(seconds=seconds).to_msg())
        client.send_goal_async(FollowJointTrajectory.Goal(trajectory=JointTrajectory(joint_names=joints, points=[point])))
        return {"ok": True}


def handler_factory(control, page):
    class Handler(BaseHTTPRequestHandler):
        def log_message(self, *_): pass
        def _send(self, status, body, content_type="application/json"):
            encoded = body if isinstance(body, bytes) else body.encode()
            self.send_response(status); self.send_header("Content-Type", content_type); self.send_header("Cache-Control", "no-store")
            self.send_header("Content-Length", str(len(encoded))); self.end_headers(); self.wfile.write(encoded)
        def do_GET(self):
            if self.path in ("/", "/index.html"): return self._send(HTTPStatus.OK, page, "text/html; charset=utf-8")
            if self.path == "/api/status": return self._send(HTTPStatus.OK, json.dumps(control.state))
            if self.path.startswith("/stream/") and self.path.endswith(".mjpg"): return self._stream(self.path.rsplit("/", 1)[-1][:-5])
            return self._send(HTTPStatus.NOT_FOUND, json.dumps({"error": "Not found"}))
        def _stream(self, name):
            self.send_response(HTTPStatus.OK); self.send_header("Cache-Control", "no-store")
            self.send_header("Content-Type", "multipart/x-mixed-replace; boundary=frame"); self.end_headers()
            try:
                while rclpy.ok():
                    with control.frames_lock:
                        control.frames_lock.wait_for(lambda: name in control.frames, timeout=1.0); frame = control.frames.get(name)
                    if frame: self.wfile.write(b"--frame\r\nContent-Type: image/jpeg\r\nContent-Length: " + str(len(frame)).encode() + b"\r\n\r\n" + frame + b"\r\n")
            except (BrokenPipeError, ConnectionResetError): pass
        def do_POST(self):
            if self.path != "/api/command": return self._send(HTTPStatus.NOT_FOUND, json.dumps({"error": "Not found"}))
            try:
                payload = json.loads(self.rfile.read(int(self.headers.get("Content-Length", "0"))))
                result = control.command_request(payload); self._send(HTTPStatus.OK if result.get("ok") else HTTPStatus.BAD_REQUEST, json.dumps(result))
            except (ValueError, json.JSONDecodeError) as error: self._send(HTTPStatus.BAD_REQUEST, json.dumps({"ok": False, "error": str(error)}))
    return Handler


def main():
    parser = argparse.ArgumentParser(); parser.add_argument("--port", type=int, default=8080); parser.add_argument("--bind", default="0.0.0.0")
    args = parser.parse_args(); rclpy.init(); control = PhoneControl()
    page_path = Path(get_package_share_directory("cach2cach_lab_automation")) / "web" / "phone_control.html"
    if not page_path.is_file(): page_path = Path(__file__).resolve().parents[1] / "web" / "phone_control.html"
    server = ThreadingHTTPServer((args.bind, args.port), handler_factory(control, page_path.read_bytes()))
    threading.Thread(target=server.serve_forever, daemon=True).start(); control.get_logger().info(f"Phone control available at http://{args.bind}:{args.port}")
    try: rclpy.spin(control)
    except rclpy.executors.ExternalShutdownException: pass
    finally:
        server.shutdown(); control.destroy_node()
        if rclpy.ok(): rclpy.shutdown()


if __name__ == "__main__": main()
