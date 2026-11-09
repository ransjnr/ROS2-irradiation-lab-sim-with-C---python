
FROM osrf/ros:jazzy-desktop

ENV DEBIAN_FRONTEND=noninteractive
ENV ROS_DISTRO=jazzy

RUN apt-get update && apt-get install -y \
    ros-jazzy-ros-gz \
    ros-jazzy-moveit \
    ros-jazzy-ros2-control \
    ros-jazzy-ros2-controllers \
    ros-jazzy-ur-robot-driver \
    ros-jazzy-ur-description \
    ros-jazzy-ur-moveit-config \
    ros-jazzy-gz-ros2-control \
    ros-jazzy-ur-simulation-gz \
    python3-colcon-common-extensions \
    python3-opencv \
    mesa-utils \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /root/cach2cach_ws

RUN echo "source /opt/ros/jazzy/setup.bash" >> /root/.bashrc

CMD ["/bin/bash"]
