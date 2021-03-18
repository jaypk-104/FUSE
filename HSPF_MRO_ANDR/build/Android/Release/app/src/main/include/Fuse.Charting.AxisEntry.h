// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotDataItem.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Charting.AxisEntryData.h>
#include <Fuse.Charting.IPlotDataItem.h>
#include <Fuse.IObject.h>
namespace g{namespace Fuse{namespace Charting{struct AxisEntry;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotBehavior;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal sealed class AxisEntry
// {
::g::Fuse::Charting::IPlotDataItem_type* AxisEntry_typeof();
void AxisEntry__ctor_1_fn(AxisEntry* __this);
void AxisEntry__ContainsKey_fn(AxisEntry* __this, uString* key, bool* __retval);
void AxisEntry__get_Index_fn(AxisEntry* __this, int32_t* __retval);
void AxisEntry__get_Item_fn(AxisEntry* __this, uString* key, uObject** __retval);
void AxisEntry__get_Keys_fn(AxisEntry* __this, uArray** __retval);
void AxisEntry__New1_fn(AxisEntry** __retval);
void AxisEntry__get_ScreenIndex_fn(AxisEntry* __this, int32_t* __retval);
void AxisEntry__Update_fn(AxisEntry* __this, ::g::Fuse::Charting::AxisEntryData* data);

struct AxisEntry : ::g::Fuse::Charting::IPlotDataItem
{
    uStrong< ::g::Fuse::Charting::PlotBehavior*> Plot;
    int32_t Axis;
    ::g::Fuse::Charting::AxisEntryData Data;

    void ctor_1();
    int32_t Index();
    int32_t ScreenIndex();
    void Update(::g::Fuse::Charting::AxisEntryData data);
    static AxisEntry* New1();
};
// }

}}} // ::g::Fuse::Charting
