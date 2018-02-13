cmake_minimum_required (VERSION 3.2.0 FATAL_ERROR)

project (taocpp-operators VERSION 1.0.0 LANGUAGES CXX)

set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

# taocpp/operators
include ("taocpp-operators.cmake")
include_directories (${TAOCPP_OPERATORS_INCLUDE_DIRS})

# testing
enable_testing ()
option (TAOCPP_OPERATORS_BUILD_TESTS "Build test programs" ON)
if (TAOCPP_OPERATORS_BUILD_TESTS)
  add_subdirectory (src/test/operators)
endif ()

# installation directories
set (TAOCPP_OPERATORS_INSTALL_INCLUDE_DIR "include" CACHE STRING "The installation include directory")
set (TAOCPP_OPERATORS_INSTALL_DOC_DIR "share/doc/tao/operators" CACHE STRING "The installation doc directory")

# install
install (DIRECTORY include/ DESTINATION ${TAOCPP_OPERATORS_INSTALL_INCLUDE_DIR})
install (FILES LICENSE DESTINATION ${TAOCPP_OPERATORS_INSTALL_DOC_DIR})
