// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TriggerRpnItem.proto

#include "TriggerRpnItem.pb.h"

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
class TriggerRpnItemDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TriggerRpnItem> _instance;
} _TriggerRpnItem_default_instance_;
}  // namespace Grpc
}  // namespace Services
}  // namespace DataLogger
}  // namespace Services
}  // namespace Arp
static void InitDefaultsscc_info_TriggerRpnItem_TriggerRpnItem_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Arp::Services::DataLogger::Services::Grpc::_TriggerRpnItem_default_instance_;
    new (ptr) ::Arp::Services::DataLogger::Services::Grpc::TriggerRpnItem();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_TriggerRpnItem_TriggerRpnItem_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_TriggerRpnItem_TriggerRpnItem_2eproto}, {
      &scc_info_ObjectType_ArpTypes_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_TriggerRpnItem_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_TriggerRpnItem_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_TriggerRpnItem_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_TriggerRpnItem_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Arp::Services::DataLogger::Services::Grpc::TriggerRpnItem, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Arp::Services::DataLogger::Services::Grpc::TriggerRpnItem, type_),
  PROTOBUF_FIELD_OFFSET(::Arp::Services::DataLogger::Services::Grpc::TriggerRpnItem, item_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Arp::Services::DataLogger::Services::Grpc::TriggerRpnItem)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Arp::Services::DataLogger::Services::Grpc::_TriggerRpnItem_default_instance_),
};

const char descriptor_table_protodef_TriggerRpnItem_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024TriggerRpnItem.proto\022%Arp.Services.Dat"
  "aLogger.Services.Grpc\032\021RpnItemType.proto"
  "\032\016ArpTypes.proto\"{\n\016TriggerRpnItem\022@\n\004Ty"
  "pe\030\001 \001(\01622.Arp.Services.DataLogger.Servi"
  "ces.Grpc.RpnItemType\022\'\n\004Item\030\002 \001(\0132\031.Arp"
  ".Type.Grpc.ObjectTypeb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_TriggerRpnItem_2eproto_deps[2] = {
  &::descriptor_table_ArpTypes_2eproto,
  &::descriptor_table_RpnItemType_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_TriggerRpnItem_2eproto_sccs[1] = {
  &scc_info_TriggerRpnItem_TriggerRpnItem_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_TriggerRpnItem_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_TriggerRpnItem_2eproto = {
  false, false, descriptor_table_protodef_TriggerRpnItem_2eproto, "TriggerRpnItem.proto", 229,
  &descriptor_table_TriggerRpnItem_2eproto_once, descriptor_table_TriggerRpnItem_2eproto_sccs, descriptor_table_TriggerRpnItem_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_TriggerRpnItem_2eproto::offsets,
  file_level_metadata_TriggerRpnItem_2eproto, 1, file_level_enum_descriptors_TriggerRpnItem_2eproto, file_level_service_descriptors_TriggerRpnItem_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_TriggerRpnItem_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_TriggerRpnItem_2eproto)), true);
namespace Arp {
namespace Services {
namespace DataLogger {
namespace Services {
namespace Grpc {

// ===================================================================

class TriggerRpnItem::_Internal {
 public:
  static const ::Arp::Type::Grpc::ObjectType& item(const TriggerRpnItem* msg);
};

const ::Arp::Type::Grpc::ObjectType&
TriggerRpnItem::_Internal::item(const TriggerRpnItem* msg) {
  return *msg->item_;
}
void TriggerRpnItem::clear_item() {
  if (GetArena() == nullptr && item_ != nullptr) {
    delete item_;
  }
  item_ = nullptr;
}
TriggerRpnItem::TriggerRpnItem(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
}
TriggerRpnItem::TriggerRpnItem(const TriggerRpnItem& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_item()) {
    item_ = new ::Arp::Type::Grpc::ObjectType(*from.item_);
  } else {
    item_ = nullptr;
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
}

void TriggerRpnItem::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_TriggerRpnItem_TriggerRpnItem_2eproto.base);
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&item_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&item_)) + sizeof(type_));
}

TriggerRpnItem::~TriggerRpnItem() {
  // @@protoc_insertion_point(destructor:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void TriggerRpnItem::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete item_;
}

void TriggerRpnItem::ArenaDtor(void* object) {
  TriggerRpnItem* _this = reinterpret_cast< TriggerRpnItem* >(object);
  (void)_this;
}
void TriggerRpnItem::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TriggerRpnItem::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TriggerRpnItem& TriggerRpnItem::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TriggerRpnItem_TriggerRpnItem_2eproto.base);
  return *internal_default_instance();
}


void TriggerRpnItem::Clear() {
// @@protoc_insertion_point(message_clear_start:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && item_ != nullptr) {
    delete item_;
  }
  item_ = nullptr;
  type_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TriggerRpnItem::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .Arp.Services.DataLogger.Services.Grpc.RpnItemType Type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::Arp::Services::DataLogger::Services::Grpc::RpnItemType>(val));
        } else goto handle_unusual;
        continue;
      // .Arp.Type.Grpc.ObjectType Item = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_item(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* TriggerRpnItem::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .Arp.Services.DataLogger.Services.Grpc.RpnItemType Type = 1;
  if (this->type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // .Arp.Type.Grpc.ObjectType Item = 2;
  if (this->has_item()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::item(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
  return target;
}

size_t TriggerRpnItem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .Arp.Type.Grpc.ObjectType Item = 2;
  if (this->has_item()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *item_);
  }

  // .Arp.Services.DataLogger.Services.Grpc.RpnItemType Type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TriggerRpnItem::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
  GOOGLE_DCHECK_NE(&from, this);
  const TriggerRpnItem* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TriggerRpnItem>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
    MergeFrom(*source);
  }
}

void TriggerRpnItem::MergeFrom(const TriggerRpnItem& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_item()) {
    _internal_mutable_item()->::Arp::Type::Grpc::ObjectType::MergeFrom(from._internal_item());
  }
  if (from.type() != 0) {
    _internal_set_type(from._internal_type());
  }
}

void TriggerRpnItem::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TriggerRpnItem::CopyFrom(const TriggerRpnItem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TriggerRpnItem::IsInitialized() const {
  return true;
}

void TriggerRpnItem::InternalSwap(TriggerRpnItem* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TriggerRpnItem, type_)
      + sizeof(TriggerRpnItem::type_)
      - PROTOBUF_FIELD_OFFSET(TriggerRpnItem, item_)>(
          reinterpret_cast<char*>(&item_),
          reinterpret_cast<char*>(&other->item_));
}

::PROTOBUF_NAMESPACE_ID::Metadata TriggerRpnItem::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Grpc
}  // namespace Services
}  // namespace DataLogger
}  // namespace Services
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Arp::Services::DataLogger::Services::Grpc::TriggerRpnItem* Arena::CreateMaybeMessage< ::Arp::Services::DataLogger::Services::Grpc::TriggerRpnItem >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Arp::Services::DataLogger::Services::Grpc::TriggerRpnItem >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>