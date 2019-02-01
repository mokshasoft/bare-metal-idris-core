#
# Copyright 2019, Mokshasoft AB (mokshasoft.com)
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.
#

# Needed to run the last objcopy stage in the compilation
#
# It would be nicer if this could fit in the toolchain file instead, since then
# no modifications to the app CMakeLists.txt would be necessary.
function(gen_bin target)
    add_custom_command(
        TARGET ${target}
        POST_BUILD
        COMMAND ${CMAKE_OBJCOPY} -O binary ${target} ${target}.bin
    )
endfunction()

function(assert value msg)
    if(NOT ${value})
        message(FATAL_ERROR "Assertion failure: " ${msg})
    endif()
endfunction()

function(create_qemu_target target)
    # Run the app in QEMU
    add_custom_target(qemu.${target} DEPENDS ${target})
    add_custom_command(
        TARGET qemu.${target}
        POST_BUILD
        COMMAND qemu-system-arm -M versatilepb -m 128M -nographic -kernel ${target}.bin
        USES_TERMINAL
    )
    # Start qemu and open a gdbserver on TCP port 1234
    add_custom_target(gdbserver.${target} DEPENDS ${target})
    add_custom_command(
        TARGET gdbserver.${target}
        POST_BUILD
        COMMAND qemu-system-arm -M versatilepb -m 128M -nographic -kernel ${target}.bin -s -S
        USES_TERMINAL
    )
    # Start gdb and break on _start
    add_custom_target(gdb.${target} DEPENDS ${target})
    add_custom_command(
        TARGET gdb.${target}
        POST_BUILD
        COMMAND ${CROSS_COMPILER_PREFIX}-gdb -ex 'target remote :1234' -ex 'b _start' ${target}
        USES_TERMINAL
    )
endfunction()
