// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotAxis.uno.
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
namespace g{namespace Fuse{namespace Charting{struct DataChangedArgs;}}}
namespace g{namespace Fuse{namespace Charting{struct LabelFilterObservable;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotAxisData;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotBehavior;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Charting{

// public sealed class PlotAxisData
// {
struct PlotAxisData_type : ::g::Fuse::Reactive::Instantiator_type
{
    ::g::Fuse::Charting::IPlotDataItemProvider interface10;
};

PlotAxisData_type* PlotAxisData_typeof();
void PlotAxisData__ctor_5_fn(PlotAxisData* __this);
void PlotAxisData__get_Axis_fn(PlotAxisData* __this, int32_t* __retval);
void PlotAxisData__set_Axis_fn(PlotAxisData* __this, int32_t* value);
void PlotAxisData__get_AxisIndex_fn(PlotAxisData* __this, int32_t* __retval);
void PlotAxisData__get_ExcludeExtend_fn(PlotAxisData* __this, bool* __retval);
void PlotAxisData__set_ExcludeExtend_fn(PlotAxisData* __this, bool* value);
void PlotAxisData__get_Group_fn(PlotAxisData* __this, int32_t* __retval);
void PlotAxisData__set_Group_fn(PlotAxisData* __this, int32_t* value);
void PlotAxisData__New4_fn(PlotAxisData** __retval);
void PlotAxisData__OnDataChanged1_fn(PlotAxisData* __this, uObject* s, ::g::Fuse::Charting::DataChangedArgs* args);
void PlotAxisData__OnRooted_fn(PlotAxisData* __this);
void PlotAxisData__OnUnrooted_fn(PlotAxisData* __this);
void PlotAxisData__get_Plot_fn(PlotAxisData* __this, ::g::Fuse::Charting::PlotBehavior** __retval);
void PlotAxisData__get_SkipEnds_fn(PlotAxisData* __this, ::g::Uno::Int2* __retval);
void PlotAxisData__set_SkipEnds_fn(PlotAxisData* __this, ::g::Uno::Int2* value);
void PlotAxisData__UpdateFilter_fn(PlotAxisData* __this);

struct PlotAxisData : ::g::Fuse::Reactive::Instantiator
{
    uStrong< ::g::Fuse::Charting::PlotBehavior*> _plot;
    uStrong< ::g::Fuse::Charting::LabelFilterObservable*> _obsFilter;
    uStrong< ::g::Fuse::Charting::AxisFilter*> _filter;
    bool _hasAxis;
    int32_t _axis;

    void ctor_5();
    int32_t Axis();
    void Axis(int32_t value);
    int32_t AxisIndex();
    bool ExcludeExtend();
    void ExcludeExtend(bool value);
    int32_t Group();
    void Group(int32_t value);
    void OnDataChanged1(uObject* s, ::g::Fuse::Charting::DataChangedArgs* args);
    ::g::Fuse::Charting::PlotBehavior* Plot();
    ::g::Uno::Int2 SkipEnds();
    void SkipEnds(::g::Uno::Int2 value);
    void UpdateFilter();
    static PlotAxisData* New4();
};
// }

}}} // ::g::Fuse::Charting
