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

# Set generic build flags
set(AARCH "-march=armv5t")
set(CMAKE_ASM_FLAGS "--warn --fatal-warnings ${AARCH}")
set(CMAKE_C_FLAGS "-Wall -O2 -nostdlib -nostartfiles -ffreestanding ${AARCH}")

# Include functions used to build Idris source
include(core/tools/Idris.cmake)
include(core/tools/utils.cmake)

# Add all directories needed to build the Idris apps
add_subdirectory(core)
add_subdirectory(libs)
add_subdirectory(drivers)
add_subdirectory(apps)
