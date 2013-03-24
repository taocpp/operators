// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef DF_INCLUDE_SHIFTABLE_HPP
#define DF_INCLUDE_SHIFTABLE_HPP

#include "left_shiftable.hpp"
#include "right_shiftable.hpp"

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class shiftable
      : left_shiftable< T, U >, right_shiftable< T, U >
    {
    };
  }

  using namespace operators_impl;
}

#endif
