// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: IDeviceStatusService.proto
// Original file comments:
// /////////////////////////////////////////////////////////////////////////////
//
//  Copyright PHOENIX CONTACT Electronics GmbH
//
// /////////////////////////////////////////////////////////////////////////////
//
#ifndef GRPC_IDeviceStatusService_2eproto__INCLUDED
#define GRPC_IDeviceStatusService_2eproto__INCLUDED

#include "IDeviceStatusService.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace Arp {
namespace Device {
namespace Interface {
namespace Services {
namespace Grpc {

// *
// Use this service to read device states.
//
class IDeviceStatusService final {
 public:
  static constexpr char const* service_full_name() {
    return "Arp.Device.Interface.Services.Grpc.IDeviceStatusService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // / <summary>
    // / Read a single state
    // / </summary>
    // / <param name="identifier">String for select the item</param>
    // / <returns>value as <code>RscVariant</code> on success, <code>RscType::Void</code> on error</returns>
    virtual ::grpc::Status GetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest& request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>> AsyncGetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>>(AsyncGetItemRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>> PrepareAsyncGetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>>(PrepareAsyncGetItemRaw(context, request, cq));
    }
    // / <summary>
    // / Read a list of states
    // / </summary>
    // / <param name="identifiers">Arry of String for select the items</param>
    // / <returns>value as <code>RscVariant</code> on success, <code>RscType::Void</code> on error</returns>
    virtual ::grpc::Status GetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest& request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>> AsyncGetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>>(AsyncGetItemsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>> PrepareAsyncGetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>>(PrepareAsyncGetItemsRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // / <summary>
      // / Read a single state
      // / </summary>
      // / <param name="identifier">String for select the item</param>
      // / <returns>value as <code>RscVariant</code> on success, <code>RscType::Void</code> on error</returns>
      virtual void GetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      // / <summary>
      // / Read a list of states
      // / </summary>
      // / <param name="identifiers">Arry of String for select the items</param>
      // / <returns>value as <code>RscVariant</code> on success, <code>RscType::Void</code> on error</returns>
      virtual void GetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>* AsyncGetItemRaw(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>* PrepareAsyncGetItemRaw(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>* AsyncGetItemsRaw(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>* PrepareAsyncGetItemsRaw(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest& request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>> AsyncGetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>>(AsyncGetItemRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>> PrepareAsyncGetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>>(PrepareAsyncGetItemRaw(context, request, cq));
    }
    ::grpc::Status GetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest& request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>> AsyncGetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>>(AsyncGetItemsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>> PrepareAsyncGetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>>(PrepareAsyncGetItemsRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void GetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>* AsyncGetItemRaw(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>* PrepareAsyncGetItemRaw(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>* AsyncGetItemsRaw(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>* PrepareAsyncGetItemsRaw(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetItem_;
    const ::grpc::internal::RpcMethod rpcmethod_GetItems_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // / <summary>
    // / Read a single state
    // / </summary>
    // / <param name="identifier">String for select the item</param>
    // / <returns>value as <code>RscVariant</code> on success, <code>RscType::Void</code> on error</returns>
    virtual ::grpc::Status GetItem(::grpc::ServerContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* response);
    // / <summary>
    // / Read a list of states
    // / </summary>
    // / <param name="identifiers">Arry of String for select the items</param>
    // / <returns>value as <code>RscVariant</code> on success, <code>RscType::Void</code> on error</returns>
    virtual ::grpc::Status GetItems(::grpc::ServerContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetItem : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetItem() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetItem() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetItem(::grpc::ServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetItem(::grpc::ServerContext* context, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* request, ::grpc::ServerAsyncResponseWriter< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetItems : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetItems() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetItems() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetItems(::grpc::ServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetItems(::grpc::ServerContext* context, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* request, ::grpc::ServerAsyncResponseWriter< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetItem<WithAsyncMethod_GetItems<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetItem : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetItem() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* response) { return this->GetItem(context, request, response); }));}
    void SetMessageAllocatorFor_GetItem(
        ::grpc::experimental::MessageAllocator< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetItem() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetItem(::grpc::ServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetItem(
      ::grpc::CallbackServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetItem(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetItems : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetItems() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* response) { return this->GetItems(context, request, response); }));}
    void SetMessageAllocatorFor_GetItems(
        ::grpc::experimental::MessageAllocator< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetItems() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetItems(::grpc::ServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetItems(
      ::grpc::CallbackServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetItems(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetItem<ExperimentalWithCallbackMethod_GetItems<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_GetItem<ExperimentalWithCallbackMethod_GetItems<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetItem : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetItem() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetItem() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetItem(::grpc::ServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetItems : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetItems() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetItems() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetItems(::grpc::ServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetItem : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetItem() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetItem() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetItem(::grpc::ServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetItem(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetItems : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetItems() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_GetItems() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetItems(::grpc::ServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetItems(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetItem : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetItem() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetItem(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetItem() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetItem(::grpc::ServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetItem(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetItem(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetItems : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetItems() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetItems(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetItems() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetItems(::grpc::ServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetItems(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetItems(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetItem : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetItem() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>* streamer) {
                       return this->StreamedGetItem(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetItem() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetItem(::grpc::ServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetItem(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemRequest,::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetItems : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetItems() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>* streamer) {
                       return this->StreamedGetItems(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetItems() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetItems(::grpc::ServerContext* /*context*/, const ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest* /*request*/, ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetItems(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsRequest,::Arp::Device::Interface::Services::Grpc::IDeviceStatusServiceGetItemsResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetItem<WithStreamedUnaryMethod_GetItems<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetItem<WithStreamedUnaryMethod_GetItems<Service > > StreamedService;
};

}  // namespace Grpc
}  // namespace Services
}  // namespace Interface
}  // namespace Device
}  // namespace Arp


#endif  // GRPC_IDeviceStatusService_2eproto__INCLUDED
