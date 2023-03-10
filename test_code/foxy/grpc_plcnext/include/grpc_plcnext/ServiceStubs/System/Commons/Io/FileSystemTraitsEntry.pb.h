// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FileSystemTraitsEntry.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_FileSystemTraitsEntry_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_FileSystemTraitsEntry_2eproto

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
#include "TraitItem.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_FileSystemTraitsEntry_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_FileSystemTraitsEntry_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_FileSystemTraitsEntry_2eproto;
namespace Arp {
namespace System {
namespace Commons {
namespace Services {
namespace Io {
namespace Grpc {
class FileSystemTraitsEntry;
class FileSystemTraitsEntryDefaultTypeInternal;
extern FileSystemTraitsEntryDefaultTypeInternal _FileSystemTraitsEntry_default_instance_;
}  // namespace Grpc
}  // namespace Io
}  // namespace Services
}  // namespace Commons
}  // namespace System
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> ::Arp::System::Commons::Services::Io::Grpc::FileSystemTraitsEntry* Arena::CreateMaybeMessage<::Arp::System::Commons::Services::Io::Grpc::FileSystemTraitsEntry>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Arp {
namespace System {
namespace Commons {
namespace Services {
namespace Io {
namespace Grpc {

// ===================================================================

class FileSystemTraitsEntry PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry) */ {
 public:
  inline FileSystemTraitsEntry() : FileSystemTraitsEntry(nullptr) {}
  virtual ~FileSystemTraitsEntry();

  FileSystemTraitsEntry(const FileSystemTraitsEntry& from);
  FileSystemTraitsEntry(FileSystemTraitsEntry&& from) noexcept
    : FileSystemTraitsEntry() {
    *this = ::std::move(from);
  }

  inline FileSystemTraitsEntry& operator=(const FileSystemTraitsEntry& from) {
    CopyFrom(from);
    return *this;
  }
  inline FileSystemTraitsEntry& operator=(FileSystemTraitsEntry&& from) noexcept {
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
  static const FileSystemTraitsEntry& default_instance();

  static inline const FileSystemTraitsEntry* internal_default_instance() {
    return reinterpret_cast<const FileSystemTraitsEntry*>(
               &_FileSystemTraitsEntry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FileSystemTraitsEntry& a, FileSystemTraitsEntry& b) {
    a.Swap(&b);
  }
  inline void Swap(FileSystemTraitsEntry* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FileSystemTraitsEntry* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FileSystemTraitsEntry* New() const final {
    return CreateMaybeMessage<FileSystemTraitsEntry>(nullptr);
  }

  FileSystemTraitsEntry* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FileSystemTraitsEntry>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FileSystemTraitsEntry& from);
  void MergeFrom(const FileSystemTraitsEntry& from);
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
  void InternalSwap(FileSystemTraitsEntry* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry";
  }
  protected:
  explicit FileSystemTraitsEntry(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_FileSystemTraitsEntry_2eproto);
    return ::descriptor_table_FileSystemTraitsEntry_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTraitsFieldNumber = 4,
    kPathFieldNumber = 1,
    kIsFileFieldNumber = 2,
    kIsDirectoryFieldNumber = 3,
  };
  // repeated .Arp.System.Commons.Services.Io.Grpc.TraitItem Traits = 4;
  int traits_size() const;
  private:
  int _internal_traits_size() const;
  public:
  void clear_traits();
  ::Arp::System::Commons::Services::Io::Grpc::TraitItem* mutable_traits(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Arp::System::Commons::Services::Io::Grpc::TraitItem >*
      mutable_traits();
  private:
  const ::Arp::System::Commons::Services::Io::Grpc::TraitItem& _internal_traits(int index) const;
  ::Arp::System::Commons::Services::Io::Grpc::TraitItem* _internal_add_traits();
  public:
  const ::Arp::System::Commons::Services::Io::Grpc::TraitItem& traits(int index) const;
  ::Arp::System::Commons::Services::Io::Grpc::TraitItem* add_traits();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Arp::System::Commons::Services::Io::Grpc::TraitItem >&
      traits() const;

  // string Path = 1;
  void clear_path();
  const std::string& path() const;
  void set_path(const std::string& value);
  void set_path(std::string&& value);
  void set_path(const char* value);
  void set_path(const char* value, size_t size);
  std::string* mutable_path();
  std::string* release_path();
  void set_allocated_path(std::string* path);
  private:
  const std::string& _internal_path() const;
  void _internal_set_path(const std::string& value);
  std::string* _internal_mutable_path();
  public:

  // bool IsFile = 2;
  void clear_isfile();
  bool isfile() const;
  void set_isfile(bool value);
  private:
  bool _internal_isfile() const;
  void _internal_set_isfile(bool value);
  public:

  // bool IsDirectory = 3;
  void clear_isdirectory();
  bool isdirectory() const;
  void set_isdirectory(bool value);
  private:
  bool _internal_isdirectory() const;
  void _internal_set_isdirectory(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Arp::System::Commons::Services::Io::Grpc::TraitItem > traits_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr path_;
  bool isfile_;
  bool isdirectory_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_FileSystemTraitsEntry_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FileSystemTraitsEntry

// string Path = 1;
inline void FileSystemTraitsEntry::clear_path() {
  path_.ClearToEmpty();
}
inline const std::string& FileSystemTraitsEntry::path() const {
  // @@protoc_insertion_point(field_get:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Path)
  return _internal_path();
}
inline void FileSystemTraitsEntry::set_path(const std::string& value) {
  _internal_set_path(value);
  // @@protoc_insertion_point(field_set:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Path)
}
inline std::string* FileSystemTraitsEntry::mutable_path() {
  // @@protoc_insertion_point(field_mutable:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Path)
  return _internal_mutable_path();
}
inline const std::string& FileSystemTraitsEntry::_internal_path() const {
  return path_.Get();
}
inline void FileSystemTraitsEntry::_internal_set_path(const std::string& value) {
  
  path_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void FileSystemTraitsEntry::set_path(std::string&& value) {
  
  path_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Path)
}
inline void FileSystemTraitsEntry::set_path(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  path_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Path)
}
inline void FileSystemTraitsEntry::set_path(const char* value,
    size_t size) {
  
  path_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Path)
}
inline std::string* FileSystemTraitsEntry::_internal_mutable_path() {
  
  return path_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* FileSystemTraitsEntry::release_path() {
  // @@protoc_insertion_point(field_release:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Path)
  return path_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void FileSystemTraitsEntry::set_allocated_path(std::string* path) {
  if (path != nullptr) {
    
  } else {
    
  }
  path_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), path,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Path)
}

// bool IsFile = 2;
inline void FileSystemTraitsEntry::clear_isfile() {
  isfile_ = false;
}
inline bool FileSystemTraitsEntry::_internal_isfile() const {
  return isfile_;
}
inline bool FileSystemTraitsEntry::isfile() const {
  // @@protoc_insertion_point(field_get:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.IsFile)
  return _internal_isfile();
}
inline void FileSystemTraitsEntry::_internal_set_isfile(bool value) {
  
  isfile_ = value;
}
inline void FileSystemTraitsEntry::set_isfile(bool value) {
  _internal_set_isfile(value);
  // @@protoc_insertion_point(field_set:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.IsFile)
}

// bool IsDirectory = 3;
inline void FileSystemTraitsEntry::clear_isdirectory() {
  isdirectory_ = false;
}
inline bool FileSystemTraitsEntry::_internal_isdirectory() const {
  return isdirectory_;
}
inline bool FileSystemTraitsEntry::isdirectory() const {
  // @@protoc_insertion_point(field_get:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.IsDirectory)
  return _internal_isdirectory();
}
inline void FileSystemTraitsEntry::_internal_set_isdirectory(bool value) {
  
  isdirectory_ = value;
}
inline void FileSystemTraitsEntry::set_isdirectory(bool value) {
  _internal_set_isdirectory(value);
  // @@protoc_insertion_point(field_set:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.IsDirectory)
}

// repeated .Arp.System.Commons.Services.Io.Grpc.TraitItem Traits = 4;
inline int FileSystemTraitsEntry::_internal_traits_size() const {
  return traits_.size();
}
inline int FileSystemTraitsEntry::traits_size() const {
  return _internal_traits_size();
}
inline ::Arp::System::Commons::Services::Io::Grpc::TraitItem* FileSystemTraitsEntry::mutable_traits(int index) {
  // @@protoc_insertion_point(field_mutable:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Traits)
  return traits_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Arp::System::Commons::Services::Io::Grpc::TraitItem >*
FileSystemTraitsEntry::mutable_traits() {
  // @@protoc_insertion_point(field_mutable_list:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Traits)
  return &traits_;
}
inline const ::Arp::System::Commons::Services::Io::Grpc::TraitItem& FileSystemTraitsEntry::_internal_traits(int index) const {
  return traits_.Get(index);
}
inline const ::Arp::System::Commons::Services::Io::Grpc::TraitItem& FileSystemTraitsEntry::traits(int index) const {
  // @@protoc_insertion_point(field_get:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Traits)
  return _internal_traits(index);
}
inline ::Arp::System::Commons::Services::Io::Grpc::TraitItem* FileSystemTraitsEntry::_internal_add_traits() {
  return traits_.Add();
}
inline ::Arp::System::Commons::Services::Io::Grpc::TraitItem* FileSystemTraitsEntry::add_traits() {
  // @@protoc_insertion_point(field_add:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Traits)
  return _internal_add_traits();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Arp::System::Commons::Services::Io::Grpc::TraitItem >&
FileSystemTraitsEntry::traits() const {
  // @@protoc_insertion_point(field_list:Arp.System.Commons.Services.Io.Grpc.FileSystemTraitsEntry.Traits)
  return traits_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_FileSystemTraitsEntry_2eproto
