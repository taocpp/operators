// The operators library
// Copyright (c) 2013 Daniel Frey

#ifndef DF_INCLUDE_BITWISE_HPP
#define DF_INCLUDE_BITWISE_HPP

#include "andable.hpp"
#include "orable.hpp"
#include "xorable.hpp"

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class bitwise
      : andable< T, U >, orable< T, U >, xorable< T, U >
    {
    };
  }

  using namespace operators_impl;
}

#endif
