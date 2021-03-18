// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.12.0/Layouts/GridLayout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.DefinitionBase.h>
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class Column
// {
uType* Column_typeof();
void Column__ctor_4_fn(Column* __this);
void Column__New2_fn(Column** __retval);
void Column__get_Width_fn(Column* __this, float* __retval);
void Column__set_Width_fn(Column* __this, float* value);
void Column__get_WidthMetric_fn(Column* __this, int32_t* __retval);
void Column__set_WidthMetric_fn(Column* __this, int32_t* value);

struct Column : ::g::Fuse::Layouts::DefinitionBase
{
    void ctor_4();
    float Width();
    void Width(float value);
    int32_t WidthMetric();
    void WidthMetric(int32_t value);
    static Column* New2();
};
// }

}}} // ::g::Fuse::Layouts
