// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef DF_INCLUDE_ADDABLE_HPP
#define DF_INCLUDE_ADDABLE_HPP

#include <utility>

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class addable
    {
      friend T operator+( const T& lhs, const U& rhs )
      {
        T nrv( lhs );
        nrv += rhs;
        return nrv;
      }

      friend T operator+( const T& lhs, U&& rhs )
      {
        T nrv( lhs );
        nrv += std::move( rhs );
        return nrv;
      }

      friend T&& operator+( T&& lhs, const U& rhs )
      {
        lhs += rhs;
        return std::move( lhs );
      }

      friend T&& operator+( T&& lhs, U&& rhs )
      {
        lhs += std::move( rhs );
        return std::move( lhs );
      }
    };
  }

  using namespace operators_impl;
}

#endif
