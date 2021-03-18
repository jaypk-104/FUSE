// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/AxisFilter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Charting{struct AxisFilter;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotBehavior;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal sealed class AxisFilter
// {
uType* AxisFilter_typeof();
void AxisFilter__Accept_fn(AxisFilter* __this, int32_t* dataIndex, int32_t* axisIndex, int32_t* axisCount, int32_t* windowIndex, bool* __retval);
void AxisFilter__Accept1_fn(AxisFilter* __this, uObject* axisEntryObject, int32_t* axisIndex, int32_t* axisCount, bool* __retval);
void AxisFilter__Accept2_fn(AxisFilter* __this, uObject* axisEntryObject, int32_t* axisIndex, int32_t* axisCount, int32_t* windowIndex, bool* __retval);
void AxisFilter__get_ExcludeExtend_fn(AxisFilter* __this, bool* __retval);
void AxisFilter__set_ExcludeExtend_fn(AxisFilter* __this, bool* value);
void AxisFilter__GetWindowIndex_fn(AxisFilter* __this, int32_t* axisIndex, int32_t* __retval);
void AxisFilter__get_Group_fn(AxisFilter* __this, int32_t* __retval);
void AxisFilter__set_Group_fn(AxisFilter* __this, int32_t* value);
void AxisFilter__get_SkipEnds_fn(AxisFilter* __this, ::g::Uno::Int2* __retval);
void AxisFilter__set_SkipEnds_fn(AxisFilter* __this, ::g::Uno::Int2* value);

struct AxisFilter : uObject
{
    uStrong< ::g::Fuse::Charting::PlotBehavior*> Plot;
    bool IsCountAxis;
    bool _ExcludeExtend;
    int32_t _Group;
    ::g::Uno::Int2 _SkipEnds;

    bool Accept(int32_t dataIndex, int32_t axisIndex, int32_t axisCount, int32_t* windowIndex);
    bool Accept1(uObject* axisEntryObject, int32_t axisIndex, int32_t axisCount);
    bool Accept2(uObject* axisEntryObject, int32_t axisIndex, int32_t axisCount, int32_t* windowIndex);
    bool ExcludeExtend();
    void ExcludeExtend(bool value);
    int32_t GetWindowIndex(int32_t axisIndex);
    int32_t Group();
    void Group(int32_t value);
    ::g::Uno::Int2 SkipEnds();
    void SkipEnds(::g::Uno::Int2 value);
};
// }

}}} // ::g::Fuse::Charting
