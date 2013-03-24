// The operators library
// Copyright (c) 2013 Daniel Frey

#ifndef DF_INCLUDE_BITWISE_LEFT_HPP
#define DF_INCLUDE_BITWISE_LEFT_HPP

#include "andable_left.hpp"
#include "orable_left.hpp"
#include "xorable_left.hpp"

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U >
    class bitwise_left
      : andable_left< T, U >, orable_left< T, U >, xorable_left< T, U >
    {
    };
  }

  using namespace operators_impl;
}

#endif
