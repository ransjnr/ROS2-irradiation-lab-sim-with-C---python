// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pick_place_orchestrator:action/PickPlaceMission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pick_place_orchestrator/action/pick_place_mission.hpp"


#ifndef PICK_PLACE_ORCHESTRATOR__ACTION__DETAIL__PICK_PLACE_MISSION__TRAITS_HPP_
#define PICK_PLACE_ORCHESTRATOR__ACTION__DETAIL__PICK_PLACE_MISSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pick_place_orchestrator/action/detail/pick_place_mission__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pick_pose'
// Member 'place_pose'
// Member 'retreat_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace pick_place_orchestrator
{

namespace action
{

inline void to_flow_style_yaml(
  const PickPlaceMission_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: pick_pose
  {
    out << "pick_pose: ";
    to_flow_style_yaml(msg.pick_pose, out);
    out << ", ";
  }

  // member: place_pose
  {
    out << "place_pose: ";
    to_flow_style_yaml(msg.place_pose, out);
    out << ", ";
  }

  // member: retreat_pose
  {
    out << "retreat_pose: ";
    to_flow_style_yaml(msg.retreat_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickPlaceMission_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pick_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pick_pose:\n";
    to_block_style_yaml(msg.pick_pose, out, indentation + 2);
  }

  // member: place_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "place_pose:\n";
    to_block_style_yaml(msg.place_pose, out, indentation + 2);
  }

  // member: retreat_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "retreat_pose:\n";
    to_block_style_yaml(msg.retreat_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickPlaceMission_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pick_place_orchestrator

namespace rosidl_generator_traits
{

[[deprecated("use pick_place_orchestrator::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pick_place_orchestrator::action::PickPlaceMission_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  pick_place_orchestrator::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pick_place_orchestrator::action::to_yaml() instead")]]
inline std::string to_yaml(const pick_place_orchestrator::action::PickPlaceMission_Goal & msg)
{
  return pick_place_orchestrator::action::to_yaml(msg);
}

template<>
inline const char * data_type<pick_place_orchestrator::action::PickPlaceMission_Goal>()
{
  return "pick_place_orchestrator::action::PickPlaceMission_Goal";
}

template<>
inline const char * name<pick_place_orchestrator::action::PickPlaceMission_Goal>()
{
  return "pick_place_orchestrator/action/PickPlaceMission_Goal";
}

template<>
struct has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<pick_place_orchestrator::action::PickPlaceMission_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pick_place_orchestrator
{

namespace action
{

inline void to_flow_style_yaml(
  const PickPlaceMission_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: failure_reason
  {
    out << "failure_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.failure_reason, out);
    out << ", ";
  }

  // member: failed_step_index
  {
    out << "failed_step_index: ";
    rosidl_generator_traits::value_to_yaml(msg.failed_step_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickPlaceMission_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: failure_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failure_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.failure_reason, out);
    out << "\n";
  }

  // member: failed_step_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failed_step_index: ";
    rosidl_generator_traits::value_to_yaml(msg.failed_step_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickPlaceMission_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pick_place_orchestrator

namespace rosidl_generator_traits
{

[[deprecated("use pick_place_orchestrator::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pick_place_orchestrator::action::PickPlaceMission_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  pick_place_orchestrator::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pick_place_orchestrator::action::to_yaml() instead")]]
inline std::string to_yaml(const pick_place_orchestrator::action::PickPlaceMission_Result & msg)
{
  return pick_place_orchestrator::action::to_yaml(msg);
}

template<>
inline const char * data_type<pick_place_orchestrator::action::PickPlaceMission_Result>()
{
  return "pick_place_orchestrator::action::PickPlaceMission_Result";
}

template<>
inline const char * name<pick_place_orchestrator::action::PickPlaceMission_Result>()
{
  return "pick_place_orchestrator/action/PickPlaceMission_Result";
}

template<>
struct has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pick_place_orchestrator::action::PickPlaceMission_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pick_place_orchestrator
{

namespace action
{

inline void to_flow_style_yaml(
  const PickPlaceMission_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_phase
  {
    out << "current_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.current_phase, out);
    out << ", ";
  }

  // member: current_step
  {
    out << "current_step: ";
    rosidl_generator_traits::value_to_yaml(msg.current_step, out);
    out << ", ";
  }

  // member: step_index
  {
    out << "step_index: ";
    rosidl_generator_traits::value_to_yaml(msg.step_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickPlaceMission_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.current_phase, out);
    out << "\n";
  }

  // member: current_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_step: ";
    rosidl_generator_traits::value_to_yaml(msg.current_step, out);
    out << "\n";
  }

  // member: step_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_index: ";
    rosidl_generator_traits::value_to_yaml(msg.step_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickPlaceMission_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pick_place_orchestrator

namespace rosidl_generator_traits
{

[[deprecated("use pick_place_orchestrator::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pick_place_orchestrator::action::PickPlaceMission_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  pick_place_orchestrator::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pick_place_orchestrator::action::to_yaml() instead")]]
inline std::string to_yaml(const pick_place_orchestrator::action::PickPlaceMission_Feedback & msg)
{
  return pick_place_orchestrator::action::to_yaml(msg);
}

template<>
inline const char * data_type<pick_place_orchestrator::action::PickPlaceMission_Feedback>()
{
  return "pick_place_orchestrator::action::PickPlaceMission_Feedback";
}

template<>
inline const char * name<pick_place_orchestrator::action::PickPlaceMission_Feedback>()
{
  return "pick_place_orchestrator/action/PickPlaceMission_Feedback";
}

template<>
struct has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pick_place_orchestrator::action::PickPlaceMission_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "pick_place_orchestrator/action/detail/pick_place_mission__traits.hpp"

namespace pick_place_orchestrator
{

namespace action
{

inline void to_flow_style_yaml(
  const PickPlaceMission_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickPlaceMission_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickPlaceMission_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pick_place_orchestrator

namespace rosidl_generator_traits
{

[[deprecated("use pick_place_orchestrator::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pick_place_orchestrator::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pick_place_orchestrator::action::to_yaml() instead")]]
inline std::string to_yaml(const pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request & msg)
{
  return pick_place_orchestrator::action::to_yaml(msg);
}

template<>
inline const char * data_type<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request>()
{
  return "pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request";
}

template<>
inline const char * name<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request>()
{
  return "pick_place_orchestrator/action/PickPlaceMission_SendGoal_Request";
}

template<>
struct has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace pick_place_orchestrator
{

namespace action
{

inline void to_flow_style_yaml(
  const PickPlaceMission_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickPlaceMission_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickPlaceMission_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pick_place_orchestrator

namespace rosidl_generator_traits
{

[[deprecated("use pick_place_orchestrator::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pick_place_orchestrator::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pick_place_orchestrator::action::to_yaml() instead")]]
inline std::string to_yaml(const pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response & msg)
{
  return pick_place_orchestrator::action::to_yaml(msg);
}

template<>
inline const char * data_type<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response>()
{
  return "pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response";
}

template<>
inline const char * name<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response>()
{
  return "pick_place_orchestrator/action/PickPlaceMission_SendGoal_Response";
}

template<>
struct has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace pick_place_orchestrator
{

namespace action
{

inline void to_flow_style_yaml(
  const PickPlaceMission_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickPlaceMission_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickPlaceMission_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pick_place_orchestrator

namespace rosidl_generator_traits
{

[[deprecated("use pick_place_orchestrator::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  pick_place_orchestrator::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pick_place_orchestrator::action::to_yaml() instead")]]
inline std::string to_yaml(const pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event & msg)
{
  return pick_place_orchestrator::action::to_yaml(msg);
}

template<>
inline const char * data_type<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event>()
{
  return "pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event";
}

template<>
inline const char * name<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event>()
{
  return "pick_place_orchestrator/action/PickPlaceMission_SendGoal_Event";
}

template<>
struct has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request>::value && has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pick_place_orchestrator::action::PickPlaceMission_SendGoal>()
{
  return "pick_place_orchestrator::action::PickPlaceMission_SendGoal";
}

template<>
inline const char * name<pick_place_orchestrator::action::PickPlaceMission_SendGoal>()
{
  return "pick_place_orchestrator/action/PickPlaceMission_SendGoal";
}

template<>
struct has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request>::value &&
    has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request>::value &&
    has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<pick_place_orchestrator::action::PickPlaceMission_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace pick_place_orchestrator
{

namespace action
{

inline void to_flow_style_yaml(
  const PickPlaceMission_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickPlaceMission_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickPlaceMission_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pick_place_orchestrator

namespace rosidl_generator_traits
{

[[deprecated("use pick_place_orchestrator::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pick_place_orchestrator::action::PickPlaceMission_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pick_place_orchestrator::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pick_place_orchestrator::action::to_yaml() instead")]]
inline std::string to_yaml(const pick_place_orchestrator::action::PickPlaceMission_GetResult_Request & msg)
{
  return pick_place_orchestrator::action::to_yaml(msg);
}

template<>
inline const char * data_type<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request>()
{
  return "pick_place_orchestrator::action::PickPlaceMission_GetResult_Request";
}

template<>
inline const char * name<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request>()
{
  return "pick_place_orchestrator/action/PickPlaceMission_GetResult_Request";
}

template<>
struct has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "pick_place_orchestrator/action/detail/pick_place_mission__traits.hpp"

namespace pick_place_orchestrator
{

namespace action
{

inline void to_flow_style_yaml(
  const PickPlaceMission_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickPlaceMission_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickPlaceMission_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pick_place_orchestrator

namespace rosidl_generator_traits
{

[[deprecated("use pick_place_orchestrator::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pick_place_orchestrator::action::PickPlaceMission_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pick_place_orchestrator::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pick_place_orchestrator::action::to_yaml() instead")]]
inline std::string to_yaml(const pick_place_orchestrator::action::PickPlaceMission_GetResult_Response & msg)
{
  return pick_place_orchestrator::action::to_yaml(msg);
}

template<>
inline const char * data_type<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response>()
{
  return "pick_place_orchestrator::action::PickPlaceMission_GetResult_Response";
}

template<>
inline const char * name<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response>()
{
  return "pick_place_orchestrator/action/PickPlaceMission_GetResult_Response";
}

template<>
struct has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_Result>::value> {};

template<>
struct has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_Result>::value> {};

template<>
struct is_message<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace pick_place_orchestrator
{

namespace action
{

inline void to_flow_style_yaml(
  const PickPlaceMission_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickPlaceMission_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickPlaceMission_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pick_place_orchestrator

namespace rosidl_generator_traits
{

[[deprecated("use pick_place_orchestrator::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pick_place_orchestrator::action::PickPlaceMission_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  pick_place_orchestrator::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pick_place_orchestrator::action::to_yaml() instead")]]
inline std::string to_yaml(const pick_place_orchestrator::action::PickPlaceMission_GetResult_Event & msg)
{
  return pick_place_orchestrator::action::to_yaml(msg);
}

template<>
inline const char * data_type<pick_place_orchestrator::action::PickPlaceMission_GetResult_Event>()
{
  return "pick_place_orchestrator::action::PickPlaceMission_GetResult_Event";
}

template<>
inline const char * name<pick_place_orchestrator::action::PickPlaceMission_GetResult_Event>()
{
  return "pick_place_orchestrator/action/PickPlaceMission_GetResult_Event";
}

template<>
struct has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request>::value && has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<pick_place_orchestrator::action::PickPlaceMission_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pick_place_orchestrator::action::PickPlaceMission_GetResult>()
{
  return "pick_place_orchestrator::action::PickPlaceMission_GetResult";
}

template<>
inline const char * name<pick_place_orchestrator::action::PickPlaceMission_GetResult>()
{
  return "pick_place_orchestrator/action/PickPlaceMission_GetResult";
}

template<>
struct has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request>::value &&
    has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request>::value &&
    has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response>::value
  >
{
};

template<>
struct is_service<pick_place_orchestrator::action::PickPlaceMission_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "pick_place_orchestrator/action/detail/pick_place_mission__traits.hpp"

namespace pick_place_orchestrator
{

namespace action
{

inline void to_flow_style_yaml(
  const PickPlaceMission_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickPlaceMission_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickPlaceMission_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pick_place_orchestrator

namespace rosidl_generator_traits
{

[[deprecated("use pick_place_orchestrator::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  pick_place_orchestrator::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pick_place_orchestrator::action::to_yaml() instead")]]
inline std::string to_yaml(const pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage & msg)
{
  return pick_place_orchestrator::action::to_yaml(msg);
}

template<>
inline const char * data_type<pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage>()
{
  return "pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage";
}

template<>
inline const char * name<pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage>()
{
  return "pick_place_orchestrator/action/PickPlaceMission_FeedbackMessage";
}

template<>
struct has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<pick_place_orchestrator::action::PickPlaceMission_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<pick_place_orchestrator::action::PickPlaceMission_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<pick_place_orchestrator::action::PickPlaceMission>
  : std::true_type
{
};

template<>
struct is_action_goal<pick_place_orchestrator::action::PickPlaceMission_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<pick_place_orchestrator::action::PickPlaceMission_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<pick_place_orchestrator::action::PickPlaceMission_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PICK_PLACE_ORCHESTRATOR__ACTION__DETAIL__PICK_PLACE_MISSION__TRAITS_HPP_
