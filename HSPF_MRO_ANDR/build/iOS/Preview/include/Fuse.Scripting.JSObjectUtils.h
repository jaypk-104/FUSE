// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.12.0/JSObjectUtils.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct JSObjectUtils;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public static class JSObjectUtils
// {
uClassType* JSObjectUtils_typeof();
void JSObjectUtils__Freeze_fn(::g::Fuse::Scripting::Object* ob, ::g::Fuse::Scripting::Context* c);
void JSObjectUtils__Value_fn(uType* __type, ::g::Fuse::Scripting::Object* obj, uString* name, uTRef __retval);
void JSObjectUtils__Value1_fn(uType* __type, uArray* args, int32_t* index, uTRef __retval);
void JSObjectUtils__ValueOrDefault_fn(uType* __type, ::g::Fuse::Scripting::Object* obj, uString* name, void* defaultValue, uTRef __retval);
void JSObjectUtils__ValueOrDefault1_fn(uType* __type, uArray* args, int32_t* index, void* defaultValue, uTRef __retval);

struct JSObjectUtils : uObject
{
    static void Freeze(::g::Fuse::Scripting::Object* ob, ::g::Fuse::Scripting::Context* c);
    template<class T>
    static T Value(uType* __type, ::g::Fuse::Scripting::Object* obj, uString* name) { T __retval; return JSObjectUtils__Value_fn(__type, obj, name, &__retval), __retval; }
    template<class T>
    static T Value1(uType* __type, uArray* args, int32_t index) { T __retval; return JSObjectUtils__Value1_fn(__type, args, &index, &__retval), __retval; }
    template<class T>
    static T ValueOrDefault(uType* __type, ::g::Fuse::Scripting::Object* obj, uString* name, T defaultValue) { T __retval; return JSObjectUtils__ValueOrDefault_fn(__type, obj, name, uConstrain(__type->U(0), defaultValue), &__retval), __retval; }
    template<class T>
    static T ValueOrDefault1(uType* __type, uArray* args, int32_t index, T defaultValue) { T __retval; return JSObjectUtils__ValueOrDefault1_fn(__type, args, &index, uConstrain(__type->U(0), defaultValue), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
