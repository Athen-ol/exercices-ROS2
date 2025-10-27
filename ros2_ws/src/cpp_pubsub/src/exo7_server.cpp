#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/srv/check_params.hpp"  

#include <memory>

void check(const std::shared_ptr<tutorial_interfaces::srv::CheckParams::Request> request,
          std::shared_ptr<tutorial_interfaces::srv::CheckParams::Response>      response)
{
    char  infoBuf[100];
    gethostname(infoBuf, 100);
  response->computer_name_correct = request->computer_name.compare(infoBuf)==1;
  response->domain_id_correct = request->domain_id == 42;
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\nComputer name: %s" " Domain id: %ld",
                request->computer_name.c_str(), request->domain_id);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: %s, %s", response->computer_name_correct ? "True" : "False", response->domain_id_correct ? "True" : "False");
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("check_params_server");

  rclcpp::Service<tutorial_interfaces::srv::CheckParams>::SharedPtr service =
    node->create_service<tutorial_interfaces::srv::CheckParams>("check_params", &check);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to check some parameters.");

  rclcpp::spin(node);
  rclcpp::shutdown();
}