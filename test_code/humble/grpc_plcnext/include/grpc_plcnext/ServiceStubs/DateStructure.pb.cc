// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DateStructure.proto

#include "DateStructure.pb.h"

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
namespace Grpc {
class DateStructureDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<DateStructure> _instance;
} _DateStructure_default_instance_;
}  // namespace Grpc
}  // namespace Arp
static void InitDefaultsscc_info_DateStructure_DateStructure_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Arp::Grpc::_DateStructure_default_instance_;
    new (ptr) ::Arp::Grpc::DateStructure();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_DateStructure_DateStructure_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_DateStructure_DateStructure_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_DateStructure_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_DateStructure_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_DateStructure_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_DateStructure_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Arp::Grpc::DateStructure, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Arp::Grpc::DateStructure, year_),
  PROTOBUF_FIELD_OFFSET(::Arp::Grpc::DateStructure, month_),
  PROTOBUF_FIELD_OFFSET(::Arp::Grpc::DateStructure, day_),
  PROTOBUF_FIELD_OFFSET(::Arp::Grpc::DateStructure, hour_),
  PROTOBUF_FIELD_OFFSET(::Arp::Grpc::DateStructure, minute_),
  PROTOBUF_FIELD_OFFSET(::Arp::Grpc::DateStructure, second_),
  PROTOBUF_FIELD_OFFSET(::Arp::Grpc::DateStructure, millisecond_),
  PROTOBUF_FIELD_OFFSET(::Arp::Grpc::DateStructure, microsecond_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Arp::Grpc::DateStructure)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Arp::Grpc::_DateStructure_default_instance_),
};

const char descriptor_table_protodef_DateStructure_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023DateStructure.proto\022\010Arp.Grpc\"\221\001\n\rDate"
  "Structure\022\014\n\004year\030\001 \001(\021\022\r\n\005month\030\002 \001(\021\022\013"
  "\n\003day\030\003 \001(\021\022\014\n\004hour\030\004 \001(\021\022\016\n\006minute\030\005 \001("
  "\021\022\016\n\006second\030\006 \001(\021\022\023\n\013millisecond\030\007 \001(\021\022\023"
  "\n\013microsecond\030\010 \001(\021b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_DateStructure_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_DateStructure_2eproto_sccs[1] = {
  &scc_info_DateStructure_DateStructure_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_DateStructure_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_DateStructure_2eproto = {
  false, false, descriptor_table_protodef_DateStructure_2eproto, "DateStructure.proto", 187,
  &descriptor_table_DateStructure_2eproto_once, descriptor_table_DateStructure_2eproto_sccs, descriptor_table_DateStructure_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_DateStructure_2eproto::offsets,
  file_level_metadata_DateStructure_2eproto, 1, file_level_enum_descriptors_DateStructure_2eproto, file_level_service_descriptors_DateStructure_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_DateStructure_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_DateStructure_2eproto)), true);
namespace Arp {
namespace Grpc {

// ===================================================================

class DateStructure::_Internal {
 public:
};

DateStructure::DateStructure(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Arp.Grpc.DateStructure)
}
DateStructure::DateStructure(const DateStructure& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&year_, &from.year_,
    static_cast<size_t>(reinterpret_cast<char*>(&microsecond_) -
    reinterpret_cast<char*>(&year_)) + sizeof(microsecond_));
  // @@protoc_insertion_point(copy_constructor:Arp.Grpc.DateStructure)
}

void DateStructure::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&year_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&microsecond_) -
      reinterpret_cast<char*>(&year_)) + sizeof(microsecond_));
}

DateStructure::~DateStructure() {
  // @@protoc_insertion_point(destructor:Arp.Grpc.DateStructure)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void DateStructure::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void DateStructure::ArenaDtor(void* object) {
  DateStructure* _this = reinterpret_cast< DateStructure* >(object);
  (void)_this;
}
void DateStructure::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void DateStructure::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DateStructure& DateStructure::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_DateStructure_DateStructure_2eproto.base);
  return *internal_default_instance();
}


void DateStructure::Clear() {
// @@protoc_insertion_point(message_clear_start:Arp.Grpc.DateStructure)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&year_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&microsecond_) -
      reinterpret_cast<char*>(&year_)) + sizeof(microsecond_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DateStructure::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // sint32 year = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          year_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // sint32 month = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          month_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // sint32 day = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          day_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // sint32 hour = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          hour_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // sint32 minute = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          minute_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // sint32 second = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          second_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // sint32 millisecond = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          millisecond_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // sint32 microsecond = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          microsecond_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* DateStructure::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Arp.Grpc.DateStructure)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // sint32 year = 1;
  if (this->year() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(1, this->_internal_year(), target);
  }

  // sint32 month = 2;
  if (this->month() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(2, this->_internal_month(), target);
  }

  // sint32 day = 3;
  if (this->day() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(3, this->_internal_day(), target);
  }

  // sint32 hour = 4;
  if (this->hour() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(4, this->_internal_hour(), target);
  }

  // sint32 minute = 5;
  if (this->minute() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(5, this->_internal_minute(), target);
  }

  // sint32 second = 6;
  if (this->second() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(6, this->_internal_second(), target);
  }

  // sint32 millisecond = 7;
  if (this->millisecond() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(7, this->_internal_millisecond(), target);
  }

  // sint32 microsecond = 8;
  if (this->microsecond() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(8, this->_internal_microsecond(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Arp.Grpc.DateStructure)
  return target;
}

size_t DateStructure::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Arp.Grpc.DateStructure)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // sint32 year = 1;
  if (this->year() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SInt32Size(
        this->_internal_year());
  }

  // sint32 month = 2;
  if (this->month() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SInt32Size(
        this->_internal_month());
  }

  // sint32 day = 3;
  if (this->day() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SInt32Size(
        this->_internal_day());
  }

  // sint32 hour = 4;
  if (this->hour() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SInt32Size(
        this->_internal_hour());
  }

  // sint32 minute = 5;
  if (this->minute() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SInt32Size(
        this->_internal_minute());
  }

  // sint32 second = 6;
  if (this->second() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SInt32Size(
        this->_internal_second());
  }

  // sint32 millisecond = 7;
  if (this->millisecond() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SInt32Size(
        this->_internal_millisecond());
  }

  // sint32 microsecond = 8;
  if (this->microsecond() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SInt32Size(
        this->_internal_microsecond());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DateStructure::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Arp.Grpc.DateStructure)
  GOOGLE_DCHECK_NE(&from, this);
  const DateStructure* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<DateStructure>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Arp.Grpc.DateStructure)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Arp.Grpc.DateStructure)
    MergeFrom(*source);
  }
}

void DateStructure::MergeFrom(const DateStructure& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Arp.Grpc.DateStructure)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.year() != 0) {
    _internal_set_year(from._internal_year());
  }
  if (from.month() != 0) {
    _internal_set_month(from._internal_month());
  }
  if (from.day() != 0) {
    _internal_set_day(from._internal_day());
  }
  if (from.hour() != 0) {
    _internal_set_hour(from._internal_hour());
  }
  if (from.minute() != 0) {
    _internal_set_minute(from._internal_minute());
  }
  if (from.second() != 0) {
    _internal_set_second(from._internal_second());
  }
  if (from.millisecond() != 0) {
    _internal_set_millisecond(from._internal_millisecond());
  }
  if (from.microsecond() != 0) {
    _internal_set_microsecond(from._internal_microsecond());
  }
}

void DateStructure::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Arp.Grpc.DateStructure)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DateStructure::CopyFrom(const DateStructure& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Arp.Grpc.DateStructure)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DateStructure::IsInitialized() const {
  return true;
}

void DateStructure::InternalSwap(DateStructure* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(DateStructure, microsecond_)
      + sizeof(DateStructure::microsecond_)
      - PROTOBUF_FIELD_OFFSET(DateStructure, year_)>(
          reinterpret_cast<char*>(&year_),
          reinterpret_cast<char*>(&other->year_));
}

::PROTOBUF_NAMESPACE_ID::Metadata DateStructure::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Grpc
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Arp::Grpc::DateStructure* Arena::CreateMaybeMessage< ::Arp::Grpc::DateStructure >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Arp::Grpc::DateStructure >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
