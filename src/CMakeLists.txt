CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

PROJECT(fooproj C)

SET(FOOPROJ_VERSION_MAJOR 1)
SET(FOOPROJ_VERSION_MINOR 0)

SET(FOOPROJ_VERSION ${FOOPROJ_VERSION_MAJOR}.${FOOPROJ_VERSION_MINOR})

# configure a header file to pass some of the CMake settings
# to the source code
CONFIGURE_FILE (
    "${PROJECT_SOURCE_DIR}/include/foo_config.h.in"
    "${PROJECT_BINARY_DIR}/include/foo_config.h"
    )

#remember to include the generated config file
INCLUDE_DIRECTORIES(${PROJECT_BINARY_DIR}/include include lib)

#compiler definitions
ADD_DEFINITIONS(-g -O2 -fsigned-char -freg-struct-return -Wall -W 
                -Wshadow -Wpointer-arith -Wcast-qual -Winline -Werror)

#compile the lib with its own CMake file
ADD_SUBDIRECTORY(lib)

#compile the exec with its own CMake file
ADD_SUBDIRECTORY(exec)
