
# syntax=docker/dockerfile:experimental
ARG BUILDER_SUFFIX=
ARG BUILDER_PREFIX=
ARG ROS_DISTRO=
FROM arm32v7/ros:${ROS_DISTRO}-ros-core as base
FROM ${BUILDER_PREFIX}builder${BUILDER_SUFFIX} as builder

FROM base as pre_build
COPY . /root/ws/src/
RUN rm -r /root/ws/src/plcnext_deps/axcf3_deps  /root/ws/src/plcnext_deps/dep_copy31.sh
COPY --from=builder workspace.bash /builder/workspace.bash
RUN cd /root/ws/src/plcnext_deps && \
    chmod +x dep_copy21.sh && \
    ./dep_copy21.sh ${ROS_DISTRO} && \
    rm -rf /var/lib/apt/lists/*

FROM pre_build as build
ARG CMAKE_ARGS=
ENV CMAKE_ARGS $CMAKE_ARGS
RUN apt-get update -qq && \
    /builder/workspace.bash build_workspace /root/ws && \
    rm -rf /var/lib/apt/lists/*

FROM build as test
RUN apt-get update -qq && \
    /builder/workspace.bash test_workspace /root/ws && \
    rm -rf /var/lib/apt/lists/*

FROM pre_build as deploy
RUN apt-get update -qq && \
    rm -rf /var/lib/apt/lists/*
