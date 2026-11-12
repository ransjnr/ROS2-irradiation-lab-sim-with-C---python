cmake_minimum_required(VERSION 3.16)
project(cach2cach_lab_automation)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(pick_place_orchestrator REQUIRED)

add_executable(sample_mission_supervisor src/sample_mission_supervisor.cpp)
ament_target_dependencies(sample_mission_supervisor rclcpp std_msgs)

add_executable(approved_task_executor src/approved_task_executor.cpp)
ament_target_dependencies(approved_task_executor rclcpp rclcpp_action std_msgs geometry_msgs pick_place_orchestrator)

add_executable(mapping_sweep_controller src/mapping_sweep_controller.cpp)
ament_target_dependencies(mapping_sweep_controller rclcpp geometry_msgs)

install(TARGETS sample_mission_supervisor approved_task_executor mapping_sweep_controller DESTINATION lib/${PROJECT_NAME})
# Python ROS executables, including the local-network phone controller.
install(PROGRAMS scripts/barcode_detector.py scripts/sample_pose_estimator.py scripts/control_panel.py scripts/phone_control_server.py scripts/autonomous_barcode_survey.py scripts/autonomous_batch_runner.py scripts/ultrasonic_range.py scripts/ultrasonic_safety_gate.py scripts/vision_segmentation.py scripts/vision_dashboard.py scripts/generate_barcode_labels.py DESTINATION lib/${PROJECT_NAME})
install(DIRECTORY config launch worlds media web DESTINATION share/${PROJECT_NAME})
# Gazebo resolves texture paths relative to the world file.  Keep a copy next
# to the installed world as well as in the package media directory.
install(DIRECTORY media DESTINATION share/${PROJECT_NAME}/worlds)

ament_package()
