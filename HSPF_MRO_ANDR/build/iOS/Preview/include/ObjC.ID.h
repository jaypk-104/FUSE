// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Compiler/ExportTargetInterop/Foreign/ObjC/ObjC.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <objc/objc.h>
#include <Uno.ValueType.h>

namespace g{
namespace ObjC{

// public extern struct ID
// {
uStructType* ID_typeof();
void ID__Equals_fn(::id* __this, uType* __type, uObject* o, bool* __retval);
void ID__GetHashCode_fn(::id* __this, uType* __type, int32_t* __retval);
void ID__get_Null_fn(::id* __retval);
void ID__op_Equality_fn(::id* a, ::id* b, bool* __retval);

struct ID
{
    void* _dummy;

    static bool Equals(::id __this, uType* __type, uObject* o) { bool __retval; return ID__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int32_t GetHashCode(::id __this, uType* __type) { int32_t __retval; return ID__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static bool op_Equality(::id a, ::id b);
    static ::id Null();
};
// }

}} // ::g::ObjC
