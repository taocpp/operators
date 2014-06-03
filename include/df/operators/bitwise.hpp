// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef DF_INCLUDE_BITWISE_HPP
#define DF_INCLUDE_BITWISE_HPP

#include "andable.hpp"
#include "orable.hpp"
#include "xorable.hpp"

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class bitwise
      : andable< T, U >, orable< T, U >, xorable< T, U >
    {
    };
  }

  using namespace operators_impl;
}

#endif
