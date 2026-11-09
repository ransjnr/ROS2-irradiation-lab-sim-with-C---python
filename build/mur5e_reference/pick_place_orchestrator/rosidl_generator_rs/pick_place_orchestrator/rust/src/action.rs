
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to pick_place_orchestrator__action__PickPlaceMission_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pick_pose: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub place_pose: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub retreat_pose: geometry_msgs::msg::PoseStamped,

}



impl Default for PickPlaceMission_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PickPlaceMission_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_Goal {
  type RmwMsg = super::action::rmw::PickPlaceMission_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pick_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.pick_pose)).into_owned(),
        place_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.place_pose)).into_owned(),
        retreat_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.retreat_pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pick_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pick_pose)).into_owned(),
        place_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.place_pose)).into_owned(),
        retreat_pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.retreat_pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pick_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.pick_pose),
      place_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.place_pose),
      retreat_pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.retreat_pose),
    }
  }
}


// Corresponds to pick_place_orchestrator__action__PickPlaceMission_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub failure_reason: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub failed_step_index: i32,

}



impl Default for PickPlaceMission_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PickPlaceMission_Result::default())
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_Result {
  type RmwMsg = super::action::rmw::PickPlaceMission_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        failure_reason: msg.failure_reason.as_str().into(),
        failed_step_index: msg.failed_step_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        failure_reason: msg.failure_reason.as_str().into(),
      failed_step_index: msg.failed_step_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      failure_reason: msg.failure_reason.to_string(),
      failed_step_index: msg.failed_step_index,
    }
  }
}


// Corresponds to pick_place_orchestrator__action__PickPlaceMission_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_phase: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_step: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub step_index: i32,

}



impl Default for PickPlaceMission_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PickPlaceMission_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_Feedback {
  type RmwMsg = super::action::rmw::PickPlaceMission_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_phase: msg.current_phase.as_str().into(),
        current_step: msg.current_step.as_str().into(),
        step_index: msg.step_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_phase: msg.current_phase.as_str().into(),
        current_step: msg.current_step.as_str().into(),
      step_index: msg.step_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_phase: msg.current_phase.to_string(),
      current_step: msg.current_step.to_string(),
      step_index: msg.step_index,
    }
  }
}


// Corresponds to pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::PickPlaceMission_Feedback,

}



impl Default for PickPlaceMission_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PickPlaceMission_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_FeedbackMessage {
  type RmwMsg = super::action::rmw::PickPlaceMission_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::PickPlaceMission_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::PickPlaceMission_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::PickPlaceMission_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::PickPlaceMission_Goal,

}



impl Default for PickPlaceMission_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PickPlaceMission_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_SendGoal_Request {
  type RmwMsg = super::action::rmw::PickPlaceMission_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::PickPlaceMission_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::PickPlaceMission_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::PickPlaceMission_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for PickPlaceMission_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PickPlaceMission_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_SendGoal_Response {
  type RmwMsg = super::action::rmw::PickPlaceMission_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to pick_place_orchestrator__action__PickPlaceMission_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for PickPlaceMission_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PickPlaceMission_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_GetResult_Request {
  type RmwMsg = super::action::rmw::PickPlaceMission_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to pick_place_orchestrator__action__PickPlaceMission_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::PickPlaceMission_Result,

}



impl Default for PickPlaceMission_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::PickPlaceMission_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_GetResult_Response {
  type RmwMsg = super::action::rmw::PickPlaceMission_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::PickPlaceMission_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::PickPlaceMission_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::PickPlaceMission_Result::from_rmw_message(msg.result),
    }
  }
}






#[link(name = "pick_place_orchestrator__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to pick_place_orchestrator__action__PickPlaceMission_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct PickPlaceMission_SendGoal;

impl rosidl_runtime_rs::Service for PickPlaceMission_SendGoal {
    type Request = PickPlaceMission_SendGoal_Request;
    type Response = PickPlaceMission_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_SendGoal() }
    }
}




#[link(name = "pick_place_orchestrator__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to pick_place_orchestrator__action__PickPlaceMission_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct PickPlaceMission_GetResult;

impl rosidl_runtime_rs::Service for PickPlaceMission_GetResult {
    type Request = PickPlaceMission_GetResult_Request;
    type Response = PickPlaceMission_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_GetResult() }
    }
}






#[link(name = "pick_place_orchestrator__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__pick_place_orchestrator__action__PickPlaceMission() -> *const std::ffi::c_void;
}

// Corresponds to pick_place_orchestrator__action__PickPlaceMission
#[allow(missing_docs, non_camel_case_types)]
pub struct PickPlaceMission;

impl rosidl_runtime_rs::Action for PickPlaceMission {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = PickPlaceMission_Goal;

  /// The result message defined in the action definition.
  type Result = PickPlaceMission_Result;

  /// The feedback message defined in the action definition.
  type Feedback = PickPlaceMission_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::PickPlaceMission_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::PickPlaceMission_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::PickPlaceMission_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__pick_place_orchestrator__action__PickPlaceMission() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::PickPlaceMission_Goal,
  ) -> super::action::rmw::PickPlaceMission_SendGoal_Request {
   super::action::rmw::PickPlaceMission_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::PickPlaceMission_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::PickPlaceMission_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::PickPlaceMission_SendGoal_Response {
   super::action::rmw::PickPlaceMission_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::PickPlaceMission_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::PickPlaceMission_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::PickPlaceMission_Feedback,
  ) -> super::action::rmw::PickPlaceMission_FeedbackMessage {
    let mut message = super::action::rmw::PickPlaceMission_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::PickPlaceMission_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::PickPlaceMission_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::PickPlaceMission_GetResult_Request {
   super::action::rmw::PickPlaceMission_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::PickPlaceMission_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::PickPlaceMission_Result,
  ) -> super::action::rmw::PickPlaceMission_GetResult_Response {
   super::action::rmw::PickPlaceMission_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::PickPlaceMission_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::PickPlaceMission_Result,
  ) {
    (response.status, response.result)
  }
}


