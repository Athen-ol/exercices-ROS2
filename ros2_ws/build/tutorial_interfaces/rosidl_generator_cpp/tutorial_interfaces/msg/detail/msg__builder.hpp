// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/Msg.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__MSG__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/msg/detail/msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_Msg_counter
{
public:
  explicit Init_Msg_counter(::tutorial_interfaces::msg::Msg & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::msg::Msg counter(::tutorial_interfaces::msg::Msg::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::Msg msg_;
};

class Init_Msg_domain_id
{
public:
  explicit Init_Msg_domain_id(::tutorial_interfaces::msg::Msg & msg)
  : msg_(msg)
  {}
  Init_Msg_counter domain_id(::tutorial_interfaces::msg::Msg::_domain_id_type arg)
  {
    msg_.domain_id = std::move(arg);
    return Init_Msg_counter(msg_);
  }

private:
  ::tutorial_interfaces::msg::Msg msg_;
};

class Init_Msg_computer_name
{
public:
  Init_Msg_computer_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Msg_domain_id computer_name(::tutorial_interfaces::msg::Msg::_computer_name_type arg)
  {
    msg_.computer_name = std::move(arg);
    return Init_Msg_domain_id(msg_);
  }

private:
  ::tutorial_interfaces::msg::Msg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::Msg>()
{
  return tutorial_interfaces::msg::builder::Init_Msg_computer_name();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__MSG__BUILDER_HPP_
