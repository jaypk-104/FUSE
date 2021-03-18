// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/UXFunctions/ColorFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.TernaryOperator.h>
namespace g{namespace Alive{struct MixFunction;}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Alive{

// public sealed class MixFunction
// {
::g::Fuse::Reactive::TernaryOperator_type* MixFunction_typeof();
void MixFunction__ctor_3_fn(MixFunction* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, ::g::Fuse::Reactive::Expression* weight);
void MixFunction__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, ::g::Fuse::Reactive::Expression* weight, MixFunction** __retval);
void MixFunction__ToString_fn(MixFunction* __this, uString** __retval);
void MixFunction__TryCompute1_fn(MixFunction* __this, uObject* left, uObject* right, uObject* weight, uObject** result, bool* __retval);

struct MixFunction : ::g::Fuse::Reactive::TernaryOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, ::g::Fuse::Reactive::Expression* weight);
    static MixFunction* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, ::g::Fuse::Reactive::Expression* weight);
};
// }

}} // ::g::Alive
