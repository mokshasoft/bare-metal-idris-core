#
# Copyright 2019, Mokshasoft AB (mokshasoft.com)
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.
#

cmake_minimum_required(VERSION 3.7.2)

#
# The coreapp is the simplest bare-metal app using newlib. It is not needed
# by the Idris apps.
#

set(APP coreapp)
project(${APP})
enable_language(C ASM)

# boot.s needs to be first in order for the linking to be done correctly
set(static
    src/boot.s
    src/rw.s
    src/newlib.c
    src/core-app.c
)

add_executable(${APP} EXCLUDE_FROM_ALL ${static})
target_link_libraries(
    ${APP}
    -Wl,-u,_start,-e,_start
    -Wl,-L,${LIBC} -Wl,-L,${LIBGCC}
    c
    gcc
    -Wl,--gc-sections
)
string(APPEND CMAKE_EXE_LINKER_FLAGS " -T ${CMAKE_CURRENT_SOURCE_DIR}/src/memmap")
gen_bin(${APP})
create_qemu_target(${APP})
