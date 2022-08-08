#include <iostream>
#include <memory>
#include <string>
#include <unistd.h>
#include <chrono>

#include <sys/timeb.h>
#include <sys/types.h>

#include <grpcpp/grpcpp.h>

#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/message.h>
#include <google/protobuf/dynamic_message.h>

#include "grpc_plcnext/dataaccess_client.hpp"
#include "grpc_plcnext/subscription_client.hpp"

using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::Status;

using Arp::Type::Grpc::ObjectType;

class gRPC_Client
{
public:
    gRPC_Client(std::shared_ptr<Channel> ch);
    gRPC_Client();
    static google::protobuf::uint32 GetMicroTickCount();
    
    template<typename T> bool sendToPLC(const std::string& ins_path,const T& data);
    template <typename T> bool sendToPLC(const std::string& ins_path,const std::vector<T>& data);

    template<typename T> bool getFromPLC(const std::string& ins_path,T& data);
    template <typename T> bool getFromPLC(const std::string& ins_path,std::vector<T>& data);

private:
    std::shared_ptr<Channel> channel;

    dataaccess_client DataAccessServiceClient;
    subscription_client SubscriptionServiceClient;

    // std::unique_ptr<IDeviceInfoService::Stub> stub_IDeviceInfoService;
};