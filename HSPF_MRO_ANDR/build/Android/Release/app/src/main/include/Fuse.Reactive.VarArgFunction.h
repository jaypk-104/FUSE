// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.12.0/VarArgFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class VarArgFunction
// {
::g::Fuse::Reactive::Expression_type* VarArgFunction_typeof();
void VarArgFunction__ctor_1_fn(VarArgFunction* __this);
void VarArgFunction__get_Arguments_fn(VarArgFunction* __this, uObject** __retval);
void VarArgFunction__FormatString_fn(VarArgFunction* __this, uString* funcName, uString** __retval);

struct VarArgFunction : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Uno::Collections::List*> _args;

    void ctor_1();
    uObject* Arguments();
    uString* FormatString(uString* funcName);
};
// }

}}} // ::g::Fuse::Reactive
