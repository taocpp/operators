cmake_minimum_required(VERSION 3.2.0 FATAL_ERROR)

project(taocpp-operators VERSION 1.2.2 LANGUAGES CXX)

if(${PROJECT_NAME}_FOUND)
  # multiple versions can't co-exist
  if(NOT ${PROJECT_NAME}_VERSION STREQUAL ${PROJECT_VERSION})
    message(FATAL_ERROR "Multiple mismatched versions")
  endif()

  # only include if this is the first include
  if(NOT ${PROJECT_NAME}_DIR STREQUAL "${PROJECT_BINARY_DIR}")
    return()
  endif()
endif()

# keep track of version
set(${PROJECT_NAME}_FOUND TRUE CACHE BOOL "" FORCE)
set(${PROJECT_NAME}_VERSION "${PROJECT_VERSION}" CACHE STRING "" FORCE)
set(${PROJECT_NAME}_DIR "${PROJECT_BINARY_DIR}" CACHE PATH "" FORCE)

mark_as_advanced(${PROJECT_NAME}_FOUND)
mark_as_advanced(${PROJECT_NAME}_VERSION)
mark_as_advanced(${PROJECT_NAME}_DIR)

# installation directories
set(TAOCPP_OPERATORS_INSTALL_INCLUDE_DIR "include" CACHE STRING "The installation include directory")
set(TAOCPP_OPERATORS_INSTALL_DOC_DIR "share/doc/tao/operators" CACHE STRING "The installation doc directory")
set(TAOCPP_OPERATORS_INSTALL_CMAKE_DIR "share/taocpp-operators/cmake" CACHE STRING "The installation cmake directory")

# define a header-only library
add_library(operators INTERFACE)
add_library(taocpp::operators ALIAS operators)
target_include_directories(operators INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:${TAOCPP_OPERATORS_INSTALL_INCLUDE_DIR}>
)

# features used by taocpp/operators
target_compile_features(operators INTERFACE
  cxx_constexpr
  cxx_noexcept
  cxx_rvalue_references
)

# testing
enable_testing()
option(TAOCPP_OPERATORS_BUILD_TESTS "Build test programs" ON)
if(TAOCPP_OPERATORS_BUILD_TESTS)
  add_subdirectory(src/test/operators)
endif()

# make package findable
configure_file(cmake/dummy-config.cmake.in taocpp-operators-config.cmake @ONLY)

# install and export target
install(TARGETS operators EXPORT operators-targets)

install(EXPORT operators-targets
  FILE taocpp-operators-config.cmake
  NAMESPACE taocpp::
  DESTINATION ${TAOCPP_OPERATORS_INSTALL_CMAKE_DIR}
)

install(DIRECTORY include/ DESTINATION ${TAOCPP_OPERATORS_INSTALL_INCLUDE_DIR})
install(FILES LICENSE DESTINATION ${TAOCPP_OPERATORS_INSTALL_DOC_DIR})
