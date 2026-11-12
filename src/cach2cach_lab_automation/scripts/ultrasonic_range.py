#!/usr/bin/env python3
"""Convert short front lidar fans into HC-SR04-like ROS Range readings.

The Gazebo model uses two nine-ray, 30-degree lidar fans because Gazebo Sim
does not provide a native ultrasonic message.  Publishing Range preserves the
interface used by common ultrasonic boards and by Nav2 Collision Monitor.
"""

import math

import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import LaserScan, Range


class UltrasonicRange(Node):
    def __init__(self):
        super().__init__("front_ultrasonic_range")
        self.declare_parameter("stop_distance", 0.32)
        self.left_pub = self.create_publisher(Range, "/front_ultrasonic/left", 10)
        self.right_pub = self.create_publisher(Range, "/front_ultrasonic/right", 10)
        self.create_subscription(LaserScan, "/front_ultrasonic/left_scan",
                                 lambda msg: self.convert(msg, self.left_pub), qos_profile_sensor_data)
        self.create_subscription(LaserScan, "/front_ultrasonic/right_scan",
                                 lambda msg: self.convert(msg, self.right_pub), qos_profile_sensor_data)

    def convert(self, scan, publisher):
        readings = [value for value in scan.ranges if math.isfinite(value)
                    and scan.range_min <= value <= scan.range_max]
        output = Range()
        output.header = scan.header
        output.radiation_type = Range.ULTRASOUND
        output.field_of_view = max(0.01, scan.angle_max - scan.angle_min)
        output.min_range = scan.range_min
        output.max_range = scan.range_max
        # A sonar reports the nearest strong return within its cone.
        output.range = min(readings) if readings else scan.range_max
        publisher.publish(output)


def main():
    rclpy.init()
    node = UltrasonicRange()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
