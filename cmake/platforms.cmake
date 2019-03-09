#
# Copyright 2019, Mokshasoft AB (mokshasoft.com)
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.
#

# Define all platforms
set(pl_versatilepb versatilepb)
set(pl_beaglebone beaglebone)

# Set generic flags needed for all platforms
macro(set_generic_build_flags)
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS}\
        -static\
        -u _start -e _start\
        -L ${LIBC} -L ${LIBGCC}")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}\
        -Wall\
        -ffunction-sections\
        -fdata-sections\
        -O2\
        -nostdlib\
        -ffreestanding")
endmacro()

# Set toolchain specific build flags
macro(set_toolchain_build_flags)
    if(GccToolchain)
        set(CMAKE_ASM_FLAGS "${CMAKE_ASM_FLAGS}\
            --warn\
            --fatal-warnings\
            ${AARCH}")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}\
            -nostartfiles\
            ${AARCH}")
    elseif(ClangGccToolchain)
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}\
            -m32")
    else()
        message(FATAL_ERROR "No toolchain defined")
    endif()
endmacro()

# Set platform specific build flags
macro(set_platform_build_flags)
    # Set default platform if not specified
    if(NOT PLATFORM)
        set(PLATFORM ${pl_versatilepb})
        message(STATUS "Using default value for PLATFORM (${PLATFORM})")
    endif()

    # Set platform specific flags and build variables
    if("${PLATFORM}" STREQUAL ${pl_versatilepb})
        set(AARCH "-march=armv5t")
    endif()
endmacro()
