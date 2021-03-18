// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBehavior.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Int2.h>
namespace g{namespace Fuse{namespace Charting{struct Data;}}}
namespace g{namespace Fuse{namespace Charting{struct DataSeries;}}}
namespace g{namespace Fuse{namespace Charting{struct DataSpec;}}}
namespace g{namespace Fuse{namespace Charting{struct DataStats;}}}
namespace g{namespace Fuse{namespace Charting{struct ObservableAxisItems;}}}
namespace g{namespace Fuse{namespace Charting{struct ObservableDataItems;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotBehavior;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Fuse{
namespace Charting{

// internal sealed class PlotBehavior
// {
::g::Fuse::Node_type* PlotBehavior_typeof();
void PlotBehavior__AxisMetric_fn(PlotBehavior* __this, int32_t* i, int32_t* __retval);
void PlotBehavior__add_DataChanged_fn(PlotBehavior* __this, uDelegate* value);
void PlotBehavior__remove_DataChanged_fn(PlotBehavior* __this, uDelegate* value);
void PlotBehavior__get_DataSpec_fn(PlotBehavior* __this, ::g::Fuse::Charting::DataSpec** __retval);
void PlotBehavior__set_DataSpec_fn(PlotBehavior* __this, ::g::Fuse::Charting::DataSpec* value);
void PlotBehavior__get_DataStats_fn(PlotBehavior* __this, ::g::Fuse::Charting::DataStats** __retval);
void PlotBehavior__DeferredUpdateData_fn(PlotBehavior* __this);
void PlotBehavior__get_Extend_fn(PlotBehavior* __this, ::g::Uno::Int2* __retval);
void PlotBehavior__set_Extend_fn(PlotBehavior* __this, ::g::Uno::Int2* value);
void PlotBehavior__FindPlot_fn(::g::Fuse::Node* from, PlotBehavior** __retval);
void PlotBehavior__GetAxisItems_fn(PlotBehavior* __this, int32_t* axis, uObject** __retval);
void PlotBehavior__GetAxisOrientation_fn(PlotBehavior* __this, int32_t* axis, int32_t* __retval);
void PlotBehavior__GetDataItems_fn(PlotBehavior* __this, int32_t* series, ::g::Fuse::Charting::ObservableDataItems** __retval);
void PlotBehavior__InvalidateCalculation_fn(PlotBehavior* __this);
void PlotBehavior__InvalidateData_fn(PlotBehavior* __this);
void PlotBehavior__InvalidateWindow_fn(PlotBehavior* __this);
void PlotBehavior__IsCountAxis_fn(PlotBehavior* __this, int32_t* i, bool* __retval);
void PlotBehavior__get_Limit_fn(PlotBehavior* __this, int32_t* __retval);
void PlotBehavior__set_Limit_fn(PlotBehavior* __this, int32_t* value);
void PlotBehavior__get_Offset_fn(PlotBehavior* __this, int32_t* __retval);
void PlotBehavior__set_Offset_fn(PlotBehavior* __this, int32_t* value);
void PlotBehavior__OnRooted_fn(PlotBehavior* __this);
void PlotBehavior__OnSpecChanged_fn(PlotBehavior* __this);
void PlotBehavior__OnUnrooted_fn(PlotBehavior* __this);
void PlotBehavior__get_Orientation_fn(PlotBehavior* __this, int32_t* __retval);
void PlotBehavior__set_Orientation_fn(PlotBehavior* __this, int32_t* value);
void PlotBehavior__get_PlotStats_fn(PlotBehavior* __this, ::g::Fuse::Charting::DataStats** __retval);
void PlotBehavior__ScreenSteps_fn(PlotBehavior* __this, ::g::Uno::Int4* v, ::g::Uno::Int4* __retval);
void PlotBehavior__ScreenValue_fn(PlotBehavior* __this, ::g::Uno::Float4* v, ::g::Uno::Float4* __retval);
void PlotBehavior__get_Series_fn(PlotBehavior* __this, uObject** __retval);
void PlotBehavior__StepOffset_fn(PlotBehavior* __this, int32_t* step);
void PlotBehavior__UpdateAxisItems_fn(PlotBehavior* __this, ::g::Uno::Collections::List* data, int32_t* axis);

struct PlotBehavior : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Charting::DataSpec*> _spec;
    int32_t _orientation;
    int32_t _offset;
    bool _hasLimit;
    int32_t _limit;
    ::g::Uno::Int2 _extend;
    uStrong< ::g::Uno::Collections::List*> _series;
    bool _pendingData;
    uStrong< ::g::Fuse::Charting::DataStats*> _dataStats;
    uStrong< ::g::Fuse::Charting::DataStats*> _plotStats;
    uStrong< ::g::Uno::Collections::List*> _dataItems;
    uStrong<uArray*> _axisItems;
    uStrong<uDelegate*> DataChanged1;

    int32_t AxisMetric(int32_t i);
    void add_DataChanged(uDelegate* value);
    void remove_DataChanged(uDelegate* value);
    ::g::Fuse::Charting::DataSpec* DataSpec();
    void DataSpec(::g::Fuse::Charting::DataSpec* value);
    ::g::Fuse::Charting::DataStats* DataStats();
    void DeferredUpdateData();
    ::g::Uno::Int2 Extend();
    void Extend(::g::Uno::Int2 value);
    uObject* GetAxisItems(int32_t axis);
    int32_t GetAxisOrientation(int32_t axis);
    ::g::Fuse::Charting::ObservableDataItems* GetDataItems(int32_t series);
    void InvalidateCalculation();
    void InvalidateData();
    void InvalidateWindow();
    bool IsCountAxis(int32_t i);
    int32_t Limit();
    void Limit(int32_t value);
    int32_t Offset();
    void Offset(int32_t value);
    void OnSpecChanged();
    int32_t Orientation();
    void Orientation(int32_t value);
    ::g::Fuse::Charting::DataStats* PlotStats();
    ::g::Uno::Int4 ScreenSteps(::g::Uno::Int4 v);
    ::g::Uno::Float4 ScreenValue(::g::Uno::Float4 v);
    uObject* Series();
    void StepOffset(int32_t step);
    void UpdateAxisItems(::g::Uno::Collections::List* data, int32_t axis);
    static PlotBehavior* FindPlot(::g::Fuse::Node* from);
};
// }

}}} // ::g::Fuse::Charting
