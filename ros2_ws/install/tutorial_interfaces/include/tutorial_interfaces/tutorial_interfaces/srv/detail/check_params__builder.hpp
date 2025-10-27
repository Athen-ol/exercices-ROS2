// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/CheckParams.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__CHECK_PARAMS__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__CHECK_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/check_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckParams_Request_domain_id
{
public:
  explicit Init_CheckParams_Request_domain_id(::tutorial_interfaces::srv::CheckParams_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::CheckParams_Request domain_id(::tutorial_interfaces::srv::CheckParams_Request::_domain_id_type arg)
  {
    msg_.domain_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::CheckParams_Request msg_;
};

class Init_CheckParams_Request_computer_name
{
public:
  Init_CheckParams_Request_computer_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckParams_Request_domain_id computer_name(::tutorial_interfaces::srv::CheckParams_Request::_computer_name_type arg)
  {
    msg_.computer_name = std::move(arg);
    return Init_CheckParams_Request_domain_id(msg_);
  }

private:
  ::tutorial_interfaces::srv::CheckParams_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::CheckParams_Request>()
{
  return tutorial_interfaces::srv::builder::Init_CheckParams_Request_computer_name();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckParams_Response_domain_id_correct
{
public:
  explicit Init_CheckParams_Response_domain_id_correct(::tutorial_interfaces::srv::CheckParams_Response & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::CheckParams_Response domain_id_correct(::tutorial_interfaces::srv::CheckParams_Response::_domain_id_correct_type arg)
  {
    msg_.domain_id_correct = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::CheckParams_Response msg_;
};

class Init_CheckParams_Response_computer_name_correct
{
public:
  Init_CheckParams_Response_computer_name_correct()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckParams_Response_domain_id_correct computer_name_correct(::tutorial_interfaces::srv::CheckParams_Response::_computer_name_correct_type arg)
  {
    msg_.computer_name_correct = std::move(arg);
    return Init_CheckParams_Response_domain_id_correct(msg_);
  }

private:
  ::tutorial_interfaces::srv::CheckParams_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::CheckParams_Response>()
{
  return tutorial_interfaces::srv::builder::Init_CheckParams_Response_computer_name_correct();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__CHECK_PARAMS__BUILDER_HPP_
