#
# Copyright 2019, Mokshasoft AB (mokshasoft.com)
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.
#

cmake_minimum_required(VERSION 3.7.2)

# Add native apps that only depend on libcore that tests basic functionality
add_subdirectory(src/native)
add_subdirectory(src/starterwarefree)

#
# libcore is needed to boot the system and start the Idris RTS.
#

set(LIB core)
project(${LIB})
enable_language(C ASM)

file(GLOB static
    src/platforms/${PLATFORM}/boot.s
    src/rw.s
    src/newlib.c
    src/platforms/${PLATFORM}/platform.c
    src/premain.c
)

add_library(${LIB} EXCLUDE_FROM_ALL ${static})
target_include_directories(${LIB} PUBLIC src/include)
