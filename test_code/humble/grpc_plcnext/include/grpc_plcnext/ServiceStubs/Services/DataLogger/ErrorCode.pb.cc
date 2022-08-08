// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ErrorCode.proto

#include "ErrorCode.pb.h"

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
namespace DataLogger {
namespace Services {
namespace Grpc {
}  // namespace Grpc
}  // namespace Services
}  // namespace DataLogger
}  // namespace Services
}  // namespace Arp
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_ErrorCode_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_ErrorCode_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ErrorCode_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ErrorCode_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_ErrorCode_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017ErrorCode.proto\022%Arp.Services.DataLogg"
  "er.Services.Grpc*\355\001\n\tErrorCode\022\013\n\007EC_Non"
  "e\020\000\022\024\n\020EC_NoSuchSession\020\001\022\025\n\021EC_SessionR"
  "unning\020\002\022\025\n\021EC_NoSuchVariable\020\003\022\024\n\020EC_Al"
  "readyExists\020\004\022\022\n\016EC_OutOfMemory\020\005\022\023\n\017EC_"
  "NotSupported\020\006\022\r\n\tEC_NoData\020\007\022\026\n\022EC_Data"
  "Unavailable\020\010\022\024\n\020EC_InvalidConfig\020\t\022\023\n\016E"
  "C_Unspecified\020\377\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ErrorCode_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ErrorCode_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ErrorCode_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ErrorCode_2eproto = {
  false, false, descriptor_table_protodef_ErrorCode_2eproto, "ErrorCode.proto", 304,
  &descriptor_table_ErrorCode_2eproto_once, descriptor_table_ErrorCode_2eproto_sccs, descriptor_table_ErrorCode_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_ErrorCode_2eproto::offsets,
  file_level_metadata_ErrorCode_2eproto, 0, file_level_enum_descriptors_ErrorCode_2eproto, file_level_service_descriptors_ErrorCode_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ErrorCode_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ErrorCode_2eproto)), true);
namespace Arp {
namespace Services {
namespace DataLogger {
namespace Services {
namespace Grpc {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ErrorCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ErrorCode_2eproto);
  return file_level_enum_descriptors_ErrorCode_2eproto[0];
}
bool ErrorCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 255:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Grpc
}  // namespace Services
}  // namespace DataLogger
}  // namespace Services
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
