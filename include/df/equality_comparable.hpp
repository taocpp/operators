// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef DF_INCLUDE_EQUALITY_COMPARABLE_HPP
#define DF_INCLUDE_EQUALITY_COMPARABLE_HPP

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class equality_comparable
    {
      friend bool operator!=( const T& lhs, const U& rhs )
      {
        return !static_cast< bool >( lhs == rhs );
      }

      friend bool operator==( const U& lhs, const T& rhs )
      {
        return static_cast< bool >( rhs == lhs );
      }

      friend bool operator!=( const U& lhs, const T& rhs )
      {
        return static_cast< bool >( rhs != lhs );
      }
    };

    template< typename T >
    class equality_comparable< T >
    {
      friend bool operator!=( const T& lhs, const T& rhs )
      {
        return !static_cast< bool >( lhs == rhs );
      }
    };
  }

  using namespace operators_impl;
}

#endif
