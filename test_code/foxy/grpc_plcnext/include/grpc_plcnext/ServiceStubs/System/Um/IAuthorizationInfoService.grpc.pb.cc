// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: IAuthorizationInfoService.proto

#include "IAuthorizationInfoService.pb.h"
#include "IAuthorizationInfoService.grpc.pb.h"

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
namespace Um {
namespace Services {
namespace Grpc {

static const char* IAuthorizationInfoService_method_names[] = {
  "/Arp.System.Um.Services.Grpc.IAuthorizationInfoService/HasPermissionFor",
};

std::unique_ptr< IAuthorizationInfoService::Stub> IAuthorizationInfoService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< IAuthorizationInfoService::Stub> stub(new IAuthorizationInfoService::Stub(channel));
  return stub;
}

IAuthorizationInfoService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_HasPermissionFor_(IAuthorizationInfoService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status IAuthorizationInfoService::Stub::HasPermissionFor(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest& request, ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest, ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_HasPermissionFor_, context, request, response);
}

void IAuthorizationInfoService::Stub::experimental_async::HasPermissionFor(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest* request, ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest, ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_HasPermissionFor_, context, request, response, std::move(f));
}

void IAuthorizationInfoService::Stub::experimental_async::HasPermissionFor(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest* request, ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_HasPermissionFor_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse>* IAuthorizationInfoService::Stub::PrepareAsyncHasPermissionForRaw(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse, ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_HasPermissionFor_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse>* IAuthorizationInfoService::Stub::AsyncHasPermissionForRaw(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncHasPermissionForRaw(context, request, cq);
  result->StartCall();
  return result;
}

IAuthorizationInfoService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IAuthorizationInfoService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IAuthorizationInfoService::Service, ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest, ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IAuthorizationInfoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest* req,
             ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse* resp) {
               return service->HasPermissionFor(ctx, req, resp);
             }, this)));
}

IAuthorizationInfoService::Service::~Service() {
}

::grpc::Status IAuthorizationInfoService::Service::HasPermissionFor(::grpc::ServerContext* context, const ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest* request, ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace Arp
}  // namespace System
}  // namespace Um
}  // namespace Services
}  // namespace Grpc

