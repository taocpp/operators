// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef DF_INCLUDE_COMMUTATIVE_RING_HPP
#define DF_INCLUDE_COMMUTATIVE_RING_HPP

#include "commutative_addable.hpp"
#include "subtractable.hpp"
#include "subtractable_left.hpp"
#include "commutative_multipliable.hpp"

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class commutative_ring
      : commutative_addable< T, U >, subtractable< T, U >, subtractable_left< T, U >, commutative_multipliable< T, U >
    {
    };

    template< typename T >
    class commutative_ring< T >
      : commutative_addable< T >, subtractable< T >, commutative_multipliable< T >
    {
    };
  }

  using namespace operators_impl;
}

#endif
