// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DeviceSettingItem.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_DeviceSettingItem_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_DeviceSettingItem_2eproto

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
#include "ArpTypes.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_DeviceSettingItem_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_DeviceSettingItem_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_DeviceSettingItem_2eproto;
namespace Arp {
namespace Device {
namespace Interface {
namespace Services {
namespace Grpc {
class DeviceSettingItem;
class DeviceSettingItemDefaultTypeInternal;
extern DeviceSettingItemDefaultTypeInternal _DeviceSettingItem_default_instance_;
}  // namespace Grpc
}  // namespace Services
}  // namespace Interface
}  // namespace Device
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> ::Arp::Device::Interface::Services::Grpc::DeviceSettingItem* Arena::CreateMaybeMessage<::Arp::Device::Interface::Services::Grpc::DeviceSettingItem>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Arp {
namespace Device {
namespace Interface {
namespace Services {
namespace Grpc {

// ===================================================================

class DeviceSettingItem PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Arp.Device.Interface.Services.Grpc.DeviceSettingItem) */ {
 public:
  inline DeviceSettingItem() : DeviceSettingItem(nullptr) {}
  virtual ~DeviceSettingItem();

  DeviceSettingItem(const DeviceSettingItem& from);
  DeviceSettingItem(DeviceSettingItem&& from) noexcept
    : DeviceSettingItem() {
    *this = ::std::move(from);
  }

  inline DeviceSettingItem& operator=(const DeviceSettingItem& from) {
    CopyFrom(from);
    return *this;
  }
  inline DeviceSettingItem& operator=(DeviceSettingItem&& from) noexcept {
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
  static const DeviceSettingItem& default_instance();

  static inline const DeviceSettingItem* internal_default_instance() {
    return reinterpret_cast<const DeviceSettingItem*>(
               &_DeviceSettingItem_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DeviceSettingItem& a, DeviceSettingItem& b) {
    a.Swap(&b);
  }
  inline void Swap(DeviceSettingItem* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DeviceSettingItem* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DeviceSettingItem* New() const final {
    return CreateMaybeMessage<DeviceSettingItem>(nullptr);
  }

  DeviceSettingItem* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DeviceSettingItem>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DeviceSettingItem& from);
  void MergeFrom(const DeviceSettingItem& from);
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
  void InternalSwap(DeviceSettingItem* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Arp.Device.Interface.Services.Grpc.DeviceSettingItem";
  }
  protected:
  explicit DeviceSettingItem(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_DeviceSettingItem_2eproto);
    return ::descriptor_table_DeviceSettingItem_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSettingFieldNumber = 1,
    kValueFieldNumber = 2,
  };
  // string Setting = 1;
  void clear_setting();
  const std::string& setting() const;
  void set_setting(const std::string& value);
  void set_setting(std::string&& value);
  void set_setting(const char* value);
  void set_setting(const char* value, size_t size);
  std::string* mutable_setting();
  std::string* release_setting();
  void set_allocated_setting(std::string* setting);
  private:
  const std::string& _internal_setting() const;
  void _internal_set_setting(const std::string& value);
  std::string* _internal_mutable_setting();
  public:

  // .Arp.Type.Grpc.ObjectType Value = 2;
  bool has_value() const;
  private:
  bool _internal_has_value() const;
  public:
  void clear_value();
  const ::Arp::Type::Grpc::ObjectType& value() const;
  ::Arp::Type::Grpc::ObjectType* release_value();
  ::Arp::Type::Grpc::ObjectType* mutable_value();
  void set_allocated_value(::Arp::Type::Grpc::ObjectType* value);
  private:
  const ::Arp::Type::Grpc::ObjectType& _internal_value() const;
  ::Arp::Type::Grpc::ObjectType* _internal_mutable_value();
  public:
  void unsafe_arena_set_allocated_value(
      ::Arp::Type::Grpc::ObjectType* value);
  ::Arp::Type::Grpc::ObjectType* unsafe_arena_release_value();

  // @@protoc_insertion_point(class_scope:Arp.Device.Interface.Services.Grpc.DeviceSettingItem)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr setting_;
  ::Arp::Type::Grpc::ObjectType* value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_DeviceSettingItem_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DeviceSettingItem

// string Setting = 1;
inline void DeviceSettingItem::clear_setting() {
  setting_.ClearToEmpty();
}
inline const std::string& DeviceSettingItem::setting() const {
  // @@protoc_insertion_point(field_get:Arp.Device.Interface.Services.Grpc.DeviceSettingItem.Setting)
  return _internal_setting();
}
inline void DeviceSettingItem::set_setting(const std::string& value) {
  _internal_set_setting(value);
  // @@protoc_insertion_point(field_set:Arp.Device.Interface.Services.Grpc.DeviceSettingItem.Setting)
}
inline std::string* DeviceSettingItem::mutable_setting() {
  // @@protoc_insertion_point(field_mutable:Arp.Device.Interface.Services.Grpc.DeviceSettingItem.Setting)
  return _internal_mutable_setting();
}
inline const std::string& DeviceSettingItem::_internal_setting() const {
  return setting_.Get();
}
inline void DeviceSettingItem::_internal_set_setting(const std::string& value) {
  
  setting_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void DeviceSettingItem::set_setting(std::string&& value) {
  
  setting_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Arp.Device.Interface.Services.Grpc.DeviceSettingItem.Setting)
}
inline void DeviceSettingItem::set_setting(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  setting_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:Arp.Device.Interface.Services.Grpc.DeviceSettingItem.Setting)
}
inline void DeviceSettingItem::set_setting(const char* value,
    size_t size) {
  
  setting_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Arp.Device.Interface.Services.Grpc.DeviceSettingItem.Setting)
}
inline std::string* DeviceSettingItem::_internal_mutable_setting() {
  
  return setting_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* DeviceSettingItem::release_setting() {
  // @@protoc_insertion_point(field_release:Arp.Device.Interface.Services.Grpc.DeviceSettingItem.Setting)
  return setting_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void DeviceSettingItem::set_allocated_setting(std::string* setting) {
  if (setting != nullptr) {
    
  } else {
    
  }
  setting_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), setting,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Arp.Device.Interface.Services.Grpc.DeviceSettingItem.Setting)
}

// .Arp.Type.Grpc.ObjectType Value = 2;
inline bool DeviceSettingItem::_internal_has_value() const {
  return this != internal_default_instance() && value_ != nullptr;
}
inline bool DeviceSettingItem::has_value() const {
  return _internal_has_value();
}
inline const ::Arp::Type::Grpc::ObjectType& DeviceSettingItem::_internal_value() const {
  const ::Arp::Type::Grpc::ObjectType* p = value_;
  return p != nullptr ? *p : reinterpret_cast<const ::Arp::Type::Grpc::ObjectType&>(
      ::Arp::Type::Grpc::_ObjectType_default_instance_);
}
inline const ::Arp::Type::Grpc::ObjectType& DeviceSettingItem::value() const {
  // @@protoc_insertion_point(field_get:Arp.Device.Interface.Services.Grpc.DeviceSettingItem.Value)
  return _internal_value();
}
inline void DeviceSettingItem::unsafe_arena_set_allocated_value(
    ::Arp::Type::Grpc::ObjectType* value) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(value_);
  }
  value_ = value;
  if (value) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Arp.Device.Interface.Services.Grpc.DeviceSettingItem.Value)
}
inline ::Arp::Type::Grpc::ObjectType* DeviceSettingItem::release_value() {
  
  ::Arp::Type::Grpc::ObjectType* temp = value_;
  value_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::Arp::Type::Grpc::ObjectType* DeviceSettingItem::unsafe_arena_release_value() {
  // @@protoc_insertion_point(field_release:Arp.Device.Interface.Services.Grpc.DeviceSettingItem.Value)
  
  ::Arp::Type::Grpc::ObjectType* temp = value_;
  value_ = nullptr;
  return temp;
}
inline ::Arp::Type::Grpc::ObjectType* DeviceSettingItem::_internal_mutable_value() {
  
  if (value_ == nullptr) {
    auto* p = CreateMaybeMessage<::Arp::Type::Grpc::ObjectType>(GetArena());
    value_ = p;
  }
  return value_;
}
inline ::Arp::Type::Grpc::ObjectType* DeviceSettingItem::mutable_value() {
  // @@protoc_insertion_point(field_mutable:Arp.Device.Interface.Services.Grpc.DeviceSettingItem.Value)
  return _internal_mutable_value();
}
inline void DeviceSettingItem::set_allocated_value(::Arp::Type::Grpc::ObjectType* value) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(value_);
  }
  if (value) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, value, submessage_arena);
    }
    
  } else {
    
  }
  value_ = value;
  // @@protoc_insertion_point(field_set_allocated:Arp.Device.Interface.Services.Grpc.DeviceSettingItem.Value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Grpc
}  // namespace Services
}  // namespace Interface
}  // namespace Device
}  // namespace Arp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_DeviceSettingItem_2eproto
