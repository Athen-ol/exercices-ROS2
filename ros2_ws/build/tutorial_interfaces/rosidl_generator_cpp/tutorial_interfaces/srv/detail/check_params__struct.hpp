// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:srv/CheckParams.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__CHECK_PARAMS__STRUCT_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__CHECK_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__CheckParams_Request __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__CheckParams_Request __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckParams_Request_
{
  using Type = CheckParams_Request_<ContainerAllocator>;

  explicit CheckParams_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->computer_name = "";
      this->domain_id = 0ll;
    }
  }

  explicit CheckParams_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : computer_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->computer_name = "";
      this->domain_id = 0ll;
    }
  }

  // field types and members
  using _computer_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _computer_name_type computer_name;
  using _domain_id_type =
    int64_t;
  _domain_id_type domain_id;

  // setters for named parameter idiom
  Type & set__computer_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->computer_name = _arg;
    return *this;
  }
  Type & set__domain_id(
    const int64_t & _arg)
  {
    this->domain_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::CheckParams_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::CheckParams_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::CheckParams_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::CheckParams_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::CheckParams_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::CheckParams_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::CheckParams_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::CheckParams_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::CheckParams_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::CheckParams_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__CheckParams_Request
    std::shared_ptr<tutorial_interfaces::srv::CheckParams_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__CheckParams_Request
    std::shared_ptr<tutorial_interfaces::srv::CheckParams_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckParams_Request_ & other) const
  {
    if (this->computer_name != other.computer_name) {
      return false;
    }
    if (this->domain_id != other.domain_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckParams_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckParams_Request_

// alias to use template instance with default allocator
using CheckParams_Request =
  tutorial_interfaces::srv::CheckParams_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__CheckParams_Response __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__CheckParams_Response __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckParams_Response_
{
  using Type = CheckParams_Response_<ContainerAllocator>;

  explicit CheckParams_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->computer_name_correct = false;
      this->domain_id_correct = false;
    }
  }

  explicit CheckParams_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->computer_name_correct = false;
      this->domain_id_correct = false;
    }
  }

  // field types and members
  using _computer_name_correct_type =
    bool;
  _computer_name_correct_type computer_name_correct;
  using _domain_id_correct_type =
    bool;
  _domain_id_correct_type domain_id_correct;

  // setters for named parameter idiom
  Type & set__computer_name_correct(
    const bool & _arg)
  {
    this->computer_name_correct = _arg;
    return *this;
  }
  Type & set__domain_id_correct(
    const bool & _arg)
  {
    this->domain_id_correct = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::CheckParams_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::CheckParams_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::CheckParams_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::CheckParams_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::CheckParams_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::CheckParams_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::CheckParams_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::CheckParams_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::CheckParams_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::CheckParams_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__CheckParams_Response
    std::shared_ptr<tutorial_interfaces::srv::CheckParams_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__CheckParams_Response
    std::shared_ptr<tutorial_interfaces::srv::CheckParams_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckParams_Response_ & other) const
  {
    if (this->computer_name_correct != other.computer_name_correct) {
      return false;
    }
    if (this->domain_id_correct != other.domain_id_correct) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckParams_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckParams_Response_

// alias to use template instance with default allocator
using CheckParams_Response =
  tutorial_interfaces::srv::CheckParams_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces

namespace tutorial_interfaces
{

namespace srv
{

struct CheckParams
{
  using Request = tutorial_interfaces::srv::CheckParams_Request;
  using Response = tutorial_interfaces::srv::CheckParams_Response;
};

}  // namespace srv

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__CHECK_PARAMS__STRUCT_HPP_
