// The operators library
// Copyright (c) 2013 Daniel Frey

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
      {
        return !static_cast< bool >( lhs < rhs ) && !static_cast< bool >( lhs > rhs );
      }
    };

    template< typename T >
    class equivalent< T >
    {
      friend bool operator==( const T& lhs, const T& rhs )
      {
        return !static_cast< bool >( lhs < rhs ) && !static_cast< bool >( rhs < lhs );
      }
    };
  }

  using namespace operators_impl;
}

#endif
