#include "grpc_plcnext/grpc_client.hpp"
#include <typeinfo>

// using Arp::Type::Grpc::ObjectType;

template bool gRPC_Client::sendToPLC<char>(const std::string& ins_path,const char& data);
template bool gRPC_Client::sendToPLC<int>(const std::string& ins_path,const int& data);
template bool gRPC_Client::sendToPLC<bool>(const std::string& ins_path,const bool& data);
template bool gRPC_Client::sendToPLC<char>(const std::string& ins_path,const std::vector<char>& data);
//?? how to expicit instantiation a  string type 
// template bool gRPC_Client::sendToPLC<std::string>(const std::string& ins_path,const std::string& data);

template bool gRPC_Client::getFromPLC<char>(const std::string& ins_path,char& data);
template bool gRPC_Client::getFromPLC<int>(const std::string& ins_path,int& data);
template bool gRPC_Client::getFromPLC<bool>(const std::string& ins_path,bool& data);
template bool gRPC_Client::getFromPLC<char>(const std::string& ins_path,std::vector<char>& data);

google::protobuf::uint32 gRPC_Client::GetMicroTickCount()
{
    struct timespec tp;
    clock_gettime(CLOCK_MONOTONIC, &tp);
    google::protobuf::uint32 tick = (tp.tv_sec * 1000000) + (tp.tv_nsec / 1000);
    return tick;
}

gRPC_Client::gRPC_Client(std::shared_ptr<Channel> ch)
: channel(ch)
, DataAccessServiceClient(ch)
, SubscriptionServiceClient(ch)
{   
}

gRPC_Client::gRPC_Client()
: channel(grpc::CreateChannel("unix:/run/plcnext/grpc.sock", grpc::InsecureChannelCredentials()))
, DataAccessServiceClient(channel)
, SubscriptionServiceClient(channel)
{
}

/* sendToPLC */
template <typename T> 
bool gRPC_Client::sendToPLC(const std::string& ins_path,const T& data)
{
#ifdef USE_TEMPLATES
    return DataAccessServiceClient.WriteElementalData<T>(ins_path,data);
#else
    return DataAccessServiceClient.WriteElementalData(ins_path,data);
#endif
}

/*explicit specialization for type string*/
template <> 
bool gRPC_Client::sendToPLC(const std::string& ins_path,const std::string& data)
{
    return DataAccessServiceClient.WriteStringData(ins_path,data);
}

/*explicit specialization for type Twist*/
template <>
bool gRPC_Client::sendToPLC(const std::string& ins_path,const geometry_msgs::msg::Twist& data)
{
    return  DataAccessServiceClient.WriteTwistData(ins_path,data);
}

template <typename T>
bool gRPC_Client::sendToPLC(const std::string& ins_path,const std::vector<T>& data)
{
    return DataAccessServiceClient.WriteElementalData(ins_path,data);
}

/* getFromPLC general-used tempaltes*/
template<typename T> 
bool gRPC_Client::getFromPLC(const std::string& ins_path,T& data)
{
#ifdef USE_TEMPLATES
    return SubscriptionServiceClient.ReadElementalData<T>(ins_path,data);
#else
    return SubscriptionServiceClient.ReadElementalData(ins_path,data);
#endif
}

/*explicit specialization for type string*/
template <> 
bool gRPC_Client::getFromPLC(const std::string& ins_path,std::string& data)
{
    return SubscriptionServiceClient.ReadStringData(ins_path,data);
}

/*explicit specialization for type Twist*/
template <>
bool gRPC_Client::getFromPLC(const std::string& ins_path,geometry_msgs::msg::Twist& data)
{
    return  SubscriptionServiceClient.ReadTwistData(ins_path,data);
}

template <typename T>
bool gRPC_Client::getFromPLC(const std::string& ins_path,std::vector<T>& data)
{
    return SubscriptionServiceClient.ReadElementalData(ins_path,data);
}




