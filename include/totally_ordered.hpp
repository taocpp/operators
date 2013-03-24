// The operators library
// Copyright (c) 2013 Daniel Frey

#ifndef DF_INCLUDE_TOTALLY_ORDERED_HPP
#define DF_INCLUDE_TOTALLY_ORDERED_HPP

#include "less_than_comparable.hpp"
#include "equality_comparable.hpp"

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class totally_ordered
      : less_than_comparable< T, U >, equality_comparable< T, U >
    {
    };
  }

  using namespace operators_impl;
}

#endif
