// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TraitItem.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_TraitItem_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_TraitItem_2eproto

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
#include "Traits.pb.h"
#include "ArpTypes.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_TraitItem_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_TraitItem_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_TraitItem_2eproto;
namespace Arp {
namespace System {
namespace Commons {
namespace Services {
namespace Io {
namespace Grpc {
class TraitItem;
class TraitItemDefaultTypeInternal;
extern TraitItemDefaultTypeInternal _TraitItem_default_instance_;
}  // namespace Grpc
}  // namespace Io
}  // namespace Services
}  // namespace Commons
}  // namespace System
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> ::Arp::System::Commons::Services::Io::Grpc::TraitItem* Arena::CreateMaybeMessage<::Arp::System::Commons::Services::Io::Grpc::TraitItem>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Arp {
namespace System {
namespace Commons {
namespace Services {
namespace Io {
namespace Grpc {

// ===================================================================

class TraitItem PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Arp.System.Commons.Services.Io.Grpc.TraitItem) */ {
 public:
  inline TraitItem() : TraitItem(nullptr) {}
  virtual ~TraitItem();

  TraitItem(const TraitItem& from);
  TraitItem(TraitItem&& from) noexcept
    : TraitItem() {
    *this = ::std::move(from);
  }

  inline TraitItem& operator=(const TraitItem& from) {
    CopyFrom(from);
    return *this;
  }
  inline TraitItem& operator=(TraitItem&& from) noexcept {
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
  static const TraitItem& default_instance();

  static inline const TraitItem* internal_default_instance() {
    return reinterpret_cast<const TraitItem*>(
               &_TraitItem_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TraitItem& a, TraitItem& b) {
    a.Swap(&b);
  }
  inline void Swap(TraitItem* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TraitItem* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TraitItem* New() const final {
    return CreateMaybeMessage<TraitItem>(nullptr);
  }

  TraitItem* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TraitItem>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TraitItem& from);
  void MergeFrom(const TraitItem& from);
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
  void InternalSwap(TraitItem* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Arp.System.Commons.Services.Io.Grpc.TraitItem";
  }
  protected:
  explicit TraitItem(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_TraitItem_2eproto);
    return ::descriptor_table_TraitItem_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 2,
    kTraitFieldNumber = 1,
  };
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

  // .Arp.System.Commons.Services.Io.Grpc.Traits Trait = 1;
  void clear_trait();
  ::Arp::System::Commons::Services::Io::Grpc::Traits trait() const;
  void set_trait(::Arp::System::Commons::Services::Io::Grpc::Traits value);
  private:
  ::Arp::System::Commons::Services::Io::Grpc::Traits _internal_trait() const;
  void _internal_set_trait(::Arp::System::Commons::Services::Io::Grpc::Traits value);
  public:

  // @@protoc_insertion_point(class_scope:Arp.System.Commons.Services.Io.Grpc.TraitItem)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::Arp::Type::Grpc::ObjectType* value_;
  int trait_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_TraitItem_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TraitItem

// .Arp.System.Commons.Services.Io.Grpc.Traits Trait = 1;
inline void TraitItem::clear_trait() {
  trait_ = 0;
}
inline ::Arp::System::Commons::Services::Io::Grpc::Traits TraitItem::_internal_trait() const {
  return static_cast< ::Arp::System::Commons::Services::Io::Grpc::Traits >(trait_);
}
inline ::Arp::System::Commons::Services::Io::Grpc::Traits TraitItem::trait() const {
  // @@protoc_insertion_point(field_get:Arp.System.Commons.Services.Io.Grpc.TraitItem.Trait)
  return _internal_trait();
}
inline void TraitItem::_internal_set_trait(::Arp::System::Commons::Services::Io::Grpc::Traits value) {
  
  trait_ = value;
}
inline void TraitItem::set_trait(::Arp::System::Commons::Services::Io::Grpc::Traits value) {
  _internal_set_trait(value);
  // @@protoc_insertion_point(field_set:Arp.System.Commons.Services.Io.Grpc.TraitItem.Trait)
}

// .Arp.Type.Grpc.ObjectType Value = 2;
inline bool TraitItem::_internal_has_value() const {
  return this != internal_default_instance() && value_ != nullptr;
}
inline bool TraitItem::has_value() const {
  return _internal_has_value();
}
inline const ::Arp::Type::Grpc::ObjectType& TraitItem::_internal_value() const {
  const ::Arp::Type::Grpc::ObjectType* p = value_;
  return p != nullptr ? *p : reinterpret_cast<const ::Arp::Type::Grpc::ObjectType&>(
      ::Arp::Type::Grpc::_ObjectType_default_instance_);
}
inline const ::Arp::Type::Grpc::ObjectType& TraitItem::value() const {
  // @@protoc_insertion_point(field_get:Arp.System.Commons.Services.Io.Grpc.TraitItem.Value)
  return _internal_value();
}
inline void TraitItem::unsafe_arena_set_allocated_value(
    ::Arp::Type::Grpc::ObjectType* value) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(value_);
  }
  value_ = value;
  if (value) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Arp.System.Commons.Services.Io.Grpc.TraitItem.Value)
}
inline ::Arp::Type::Grpc::ObjectType* TraitItem::release_value() {
  
  ::Arp::Type::Grpc::ObjectType* temp = value_;
  value_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::Arp::Type::Grpc::ObjectType* TraitItem::unsafe_arena_release_value() {
  // @@protoc_insertion_point(field_release:Arp.System.Commons.Services.Io.Grpc.TraitItem.Value)
  
  ::Arp::Type::Grpc::ObjectType* temp = value_;
  value_ = nullptr;
  return temp;
}
inline ::Arp::Type::Grpc::ObjectType* TraitItem::_internal_mutable_value() {
  
  if (value_ == nullptr) {
    auto* p = CreateMaybeMessage<::Arp::Type::Grpc::ObjectType>(GetArena());
    value_ = p;
  }
  return value_;
}
inline ::Arp::Type::Grpc::ObjectType* TraitItem::mutable_value() {
  // @@protoc_insertion_point(field_mutable:Arp.System.Commons.Services.Io.Grpc.TraitItem.Value)
  return _internal_mutable_value();
}
inline void TraitItem::set_allocated_value(::Arp::Type::Grpc::ObjectType* value) {
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
  // @@protoc_insertion_point(field_set_allocated:Arp.System.Commons.Services.Io.Grpc.TraitItem.Value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Grpc
}  // namespace Io
}  // namespace Services
}  // namespace Commons
}  // namespace System
}  // namespace Arp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_TraitItem_2eproto
