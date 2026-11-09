#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from moveit_msgs.msg import CollisionObject, PlanningScene
from shape_msgs.msg import SolidPrimitive
from geometry_msgs.msg import Pose


class Cach2CachPlanningScene(Node):

    def __init__(self):
        super().__init__("cach2cach_planning_scene")

        self.publisher = self.create_publisher(
            PlanningScene,
            "/planning_scene",
            10
        )

        self.timer = self.create_timer(
            1.0,
            self.publish_scene
        )

        self.published = False

    def create_box(self, name, x, y, z, sx, sy, sz):
        obj = CollisionObject()

        obj.header.frame_id = "world"
        obj.id = name

        primitive = SolidPrimitive()
        primitive.type = SolidPrimitive.BOX
        primitive.dimensions = [sx, sy, sz]

        pose = Pose()
        pose.orientation.w = 1.0
        pose.position.x = x
        pose.position.y = y
        pose.position.z = z

        obj.primitives.append(primitive)
        obj.primitive_poses.append(pose)

        obj.operation = CollisionObject.ADD

        return obj

    def publish_scene(self):
        if self.published:
            return

        if self.publisher.get_subscription_count() == 0:
            self.get_logger().info(
                "Waiting for MoveIt planning scene subscriber..."
            )
            return

        scene = PlanningScene()
        scene.is_diff = True

        scene.world.collision_objects = [
            self.create_box(
                "source_rack",
                0.45, 0.45, 0.04,
                0.30, 0.20, 0.08
            ),
            self.create_box(
                "destination_rack",
                0.45, -0.45, 0.04,
                0.30, 0.20, 0.08
            ),
        ]

        self.publisher.publish(scene)

        self.get_logger().info(
            "Published cach2cach laboratory collision objects"
        )

        self.published = True
        self.timer.cancel()


def main():
    rclpy.init()
    node = Cach2CachPlanningScene()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
