# The Art of C++
# Copyright (c) 2015-2016 Daniel Frey

.SUFFIXES:
.SECONDARY:

ifeq ($(OS),Windows_NT)
UNAME_S := $(OS)
else
UNAME_S := $(shell uname -s)
endif

CPPFLAGS ?= -pedantic
CXXSTD ?= c++11
CXXFLAGS ?= -O3 -Wall -Wextra -Werror

SOURCES := $(shell find src -name '*.cpp')
DEPENDS := $(SOURCES:%.cpp=build/%.d)
BINARIES := $(SOURCES:%.cpp=build/%)

UNIT_TESTS := $(filter build/src/test/%,$(BINARIES))

.PHONY: all
all: $(BINARIES)
	@set -e; for T in $(UNIT_TESTS); do echo $$T; $$T > /dev/null; done

.PHONY: clean
clean:
	@rm -rf build
	@find . -name '*~' -delete

build/%.d: %.cpp Makefile
	@mkdir -p $(@D)
	$(CXX) -std=$(CXXSTD) -Iinclude $(CPPFLAGS) -MM -MQ $@ $< -o $@

build/%: %.cpp build/%.d
	$(CXX) -std=$(CXXSTD) -Iinclude $(CPPFLAGS) $(CXXFLAGS) $< -o $@

ifeq ($(findstring $(MAKECMDGOALS),clean),)
-include $(DEPENDS)
endif
