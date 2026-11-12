#!/usr/bin/env python3
"""Publish training-ready binary masks and annotated live camera frames."""

import json
import cv2
import numpy as np
import rclpy
from cv_bridge import CvBridge
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image
from std_msgs.msg import String


class VisionSegmentation(Node):
    def __init__(self):
        super().__init__("vision_segmentation")
        self.declare_parameter("image_topic", "/wrist_camera/image")
        self.declare_parameter("min_component_area", 120)
        self.bridge = CvBridge()
        self.mask_pub = self.create_publisher(Image, "/lab/vision/binary_mask", 10)
        self.overlay_pub = self.create_publisher(Image, "/lab/vision/overlay", 10)
        self.metrics_pub = self.create_publisher(String, "/lab/vision/segmentation_metrics", 10)
        self.create_subscription(Image, self.get_parameter("image_topic").value, self.on_image, qos_profile_sensor_data)

    def on_image(self, message):
        try:
            bgr = self.bridge.imgmsg_to_cv2(message, desired_encoding="bgr8")
        except Exception as error:
            self.get_logger().warning(f"RGB conversion failed: {error}")
            return
        gray = cv2.cvtColor(bgr, cv2.COLOR_BGR2GRAY)
        hsv = cv2.cvtColor(bgr, cv2.COLOR_BGR2HSV)
        # Otsu isolates dark labels/objects; saturation retains coloured tubes.
        _, dark = cv2.threshold(gray, 0, 255, cv2.THRESH_BINARY_INV + cv2.THRESH_OTSU)
        saturated = cv2.inRange(hsv, (35, 45, 25), (179, 255, 255))
        mask = cv2.bitwise_or(dark, saturated)
        kernel = np.ones((3, 3), np.uint8)
        mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN, kernel)
        mask = cv2.morphologyEx(mask, cv2.MORPH_CLOSE, kernel, iterations=2)
        count, labels, stats, _ = cv2.connectedComponentsWithStats(mask)
        clean = np.zeros_like(mask)
        minimum = self.get_parameter("min_component_area").value
        boxes = []
        for index in range(1, count):
            x, y, width, height, area = stats[index]
            if area >= minimum:
                clean[labels == index] = 255
                boxes.append([int(x), int(y), int(width), int(height), int(area)])
        overlay = bgr.copy()
        overlay[clean > 0] = (0.45 * overlay[clean > 0] + 0.55 * np.array([0, 255, 0])).astype(np.uint8)
        for x, y, width, height, area in boxes:
            cv2.rectangle(overlay, (x, y), (x + width, y + height), (0, 255, 0), 2)
            cv2.putText(overlay, f"object {area}px", (x, max(16, y - 4)), cv2.FONT_HERSHEY_SIMPLEX, 0.45, (0, 255, 0), 1)
        self.mask_pub.publish(self.bridge.cv2_to_imgmsg(clean, encoding="mono8"))
        annotated = self.bridge.cv2_to_imgmsg(overlay, encoding="bgr8")
        annotated.header = message.header
        self.overlay_pub.publish(annotated)
        self.metrics_pub.publish(String(data=json.dumps({"frame_id": message.header.frame_id,
            "stamp_ns": self.get_clock().now().nanoseconds, "components": boxes,
            "foreground_fraction": round(float(np.count_nonzero(clean)) / clean.size, 5)})))


def main():
    rclpy.init()
    node = VisionSegmentation()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
