// The operators library
// Copyright (c) 2013 Daniel Frey

#ifndef DF_INCLUDE_COMMUTATIVE_XORABLE_HPP
#define DF_INCLUDE_COMMUTATIVE_XORABLE_HPP

#include <utility>

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class commutative_xorable
    {
      friend T operator^( const T& lhs, const U& rhs )
      {
        T nrv( lhs );
        nrv ^= rhs;
        return nrv;
      }

      friend T operator^( const T& lhs, U&& rhs )
      {
        T nrv( lhs );
        nrv ^= std::move( rhs );
        return nrv;
      }

      friend T&& operator^( T&& lhs, const U& rhs )
      {
        lhs ^= rhs;
        return std::move( lhs );
      }

      friend T&& operator^( T&& lhs, U&& rhs )
      {
        lhs ^= std::move( rhs );
        return std::move( lhs );
      }

      friend T operator^( const U& lhs, const T& rhs )
      {
        T nrv( rhs );
        nrv ^= lhs;
        return nrv;
      }

      friend T&& operator^( const U& lhs, T&& rhs )
      {
        rhs ^= lhs;
        return std::move( rhs );
      }

      friend T operator^( U&& lhs, const T& rhs )
      {
        T nrv( rhs );
        nrv ^= std::move( lhs );
        return nrv;
      }

      friend T&& operator^( U&& lhs, T&& rhs )
      {
        rhs ^= std::move( lhs );
        return std::move( rhs );
      }
    };

    template< typename T >
    class commutative_xorable< T >
    {
      friend T operator^( const T& lhs, const T& rhs )
      {
        T nrv( lhs );
        nrv ^= rhs;
        return nrv;
      }

      friend T&& operator^( const T& lhs, T&& rhs )
      {
        rhs ^= lhs;
        return std::move( rhs );
      }

      friend T&& operator^( T&& lhs, const T& rhs )
      {
        lhs ^= rhs;
        return std::move( lhs );
      }

      friend T&& operator^( T&& lhs, T&& rhs )
      {
        lhs ^= std::move( rhs );
        return std::move( lhs );
      }
    };
  }

  using namespace operators_impl;
}

#endif
