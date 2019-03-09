#
# Copyright 2019, Mokshasoft AB (mokshasoft.com)
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.
#

cmake_minimum_required(VERSION 3.7.2)

#
# This file should be copied/symlinked into the top level of a project.
# See <link>
#

# Include functions used to build Idris source
include(core/cmake/Idris.cmake)
include(core/cmake/utils.cmake)
include(core/cmake/platforms.cmake)
include(core/cmake/qemu.cmake)

# Check the Idris version
test_idris_version(1.3.1)

# Set platform specific build flags
set_platform_build_flags()

# Set generic flags needed for all platforms
set_generic_build_flags()

# Set toolchain specific build flags
set_toolchain_build_flags()

# Add all directories needed to build the Idris apps
add_subdirectory(core)
add_subdirectory(libs/idris-rts)
add_subdirectory(drivers)
add_subdirectory(apps)
