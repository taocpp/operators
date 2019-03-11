// The Art of C++ / Operators
// Copyright (c) 2013-2019 Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/operators/

#ifndef TAO_OPERATORS_HPP
#define TAO_OPERATORS_HPP

#include <utility>

#ifndef TAO_OPERATORS_BROKEN_EBO
#if defined( _MSC_VER ) && !defined( __clang__ )
#define TAO_OPERATORS_BROKEN_EBO __declspec( empty_bases )
#else
#define TAO_OPERATORS_BROKEN_EBO
#endif
#endif

#ifndef TAO_OPERATORS_CONSTEXPR
#if defined( _MSC_VER ) && !defined( __clang__ )
#define TAO_OPERATORS_CONSTEXPR
#else
#define TAO_OPERATORS_CONSTEXPR constexpr  // NOLINT
#endif
#endif

#ifndef TAO_OPERATORS_NO_RVALUE_REFERENCE_RESULTS
#define TAO_OPERATORS_BASIC_OP( name, op )                                                                                                                    \
   template< typename T, typename U = T >                                                                                                                     \
   class name /* NOLINT */                                                                                                                                    \
   {                                                                                                                                                          \
      friend T operator op( const T& lhs, const U& rhs ) noexcept( noexcept( T( lhs ), std::declval< T& >() op## = rhs, T( std::declval< T& >() ) ) )         \
      {                                                                                                                                                       \
         T nrv( lhs );                                                                                                                                        \
         nrv op## = rhs;                                                                                                                                      \
         return nrv;                                                                                                                                          \
      }                                                                                                                                                       \
                                                                                                                                                              \
      friend T operator op( const T& lhs, U&& rhs ) noexcept( noexcept( T( lhs ), std::declval< T& >() op## = std::move( rhs ), T( std::declval< T& >() ) ) ) \
      {                                                                                                                                                       \
         T nrv( lhs );                                                                                                                                        \
         nrv op## = std::move( rhs );                                                                                                                         \
         return nrv;                                                                                                                                          \
      }                                                                                                                                                       \
                                                                                                                                                              \
      friend T&& operator op( T&& lhs, const U& rhs ) noexcept( noexcept( lhs op## = rhs ) )                                                                  \
      {                                                                                                                                                       \
         lhs op## = rhs;                                                                                                                                      \
         return std::move( lhs );                                                                                                                             \
      }                                                                                                                                                       \
                                                                                                                                                              \
      friend T&& operator op( T&& lhs, U&& rhs ) noexcept( noexcept( lhs op## = std::move( rhs ) ) )                                                          \
      {                                                                                                                                                       \
         lhs op## = std::move( rhs );                                                                                                                         \
         return std::move( lhs );                                                                                                                             \
      }                                                                                                                                                       \
   }
#else
#define TAO_OPERATORS_BASIC_OP( name, op )                                                                                                                            \
   template< typename T, typename U = T >                                                                                                                             \
   class name                                                                                                                                                         \
   {                                                                                                                                                                  \
      friend T operator op( const T& lhs, const U& rhs ) noexcept( noexcept( T( lhs ), std::declval< T& >() op## = rhs, T( std::declval< T& >() ) ) )                 \
      {                                                                                                                                                               \
         T nrv( lhs );                                                                                                                                                \
         nrv op## = rhs;                                                                                                                                              \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( const T& lhs, U&& rhs ) noexcept( noexcept( T( lhs ), std::declval< T& >() op## = std::move( rhs ), T( std::declval< T& >() ) ) )         \
      {                                                                                                                                                               \
         T nrv( lhs );                                                                                                                                                \
         nrv op## = std::move( rhs );                                                                                                                                 \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( T&& lhs, const U& rhs ) noexcept( noexcept( T( std::move( lhs ) ), std::declval< T& >() op## = rhs, T( std::declval< T& >() ) ) )         \
      {                                                                                                                                                               \
         T nrv( std::move( lhs ) );                                                                                                                                   \
         nrv op## = rhs;                                                                                                                                              \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( T&& lhs, U&& rhs ) noexcept( noexcept( T( std::move( lhs ) ), std::declval< T& >() op## = std::move( rhs ), T( std::declval< T& >() ) ) ) \
      {                                                                                                                                                               \
         T nrv( std::move( lhs ) );                                                                                                                                   \
         nrv op## = std::move( rhs );                                                                                                                                 \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
   }
#endif

#define TAO_OPERATORS_BASIC_OP_LEFT( name, op )                                                                                                                       \
   template< typename T, typename U >                                                                                                                                 \
   class name##_left                                                                                                                                                  \
   {                                                                                                                                                                  \
      friend T operator op( const U& lhs, const T& rhs ) noexcept( noexcept( T( lhs ), std::declval< T& >() op## = rhs, T( std::declval< T& >() ) ) )                 \
      {                                                                                                                                                               \
         T nrv( lhs );                                                                                                                                                \
         nrv op## = rhs;                                                                                                                                              \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( const U& lhs, T&& rhs ) noexcept( noexcept( T( lhs ), std::declval< T& >() op## = std::move( rhs ), T( std::declval< T& >() ) ) )         \
      {                                                                                                                                                               \
         T nrv( lhs );                                                                                                                                                \
         nrv op## = std::move( rhs );                                                                                                                                 \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( U&& lhs, const T& rhs ) noexcept( noexcept( T( std::move( lhs ) ), std::declval< T& >() op## = rhs, T( std::declval< T& >() ) ) )         \
      {                                                                                                                                                               \
         T nrv( std::move( lhs ) );                                                                                                                                   \
         nrv op## = rhs;                                                                                                                                              \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( U&& lhs, T&& rhs ) noexcept( noexcept( T( std::move( lhs ) ), std::declval< T& >() op## = std::move( rhs ), T( std::declval< T& >() ) ) ) \
      {                                                                                                                                                               \
         T nrv( std::move( lhs ) );                                                                                                                                   \
         nrv op## = std::move( rhs );                                                                                                                                 \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
   }

#ifndef TAO_OPERATORS_NO_RVALUE_REFERENCE_RESULTS
#define TAO_OPERATORS_BASIC_OP_COMMUTATIVE( name, op )                                                                                                        \
   template< typename T, typename U = T >                                                                                                                     \
   class commutative_##name                                                                                                                                   \
   {                                                                                                                                                          \
      friend T operator op( const T& lhs, const U& rhs ) noexcept( noexcept( T( lhs ), std::declval< T& >() op## = rhs, T( std::declval< T& >() ) ) )         \
      {                                                                                                                                                       \
         T nrv( lhs );                                                                                                                                        \
         nrv op## = rhs;                                                                                                                                      \
         return nrv;                                                                                                                                          \
      }                                                                                                                                                       \
                                                                                                                                                              \
      friend T operator op( const T& lhs, U&& rhs ) noexcept( noexcept( T( lhs ), std::declval< T& >() op## = std::move( rhs ), T( std::declval< T& >() ) ) ) \
      {                                                                                                                                                       \
         T nrv( lhs );                                                                                                                                        \
         nrv op## = std::move( rhs );                                                                                                                         \
         return nrv;                                                                                                                                          \
      }                                                                                                                                                       \
                                                                                                                                                              \
      friend T&& operator op( T&& lhs, const U& rhs ) noexcept( noexcept( lhs op## = rhs ) )                                                                  \
      {                                                                                                                                                       \
         lhs op## = rhs;                                                                                                                                      \
         return std::move( lhs );                                                                                                                             \
      }                                                                                                                                                       \
                                                                                                                                                              \
      friend T&& operator op( T&& lhs, U&& rhs ) noexcept( noexcept( lhs op## = std::move( rhs ) ) )                                                          \
      {                                                                                                                                                       \
         lhs op## = std::move( rhs );                                                                                                                         \
         return std::move( lhs );                                                                                                                             \
      }                                                                                                                                                       \
                                                                                                                                                              \
      friend T operator op( const U& lhs, const T& rhs ) noexcept( noexcept( T( rhs ), std::declval< T& >() op## = lhs, T( std::declval< T& >() ) ) )         \
      {                                                                                                                                                       \
         T nrv( rhs );                                                                                                                                        \
         nrv op## = lhs;                                                                                                                                      \
         return nrv;                                                                                                                                          \
      }                                                                                                                                                       \
                                                                                                                                                              \
      friend T&& operator op( const U& lhs, T&& rhs ) noexcept( noexcept( rhs op## = lhs ) )                                                                  \
      {                                                                                                                                                       \
         rhs op## = lhs;                                                                                                                                      \
         return std::move( rhs );                                                                                                                             \
      }                                                                                                                                                       \
                                                                                                                                                              \
      friend T operator op( U&& lhs, const T& rhs ) noexcept( noexcept( T( rhs ), std::declval< T& >() op## = std::move( lhs ) ) )                            \
      {                                                                                                                                                       \
         T nrv( rhs );                                                                                                                                        \
         nrv op## = std::move( lhs );                                                                                                                         \
         return nrv;                                                                                                                                          \
      }                                                                                                                                                       \
                                                                                                                                                              \
      friend T&& operator op( U&& lhs, T&& rhs ) noexcept( noexcept( rhs op## = std::move( lhs ) ) )                                                          \
      {                                                                                                                                                       \
         rhs op## = std::move( lhs );                                                                                                                         \
         return std::move( rhs );                                                                                                                             \
      }                                                                                                                                                       \
   };                                                                                                                                                         \
                                                                                                                                                              \
   template< typename T >                                                                                                                                     \
   class commutative_##name< T >                                                                                                                              \
   {                                                                                                                                                          \
      friend T operator op( const T& lhs, const T& rhs ) noexcept( noexcept( T( lhs ), std::declval< T& >() op## = rhs, T( std::declval< T& >() ) ) )         \
      {                                                                                                                                                       \
         T nrv( lhs );                                                                                                                                        \
         nrv op## = rhs;                                                                                                                                      \
         return nrv;                                                                                                                                          \
      }                                                                                                                                                       \
                                                                                                                                                              \
      friend T&& operator op( const T& lhs, T&& rhs ) noexcept( noexcept( rhs op## = lhs ) )                                                                  \
      {                                                                                                                                                       \
         rhs op## = lhs;                                                                                                                                      \
         return std::move( rhs );                                                                                                                             \
      }                                                                                                                                                       \
                                                                                                                                                              \
      friend T&& operator op( T&& lhs, const T& rhs ) noexcept( noexcept( lhs op## = rhs ) )                                                                  \
      {                                                                                                                                                       \
         lhs op## = rhs;                                                                                                                                      \
         return std::move( lhs );                                                                                                                             \
      }                                                                                                                                                       \
                                                                                                                                                              \
      friend T&& operator op( T&& lhs, T&& rhs ) noexcept( noexcept( lhs op## = std::move( rhs ) ) )                                                          \
      {                                                                                                                                                       \
         lhs op## = std::move( rhs );                                                                                                                         \
         return std::move( lhs );                                                                                                                             \
      }                                                                                                                                                       \
   }
#else
#define TAO_OPERATORS_BASIC_OP_COMMUTATIVE( name, op )                                                                                                                \
   template< typename T, typename U = T >                                                                                                                             \
   class commutative_##name                                                                                                                                           \
   {                                                                                                                                                                  \
      friend T operator op( const T& lhs, const U& rhs ) noexcept( noexcept( T( lhs ), std::declval< T& >() op## = rhs, T( std::declval< T& >() ) ) )                 \
      {                                                                                                                                                               \
         T nrv( lhs );                                                                                                                                                \
         nrv op## = rhs;                                                                                                                                              \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( const T& lhs, U&& rhs ) noexcept( noexcept( T( lhs ), std::declval< T& >() op## = std::move( rhs ), T( std::declval< T& >() ) ) )         \
      {                                                                                                                                                               \
         T nrv( lhs );                                                                                                                                                \
         nrv op## = std::move( rhs );                                                                                                                                 \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( T&& lhs, const U& rhs ) noexcept( noexcept( T( std::move( lhs ) ), std::declval< T& >() op## = rhs, T( std::declval< T& >() ) ) )         \
      {                                                                                                                                                               \
         T nrv( std::move( lhs ) );                                                                                                                                   \
         nrv op## = rhs;                                                                                                                                              \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( T&& lhs, U&& rhs ) noexcept( noexcept( T( std::move( lhs ) ), std::declval< T& >() op## = std::move( rhs ), T( std::declval< T& >() ) ) ) \
      {                                                                                                                                                               \
         T nrv( std::move( lhs ) );                                                                                                                                   \
         nrv op## = std::move( rhs );                                                                                                                                 \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( const U& lhs, const T& rhs ) noexcept( noexcept( T( rhs ), std::declval< T& >() op## = lhs, T( std::declval< T& >() ) ) )                 \
      {                                                                                                                                                               \
         T nrv( rhs );                                                                                                                                                \
         nrv op## = lhs;                                                                                                                                              \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( const U& lhs, T&& rhs ) noexcept( noexcept( T( std::move( rhs ) ), std::declval< T& >() op## = lhs, T( std::declval< T& >() ) ) )         \
      {                                                                                                                                                               \
         T nrv( std::move( rhs ) );                                                                                                                                   \
         nrv op## = lhs;                                                                                                                                              \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( U&& lhs, const T& rhs ) noexcept( noexcept( T( rhs ), std::declval< T& >() op## = std::move( lhs ) ) )                                    \
      {                                                                                                                                                               \
         T nrv( rhs );                                                                                                                                                \
         nrv op## = std::move( lhs );                                                                                                                                 \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( U&& lhs, T&& rhs ) noexcept( noexcept( T( std::move( rhs ) ), std::declval< T& >() op## = std::move( lhs ) ) )                            \
      {                                                                                                                                                               \
         T nrv( std::move( rhs ) );                                                                                                                                   \
         nrv op## = std::move( lhs );                                                                                                                                 \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
   };                                                                                                                                                                 \
                                                                                                                                                                      \
   template< typename T >                                                                                                                                             \
   class commutative_##name< T >                                                                                                                                      \
   {                                                                                                                                                                  \
      friend T operator op( const T& lhs, const T& rhs ) noexcept( noexcept( T( lhs ), std::declval< T& >() op## = rhs, T( std::declval< T& >() ) ) )                 \
      {                                                                                                                                                               \
         T nrv( lhs );                                                                                                                                                \
         nrv op## = rhs;                                                                                                                                              \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( const T& lhs, T&& rhs ) noexcept( noexcept( T( lhs ), std::declval< T& >() op## = std::move( rhs ), T( std::declval< T& >() ) ) )         \
      {                                                                                                                                                               \
         T nrv( lhs );                                                                                                                                                \
         nrv op## = std::move( rhs );                                                                                                                                 \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( T&& lhs, const T& rhs ) noexcept( noexcept( T( std::move( lhs ) ), std::declval< T& >() op## = rhs, T( std::declval< T& >() ) ) )         \
      {                                                                                                                                                               \
         T nrv( std::move( lhs ) );                                                                                                                                   \
         nrv op## = rhs;                                                                                                                                              \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
                                                                                                                                                                      \
      friend T operator op( T&& lhs, T&& rhs ) noexcept( noexcept( T( std::move( lhs ) ), std::declval< T& >() op## = std::move( rhs ), T( std::declval< T& >() ) ) ) \
      {                                                                                                                                                               \
         T nrv( std::move( lhs ) );                                                                                                                                   \
         nrv op## = std::move( rhs );                                                                                                                                 \
         return nrv;                                                                                                                                                  \
      }                                                                                                                                                               \
   }
#endif

namespace tao
{
   namespace operators
   {
      template< typename T, typename U = T >
      class equality_comparable
      {
         friend TAO_OPERATORS_CONSTEXPR bool operator!=( const T& lhs, const U& rhs ) noexcept( noexcept( static_cast< bool >( lhs == rhs ) ) )
         {
            return !static_cast< bool >( lhs == rhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator==( const U& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs == lhs ) ) )
         {
            return static_cast< bool >( rhs == lhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator!=( const U& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs != lhs ) ) )
         {
            return static_cast< bool >( rhs != lhs );
         }
      };

      template< typename T >
      class equality_comparable< T >
      {
         friend TAO_OPERATORS_CONSTEXPR bool operator!=( const T& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( lhs == rhs ) ) )
         {
            return !static_cast< bool >( lhs == rhs );
         }
      };

      template< typename T, typename U = T >
      class less_than_comparable
      {
         friend TAO_OPERATORS_CONSTEXPR bool operator<=( const T& lhs, const U& rhs ) noexcept( noexcept( static_cast< bool >( lhs > rhs ) ) )
         {
            return !static_cast< bool >( lhs > rhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator>=( const T& lhs, const U& rhs ) noexcept( noexcept( static_cast< bool >( lhs < rhs ) ) )
         {
            return !static_cast< bool >( lhs < rhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator<( const U& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs > lhs ) ) )
         {
            return static_cast< bool >( rhs > lhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator>( const U& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs < lhs ) ) )
         {
            return static_cast< bool >( rhs < lhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator<=( const U& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs >= lhs ) ) )
         {
            return static_cast< bool >( rhs >= lhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator>=( const U& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs <= lhs ) ) )
         {
            return static_cast< bool >( rhs <= lhs );
         }
      };

      template< typename T >
      class less_than_comparable< T >
      {
         friend TAO_OPERATORS_CONSTEXPR bool operator>( const T& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs < lhs ) ) )
         {
            return static_cast< bool >( rhs < lhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator<=( const T& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs < lhs ) ) )
         {
            return !static_cast< bool >( rhs < lhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator>=( const T& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( lhs < rhs ) ) )
         {
            return !static_cast< bool >( lhs < rhs );
         }
      };

      template< typename T, typename U = T >
      class TAO_OPERATORS_BROKEN_EBO totally_ordered
         : less_than_comparable< T, U >,
           equality_comparable< T, U >
      {
      };

      template< typename T, typename U = T >
      class equivalent
      {
         friend TAO_OPERATORS_CONSTEXPR bool operator==( const T& lhs, const U& rhs ) noexcept( noexcept( static_cast< bool >( lhs < rhs ), static_cast< bool >( lhs > rhs ) ) )
         {
            return !static_cast< bool >( lhs < rhs ) && !static_cast< bool >( lhs > rhs );
         }
      };

      template< typename T >
      class equivalent< T >
      {
         friend TAO_OPERATORS_CONSTEXPR bool operator==( const T& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( lhs < rhs ) ) )
         {
            return !static_cast< bool >( lhs < rhs ) && !static_cast< bool >( rhs < lhs );
         }
      };

      template< typename T, typename U = T >
      class partially_ordered
      {
         friend TAO_OPERATORS_CONSTEXPR bool operator<=( const T& lhs, const U& rhs ) noexcept( noexcept( static_cast< bool >( lhs < rhs ), static_cast< bool >( lhs == rhs ) ) )
         {
            return static_cast< bool >( lhs < rhs ) || static_cast< bool >( lhs == rhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator>=( const T& lhs, const U& rhs ) noexcept( noexcept( static_cast< bool >( lhs > rhs ), static_cast< bool >( lhs == rhs ) ) )
         {
            return static_cast< bool >( lhs > rhs ) || static_cast< bool >( lhs == rhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator<( const U& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs > lhs ) ) )
         {
            return static_cast< bool >( rhs > lhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator>( const U& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs < lhs ) ) )
         {
            return static_cast< bool >( rhs < lhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator<=( const U& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs >= lhs ) ) )
         {
            return static_cast< bool >( rhs >= lhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator>=( const U& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs <= lhs ) ) )
         {
            return static_cast< bool >( rhs <= lhs );
         }
      };

      template< typename T >
      class partially_ordered< T >
      {
         friend TAO_OPERATORS_CONSTEXPR bool operator>( const T& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs < lhs ) ) )
         {
            return static_cast< bool >( rhs < lhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator<=( const T& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( lhs < rhs ), static_cast< bool >( lhs == rhs ) ) )
         {
            return static_cast< bool >( lhs < rhs ) || static_cast< bool >( lhs == rhs );
         }

         friend TAO_OPERATORS_CONSTEXPR bool operator>=( const T& lhs, const T& rhs ) noexcept( noexcept( static_cast< bool >( rhs < lhs ), static_cast< bool >( lhs == rhs ) ) )
         {
            return static_cast< bool >( rhs < lhs ) || static_cast< bool >( lhs == rhs );
         }
      };

      TAO_OPERATORS_BASIC_OP( addable, +);
      TAO_OPERATORS_BASIC_OP_LEFT( addable, +);
      TAO_OPERATORS_BASIC_OP_COMMUTATIVE( addable, +);

      TAO_OPERATORS_BASIC_OP( subtractable, -);
      TAO_OPERATORS_BASIC_OP_LEFT( subtractable, -);

      TAO_OPERATORS_BASIC_OP( multipliable, * );
      TAO_OPERATORS_BASIC_OP_LEFT( multipliable, * );
      TAO_OPERATORS_BASIC_OP_COMMUTATIVE( multipliable, * );

      TAO_OPERATORS_BASIC_OP( dividable, / );
      TAO_OPERATORS_BASIC_OP_LEFT( dividable, / );

      TAO_OPERATORS_BASIC_OP( modable, % );
      TAO_OPERATORS_BASIC_OP_LEFT( modable, % );

      template< typename T, typename U = T >
      class TAO_OPERATORS_BROKEN_EBO ring
         : commutative_addable< T, U >,
           subtractable< T, U >,
           subtractable_left< T, U >,
           multipliable< T, U >
      {
      };

      template< typename T >
      class TAO_OPERATORS_BROKEN_EBO ring< T >
         : commutative_addable< T >,
           subtractable< T >,
           multipliable< T >
      {
      };

      template< typename T, typename U = T >
      class TAO_OPERATORS_BROKEN_EBO ordered_ring
         : ring< T, U >,
           totally_ordered< T, U >
      {
      };

      template< typename T, typename U = T >
      class TAO_OPERATORS_BROKEN_EBO commutative_ring
         : commutative_addable< T, U >,
           subtractable< T, U >,
           subtractable_left< T, U >,
           commutative_multipliable< T, U >
      {
      };

      template< typename T >
      class TAO_OPERATORS_BROKEN_EBO commutative_ring< T >
         : commutative_addable< T >,
           subtractable< T >,
           commutative_multipliable< T >
      {
      };

      template< typename T, typename U = T >
      class TAO_OPERATORS_BROKEN_EBO ordered_commutative_ring
         : commutative_ring< T, U >,
           totally_ordered< T, U >
      {
      };

      template< typename T, typename U = T >
      class TAO_OPERATORS_BROKEN_EBO field
         : commutative_ring< T, U >,
           dividable< T, U >,
           dividable_left< T, U >
      {
      };

      template< typename T >
      class TAO_OPERATORS_BROKEN_EBO field< T >
         : commutative_ring< T >,
           dividable< T >
      {
      };

      template< typename T, typename U = T >
      class TAO_OPERATORS_BROKEN_EBO ordered_field
         : field< T, U >,
           totally_ordered< T, U >
      {
      };

      TAO_OPERATORS_BASIC_OP( andable, & );
      TAO_OPERATORS_BASIC_OP_LEFT( andable, & );
      TAO_OPERATORS_BASIC_OP_COMMUTATIVE( andable, & );

      TAO_OPERATORS_BASIC_OP( orable, | );
      TAO_OPERATORS_BASIC_OP_LEFT( orable, | );
      TAO_OPERATORS_BASIC_OP_COMMUTATIVE( orable, | );

      TAO_OPERATORS_BASIC_OP( xorable, ^);
      TAO_OPERATORS_BASIC_OP_LEFT( xorable, ^);
      TAO_OPERATORS_BASIC_OP_COMMUTATIVE( xorable, ^);

      template< typename T, typename U = T >
      class TAO_OPERATORS_BROKEN_EBO bitwise
         : andable< T, U >,
           orable< T, U >,
           xorable< T, U >
      {
      };

      template< typename T, typename U >
      class TAO_OPERATORS_BROKEN_EBO bitwise_left
         : andable_left< T, U >,
           orable_left< T, U >,
           xorable_left< T, U >
      {
      };

      template< typename T, typename U = T >
      class TAO_OPERATORS_BROKEN_EBO commutative_bitwise
         : commutative_andable< T, U >,
           commutative_orable< T, U >,
           commutative_xorable< T, U >
      {
      };

      TAO_OPERATORS_BASIC_OP( left_shiftable, << );
      TAO_OPERATORS_BASIC_OP( right_shiftable, >> );

      template< typename T, typename U = T >
      class TAO_OPERATORS_BROKEN_EBO shiftable
         : left_shiftable< T, U >,
           right_shiftable< T, U >
      {
      };

      template< typename T >
      class incrementable
      {
         friend T operator++( T& arg, int /*unused*/ ) noexcept( noexcept( T( arg ), ++arg, T( std::declval< T >() ) ) )  // NOLINT
         {
            const T nrv( arg );
            ++arg;
            return nrv;
         }
      };

      template< typename T >
      class decrementable
      {
         friend T operator--( T& arg, int /*unused*/ ) noexcept( noexcept( T( arg ), --arg, T( std::declval< T >() ) ) )  // NOLINT
         {
            const T nrv( arg );
            --arg;
            return nrv;
         }
      };

      template< typename T >
      class TAO_OPERATORS_BROKEN_EBO unit_steppable
         : incrementable< T >,
           decrementable< T >
      {
      };

   }  // namespace operators

}  // namespace tao

#undef TAO_OPERATORS_BASIC_OP
#undef TAO_OPERATORS_BASIC_OP_LEFT
#undef TAO_OPERATORS_BASIC_OP_COMMUTATIVE

#endif
