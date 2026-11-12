#!/usr/bin/env python3
"""Move to the source tray and present the wrist camera for barcode scanning.

Simulation-only helper.  It does not grasp or move samples; it only creates
the camera observation that drives the barcode detector and mission executor.
"""

from control_msgs.action import FollowJointTrajectory
from geometry_msgs.msg import PoseStamped
import math
from nav2_msgs.action import NavigateToPose
import rclpy
from rclpy.action import ActionClient
from rclpy.duration import Duration
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint


class AutonomousBarcodeSurvey(Node):
    def __init__(self):
        super().__init__("autonomous_barcode_survey")
        self.declare_parameter("source_x", -5.20)
        self.declare_parameter("source_y", 3.25)
        self.declare_parameter("source_yaw", 1.57)
        self.navigation = ActionClient(self, NavigateToPose, "/navigate_to_pose")
        self.arm = ActionClient(self, FollowJointTrajectory,
                                "/joint_trajectory_controller/follow_joint_trajectory")
        self.sent = False
        self.create_timer(2.0, self.begin_once)

    def begin_once(self):
        if self.sent or not self.navigation.wait_for_server(timeout_sec=0.1):
            return
        self.sent = True
        self.present_camera()
        goal = NavigateToPose.Goal()
        goal.pose = PoseStamped()
        goal.pose.header.frame_id = "map"
        goal.pose.header.stamp = self.get_clock().now().to_msg()
        goal.pose.pose.position.x = self.get_parameter("source_x").value
        goal.pose.pose.position.y = self.get_parameter("source_y").value
        yaw = self.get_parameter("source_yaw").value
        goal.pose.pose.orientation.z = math.sin(yaw / 2.0)
        goal.pose.pose.orientation.w = math.cos(yaw / 2.0)
        self.navigation.send_goal_async(goal)
        self.get_logger().info("Autonomous survey: navigating to source-tray barcode scan pose")

    def present_camera(self):
        if not self.arm.wait_for_server(timeout_sec=0.1):
            self.get_logger().warning("Arm controller unavailable; navigation survey will continue")
            return
        joints = ["ur5e_shoulder_pan_joint", "ur5e_shoulder_lift_joint", "ur5e_elbow_joint",
                  "ur5e_wrist_1_joint", "ur5e_wrist_2_joint", "ur5e_wrist_3_joint"]
        scan_pose = [0.0, -1.20, 1.40, -1.80, -1.57, 0.0]
        point = JointTrajectoryPoint(positions=scan_pose,
                                     time_from_start=Duration(seconds=3.0).to_msg())
        self.arm.send_goal_async(FollowJointTrajectory.Goal(
            trajectory=JointTrajectory(joint_names=joints, points=[point])))


def main():
    rclpy.init()
    node = AutonomousBarcodeSurvey()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
