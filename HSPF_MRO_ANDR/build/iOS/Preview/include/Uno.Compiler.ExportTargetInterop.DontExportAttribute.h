// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Compiler/ExportTargetInterop/DontExportAttribute.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{struct DontExportAttribute;}}}}

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{

// public sealed class DontExportAttribute
// {
uType* DontExportAttribute_typeof();
void DontExportAttribute__ctor_1_fn(DontExportAttribute* __this);
void DontExportAttribute__New1_fn(DontExportAttribute** __retval);

struct DontExportAttribute : ::g::Uno::Attribute
{
    void ctor_1();
    static DontExportAttribute* New1();
};
// }

}}}} // ::g::Uno::Compiler::ExportTargetInterop
