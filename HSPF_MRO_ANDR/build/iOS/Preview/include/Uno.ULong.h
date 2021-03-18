// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/ULong.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>

namespace g{
namespace Uno{

// public intrinsic struct ULong
// {
uStructType* ULong_typeof();
void ULong__Equals_fn(uint64_t* __this, uType* __type, uObject* o, bool* __retval);
void ULong__GetHashCode_fn(uint64_t* __this, uType* __type, int32_t* __retval);
void ULong__ToString_fn(uint64_t* __this, uType* __type, uString** __retval);
void ULong__TryParse_fn(uString* str, uint64_t* result, bool* __retval);

struct ULong
{
    static bool Equals(uint64_t __this, uType* __type, uObject* o) { bool __retval; return ULong__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int32_t GetHashCode(uint64_t __this, uType* __type) { int32_t __retval; return ULong__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(uint64_t __this, uType* __type) { uString* __retval; return ULong__ToString_fn(&__this, __type, &__retval), __retval; }
    static bool TryParse(uString* str, uint64_t* result);
};
// }

}} // ::g::Uno
