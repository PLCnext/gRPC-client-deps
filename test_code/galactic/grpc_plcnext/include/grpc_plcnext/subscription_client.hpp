
#include <grpcpp/grpcpp.h>

#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/message.h>
#include <google/protobuf/dynamic_message.h>
#include<vector>

#include <geometry_msgs/msg/twist.hpp>
#include "grpc_plcnext/ServiceStubs/Plc/Gds/ISubscriptionService.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::Status;

using Arp::Type::Grpc::ObjectType;

// #define USE_TEMPLATES_SUBSCRIPTION

using Arp::Plc::Gds::Services::Grpc::ISubscriptionService;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceCreateSubscriptionResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceCreateSubscriptionRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceCreateRecordingSubscriptionResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceCreateRecordingSubscriptionRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceAddVariableResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceAddVariableRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceAddVariableResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceAddVariableRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceRemoveVariableResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceRemoveVariableRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceSubscribeResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceSubscribeRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceResubscribeResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceResubscribeRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceUnsubscribeResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceUnsubscribeRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceDeleteSubscriptionResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceDeleteSubscriptionRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceGetVariableInfosResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceGetVariableInfosRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceGetTimeStampedVariableInfosResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceGetTimeStampedVariableInfosRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceGetRecordInfosResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceGetRecordInfosRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceReadValuesResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceReadValuesRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceReadTimeStampedValuesResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceReadTimeStampedValuesRequest;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceReadRecordsResponse;
using Arp::Plc::Gds::Services::Grpc::ISubscriptionServiceReadRecordsRequest;
using Arp::Plc::Gds::Services::Grpc::DataAccessError;


class subscription_client
{
private:
    /* data */ 

    std::unique_ptr<ISubscriptionService::Stub> stub_;
    //ISubscriptionService methods
    uint32_t CreateSubscription();
    uint32_t AddVariable(std::string variableName);
    uint32_t DelVariable(std::string variableName);
    uint32_t Subscribe(uint64_t sampleRate);
    uint32_t ReadValues();
    uint32_t DeleteSubscription();
    std::vector <std::string> varAddedRecords;
    uint32_t subscriptionId = 0;
public:
    subscription_client(std::shared_ptr<Channel>& channel);
    ~subscription_client();
    bool is_subscribed = false;

    bool ReadTwistData(const std::string& ins_path,geometry_msgs::msg::Twist& data);
    bool ReadStringData(const std::string& ins_path,std::string& data);

#ifdef USE_TEMPLATES_SUBSCRIPTION
    template<typename T> 
    bool ReadElementalData(const std::string& ins_path,T& data);
#else
    bool ReadElementalData(const std::string& ins_path,bool& bool_data);
    bool ReadElementalData(const std::string& ins_path,int& int_data);
    bool ReadElementalData(const std::string& ins_path,char& char_data);
    bool ReadElementalData(const std::string& ins_path,std::vector<char>& vec_char_data);
#endif
};

