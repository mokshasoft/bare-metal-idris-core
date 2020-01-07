#
# Copyright 2018, Mokshasoft AB (mokshasoft.com)
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.
#

cmake_minimum_required(VERSION 3.7.2)

project(StarterWareFree)

# Configuration options

if(NOT DEVICE)
    set(DEVICE "am335x")
    message(STATUS "Using default value for DEVICE (${DEVICE})")
endif()

if(NOT EVM)
    set(EVM "beaglebone")
    message(STATUS "Using default value for EVM (${EVM})")
endif()

if(NOT TARGET)
    set(TARGET "armv7a")
    message(STATUS "Using default value for TARGET (${TARGET})")
endif()

if(NOT BOOT)
    set(BOOT "MMCSD")
    message(STATUS "Using default value for BOOT (${BOOT})")
endif()

# Setup build variables

set(ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D${DEVICE}")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D${EVM}")

# Add library components

add_subdirectory(drivers)
add_subdirectory(platform/${EVM})
add_subdirectory(utils)
