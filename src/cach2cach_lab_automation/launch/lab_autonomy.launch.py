"""Full simulation-only autonomy stack: lab world, Nav2, MoveIt, perception and gated executor."""

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    share = get_package_share_directory("cach2cach_lab_automation")
    nav_share = get_package_share_directory("mobile_manipulator_nav")
    moveit_share = get_package_share_directory("mobile_manipulator_moveit_config")
    orchestrator_share = get_package_share_directory("pick_place_orchestrator")
    headless = LaunchConfiguration("headless")
    motion = LaunchConfiguration("enable_motion")
    # Start our lab world directly. nav_bringup includes the upstream warehouse world,
    # so navigation is launched separately below.
    simulation = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(share, "launch", "irradiation_lab_simulation.launch.py")),
        launch_arguments={"headless": headless}.items())
    # Gazebo needs time to load gz_ros2_control before Nav2 requests TF.
    navigation = TimerAction(period=25.0, actions=[IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(nav_share, "launch", "navigation.launch.py")),
        launch_arguments={"use_sim_time": "true", "use_rviz": "false"}.items())])
    moveit = TimerAction(period=40.0, actions=[IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(moveit_share, "launch", "move_group.launch.py")),
        launch_arguments={"use_sim_time": "true", "ros2_control_hardware_type": "gz"}.items())])
    orchestrator = TimerAction(period=50.0, actions=[IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(orchestrator_share, "launch", "orchestrator.launch.py")),
        launch_arguments={"bypass_visual_servo": "false"}.items())])
    perception = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(share, "launch", "barcode_pipeline.launch.py")),
        launch_arguments={"enable_motion": motion}.items())
    # The lab has a fixed, simulation-only map origin. Real deployment must replace this with localization.
    map_to_odom = Node(package="tf2_ros", executable="static_transform_publisher",
                       arguments=["0", "0", "0", "0", "0", "0", "map", "odom"],
                       parameters=[{"use_sim_time": True}])
    return LaunchDescription([
        DeclareLaunchArgument("headless", default_value="false"),
        DeclareLaunchArgument("enable_motion", default_value="false", description="Simulation-only: permit approved task executor to send mission actions"),
        map_to_odom, simulation, navigation, moveit, orchestrator, perception,
    ])
