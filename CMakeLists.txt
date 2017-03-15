cmake_minimum_required(VERSION 3.6)
project(elektra_usability_gen)

add_custom_target(
        code_generation
        COMMAND /Users/dominik/Documents/xcode/Elektra/libelektra/src/tools/gen/gen ${CMAKE_CURRENT_SOURCE_DIR}/specification.ini /Users/dominik/Documents/xcode/Elektra/libelektra/src/tools/gen/template/genopt.h -o genopt.h
        COMMAND /Users/dominik/Documents/xcode/Elektra/libelektra/src/tools/gen/gen ${CMAKE_CURRENT_SOURCE_DIR}/specification.ini /Users/dominik/Documents/xcode/Elektra/libelektra/src/tools/gen/template/genopt.c -o genopt.c
        COMMAND /Users/dominik/Documents/xcode/Elektra/libelektra/src/tools/gen/gen ${CMAKE_CURRENT_SOURCE_DIR}/specification.ini /Users/dominik/Documents/xcode/Elektra/libelektra/src/tools/gen/template/template.h > ${CMAKE_CURRENT_SOURCE_DIR}/wc.h
)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

# For Error parameter support... elektra_error_param.h elektra_error_param.c
set(SOURCE_FILES wc.c genopt.c)
add_executable(wc ${SOURCE_FILES})
add_dependencies(wc code_generation)

find_package(Elektra REQUIRED)
if (ELEKTRA_FOUND)
    message (STATUS "Elektra ${ELEKTRA_VERSION} found")
    include_directories (${ELEKTRA_INCLUDE_DIR})

    target_link_libraries (wc ${ELEKTRA_LIBRARIES})
else (ELEKTRA_FOUND)
    message (FATAL_ERROR "Elektra not found")
endif(ELEKTRA_FOUND)