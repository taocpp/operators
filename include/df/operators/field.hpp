// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef DF_INCLUDE_FIELD_HPP
#define DF_INCLUDE_FIELD_HPP

#include "commutative_ring.hpp"
#include "dividable.hpp"
#include "dividable_left.hpp"

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class field
      : commutative_ring< T, U >, dividable< T, U >, dividable_left< T, U >
    {
    };

    template< typename T >
    class field< T >
      : commutative_ring< T >, dividable< T >
    {
    };
  }

  using namespace operators_impl;
}

#endif
