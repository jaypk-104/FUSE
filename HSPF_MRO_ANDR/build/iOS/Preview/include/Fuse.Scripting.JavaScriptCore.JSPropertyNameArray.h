// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/JavaScriptCore/JavaScriptCore.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <JavaScriptCore/JSObjectRef.h>
#include <JavaScriptCore/JSStringRef.h>
#include <Uno.IDisposable.h>
#include <Uno.ValueType.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal extern struct JSPropertyNameArray
// {
struct JSPropertyNameArray_type : uStructType
{
    ::g::Uno::IDisposable interface0;
};

JSPropertyNameArray_type* JSPropertyNameArray_typeof();
void JSPropertyNameArray__Dispose_fn(::JSPropertyNameArrayRef* __this);
void JSPropertyNameArray__GetCount_fn(::JSPropertyNameArrayRef* __this, int32_t* __retval);
void JSPropertyNameArray__get_Item_fn(::JSPropertyNameArrayRef* __this, int32_t* index, ::JSStringRef* __retval);

struct JSPropertyNameArray
{
    static void Dispose(::JSPropertyNameArrayRef __this);
    static int32_t GetCount(::JSPropertyNameArrayRef __this);
    static ::JSStringRef Item(::JSPropertyNameArrayRef __this, int32_t index);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
