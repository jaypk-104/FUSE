// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.12.0/JavaScriptCore/Function.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Function.h>
#include <JavaScriptCore/JavaScript.h>
#include <JavaScriptCore/JSObjectRef.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Function;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal sealed extern class Function
// {
::g::Fuse::Scripting::Function_type* Function_typeof();
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* function);
void Function__Call_fn(Function* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Function__Call1_fn(Function* __this, uArray* args, uObject** __retval);
void Function__Construct_fn(Function* __this, ::g::Fuse::Scripting::Context* context, uArray* args, ::g::Fuse::Scripting::Object** __retval);
void Function__Construct1_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval);
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval);
void Function__GetHashCode_fn(Function* __this, int32_t* __retval);
void Function__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* function, Function** __retval);

struct Function : ::g::Fuse::Scripting::Function
{
    uStrong< ::g::Fuse::Scripting::JavaScriptCore::Context*> _context;
    ::JSObjectRef _value;

    void ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef function);
    static Function* New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef function);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
