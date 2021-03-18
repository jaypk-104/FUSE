// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotData.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Charting.IPlotDataItemProvider.h>
#include <Fuse.IDeferred.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.ItemsWindowList-1.IListener.h>
#include <Fuse.Reactive.WindowItem.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Charting{struct AxisFilter;}}}
namespace g{namespace Fuse{namespace Charting{struct DataSeries;}}}
namespace g{namespace Fuse{namespace Charting{struct LabelFilterObservable;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotBehavior;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotData;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Charting{

// public sealed class PlotData
// {
struct PlotData_type : ::g::Fuse::Reactive::Instantiator_type
{
    ::g::Fuse::Charting::IPlotDataItemProvider interface10;
};

PlotData_type* PlotData_typeof();
void PlotData__ctor_5_fn(PlotData* __this);
void PlotData__get_ExcludeExtend_fn(PlotData* __this, bool* __retval);
void PlotData__set_ExcludeExtend_fn(PlotData* __this, bool* value);
void PlotData__New4_fn(PlotData** __retval);
void PlotData__OnRooted_fn(PlotData* __this);
void PlotData__OnUnrooted_fn(PlotData* __this);
void PlotData__get_Series_fn(PlotData* __this, ::g::Fuse::Charting::DataSeries** __retval);
void PlotData__set_Series_fn(PlotData* __this, ::g::Fuse::Charting::DataSeries* value);
void PlotData__get_SeriesIndex_fn(PlotData* __this, int32_t* __retval);
void PlotData__set_SeriesIndex_fn(PlotData* __this, int32_t* value);
void PlotData__get_SkipEnds_fn(PlotData* __this, ::g::Uno::Int2* __retval);
void PlotData__set_SkipEnds_fn(PlotData* __this, ::g::Uno::Int2* value);
void PlotData__UpdateFilter_fn(PlotData* __this);

struct PlotData : ::g::Fuse::Reactive::Instantiator
{
    uStrong< ::g::Fuse::Charting::AxisFilter*> _filter;
    uStrong< ::g::Fuse::Charting::LabelFilterObservable*> _obsFilter;
    uStrong< ::g::Fuse::Charting::PlotBehavior*> _plot;
    uStrong< ::g::Fuse::Charting::DataSeries*> _Series;
    int32_t _SeriesIndex;

    void ctor_5();
    bool ExcludeExtend();
    void ExcludeExtend(bool value);
    ::g::Fuse::Charting::DataSeries* Series();
    void Series(::g::Fuse::Charting::DataSeries* value);
    int32_t SeriesIndex();
    void SeriesIndex(int32_t value);
    ::g::Uno::Int2 SkipEnds();
    void SkipEnds(::g::Uno::Int2 value);
    void UpdateFilter();
    static PlotData* New4();
};
// }

}}} // ::g::Fuse::Charting
