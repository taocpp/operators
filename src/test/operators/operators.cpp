// The Art of C++ / Operators
// Copyright (c) 2013-2018 Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/operators/

#include <tao/operators.hpp>

#include <cassert>
#include <type_traits>

class X
   : tao::operators::ordered_field< X >,
     tao::operators::modable< X >,
     tao::operators::ordered_field< X, int >,
     tao::operators::modable< X, int >
{
public:
   explicit X( const int v ) noexcept
      : v_( v )
   {
   }

   X( const X& ) = default;
   X( X&& ) = default;

   ~X() = default;

   X& operator=( const X& ) = delete;
   X& operator=( X&& ) = delete;

   X& operator+=( const X& x ) noexcept
   {
      v_ += x.v_;
      return *this;
   }

   X& operator-=( const X& x )
   {
      v_ -= x.v_;
      return *this;
   }

   X& operator*=( const X& x )
   {
      v_ *= x.v_;
      return *this;
   }

   X& operator/=( const X& x )
   {
      v_ /= x.v_;
      return *this;
   }

   X& operator%=( const X& x )
   {
      v_ %= x.v_;
      return *this;
   }

   X& operator+=( const int v )
   {
      v_ += v;
      return *this;
   }

   X& operator-=( const int v )
   {
      v_ -= v;
      return *this;
   }

   X& operator*=( const int v )
   {
      v_ *= v;
      return *this;
   }

   X& operator/=( const int v )
   {
      v_ /= v;
      return *this;
   }

   X& operator%=( const int v )
   {
      v_ %= v;
      return *this;
   }

   int v_;
};

bool operator==( const X& lhs, const X& rhs )
{
   return lhs.v_ == rhs.v_;
}

bool operator<( const X& lhs, const X& rhs )
{
   return lhs.v_ < rhs.v_;
}

bool operator==( const X& x, const int v )
{
   return x.v_ == v;
}

bool operator<( const X& x, const int v )
{
   return x.v_ < v;
}

bool operator>( const X& x, const int v )
{
   return x.v_ > v;
}

class E
   : tao::operators::ordered_field< E >
{
};

void adl_test( const E& /*unused*/ ) {}

namespace tao
{
   void adl_test( const E& );

}  // namespace tao

struct S
   : tao::operators::addable< S >
{
   S() = default;

   S( const S& a, const S& b )
      : S( a + b )
   {
   }

   S& operator+=( const S& /*unused*/ ) noexcept
   {
      return *this;
   }
};

#if !defined( _MSC_VER ) || defined( __clang__ )

struct C
   : tao::operators::less_than_comparable< C >
{
   const int i_;

   explicit constexpr C( int i ) noexcept
      : i_( i )
   {
   }
};

constexpr bool operator<( const C& lhs, const C& rhs ) noexcept
{
   return lhs.i_ < rhs.i_;
}

#endif

int main()
{
   X x1( 1 );
   X x2( 2 );
   X x3( 3 );

   static_assert( noexcept( x1 + x2 ), "oops" );
   static_assert( !noexcept( x1 * x2 ), "oops" );

   assert( x1 == x1 );
   assert( x1 != x2 );

   assert( x1 == 1 );
   assert( 2 == x2 );
   assert( x3 != 1 );
   assert( 2 != x3 );

   assert( x1 < x2 );
   assert( x1 <= x2 );
   assert( x2 <= x2 );
   assert( x3 > x2 );
   assert( x3 >= x2 );
   assert( x2 >= x2 );

   assert( x1 < 2 );
   assert( x1 <= 2 );
   assert( x2 <= 2 );
   assert( x3 > 2 );
   assert( x3 >= 2 );
   assert( x2 >= 2 );

   assert( 1 < x2 );
   assert( 1 <= x2 );
   assert( 2 <= x2 );
   assert( 3 > x2 );
   assert( 3 >= x2 );
   assert( 2 >= x2 );

   assert( x1 + x2 == x3 );
   assert( 1 + x2 == x3 );
   assert( x1 + 2 == x3 );
   assert( x2 + x1 == 3 );

   assert( x3 - x1 == x2 );
   assert( 3 - x1 == x2 );
   assert( x3 - 1 == x2 );
   assert( x1 - x3 == -2 );

   assert( x2 * x2 == 4 );
   assert( x2 * 3 == 6 );
   assert( 4 * x2 == 8 );

   assert( ( x3 + x1 ) / x2 == 2 );
   assert( ( x1 + x3 ) / 2 == x2 );

   assert( x3 % x2 == 1 );
   assert( x3 % 2 == 1 );

   static_assert( std::is_empty< E >::value, "oops" );

   adl_test( E{} );

   S s;
   S s2( s, s );

#if !defined( _MSC_VER ) || defined( __clang__ )

   constexpr C c1( 1 );
   constexpr C c2( 2 );
   constexpr C c3( 3 );

   static_assert( c1 < c2, "oops" );
   static_assert( c2 < c3, "oops" );
   static_assert( c1 < c3, "oops" );

   static_assert( c1 <= c2, "oops" );
   static_assert( c2 <= c3, "oops" );
   static_assert( c1 <= c3, "oops" );

   static_assert( c2 > c1, "oops" );
   static_assert( c3 > c2, "oops" );
   static_assert( c3 > c1, "oops" );

   static_assert( c2 >= c1, "oops" );
   static_assert( c3 >= c2, "oops" );
   static_assert( c3 >= c1, "oops" );

   static_assert( !( c1 < c1 ), "oops" );  // NOLINT
   static_assert( !( c1 > c1 ), "oops" );  // NOLINT
   static_assert( c1 <= c1, "oops" );      // NOLINT
   static_assert( c1 >= c1, "oops" );      // NOLINT

#endif
}
