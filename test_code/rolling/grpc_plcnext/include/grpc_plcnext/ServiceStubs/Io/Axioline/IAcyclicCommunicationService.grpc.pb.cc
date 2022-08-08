// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: IAcyclicCommunicationService.proto

#include "IAcyclicCommunicationService.pb.h"
#include "IAcyclicCommunicationService.grpc.pb.h"

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
namespace Io {
namespace Axioline {
namespace Services {
namespace Grpc {

static const char* IAcyclicCommunicationService_method_names[] = {
  "/Arp.Io.Axioline.Services.Grpc.IAcyclicCommunicationService/PdiRead",
  "/Arp.Io.Axioline.Services.Grpc.IAcyclicCommunicationService/PdiWrite",
};

std::unique_ptr< IAcyclicCommunicationService::Stub> IAcyclicCommunicationService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< IAcyclicCommunicationService::Stub> stub(new IAcyclicCommunicationService::Stub(channel));
  return stub;
}

IAcyclicCommunicationService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_PdiRead_(IAcyclicCommunicationService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PdiWrite_(IAcyclicCommunicationService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status IAcyclicCommunicationService::Stub::PdiRead(::grpc::ClientContext* context, const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadRequest& request, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadRequest, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PdiRead_, context, request, response);
}

void IAcyclicCommunicationService::Stub::experimental_async::PdiRead(::grpc::ClientContext* context, const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadRequest* request, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadRequest, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PdiRead_, context, request, response, std::move(f));
}

void IAcyclicCommunicationService::Stub::experimental_async::PdiRead(::grpc::ClientContext* context, const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadRequest* request, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PdiRead_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadResponse>* IAcyclicCommunicationService::Stub::PrepareAsyncPdiReadRaw(::grpc::ClientContext* context, const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadResponse, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PdiRead_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadResponse>* IAcyclicCommunicationService::Stub::AsyncPdiReadRaw(::grpc::ClientContext* context, const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPdiReadRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IAcyclicCommunicationService::Stub::PdiWrite(::grpc::ClientContext* context, const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteRequest& request, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteRequest, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PdiWrite_, context, request, response);
}

void IAcyclicCommunicationService::Stub::experimental_async::PdiWrite(::grpc::ClientContext* context, const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteRequest* request, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteRequest, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PdiWrite_, context, request, response, std::move(f));
}

void IAcyclicCommunicationService::Stub::experimental_async::PdiWrite(::grpc::ClientContext* context, const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteRequest* request, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PdiWrite_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteResponse>* IAcyclicCommunicationService::Stub::PrepareAsyncPdiWriteRaw(::grpc::ClientContext* context, const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteResponse, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PdiWrite_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteResponse>* IAcyclicCommunicationService::Stub::AsyncPdiWriteRaw(::grpc::ClientContext* context, const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPdiWriteRaw(context, request, cq);
  result->StartCall();
  return result;
}

IAcyclicCommunicationService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IAcyclicCommunicationService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IAcyclicCommunicationService::Service, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadRequest, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IAcyclicCommunicationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadRequest* req,
             ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadResponse* resp) {
               return service->PdiRead(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IAcyclicCommunicationService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IAcyclicCommunicationService::Service, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteRequest, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IAcyclicCommunicationService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteRequest* req,
             ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteResponse* resp) {
               return service->PdiWrite(ctx, req, resp);
             }, this)));
}

IAcyclicCommunicationService::Service::~Service() {
}

::grpc::Status IAcyclicCommunicationService::Service::PdiRead(::grpc::ServerContext* context, const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadRequest* request, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiReadResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IAcyclicCommunicationService::Service::PdiWrite(::grpc::ServerContext* context, const ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteRequest* request, ::Arp::Io::Axioline::Services::Grpc::IAcyclicCommunicationServicePdiWriteResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace Arp
}  // namespace Io
}  // namespace Axioline
}  // namespace Services
}  // namespace Grpc
