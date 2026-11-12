"""Start the irradiation lab simulation and barcode safety pipeline together."""

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    share = get_package_share_directory("cach2cach_lab_automation")
    headless = LaunchConfiguration("headless")
    return LaunchDescription([
        DeclareLaunchArgument("headless", default_value="false"),
        IncludeLaunchDescription(PythonLaunchDescriptionSource(
            os.path.join(share, "launch", "irradiation_lab_simulation.launch.py")),
            launch_arguments={"headless": headless}.items()),
        IncludeLaunchDescription(PythonLaunchDescriptionSource(
            os.path.join(share, "launch", "barcode_pipeline.launch.py"))),
    ])
