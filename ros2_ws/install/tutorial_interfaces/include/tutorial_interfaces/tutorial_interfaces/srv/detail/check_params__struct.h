// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/CheckParams.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__CHECK_PARAMS__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__CHECK_PARAMS__STRUCT_H_

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

/// Struct defined in srv/CheckParams in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__CheckParams_Request
{
  rosidl_runtime_c__String computer_name;
  int64_t domain_id;
} tutorial_interfaces__srv__CheckParams_Request;

// Struct for a sequence of tutorial_interfaces__srv__CheckParams_Request.
typedef struct tutorial_interfaces__srv__CheckParams_Request__Sequence
{
  tutorial_interfaces__srv__CheckParams_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__CheckParams_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CheckParams in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__CheckParams_Response
{
  bool computer_name_correct;
  bool domain_id_correct;
} tutorial_interfaces__srv__CheckParams_Response;

// Struct for a sequence of tutorial_interfaces__srv__CheckParams_Response.
typedef struct tutorial_interfaces__srv__CheckParams_Response__Sequence
{
  tutorial_interfaces__srv__CheckParams_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__CheckParams_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__CHECK_PARAMS__STRUCT_H_
