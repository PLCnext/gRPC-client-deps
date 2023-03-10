// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Severity.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Severity_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Severity_2eproto

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Severity_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Severity_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Severity_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace Arp {
namespace System {
namespace Nm {
namespace Services {
namespace Grpc {

enum Severity : int {
  S_Internal = 0,
  S_Info = 1,
  S_Warning = 2,
  S_Error = 3,
  S_Critical = 4,
  S_Fatal = 5,
  S_Emerge = 6,
  S_Default = 0,
  Severity_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Severity_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Severity_IsValid(int value);
constexpr Severity Severity_MIN = S_Internal;
constexpr Severity Severity_MAX = S_Emerge;
constexpr int Severity_ARRAYSIZE = Severity_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Severity_descriptor();
template<typename T>
inline const std::string& Severity_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Severity>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Severity_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Severity_descriptor(), enum_t_value);
}
inline bool Severity_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Severity* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Severity>(
    Severity_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Grpc
}  // namespace Services
}  // namespace Nm
}  // namespace System
}  // namespace Arp

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Arp::System::Nm::Services::Grpc::Severity> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Arp::System::Nm::Services::Grpc::Severity>() {
  return ::Arp::System::Nm::Services::Grpc::Severity_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Severity_2eproto
