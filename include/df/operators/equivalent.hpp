// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef DF_INCLUDE_EQUIVALENT_HPP
#define DF_INCLUDE_EQUIVALENT_HPP

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class equivalent
    {
      friend bool operator==( const T& lhs, const U& rhs )
        noexcept( noexcept( static_cast< bool >( lhs < rhs ), static_cast< bool >( lhs > rhs ) ) )
      {
        return !static_cast< bool >( lhs < rhs ) && !static_cast< bool >( lhs > rhs );
      }
    };

    template< typename T >
    class equivalent< T >
    {
      friend bool operator==( const T& lhs, const T& rhs )
        noexcept( noexcept( static_cast< bool >( lhs < rhs ) ) )
      {
        return !static_cast< bool >( lhs < rhs ) && !static_cast< bool >( rhs < lhs );
      }
    };
  }

  using namespace operators_impl;
}

#endif
