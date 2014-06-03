// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef DF_INCLUDE_COMMUTATIVE_BITWISE_HPP
#define DF_INCLUDE_COMMUTATIVE_BITWISE_HPP

#include "commutative_andable.hpp"
#include "commutative_orable.hpp"
#include "commutative_xorable.hpp"

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class commutative_bitwise
      : commutative_andable< T, U >, commutative_orable< T, U >, commutative_xorable< T, U >
    {
    };
  }

  using namespace operators_impl;
}

#endif
