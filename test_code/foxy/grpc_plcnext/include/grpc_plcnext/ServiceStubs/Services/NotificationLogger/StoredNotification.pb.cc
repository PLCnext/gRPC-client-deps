// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StoredNotification.proto

#include "StoredNotification.pb.h"

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
namespace Services {
namespace NotificationLogger {
namespace Services {
namespace Grpc {
class StoredNotificationDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<StoredNotification> _instance;
} _StoredNotification_default_instance_;
}  // namespace Grpc
}  // namespace Services
}  // namespace NotificationLogger
}  // namespace Services
}  // namespace Arp
static void InitDefaultsscc_info_StoredNotification_StoredNotification_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Arp::Services::NotificationLogger::Services::Grpc::_StoredNotification_default_instance_;
    new (ptr) ::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_StoredNotification_StoredNotification_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_StoredNotification_StoredNotification_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_StoredNotification_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_StoredNotification_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_StoredNotification_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_StoredNotification_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification, id_),
  PROTOBUF_FIELD_OFFSET(::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification, archive_),
  PROTOBUF_FIELD_OFFSET(::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification, notificationname_),
  PROTOBUF_FIELD_OFFSET(::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification, sendername_),
  PROTOBUF_FIELD_OFFSET(::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification, timestamp_),
  PROTOBUF_FIELD_OFFSET(::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification, severity_),
  PROTOBUF_FIELD_OFFSET(::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification, payload_),
  PROTOBUF_FIELD_OFFSET(::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification, payloadxml_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Arp::Services::NotificationLogger::Services::Grpc::_StoredNotification_default_instance_),
};

const char descriptor_table_protodef_StoredNotification_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030StoredNotification.proto\022-Arp.Services"
  ".NotificationLogger.Services.Grpc\"\251\001\n\022St"
  "oredNotification\022\n\n\002Id\030\001 \001(\004\022\017\n\007Archive\030"
  "\002 \001(\t\022\030\n\020NotificationName\030\003 \001(\t\022\022\n\nSende"
  "rName\030\004 \001(\t\022\021\n\tTimeStamp\030\005 \001(\t\022\020\n\010Severi"
  "ty\030\006 \001(\t\022\017\n\007Payload\030\007 \003(\t\022\022\n\nPayloadXml\030"
  "\010 \003(\tb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_StoredNotification_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_StoredNotification_2eproto_sccs[1] = {
  &scc_info_StoredNotification_StoredNotification_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_StoredNotification_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_StoredNotification_2eproto = {
  false, false, descriptor_table_protodef_StoredNotification_2eproto, "StoredNotification.proto", 253,
  &descriptor_table_StoredNotification_2eproto_once, descriptor_table_StoredNotification_2eproto_sccs, descriptor_table_StoredNotification_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_StoredNotification_2eproto::offsets,
  file_level_metadata_StoredNotification_2eproto, 1, file_level_enum_descriptors_StoredNotification_2eproto, file_level_service_descriptors_StoredNotification_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_StoredNotification_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_StoredNotification_2eproto)), true);
namespace Arp {
namespace Services {
namespace NotificationLogger {
namespace Services {
namespace Grpc {

// ===================================================================

class StoredNotification::_Internal {
 public:
};

StoredNotification::StoredNotification(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  payload_(arena),
  payloadxml_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Arp.Services.NotificationLogger.Services.Grpc.StoredNotification)
}
StoredNotification::StoredNotification(const StoredNotification& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      payload_(from.payload_),
      payloadxml_(from.payloadxml_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  archive_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_archive().empty()) {
    archive_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_archive(), 
      GetArena());
  }
  notificationname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_notificationname().empty()) {
    notificationname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_notificationname(), 
      GetArena());
  }
  sendername_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sendername().empty()) {
    sendername_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_sendername(), 
      GetArena());
  }
  timestamp_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_timestamp().empty()) {
    timestamp_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_timestamp(), 
      GetArena());
  }
  severity_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_severity().empty()) {
    severity_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_severity(), 
      GetArena());
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:Arp.Services.NotificationLogger.Services.Grpc.StoredNotification)
}

void StoredNotification::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_StoredNotification_StoredNotification_2eproto.base);
  archive_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  notificationname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sendername_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  timestamp_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  severity_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  id_ = PROTOBUF_ULONGLONG(0);
}

StoredNotification::~StoredNotification() {
  // @@protoc_insertion_point(destructor:Arp.Services.NotificationLogger.Services.Grpc.StoredNotification)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void StoredNotification::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  archive_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  notificationname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sendername_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  timestamp_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  severity_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void StoredNotification::ArenaDtor(void* object) {
  StoredNotification* _this = reinterpret_cast< StoredNotification* >(object);
  (void)_this;
}
void StoredNotification::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void StoredNotification::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const StoredNotification& StoredNotification::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_StoredNotification_StoredNotification_2eproto.base);
  return *internal_default_instance();
}


void StoredNotification::Clear() {
// @@protoc_insertion_point(message_clear_start:Arp.Services.NotificationLogger.Services.Grpc.StoredNotification)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  payload_.Clear();
  payloadxml_.Clear();
  archive_.ClearToEmpty();
  notificationname_.ClearToEmpty();
  sendername_.ClearToEmpty();
  timestamp_.ClearToEmpty();
  severity_.ClearToEmpty();
  id_ = PROTOBUF_ULONGLONG(0);
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StoredNotification::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 Id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string Archive = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_archive();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.Archive"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string NotificationName = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_notificationname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.NotificationName"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string SenderName = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_sendername();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.SenderName"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string TimeStamp = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_timestamp();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.TimeStamp"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string Severity = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_severity();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.Severity"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string Payload = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_payload();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.Payload"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<58>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string PayloadXml = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_payloadxml();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.PayloadXml"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<66>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* StoredNotification::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Arp.Services.NotificationLogger.Services.Grpc.StoredNotification)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 Id = 1;
  if (this->id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_id(), target);
  }

  // string Archive = 2;
  if (this->archive().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_archive().data(), static_cast<int>(this->_internal_archive().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.Archive");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_archive(), target);
  }

  // string NotificationName = 3;
  if (this->notificationname().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_notificationname().data(), static_cast<int>(this->_internal_notificationname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.NotificationName");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_notificationname(), target);
  }

  // string SenderName = 4;
  if (this->sendername().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sendername().data(), static_cast<int>(this->_internal_sendername().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.SenderName");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_sendername(), target);
  }

  // string TimeStamp = 5;
  if (this->timestamp().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_timestamp().data(), static_cast<int>(this->_internal_timestamp().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.TimeStamp");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_timestamp(), target);
  }

  // string Severity = 6;
  if (this->severity().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_severity().data(), static_cast<int>(this->_internal_severity().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.Severity");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_severity(), target);
  }

  // repeated string Payload = 7;
  for (int i = 0, n = this->_internal_payload_size(); i < n; i++) {
    const auto& s = this->_internal_payload(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.Payload");
    target = stream->WriteString(7, s, target);
  }

  // repeated string PayloadXml = 8;
  for (int i = 0, n = this->_internal_payloadxml_size(); i < n; i++) {
    const auto& s = this->_internal_payloadxml(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Arp.Services.NotificationLogger.Services.Grpc.StoredNotification.PayloadXml");
    target = stream->WriteString(8, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Arp.Services.NotificationLogger.Services.Grpc.StoredNotification)
  return target;
}

size_t StoredNotification::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Arp.Services.NotificationLogger.Services.Grpc.StoredNotification)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string Payload = 7;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(payload_.size());
  for (int i = 0, n = payload_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      payload_.Get(i));
  }

  // repeated string PayloadXml = 8;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(payloadxml_.size());
  for (int i = 0, n = payloadxml_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      payloadxml_.Get(i));
  }

  // string Archive = 2;
  if (this->archive().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_archive());
  }

  // string NotificationName = 3;
  if (this->notificationname().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_notificationname());
  }

  // string SenderName = 4;
  if (this->sendername().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_sendername());
  }

  // string TimeStamp = 5;
  if (this->timestamp().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_timestamp());
  }

  // string Severity = 6;
  if (this->severity().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_severity());
  }

  // uint64 Id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void StoredNotification::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Arp.Services.NotificationLogger.Services.Grpc.StoredNotification)
  GOOGLE_DCHECK_NE(&from, this);
  const StoredNotification* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<StoredNotification>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Arp.Services.NotificationLogger.Services.Grpc.StoredNotification)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Arp.Services.NotificationLogger.Services.Grpc.StoredNotification)
    MergeFrom(*source);
  }
}

void StoredNotification::MergeFrom(const StoredNotification& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Arp.Services.NotificationLogger.Services.Grpc.StoredNotification)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  payload_.MergeFrom(from.payload_);
  payloadxml_.MergeFrom(from.payloadxml_);
  if (from.archive().size() > 0) {
    _internal_set_archive(from._internal_archive());
  }
  if (from.notificationname().size() > 0) {
    _internal_set_notificationname(from._internal_notificationname());
  }
  if (from.sendername().size() > 0) {
    _internal_set_sendername(from._internal_sendername());
  }
  if (from.timestamp().size() > 0) {
    _internal_set_timestamp(from._internal_timestamp());
  }
  if (from.severity().size() > 0) {
    _internal_set_severity(from._internal_severity());
  }
  if (from.id() != 0) {
    _internal_set_id(from._internal_id());
  }
}

void StoredNotification::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Arp.Services.NotificationLogger.Services.Grpc.StoredNotification)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StoredNotification::CopyFrom(const StoredNotification& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Arp.Services.NotificationLogger.Services.Grpc.StoredNotification)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StoredNotification::IsInitialized() const {
  return true;
}

void StoredNotification::InternalSwap(StoredNotification* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  payload_.InternalSwap(&other->payload_);
  payloadxml_.InternalSwap(&other->payloadxml_);
  archive_.Swap(&other->archive_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  notificationname_.Swap(&other->notificationname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  sendername_.Swap(&other->sendername_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  timestamp_.Swap(&other->timestamp_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  severity_.Swap(&other->severity_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StoredNotification::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Grpc
}  // namespace Services
}  // namespace NotificationLogger
}  // namespace Services
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification* Arena::CreateMaybeMessage< ::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Arp::Services::NotificationLogger::Services::Grpc::StoredNotification >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
