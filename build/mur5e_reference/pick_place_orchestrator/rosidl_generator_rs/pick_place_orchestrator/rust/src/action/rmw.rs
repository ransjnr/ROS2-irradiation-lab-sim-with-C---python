
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "pick_place_orchestrator__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_Goal() -> *const std::ffi::c_void;
}

#[link(name = "pick_place_orchestrator__rosidl_generator_c")]
extern "C" {
    fn pick_place_orchestrator__action__PickPlaceMission_Goal__init(msg: *mut PickPlaceMission_Goal) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_Goal>, size: usize) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_Goal>);
    fn pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PickPlaceMission_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_Goal>) -> bool;
}

// Corresponds to pick_place_orchestrator__action__PickPlaceMission_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pick_pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub place_pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub retreat_pose: geometry_msgs::msg::rmw::PoseStamped,

}



impl Default for PickPlaceMission_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pick_place_orchestrator__action__PickPlaceMission_Goal__init(&mut msg as *mut _) {
        panic!("Call to pick_place_orchestrator__action__PickPlaceMission_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PickPlaceMission_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PickPlaceMission_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "pick_place_orchestrator/action/PickPlaceMission_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_Goal() }
  }
}


#[link(name = "pick_place_orchestrator__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_Result() -> *const std::ffi::c_void;
}

#[link(name = "pick_place_orchestrator__rosidl_generator_c")]
extern "C" {
    fn pick_place_orchestrator__action__PickPlaceMission_Result__init(msg: *mut PickPlaceMission_Result) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_Result>, size: usize) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_Result>);
    fn pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PickPlaceMission_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_Result>) -> bool;
}

// Corresponds to pick_place_orchestrator__action__PickPlaceMission_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub failure_reason: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub failed_step_index: i32,

}



impl Default for PickPlaceMission_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pick_place_orchestrator__action__PickPlaceMission_Result__init(&mut msg as *mut _) {
        panic!("Call to pick_place_orchestrator__action__PickPlaceMission_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PickPlaceMission_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PickPlaceMission_Result where Self: Sized {
  const TYPE_NAME: &'static str = "pick_place_orchestrator/action/PickPlaceMission_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_Result() }
  }
}


#[link(name = "pick_place_orchestrator__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "pick_place_orchestrator__rosidl_generator_c")]
extern "C" {
    fn pick_place_orchestrator__action__PickPlaceMission_Feedback__init(msg: *mut PickPlaceMission_Feedback) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_Feedback>, size: usize) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_Feedback>);
    fn pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PickPlaceMission_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_Feedback>) -> bool;
}

// Corresponds to pick_place_orchestrator__action__PickPlaceMission_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_phase: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_step: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub step_index: i32,

}



impl Default for PickPlaceMission_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pick_place_orchestrator__action__PickPlaceMission_Feedback__init(&mut msg as *mut _) {
        panic!("Call to pick_place_orchestrator__action__PickPlaceMission_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PickPlaceMission_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PickPlaceMission_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "pick_place_orchestrator/action/PickPlaceMission_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_Feedback() }
  }
}


#[link(name = "pick_place_orchestrator__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "pick_place_orchestrator__rosidl_generator_c")]
extern "C" {
    fn pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__init(msg: *mut PickPlaceMission_FeedbackMessage) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_FeedbackMessage>, size: usize) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_FeedbackMessage>);
    fn pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PickPlaceMission_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_FeedbackMessage>) -> bool;
}

// Corresponds to pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::PickPlaceMission_Feedback,

}



impl Default for PickPlaceMission_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PickPlaceMission_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PickPlaceMission_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "pick_place_orchestrator/action/PickPlaceMission_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage() }
  }
}




#[link(name = "pick_place_orchestrator__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "pick_place_orchestrator__rosidl_generator_c")]
extern "C" {
    fn pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__init(msg: *mut PickPlaceMission_SendGoal_Request) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_SendGoal_Request>, size: usize) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_SendGoal_Request>);
    fn pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PickPlaceMission_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_SendGoal_Request>) -> bool;
}

// Corresponds to pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::PickPlaceMission_Goal,

}



impl Default for PickPlaceMission_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PickPlaceMission_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PickPlaceMission_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pick_place_orchestrator/action/PickPlaceMission_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request() }
  }
}


#[link(name = "pick_place_orchestrator__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "pick_place_orchestrator__rosidl_generator_c")]
extern "C" {
    fn pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__init(msg: *mut PickPlaceMission_SendGoal_Response) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_SendGoal_Response>, size: usize) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_SendGoal_Response>);
    fn pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PickPlaceMission_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_SendGoal_Response>) -> bool;
}

// Corresponds to pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for PickPlaceMission_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PickPlaceMission_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PickPlaceMission_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pick_place_orchestrator/action/PickPlaceMission_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response() }
  }
}


#[link(name = "pick_place_orchestrator__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "pick_place_orchestrator__rosidl_generator_c")]
extern "C" {
    fn pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__init(msg: *mut PickPlaceMission_GetResult_Request) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_GetResult_Request>, size: usize) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_GetResult_Request>);
    fn pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PickPlaceMission_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_GetResult_Request>) -> bool;
}

// Corresponds to pick_place_orchestrator__action__PickPlaceMission_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for PickPlaceMission_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PickPlaceMission_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PickPlaceMission_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pick_place_orchestrator/action/PickPlaceMission_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_GetResult_Request() }
  }
}


#[link(name = "pick_place_orchestrator__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "pick_place_orchestrator__rosidl_generator_c")]
extern "C" {
    fn pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__init(msg: *mut PickPlaceMission_GetResult_Response) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_GetResult_Response>, size: usize) -> bool;
    fn pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_GetResult_Response>);
    fn pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PickPlaceMission_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PickPlaceMission_GetResult_Response>) -> bool;
}

// Corresponds to pick_place_orchestrator__action__PickPlaceMission_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PickPlaceMission_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::PickPlaceMission_Result,

}



impl Default for PickPlaceMission_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PickPlaceMission_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PickPlaceMission_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PickPlaceMission_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pick_place_orchestrator/action/PickPlaceMission_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pick_place_orchestrator__action__PickPlaceMission_GetResult_Response() }
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


