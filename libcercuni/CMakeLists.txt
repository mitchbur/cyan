cmake_minimum_required (VERSION 3.12)
project ( libcercuni )

add_definitions ( -std=c++14 )

add_library( cercuni real_imag.cpp )

# The version number.
set ( cercuni_VERSION_MAJOR 0 )
set ( cercuni_VERSION_MINOR 2 )

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
	"${PROJECT_SOURCE_DIR}/cercuni_config.h.in"
	"${PROJECT_BINARY_DIR}/cercuni_config.h"
 )
# add the binary tree to the search path for include files
include_directories ( "${PROJECT_BINARY_DIR}" )

add_subdirectory ( utest )

install ( TARGETS cercuni DESTINATION lib )
install ( FILES cercuni.h DESTINATION include )
install ( FILES "${PROJECT_BINARY_DIR}/cercuni_config.h" DESTINATION include )
