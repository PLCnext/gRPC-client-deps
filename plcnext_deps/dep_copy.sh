#!/bin/sh

ROS_DISTRO=$1 # Expects first arg to be a ros distro Ex: foxy, noetic, galactic, humble

if [ -z $ROS_DISTRO ];
then
    echo "Must pass first argument as ros distro: foxy, noetic, galactic etc.."
    exit 1
fi

# Include folders

cp -rv axcf3_deps/include/google /opt/ros/$ROS_DISTRO/include/google
cp -rv axcf3_deps/include/protocols /opt/ros/$ROS_DISTRO/include/protocols
cp -rv axcf3_deps/include/grpcpp /opt/ros/$ROS_DISTRO/include/grpcpp
cp -rv axcf3_deps/include/grpc /opt/ros/$ROS_DISTRO/include/grpc
cp -rv axcf3_deps/include/grpc++ /opt/ros/$ROS_DISTRO/include/grpc++
cp -rv axcf3_deps/include/openssl /opt/ros/$ROS_DISTRO/include/openssl

# Shared libraries

cp -v axcf3_deps/lib/libabsl_flags_usage.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgpr.so.15.0.0 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++_unsecure.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_synchronization.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++_alts.so.1.36.4 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++_reflection.so.1 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_flags_commandlineflag_internal.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_flags_parse.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libaddress_sorting.so.15 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_random_seed_sequences.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libprotobuf-c.so.1 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libprotoc.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_random_internal_seed_material.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_scoped_set_env.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_time.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_demangle_internal.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_periodic_sampler.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_strerror.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpcpp_channelz.so.1 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_flags_usage_internal.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_symbolize.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++_unsecure.so.1 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_strings.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_bad_optional_access.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_random_internal_randen_slow.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_status.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc.so.15 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_base.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_cord.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_random_distributions.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_time_zone.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_raw_logging_internal.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_city.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_flags_commandlineflag.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_leak_check_disable.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_random_seed_gen_exception.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++_alts.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++.so.1 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc_plugin_support.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libprotobuf-lite.so.25 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libaddress_sorting.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libprotobuf.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_flags_private_handle_accessor.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_random_internal_randen.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++_reflection.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_leak_check.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_random_internal_platform.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_strings_internal.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libcares.so.2.4.0 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++_reflection.so.1.36.4 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libprotobuf-lite.so.25.0.0 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_int128.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_malloc_internal.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libcares.so.2 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libre2.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgpr.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++_error_details.so.1.36.4 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libprotobuf-c.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_graphcycles_internal.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_stacktrace.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++_error_details.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc_unsecure.so.15 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libprotobuf.so.25.0.0 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_examine_stack.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libprotoc.so.25.0.0 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc_unsecure.so.15.0.0 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libaddress_sorting.so.15.0.0 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libprotobuf-c.so.1.0.0 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgpr.so.15 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpcpp_channelz.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_flags_internal.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_random_internal_randen_hwaes.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_flags_config.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libupb.so.15.0.0 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_str_format_internal.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++.so.1.36.4 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libupb.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libupb.so.15 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_flags.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++_unsecure.so.1.36.4 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_debugging_internal.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_log_severity.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_raw_hash_set.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc_plugin_support.so.1 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc_unsecure.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_flags_program_name.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_random_internal_pool_urbg.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_throw_delegate.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_bad_any_cast_impl.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_civil_time.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_flags_marshalling.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++_error_details.so.1 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_exponential_biased.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_spinlock_wait.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpcpp_channelz.so.1.36.4 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc.so.15.0.0 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libprotobuf-lite.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libprotobuf.so.25 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libprotoc.so.25 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc_plugin_support.so.1.36.4 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libcares.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_bad_variant_access.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_failure_signal_handler.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_flags_reflection.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_hash.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_hashtablez_sampler.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libgrpc++_alts.so.1 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_random_internal_distribution_test_util.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_random_internal_randen_hwaes_impl.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libabsl_statusor.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libcrypto.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libssl.so /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libcrypto.so.1.1 /opt/ros/$ROS_DISTRO/lib
cp -v axcf3_deps/lib/libssl.so.1.1 /opt/ros/$ROS_DISTRO/lib

# CMake modules

mkdir /opt/ros/$ROS_DISTRO/lib/cmake
cp -rv axcf3_deps/cmake_modules/ros/grpc /opt/ros/$ROS_DISTRO/lib/cmake
cp -rv axcf3_deps/cmake_modules/ros/re2 /opt/ros/$ROS_DISTRO/lib/cmake
cp -rv axcf3_deps/cmake_modules/ros/absl /opt/ros/$ROS_DISTRO/lib/cmake
cp -rv axcf3_deps/cmake_modules/ros/c-ares /opt/ros/$ROS_DISTRO/lib/cmake

cp -rv axcf3_deps/cmake_modules/usr/Modules  /usr/share/cmake-3.16/Modules/
