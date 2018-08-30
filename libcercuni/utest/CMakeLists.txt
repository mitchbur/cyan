project ( libcercuni_unit_test )

set ( EXTRA_LIBS ${EXTRA_LIBS} cercuni )
include_directories ( "${PROJECT_SOURCE_DIR}/.." )

# google gtest library
set ( EXTRA_LIBS ${EXTRA_LIBS} gtest gtest_main )
if ( CMAKE_HOST_UNIX )
	include_directories ( "/usr/local/include" )
	link_directories ( "/usr/local/lib" )
elseif ( CMAKE_HOST_WIN32 )
	# where to look for googletest library and include files
endif ( CMAKE_HOST_UNIX )

add_executable ( cercuni_utest
	utest_real_imag.cpp
 )
target_link_libraries ( cercuni_utest ${EXTRA_LIBS} )
