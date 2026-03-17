cmake_minimum_required(VERSION 3.20)

function(BOXY_CLONE)
    if(WIN32)
        set(PYTHON_EXEC python)
    else()
        set(PYTHON_EXEC python3)
    endif()

    execute_process(COMMAND ${PYTHON_EXEC} ${CMAKE_SOURCE_DIR}/boxy_python/tools/clone/main.py)
endfunction()
