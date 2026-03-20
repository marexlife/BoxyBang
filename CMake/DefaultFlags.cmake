cmake_minimum_required(VERSION 3.20)

set(BOXY_COMMON_FLAGS
    -fno-rtti
    -fno-exceptions
    -O3
)

if(MSVC)
    set(BOXY_COMMON_FLAGS
        ${BOXY_COMMON_FLAGS}
        /W4
    )
else()
    set(BOXY_COMMON_FLAGS
        ${BOXY_COMMON_FLAGS}
        -Wall
        -Wextra
        -Wpedantic
        -Wconversion
        -Werror
    )
endif()