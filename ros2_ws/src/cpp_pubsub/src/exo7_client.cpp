#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/srv/check_params.hpp"  

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  if (argc != 3) {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "\nusage: check_params_client computer_name_to_check domain_id_to_check");
      return 1;
  }

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("check_params_client");
  rclcpp::Client<tutorial_interfaces::srv::CheckParams>::SharedPtr client =
    node->create_client<tutorial_interfaces::srv::CheckParams>("check_params");

  auto request = std::make_shared<tutorial_interfaces::srv::CheckParams::Request>();
  request->computer_name = std::string(argv[1]);
  request->domain_id = atoi(argv[2]);

  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "\nResponse : %s and %s", result.get()->computer_name_correct ? "Computer name correct" : "Computer name incorrect", result.get()->domain_id_correct ? "Domain id correct" : "Domain id incorrect");
  } else {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Failed to call service check_params");
  }

  rclcpp::shutdown();
  return 0;
}