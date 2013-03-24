// The operators library
// Copyright (c) 2013 Daniel Frey

#ifndef DF_INCLUDE_ORABLE_HPP
#define DF_INCLUDE_ORABLE_HPP

#include <utility>

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T, typename U = T >
    class orable
    {
      friend T operator|( const T& lhs, const U& rhs )
      {
        T nrv( lhs );
        nrv |= rhs;
        return nrv;
      }

      friend T operator|( const T& lhs, U&& rhs )
      {
        T nrv( lhs );
        nrv |= std::move( rhs );
        return nrv;
      }

      friend T&& operator|( T&& lhs, const U& rhs )
      {
        lhs |= rhs;
        return std::move( lhs );
      }

      friend T&& operator|( T&& lhs, U&& rhs )
      {
        lhs |= std::move( rhs );
        return std::move( lhs );
      }
    };
  }

  using namespace operators_impl;
}

#endif
