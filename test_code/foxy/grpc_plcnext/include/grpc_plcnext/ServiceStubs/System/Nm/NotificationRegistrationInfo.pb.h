// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NotificationRegistrationInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_NotificationRegistrationInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_NotificationRegistrationInfo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "NotificationRegistrationStatus.pb.h"
#include "Severity.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_NotificationRegistrationInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_NotificationRegistrationInfo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_NotificationRegistrationInfo_2eproto;
namespace Arp {
namespace System {
namespace Nm {
namespace Services {
namespace Grpc {
class NotificationRegistrationInfo;
class NotificationRegistrationInfoDefaultTypeInternal;
extern NotificationRegistrationInfoDefaultTypeInternal _NotificationRegistrationInfo_default_instance_;
}  // namespace Grpc
}  // namespace Services
}  // namespace Nm
}  // namespace System
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> ::Arp::System::Nm::Services::Grpc::NotificationRegistrationInfo* Arena::CreateMaybeMessage<::Arp::System::Nm::Services::Grpc::NotificationRegistrationInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Arp {
namespace System {
namespace Nm {
namespace Services {
namespace Grpc {

// ===================================================================

class NotificationRegistrationInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo) */ {
 public:
  inline NotificationRegistrationInfo() : NotificationRegistrationInfo(nullptr) {}
  virtual ~NotificationRegistrationInfo();

  NotificationRegistrationInfo(const NotificationRegistrationInfo& from);
  NotificationRegistrationInfo(NotificationRegistrationInfo&& from) noexcept
    : NotificationRegistrationInfo() {
    *this = ::std::move(from);
  }

  inline NotificationRegistrationInfo& operator=(const NotificationRegistrationInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline NotificationRegistrationInfo& operator=(NotificationRegistrationInfo&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const NotificationRegistrationInfo& default_instance();

  static inline const NotificationRegistrationInfo* internal_default_instance() {
    return reinterpret_cast<const NotificationRegistrationInfo*>(
               &_NotificationRegistrationInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NotificationRegistrationInfo& a, NotificationRegistrationInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(NotificationRegistrationInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NotificationRegistrationInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NotificationRegistrationInfo* New() const final {
    return CreateMaybeMessage<NotificationRegistrationInfo>(nullptr);
  }

  NotificationRegistrationInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NotificationRegistrationInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NotificationRegistrationInfo& from);
  void MergeFrom(const NotificationRegistrationInfo& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NotificationRegistrationInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo";
  }
  protected:
  explicit NotificationRegistrationInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_NotificationRegistrationInfo_2eproto);
    return ::descriptor_table_NotificationRegistrationInfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNotificationNameFieldNumber = 2,
    kSenderNameFieldNumber = 3,
    kNotificationNameIdFieldNumber = 1,
    kSeverityFieldNumber = 4,
    kPayloadTypeIdFieldNumber = 5,
    kStatusFieldNumber = 6,
  };
  // string NotificationName = 2;
  void clear_notificationname();
  const std::string& notificationname() const;
  void set_notificationname(const std::string& value);
  void set_notificationname(std::string&& value);
  void set_notificationname(const char* value);
  void set_notificationname(const char* value, size_t size);
  std::string* mutable_notificationname();
  std::string* release_notificationname();
  void set_allocated_notificationname(std::string* notificationname);
  private:
  const std::string& _internal_notificationname() const;
  void _internal_set_notificationname(const std::string& value);
  std::string* _internal_mutable_notificationname();
  public:

  // string SenderName = 3;
  void clear_sendername();
  const std::string& sendername() const;
  void set_sendername(const std::string& value);
  void set_sendername(std::string&& value);
  void set_sendername(const char* value);
  void set_sendername(const char* value, size_t size);
  std::string* mutable_sendername();
  std::string* release_sendername();
  void set_allocated_sendername(std::string* sendername);
  private:
  const std::string& _internal_sendername() const;
  void _internal_set_sendername(const std::string& value);
  std::string* _internal_mutable_sendername();
  public:

  // uint32 NotificationNameId = 1;
  void clear_notificationnameid();
  ::PROTOBUF_NAMESPACE_ID::uint32 notificationnameid() const;
  void set_notificationnameid(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_notificationnameid() const;
  void _internal_set_notificationnameid(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // .Arp.System.Nm.Services.Grpc.Severity Severity = 4;
  void clear_severity();
  ::Arp::System::Nm::Services::Grpc::Severity severity() const;
  void set_severity(::Arp::System::Nm::Services::Grpc::Severity value);
  private:
  ::Arp::System::Nm::Services::Grpc::Severity _internal_severity() const;
  void _internal_set_severity(::Arp::System::Nm::Services::Grpc::Severity value);
  public:

  // int32 PayloadTypeId = 5;
  void clear_payloadtypeid();
  ::PROTOBUF_NAMESPACE_ID::int32 payloadtypeid() const;
  void set_payloadtypeid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_payloadtypeid() const;
  void _internal_set_payloadtypeid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // .Arp.System.Nm.Services.Grpc.NotificationRegistrationStatus Status = 6;
  void clear_status();
  ::Arp::System::Nm::Services::Grpc::NotificationRegistrationStatus status() const;
  void set_status(::Arp::System::Nm::Services::Grpc::NotificationRegistrationStatus value);
  private:
  ::Arp::System::Nm::Services::Grpc::NotificationRegistrationStatus _internal_status() const;
  void _internal_set_status(::Arp::System::Nm::Services::Grpc::NotificationRegistrationStatus value);
  public:

  // @@protoc_insertion_point(class_scope:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr notificationname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sendername_;
  ::PROTOBUF_NAMESPACE_ID::uint32 notificationnameid_;
  int severity_;
  ::PROTOBUF_NAMESPACE_ID::int32 payloadtypeid_;
  int status_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_NotificationRegistrationInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NotificationRegistrationInfo

// uint32 NotificationNameId = 1;
inline void NotificationRegistrationInfo::clear_notificationnameid() {
  notificationnameid_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NotificationRegistrationInfo::_internal_notificationnameid() const {
  return notificationnameid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NotificationRegistrationInfo::notificationnameid() const {
  // @@protoc_insertion_point(field_get:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.NotificationNameId)
  return _internal_notificationnameid();
}
inline void NotificationRegistrationInfo::_internal_set_notificationnameid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  notificationnameid_ = value;
}
inline void NotificationRegistrationInfo::set_notificationnameid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_notificationnameid(value);
  // @@protoc_insertion_point(field_set:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.NotificationNameId)
}

// string NotificationName = 2;
inline void NotificationRegistrationInfo::clear_notificationname() {
  notificationname_.ClearToEmpty();
}
inline const std::string& NotificationRegistrationInfo::notificationname() const {
  // @@protoc_insertion_point(field_get:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.NotificationName)
  return _internal_notificationname();
}
inline void NotificationRegistrationInfo::set_notificationname(const std::string& value) {
  _internal_set_notificationname(value);
  // @@protoc_insertion_point(field_set:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.NotificationName)
}
inline std::string* NotificationRegistrationInfo::mutable_notificationname() {
  // @@protoc_insertion_point(field_mutable:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.NotificationName)
  return _internal_mutable_notificationname();
}
inline const std::string& NotificationRegistrationInfo::_internal_notificationname() const {
  return notificationname_.Get();
}
inline void NotificationRegistrationInfo::_internal_set_notificationname(const std::string& value) {
  
  notificationname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void NotificationRegistrationInfo::set_notificationname(std::string&& value) {
  
  notificationname_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.NotificationName)
}
inline void NotificationRegistrationInfo::set_notificationname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  notificationname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.NotificationName)
}
inline void NotificationRegistrationInfo::set_notificationname(const char* value,
    size_t size) {
  
  notificationname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.NotificationName)
}
inline std::string* NotificationRegistrationInfo::_internal_mutable_notificationname() {
  
  return notificationname_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* NotificationRegistrationInfo::release_notificationname() {
  // @@protoc_insertion_point(field_release:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.NotificationName)
  return notificationname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void NotificationRegistrationInfo::set_allocated_notificationname(std::string* notificationname) {
  if (notificationname != nullptr) {
    
  } else {
    
  }
  notificationname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), notificationname,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.NotificationName)
}

// string SenderName = 3;
inline void NotificationRegistrationInfo::clear_sendername() {
  sendername_.ClearToEmpty();
}
inline const std::string& NotificationRegistrationInfo::sendername() const {
  // @@protoc_insertion_point(field_get:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.SenderName)
  return _internal_sendername();
}
inline void NotificationRegistrationInfo::set_sendername(const std::string& value) {
  _internal_set_sendername(value);
  // @@protoc_insertion_point(field_set:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.SenderName)
}
inline std::string* NotificationRegistrationInfo::mutable_sendername() {
  // @@protoc_insertion_point(field_mutable:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.SenderName)
  return _internal_mutable_sendername();
}
inline const std::string& NotificationRegistrationInfo::_internal_sendername() const {
  return sendername_.Get();
}
inline void NotificationRegistrationInfo::_internal_set_sendername(const std::string& value) {
  
  sendername_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void NotificationRegistrationInfo::set_sendername(std::string&& value) {
  
  sendername_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.SenderName)
}
inline void NotificationRegistrationInfo::set_sendername(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  sendername_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.SenderName)
}
inline void NotificationRegistrationInfo::set_sendername(const char* value,
    size_t size) {
  
  sendername_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.SenderName)
}
inline std::string* NotificationRegistrationInfo::_internal_mutable_sendername() {
  
  return sendername_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* NotificationRegistrationInfo::release_sendername() {
  // @@protoc_insertion_point(field_release:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.SenderName)
  return sendername_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void NotificationRegistrationInfo::set_allocated_sendername(std::string* sendername) {
  if (sendername != nullptr) {
    
  } else {
    
  }
  sendername_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sendername,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.SenderName)
}

// .Arp.System.Nm.Services.Grpc.Severity Severity = 4;
inline void NotificationRegistrationInfo::clear_severity() {
  severity_ = 0;
}
inline ::Arp::System::Nm::Services::Grpc::Severity NotificationRegistrationInfo::_internal_severity() const {
  return static_cast< ::Arp::System::Nm::Services::Grpc::Severity >(severity_);
}
inline ::Arp::System::Nm::Services::Grpc::Severity NotificationRegistrationInfo::severity() const {
  // @@protoc_insertion_point(field_get:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.Severity)
  return _internal_severity();
}
inline void NotificationRegistrationInfo::_internal_set_severity(::Arp::System::Nm::Services::Grpc::Severity value) {
  
  severity_ = value;
}
inline void NotificationRegistrationInfo::set_severity(::Arp::System::Nm::Services::Grpc::Severity value) {
  _internal_set_severity(value);
  // @@protoc_insertion_point(field_set:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.Severity)
}

// int32 PayloadTypeId = 5;
inline void NotificationRegistrationInfo::clear_payloadtypeid() {
  payloadtypeid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NotificationRegistrationInfo::_internal_payloadtypeid() const {
  return payloadtypeid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NotificationRegistrationInfo::payloadtypeid() const {
  // @@protoc_insertion_point(field_get:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.PayloadTypeId)
  return _internal_payloadtypeid();
}
inline void NotificationRegistrationInfo::_internal_set_payloadtypeid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  payloadtypeid_ = value;
}
inline void NotificationRegistrationInfo::set_payloadtypeid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_payloadtypeid(value);
  // @@protoc_insertion_point(field_set:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.PayloadTypeId)
}

// .Arp.System.Nm.Services.Grpc.NotificationRegistrationStatus Status = 6;
inline void NotificationRegistrationInfo::clear_status() {
  status_ = 0;
}
inline ::Arp::System::Nm::Services::Grpc::NotificationRegistrationStatus NotificationRegistrationInfo::_internal_status() const {
  return static_cast< ::Arp::System::Nm::Services::Grpc::NotificationRegistrationStatus >(status_);
}
inline ::Arp::System::Nm::Services::Grpc::NotificationRegistrationStatus NotificationRegistrationInfo::status() const {
  // @@protoc_insertion_point(field_get:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.Status)
  return _internal_status();
}
inline void NotificationRegistrationInfo::_internal_set_status(::Arp::System::Nm::Services::Grpc::NotificationRegistrationStatus value) {
  
  status_ = value;
}
inline void NotificationRegistrationInfo::set_status(::Arp::System::Nm::Services::Grpc::NotificationRegistrationStatus value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:Arp.System.Nm.Services.Grpc.NotificationRegistrationInfo.Status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Grpc
}  // namespace Services
}  // namespace Nm
}  // namespace System
}  // namespace Arp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_NotificationRegistrationInfo_2eproto
