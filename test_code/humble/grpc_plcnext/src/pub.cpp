// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <chrono>
#include <memory>
#include <thread>
#include <pthread.h>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <geometry_msgs/msg/twist.hpp>
#include "grpc_plcnext/grpc_client.hpp"
#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;
int main(int argc, char *argv[])
{
	rclcpp::init(argc, argv);
	auto node = rclcpp::Node::make_shared("twist_publisher");
	auto publisher = node->create_publisher<geometry_msgs::msg::Twist>("topic_twist", 10);
	
	rclcpp::WallRate loop_rate(1s);

	gRPC_Client PLCnext_gRPC_Client;
	
	cout << "# Input the full path of the instance :" << endl;
	char temp[100];
	memset((void*)temp,0,sizeof(temp));
	cin.getline(temp,sizeof(temp));
	std::string ins_path = temp;
	std::cout << "instance path: " << ins_path << std::endl;

	int int_data = 1;
	bool bool_data = false;
	char char_data = 'A';
	std::string string_data;
	std::vector<char> vec_char_data = {'A','B','C','D','E','F','G','H','I','J'};
	geometry_msgs::msg::Twist twist_data;
	memset((void*)&twist_data,0,sizeof(twist_data));

	int int_data_readback = 0;
	bool bool_data_readback = false;
	char char_data_readback = 0;
	std::string string_data_readback;
	geometry_msgs::msg::Twist twist_data_readback;
	std::vector<char> vec_char_data_readback;
	memset((void*)&twist_data_readback,0,sizeof(twist_data_readback));
	char char_time[100];


	cout << "# Input a number which stand for a instance type:" << endl;
	cout << "1: bool" << endl;
	cout << "2: char" << endl;
	cout << "3: int" << endl;
	cout << "4: string" << endl;
	cout << "5: array of int" << endl;
	cout << "6: twist" << endl;

	memset((void*)temp,0,sizeof(temp));
	cin.getline(temp,sizeof(temp));
	int type = atoi(temp);

	// ins_path.pop_back();

	while (rclcpp::ok())
	{
		
		if (type == 1) {
			bool_data = !bool_data;
			PLCnext_gRPC_Client.sendToPLC(ins_path,bool_data);
			PLCnext_gRPC_Client.getFromPLC(ins_path,bool_data_readback);
		}
		else if (type == 2) {
			char_data++;
			PLCnext_gRPC_Client.sendToPLC(ins_path,char_data);
			PLCnext_gRPC_Client.getFromPLC(ins_path,char_data_readback);
		}
		else if (type == 3) {
			int_data += 100;
			PLCnext_gRPC_Client.sendToPLC(ins_path,int_data);
			PLCnext_gRPC_Client.getFromPLC(ins_path,int_data_readback);
		}
		else if (type == 4) {
			time_t t = time(0);
			strftime(char_time,sizeof(char_time),"%Y-%m-%d %H:%M:%S",localtime(&t));
			string_data = char_time;
			PLCnext_gRPC_Client.sendToPLC(ins_path,string_data);
			PLCnext_gRPC_Client.getFromPLC(ins_path,string_data_readback);
		}
		else if (type == 5) {
			// cout << "Not supported for now" << endl;
			for(size_t i = 0; i < vec_char_data.size(); i++) {
				vec_char_data[i] ++;
			}
			
			PLCnext_gRPC_Client.sendToPLC(ins_path,vec_char_data);
			PLCnext_gRPC_Client.getFromPLC(ins_path,vec_char_data_readback);
		}
		else if (type == 6) {
			twist_data.linear.x++;
			twist_data.linear.y++;
			twist_data.linear.z++;
			twist_data.angular.x++;
			twist_data.angular.y++;
			twist_data.angular.z++;
			PLCnext_gRPC_Client.sendToPLC(ins_path,twist_data);
			PLCnext_gRPC_Client.getFromPLC(ins_path,twist_data_readback);
		}
		else {
			cout << "Not supported for now" << endl;
		}

		publisher->publish(twist_data);

		rclcpp::spin_some(node);
		loop_rate.sleep();
	}
	rclcpp::shutdown();
	return 0;
}