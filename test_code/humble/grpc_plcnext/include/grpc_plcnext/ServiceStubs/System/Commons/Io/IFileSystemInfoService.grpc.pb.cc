// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: IFileSystemInfoService.proto

#include "IFileSystemInfoService.pb.h"
#include "IFileSystemInfoService.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace Arp {
namespace System {
namespace Commons {
namespace Services {
namespace Io {
namespace Grpc {

static const char* IFileSystemInfoService_method_names[] = {
  "/Arp.System.Commons.Services.Io.Grpc.IFileSystemInfoService/GetSupportedTraits",
  "/Arp.System.Commons.Services.Io.Grpc.IFileSystemInfoService/GetPermissions",
  "/Arp.System.Commons.Services.Io.Grpc.IFileSystemInfoService/AddPermissions",
  "/Arp.System.Commons.Services.Io.Grpc.IFileSystemInfoService/RemovePermissions",
  "/Arp.System.Commons.Services.Io.Grpc.IFileSystemInfoService/GetFileSystemTraitsEntry",
  "/Arp.System.Commons.Services.Io.Grpc.IFileSystemInfoService/GetSpaceInfo",
  "/Arp.System.Commons.Services.Io.Grpc.IFileSystemInfoService/GetRootDirectories",
};

std::unique_ptr< IFileSystemInfoService::Stub> IFileSystemInfoService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< IFileSystemInfoService::Stub> stub(new IFileSystemInfoService::Stub(channel));
  return stub;
}

IFileSystemInfoService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetSupportedTraits_(IFileSystemInfoService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetPermissions_(IFileSystemInfoService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AddPermissions_(IFileSystemInfoService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RemovePermissions_(IFileSystemInfoService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetFileSystemTraitsEntry_(IFileSystemInfoService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetSpaceInfo_(IFileSystemInfoService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetRootDirectories_(IFileSystemInfoService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status IFileSystemInfoService::Stub::GetSupportedTraits(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSupportedTraitsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSupportedTraitsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetSupportedTraits_, context, request, response);
}

void IFileSystemInfoService::Stub::experimental_async::GetSupportedTraits(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSupportedTraitsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSupportedTraitsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetSupportedTraits_, context, request, response, std::move(f));
}

void IFileSystemInfoService::Stub::experimental_async::GetSupportedTraits(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSupportedTraitsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetSupportedTraits_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSupportedTraitsResponse>* IFileSystemInfoService::Stub::PrepareAsyncGetSupportedTraitsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSupportedTraitsResponse, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetSupportedTraits_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSupportedTraitsResponse>* IFileSystemInfoService::Stub::AsyncGetSupportedTraitsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetSupportedTraitsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IFileSystemInfoService::Stub::GetPermissions(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsRequest& request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetPermissions_, context, request, response);
}

void IFileSystemInfoService::Stub::experimental_async::GetPermissions(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetPermissions_, context, request, response, std::move(f));
}

void IFileSystemInfoService::Stub::experimental_async::GetPermissions(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetPermissions_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsResponse>* IFileSystemInfoService::Stub::PrepareAsyncGetPermissionsRaw(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsResponse, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetPermissions_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsResponse>* IFileSystemInfoService::Stub::AsyncGetPermissionsRaw(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetPermissionsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IFileSystemInfoService::Stub::AddPermissions(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsRequest& request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AddPermissions_, context, request, response);
}

void IFileSystemInfoService::Stub::experimental_async::AddPermissions(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AddPermissions_, context, request, response, std::move(f));
}

void IFileSystemInfoService::Stub::experimental_async::AddPermissions(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AddPermissions_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsResponse>* IFileSystemInfoService::Stub::PrepareAsyncAddPermissionsRaw(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsResponse, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AddPermissions_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsResponse>* IFileSystemInfoService::Stub::AsyncAddPermissionsRaw(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAddPermissionsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IFileSystemInfoService::Stub::RemovePermissions(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsRequest& request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RemovePermissions_, context, request, response);
}

void IFileSystemInfoService::Stub::experimental_async::RemovePermissions(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RemovePermissions_, context, request, response, std::move(f));
}

void IFileSystemInfoService::Stub::experimental_async::RemovePermissions(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RemovePermissions_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsResponse>* IFileSystemInfoService::Stub::PrepareAsyncRemovePermissionsRaw(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsResponse, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RemovePermissions_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsResponse>* IFileSystemInfoService::Stub::AsyncRemovePermissionsRaw(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRemovePermissionsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IFileSystemInfoService::Stub::GetFileSystemTraitsEntry(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryRequest& request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetFileSystemTraitsEntry_, context, request, response);
}

void IFileSystemInfoService::Stub::experimental_async::GetFileSystemTraitsEntry(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetFileSystemTraitsEntry_, context, request, response, std::move(f));
}

void IFileSystemInfoService::Stub::experimental_async::GetFileSystemTraitsEntry(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetFileSystemTraitsEntry_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryResponse>* IFileSystemInfoService::Stub::PrepareAsyncGetFileSystemTraitsEntryRaw(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryResponse, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetFileSystemTraitsEntry_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryResponse>* IFileSystemInfoService::Stub::AsyncGetFileSystemTraitsEntryRaw(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetFileSystemTraitsEntryRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IFileSystemInfoService::Stub::GetSpaceInfo(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoRequest& request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetSpaceInfo_, context, request, response);
}

void IFileSystemInfoService::Stub::experimental_async::GetSpaceInfo(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetSpaceInfo_, context, request, response, std::move(f));
}

void IFileSystemInfoService::Stub::experimental_async::GetSpaceInfo(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetSpaceInfo_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoResponse>* IFileSystemInfoService::Stub::PrepareAsyncGetSpaceInfoRaw(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoResponse, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetSpaceInfo_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoResponse>* IFileSystemInfoService::Stub::AsyncGetSpaceInfoRaw(::grpc::ClientContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetSpaceInfoRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IFileSystemInfoService::Stub::GetRootDirectories(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetRootDirectoriesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetRootDirectoriesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetRootDirectories_, context, request, response);
}

void IFileSystemInfoService::Stub::experimental_async::GetRootDirectories(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetRootDirectoriesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetRootDirectoriesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetRootDirectories_, context, request, response, std::move(f));
}

void IFileSystemInfoService::Stub::experimental_async::GetRootDirectories(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetRootDirectoriesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetRootDirectories_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetRootDirectoriesResponse>* IFileSystemInfoService::Stub::PrepareAsyncGetRootDirectoriesRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetRootDirectoriesResponse, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetRootDirectories_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetRootDirectoriesResponse>* IFileSystemInfoService::Stub::AsyncGetRootDirectoriesRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetRootDirectoriesRaw(context, request, cq);
  result->StartCall();
  return result;
}

IFileSystemInfoService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IFileSystemInfoService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IFileSystemInfoService::Service, ::google::protobuf::Empty, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSupportedTraitsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IFileSystemInfoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSupportedTraitsResponse* resp) {
               return service->GetSupportedTraits(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IFileSystemInfoService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IFileSystemInfoService::Service, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IFileSystemInfoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsRequest* req,
             ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsResponse* resp) {
               return service->GetPermissions(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IFileSystemInfoService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IFileSystemInfoService::Service, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IFileSystemInfoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsRequest* req,
             ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsResponse* resp) {
               return service->AddPermissions(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IFileSystemInfoService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IFileSystemInfoService::Service, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IFileSystemInfoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsRequest* req,
             ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsResponse* resp) {
               return service->RemovePermissions(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IFileSystemInfoService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IFileSystemInfoService::Service, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IFileSystemInfoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryRequest* req,
             ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryResponse* resp) {
               return service->GetFileSystemTraitsEntry(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IFileSystemInfoService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IFileSystemInfoService::Service, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoRequest, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IFileSystemInfoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoRequest* req,
             ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoResponse* resp) {
               return service->GetSpaceInfo(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IFileSystemInfoService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IFileSystemInfoService::Service, ::google::protobuf::Empty, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetRootDirectoriesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IFileSystemInfoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetRootDirectoriesResponse* resp) {
               return service->GetRootDirectories(ctx, req, resp);
             }, this)));
}

IFileSystemInfoService::Service::~Service() {
}

::grpc::Status IFileSystemInfoService::Service::GetSupportedTraits(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSupportedTraitsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IFileSystemInfoService::Service::GetPermissions(::grpc::ServerContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetPermissionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IFileSystemInfoService::Service::AddPermissions(::grpc::ServerContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceAddPermissionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IFileSystemInfoService::Service::RemovePermissions(::grpc::ServerContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceRemovePermissionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IFileSystemInfoService::Service::GetFileSystemTraitsEntry(::grpc::ServerContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetFileSystemTraitsEntryResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IFileSystemInfoService::Service::GetSpaceInfo(::grpc::ServerContext* context, const ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoRequest* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetSpaceInfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IFileSystemInfoService::Service::GetRootDirectories(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::Arp::System::Commons::Services::Io::Grpc::IFileSystemInfoServiceGetRootDirectoriesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace Arp
}  // namespace System
}  // namespace Commons
}  // namespace Services
}  // namespace Io
}  // namespace Grpc
