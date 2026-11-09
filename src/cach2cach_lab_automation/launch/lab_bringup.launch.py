"""Start the irradiation lab simulation and barcode safety pipeline together."""

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    share = get_package_share_directory("cach2cach_lab_automation")
    return LaunchDescription([
        IncludeLaunchDescription(PythonLaunchDescriptionSource(
            os.path.join(share, "launch", "irradiation_lab_simulation.launch.py"))),
        IncludeLaunchDescription(PythonLaunchDescriptionSource(
            os.path.join(share, "launch", "barcode_pipeline.launch.py"))),
    ])
