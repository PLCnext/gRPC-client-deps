#include "grpc_plcnext/dataaccess_client.hpp"


#ifdef USE_TEMPLATES_DATAACCESS
template bool dataaccess_client::WriteElementalData<char>(const std::string& ins_path,const char& data);
template bool dataaccess_client::WriteElementalData<int>(const std::string& ins_path,const int& data);
template bool dataaccess_client::WriteElementalData<bool>(const std::string& ins_path,const bool& data);
#endif

dataaccess_client::dataaccess_client(std::shared_ptr<Channel>& channel)
{
    stub_ = IDataAccessService::NewStub(channel);
}


//A hard-coded instance path to show how to make up a twist structure data. 
//Write("Arp.Plc.Eclr/MainInstance.grpc_Odometry")
bool dataaccess_client::WriteTwistData(const std::string& ins_path,const geometry_msgs::msg::Twist& data)
{
    IDataAccessServiceWriteRequest request;
    
    using namespace std;
    cout << "type is: " << "Twist: " << endl;
    cout <<"\tlinear.x: " << data.linear.x << endl;
    cout <<"\tlinear.y: " << data.linear.y << endl;
    cout <<"\tlinear.z: " << data.linear.z << endl;
    cout <<"\tangle.x: " << data.angular.x << endl;
    cout <<"\tangle.y: " << data.angular.y << endl;
    cout <<"\tangle.z: " << data.angular.z << endl;


    ::Arp::Plc::Gds::Services::Grpc::WriteItem* twist = request.add_data();
    // port name defined in PLCnext Engineer for test purpose: "Arp.Plc.Eclr/MainInstance.ROS_2_PLC_Twist"
    twist->set_portname(ins_path);
    // cout << "port name is: " << twist->portname() << "\t length is: " << twist->portname().length() << endl;
    twist->mutable_value()->set_typecode(::Arp::Type::Grpc::CoreType::CT_Struct);
        
    ::Arp::Type::Grpc::ObjectType* pose = twist->mutable_value()->mutable_structvalue()->add_structelements();        
    pose->set_typecode(::Arp::Type::Grpc::CoreType::CT_Struct);

    ::Arp::Type::Grpc::ObjectType* x1 = pose->mutable_structvalue()->add_structelements();
    x1->set_typecode(::Arp::Type::Grpc::CoreType::CT_Real64);
    x1->set_doublevalue(data.linear.x);

    ::Arp::Type::Grpc::ObjectType* y1 = pose->mutable_structvalue()->add_structelements();
    y1->set_typecode(::Arp::Type::Grpc::CoreType::CT_Real64);
    y1->set_doublevalue(data.linear.y);

    ::Arp::Type::Grpc::ObjectType* th1 = pose->mutable_structvalue()->add_structelements();
    th1->set_typecode(::Arp::Type::Grpc::CoreType::CT_Real64);
    th1->set_doublevalue(data.linear.z);

    ::Arp::Type::Grpc::ObjectType* velocity = twist->mutable_value()->mutable_structvalue()->add_structelements();
    velocity->set_typecode(::Arp::Type::Grpc::CoreType::CT_Struct);

    ::Arp::Type::Grpc::ObjectType* x2 = velocity->mutable_structvalue()->add_structelements();
    x2->set_typecode(::Arp::Type::Grpc::CoreType::CT_Real64);
    x2->set_doublevalue(data.angular.x);

    ::Arp::Type::Grpc::ObjectType* y2 = velocity->mutable_structvalue()->add_structelements();
    y2->set_typecode(::Arp::Type::Grpc::CoreType::CT_Real64);
    y2->set_doublevalue(data.angular.y);

    ::Arp::Type::Grpc::ObjectType* th2 = velocity->mutable_structvalue()->add_structelements();
    th2->set_typecode(::Arp::Type::Grpc::CoreType::CT_Real64);
    th2->set_doublevalue(data.angular.z);

    ClientContext context;

    IDataAccessServiceWriteResponse reply;

    Status status = stub_->Write(&context, request, &reply);
 
    if (status.ok()) {
        return true;
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return false;
    }

}

//Discard using the IDataAccessService.Read() method
//Using the ISubscription methord instead.
//Read("Arp.Plc.Eclr/MainInstance.grpc_Odometry");
std::string dataaccess_client::Read(std::string PortName)
{
    IDataAccessServiceReadRequest request;

    request.add_portnames(PortName);
    ClientContext context;

    IDataAccessServiceReadResponse reply;

    Status status = stub_->Read(&context, request, &reply);

    reply.PrintDebugString();

    if (status.ok())
    {
        return "GPRC success";
    }
    else
    {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return "RPC failed";
    }
}

bool dataaccess_client::WriteStringData(const std::string& ins_path,const std::string& data)
{
    ClientContext context;

    IDataAccessServiceWriteRequest request;
    IDataAccessServiceWriteResponse reply;

    ::Arp::Plc::Gds::Services::Grpc::WriteItem* item = request.add_data();

    using namespace std;
    item->set_portname(ins_path);
    item->mutable_value()->set_typecode(::Arp::Type::Grpc::CoreType::CT_String);
    item->mutable_value()->set_stringvalue(data);

    cout << "type is string: " <<  data << endl;

    Status status = stub_->Write(&context, request, &reply);
 
    if (status.ok()) {
        return true;
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return false;
    }
}

#ifdef USE_TEMPLATES_DATAACCESS
template<typename T> 
bool dataaccess_client::WriteElementalData(const std::string& ins_path,const T& data)
{
    ClientContext context;

    IDataAccessServiceWriteRequest request;
    IDataAccessServiceWriteResponse reply;

    ::Arp::Plc::Gds::Services::Grpc::WriteItem* item = request.add_data();

    using namespace std;
    item->set_portname(ins_path);

    const type_info &nInfo = typeid(T);
    cout << "type is: ";
    if (nInfo == typeid(bool)) {
        cout << "bool: ";
        item->mutable_value()->set_typecode(::Arp::Type::Grpc::CoreType::CT_Boolean);
        bool val = data;
        item->mutable_value()->set_boolvalue(val);
    }
    else if (nInfo == typeid(char)) {
        cout << "char: ";
        item->mutable_value()->set_typecode(::Arp::Type::Grpc::CoreType::CT_Char);
        char val = (char&)data;    
        item->mutable_value()->set_charvalue(val);
    }
    else if (nInfo == typeid(int)) {
        cout << "int: ";
        item->mutable_value()->set_typecode(::Arp::Type::Grpc::CoreType::CT_Int16);
        int16_t val = (int16_t&)data;
        item->mutable_value()->set_int16value(val);
    }
    else if (nInfo == typeid(float)) {
        cout << "float: ";
        item->mutable_value()->set_typecode(::Arp::Type::Grpc::CoreType::CT_Real32);
        float val = (float&)data;
        item->mutable_value()->set_floatvalue(val);
    }
    else if (nInfo == typeid(string)) {
        cout << "string: ";
        item->mutable_value()->set_typecode(::Arp::Type::Grpc::CoreType::CT_String);
        std::string val = (std::string&)data;
        item->mutable_value()->set_stringvalue(val);
    }
    else {
        cout << nInfo.name() << " - UNKNOW!" ;
        cout << endl;
        return 0;
    }
    cout << data  << endl;

    Status status = stub_->Write(&context, request, &reply);
 
    if (status.ok()) {
        return true;
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return false;
    }
}

#else
bool dataaccess_client::WriteElementalData(const std::string& ins_path,const bool& bool_data)
{
    ClientContext context;

    IDataAccessServiceWriteRequest request;
    IDataAccessServiceWriteResponse reply;

    ::Arp::Plc::Gds::Services::Grpc::WriteItem* item = request.add_data();

    using namespace std;

    cout << "Write bool data: " << bool_data << endl;
    item->set_portname(ins_path);
    item->mutable_value()->set_typecode(::Arp::Type::Grpc::CoreType::CT_Boolean);
    item->mutable_value()->set_boolvalue(bool_data);

    Status status = stub_->Write(&context, request, &reply);
 
    if (status.ok()) {
        return true;
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return false;
    }
}

bool dataaccess_client::WriteElementalData(const std::string& ins_path,const int& int_data)
{
    ClientContext context;

    IDataAccessServiceWriteRequest request;
    IDataAccessServiceWriteResponse reply;

    ::Arp::Plc::Gds::Services::Grpc::WriteItem* item = request.add_data();

    using namespace std;

    cout << "Write int data: " << int_data << endl;
    item->set_portname(ins_path);
    item->mutable_value()->set_typecode(::Arp::Type::Grpc::CoreType::CT_Int16);
    item->mutable_value()->set_int16value(int_data);

    Status status = stub_->Write(&context, request, &reply);
 
    if (status.ok()) {
        return true;
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return false;
    }
}

bool dataaccess_client::WriteElementalData(const std::string& ins_path,const char& char_data)
{
    ClientContext context;

    IDataAccessServiceWriteRequest request;
    IDataAccessServiceWriteResponse reply;

    ::Arp::Plc::Gds::Services::Grpc::WriteItem* item = request.add_data();

    using namespace std;

    cout << "Write char data: " << char_data << endl;
    item->set_portname(ins_path);
    item->mutable_value()->set_typecode(::Arp::Type::Grpc::CoreType::CT_Char);
    item->mutable_value()->set_charvalue(char_data);

    Status status = stub_->Write(&context, request, &reply);
 
    if (status.ok()) {
        return true;
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return false;
    }   
}

bool dataaccess_client::WriteElementalData(const std::string& ins_path,const std::vector<char>& vec_char_data)
{
    ClientContext context;

    IDataAccessServiceWriteRequest request;
    IDataAccessServiceWriteResponse reply;

    ::Arp::Plc::Gds::Services::Grpc::WriteItem* item = request.add_data();

    using namespace std;

    cout << "Write vector of char data: " ;
    item->set_portname(ins_path);
    item->mutable_value()->set_typecode(::Arp::Type::Grpc::CoreType::CT_Array);

    for (auto& elmt : vec_char_data) {
        cout << elmt << " "; 
        ::Arp::Type::Grpc::ObjectType* arrElmt = item->mutable_value()->mutable_arrayvalue()->add_arrayelements();        
        arrElmt->set_typecode(::Arp::Type::Grpc::CoreType::CT_Char);
        arrElmt->set_charvalue(elmt);
    }
    cout << endl;

    Status status = stub_->Write(&context, request, &reply);
 
    if (status.ok()) {
        return true;
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
                 << std::endl;
        return false;
    }   
}

#endif
