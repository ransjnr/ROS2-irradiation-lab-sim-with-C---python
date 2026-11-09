"""Run the imported mobile manipulator in the cach2cach irradiation workcell."""

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    lab_share = get_package_share_directory("cach2cach_lab_automation")
    mobile_gazebo_share = get_package_share_directory("mobile_manipulator_gazebo")
    world = os.path.join(lab_share, "worlds", "irradiation_lab.sdf")
    return LaunchDescription([
        DeclareLaunchArgument("headless", default_value="false"),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(mobile_gazebo_share, "launch", "simulation.launch.py")
            ),
            launch_arguments={
                "world": world,
                "headless": LaunchConfiguration("headless"),
                "x_pose": "0.0",
                "y_pose": "0.0",
                "z_pose": "0.15",
            }.items(),
        ),
    ])
