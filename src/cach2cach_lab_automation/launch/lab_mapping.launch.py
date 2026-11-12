"""Build a map of the irradiation-lab world using SLAM and a guarded sweep."""

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, EmitEvent, IncludeLaunchDescription, RegisterEventHandler, TimerAction
from launch.conditions import IfCondition
from launch.events import matches_action
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import LifecycleNode, Node
from launch_ros.event_handlers import OnStateTransition
from launch_ros.events.lifecycle import ChangeState
from lifecycle_msgs.msg import Transition


def generate_launch_description():
    share = get_package_share_directory("cach2cach_lab_automation")
    slam_share = get_package_share_directory("mobile_manipulator_slam")
    headless = LaunchConfiguration("headless")
    sweep = LaunchConfiguration("auto_sweep")
    simulation = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(share, "launch", "irradiation_lab_simulation.launch.py")),
        launch_arguments={"headless": headless}.items())
    scan_bridge = Node(package="ros_gz_bridge", executable="parameter_bridge", name="mapping_scan_bridge",
                       output="screen", arguments=["/scan@sensor_msgs/msg/LaserScan[gz.msgs.LaserScan"],
                       parameters=[{"use_sim_time": True}])
    slam = LifecycleNode(package="slam_toolbox", executable="async_slam_toolbox_node", name="slam_toolbox",
                         output="screen", parameters=[os.path.join(slam_share, "config", "mapper_params_online_async.yaml"),
                                                         {"use_sim_time": True}], namespace="")
    configure = EmitEvent(event=ChangeState(lifecycle_node_matcher=matches_action(slam),
                                             transition_id=Transition.TRANSITION_CONFIGURE))
    activate = RegisterEventHandler(OnStateTransition(target_lifecycle_node=slam, start_state="configuring",
        goal_state="inactive", entities=[EmitEvent(event=ChangeState(lifecycle_node_matcher=matches_action(slam),
        transition_id=Transition.TRANSITION_ACTIVATE))]))
    guarded_sweep = TimerAction(period=20.0, actions=[Node(
        package="cach2cach_lab_automation", executable="mapping_sweep_controller", name="mapping_sweep_controller",
        output="screen", parameters=[{"use_sim_time": True, "enabled": True}], condition=IfCondition(sweep))])
    ultrasonic_range = Node(package="cach2cach_lab_automation", executable="ultrasonic_range.py",
                            name="front_ultrasonic_range", output="screen")
    safety_gate = Node(package="cach2cach_lab_automation", executable="ultrasonic_safety_gate.py",
                       name="ultrasonic_safety_gate", output="screen",
                       parameters=[{"use_sim_time": True, "block_on_stale_sensor": True}])
    return LaunchDescription([
        DeclareLaunchArgument("headless", default_value="false"),
        DeclareLaunchArgument("auto_sweep", default_value="false", description="Simulation only: drive guarded mapping sweep"),
        simulation, scan_bridge, ultrasonic_range, safety_gate, slam, configure, activate, guarded_sweep,
    ])
