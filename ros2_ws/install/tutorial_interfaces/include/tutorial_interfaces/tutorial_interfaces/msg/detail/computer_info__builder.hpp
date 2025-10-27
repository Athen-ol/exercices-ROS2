// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/ComputerInfo.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__COMPUTER_INFO__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__COMPUTER_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/msg/detail/computer_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_ComputerInfo_counter
{
public:
  explicit Init_ComputerInfo_counter(::tutorial_interfaces::msg::ComputerInfo & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::msg::ComputerInfo counter(::tutorial_interfaces::msg::ComputerInfo::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::ComputerInfo msg_;
};

class Init_ComputerInfo_domain_id
{
public:
  explicit Init_ComputerInfo_domain_id(::tutorial_interfaces::msg::ComputerInfo & msg)
  : msg_(msg)
  {}
  Init_ComputerInfo_counter domain_id(::tutorial_interfaces::msg::ComputerInfo::_domain_id_type arg)
  {
    msg_.domain_id = std::move(arg);
    return Init_ComputerInfo_counter(msg_);
  }

private:
  ::tutorial_interfaces::msg::ComputerInfo msg_;
};

class Init_ComputerInfo_computer_name
{
public:
  Init_ComputerInfo_computer_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputerInfo_domain_id computer_name(::tutorial_interfaces::msg::ComputerInfo::_computer_name_type arg)
  {
    msg_.computer_name = std::move(arg);
    return Init_ComputerInfo_domain_id(msg_);
  }

private:
  ::tutorial_interfaces::msg::ComputerInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::ComputerInfo>()
{
  return tutorial_interfaces::msg::builder::Init_ComputerInfo_computer_name();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__COMPUTER_INFO__BUILDER_HPP_
