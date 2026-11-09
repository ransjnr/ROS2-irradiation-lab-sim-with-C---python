from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
import os


def generate_launch_description():
    package_share = get_package_share_directory("cach2cach_lab_automation")
    registry = os.path.join(package_share, "config", "sample_registry.json")
    return LaunchDescription([
        DeclareLaunchArgument("image_topic", default_value="/wrist_camera/image"),
        DeclareLaunchArgument("enable_motion", default_value="false"),
        Node(
            package="cach2cach_lab_automation",
            executable="barcode_detector.py",
            name="barcode_detector",
            parameters=[{"image_topic": LaunchConfiguration("image_topic"), "registry_file": registry}],
            output="screen",
        ),
        Node(
            package="cach2cach_lab_automation",
            executable="sample_mission_supervisor",
            name="sample_mission_supervisor",
            output="screen",
        ),
        Node(
            package="cach2cach_lab_automation",
            executable="sample_pose_estimator.py",
            name="sample_pose_estimator",
            output="screen",
        ),
        Node(
            package="cach2cach_lab_automation",
            executable="approved_task_executor",
            name="approved_task_executor",
            parameters=[{"enable_motion": LaunchConfiguration("enable_motion")}],
            output="screen",
        ),
    ])
