// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:msg/ComputerInfo.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__COMPUTER_INFO__STRUCT_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__COMPUTER_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__msg__ComputerInfo __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__msg__ComputerInfo __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ComputerInfo_
{
  using Type = ComputerInfo_<ContainerAllocator>;

  explicit ComputerInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->computer_name = "";
      this->domain_id = 0l;
      this->counter = 0l;
    }
  }

  explicit ComputerInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : computer_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->computer_name = "";
      this->domain_id = 0l;
      this->counter = 0l;
    }
  }

  // field types and members
  using _computer_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _computer_name_type computer_name;
  using _domain_id_type =
    int32_t;
  _domain_id_type domain_id;
  using _counter_type =
    int32_t;
  _counter_type counter;

  // setters for named parameter idiom
  Type & set__computer_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->computer_name = _arg;
    return *this;
  }
  Type & set__domain_id(
    const int32_t & _arg)
  {
    this->domain_id = _arg;
    return *this;
  }
  Type & set__counter(
    const int32_t & _arg)
  {
    this->counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::msg::ComputerInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::msg::ComputerInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::ComputerInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::ComputerInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::ComputerInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::ComputerInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::ComputerInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::ComputerInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::ComputerInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::ComputerInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__msg__ComputerInfo
    std::shared_ptr<tutorial_interfaces::msg::ComputerInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__msg__ComputerInfo
    std::shared_ptr<tutorial_interfaces::msg::ComputerInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputerInfo_ & other) const
  {
    if (this->computer_name != other.computer_name) {
      return false;
    }
    if (this->domain_id != other.domain_id) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputerInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputerInfo_

// alias to use template instance with default allocator
using ComputerInfo =
  tutorial_interfaces::msg::ComputerInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__COMPUTER_INFO__STRUCT_HPP_
