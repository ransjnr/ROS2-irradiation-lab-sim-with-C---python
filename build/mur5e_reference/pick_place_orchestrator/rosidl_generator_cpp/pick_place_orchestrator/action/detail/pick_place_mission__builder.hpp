// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pick_place_orchestrator:action/PickPlaceMission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pick_place_orchestrator/action/pick_place_mission.hpp"


#ifndef PICK_PLACE_ORCHESTRATOR__ACTION__DETAIL__PICK_PLACE_MISSION__BUILDER_HPP_
#define PICK_PLACE_ORCHESTRATOR__ACTION__DETAIL__PICK_PLACE_MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pick_place_orchestrator/action/detail/pick_place_mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pick_place_orchestrator
{

namespace action
{

namespace builder
{

class Init_PickPlaceMission_Goal_retreat_pose
{
public:
  explicit Init_PickPlaceMission_Goal_retreat_pose(::pick_place_orchestrator::action::PickPlaceMission_Goal & msg)
  : msg_(msg)
  {}
  ::pick_place_orchestrator::action::PickPlaceMission_Goal retreat_pose(::pick_place_orchestrator::action::PickPlaceMission_Goal::_retreat_pose_type arg)
  {
    msg_.retreat_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_Goal msg_;
};

class Init_PickPlaceMission_Goal_place_pose
{
public:
  explicit Init_PickPlaceMission_Goal_place_pose(::pick_place_orchestrator::action::PickPlaceMission_Goal & msg)
  : msg_(msg)
  {}
  Init_PickPlaceMission_Goal_retreat_pose place_pose(::pick_place_orchestrator::action::PickPlaceMission_Goal::_place_pose_type arg)
  {
    msg_.place_pose = std::move(arg);
    return Init_PickPlaceMission_Goal_retreat_pose(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_Goal msg_;
};

class Init_PickPlaceMission_Goal_pick_pose
{
public:
  Init_PickPlaceMission_Goal_pick_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickPlaceMission_Goal_place_pose pick_pose(::pick_place_orchestrator::action::PickPlaceMission_Goal::_pick_pose_type arg)
  {
    msg_.pick_pose = std::move(arg);
    return Init_PickPlaceMission_Goal_place_pose(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_place_orchestrator::action::PickPlaceMission_Goal>()
{
  return pick_place_orchestrator::action::builder::Init_PickPlaceMission_Goal_pick_pose();
}

}  // namespace pick_place_orchestrator


namespace pick_place_orchestrator
{

namespace action
{

namespace builder
{

class Init_PickPlaceMission_Result_failed_step_index
{
public:
  explicit Init_PickPlaceMission_Result_failed_step_index(::pick_place_orchestrator::action::PickPlaceMission_Result & msg)
  : msg_(msg)
  {}
  ::pick_place_orchestrator::action::PickPlaceMission_Result failed_step_index(::pick_place_orchestrator::action::PickPlaceMission_Result::_failed_step_index_type arg)
  {
    msg_.failed_step_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_Result msg_;
};

class Init_PickPlaceMission_Result_failure_reason
{
public:
  explicit Init_PickPlaceMission_Result_failure_reason(::pick_place_orchestrator::action::PickPlaceMission_Result & msg)
  : msg_(msg)
  {}
  Init_PickPlaceMission_Result_failed_step_index failure_reason(::pick_place_orchestrator::action::PickPlaceMission_Result::_failure_reason_type arg)
  {
    msg_.failure_reason = std::move(arg);
    return Init_PickPlaceMission_Result_failed_step_index(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_Result msg_;
};

class Init_PickPlaceMission_Result_success
{
public:
  Init_PickPlaceMission_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickPlaceMission_Result_failure_reason success(::pick_place_orchestrator::action::PickPlaceMission_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PickPlaceMission_Result_failure_reason(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_place_orchestrator::action::PickPlaceMission_Result>()
{
  return pick_place_orchestrator::action::builder::Init_PickPlaceMission_Result_success();
}

}  // namespace pick_place_orchestrator


namespace pick_place_orchestrator
{

namespace action
{

namespace builder
{

class Init_PickPlaceMission_Feedback_step_index
{
public:
  explicit Init_PickPlaceMission_Feedback_step_index(::pick_place_orchestrator::action::PickPlaceMission_Feedback & msg)
  : msg_(msg)
  {}
  ::pick_place_orchestrator::action::PickPlaceMission_Feedback step_index(::pick_place_orchestrator::action::PickPlaceMission_Feedback::_step_index_type arg)
  {
    msg_.step_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_Feedback msg_;
};

class Init_PickPlaceMission_Feedback_current_step
{
public:
  explicit Init_PickPlaceMission_Feedback_current_step(::pick_place_orchestrator::action::PickPlaceMission_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickPlaceMission_Feedback_step_index current_step(::pick_place_orchestrator::action::PickPlaceMission_Feedback::_current_step_type arg)
  {
    msg_.current_step = std::move(arg);
    return Init_PickPlaceMission_Feedback_step_index(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_Feedback msg_;
};

class Init_PickPlaceMission_Feedback_current_phase
{
public:
  Init_PickPlaceMission_Feedback_current_phase()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickPlaceMission_Feedback_current_step current_phase(::pick_place_orchestrator::action::PickPlaceMission_Feedback::_current_phase_type arg)
  {
    msg_.current_phase = std::move(arg);
    return Init_PickPlaceMission_Feedback_current_step(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_place_orchestrator::action::PickPlaceMission_Feedback>()
{
  return pick_place_orchestrator::action::builder::Init_PickPlaceMission_Feedback_current_phase();
}

}  // namespace pick_place_orchestrator


namespace pick_place_orchestrator
{

namespace action
{

namespace builder
{

class Init_PickPlaceMission_SendGoal_Request_goal
{
public:
  explicit Init_PickPlaceMission_SendGoal_Request_goal(::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request goal(::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request msg_;
};

class Init_PickPlaceMission_SendGoal_Request_goal_id
{
public:
  Init_PickPlaceMission_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickPlaceMission_SendGoal_Request_goal goal_id(::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PickPlaceMission_SendGoal_Request_goal(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request>()
{
  return pick_place_orchestrator::action::builder::Init_PickPlaceMission_SendGoal_Request_goal_id();
}

}  // namespace pick_place_orchestrator


namespace pick_place_orchestrator
{

namespace action
{

namespace builder
{

class Init_PickPlaceMission_SendGoal_Response_stamp
{
public:
  explicit Init_PickPlaceMission_SendGoal_Response_stamp(::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response stamp(::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response msg_;
};

class Init_PickPlaceMission_SendGoal_Response_accepted
{
public:
  Init_PickPlaceMission_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickPlaceMission_SendGoal_Response_stamp accepted(::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PickPlaceMission_SendGoal_Response_stamp(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response>()
{
  return pick_place_orchestrator::action::builder::Init_PickPlaceMission_SendGoal_Response_accepted();
}

}  // namespace pick_place_orchestrator


namespace pick_place_orchestrator
{

namespace action
{

namespace builder
{

class Init_PickPlaceMission_SendGoal_Event_response
{
public:
  explicit Init_PickPlaceMission_SendGoal_Event_response(::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event response(::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event msg_;
};

class Init_PickPlaceMission_SendGoal_Event_request
{
public:
  explicit Init_PickPlaceMission_SendGoal_Event_request(::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_PickPlaceMission_SendGoal_Event_response request(::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PickPlaceMission_SendGoal_Event_response(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event msg_;
};

class Init_PickPlaceMission_SendGoal_Event_info
{
public:
  Init_PickPlaceMission_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickPlaceMission_SendGoal_Event_request info(::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PickPlaceMission_SendGoal_Event_request(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event>()
{
  return pick_place_orchestrator::action::builder::Init_PickPlaceMission_SendGoal_Event_info();
}

}  // namespace pick_place_orchestrator


namespace pick_place_orchestrator
{

namespace action
{

namespace builder
{

class Init_PickPlaceMission_GetResult_Request_goal_id
{
public:
  Init_PickPlaceMission_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pick_place_orchestrator::action::PickPlaceMission_GetResult_Request goal_id(::pick_place_orchestrator::action::PickPlaceMission_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_place_orchestrator::action::PickPlaceMission_GetResult_Request>()
{
  return pick_place_orchestrator::action::builder::Init_PickPlaceMission_GetResult_Request_goal_id();
}

}  // namespace pick_place_orchestrator


namespace pick_place_orchestrator
{

namespace action
{

namespace builder
{

class Init_PickPlaceMission_GetResult_Response_result
{
public:
  explicit Init_PickPlaceMission_GetResult_Response_result(::pick_place_orchestrator::action::PickPlaceMission_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pick_place_orchestrator::action::PickPlaceMission_GetResult_Response result(::pick_place_orchestrator::action::PickPlaceMission_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_GetResult_Response msg_;
};

class Init_PickPlaceMission_GetResult_Response_status
{
public:
  Init_PickPlaceMission_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickPlaceMission_GetResult_Response_result status(::pick_place_orchestrator::action::PickPlaceMission_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PickPlaceMission_GetResult_Response_result(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_place_orchestrator::action::PickPlaceMission_GetResult_Response>()
{
  return pick_place_orchestrator::action::builder::Init_PickPlaceMission_GetResult_Response_status();
}

}  // namespace pick_place_orchestrator


namespace pick_place_orchestrator
{

namespace action
{

namespace builder
{

class Init_PickPlaceMission_GetResult_Event_response
{
public:
  explicit Init_PickPlaceMission_GetResult_Event_response(::pick_place_orchestrator::action::PickPlaceMission_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::pick_place_orchestrator::action::PickPlaceMission_GetResult_Event response(::pick_place_orchestrator::action::PickPlaceMission_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_GetResult_Event msg_;
};

class Init_PickPlaceMission_GetResult_Event_request
{
public:
  explicit Init_PickPlaceMission_GetResult_Event_request(::pick_place_orchestrator::action::PickPlaceMission_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_PickPlaceMission_GetResult_Event_response request(::pick_place_orchestrator::action::PickPlaceMission_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PickPlaceMission_GetResult_Event_response(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_GetResult_Event msg_;
};

class Init_PickPlaceMission_GetResult_Event_info
{
public:
  Init_PickPlaceMission_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickPlaceMission_GetResult_Event_request info(::pick_place_orchestrator::action::PickPlaceMission_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PickPlaceMission_GetResult_Event_request(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_place_orchestrator::action::PickPlaceMission_GetResult_Event>()
{
  return pick_place_orchestrator::action::builder::Init_PickPlaceMission_GetResult_Event_info();
}

}  // namespace pick_place_orchestrator


namespace pick_place_orchestrator
{

namespace action
{

namespace builder
{

class Init_PickPlaceMission_FeedbackMessage_feedback
{
public:
  explicit Init_PickPlaceMission_FeedbackMessage_feedback(::pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage feedback(::pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage msg_;
};

class Init_PickPlaceMission_FeedbackMessage_goal_id
{
public:
  Init_PickPlaceMission_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickPlaceMission_FeedbackMessage_feedback goal_id(::pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PickPlaceMission_FeedbackMessage_feedback(msg_);
  }

private:
  ::pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage>()
{
  return pick_place_orchestrator::action::builder::Init_PickPlaceMission_FeedbackMessage_goal_id();
}

}  // namespace pick_place_orchestrator

#endif  // PICK_PLACE_ORCHESTRATOR__ACTION__DETAIL__PICK_PLACE_MISSION__BUILDER_HPP_
