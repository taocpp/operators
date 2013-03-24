// The operators library
// Copyright (c) 2013 Daniel Frey

#ifndef DF_INCLUDE_XORABLE_LEFT_HPP
#define DF_INCLUDE_XORABLE_LEFT_HPP

#include <utility>

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U >
    class xorable_left
    {
      friend T operator^( const U& lhs, const T& rhs )
      {
        T nrv( lhs );
        nrv ^= rhs;
        return nrv;
      }

      friend T operator^( const U& lhs, T&& rhs )
      {
        T nrv( lhs );
        nrv ^= std::move( rhs );
        return nrv;
      }

      friend T operator^( U&& lhs, const T& rhs )
      {
        T nrv( std::move( lhs ) );
        nrv ^= rhs;
        return nrv;
      }

      friend T operator^( U&& lhs, T&& rhs )
      {
        T nrv( std::move( lhs ) );
        nrv ^= std::move( rhs );
        return nrv;
      }
    };
  }

  using namespace operators_impl;
}

#endif
