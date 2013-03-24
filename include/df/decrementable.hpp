// The operators library
// Copyright (c) 2013 Daniel Frey

#ifndef DF_INCLUDE_DECREMENTABLE_HPP
#define DF_INCLUDE_DECREMENTABLE_HPP

namespace df
{
  namespace operators_impl // ADL protector
  {
    template< typename T >
    class decrementable
    {
      friend T operator--( T& arg, int )
      {
        const T nrv( arg );
        --arg;
        return nrv;
      }
    };
  }

  using namespace operators_impl;
}

#endif
