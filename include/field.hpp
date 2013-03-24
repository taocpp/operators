// The operators library
// Copyright (c) 2013 Daniel Frey

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
