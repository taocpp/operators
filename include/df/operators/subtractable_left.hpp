// The Operators library

// Copyright Daniel Frey 2013
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef DF_INCLUDE_SUBTRACTABLE_LEFT_HPP
#define DF_INCLUDE_SUBTRACTABLE_LEFT_HPP

#include <utility>

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U >
    class subtractable_left
    {
      friend T operator-( const U& lhs, const T& rhs )
        noexcept( noexcept( T( lhs ), std::declval< T& >() -= rhs, T( std::declval< T& >() ) ) )
      {
        T nrv( lhs );
        nrv -= rhs;
        return nrv;
      }

      friend T operator-( const U& lhs, T&& rhs )
        noexcept( noexcept( T( lhs ), std::declval< T& >() -= std::move( rhs ), T( std::declval< T& >() ) ) )
      {
        T nrv( lhs );
        nrv -= std::move( rhs );
        return nrv;
      }

      friend T operator-( U&& lhs, const T& rhs )
        noexcept( noexcept( T( std::move( lhs ) ), std::declval< T& >() -= rhs, T( std::declval< T& >() ) ) )
      {
        T nrv( std::move( lhs ) );
        nrv -= rhs;
        return nrv;
      }

      friend T operator-( U&& lhs, T&& rhs )
        noexcept( noexcept( T( std::move( lhs ) ), std::declval< T& >() -= std::move( rhs ), T( std::declval< T& >() ) ) )
      {
        T nrv( std::move( lhs ) );
        nrv -= std::move( rhs );
        return nrv;
      }
    };
  }

  using namespace operators_impl;
}

#endif
