
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "base_placement_optimizer__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_Goal() -> *const std::ffi::c_void;
}

#[link(name = "base_placement_optimizer__rosidl_generator_c")]
extern "C" {
    fn base_placement_optimizer__action__OptimizePlacement_Goal__init(msg: *mut OptimizePlacement_Goal) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_Goal>, size: usize) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_Goal>);
    fn base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OptimizePlacement_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_Goal>) -> bool;
}

// Corresponds to base_placement_optimizer__action__OptimizePlacement_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OptimizePlacement_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_pose: geometry_msgs::msg::rmw::PoseStamped,

}



impl Default for OptimizePlacement_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_placement_optimizer__action__OptimizePlacement_Goal__init(&mut msg as *mut _) {
        panic!("Call to base_placement_optimizer__action__OptimizePlacement_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OptimizePlacement_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OptimizePlacement_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OptimizePlacement_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "base_placement_optimizer/action/OptimizePlacement_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_Goal() }
  }
}


#[link(name = "base_placement_optimizer__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_Result() -> *const std::ffi::c_void;
}

#[link(name = "base_placement_optimizer__rosidl_generator_c")]
extern "C" {
    fn base_placement_optimizer__action__OptimizePlacement_Result__init(msg: *mut OptimizePlacement_Result) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_Result>, size: usize) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_Result>);
    fn base_placement_optimizer__action__OptimizePlacement_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OptimizePlacement_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_Result>) -> bool;
}

// Corresponds to base_placement_optimizer__action__OptimizePlacement_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OptimizePlacement_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_reason: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manipulability_score: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path_distance: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub composite_score: f32,

}



impl Default for OptimizePlacement_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_placement_optimizer__action__OptimizePlacement_Result__init(&mut msg as *mut _) {
        panic!("Call to base_placement_optimizer__action__OptimizePlacement_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OptimizePlacement_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OptimizePlacement_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OptimizePlacement_Result where Self: Sized {
  const TYPE_NAME: &'static str = "base_placement_optimizer/action/OptimizePlacement_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_Result() }
  }
}


#[link(name = "base_placement_optimizer__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "base_placement_optimizer__rosidl_generator_c")]
extern "C" {
    fn base_placement_optimizer__action__OptimizePlacement_Feedback__init(msg: *mut OptimizePlacement_Feedback) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_Feedback>, size: usize) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_Feedback>);
    fn base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OptimizePlacement_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_Feedback>) -> bool;
}

// Corresponds to base_placement_optimizer__action__OptimizePlacement_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OptimizePlacement_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_phase: rosidl_runtime_rs::String,

}



impl Default for OptimizePlacement_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_placement_optimizer__action__OptimizePlacement_Feedback__init(&mut msg as *mut _) {
        panic!("Call to base_placement_optimizer__action__OptimizePlacement_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OptimizePlacement_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OptimizePlacement_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OptimizePlacement_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "base_placement_optimizer/action/OptimizePlacement_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_Feedback() }
  }
}


#[link(name = "base_placement_optimizer__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "base_placement_optimizer__rosidl_generator_c")]
extern "C" {
    fn base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__init(msg: *mut OptimizePlacement_FeedbackMessage) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_FeedbackMessage>, size: usize) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_FeedbackMessage>);
    fn base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OptimizePlacement_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_FeedbackMessage>) -> bool;
}

// Corresponds to base_placement_optimizer__action__OptimizePlacement_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OptimizePlacement_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::OptimizePlacement_Feedback,

}



impl Default for OptimizePlacement_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OptimizePlacement_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OptimizePlacement_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OptimizePlacement_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "base_placement_optimizer/action/OptimizePlacement_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_FeedbackMessage() }
  }
}




#[link(name = "base_placement_optimizer__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "base_placement_optimizer__rosidl_generator_c")]
extern "C" {
    fn base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__init(msg: *mut OptimizePlacement_SendGoal_Request) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_SendGoal_Request>, size: usize) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_SendGoal_Request>);
    fn base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OptimizePlacement_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_SendGoal_Request>) -> bool;
}

// Corresponds to base_placement_optimizer__action__OptimizePlacement_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OptimizePlacement_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::OptimizePlacement_Goal,

}



impl Default for OptimizePlacement_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OptimizePlacement_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OptimizePlacement_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OptimizePlacement_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "base_placement_optimizer/action/OptimizePlacement_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_SendGoal_Request() }
  }
}


#[link(name = "base_placement_optimizer__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "base_placement_optimizer__rosidl_generator_c")]
extern "C" {
    fn base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__init(msg: *mut OptimizePlacement_SendGoal_Response) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_SendGoal_Response>, size: usize) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_SendGoal_Response>);
    fn base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OptimizePlacement_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_SendGoal_Response>) -> bool;
}

// Corresponds to base_placement_optimizer__action__OptimizePlacement_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OptimizePlacement_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for OptimizePlacement_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OptimizePlacement_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OptimizePlacement_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OptimizePlacement_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "base_placement_optimizer/action/OptimizePlacement_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_SendGoal_Response() }
  }
}


#[link(name = "base_placement_optimizer__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "base_placement_optimizer__rosidl_generator_c")]
extern "C" {
    fn base_placement_optimizer__action__OptimizePlacement_GetResult_Request__init(msg: *mut OptimizePlacement_GetResult_Request) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_GetResult_Request>, size: usize) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_GetResult_Request>);
    fn base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OptimizePlacement_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_GetResult_Request>) -> bool;
}

// Corresponds to base_placement_optimizer__action__OptimizePlacement_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OptimizePlacement_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for OptimizePlacement_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_placement_optimizer__action__OptimizePlacement_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to base_placement_optimizer__action__OptimizePlacement_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OptimizePlacement_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OptimizePlacement_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OptimizePlacement_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "base_placement_optimizer/action/OptimizePlacement_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_GetResult_Request() }
  }
}


#[link(name = "base_placement_optimizer__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "base_placement_optimizer__rosidl_generator_c")]
extern "C" {
    fn base_placement_optimizer__action__OptimizePlacement_GetResult_Response__init(msg: *mut OptimizePlacement_GetResult_Response) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_GetResult_Response>, size: usize) -> bool;
    fn base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_GetResult_Response>);
    fn base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OptimizePlacement_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<OptimizePlacement_GetResult_Response>) -> bool;
}

// Corresponds to base_placement_optimizer__action__OptimizePlacement_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OptimizePlacement_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::OptimizePlacement_Result,

}



impl Default for OptimizePlacement_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_placement_optimizer__action__OptimizePlacement_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to base_placement_optimizer__action__OptimizePlacement_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OptimizePlacement_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OptimizePlacement_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OptimizePlacement_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "base_placement_optimizer/action/OptimizePlacement_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_placement_optimizer__action__OptimizePlacement_GetResult_Response() }
  }
}






#[link(name = "base_placement_optimizer__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__base_placement_optimizer__action__OptimizePlacement_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to base_placement_optimizer__action__OptimizePlacement_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct OptimizePlacement_SendGoal;

impl rosidl_runtime_rs::Service for OptimizePlacement_SendGoal {
    type Request = OptimizePlacement_SendGoal_Request;
    type Response = OptimizePlacement_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__base_placement_optimizer__action__OptimizePlacement_SendGoal() }
    }
}




#[link(name = "base_placement_optimizer__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__base_placement_optimizer__action__OptimizePlacement_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to base_placement_optimizer__action__OptimizePlacement_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct OptimizePlacement_GetResult;

impl rosidl_runtime_rs::Service for OptimizePlacement_GetResult {
    type Request = OptimizePlacement_GetResult_Request;
    type Response = OptimizePlacement_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__base_placement_optimizer__action__OptimizePlacement_GetResult() }
    }
}


