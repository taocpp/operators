// The operators library
// Copyright (c) 2013 Daniel Frey

#ifndef DF_INCLUDE_ORDERED_COMMUTATIVE_RING_HPP
#define DF_INCLUDE_ORDERED_COMMUTATIVE_RING_HPP

#include "commutative_ring.hpp"
#include "totally_ordered.hpp"

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class ordered_commutative_ring
      : commutative_ring< T, U >, totally_ordered< T, U >
    {
    };
  }

  using namespace operators_impl;
}

#endif
