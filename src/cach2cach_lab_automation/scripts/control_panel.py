#!/usr/bin/env python3
"""Simulation control panel for the mobile base, UR5e arm, gripper, and task approvals."""

from functools import partial
import tkinter as tk

from control_msgs.action import FollowJointTrajectory
from geometry_msgs.msg import Twist
import rclpy
from rclpy.action import ActionClient
from rclpy.duration import Duration
from rclpy.node import Node
from std_msgs.msg import String
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint


ARM_JOINTS = [
    "ur5e_shoulder_pan_joint", "ur5e_shoulder_lift_joint", "ur5e_elbow_joint",
    "ur5e_wrist_1_joint", "ur5e_wrist_2_joint", "ur5e_wrist_3_joint",
]
GRIPPER_JOINTS = ["finger_left_joint", "finger_right_joint"]
ARM_POSES = {
    "Stow": [0.0, -1.57, 1.57, -1.57, -1.57, 0.0],
    "Scan": [0.0, -1.20, 1.40, -1.80, -1.57, 0.0],
    "Ready": [0.0, -1.05, 1.70, -2.20, -1.57, 0.0],
}


class RobotPanel(Node):
    def __init__(self, root):
        super().__init__("lab_control_panel")
        self.root = root
        self.cmd_pub = self.create_publisher(Twist, "/cmd_vel", 10)
        self.approval_pub = self.create_publisher(String, "/lab/task_approval", 10)
        self.arm_client = ActionClient(self, FollowJointTrajectory, "/joint_trajectory_controller/follow_joint_trajectory")
        self.gripper_client = ActionClient(self, FollowJointTrajectory, "/gripper_controller/follow_joint_trajectory")
        self.status = tk.StringVar(value="Ready — base controls are hold-to-move")
        self.sample_id = tk.StringVar(value="LAB-SAMPLE-001")
        self.active_command = None
        self.create_subscription(String, "/lab/execution_state", self.on_execution_state, 10)
        self.create_subscription(String, "/lab/mission_state", self.on_mission_state, 10)
        self.create_timer(0.05, self.process_ros)
        self.build_ui()
        self.root.protocol("WM_DELETE_WINDOW", self.close)

    def build_ui(self):
        self.root.title("cach2cach Lab Robot Control — Simulation")
        self.root.geometry("540x490")
        self.root.configure(padx=14, pady=14)
        tk.Label(self.root, text="cach2cach laboratory robot", font=("Sans", 18, "bold")).pack()
        tk.Label(self.root, text="Simulation controls — release a drive button to stop", fg="#9b1c1c").pack(pady=(2, 10))

        base = tk.LabelFrame(self.root, text="Mobile base", padx=8, pady=8)
        base.pack(fill="x")
        for label, row, col, linear, angular in [
            ("Forward", 0, 1, 0.20, 0.0), ("Left", 1, 0, 0.0, 0.45),
            ("Stop", 1, 1, 0.0, 0.0), ("Right", 1, 2, 0.0, -0.45),
            ("Reverse", 2, 1, -0.15, 0.0),
        ]:
            button = tk.Button(base, text=label, width=11, height=2,
                               command=self.stop if label == "Stop" else None)
            button.grid(row=row, column=col, padx=3, pady=3)
            if label != "Stop":
                button.bind("<ButtonPress-1>", partial(self.drive, linear, angular))
                button.bind("<ButtonRelease-1>", lambda _event: self.stop())

        arm = tk.LabelFrame(self.root, text="Arm and gripper", padx=8, pady=8)
        arm.pack(fill="x", pady=(10, 0))
        for index, name in enumerate(ARM_POSES):
            tk.Button(arm, text=name, width=12, command=partial(self.move_arm, name)).grid(row=0, column=index, padx=3, pady=3)
        tk.Button(arm, text="Open gripper", width=16, command=partial(self.move_gripper, 0.040)).grid(row=1, column=0, columnspan=1, pady=4)
        tk.Button(arm, text="Close gripper", width=16, command=partial(self.move_gripper, 0.000)).grid(row=1, column=1, columnspan=1, pady=4)

        task = tk.LabelFrame(self.root, text="Approved sample task", padx=8, pady=8)
        task.pack(fill="x", pady=(10, 0))
        tk.Label(task, text="Sample ID:").grid(row=0, column=0)
        tk.Entry(task, textvariable=self.sample_id, width=25).grid(row=0, column=1, padx=6)
        tk.Button(task, text="Approve matching task", command=self.approve).grid(row=0, column=2)

        tk.Label(self.root, textvariable=self.status, justify="left", anchor="w", wraplength=500,
                 bg="#e8f0fe", padx=8, pady=8).pack(fill="x", pady=(12, 0))

    def process_ros(self):
        rclpy.spin_once(self, timeout_sec=0.0)
        if self.active_command is not None:
            self.cmd_pub.publish(self.active_command)

    def drive(self, linear, angular, _event):
        command = Twist()
        command.linear.x, command.angular.z = linear, angular
        self.active_command = command
        self.status.set("Driving — release button to stop")

    def stop(self):
        self.active_command = None
        self.cmd_pub.publish(Twist())
        self.status.set("Base stopped")

    def move_arm(self, pose_name):
        self.send_trajectory(self.arm_client, ARM_JOINTS, ARM_POSES[pose_name], 3.0, f"Arm moving to {pose_name}")

    def move_gripper(self, opening):
        label = "Opening" if opening else "Closing"
        self.send_trajectory(self.gripper_client, GRIPPER_JOINTS, [opening, opening], 1.0, f"{label} gripper")

    def send_trajectory(self, client, joints, positions, seconds, label):
        if not client.wait_for_server(timeout_sec=1.0):
            self.status.set("Controller unavailable — start the lab simulation first")
            return
        point = JointTrajectoryPoint(positions=positions, time_from_start=Duration(seconds=seconds).to_msg())
        goal = FollowJointTrajectory.Goal(trajectory=JointTrajectory(joint_names=joints, points=[point]))
        future = client.send_goal_async(goal)
        future.add_done_callback(lambda result: self.status.set(label if result.result() else "Trajectory rejected"))

    def approve(self):
        sample = self.sample_id.get().strip()
        if not sample:
            self.status.set("Enter a sample ID first")
            return
        self.approval_pub.publish(String(data=f"APPROVE:{sample}"))
        self.status.set(f"Approval sent for {sample}; executor remains dry-run unless enabled")

    def on_execution_state(self, message):
        self.status.set(message.data)

    def on_mission_state(self, message):
        self.status.set(message.data)

    def close(self):
        self.stop()
        self.destroy_node()
        self.root.destroy()
        rclpy.shutdown()


def main():
    rclpy.init()
    root = tk.Tk()
    RobotPanel(root)
    root.mainloop()


if __name__ == "__main__":
    main()
