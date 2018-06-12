cmake_minimum_required (VERSION 3.2.0 FATAL_ERROR)

project (taocpp-operators VERSION 1.0.2 LANGUAGES CXX)

# installation directories
set (TAOCPP_OPERATORS_INSTALL_INCLUDE_DIR "include" CACHE STRING "The installation include directory")
set (TAOCPP_OPERATORS_INSTALL_DOC_DIR "share/doc/tao/operators" CACHE STRING "The installation doc directory")
set (TAOCPP_OPERATORS_INSTALL_CMAKE_DIR "share/tao/operators/cmake" CACHE STRING "The installation cmake directory")

# define a header-only library
add_library (taocpp-operators INTERFACE)
add_library (taocpp::operators ALIAS taocpp-operators)
target_include_directories (taocpp-operators INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:${TAOCPP_OPERATORS_INSTALL_INCLUDE_DIR}>
)

# features used by taocpp/operators
target_compile_features (taocpp-operators INTERFACE
  cxx_constexpr
  cxx_noexcept
  cxx_rvalue_references
)

# testing
enable_testing ()
option (TAOCPP_OPERATORS_BUILD_TESTS "Build test programs" ON)
if (TAOCPP_OPERATORS_BUILD_TESTS)
  add_subdirectory (src/test/operators)
endif ()

# install and export target
install (TARGETS taocpp-operators EXPORT taocpp-operators-targets)

install (EXPORT taocpp-operators-targets
  FILE taocpp-operators-config.cmake
  NAMESPACE taocpp::
  DESTINATION ${TAOCPP_OPERATORS_INSTALL_CMAKE_DIR}
)

install (DIRECTORY include/ DESTINATION ${TAOCPP_OPERATORS_INSTALL_INCLUDE_DIR})
install (FILES LICENSE DESTINATION ${TAOCPP_OPERATORS_INSTALL_DOC_DIR})
