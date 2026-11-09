# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target base_placement_optimizer::base_placement_optimizer
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${base_placement_optimizer_TARGETS}.
if(base_placement_optimizer_TARGETS AND NOT TARGET base_placement_optimizer::base_placement_optimizer)
  add_library(base_placement_optimizer::base_placement_optimizer INTERFACE IMPORTED)
  set_target_properties(base_placement_optimizer::base_placement_optimizer PROPERTIES
    INTERFACE_LINK_LIBRARIES "${base_placement_optimizer_TARGETS}")
endif()
