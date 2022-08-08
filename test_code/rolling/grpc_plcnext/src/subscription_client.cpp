#include "grpc_plcnext/subscription_client.hpp"

#ifdef USE_TEMPLATES_SUBSCRIPTION
template bool subscription_client::ReadElementalData<char>(const std::string& ins_path,char& data);
template bool subscription_client::ReadElementalData<int>(const std::string& ins_path,int& data);
template bool subscription_client::ReadElementalData<bool>(const std::string& ins_path,bool& data);
#endif


subscription_client::subscription_client(std::shared_ptr<Channel>& channel)
{
    stub_ = ISubscriptionService::NewStub(channel);
    this->subscriptionId = CreateSubscription();
}

subscription_client::~subscription_client()
{
    DeleteSubscription();
}


uint32_t subscription_client::CreateSubscription()
{
    ISubscriptionServiceCreateSubscriptionRequest request;

    request.set_kind(::Arp::Plc::Gds::Services::Grpc::SubscriptionKind::SK_RealTime);

    ClientContext context;

    ISubscriptionServiceCreateSubscriptionResponse reply;

    Status status = stub_->CreateSubscription(&context, request, &reply);
    reply.PrintDebugString();
    if (status.ok()) {
        return reply._returnvalue();
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return 0;
    }   
}


uint32_t subscription_client::AddVariable(std::string variableName)
{
    ISubscriptionServiceAddVariableRequest request;

    request.set_subscriptionid(subscriptionId);
    request.set_variablename(variableName);

    ClientContext context;

    ISubscriptionServiceAddVariableResponse reply;

    Status status = stub_->AddVariable(&context, request, &reply);
    reply.PrintDebugString();
    if (status.ok()) {
        return reply._returnvalue();
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return status.error_code();
    }   
}


uint32_t subscription_client::DelVariable(std::string variableName)
{
    ISubscriptionServiceRemoveVariableRequest request;

    request.set_subscriptionid(subscriptionId);
    request.set_variablename(variableName);

    ClientContext context;

    ISubscriptionServiceRemoveVariableResponse reply;

    Status status = stub_->RemoveVariable(&context, request, &reply);
    reply.PrintDebugString();
    if (status.ok()) {
        return reply._returnvalue();
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return status.error_code();
    }   
}

uint32_t subscription_client::Subscribe(uint64_t sampleRate)
{
    ISubscriptionServiceSubscribeRequest request;

    request.set_subscriptionid(subscriptionId);
    request.set_samplerate(sampleRate);

    ClientContext context;

    ISubscriptionServiceSubscribeResponse reply;

    Status status = stub_->Subscribe(&context, request, &reply);
    reply.PrintDebugString();
    if (status.ok()) {
        return reply._returnvalue();
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return status.error_code();
    }   
}

uint32_t subscription_client::ReadValues()
{

    ISubscriptionServiceReadValuesRequest request;

    request.set_subscriptionid(subscriptionId);

    ClientContext context;

    ISubscriptionServiceReadValuesResponse reply;

    Status status = stub_->ReadValues(&context, request, &reply);
    reply.PrintDebugString();
    if (status.ok()) {
        return reply._returnvalue();
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return status.error_code();
    }   
}

uint32_t subscription_client::DeleteSubscription()
{
    ISubscriptionServiceDeleteSubscriptionRequest request;

    request.set_subscriptionid(subscriptionId);

    ClientContext context;

    ISubscriptionServiceDeleteSubscriptionResponse reply;

    Status status = stub_->DeleteSubscription(&context, request, &reply);
    reply.PrintDebugString();
    if (status.ok()) {
        return reply._returnvalue();
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return status.error_code();
    }   
}



//A hard-coded instance path to show how to make up a twist structure data. 
//Write("Arp.Plc.Eclr/MainInstance.grpc_Odometry")
bool subscription_client::ReadTwistData(const std::string& ins_path,geometry_msgs::msg::Twist& data)
{
    (void)data;
    using namespace std;
    auto it = std::find(varAddedRecords.begin(), varAddedRecords.end(),ins_path);
    if (it == varAddedRecords.end()) {
        if (AddVariable(ins_path) != DataAccessError::DAE_None) {
            cout << "AddVariable: '" << ins_path << "' failed"<< endl;
            return false;
        }
        else if (Subscribe(100) != DataAccessError::DAE_None) {  //100 microsecond
            cout << "Subscribe: '" << ins_path << "' failed"<< endl;
            return false;
        }
        varAddedRecords.push_back(ins_path);
    }
    if (ReadValues() != DataAccessError::DAE_None) {
        cout << "ReadValues: '" << ins_path << "' failed"<< endl;
        return false;
    }
    return true;
}

bool subscription_client::ReadStringData(const std::string& ins_path,std::string& data)
{
    (void)data;
    using namespace std;
    auto it = std::find(varAddedRecords.begin(), varAddedRecords.end(),ins_path);
    if (it == varAddedRecords.end()) {
        if (AddVariable(ins_path) != DataAccessError::DAE_None) {
            cout << "AddVariable: '" << ins_path << "' failed"<< endl;
            return false;
        }
        else if (Subscribe(100) != DataAccessError::DAE_None) {  //100 microsecond
            cout << "Subscribe: '" << ins_path << "' failed"<< endl;
            return false;
        }
        varAddedRecords.push_back(ins_path);
    }
    if (ReadValues() != DataAccessError::DAE_None) {
        cout << "ReadValues: '" << ins_path << "' failed"<< endl;
        return false;
    }
    return true;
}

#ifdef USE_TEMPLATES_SUBSCRIPTION
template<typename T> 
bool subscription_client::ReadElementalData(const std::string& ins_path,T& data)
{
    using namespace std;
    auto it = std::find(varAddedRecords.begin(), varAddedRecords.end(),ins_path);
    if (it == varAddedRecords.end()) {
        if (AddVariable(ins_path) != DataAccessError::DAE_None) {
            cout << "AddVariable: '" << ins_path << "' failed"<< endl;
            return false;
        }
        else if (Subscribe(100) != DataAccessError::DAE_None) {  //100 microsecond
            cout << "Subscribe: '" << ins_path << "' failed"<< endl;
            return false;
        }
        varAddedRecords.push_back(ins_path);
    }
    if (ReadValues() != DataAccessError::DAE_None) {
        cout << "ReadValues: '" << ins_path << "' failed"<< endl;
        return false;
    }
    return true;
}

#else
bool subscription_client::ReadElementalData(const std::string& ins_path,bool& bool_data)
{
    (void)bool_data;
    using namespace std;
    auto it = std::find(varAddedRecords.begin(), varAddedRecords.end(),ins_path);
    if (it == varAddedRecords.end()) {
        if (AddVariable(ins_path) != DataAccessError::DAE_None) {
            cout << "AddVariable: '" << ins_path << "' failed"<< endl;
            return false;
        }
        else if (Subscribe(100) != DataAccessError::DAE_None) {  //100 microsecond
            cout << "Subscribe: '" << ins_path << "' failed"<< endl;
            return false;
        }
        varAddedRecords.push_back(ins_path);
    }
    if (ReadValues() != DataAccessError::DAE_None) {
        cout << "ReadValues: '" << ins_path << "' failed"<< endl;
        return false;
    }
    return true;
}

bool subscription_client::ReadElementalData(const std::string& ins_path,int& int_data)
{
    (void)int_data;
    using namespace std;
    auto it = std::find(varAddedRecords.begin(), varAddedRecords.end(),ins_path);
    if (it == varAddedRecords.end()) {
        if (AddVariable(ins_path) != DataAccessError::DAE_None) {
            cout << "AddVariable: '" << ins_path << "' failed"<< endl;
            return false;
        }
        else if (Subscribe(100) != DataAccessError::DAE_None) {  //100 microsecond
            cout << "Subscribe: '" << ins_path << "' failed"<< endl;
            return false;
        }
        varAddedRecords.push_back(ins_path);
    }
    if (ReadValues() != DataAccessError::DAE_None) {
        cout << "ReadValues: '" << ins_path << "' failed"<< endl;
        return false;
    }
    return true;
}

bool subscription_client::ReadElementalData(const std::string& ins_path,char& char_data)
{
    (void)char_data;
    using namespace std;
    auto it = std::find(varAddedRecords.begin(), varAddedRecords.end(),ins_path);
    if (it == varAddedRecords.end()) {
        if (AddVariable(ins_path) != DataAccessError::DAE_None) {
            cout << "AddVariable: '" << ins_path << "' failed"<< endl;
            return false;
        }
        else if (Subscribe(100) != DataAccessError::DAE_None) {  //100 microsecond
            cout << "Subscribe: '" << ins_path << "' failed"<< endl;
            return false;
        }
        varAddedRecords.push_back(ins_path);
    }
    if (ReadValues() != DataAccessError::DAE_None) {
        cout << "ReadValues: '" << ins_path << "' failed"<< endl;
        return false;
    }
    return true;
}


bool subscription_client::ReadElementalData(const std::string& ins_path,std::vector<char>& vec_char_data)
{
    (void)vec_char_data;
    using namespace std;
    auto it = std::find(varAddedRecords.begin(), varAddedRecords.end(),ins_path);
    if (it == varAddedRecords.end()) {
        if (AddVariable(ins_path) != DataAccessError::DAE_None) {
            cout << "AddVariable: '" << ins_path << "' failed"<< endl;
            return false;
        }
        else if (Subscribe(100) != DataAccessError::DAE_None) {  //100 microsecond
            cout << "Subscribe: '" << ins_path << "' failed"<< endl;
            return false;
        }
        varAddedRecords.push_back(ins_path);
    }
    if (ReadValues() != DataAccessError::DAE_None) {
        cout << "ReadValues: '" << ins_path << "' failed"<< endl;
        return false;
    }
    return true;
}

#endif