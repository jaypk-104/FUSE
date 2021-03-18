// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/ValueType.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public abstract class ValueType
// {
uType* ValueType_typeof();
void ValueType__ctor__fn(uObject* __this);
void ValueType__Equals_fn(uObject* __this, uObject* o, bool* __retval);
void ValueType__GetHashCode_fn(uObject* __this, int32_t* __retval);

struct ValueType
{
    static void ctor_(uObject* __this);
};
// }

}} // ::g::Uno
