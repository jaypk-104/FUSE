// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Compiler/ExportTargetInterop/OptionalAttribute.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{struct OptionalAttribute;}}}}

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{

// public sealed class OptionalAttribute
// {
uType* OptionalAttribute_typeof();
void OptionalAttribute__ctor_1_fn(OptionalAttribute* __this);
void OptionalAttribute__New1_fn(OptionalAttribute** __retval);

struct OptionalAttribute : ::g::Uno::Attribute
{
    void ctor_1();
    static OptionalAttribute* New1();
};
// }

}}}} // ::g::Uno::Compiler::ExportTargetInterop
