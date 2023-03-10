// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: IPasswordAuthenticationService.proto

#include "IPasswordAuthenticationService.pb.h"
#include "IPasswordAuthenticationService.grpc.pb.h"

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

static const char* IPasswordAuthenticationService_method_names[] = {
  "/Arp.System.Um.Services.Grpc.IPasswordAuthenticationService/CreateSession",
  "/Arp.System.Um.Services.Grpc.IPasswordAuthenticationService/ProlongSession",
  "/Arp.System.Um.Services.Grpc.IPasswordAuthenticationService/CloseSession",
};

std::unique_ptr< IPasswordAuthenticationService::Stub> IPasswordAuthenticationService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< IPasswordAuthenticationService::Stub> stub(new IPasswordAuthenticationService::Stub(channel));
  return stub;
}

IPasswordAuthenticationService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateSession_(IPasswordAuthenticationService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ProlongSession_(IPasswordAuthenticationService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CloseSession_(IPasswordAuthenticationService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status IPasswordAuthenticationService::Stub::CreateSession(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionRequest& request, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionRequest, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CreateSession_, context, request, response);
}

void IPasswordAuthenticationService::Stub::experimental_async::CreateSession(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionRequest* request, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionRequest, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateSession_, context, request, response, std::move(f));
}

void IPasswordAuthenticationService::Stub::experimental_async::CreateSession(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionRequest* request, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateSession_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionResponse>* IPasswordAuthenticationService::Stub::PrepareAsyncCreateSessionRaw(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionResponse, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CreateSession_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionResponse>* IPasswordAuthenticationService::Stub::AsyncCreateSessionRaw(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateSessionRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IPasswordAuthenticationService::Stub::ProlongSession(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionRequest& request, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionRequest, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ProlongSession_, context, request, response);
}

void IPasswordAuthenticationService::Stub::experimental_async::ProlongSession(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionRequest* request, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionRequest, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ProlongSession_, context, request, response, std::move(f));
}

void IPasswordAuthenticationService::Stub::experimental_async::ProlongSession(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionRequest* request, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ProlongSession_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionResponse>* IPasswordAuthenticationService::Stub::PrepareAsyncProlongSessionRaw(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionResponse, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ProlongSession_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionResponse>* IPasswordAuthenticationService::Stub::AsyncProlongSessionRaw(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncProlongSessionRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IPasswordAuthenticationService::Stub::CloseSession(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCloseSessionRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCloseSessionRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CloseSession_, context, request, response);
}

void IPasswordAuthenticationService::Stub::experimental_async::CloseSession(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCloseSessionRequest* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCloseSessionRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CloseSession_, context, request, response, std::move(f));
}

void IPasswordAuthenticationService::Stub::experimental_async::CloseSession(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCloseSessionRequest* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CloseSession_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* IPasswordAuthenticationService::Stub::PrepareAsyncCloseSessionRaw(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCloseSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf::Empty, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCloseSessionRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CloseSession_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* IPasswordAuthenticationService::Stub::AsyncCloseSessionRaw(::grpc::ClientContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCloseSessionRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCloseSessionRaw(context, request, cq);
  result->StartCall();
  return result;
}

IPasswordAuthenticationService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IPasswordAuthenticationService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IPasswordAuthenticationService::Service, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionRequest, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IPasswordAuthenticationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionRequest* req,
             ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionResponse* resp) {
               return service->CreateSession(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IPasswordAuthenticationService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IPasswordAuthenticationService::Service, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionRequest, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IPasswordAuthenticationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionRequest* req,
             ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionResponse* resp) {
               return service->ProlongSession(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IPasswordAuthenticationService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IPasswordAuthenticationService::Service, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCloseSessionRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IPasswordAuthenticationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCloseSessionRequest* req,
             ::google::protobuf::Empty* resp) {
               return service->CloseSession(ctx, req, resp);
             }, this)));
}

IPasswordAuthenticationService::Service::~Service() {
}

::grpc::Status IPasswordAuthenticationService::Service::CreateSession(::grpc::ServerContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionRequest* request, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCreateSessionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IPasswordAuthenticationService::Service::ProlongSession(::grpc::ServerContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionRequest* request, ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceProlongSessionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IPasswordAuthenticationService::Service::CloseSession(::grpc::ServerContext* context, const ::Arp::System::Um::Services::Grpc::IPasswordAuthenticationServiceCloseSessionRequest* request, ::google::protobuf::Empty* response) {
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

