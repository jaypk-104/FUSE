// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Backends/CPlusPlus/Uno/_config.h.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <cfloat>
#include <cstring>
#include <stdint.h>
#include <stdarg.h>
#include <uBase/Config.h>

// Debugging
//#define DEBUG_ARC 0 // 0..4
//#define DEBUG_DUMPS 1
//#define DEBUG_UNSAFE 1
//#define DEBUG_GENERICS 1

// Constants
#if MSVC
#pragma warning( disable : 4756 ) // overflow in constant arithmetic
#endif
const double DBL_INF = (double)(DBL_MAX + DBL_MAX);
const double DBL_NAN = (double)(DBL_INF - DBL_INF);
const float FLT_INF = (float)DBL_INF;
const float FLT_NAN = (float)DBL_NAN;

// Source info
#define U_STR1(STR) #STR
#define U_STR2(STR) U_STR1(STR)
#define U_SOURCE __FILE__ "(" U_STR2(__LINE__) ")"

// Logging
enum uLogLevel {
    uLogLevelDebug = 0,
    uLogLevelInformation = 1,
    uLogLevelWarning = 2,
    uLogLevelError = 3,
    uLogLevelFatal = 4
};
void uLog(int level, const char* format, ...);
void uLogv(int level, const char* format, va_list args);
#define U_LOG(...) uLog(uLogLevelDebug, __VA_ARGS__)
#define U_ERROR(...) uLog(uLogLevelError, __VA_ARGS__)

// Kill switch
U_NORETURN void uFatal(const char* src = NULL, const char* msg = NULL);
#define U_FATAL(...) uFatal(U_SOURCE, "" __VA_ARGS__)

// Asserts
#ifdef DEBUG_UNSAFE
template<class T>
T uAssertPtr(T ptr, const char* src, const char* msg) {
    if (!ptr) uFatal(src, msg);
    return ptr;
}
#define U_ASSERT_PTR(PTR) uAssertPtr(PTR, U_SOURCE, #PTR)
#define U_ASSERT(EXPR) if (!(EXPR)) uFatal(U_SOURCE, #EXPR)
#else
#define U_ASSERT_PTR(PTR) PTR
#define U_ASSERT(EXPR) do; while(0)
#endif

// Stack alloc
#if MSVC
#include <malloc.h>
#else
#include <alloca.h>
#endif
#define U_ALLOCA(SIZE) alloca(SIZE)

// C++11 compatibility
#ifdef _MSC_VER
#define alignof __alignof
#endif

// Deprecation
#ifdef __GNUC__
#define DEPRECATED(msg) __attribute__ ((deprecated(msg)))
#elif defined(_MSC_VER)
#define DEPRECATED(msg) __declspec(deprecated("is deprecated: " msg))
#else
#define DEPRECATED(msg)
#endif

// Legacy char type
typedef DEPRECATED("use char16_t instead") char16_t uChar;

// Disable free()
#if DEBUG_ARC >= 4
#define free(X) void()
#endif
