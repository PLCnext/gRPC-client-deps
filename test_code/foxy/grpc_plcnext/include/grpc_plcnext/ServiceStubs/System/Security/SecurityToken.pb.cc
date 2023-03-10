// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SecurityToken.proto

#include "SecurityToken.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace Arp {
namespace System {
namespace Security {
namespace Grpc {
class SecurityTokenDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SecurityToken> _instance;
} _SecurityToken_default_instance_;
}  // namespace Grpc
}  // namespace Security
}  // namespace System
}  // namespace Arp
static void InitDefaultsscc_info_SecurityToken_SecurityToken_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Arp::System::Security::Grpc::_SecurityToken_default_instance_;
    new (ptr) ::Arp::System::Security::Grpc::SecurityToken();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SecurityToken_SecurityToken_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_SecurityToken_SecurityToken_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_SecurityToken_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_SecurityToken_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_SecurityToken_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_SecurityToken_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Arp::System::Security::Grpc::SecurityToken, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Arp::System::Security::Grpc::SecurityToken, size_),
  PROTOBUF_FIELD_OFFSET(::Arp::System::Security::Grpc::SecurityToken, value_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Arp::System::Security::Grpc::SecurityToken)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Arp::System::Security::Grpc::_SecurityToken_default_instance_),
};

const char descriptor_table_protodef_SecurityToken_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023SecurityToken.proto\022\030Arp.System.Securi"
  "ty.Grpc\",\n\rSecurityToken\022\014\n\004size\030\001 \001(\004\022\r"
  "\n\005value\030\002 \001(\rb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_SecurityToken_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_SecurityToken_2eproto_sccs[1] = {
  &scc_info_SecurityToken_SecurityToken_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_SecurityToken_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SecurityToken_2eproto = {
  false, false, descriptor_table_protodef_SecurityToken_2eproto, "SecurityToken.proto", 101,
  &descriptor_table_SecurityToken_2eproto_once, descriptor_table_SecurityToken_2eproto_sccs, descriptor_table_SecurityToken_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_SecurityToken_2eproto::offsets,
  file_level_metadata_SecurityToken_2eproto, 1, file_level_enum_descriptors_SecurityToken_2eproto, file_level_service_descriptors_SecurityToken_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_SecurityToken_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_SecurityToken_2eproto)), true);
namespace Arp {
namespace System {
namespace Security {
namespace Grpc {

// ===================================================================

class SecurityToken::_Internal {
 public:
};

SecurityToken::SecurityToken(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Arp.System.Security.Grpc.SecurityToken)
}
SecurityToken::SecurityToken(const SecurityToken& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&size_, &from.size_,
    static_cast<size_t>(reinterpret_cast<char*>(&value_) -
    reinterpret_cast<char*>(&size_)) + sizeof(value_));
  // @@protoc_insertion_point(copy_constructor:Arp.System.Security.Grpc.SecurityToken)
}

void SecurityToken::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&size_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&value_) -
      reinterpret_cast<char*>(&size_)) + sizeof(value_));
}

SecurityToken::~SecurityToken() {
  // @@protoc_insertion_point(destructor:Arp.System.Security.Grpc.SecurityToken)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SecurityToken::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void SecurityToken::ArenaDtor(void* object) {
  SecurityToken* _this = reinterpret_cast< SecurityToken* >(object);
  (void)_this;
}
void SecurityToken::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SecurityToken::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SecurityToken& SecurityToken::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SecurityToken_SecurityToken_2eproto.base);
  return *internal_default_instance();
}


void SecurityToken::Clear() {
// @@protoc_insertion_point(message_clear_start:Arp.System.Security.Grpc.SecurityToken)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&size_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&value_) -
      reinterpret_cast<char*>(&size_)) + sizeof(value_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SecurityToken::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 size = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* SecurityToken::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Arp.System.Security.Grpc.SecurityToken)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 size = 1;
  if (this->size() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_size(), target);
  }

  // uint32 value = 2;
  if (this->value() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Arp.System.Security.Grpc.SecurityToken)
  return target;
}

size_t SecurityToken::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Arp.System.Security.Grpc.SecurityToken)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint64 size = 1;
  if (this->size() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_size());
  }

  // uint32 value = 2;
  if (this->value() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_value());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SecurityToken::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Arp.System.Security.Grpc.SecurityToken)
  GOOGLE_DCHECK_NE(&from, this);
  const SecurityToken* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SecurityToken>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Arp.System.Security.Grpc.SecurityToken)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Arp.System.Security.Grpc.SecurityToken)
    MergeFrom(*source);
  }
}

void SecurityToken::MergeFrom(const SecurityToken& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Arp.System.Security.Grpc.SecurityToken)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.size() != 0) {
    _internal_set_size(from._internal_size());
  }
  if (from.value() != 0) {
    _internal_set_value(from._internal_value());
  }
}

void SecurityToken::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Arp.System.Security.Grpc.SecurityToken)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SecurityToken::CopyFrom(const SecurityToken& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Arp.System.Security.Grpc.SecurityToken)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SecurityToken::IsInitialized() const {
  return true;
}

void SecurityToken::InternalSwap(SecurityToken* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SecurityToken, value_)
      + sizeof(SecurityToken::value_)
      - PROTOBUF_FIELD_OFFSET(SecurityToken, size_)>(
          reinterpret_cast<char*>(&size_),
          reinterpret_cast<char*>(&other->size_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SecurityToken::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Grpc
}  // namespace Security
}  // namespace System
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Arp::System::Security::Grpc::SecurityToken* Arena::CreateMaybeMessage< ::Arp::System::Security::Grpc::SecurityToken >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Arp::System::Security::Grpc::SecurityToken >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
