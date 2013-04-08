// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef DF_INCLUDE_LEFT_SHIFTABLE_HPP
#define DF_INCLUDE_LEFT_SHIFTABLE_HPP

#include <utility>

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class left_shiftable
    {
      friend T operator<<( const T& lhs, const U& rhs )
        noexcept( noexcept( T( lhs ), std::declval< T& >() <<= rhs, T( std::declval< T& >() ) ) )
      {
        T nrv( lhs );
        nrv <<= rhs;
        return nrv;
      }

      friend T operator<<( const T& lhs, U&& rhs )
        noexcept( noexcept( T( lhs ), std::declval< T& >() <<= std::move( rhs ), T( std::declval< T& >() ) ) )
      {
        T nrv( lhs );
        nrv <<= std::move( rhs );
        return nrv;
      }

      friend T&& operator<<( T&& lhs, const U& rhs )
        noexcept( noexcept( lhs <<= rhs ) )
      {
        lhs <<= rhs;
        return std::move( lhs );
      }

      friend T&& operator<<( T&& lhs, U&& rhs )
        noexcept( noexcept( lhs <<= std::move( rhs ) ) )
      {
        lhs <<= std::move( rhs );
        return std::move( lhs );
      }
    };
  }

  using namespace operators_impl;
}

#endif
