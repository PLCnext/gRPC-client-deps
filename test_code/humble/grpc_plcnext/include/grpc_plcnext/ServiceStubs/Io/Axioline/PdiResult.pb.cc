// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PdiResult.proto

#include "PdiResult.pb.h"

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
namespace Io {
namespace Axioline {
namespace Services {
namespace Grpc {
class PdiResultDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PdiResult> _instance;
} _PdiResult_default_instance_;
}  // namespace Grpc
}  // namespace Services
}  // namespace Axioline
}  // namespace Io
}  // namespace Arp
static void InitDefaultsscc_info_PdiResult_PdiResult_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Arp::Io::Axioline::Services::Grpc::_PdiResult_default_instance_;
    new (ptr) ::Arp::Io::Axioline::Services::Grpc::PdiResult();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PdiResult_PdiResult_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PdiResult_PdiResult_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_PdiResult_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_PdiResult_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_PdiResult_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_PdiResult_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Arp::Io::Axioline::Services::Grpc::PdiResult, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Arp::Io::Axioline::Services::Grpc::PdiResult, servicedone_),
  PROTOBUF_FIELD_OFFSET(::Arp::Io::Axioline::Services::Grpc::PdiResult, errorcode_),
  PROTOBUF_FIELD_OFFSET(::Arp::Io::Axioline::Services::Grpc::PdiResult, addinfo_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Arp::Io::Axioline::Services::Grpc::PdiResult)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Arp::Io::Axioline::Services::Grpc::_PdiResult_default_instance_),
};

const char descriptor_table_protodef_PdiResult_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017PdiResult.proto\022\035Arp.Io.Axioline.Servi"
  "ces.Grpc\"D\n\tPdiResult\022\023\n\013ServiceDone\030\001 \001"
  "(\010\022\021\n\tErrorCode\030\002 \001(\005\022\017\n\007AddInfo\030\003 \001(\005b\006"
  "proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_PdiResult_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_PdiResult_2eproto_sccs[1] = {
  &scc_info_PdiResult_PdiResult_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_PdiResult_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PdiResult_2eproto = {
  false, false, descriptor_table_protodef_PdiResult_2eproto, "PdiResult.proto", 126,
  &descriptor_table_PdiResult_2eproto_once, descriptor_table_PdiResult_2eproto_sccs, descriptor_table_PdiResult_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_PdiResult_2eproto::offsets,
  file_level_metadata_PdiResult_2eproto, 1, file_level_enum_descriptors_PdiResult_2eproto, file_level_service_descriptors_PdiResult_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_PdiResult_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_PdiResult_2eproto)), true);
namespace Arp {
namespace Io {
namespace Axioline {
namespace Services {
namespace Grpc {

// ===================================================================

class PdiResult::_Internal {
 public:
};

PdiResult::PdiResult(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Arp.Io.Axioline.Services.Grpc.PdiResult)
}
PdiResult::PdiResult(const PdiResult& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&servicedone_, &from.servicedone_,
    static_cast<size_t>(reinterpret_cast<char*>(&addinfo_) -
    reinterpret_cast<char*>(&servicedone_)) + sizeof(addinfo_));
  // @@protoc_insertion_point(copy_constructor:Arp.Io.Axioline.Services.Grpc.PdiResult)
}

void PdiResult::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&servicedone_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&addinfo_) -
      reinterpret_cast<char*>(&servicedone_)) + sizeof(addinfo_));
}

PdiResult::~PdiResult() {
  // @@protoc_insertion_point(destructor:Arp.Io.Axioline.Services.Grpc.PdiResult)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PdiResult::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void PdiResult::ArenaDtor(void* object) {
  PdiResult* _this = reinterpret_cast< PdiResult* >(object);
  (void)_this;
}
void PdiResult::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PdiResult::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PdiResult& PdiResult::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PdiResult_PdiResult_2eproto.base);
  return *internal_default_instance();
}


void PdiResult::Clear() {
// @@protoc_insertion_point(message_clear_start:Arp.Io.Axioline.Services.Grpc.PdiResult)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&servicedone_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&addinfo_) -
      reinterpret_cast<char*>(&servicedone_)) + sizeof(addinfo_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PdiResult::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bool ServiceDone = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          servicedone_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 ErrorCode = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          errorcode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 AddInfo = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          addinfo_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* PdiResult::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Arp.Io.Axioline.Services.Grpc.PdiResult)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool ServiceDone = 1;
  if (this->servicedone() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_servicedone(), target);
  }

  // int32 ErrorCode = 2;
  if (this->errorcode() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_errorcode(), target);
  }

  // int32 AddInfo = 3;
  if (this->addinfo() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_addinfo(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Arp.Io.Axioline.Services.Grpc.PdiResult)
  return target;
}

size_t PdiResult::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Arp.Io.Axioline.Services.Grpc.PdiResult)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool ServiceDone = 1;
  if (this->servicedone() != 0) {
    total_size += 1 + 1;
  }

  // int32 ErrorCode = 2;
  if (this->errorcode() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_errorcode());
  }

  // int32 AddInfo = 3;
  if (this->addinfo() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_addinfo());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PdiResult::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Arp.Io.Axioline.Services.Grpc.PdiResult)
  GOOGLE_DCHECK_NE(&from, this);
  const PdiResult* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PdiResult>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Arp.Io.Axioline.Services.Grpc.PdiResult)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Arp.Io.Axioline.Services.Grpc.PdiResult)
    MergeFrom(*source);
  }
}

void PdiResult::MergeFrom(const PdiResult& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Arp.Io.Axioline.Services.Grpc.PdiResult)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.servicedone() != 0) {
    _internal_set_servicedone(from._internal_servicedone());
  }
  if (from.errorcode() != 0) {
    _internal_set_errorcode(from._internal_errorcode());
  }
  if (from.addinfo() != 0) {
    _internal_set_addinfo(from._internal_addinfo());
  }
}

void PdiResult::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Arp.Io.Axioline.Services.Grpc.PdiResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PdiResult::CopyFrom(const PdiResult& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Arp.Io.Axioline.Services.Grpc.PdiResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PdiResult::IsInitialized() const {
  return true;
}

void PdiResult::InternalSwap(PdiResult* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PdiResult, addinfo_)
      + sizeof(PdiResult::addinfo_)
      - PROTOBUF_FIELD_OFFSET(PdiResult, servicedone_)>(
          reinterpret_cast<char*>(&servicedone_),
          reinterpret_cast<char*>(&other->servicedone_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PdiResult::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Grpc
}  // namespace Services
}  // namespace Axioline
}  // namespace Io
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Arp::Io::Axioline::Services::Grpc::PdiResult* Arena::CreateMaybeMessage< ::Arp::Io::Axioline::Services::Grpc::PdiResult >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Arp::Io::Axioline::Services::Grpc::PdiResult >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
