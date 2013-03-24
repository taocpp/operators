// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef DF_INCLUDE_RING_HPP
#define DF_INCLUDE_RING_HPP

#include "commutative_addable.hpp"
#include "subtractable.hpp"
#include "subtractable_left.hpp"
#include "multipliable.hpp"

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class ring
      : commutative_addable< T, U >, subtractable< T, U >, subtractable_left< T, U >, multipliable< T, U >
    {
    };

    template< typename T >
    class ring< T >
      : commutative_addable< T >, subtractable< T >, multipliable< T >
    {
    };
  }

  using namespace operators_impl;
}

#endif
