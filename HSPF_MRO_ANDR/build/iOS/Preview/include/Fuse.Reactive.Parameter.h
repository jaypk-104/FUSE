// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.12.0/Parameter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Parameter;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Parameter
// {
::g::Fuse::Reactive::Expression_type* Parameter_typeof();
void Parameter__ctor_1_fn(Parameter* __this, ::g::Fuse::Reactive::Expression* visual);
void Parameter__New1_fn(::g::Fuse::Reactive::Expression* visual, Parameter** __retval);
void Parameter__Subscribe_fn(Parameter* __this, uObject* context, uObject* listener, uObject** __retval);

struct Parameter : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> Visual;

    void ctor_1(::g::Fuse::Reactive::Expression* visual);
    static Parameter* New1(::g::Fuse::Reactive::Expression* visual);
};
// }

}}} // ::g::Fuse::Reactive
