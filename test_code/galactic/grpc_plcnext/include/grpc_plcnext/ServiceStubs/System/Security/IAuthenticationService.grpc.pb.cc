// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: IAuthenticationService.proto

#include "IAuthenticationService.pb.h"
#include "IAuthenticationService.grpc.pb.h"

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
namespace Security {
namespace Services {
namespace Grpc {

static const char* IAuthenticationService_method_names[] = {
  "/Arp.System.Security.Services.Grpc.IAuthenticationService/CreateSession",
  "/Arp.System.Security.Services.Grpc.IAuthenticationService/CloseSession",
};

std::unique_ptr< IAuthenticationService::Stub> IAuthenticationService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< IAuthenticationService::Stub> stub(new IAuthenticationService::Stub(channel));
  return stub;
}

IAuthenticationService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateSession_(IAuthenticationService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CloseSession_(IAuthenticationService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status IAuthenticationService::Stub::CreateSession(::grpc::ClientContext* context, const ::Arp::System::Security::Services::Grpc::CreateSessionRequest& request, ::Arp::System::Security::Services::Grpc::CreateSessionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::System::Security::Services::Grpc::CreateSessionRequest, ::Arp::System::Security::Services::Grpc::CreateSessionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CreateSession_, context, request, response);
}

void IAuthenticationService::Stub::experimental_async::CreateSession(::grpc::ClientContext* context, const ::Arp::System::Security::Services::Grpc::CreateSessionRequest* request, ::Arp::System::Security::Services::Grpc::CreateSessionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::System::Security::Services::Grpc::CreateSessionRequest, ::Arp::System::Security::Services::Grpc::CreateSessionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateSession_, context, request, response, std::move(f));
}

void IAuthenticationService::Stub::experimental_async::CreateSession(::grpc::ClientContext* context, const ::Arp::System::Security::Services::Grpc::CreateSessionRequest* request, ::Arp::System::Security::Services::Grpc::CreateSessionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateSession_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Security::Services::Grpc::CreateSessionResponse>* IAuthenticationService::Stub::PrepareAsyncCreateSessionRaw(::grpc::ClientContext* context, const ::Arp::System::Security::Services::Grpc::CreateSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::System::Security::Services::Grpc::CreateSessionResponse, ::Arp::System::Security::Services::Grpc::CreateSessionRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CreateSession_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Security::Services::Grpc::CreateSessionResponse>* IAuthenticationService::Stub::AsyncCreateSessionRaw(::grpc::ClientContext* context, const ::Arp::System::Security::Services::Grpc::CreateSessionRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateSessionRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IAuthenticationService::Stub::CloseSession(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::Arp::System::Security::Services::Grpc::CloseSessionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::Arp::System::Security::Services::Grpc::CloseSessionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CloseSession_, context, request, response);
}

void IAuthenticationService::Stub::experimental_async::CloseSession(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::Arp::System::Security::Services::Grpc::CloseSessionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::Arp::System::Security::Services::Grpc::CloseSessionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CloseSession_, context, request, response, std::move(f));
}

void IAuthenticationService::Stub::experimental_async::CloseSession(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::Arp::System::Security::Services::Grpc::CloseSessionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CloseSession_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Security::Services::Grpc::CloseSessionResponse>* IAuthenticationService::Stub::PrepareAsyncCloseSessionRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::System::Security::Services::Grpc::CloseSessionResponse, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CloseSession_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Security::Services::Grpc::CloseSessionResponse>* IAuthenticationService::Stub::AsyncCloseSessionRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCloseSessionRaw(context, request, cq);
  result->StartCall();
  return result;
}

IAuthenticationService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IAuthenticationService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IAuthenticationService::Service, ::Arp::System::Security::Services::Grpc::CreateSessionRequest, ::Arp::System::Security::Services::Grpc::CreateSessionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IAuthenticationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::System::Security::Services::Grpc::CreateSessionRequest* req,
             ::Arp::System::Security::Services::Grpc::CreateSessionResponse* resp) {
               return service->CreateSession(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IAuthenticationService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IAuthenticationService::Service, ::google::protobuf::Empty, ::Arp::System::Security::Services::Grpc::CloseSessionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IAuthenticationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::Arp::System::Security::Services::Grpc::CloseSessionResponse* resp) {
               return service->CloseSession(ctx, req, resp);
             }, this)));
}

IAuthenticationService::Service::~Service() {
}

::grpc::Status IAuthenticationService::Service::CreateSession(::grpc::ServerContext* context, const ::Arp::System::Security::Services::Grpc::CreateSessionRequest* request, ::Arp::System::Security::Services::Grpc::CreateSessionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAuthenticationService::Service::CloseSession(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::Arp::System::Security::Services::Grpc::CloseSessionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace Arp
}  // namespace System
}  // namespace Security
}  // namespace Services
}  // namespace Grpc
