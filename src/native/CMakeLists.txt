#
# Copyright 2019, Mokshasoft AB (mokshasoft.com)
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.
#

cmake_minimum_required(VERSION 3.7.2)

#
# The native-hello-world is the simplest bare-metal app. It is not needed
# by the Idris apps.
#

set(APP native-hello-world)
project(${APP} C)

file(GLOB static
    native-hello-world.c
)

add_executable(${APP} EXCLUDE_FROM_ALL ${static})
target_link_libraries(
    ${APP}
    -T ${CMAKE_SOURCE_DIR}/core/src/platforms/${PLATFORM}/memmap.ld
    core
    --gc-sections
)
generate_binary(${APP})
create_qemu_target(${APP})

#
# The native-newlib is the simplest bare-metal app using newlib. It is not needed
# by the Idris apps.
#

set(APP native-newlib)
project(${APP} C)

file(GLOB static
    native-newlib.c
)

add_executable(${APP} EXCLUDE_FROM_ALL ${static})
target_link_libraries(
    ${APP}
    -T ${CMAKE_SOURCE_DIR}/core/src/platforms/${PLATFORM}/memmap.ld
    --start-group
    core
    c
    gcc
    --end-group
    --gc-sections
)
generate_binary(${APP})
create_qemu_target(${APP})
