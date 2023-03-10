// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionProperty.proto

#include "SessionProperty.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_ArpTypes_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ObjectType_ArpTypes_2eproto;
namespace Arp {
namespace Services {
namespace DataLogger {
namespace Services {
namespace Grpc {
class SessionPropertyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SessionProperty> _instance;
} _SessionProperty_default_instance_;
}  // namespace Grpc
}  // namespace Services
}  // namespace DataLogger
}  // namespace Services
}  // namespace Arp
static void InitDefaultsscc_info_SessionProperty_SessionProperty_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Arp::Services::DataLogger::Services::Grpc::_SessionProperty_default_instance_;
    new (ptr) ::Arp::Services::DataLogger::Services::Grpc::SessionProperty();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SessionProperty_SessionProperty_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_SessionProperty_SessionProperty_2eproto}, {
      &scc_info_ObjectType_ArpTypes_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_SessionProperty_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_SessionProperty_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_SessionProperty_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_SessionProperty_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Arp::Services::DataLogger::Services::Grpc::SessionProperty, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Arp::Services::DataLogger::Services::Grpc::SessionProperty, name_),
  PROTOBUF_FIELD_OFFSET(::Arp::Services::DataLogger::Services::Grpc::SessionProperty, value_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Arp::Services::DataLogger::Services::Grpc::SessionProperty)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Arp::Services::DataLogger::Services::Grpc::_SessionProperty_default_instance_),
};

const char descriptor_table_protodef_SessionProperty_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025SessionProperty.proto\022%Arp.Services.Da"
  "taLogger.Services.Grpc\032\031SessionPropertyN"
  "ame.proto\032\016ArpTypes.proto\"\205\001\n\017SessionPro"
  "perty\022H\n\004Name\030\001 \001(\0162:.Arp.Services.DataL"
  "ogger.Services.Grpc.SessionPropertyName\022"
  "(\n\005Value\030\002 \001(\0132\031.Arp.Type.Grpc.ObjectTyp"
  "eb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_SessionProperty_2eproto_deps[2] = {
  &::descriptor_table_ArpTypes_2eproto,
  &::descriptor_table_SessionPropertyName_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_SessionProperty_2eproto_sccs[1] = {
  &scc_info_SessionProperty_SessionProperty_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_SessionProperty_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SessionProperty_2eproto = {
  false, false, descriptor_table_protodef_SessionProperty_2eproto, "SessionProperty.proto", 249,
  &descriptor_table_SessionProperty_2eproto_once, descriptor_table_SessionProperty_2eproto_sccs, descriptor_table_SessionProperty_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_SessionProperty_2eproto::offsets,
  file_level_metadata_SessionProperty_2eproto, 1, file_level_enum_descriptors_SessionProperty_2eproto, file_level_service_descriptors_SessionProperty_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_SessionProperty_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_SessionProperty_2eproto)), true);
namespace Arp {
namespace Services {
namespace DataLogger {
namespace Services {
namespace Grpc {

// ===================================================================

class SessionProperty::_Internal {
 public:
  static const ::Arp::Type::Grpc::ObjectType& value(const SessionProperty* msg);
};

const ::Arp::Type::Grpc::ObjectType&
SessionProperty::_Internal::value(const SessionProperty* msg) {
  return *msg->value_;
}
void SessionProperty::clear_value() {
  if (GetArena() == nullptr && value_ != nullptr) {
    delete value_;
  }
  value_ = nullptr;
}
SessionProperty::SessionProperty(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Arp.Services.DataLogger.Services.Grpc.SessionProperty)
}
SessionProperty::SessionProperty(const SessionProperty& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_value()) {
    value_ = new ::Arp::Type::Grpc::ObjectType(*from.value_);
  } else {
    value_ = nullptr;
  }
  name_ = from.name_;
  // @@protoc_insertion_point(copy_constructor:Arp.Services.DataLogger.Services.Grpc.SessionProperty)
}

void SessionProperty::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SessionProperty_SessionProperty_2eproto.base);
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&value_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&name_) -
      reinterpret_cast<char*>(&value_)) + sizeof(name_));
}

SessionProperty::~SessionProperty() {
  // @@protoc_insertion_point(destructor:Arp.Services.DataLogger.Services.Grpc.SessionProperty)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SessionProperty::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete value_;
}

void SessionProperty::ArenaDtor(void* object) {
  SessionProperty* _this = reinterpret_cast< SessionProperty* >(object);
  (void)_this;
}
void SessionProperty::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SessionProperty::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SessionProperty& SessionProperty::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SessionProperty_SessionProperty_2eproto.base);
  return *internal_default_instance();
}


void SessionProperty::Clear() {
// @@protoc_insertion_point(message_clear_start:Arp.Services.DataLogger.Services.Grpc.SessionProperty)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && value_ != nullptr) {
    delete value_;
  }
  value_ = nullptr;
  name_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionProperty::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .Arp.Services.DataLogger.Services.Grpc.SessionPropertyName Name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_name(static_cast<::Arp::Services::DataLogger::Services::Grpc::SessionPropertyName>(val));
        } else goto handle_unusual;
        continue;
      // .Arp.Type.Grpc.ObjectType Value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_value(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* SessionProperty::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Arp.Services.DataLogger.Services.Grpc.SessionProperty)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .Arp.Services.DataLogger.Services.Grpc.SessionPropertyName Name = 1;
  if (this->name() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_name(), target);
  }

  // .Arp.Type.Grpc.ObjectType Value = 2;
  if (this->has_value()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::value(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Arp.Services.DataLogger.Services.Grpc.SessionProperty)
  return target;
}

size_t SessionProperty::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Arp.Services.DataLogger.Services.Grpc.SessionProperty)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .Arp.Type.Grpc.ObjectType Value = 2;
  if (this->has_value()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *value_);
  }

  // .Arp.Services.DataLogger.Services.Grpc.SessionPropertyName Name = 1;
  if (this->name() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_name());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SessionProperty::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Arp.Services.DataLogger.Services.Grpc.SessionProperty)
  GOOGLE_DCHECK_NE(&from, this);
  const SessionProperty* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SessionProperty>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Arp.Services.DataLogger.Services.Grpc.SessionProperty)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Arp.Services.DataLogger.Services.Grpc.SessionProperty)
    MergeFrom(*source);
  }
}

void SessionProperty::MergeFrom(const SessionProperty& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Arp.Services.DataLogger.Services.Grpc.SessionProperty)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_value()) {
    _internal_mutable_value()->::Arp::Type::Grpc::ObjectType::MergeFrom(from._internal_value());
  }
  if (from.name() != 0) {
    _internal_set_name(from._internal_name());
  }
}

void SessionProperty::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Arp.Services.DataLogger.Services.Grpc.SessionProperty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SessionProperty::CopyFrom(const SessionProperty& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Arp.Services.DataLogger.Services.Grpc.SessionProperty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionProperty::IsInitialized() const {
  return true;
}

void SessionProperty::InternalSwap(SessionProperty* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SessionProperty, name_)
      + sizeof(SessionProperty::name_)
      - PROTOBUF_FIELD_OFFSET(SessionProperty, value_)>(
          reinterpret_cast<char*>(&value_),
          reinterpret_cast<char*>(&other->value_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionProperty::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Grpc
}  // namespace Services
}  // namespace DataLogger
}  // namespace Services
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Arp::Services::DataLogger::Services::Grpc::SessionProperty* Arena::CreateMaybeMessage< ::Arp::Services::DataLogger::Services::Grpc::SessionProperty >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Arp::Services::DataLogger::Services::Grpc::SessionProperty >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
