// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tutorial_interfaces:msg/Msg.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/msg/detail/msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `computer_name`
#include "rosidl_runtime_c/string_functions.h"

bool
tutorial_interfaces__msg__Msg__init(tutorial_interfaces__msg__Msg * msg)
{
  if (!msg) {
    return false;
  }
  // computer_name
  if (!rosidl_runtime_c__String__init(&msg->computer_name)) {
    tutorial_interfaces__msg__Msg__fini(msg);
    return false;
  }
  // domain_id
  // counter
  return true;
}

void
tutorial_interfaces__msg__Msg__fini(tutorial_interfaces__msg__Msg * msg)
{
  if (!msg) {
    return;
  }
  // computer_name
  rosidl_runtime_c__String__fini(&msg->computer_name);
  // domain_id
  // counter
}

bool
tutorial_interfaces__msg__Msg__are_equal(const tutorial_interfaces__msg__Msg * lhs, const tutorial_interfaces__msg__Msg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // computer_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->computer_name), &(rhs->computer_name)))
  {
    return false;
  }
  // domain_id
  if (lhs->domain_id != rhs->domain_id) {
    return false;
  }
  // counter
  if (lhs->counter != rhs->counter) {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__msg__Msg__copy(
  const tutorial_interfaces__msg__Msg * input,
  tutorial_interfaces__msg__Msg * output)
{
  if (!input || !output) {
    return false;
  }
  // computer_name
  if (!rosidl_runtime_c__String__copy(
      &(input->computer_name), &(output->computer_name)))
  {
    return false;
  }
  // domain_id
  output->domain_id = input->domain_id;
  // counter
  output->counter = input->counter;
  return true;
}

tutorial_interfaces__msg__Msg *
tutorial_interfaces__msg__Msg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__msg__Msg * msg = (tutorial_interfaces__msg__Msg *)allocator.allocate(sizeof(tutorial_interfaces__msg__Msg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__msg__Msg));
  bool success = tutorial_interfaces__msg__Msg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__msg__Msg__destroy(tutorial_interfaces__msg__Msg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__msg__Msg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__msg__Msg__Sequence__init(tutorial_interfaces__msg__Msg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__msg__Msg * data = NULL;

  if (size) {
    data = (tutorial_interfaces__msg__Msg *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__msg__Msg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__msg__Msg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__msg__Msg__fini(&data[i - 1]);
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
tutorial_interfaces__msg__Msg__Sequence__fini(tutorial_interfaces__msg__Msg__Sequence * array)
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
      tutorial_interfaces__msg__Msg__fini(&array->data[i]);
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

tutorial_interfaces__msg__Msg__Sequence *
tutorial_interfaces__msg__Msg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__msg__Msg__Sequence * array = (tutorial_interfaces__msg__Msg__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__msg__Msg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__msg__Msg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__msg__Msg__Sequence__destroy(tutorial_interfaces__msg__Msg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__msg__Msg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__msg__Msg__Sequence__are_equal(const tutorial_interfaces__msg__Msg__Sequence * lhs, const tutorial_interfaces__msg__Msg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__msg__Msg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__msg__Msg__Sequence__copy(
  const tutorial_interfaces__msg__Msg__Sequence * input,
  tutorial_interfaces__msg__Msg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__msg__Msg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__msg__Msg * data =
      (tutorial_interfaces__msg__Msg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__msg__Msg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__msg__Msg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__msg__Msg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
