#!/usr/bin/env python3
"""Optionally persist RGB, binary-mask, overlay and metadata frames for training."""

import json
from pathlib import Path

import cv2
import rclpy
from cv_bridge import CvBridge
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image


class VisionDatasetRecorder(Node):
    def __init__(self):
        super().__init__("vision_dataset_recorder")
        self.declare_parameter("enabled", False)
        self.declare_parameter("output_dir", str(Path.home() / "cach2cach_vision_dataset"))
        self.declare_parameter("minimum_interval_seconds", 0.5)
        self.bridge, self.rgb, self.mask, self.overlay = CvBridge(), None, None, None
        self.last_write_ns = 0
        self.create_subscription(Image, "/wrist_camera/image", self.on_rgb, qos_profile_sensor_data)
        self.create_subscription(Image, "/lab/vision/binary_mask", self.on_mask, 10)
        self.create_subscription(Image, "/lab/vision/overlay", self.on_overlay, 10)

    def on_rgb(self, msg):
        self.rgb = msg
        self.write_if_ready()

    def on_mask(self, msg):
        self.mask = msg

    def on_overlay(self, msg):
        self.overlay = msg

    def write_if_ready(self):
        if not self.get_parameter("enabled").value or not self.rgb or not self.mask or not self.overlay:
            return
        stamp_ns = self.rgb.header.stamp.sec * 1_000_000_000 + self.rgb.header.stamp.nanosec
        minimum = int(self.get_parameter("minimum_interval_seconds").value * 1e9)
        if stamp_ns <= self.last_write_ns + minimum:
            return
        try:
            rgb = self.bridge.imgmsg_to_cv2(self.rgb, desired_encoding="bgr8")
            mask = self.bridge.imgmsg_to_cv2(self.mask, desired_encoding="mono8")
            overlay = self.bridge.imgmsg_to_cv2(self.overlay, desired_encoding="bgr8")
            root = Path(self.get_parameter("output_dir").value)
            for subdir in ("rgb", "mask", "overlay", "metadata"):
                (root / subdir).mkdir(parents=True, exist_ok=True)
            name = f"frame_{stamp_ns:019d}"
            cv2.imwrite(str(root / "rgb" / f"{name}.png"), rgb)
            cv2.imwrite(str(root / "mask" / f"{name}.png"), mask)
            cv2.imwrite(str(root / "overlay" / f"{name}.png"), overlay)
            (root / "metadata" / f"{name}.json").write_text(json.dumps({"stamp_ns": stamp_ns,
                "camera_frame": self.rgb.header.frame_id, "rgb": f"rgb/{name}.png",
                "mask": f"mask/{name}.png", "overlay": f"overlay/{name}.png"}, indent=2))
            self.last_write_ns = stamp_ns
        except Exception as error:
            self.get_logger().error(f"Dataset write failed: {error}")


def main():
    rclpy.init()
    node = VisionDatasetRecorder()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
