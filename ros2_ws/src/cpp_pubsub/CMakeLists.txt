cmake_minimum_required(VERSION 3.8)
project(cpp_pubsub)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(tutorial_interfaces REQUIRED)


# exo 1 publisher
add_executable(exo1_publisher src/exo1_publisher.cpp)
ament_target_dependencies(exo1_publisher rclcpp std_msgs)

# exo 1 listener
add_executable(exo1_listener src/exo1_listener.cpp)
ament_target_dependencies(exo1_listener rclcpp std_msgs)

# exo 2 publisher
add_executable(exo2_publisher src/exo2_publisher.cpp)
ament_target_dependencies(exo2_publisher rclcpp std_msgs)

# exo 3 publisher
add_executable(exo3_publisher src/exo3_publisher.cpp)
ament_target_dependencies(exo3_publisher rclcpp std_msgs)

# exo 4 publisher
add_executable(exo4_publisher src/exo4_publisher.cpp)
ament_target_dependencies(exo4_publisher rclcpp tutorial_interfaces)

# exo 4 listener
add_executable(exo4_listener src/exo4_listener.cpp)
ament_target_dependencies(exo4_listener rclcpp tutorial_interfaces)

# exo 5 listener
add_executable(exo5_listener src/exo5_listener.cpp)
ament_target_dependencies(exo5_listener rclcpp tutorial_interfaces)

# exo 6 publisher
add_executable(exo6_publisher src/exo6_publisher.cpp)
ament_target_dependencies(exo6_publisher rclcpp tutorial_interfaces)

# exo 7 server
add_executable(exo7_server src/exo7_server.cpp)
ament_target_dependencies(exo7_server rclcpp tutorial_interfaces)

# exo 7 server
add_executable(exo7_client src/exo7_client.cpp)
ament_target_dependencies(exo7_client rclcpp tutorial_interfaces)

install(TARGETS
  exo1_publisher
  exo1_listener
  exo2_publisher
  exo3_publisher
  exo4_publisher
  exo4_listener
  exo5_listener
  exo6_publisher
  exo7_server
  exo7_client
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)

  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
