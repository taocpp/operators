// The operators library
// Copyright (c) 2013 Daniel Frey

#ifndef DF_INCLUDE_UNIT_STEPPABLE_HPP
#define DF_INCLUDE_UNIT_STEPPABLE_HPP

#include "incrementable.hpp"
#include "decrementable.hpp"

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T >
    class unit_steppable
      : incrementable< T >, decrementable< T >
    {
    };
  }

  using namespace operators_impl;
}

#endif
