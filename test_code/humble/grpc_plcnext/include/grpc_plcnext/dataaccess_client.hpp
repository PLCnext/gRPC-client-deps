#include <grpcpp/grpcpp.h>

#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/message.h>
#include <google/protobuf/dynamic_message.h>

#include <geometry_msgs/msg/twist.hpp>
#include "grpc_plcnext/ServiceStubs/Plc/Gds/IDataAccessService.grpc.pb.h"

// #define USE_TEMPLATES_DATAACCESS

using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::Status;

using Arp::Type::Grpc::ObjectType;

using Arp::Plc::Gds::Services::Grpc::IDataAccessService;
using Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadRequest;
using Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadResponse;
using Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleRequest;
using Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleResponse;
using Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteRequest;
using Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteResponse;
using Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleRequest;
using Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleResponse;

class dataaccess_client
{
private:
    /* data */
    std::unique_ptr<IDataAccessService::Stub> stub_;
public:
    dataaccess_client(std::shared_ptr<Channel>& channel);
    ~dataaccess_client() = default;

    bool WriteTwistData(const std::string& ins_path,const geometry_msgs::msg::Twist& data);
    bool WriteStringData(const std::string& ins_path,const std::string& data);

#ifdef USE_TEMPLATES_DATAACCESS
    template<typename T> 
    bool WriteElementalData(const std::string& ins_path,const T& data);
#else
    bool WriteElementalData(const std::string& ins_path,const bool& bool_data);
    bool WriteElementalData(const std::string& ins_path,const int& int_data);
    bool WriteElementalData(const std::string& ins_path,const char& char_data);
    bool WriteElementalData(const std::string& ins_path,const std::vector<char>& vec_char_data);
#endif
    std::string Read(std::string PortName);
};


