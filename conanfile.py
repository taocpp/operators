#!/usr/bin/env python
# -*- coding: utf-8 -*-
from conans import ConanFile, CMake

class OperatorsConan(ConanFile):
    name = "operators"
    description = "C++11 single-header library that provides highly efficient, move aware operators for arithmetic data types"
    homepage = "https://github.com/taocpp/operators"
    url = homepage
    license = "MIT"
    author = "taocpp@icemx.net"
    settings = "compiler", "arch"
    exports = "LICENSE"
    exports_sources = "include/*", "CMakeLists.txt"
    no_copy_source = True

    def build(self):
        pass

    def package(self):
        cmake = CMake(self)

        cmake.definitions["TAOCPP_OPERATORS_BUILD_TESTS"] = "OFF"
        cmake.definitions["TAOCPP_OPERATORS_INSTALL_DOC_DIR"] = "licenses"

        cmake.configure()
        cmake.install()

    def package_id(self):
        self.info.header_only()
