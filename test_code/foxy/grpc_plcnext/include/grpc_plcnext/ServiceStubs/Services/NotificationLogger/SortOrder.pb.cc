// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SortOrder.proto

#include "SortOrder.pb.h"

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
}  // namespace Grpc
}  // namespace Services
}  // namespace NotificationLogger
}  // namespace Services
}  // namespace Arp
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_SortOrder_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_SortOrder_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_SortOrder_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_SortOrder_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_SortOrder_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017SortOrder.proto\022-Arp.Services.Notifica"
  "tionLogger.Services.Grpc*C\n\tSortOrder\022\013\n"
  "\007SO_None\020\000\022\023\n\017SO_TimestampAsc\020\001\022\024\n\020SO_Ti"
  "mestampDesc\020\002b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_SortOrder_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_SortOrder_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_SortOrder_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SortOrder_2eproto = {
  false, false, descriptor_table_protodef_SortOrder_2eproto, "SortOrder.proto", 141,
  &descriptor_table_SortOrder_2eproto_once, descriptor_table_SortOrder_2eproto_sccs, descriptor_table_SortOrder_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_SortOrder_2eproto::offsets,
  file_level_metadata_SortOrder_2eproto, 0, file_level_enum_descriptors_SortOrder_2eproto, file_level_service_descriptors_SortOrder_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_SortOrder_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_SortOrder_2eproto)), true);
namespace Arp {
namespace Services {
namespace NotificationLogger {
namespace Services {
namespace Grpc {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SortOrder_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_SortOrder_2eproto);
  return file_level_enum_descriptors_SortOrder_2eproto[0];
}
bool SortOrder_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Grpc
}  // namespace Services
}  // namespace NotificationLogger
}  // namespace Services
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
