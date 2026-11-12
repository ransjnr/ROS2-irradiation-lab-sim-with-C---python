#!/usr/bin/env python3
"""Queue the calibrated 101–109 simulation pick/place missions in auto mode."""
from geometry_msgs.msg import PoseStamped
from pick_place_orchestrator.action import PickPlaceMission
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from std_msgs.msg import Empty, String

ASSIGNMENTS = [
    ("101", -5.90, 3.80, -3.20, 3.93), ("102", -5.45, 3.80, -2.07, 3.93),
    ("103", -5.00, 3.80, -0.93, 3.93), ("104", -5.90, 4.25, 0.20, 3.93),
    ("105", -5.45, 4.25, 1.33, 3.93), ("106", -5.00, 4.25, 2.47, 3.93),
    ("107", -5.90, 4.70, 3.60, 3.93), ("108", -5.45, 4.70, 4.73, 3.93),
    ("109", -5.00, 4.70, 5.87, 3.93),
]

class AutonomousBatchRunner(Node):
    def __init__(self):
        super().__init__("autonomous_batch_runner")
        self.enabled, self.running, self.index = False, False, 0
        self.client = ActionClient(self, PickPlaceMission, "pick_place_mission")
        self.state = self.create_publisher(String, "/lab/execution_state", 10)
        self.attach = {sample_id: self.create_publisher(Empty, f"/lab/grasp/sample_{sample_id}/attach", 10)
                       for sample_id, *_ in ASSIGNMENTS}
        self.detach = {sample_id: self.create_publisher(Empty, f"/lab/grasp/sample_{sample_id}/detach", 10)
                       for sample_id, *_ in ASSIGNMENTS}
        self.active_id, self.attached = None, False
        self.create_subscription(String, "/lab/automation_mode", self.on_mode, 10)
        self.create_timer(1.0, self.advance)
        self.publish("AUTOMATION READY: choose Automatic in the phone app")

    def publish(self, text): self.state.publish(String(data=text))
    def on_mode(self, message):
        mode = message.data.strip().lower()
        self.enabled = mode == "automatic"
        if not self.enabled:
            self.publish("MANUAL MODE: batch will pause after the current safe action")
        elif self.index >= len(ASSIGNMENTS):
            self.index = 0; self.publish("AUTOMATIC MODE: batch reset to 101")
        else:
            self.publish(f"AUTOMATIC MODE: ready for {ASSIGNMENTS[self.index][0]}")

    def advance(self):
        if not self.enabled or self.running: return
        if self.index >= len(ASSIGNMENTS):
            self.enabled = False; self.publish("AUTOMATIC COMPLETE: 101–109 processed"); return
        if not self.client.wait_for_server(timeout_sec=0.1):
            self.publish("AUTOMATIC WAIT: pick/place action server unavailable"); return
        sample_id, px, py, qx, qy = ASSIGNMENTS[self.index]
        goal = PickPlaceMission.Goal()
        goal.pick_pose = PoseStamped(); goal.place_pose = PoseStamped(); goal.retreat_pose = PoseStamped()
        for pose in (goal.pick_pose, goal.place_pose, goal.retreat_pose):
            pose.header.frame_id = "map"; pose.header.stamp = self.get_clock().now().to_msg(); pose.pose.orientation.w = 1.0
        goal.pick_pose.pose.position.x, goal.pick_pose.pose.position.y, goal.pick_pose.pose.position.z = px, py, 0.14
        goal.place_pose.pose.position.x, goal.place_pose.pose.position.y, goal.place_pose.pose.position.z = qx, qy, 0.08
        goal.retreat_pose.pose.position.x, goal.retreat_pose.pose.position.y = 0.0, 0.0
        self.running = True; self.publish(f"AUTOMATIC: {sample_id} ({self.index + 1}/{len(ASSIGNMENTS)})")
        self.active_id, self.attached = sample_id, False
        future = self.client.send_goal_async(goal, feedback_callback=self.feedback)
        future.add_done_callback(self.goal_response)

    def feedback(self, _, feedback):
        """Mirror the planner's grasp/release phases in Gazebo physics."""
        if not self.active_id:
            return
        phase, step = feedback.feedback.current_phase, feedback.feedback.current_step
        if phase == "PICK_PHASE" and step == "ATTACH_PAYLOAD" and not self.attached:
            self.attach[self.active_id].publish(Empty())
            self.attached = True
            self.publish(f"GRASPED: whole labelled container {self.active_id}")
        elif phase == "PLACE_PHASE" and step == "DETACH_PAYLOAD" and self.attached:
            self.detach[self.active_id].publish(Empty())
            self.attached = False
            self.publish(f"PLACED: whole labelled container {self.active_id}")

    def goal_response(self, future):
        handle = future.result()
        if not handle.accepted:
            self.running = False; self.enabled = False; self.publish("AUTOMATIC PAUSED: mission goal rejected"); return
        result = handle.get_result_async(); result.add_done_callback(self.finished)

    def finished(self, future):
        result = future.result().result
        self.running = False
        if result.success:
            if self.attached:
                # Never carry an object through the next mission on an aborted
                # feedback path; safe release is idempotent in Gazebo.
                self.detach[self.active_id].publish(Empty())
                self.attached = False
            self.index += 1; self.publish("AUTOMATIC: mission complete; advancing queue")
        else:
            if self.attached:
                self.detach[self.active_id].publish(Empty())
                self.attached = False
            self.enabled = False; self.publish(f"AUTOMATIC PAUSED: {result.failure_reason}")

def main():
    rclpy.init(); node = AutonomousBatchRunner()
    try: rclpy.spin(node)
    finally:
        node.destroy_node()
        if rclpy.ok(): rclpy.shutdown()
if __name__ == "__main__": main()
