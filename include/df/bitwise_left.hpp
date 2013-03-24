// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

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
