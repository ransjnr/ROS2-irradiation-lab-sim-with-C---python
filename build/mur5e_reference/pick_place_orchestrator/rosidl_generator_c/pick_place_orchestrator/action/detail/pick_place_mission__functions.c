// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pick_place_orchestrator:action/PickPlaceMission.idl
// generated code does not contain a copyright notice
#include "pick_place_orchestrator/action/detail/pick_place_mission__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pick_pose`
// Member `place_pose`
// Member `retreat_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
pick_place_orchestrator__action__PickPlaceMission_Goal__init(pick_place_orchestrator__action__PickPlaceMission_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // pick_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pick_pose)) {
    pick_place_orchestrator__action__PickPlaceMission_Goal__fini(msg);
    return false;
  }
  // place_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->place_pose)) {
    pick_place_orchestrator__action__PickPlaceMission_Goal__fini(msg);
    return false;
  }
  // retreat_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->retreat_pose)) {
    pick_place_orchestrator__action__PickPlaceMission_Goal__fini(msg);
    return false;
  }
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_Goal__fini(pick_place_orchestrator__action__PickPlaceMission_Goal * msg)
{
  if (!msg) {
    return;
  }
  // pick_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pick_pose);
  // place_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->place_pose);
  // retreat_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->retreat_pose);
}

bool
pick_place_orchestrator__action__PickPlaceMission_Goal__are_equal(const pick_place_orchestrator__action__PickPlaceMission_Goal * lhs, const pick_place_orchestrator__action__PickPlaceMission_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pick_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pick_pose), &(rhs->pick_pose)))
  {
    return false;
  }
  // place_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->place_pose), &(rhs->place_pose)))
  {
    return false;
  }
  // retreat_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->retreat_pose), &(rhs->retreat_pose)))
  {
    return false;
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_Goal__copy(
  const pick_place_orchestrator__action__PickPlaceMission_Goal * input,
  pick_place_orchestrator__action__PickPlaceMission_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // pick_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pick_pose), &(output->pick_pose)))
  {
    return false;
  }
  // place_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->place_pose), &(output->place_pose)))
  {
    return false;
  }
  // retreat_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->retreat_pose), &(output->retreat_pose)))
  {
    return false;
  }
  return true;
}

pick_place_orchestrator__action__PickPlaceMission_Goal *
pick_place_orchestrator__action__PickPlaceMission_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_Goal * msg = (pick_place_orchestrator__action__PickPlaceMission_Goal *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_place_orchestrator__action__PickPlaceMission_Goal));
  bool success = pick_place_orchestrator__action__PickPlaceMission_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_place_orchestrator__action__PickPlaceMission_Goal__destroy(pick_place_orchestrator__action__PickPlaceMission_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_place_orchestrator__action__PickPlaceMission_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__init(pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_Goal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_Goal)) {
      return false;
    }
    data = (pick_place_orchestrator__action__PickPlaceMission_Goal *)allocator.zero_allocate(size, sizeof(pick_place_orchestrator__action__PickPlaceMission_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_place_orchestrator__action__PickPlaceMission_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_place_orchestrator__action__PickPlaceMission_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__fini(pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pick_place_orchestrator__action__PickPlaceMission_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence *
pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence * array = (pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__destroy(pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__are_equal(const pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence * lhs, const pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence__copy(
  const pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence * input,
  pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_Goal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_place_orchestrator__action__PickPlaceMission_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_place_orchestrator__action__PickPlaceMission_Goal * data =
      (pick_place_orchestrator__action__PickPlaceMission_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_place_orchestrator__action__PickPlaceMission_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_place_orchestrator__action__PickPlaceMission_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `failure_reason`
#include "rosidl_runtime_c/string_functions.h"

bool
pick_place_orchestrator__action__PickPlaceMission_Result__init(pick_place_orchestrator__action__PickPlaceMission_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // failure_reason
  if (!rosidl_runtime_c__String__init(&msg->failure_reason)) {
    pick_place_orchestrator__action__PickPlaceMission_Result__fini(msg);
    return false;
  }
  // failed_step_index
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_Result__fini(pick_place_orchestrator__action__PickPlaceMission_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // failure_reason
  rosidl_runtime_c__String__fini(&msg->failure_reason);
  // failed_step_index
}

bool
pick_place_orchestrator__action__PickPlaceMission_Result__are_equal(const pick_place_orchestrator__action__PickPlaceMission_Result * lhs, const pick_place_orchestrator__action__PickPlaceMission_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // failure_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->failure_reason), &(rhs->failure_reason)))
  {
    return false;
  }
  // failed_step_index
  if (lhs->failed_step_index != rhs->failed_step_index) {
    return false;
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_Result__copy(
  const pick_place_orchestrator__action__PickPlaceMission_Result * input,
  pick_place_orchestrator__action__PickPlaceMission_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // failure_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->failure_reason), &(output->failure_reason)))
  {
    return false;
  }
  // failed_step_index
  output->failed_step_index = input->failed_step_index;
  return true;
}

pick_place_orchestrator__action__PickPlaceMission_Result *
pick_place_orchestrator__action__PickPlaceMission_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_Result * msg = (pick_place_orchestrator__action__PickPlaceMission_Result *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_place_orchestrator__action__PickPlaceMission_Result));
  bool success = pick_place_orchestrator__action__PickPlaceMission_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_place_orchestrator__action__PickPlaceMission_Result__destroy(pick_place_orchestrator__action__PickPlaceMission_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_place_orchestrator__action__PickPlaceMission_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__init(pick_place_orchestrator__action__PickPlaceMission_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_Result * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_Result)) {
      return false;
    }
    data = (pick_place_orchestrator__action__PickPlaceMission_Result *)allocator.zero_allocate(size, sizeof(pick_place_orchestrator__action__PickPlaceMission_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_place_orchestrator__action__PickPlaceMission_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_place_orchestrator__action__PickPlaceMission_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__fini(pick_place_orchestrator__action__PickPlaceMission_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pick_place_orchestrator__action__PickPlaceMission_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pick_place_orchestrator__action__PickPlaceMission_Result__Sequence *
pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_Result__Sequence * array = (pick_place_orchestrator__action__PickPlaceMission_Result__Sequence *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__destroy(pick_place_orchestrator__action__PickPlaceMission_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__are_equal(const pick_place_orchestrator__action__PickPlaceMission_Result__Sequence * lhs, const pick_place_orchestrator__action__PickPlaceMission_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_Result__Sequence__copy(
  const pick_place_orchestrator__action__PickPlaceMission_Result__Sequence * input,
  pick_place_orchestrator__action__PickPlaceMission_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_Result)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_place_orchestrator__action__PickPlaceMission_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_place_orchestrator__action__PickPlaceMission_Result * data =
      (pick_place_orchestrator__action__PickPlaceMission_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_place_orchestrator__action__PickPlaceMission_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_place_orchestrator__action__PickPlaceMission_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_phase`
// Member `current_step`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
pick_place_orchestrator__action__PickPlaceMission_Feedback__init(pick_place_orchestrator__action__PickPlaceMission_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__init(&msg->current_phase)) {
    pick_place_orchestrator__action__PickPlaceMission_Feedback__fini(msg);
    return false;
  }
  // current_step
  if (!rosidl_runtime_c__String__init(&msg->current_step)) {
    pick_place_orchestrator__action__PickPlaceMission_Feedback__fini(msg);
    return false;
  }
  // step_index
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_Feedback__fini(pick_place_orchestrator__action__PickPlaceMission_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_phase
  rosidl_runtime_c__String__fini(&msg->current_phase);
  // current_step
  rosidl_runtime_c__String__fini(&msg->current_step);
  // step_index
}

bool
pick_place_orchestrator__action__PickPlaceMission_Feedback__are_equal(const pick_place_orchestrator__action__PickPlaceMission_Feedback * lhs, const pick_place_orchestrator__action__PickPlaceMission_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_phase), &(rhs->current_phase)))
  {
    return false;
  }
  // current_step
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_step), &(rhs->current_step)))
  {
    return false;
  }
  // step_index
  if (lhs->step_index != rhs->step_index) {
    return false;
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_Feedback__copy(
  const pick_place_orchestrator__action__PickPlaceMission_Feedback * input,
  pick_place_orchestrator__action__PickPlaceMission_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__copy(
      &(input->current_phase), &(output->current_phase)))
  {
    return false;
  }
  // current_step
  if (!rosidl_runtime_c__String__copy(
      &(input->current_step), &(output->current_step)))
  {
    return false;
  }
  // step_index
  output->step_index = input->step_index;
  return true;
}

pick_place_orchestrator__action__PickPlaceMission_Feedback *
pick_place_orchestrator__action__PickPlaceMission_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_Feedback * msg = (pick_place_orchestrator__action__PickPlaceMission_Feedback *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_place_orchestrator__action__PickPlaceMission_Feedback));
  bool success = pick_place_orchestrator__action__PickPlaceMission_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_place_orchestrator__action__PickPlaceMission_Feedback__destroy(pick_place_orchestrator__action__PickPlaceMission_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_place_orchestrator__action__PickPlaceMission_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__init(pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_Feedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_Feedback)) {
      return false;
    }
    data = (pick_place_orchestrator__action__PickPlaceMission_Feedback *)allocator.zero_allocate(size, sizeof(pick_place_orchestrator__action__PickPlaceMission_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_place_orchestrator__action__PickPlaceMission_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_place_orchestrator__action__PickPlaceMission_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__fini(pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pick_place_orchestrator__action__PickPlaceMission_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence *
pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence * array = (pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__destroy(pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__are_equal(const pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence * lhs, const pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence__copy(
  const pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence * input,
  pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_Feedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_place_orchestrator__action__PickPlaceMission_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_place_orchestrator__action__PickPlaceMission_Feedback * data =
      (pick_place_orchestrator__action__PickPlaceMission_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_place_orchestrator__action__PickPlaceMission_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_place_orchestrator__action__PickPlaceMission_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "pick_place_orchestrator/action/detail/pick_place_mission__functions.h"

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__init(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!pick_place_orchestrator__action__PickPlaceMission_Goal__init(&msg->goal)) {
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__fini(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  pick_place_orchestrator__action__PickPlaceMission_Goal__fini(&msg->goal);
}

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__are_equal(const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request * lhs, const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!pick_place_orchestrator__action__PickPlaceMission_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__copy(
  const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request * input,
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!pick_place_orchestrator__action__PickPlaceMission_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request *
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request * msg = (pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request));
  bool success = pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__destroy(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__init(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request)) {
      return false;
    }
    data = (pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request *)allocator.zero_allocate(size, sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__fini(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence *
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence * array = (pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__destroy(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__are_equal(const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence * lhs, const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__copy(
  const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence * input,
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request * data =
      (pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__init(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__fini(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__are_equal(const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response * lhs, const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__copy(
  const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response * input,
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response *
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response * msg = (pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response));
  bool success = pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__destroy(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__init(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response)) {
      return false;
    }
    data = (pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response *)allocator.zero_allocate(size, sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__fini(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence *
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence * array = (pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__destroy(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__are_equal(const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence * lhs, const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__copy(
  const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence * input,
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response * data =
      (pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "pick_place_orchestrator/action/detail/pick_place_mission__functions.h"

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__init(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__fini(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__are_equal(const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event * lhs, const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__copy(
  const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event * input,
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event *
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event * msg = (pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event));
  bool success = pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__destroy(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence__init(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event)) {
      return false;
    }
    data = (pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event *)allocator.zero_allocate(size, sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence__fini(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence *
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence * array = (pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence__destroy(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence__are_equal(const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence * lhs, const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence__copy(
  const pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence * input,
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event * data =
      (pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__init(pick_place_orchestrator__action__PickPlaceMission_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__fini(pick_place_orchestrator__action__PickPlaceMission_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__are_equal(const pick_place_orchestrator__action__PickPlaceMission_GetResult_Request * lhs, const pick_place_orchestrator__action__PickPlaceMission_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__copy(
  const pick_place_orchestrator__action__PickPlaceMission_GetResult_Request * input,
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

pick_place_orchestrator__action__PickPlaceMission_GetResult_Request *
pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Request * msg = (pick_place_orchestrator__action__PickPlaceMission_GetResult_Request *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Request));
  bool success = pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__destroy(pick_place_orchestrator__action__PickPlaceMission_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__init(pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Request)) {
      return false;
    }
    data = (pick_place_orchestrator__action__PickPlaceMission_GetResult_Request *)allocator.zero_allocate(size, sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__fini(pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence *
pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence * array = (pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__destroy(pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__are_equal(const pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence * lhs, const pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__copy(
  const pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence * input,
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Request * data =
      (pick_place_orchestrator__action__PickPlaceMission_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "pick_place_orchestrator/action/detail/pick_place_mission__functions.h"

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__init(pick_place_orchestrator__action__PickPlaceMission_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!pick_place_orchestrator__action__PickPlaceMission_Result__init(&msg->result)) {
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__fini(pick_place_orchestrator__action__PickPlaceMission_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  pick_place_orchestrator__action__PickPlaceMission_Result__fini(&msg->result);
}

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__are_equal(const pick_place_orchestrator__action__PickPlaceMission_GetResult_Response * lhs, const pick_place_orchestrator__action__PickPlaceMission_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!pick_place_orchestrator__action__PickPlaceMission_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__copy(
  const pick_place_orchestrator__action__PickPlaceMission_GetResult_Response * input,
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!pick_place_orchestrator__action__PickPlaceMission_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

pick_place_orchestrator__action__PickPlaceMission_GetResult_Response *
pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Response * msg = (pick_place_orchestrator__action__PickPlaceMission_GetResult_Response *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Response));
  bool success = pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__destroy(pick_place_orchestrator__action__PickPlaceMission_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__init(pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Response)) {
      return false;
    }
    data = (pick_place_orchestrator__action__PickPlaceMission_GetResult_Response *)allocator.zero_allocate(size, sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__fini(pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence *
pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence * array = (pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__destroy(pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__are_equal(const pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence * lhs, const pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__copy(
  const pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence * input,
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Response * data =
      (pick_place_orchestrator__action__PickPlaceMission_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "pick_place_orchestrator/action/detail/pick_place_mission__functions.h"

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__init(pick_place_orchestrator__action__PickPlaceMission_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__init(&msg->request, 0)) {
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__init(&msg->response, 0)) {
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__fini(pick_place_orchestrator__action__PickPlaceMission_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__fini(&msg->request);
  // response
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__fini(&msg->response);
}

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__are_equal(const pick_place_orchestrator__action__PickPlaceMission_GetResult_Event * lhs, const pick_place_orchestrator__action__PickPlaceMission_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__copy(
  const pick_place_orchestrator__action__PickPlaceMission_GetResult_Event * input,
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

pick_place_orchestrator__action__PickPlaceMission_GetResult_Event *
pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Event * msg = (pick_place_orchestrator__action__PickPlaceMission_GetResult_Event *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Event));
  bool success = pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__destroy(pick_place_orchestrator__action__PickPlaceMission_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence__init(pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Event)) {
      return false;
    }
    data = (pick_place_orchestrator__action__PickPlaceMission_GetResult_Event *)allocator.zero_allocate(size, sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence__fini(pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence *
pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence * array = (pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence__destroy(pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence__are_equal(const pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence * lhs, const pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence__copy(
  const pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence * input,
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_place_orchestrator__action__PickPlaceMission_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_place_orchestrator__action__PickPlaceMission_GetResult_Event * data =
      (pick_place_orchestrator__action__PickPlaceMission_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "pick_place_orchestrator/action/detail/pick_place_mission__functions.h"

bool
pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__init(pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!pick_place_orchestrator__action__PickPlaceMission_Feedback__init(&msg->feedback)) {
    pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__fini(pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  pick_place_orchestrator__action__PickPlaceMission_Feedback__fini(&msg->feedback);
}

bool
pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__are_equal(const pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage * lhs, const pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pick_place_orchestrator__action__PickPlaceMission_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__copy(
  const pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage * input,
  pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pick_place_orchestrator__action__PickPlaceMission_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage *
pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage * msg = (pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage));
  bool success = pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__destroy(pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__init(pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage)) {
      return false;
    }
    data = (pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage *)allocator.zero_allocate(size, sizeof(pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__fini(pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence *
pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence * array = (pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence *)allocator.allocate(sizeof(pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__destroy(pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__are_equal(const pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence * lhs, const pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence__copy(
  const pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence * input,
  pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage * data =
      (pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
