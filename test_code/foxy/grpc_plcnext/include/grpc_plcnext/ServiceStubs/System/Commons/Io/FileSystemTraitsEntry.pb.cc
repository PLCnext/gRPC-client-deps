// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FileSystemTraitsEntry.proto

#include "FileSystemTraitsEntry.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_TraitItem_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_TraitItem_TraitItem_2eproto;
namespace Arp {
namespace System {
namespace Commons {
namespace Services {
namespace Io {
namespace Grpc {
class FileSystemTraitsEntryDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<FileSystemTraitsEntry> _instance;
} _FileSystemTraitsEntry_default_instance_;
}  // namespace Grpc
}  // namespace Io
}  // namespace Services
}  // namespace Commons
}  // namespace System
}  // namespace Arp
static void InitDefaultsscc_info_FileSystemTraitsEntry_FileSystemTraitsEntry_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Arp::System::Commons::Services::Io::Grpc::_FileSystemTraitsEntry_default_instance_;
    new (ptr) ::Arp::System::Commons::Services::Io::Grpc::FileSystemTraitsEntry();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_FileSystemTraitsEntry_FileSystemTraitsEntry_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_FileSystemTraitsEntry_FileSystemTraitsEntry_2eproto}, {
      &scc_info_TraitItem_TraitItem_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_FileSystemTraitsEntry_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_FileSystemTraitsEntry_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_FileSystemTraitsEntry_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_FileSystemTraitsEntry_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Arp::System::Commons::Services::Io::Grpc::FileSystemTraitsEntry, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Arp::System::Commons::Services::Io::Grpc::FileSystemTraitsEntry, path_),
  PROTOBUF_FIELD_OFFSET(::Arp::System::Commons::Services::Io::Grpc::FileSystemTraitsEntry, isfile_),
  PROTOBUF_FIELD_OFFSET(::Arp::System::Commons::Services::Io::Grpc::FileSystemTraitsEntry, isdirectory_),
  PROTOBUF_FIELD_OFFSET(::Arp::System::Commons::Services::Io::Grpc::FileSystemTraitsEntry, traits_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Arp::System::Commons::Services::Io::Grpc::FileSystemTraitsEntry)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Arp::System::Commons::Services::Io::Grpc::_FileSystemTraitsEntry_default_instance_),
};

const char descriptor_table_protodef_FileSystemTraitsEntry_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033FileSystemTraitsEntry.proto\022#Arp.Syste"
  "m.Commons.Services.Io.Grpc\032\017TraitItem.pr"
  "oto\"\212\001\n\025FileSystemTraitsEntry\022\014\n\004Path\030\001 "
  "\001(\t\022\016\n\006IsFile\030\002 \001(\010\022\023\n\013IsDirectory\030\003 \001(\010"
  "\022>\n\006Traits\030\004 \003(\0132..Arp.System.Commons.Se"
  "rvices.Io.Grpc.TraitItemb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_FileSystemTraitsEntry_2eproto_deps[1] = {
  &::descriptor_table_TraitItem_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_FileSystemTraitsEntry_2eproto_sccs[1] = {
  &scc_info_FileSystemTraitsEntry_FileSystemTraitsEntry_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_FileSystemTraitsEntry_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_FileSystemTraitsEntry_2eproto = {
  false, false, descriptor_table_protodef_FileSystemTraitsEntry_2eproto, "FileSystemTraitsEntry.proto", 232,
  &descriptor_table_FileSystemTraitsEntry_2eproto_once, descriptor_table_FileSystemTraitsEntry_2eproto_sccs, descriptor_table_FileSystemTraitsEntry_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_FileSystemTraitsEntry_2eproto::offsets,
  file_level_metadata_FileSystemTraitsEntry_2eproto, 1, file_level_enum_descriptors_FileSystemTraitsEntry_2eproto, file_level_service_descriptors_FileSystemTraitsEntry_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_FileSystemTraitsEntry_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_FileSystemTraitsEntry_2eproto)), true);
namespace Arp {
namespace System {
namespace Commons {
namespace Services {
namespace Io {
namespace Grpc {

// ===================================================================

class FileSystemTraitsEntry::_Internal {
 public:
};

void FileSystemTraitsEntry::clear_traits() {
  traits_.Clear();
}
FileSystemTraitsEntry::FileSystemTraitsEntry(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  traits_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
}
FileSystemTraitsEntry::FileSystemTraitsEntry(const FileSystemTraitsEntry& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      traits_(from.traits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  path_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_path().empty()) {
    path_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_path(), 
      GetArena());
  }
  ::memcpy(&isfile_, &from.isfile_,
    static_cast<size_t>(reinterpret_cast<char*>(&isdirectory_) -
    reinterpret_cast<char*>(&isfile_)) + sizeof(isdirectory_));
  // @@protoc_insertion_point(copy_constructor:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
}

void FileSystemTraitsEntry::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_FileSystemTraitsEntry_FileSystemTraitsEntry_2eproto.base);
  path_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&isfile_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&isdirectory_) -
      reinterpret_cast<char*>(&isfile_)) + sizeof(isdirectory_));
}

FileSystemTraitsEntry::~FileSystemTraitsEntry() {
  // @@protoc_insertion_point(destructor:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void FileSystemTraitsEntry::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  path_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void FileSystemTraitsEntry::ArenaDtor(void* object) {
  FileSystemTraitsEntry* _this = reinterpret_cast< FileSystemTraitsEntry* >(object);
  (void)_this;
}
void FileSystemTraitsEntry::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void FileSystemTraitsEntry::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const FileSystemTraitsEntry& FileSystemTraitsEntry::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_FileSystemTraitsEntry_FileSystemTraitsEntry_2eproto.base);
  return *internal_default_instance();
}


void FileSystemTraitsEntry::Clear() {
// @@protoc_insertion_point(message_clear_start:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  traits_.Clear();
  path_.ClearToEmpty();
  ::memset(&isfile_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&isdirectory_) -
      reinterpret_cast<char*>(&isfile_)) + sizeof(isdirectory_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FileSystemTraitsEntry::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string Path = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_path();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Path"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool IsFile = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          isfile_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool IsDirectory = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          isdirectory_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .Arp.System.Commons.Services.Io.Grpc.TraitItem Traits = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_traits(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* FileSystemTraitsEntry::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string Path = 1;
  if (this->path().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_path().data(), static_cast<int>(this->_internal_path().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Path");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_path(), target);
  }

  // bool IsFile = 2;
  if (this->isfile() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_isfile(), target);
  }

  // bool IsDirectory = 3;
  if (this->isdirectory() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_isdirectory(), target);
  }

  // repeated .Arp.System.Commons.Services.Io.Grpc.TraitItem Traits = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_traits_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_traits(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
  return target;
}

size_t FileSystemTraitsEntry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Arp.System.Commons.Services.Io.Grpc.TraitItem Traits = 4;
  total_size += 1UL * this->_internal_traits_size();
  for (const auto& msg : this->traits_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string Path = 1;
  if (this->path().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_path());
  }

  // bool IsFile = 2;
  if (this->isfile() != 0) {
    total_size += 1 + 1;
  }

  // bool IsDirectory = 3;
  if (this->isdirectory() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FileSystemTraitsEntry::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
  GOOGLE_DCHECK_NE(&from, this);
  const FileSystemTraitsEntry* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<FileSystemTraitsEntry>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
    MergeFrom(*source);
  }
}

void FileSystemTraitsEntry::MergeFrom(const FileSystemTraitsEntry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  traits_.MergeFrom(from.traits_);
  if (from.path().size() > 0) {
    _internal_set_path(from._internal_path());
  }
  if (from.isfile() != 0) {
    _internal_set_isfile(from._internal_isfile());
  }
  if (from.isdirectory() != 0) {
    _internal_set_isdirectory(from._internal_isdirectory());
  }
}

void FileSystemTraitsEntry::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FileSystemTraitsEntry::CopyFrom(const FileSystemTraitsEntry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FileSystemTraitsEntry::IsInitialized() const {
  return true;
}

void FileSystemTraitsEntry::InternalSwap(FileSystemTraitsEntry* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  traits_.InternalSwap(&other->traits_);
  path_.Swap(&other->path_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FileSystemTraitsEntry, isdirectory_)
      + sizeof(FileSystemTraitsEntry::isdirectory_)
      - PROTOBUF_FIELD_OFFSET(FileSystemTraitsEntry, isfile_)>(
          reinterpret_cast<char*>(&isfile_),
          reinterpret_cast<char*>(&other->isfile_));
}

::PROTOBUF_NAMESPACE_ID::Metadata FileSystemTraitsEntry::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Grpc
}  // namespace Io
}  // namespace Services
}  // namespace Commons
}  // namespace System
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Arp::System::Commons::Services::Io::Grpc::FileSystemTraitsEntry* Arena::CreateMaybeMessage< ::Arp::System::Commons::Services::Io::Grpc::FileSystemTraitsEntry >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Arp::System::Commons::Services::Io::Grpc::FileSystemTraitsEntry >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
