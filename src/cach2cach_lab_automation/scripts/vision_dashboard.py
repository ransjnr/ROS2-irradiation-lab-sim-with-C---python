#!/usr/bin/env python3
"""One live, non-recording OpenCV dashboard for lab perception and mapping."""

import cv2
import numpy as np
import rclpy
from cv_bridge import CvBridge
from nav_msgs.msg import OccupancyGrid, Odometry
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image


class VisionDashboard(Node):
    def __init__(self):
        super().__init__("vision_dashboard")
        self.bridge = CvBridge()
        self.rgb = self.mask = self.overlay = self.depth = self.map_image = None
        self.odom = None
        self.create_subscription(Image, "/wrist_camera/image", self.on_rgb, qos_profile_sensor_data)
        self.create_subscription(Image, "/wrist_camera/depth_image", self.on_depth, qos_profile_sensor_data)
        self.create_subscription(Image, "/lab/vision/binary_mask", self.on_mask, 10)
        self.create_subscription(Image, "/lab/vision/overlay", self.on_overlay, 10)
        self.create_subscription(OccupancyGrid, "/map", self.on_map, 10)
        self.create_subscription(Odometry, "/odom", self.on_odom, 10)
        self.create_timer(0.05, self.render)

    def convert(self, message, encoding):
        try:
            return self.bridge.imgmsg_to_cv2(message, desired_encoding=encoding)
        except Exception:
            return None

    def on_rgb(self, msg): self.rgb = self.convert(msg, "bgr8")
    def on_mask(self, msg): self.mask = self.convert(msg, "mono8")
    def on_overlay(self, msg): self.overlay = self.convert(msg, "bgr8")
    def on_depth(self, msg): self.depth = self.convert(msg, "passthrough")
    def on_odom(self, msg): self.odom = msg

    def on_map(self, msg):
        raw = np.asarray(msg.data, dtype=np.int16).reshape(msg.info.height, msg.info.width)
        canvas = np.full(raw.shape, 180, dtype=np.uint8)  # unknown
        canvas[raw == 0] = 255
        canvas[raw > 50] = 20
        canvas = cv2.cvtColor(np.flipud(canvas), cv2.COLOR_GRAY2BGR)
        if self.odom and msg.info.resolution > 0:
            x = int((self.odom.pose.pose.position.x - msg.info.origin.position.x) / msg.info.resolution)
            y = int((self.odom.pose.pose.position.y - msg.info.origin.position.y) / msg.info.resolution)
            y = canvas.shape[0] - y
            if 0 <= x < canvas.shape[1] and 0 <= y < canvas.shape[0]:
                cv2.circle(canvas, (x, y), 5, (0, 0, 255), -1)
        self.map_image = canvas

    @staticmethod
    def panel(image, title, size=(420, 280)):
        if image is None:
            image = np.zeros((size[1], size[0], 3), dtype=np.uint8)
            cv2.putText(image, "waiting for topic", (35, size[1] // 2), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (170, 170, 170), 1)
        elif image.ndim == 2:
            image = cv2.cvtColor(image, cv2.COLOR_GRAY2BGR)
        image = cv2.resize(image, size, interpolation=cv2.INTER_AREA)
        cv2.rectangle(image, (0, 0), (size[0], 30), (30, 30, 30), -1)
        cv2.putText(image, title, (10, 21), cv2.FONT_HERSHEY_SIMPLEX, 0.58, (255, 255, 255), 1)
        return image

    def render(self):
        depth = None
        if self.depth is not None:
            finite = np.nan_to_num(self.depth.astype(np.float32), nan=0.0, posinf=0.0)
            depth = cv2.applyColorMap(cv2.normalize(finite, None, 0, 255, cv2.NORM_MINMAX).astype(np.uint8), cv2.COLORMAP_TURBO)
        rows = [np.hstack([self.panel(self.rgb, "RGB camera"), self.panel(self.mask, "Binary segmentation mask")]),
                np.hstack([self.panel(self.overlay, "Segmented objects / labels"), self.panel(depth, "Depth camera")]),
                np.hstack([self.panel(self.map_image, "Live map + robot pose"), self.panel(None, "No recording: live display only")])]
        cv2.imshow("cach2cach | Live Vision and Map", np.vstack(rows))
        cv2.waitKey(1)


def main():
    rclpy.init()
    node = VisionDashboard()
    try:
        rclpy.spin(node)
    finally:
        cv2.destroyAllWindows()
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
