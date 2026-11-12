#!/usr/bin/env python3
"""Gate base commands using the nearest front ultrasonic reading.

This is a simulation/prototype software interlock, not a replacement for a
safety-rated controller, bumper, E-stop, or human supervision on hardware.
"""

import math
from time import monotonic

import rclpy
from geometry_msgs.msg import Twist
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Range
from std_msgs.msg import String


class UltrasonicSafetyGate(Node):
    def __init__(self):
        super().__init__("ultrasonic_safety_gate")
        self.declare_parameter("stop_distance", 0.32)
        self.declare_parameter("slow_distance", 0.55)
        self.declare_parameter("sensor_timeout", 0.75)
        self.declare_parameter("block_on_stale_sensor", True)
        self.declare_parameter("speed_scale", 0.65)
        self.nearest_range = math.inf
        self.last_sensor_time = None
        self.autonomy_command = Twist()
        self.manual_command = Twist()
        # Manual mode is deliberately sticky.  A phone Stop must not allow a
        # still-running Nav2 action to immediately command the base again.
        self.manual_mode = False
        self.publisher = self.create_publisher(Twist, "/cmd_vel_safe", 10)
        self.create_subscription(Twist, "/cmd_vel", self.on_autonomy_command, 10)
        self.create_subscription(Twist, "/lab/teleop_cmd", self.on_manual_command, 10)
        self.create_subscription(String, "/lab/drive_mode", self.on_drive_mode, 10)
        self.create_subscription(Range, "/front_ultrasonic/left", self.on_range, qos_profile_sensor_data)
        self.create_subscription(Range, "/front_ultrasonic/right", self.on_range, qos_profile_sensor_data)
        self.create_timer(0.05, self.publish_safe_command)

    def on_range(self, message):
        if math.isfinite(message.range) and message.min_range <= message.range <= message.max_range:
            self.nearest_range = message.range
            self.last_sensor_time = monotonic()

    def on_autonomy_command(self, command):
        self.autonomy_command = command

    def on_manual_command(self, command):
        self.manual_mode = True
        self.manual_command = command

    def on_drive_mode(self, message):
        if message.data.strip().lower() == "autonomy":
            self.manual_mode = False
            self.manual_command = Twist()
            self.get_logger().info("Phone controller released drive authority to autonomy")
        elif message.data.strip().lower() == "manual":
            self.manual_mode = True

    def publish_safe_command(self):
        command = self.manual_command if self.manual_mode else self.autonomy_command
        safe = Twist()
        safe.linear = command.linear
        safe.angular = command.angular
        # This is a bounded operational speed selector, never an override of
        # the obstacle-stop interlock.  1.0 is the Nav2 configured maximum.
        scale = max(0.25, min(float(self.get_parameter("speed_scale").value), 1.0))
        safe.linear.x *= scale
        safe.angular.z *= scale
        moving_forward = command.linear.x > 0.0
        stale = self.last_sensor_time is None or monotonic() - self.last_sensor_time > self.get_parameter("sensor_timeout").value
        if moving_forward and stale and self.get_parameter("block_on_stale_sensor").value:
            safe.linear.x = 0.0
            self.get_logger().warning("Blocked forward motion: ultrasonic sensor data is stale")
        elif moving_forward and self.nearest_range <= self.get_parameter("stop_distance").value:
            safe.linear.x = 0.0
            self.get_logger().warning("Blocked forward motion: obstacle inside stop distance")
        elif moving_forward and self.nearest_range < self.get_parameter("slow_distance").value:
            safe.linear.x = min(safe.linear.x, 0.08)
        self.publisher.publish(safe)


def main():
    rclpy.init()
    node = UltrasonicSafetyGate()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
