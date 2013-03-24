// The operators library
// Copyright (c) 2013 Daniel Frey

#ifndef DF_INCLUDE_ORDERED_RING_HPP
#define DF_INCLUDE_ORDERED_RING_HPP

#include "ring.hpp"
#include "totally_ordered.hpp"

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class ordered_ring
      : ring< T, U >, totally_ordered< T, U >
    {
    };
  }

  using namespace operators_impl;
}

#endif
