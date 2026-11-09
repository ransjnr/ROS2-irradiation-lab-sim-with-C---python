#!/usr/bin/env python3
"""Detect QR-labelled laboratory samples from an RGB ROS image stream."""

import json
from pathlib import Path

import cv2
from cv_bridge import CvBridge
from rclpy.node import Node
import rclpy
from sensor_msgs.msg import Image
from std_msgs.msg import String


class BarcodeDetector(Node):
    def __init__(self):
        super().__init__("barcode_detector")
        self.declare_parameter("image_topic", "/wrist_camera/image")
        self.declare_parameter("registry_file", "")
        self.declare_parameter("deduplicate_seconds", 2.0)
        self.bridge = CvBridge()
        self.qr = cv2.QRCodeDetector()
        self.last_seen = {}
        self.registry = self._load_registry()
        self.publisher = self.create_publisher(String, "/lab/sample_scan", 10)
        self.create_subscription(
            Image, self.get_parameter("image_topic").value, self.on_image, 10
        )

    def _load_registry(self):
        configured = self.get_parameter("registry_file").value
        if configured:
            registry_path = Path(configured)
        else:
            registry_path = Path(__file__).resolve().parents[2] / "share" / "cach2cach_lab_automation" / "config" / "sample_registry.json"
        try:
            return json.loads(registry_path.read_text())["samples"]
        except (OSError, KeyError, json.JSONDecodeError) as error:
            self.get_logger().error(f"Cannot load sample registry {registry_path}: {error}")
            return {}

    def on_image(self, image):
        try:
            frame = self.bridge.imgmsg_to_cv2(image, desired_encoding="bgr8")
        except Exception as error:
            self.get_logger().warning(f"Cannot convert camera frame: {error}")
            return
        text, points, _ = self.qr.detectAndDecode(frame)
        if not text or points is None:
            return
        now = self.get_clock().now().nanoseconds / 1e9
        if now - self.last_seen.get(text, -1e9) < self.get_parameter("deduplicate_seconds").value:
            return
        self.last_seen[text] = now
        sample = self.registry.get(text)
        payload = {
            "id": text,
            "recognized": sample is not None,
            "stamp_ns": self.get_clock().now().nanoseconds,
            "image_frame": image.header.frame_id,
            "corners_px": points.reshape(-1, 2).round(1).tolist(),
        }
        if sample:
            payload["sample"] = sample
        self.publisher.publish(String(data=json.dumps(payload, sort_keys=True)))
        status = "recognized" if sample else "unknown"
        self.get_logger().info(f"{status} QR sample: {text}")


def main():
    rclpy.init()
    node = BarcodeDetector()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
