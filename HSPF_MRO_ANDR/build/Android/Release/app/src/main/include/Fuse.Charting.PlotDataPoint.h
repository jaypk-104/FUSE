// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotDataItem.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Charting.IPlotDataItem.h>
#include <Fuse.IObject.h>
namespace g{namespace Fuse{namespace Charting{struct Data;}}}
namespace g{namespace Fuse{namespace Charting{struct DataSeries;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotBehavior;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotDataPoint;}}}
namespace g{namespace Uno{namespace UX{struct Size;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Charting{

// internal sealed class PlotDataPoint
// {
::g::Fuse::Charting::IPlotDataItem_type* PlotDataPoint_typeof();
void PlotDataPoint__ctor_1_fn(PlotDataPoint* __this);
void PlotDataPoint__get_AccumulatedValue_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval);
void PlotDataPoint__get_AccumulatedWeight_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval);
void PlotDataPoint__ContainsKey_fn(PlotDataPoint* __this, uString* key, bool* __retval);
void PlotDataPoint__get_Count_fn(PlotDataPoint* __this, float* __retval);
void PlotDataPoint__get_CumulativeValue_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval);
void PlotDataPoint__get_CumulativeWeight_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval);
void PlotDataPoint__GetValue1_fn(PlotDataPoint* __this, uString* key, uObject** __retval);
void PlotDataPoint__get_Item_fn(PlotDataPoint* __this, uString* key, uObject** __retval);
void PlotDataPoint__get_Keys_fn(PlotDataPoint* __this, uArray** __retval);
void PlotDataPoint__New1_fn(PlotDataPoint** __retval);
void PlotDataPoint__get_RawValue_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval);
void PlotDataPoint__get_RelativeValue_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval);
void PlotDataPoint__get_ScreenRelativeValue_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval);
void PlotDataPoint__get_Series_fn(PlotDataPoint* __this, ::g::Fuse::Charting::DataSeries** __retval);
void PlotDataPoint__Update_fn(PlotDataPoint* __this, ::g::Fuse::Charting::Data* data, int32_t* index);
void PlotDataPoint__get_W_fn(PlotDataPoint* __this, ::g::Uno::UX::Size* __retval);
void PlotDataPoint__get_Weight_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval);
void PlotDataPoint__get_X_fn(PlotDataPoint* __this, ::g::Uno::UX::Size* __retval);
void PlotDataPoint__get_Y_fn(PlotDataPoint* __this, ::g::Uno::UX::Size* __retval);
void PlotDataPoint__get_Z_fn(PlotDataPoint* __this, ::g::Uno::UX::Size* __retval);

struct PlotDataPoint : ::g::Fuse::Charting::IPlotDataItem
{
    uStrong< ::g::Fuse::Charting::PlotBehavior*> Plot;
    uStrong< ::g::Fuse::Charting::Data*> Data;
    int32_t Index;
    int32_t SeriesIndex;
    static uSStrong<uArray*> NameKeys_;
    static uSStrong<uArray*>& NameKeys() { return PlotDataPoint_typeof()->Init(), NameKeys_; }
    static uSStrong< ::g::Fuse::Charting::DataSeries*> Empty_;
    static uSStrong< ::g::Fuse::Charting::DataSeries*>& Empty() { return PlotDataPoint_typeof()->Init(), Empty_; }

    void ctor_1();
    ::g::Uno::Float4 AccumulatedValue();
    ::g::Uno::Float4 AccumulatedWeight();
    float Count();
    ::g::Uno::Float4 CumulativeValue();
    ::g::Uno::Float4 CumulativeWeight();
    uObject* GetValue1(uString* key);
    ::g::Uno::Float4 RawValue();
    ::g::Uno::Float4 RelativeValue();
    ::g::Uno::Float4 ScreenRelativeValue();
    ::g::Fuse::Charting::DataSeries* Series();
    void Update(::g::Fuse::Charting::Data* data, int32_t index);
    ::g::Uno::UX::Size W();
    ::g::Uno::Float4 Weight();
    ::g::Uno::UX::Size X();
    ::g::Uno::UX::Size Y();
    ::g::Uno::UX::Size Z();
    static PlotDataPoint* New1();
};
// }

}}} // ::g::Fuse::Charting
