// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

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
