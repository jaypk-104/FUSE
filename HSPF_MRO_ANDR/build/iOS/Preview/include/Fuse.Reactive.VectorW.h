// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.12.0/VectorFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct VectorW;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class VectorW
// {
::g::Fuse::Reactive::UnaryOperator_type* VectorW_typeof();
void VectorW__ctor_4_fn(VectorW* __this, ::g::Fuse::Reactive::Expression* operand);
void VectorW__New1_fn(::g::Fuse::Reactive::Expression* operand, VectorW** __retval);
void VectorW__TryCompute1_fn(VectorW* __this, uObject* operand, uObject** result, bool* __retval);

struct VectorW : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* operand);
    static VectorW* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
