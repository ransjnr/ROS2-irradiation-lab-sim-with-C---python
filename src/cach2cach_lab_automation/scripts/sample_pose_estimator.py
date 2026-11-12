#!/usr/bin/env python3
"""Turn QR image corners and wrist-depth data into a camera-frame sample pose."""

import json
import statistics

import numpy as np
import rclpy
from cv_bridge import CvBridge
from geometry_msgs.msg import PoseStamped
from rclpy.node import Node
from sensor_msgs.msg import CameraInfo, Image
from std_msgs.msg import String


class SamplePoseEstimator(Node):
    def __init__(self):
        super().__init__("sample_pose_estimator")
        self.bridge = CvBridge()
        self.camera = None
        self.depth = None
        self.create_subscription(CameraInfo, "/wrist_camera/camera_info", self.on_camera, 10)
        self.create_subscription(Image, "/wrist_camera/depth_image", self.on_depth, 10)
        self.create_subscription(String, "/lab/sample_scan", self.on_scan, 10)
        self.pose_pub = self.create_publisher(PoseStamped, "/lab/detected_sample_pose", 10)
        self.task_pub = self.create_publisher(String, "/lab/task_request", 10)

    def on_camera(self, message):
        self.camera = message

    def on_depth(self, message):
        try:
            self.depth = self.bridge.imgmsg_to_cv2(message, desired_encoding="passthrough")
        except Exception as error:
            self.get_logger().warning(f"Depth conversion failed: {error}")

    def on_scan(self, message):
        if not self.camera or self.depth is None:
            self.get_logger().debug("Waiting for camera calibration and depth frame")
            return
        try:
            scan = json.loads(message.data)
            corners = np.asarray(scan["corners_px"], dtype=float)
        except (KeyError, ValueError, json.JSONDecodeError) as error:
            self.get_logger().warning(f"Invalid scan payload: {error}")
            return
        u, v = corners.mean(axis=0)
        height, width = self.depth.shape[:2]
        x0, x1 = max(0, int(u) - 3), min(width, int(u) + 4)
        y0, y1 = max(0, int(v) - 3), min(height, int(v) + 4)
        patch = self.depth[y0:y1, x0:x1].astype(float).ravel()
        valid = patch[np.isfinite(patch) & (patch > 0)]
        if valid.size == 0:
            self.get_logger().warning("QR detected but no valid depth at its center")
            return
        depth = statistics.median(valid.tolist())
        if self.depth.dtype == np.uint16:
            depth /= 1000.0
        fx, fy, cx, cy = self.camera.k[0], self.camera.k[4], self.camera.k[2], self.camera.k[5]
        pose = PoseStamped()
        pose.header.stamp = self.get_clock().now().to_msg()
        pose.header.frame_id = self.camera.header.frame_id
        pose.pose.position.x = (u - cx) * depth / fx
        pose.pose.position.y = (v - cy) * depth / fy
        pose.pose.position.z = depth
        pose.pose.orientation.w = 1.0
        self.pose_pub.publish(pose)
        if scan.get("recognized"):
            sample = scan["sample"]
            self.task_pub.publish(String(data=json.dumps({
                "id": scan["id"], "source": sample["source_station"],
                "destination": sample["destination_station"],
                "pose_frame": pose.header.frame_id,
                "pose": [pose.pose.position.x, pose.pose.position.y, pose.pose.position.z],
                "requires_approval": True,
            }, sort_keys=True)))


def main():
    rclpy.init()
    node = SamplePoseEstimator()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
