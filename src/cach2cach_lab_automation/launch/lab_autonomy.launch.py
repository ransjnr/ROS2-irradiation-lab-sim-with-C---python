"""Full simulation-only autonomy stack: lab world, Nav2, MoveIt, perception and gated executor."""

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, EmitEvent, ExecuteProcess, IncludeLaunchDescription, RegisterEventHandler, TimerAction
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
    nav_share = get_package_share_directory("mobile_manipulator_nav")
    moveit_share = get_package_share_directory("mobile_manipulator_moveit_config")
    orchestrator_share = get_package_share_directory("pick_place_orchestrator")
    headless = LaunchConfiguration("headless")
    motion = LaunchConfiguration("enable_motion")
    speed_scale = LaunchConfiguration("speed_scale")
    auto_mapping_sweep = LaunchConfiguration("auto_mapping_sweep")
    # Start our lab world directly. nav_bringup includes the upstream warehouse world,
    # so navigation is launched separately below.
    simulation = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(share, "launch", "irradiation_lab_simulation.launch.py")),
        launch_arguments={"headless": headless}.items())
    # Gazebo needs time to load gz_ros2_control before Nav2 requests TF.
    # SLAM Toolbox publishes /map and is the sole owner of the map -> odom
    # transform.  It must be active before Nav2 starts its costmaps.
    slam = LifecycleNode(
        package="slam_toolbox", executable="async_slam_toolbox_node",
        name="slam_toolbox", namespace="", output="screen",
        parameters=[os.path.join(share, "config", "slam_toolbox_online.yaml"),
                    {"use_sim_time": True}])
    configure_slam = TimerAction(period=15.0, actions=[EmitEvent(
        event=ChangeState(lifecycle_node_matcher=matches_action(slam),
                            transition_id=Transition.TRANSITION_CONFIGURE))])
    activate_slam = RegisterEventHandler(OnStateTransition(
        target_lifecycle_node=slam, start_state="configuring", goal_state="inactive",
        entities=[EmitEvent(event=ChangeState(lifecycle_node_matcher=matches_action(slam),
                                               transition_id=Transition.TRANSITION_ACTIVATE))]))
    # Build initial scan coverage before the pick/place batch sends Nav2 goals.
    # Its /cmd_vel output still passes through ultrasonic_safety_gate.
    mapping_sweep = TimerAction(period=18.0, actions=[Node(
        package="cach2cach_lab_automation", executable="mapping_sweep_controller",
        name="mapping_sweep_controller", output="screen",
        parameters=[{"use_sim_time": True, "enabled": True}],
        condition=IfCondition(auto_mapping_sweep))])
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
        launch_arguments={"enable_motion": motion, "autonomous_start": "true",
                          "speed_scale": speed_scale}.items())
    # Use the workspace source script until the existing install overlay has
    # been rebuilt.  The previous Node form made a missing stale-install
    # executable a fatal launch exception, which shut down the whole lab.
    source_script = os.path.join(
        os.path.dirname(os.path.realpath(__file__)), "..", "scripts", "autonomous_barcode_survey.py")
    survey = TimerAction(period=62.0, actions=[ExecuteProcess(
        cmd=["python3", source_script, "--ros-args", "-r", "__node:=autonomous_barcode_survey",
             "-p", "use_sim_time:=true"],
        name="autonomous_barcode_survey", output="screen")])
    batch_script = os.path.join(
        os.path.dirname(os.path.realpath(__file__)), "..", "scripts", "autonomous_batch_runner.py")
    batch_runner = TimerAction(period=64.0, actions=[ExecuteProcess(
        cmd=["python3", batch_script, "--ros-args", "-r", "__node:=autonomous_batch_runner",
             "-p", "use_sim_time:=true"], name="autonomous_batch_runner", output="screen")])
    # Legacy static-map localisation reference.  It is deliberately disabled:
    # SLAM Toolbox must be the only publisher of map -> odom while mapping.
    # map_to_odom = Node(package="tf2_ros", executable="static_transform_publisher",
    #                    arguments=["0", "0", "0", "0", "0", "0", "map", "odom"],
    #                    parameters=[{"use_sim_time": True}])
    return LaunchDescription([
        DeclareLaunchArgument("headless", default_value="false"),
        DeclareLaunchArgument("enable_motion", default_value="false", description="Simulation-only: permit approved task executor to send mission actions"),
        DeclareLaunchArgument("speed_scale", default_value="0.65", description="Base speed fraction: 0.25 (slow) to 1.0 (configured maximum)"),
        DeclareLaunchArgument("auto_mapping_sweep", default_value="true", description="Simulation only: collect SLAM coverage before pick/place missions"),
        simulation, slam, configure_slam, activate_slam, navigation, moveit, orchestrator,
        perception, mapping_sweep, survey, batch_runner,
    ])
