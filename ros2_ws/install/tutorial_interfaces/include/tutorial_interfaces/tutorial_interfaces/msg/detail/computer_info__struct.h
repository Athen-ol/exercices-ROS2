// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:msg/ComputerInfo.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__COMPUTER_INFO__STRUCT_H_
#define TUTORIAL_INTERFACES__MSG__DETAIL__COMPUTER_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'computer_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ComputerInfo in the package tutorial_interfaces.
typedef struct tutorial_interfaces__msg__ComputerInfo
{
  rosidl_runtime_c__String computer_name;
  int32_t domain_id;
  int32_t counter;
} tutorial_interfaces__msg__ComputerInfo;

// Struct for a sequence of tutorial_interfaces__msg__ComputerInfo.
typedef struct tutorial_interfaces__msg__ComputerInfo__Sequence
{
  tutorial_interfaces__msg__ComputerInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__msg__ComputerInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__COMPUTER_INFO__STRUCT_H_
