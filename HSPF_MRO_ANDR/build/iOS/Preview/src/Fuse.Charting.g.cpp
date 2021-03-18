// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AttractorConfig.h>
#include <Fuse.Animations.DestinationBehavior-1.h>
#include <Fuse.Animations.DestinationBehavior-1.ValueHandler.h>
#include <Fuse.Charting.AxisEntry.h>
#include <Fuse.Charting.AxisEntryData.h>
#include <Fuse.Charting.AxisFilter.h>
#include <Fuse.Charting.Data.h>
#include <Fuse.Charting.DataChangedArgs.h>
#include <Fuse.Charting.DataChangedHandler.h>
#include <Fuse.Charting.DataSeries.h>
#include <Fuse.Charting.DataSeriesMetric.h>
#include <Fuse.Charting.DataSpec.h>
#include <Fuse.Charting.DataStats.h>
#include <Fuse.Charting.DataUtils.h>
#include <Fuse.Charting.FilterObservable.h>
#include <Fuse.Charting.FilterObservable.SourceItem.h>
#include <Fuse.Charting.IPlotDataItem.ChangedHandler.h>
#include <Fuse.Charting.IPlotDataItem.h>
#include <Fuse.Charting.IPlotDataItemListener-1.h>
#include <Fuse.Charting.IPlotDataItemProvider.h>
#include <Fuse.Charting.LabelFilterObservable.h>
#include <Fuse.Charting.ObjectWrapper-1.h>
#include <Fuse.Charting.ObservableAxisItems.h>
#include <Fuse.Charting.ObservableData.h>
#include <Fuse.Charting.ObservableData.Subscription.h>
#include <Fuse.Charting.ObservableDataItems.h>
#include <Fuse.Charting.Plot.h>
#include <Fuse.Charting.PlotArea.h>
#include <Fuse.Charting.PlotAxis.h>
#include <Fuse.Charting.PlotAxisData.h>
#include <Fuse.Charting.PlotAxisLayout.CellSizing.h>
#include <Fuse.Charting.PlotAxisLayout.h>
#include <Fuse.Charting.PlotAxisLayoutAxis.h>
#include <Fuse.Charting.PlotAxisLayoutPosition.h>
#include <Fuse.Charting.PlotAxisMetric.h>
#include <Fuse.Charting.PlotBar.h>
#include <Fuse.Charting.PlotBarStyle.h>
#include <Fuse.Charting.PlotBehavior.h>
#include <Fuse.Charting.PlotCurvePoint.h>
#include <Fuse.Charting.PlotData.h>
#include <Fuse.Charting.PlotDataItemWatcher-1.h>
#include <Fuse.Charting.PlotDataPoint.h>
#include <Fuse.Charting.PlotElement.h>
#include <Fuse.Charting.PlotExpression.Field.h>
#include <Fuse.Charting.PlotExpression.h>
#include <Fuse.Charting.PlotExpression.PlotDataSubscription-1.h>
#include <Fuse.Charting.PlotExpression.PlotSubscription.h>
#include <Fuse.Charting.PlotExpression.PlotSubscription.UndefinedObject.h>
#include <Fuse.Charting.PlotOrientation.h>
#include <Fuse.Charting.PlotPoint.h>
#include <Fuse.Charting.PlotPointAnchor.h>
#include <Fuse.Charting.PlotPointStyle.h>
#include <Fuse.Charting.PlotTickAxis.h>
#include <Fuse.Charting.PlotTicks.h>
#include <Fuse.Charting.PlotTickStyle.h>
#include <Fuse.Charting.PlotWedge.h>
#include <Fuse.Charting.PointCalculator.h>
#include <Fuse.Charting.ReadOnlyObservableData-1.h>
#include <Fuse.Charting.ReadOnlyObservableList-1.h>
#include <Fuse.Charting.TypeUtils.h>
#include <Fuse.Controls.EllipticalShape.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.FillRule.h>
#include <Fuse.Drawing.LineSegment.h>
#include <Fuse.Drawing.LineSegments.h>
#include <Fuse.Drawing.Surface.h>
#include <Fuse.Drawing.SurfacePath.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IArray.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IObject.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Marshal.h>
#include <Fuse.MarshalException.h>
#include <Fuse.Motion.DestinationMotionConfig.h>
#include <Fuse.Motion.MotionUnit.h>
#include <Fuse.Node.ContextDataResult.h>
#include <Fuse.Node.DataType.h>
#include <Fuse.Node.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.IObservableArray.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod1-1.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int4.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[57];
static uType* TYPES[52];

namespace g{
namespace Fuse{
namespace Charting{

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotDataItem.uno
// -------------------------------------------------------------------

// internal sealed class AxisEntry
// {
static void AxisEntry_build(uType* type)
{
    ::STRINGS[0] = uString::Const("value");
    ::STRINGS[1] = uString::Const("index");
    ::STRINGS[2] = uString::Const("label");
    ::STRINGS[3] = uString::Const("position");
    ::STRINGS[4] = uString::Const("object");
    ::STRINGS[5] = uString::Const("screenIndex");
    ::TYPES[0] = ::g::Uno::String_typeof();
    ::TYPES[1] = ::TYPES[0/*string*/]->Array();
    type->SetInterfaces(
        ::g::Fuse::IObject_typeof(), offsetof(::g::Fuse::Charting::IPlotDataItem_type, interface0));
    type->SetFields(1,
        ::g::Fuse::Charting::PlotBehavior_typeof(), offsetof(AxisEntry, Plot), 0,
        ::g::Uno::Int_typeof(), offsetof(AxisEntry, Axis), 0,
        ::g::Fuse::Charting::AxisEntryData_typeof(), offsetof(AxisEntry, Data), 0);
}

::g::Fuse::Charting::IPlotDataItem_type* AxisEntry_typeof()
{
    static uSStrong< ::g::Fuse::Charting::IPlotDataItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Charting::IPlotDataItem_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AxisEntry);
    options.TypeSize = sizeof(::g::Fuse::Charting::IPlotDataItem_type);
    type = (::g::Fuse::Charting::IPlotDataItem_type*)uClassType::New("Fuse.Charting.AxisEntry", options);
    type->fp_build_ = AxisEntry_build;
    type->fp_ctor_ = (void*)AxisEntry__New1_fn;
    type->fp_ContainsKey = (void(*)(::g::Fuse::Charting::IPlotDataItem*, uString*, bool*))AxisEntry__ContainsKey_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Charting::IPlotDataItem*, uString*, uObject**))AxisEntry__get_Item_fn;
    type->fp_get_Keys = (void(*)(::g::Fuse::Charting::IPlotDataItem*, uArray**))AxisEntry__get_Keys_fn;
    type->interface0.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))AxisEntry__ContainsKey_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, uString*, uObject**))AxisEntry__get_Item_fn;
    type->interface0.fp_get_Keys = (void(*)(uObject*, uArray**))AxisEntry__get_Keys_fn;
    return type;
}

// public generated AxisEntry()
void AxisEntry__ctor_1_fn(AxisEntry* __this)
{
    __this->ctor_1();
}

// public override sealed bool ContainsKey(string key)
void AxisEntry__ContainsKey_fn(AxisEntry* __this, uString* key, bool* __retval)
{
    return *__retval = ((((::g::Uno::String::op_Equality(key, ::STRINGS[0/*"value"*/]) || ::g::Uno::String::op_Equality(key, ::STRINGS[1/*"index"*/])) || ::g::Uno::String::op_Equality(key, ::STRINGS[2/*"label"*/])) || ::g::Uno::String::op_Equality(key, ::STRINGS[3/*"position"*/])) || ::g::Uno::String::op_Equality(key, ::STRINGS[4/*"object"*/])) || ::g::Uno::String::op_Equality(key, ::STRINGS[5/*"screenIndex"*/]), void();
}

// public int get_Index()
void AxisEntry__get_Index_fn(AxisEntry* __this, int32_t* __retval)
{
    *__retval = __this->Index();
}

// public override sealed object get_Item(string key)
void AxisEntry__get_Item_fn(AxisEntry* __this, uString* key, uObject** __retval)
{
    uStackFrame __("Fuse.Charting.AxisEntry", "get_Item(string)");

    if (::g::Uno::String::op_Equality(key, ::STRINGS[0/*"value"*/]))
        return *__retval = uBox(::g::Uno::Float_typeof(), __this->Data.Value), void();

    if (::g::Uno::String::op_Equality(key, ::STRINGS[1/*"index"*/]))
        return *__retval = uBox<int32_t>(::g::Uno::Int_typeof(), __this->Data.Index), void();

    if (::g::Uno::String::op_Equality(key, ::STRINGS[2/*"label"*/]))
        return *__retval = (__this->Data.Data == NULL) ? uCast<uString*>(NULL, ::TYPES[0/*string*/]) : (uString*)uPtr(__this->Data.Data)->Label(), void();

    if (::g::Uno::String::op_Equality(key, ::STRINGS[3/*"position"*/]))
        return *__retval = uBox(::g::Uno::Float_typeof(), __this->Data.Position), void();

    if (::g::Uno::String::op_Equality(key, ::STRINGS[4/*"object"*/]))
        return *__retval = (__this->Data.Data == NULL) ? NULL : (uObject*)uPtr(__this->Data.Data)->SourceObject(), void();

    if (::g::Uno::String::op_Equality(key, ::STRINGS[5/*"screenIndex"*/]))
        return *__retval = uBox<int32_t>(::g::Uno::Int_typeof(), __this->ScreenIndex()), void();

    return *__retval = NULL, void();
}

// public override sealed string[] get_Keys()
void AxisEntry__get_Keys_fn(AxisEntry* __this, uArray** __retval)
{
    return *__retval = uArray::Init<uString*>(::TYPES[1/*string[]*/], 6, ::STRINGS[0/*"value"*/], ::STRINGS[1/*"index"*/], ::STRINGS[2/*"label"*/], ::STRINGS[3/*"position"*/], ::STRINGS[4/*"object"*/], ::STRINGS[5/*"screenIndex"*/]), void();
}

// public generated AxisEntry New()
void AxisEntry__New1_fn(AxisEntry** __retval)
{
    *__retval = AxisEntry::New1();
}

// public float get_Position()
void AxisEntry__get_Position_fn(AxisEntry* __this, float* __retval)
{
    *__retval = __this->Position();
}

// public int get_ScreenIndex()
void AxisEntry__get_ScreenIndex_fn(AxisEntry* __this, int32_t* __retval)
{
    *__retval = __this->ScreenIndex();
}

// public void Update(Fuse.Charting.AxisEntryData data)
void AxisEntry__Update_fn(AxisEntry* __this, ::g::Fuse::Charting::AxisEntryData* data)
{
    __this->Update(*data);
}

// public generated AxisEntry() [instance]
void AxisEntry::ctor_1()
{
    ctor_();
}

// public int get_Index() [instance]
int32_t AxisEntry::Index()
{
    return Data.Index;
}

// public float get_Position() [instance]
float AxisEntry::Position()
{
    return Data.Position;
}

// public int get_ScreenIndex() [instance]
int32_t AxisEntry::ScreenIndex()
{
    uStackFrame __("Fuse.Charting.AxisEntry", "get_ScreenIndex()");

    if (uPtr(Plot)->IsCountAxis(Axis))
        return Data.Index - uPtr(Plot)->Offset();

    return Data.Index;
}

// public void Update(Fuse.Charting.AxisEntryData data) [instance]
void AxisEntry::Update(::g::Fuse::Charting::AxisEntryData data)
{
    uStackFrame __("Fuse.Charting.AxisEntry", "Update(Fuse.Charting.AxisEntryData)");
    Data = data;
    OnChanged();
}

// public generated AxisEntry New() [static]
AxisEntry* AxisEntry::New1()
{
    AxisEntry* obj1 = (AxisEntry*)uNew(AxisEntry_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotDataItem.uno
// -------------------------------------------------------------------

// internal struct AxisEntryData
// {
static void AxisEntryData_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Charting::Data_typeof(), offsetof(AxisEntryData, Data), 0,
        ::g::Uno::Float_typeof(), offsetof(AxisEntryData, Value), 0,
        ::g::Uno::Int_typeof(), offsetof(AxisEntryData, Index), 0,
        ::g::Uno::Float_typeof(), offsetof(AxisEntryData, Position), 0);
}

uStructType* AxisEntryData_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 4;
    options.Alignment = alignof(AxisEntryData);
    options.ValueSize = sizeof(AxisEntryData);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Charting.AxisEntryData", options);
    type->fp_build_ = AxisEntryData_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/AxisFilter.uno
// -----------------------------------------------------------------

// internal sealed class AxisFilter
// {
static void AxisFilter_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Charting::AxisEntry_typeof();
    ::TYPES[3] = ::g::Fuse::Charting::PlotDataPoint_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Charting::PlotBehavior_typeof(), offsetof(AxisFilter, Plot), 0,
        ::g::Uno::Bool_typeof(), offsetof(AxisFilter, IsCountAxis), 0,
        ::g::Uno::Bool_typeof(), offsetof(AxisFilter, _ExcludeExtend), 0,
        ::g::Uno::Int_typeof(), offsetof(AxisFilter, _Group), 0,
        ::g::Uno::Int2_typeof(), offsetof(AxisFilter, _SkipEnds), 0);
}

uType* AxisFilter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(AxisFilter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Charting.AxisFilter", options);
    type->fp_build_ = AxisFilter_build;
    type->fp_ctor_ = (void*)AxisFilter__New1_fn;
    return type;
}

// public AxisFilter()
void AxisFilter__ctor__fn(AxisFilter* __this)
{
    __this->ctor_();
}

// private bool Accept(int dataIndex, int axisIndex, int axisCount, int& windowIndex)
void AxisFilter__Accept_fn(AxisFilter* __this, int32_t* dataIndex, int32_t* axisIndex, int32_t* axisCount, int32_t* windowIndex, bool* __retval)
{
    *__retval = __this->Accept(*dataIndex, *axisIndex, *axisCount, windowIndex);
}

// public bool Accept(object axisEntryObject, int axisIndex, int axisCount)
void AxisFilter__Accept1_fn(AxisFilter* __this, uObject* axisEntryObject, int32_t* axisIndex, int32_t* axisCount, bool* __retval)
{
    *__retval = __this->Accept1(axisEntryObject, *axisIndex, *axisCount);
}

// public bool Accept(object axisEntryObject, int axisIndex, int axisCount, int& windowIndex)
void AxisFilter__Accept2_fn(AxisFilter* __this, uObject* axisEntryObject, int32_t* axisIndex, int32_t* axisCount, int32_t* windowIndex, bool* __retval)
{
    *__retval = __this->Accept2(axisEntryObject, *axisIndex, *axisCount, windowIndex);
}

// public generated bool get_ExcludeExtend()
void AxisFilter__get_ExcludeExtend_fn(AxisFilter* __this, bool* __retval)
{
    *__retval = __this->ExcludeExtend();
}

// private generated void set_ExcludeExtend(bool value)
void AxisFilter__set_ExcludeExtend_fn(AxisFilter* __this, bool* value)
{
    __this->ExcludeExtend(*value);
}

// public int GetWindowIndex(int axisIndex)
void AxisFilter__GetWindowIndex_fn(AxisFilter* __this, int32_t* axisIndex, int32_t* __retval)
{
    *__retval = __this->GetWindowIndex(*axisIndex);
}

// public generated int get_Group()
void AxisFilter__get_Group_fn(AxisFilter* __this, int32_t* __retval)
{
    *__retval = __this->Group();
}

// private generated void set_Group(int value)
void AxisFilter__set_Group_fn(AxisFilter* __this, int32_t* value)
{
    __this->Group(*value);
}

// public AxisFilter New()
void AxisFilter__New1_fn(AxisFilter** __retval)
{
    *__retval = AxisFilter::New1();
}

// public bool get_RequireFilter()
void AxisFilter__get_RequireFilter_fn(AxisFilter* __this, bool* __retval)
{
    *__retval = __this->RequireFilter();
}

// public bool SetExcludeExtend(bool value)
void AxisFilter__SetExcludeExtend_fn(AxisFilter* __this, bool* value, bool* __retval)
{
    *__retval = __this->SetExcludeExtend(*value);
}

// public bool SetGroup(int value)
void AxisFilter__SetGroup_fn(AxisFilter* __this, int32_t* value, bool* __retval)
{
    *__retval = __this->SetGroup(*value);
}

// public bool SetSkipEnds(int2 value)
void AxisFilter__SetSkipEnds_fn(AxisFilter* __this, ::g::Uno::Int2* value, bool* __retval)
{
    *__retval = __this->SetSkipEnds(*value);
}

// public generated int2 get_SkipEnds()
void AxisFilter__get_SkipEnds_fn(AxisFilter* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->SkipEnds();
}

// private generated void set_SkipEnds(int2 value)
void AxisFilter__set_SkipEnds_fn(AxisFilter* __this, ::g::Uno::Int2* value)
{
    __this->SkipEnds(*value);
}

// public AxisFilter() [instance]
void AxisFilter::ctor_()
{
    SkipEnds(::g::Uno::Int2__New1(0));
    Group(1);
    ExcludeExtend(true);
}

// private bool Accept(int dataIndex, int axisIndex, int axisCount, int& windowIndex) [instance]
bool AxisFilter::Accept(int32_t dataIndex, int32_t axisIndex, int32_t axisCount, int32_t* windowIndex)
{
    uStackFrame __("Fuse.Charting.AxisFilter", "Accept(int,int,int,int&)");

    if (Plot == NULL)
    {
        *windowIndex = 0;
        return false;
    }

    *windowIndex = GetWindowIndex(dataIndex);

    if ((dataIndex % Group()) != 0)
        return false;

    if (((axisIndex + Group()) - 1) >= axisCount)
        return false;

    ::g::Uno::Int2 skip = SkipEnds();

    if (ExcludeExtend() && IsCountAxis)
        skip = ::g::Uno::Int2__op_Addition1(skip, uPtr(uPtr(Plot)->PlotStats())->RangeExtended());

    if ((axisIndex < skip.Item(0)) || (axisIndex >= (axisCount - skip.Item(1))))
        return false;

    return true;
}

// public bool Accept(object axisEntryObject, int axisIndex, int axisCount) [instance]
bool AxisFilter::Accept1(uObject* axisEntryObject, int32_t axisIndex, int32_t axisCount)
{
    uStackFrame __("Fuse.Charting.AxisFilter", "Accept(object,int,int)");
    int32_t w;
    return Accept2(axisEntryObject, axisIndex, axisCount, &w);
}

// public bool Accept(object axisEntryObject, int axisIndex, int axisCount, int& windowIndex) [instance]
bool AxisFilter::Accept2(uObject* axisEntryObject, int32_t axisIndex, int32_t axisCount, int32_t* windowIndex)
{
    uStackFrame __("Fuse.Charting.AxisFilter", "Accept(object,int,int,int&)");
    ::g::Fuse::Charting::AxisEntry* axisEntry = uAs< ::g::Fuse::Charting::AxisEntry*>(axisEntryObject, ::TYPES[2/*Fuse.Charting.AxisEntry*/]);

    if (axisEntry != NULL)
        return Accept(uPtr(axisEntry)->Index(), axisIndex, axisCount, windowIndex);

    ::g::Fuse::Charting::PlotDataPoint* plotData = uAs< ::g::Fuse::Charting::PlotDataPoint*>(axisEntryObject, ::TYPES[3/*Fuse.Charting.PlotDataPoint*/]);

    if (plotData != NULL)
        return Accept(uPtr(plotData)->Index, axisIndex, axisCount, windowIndex);

    *windowIndex = 0;
    return false;
}

// public generated bool get_ExcludeExtend() [instance]
bool AxisFilter::ExcludeExtend()
{
    return _ExcludeExtend;
}

// private generated void set_ExcludeExtend(bool value) [instance]
void AxisFilter::ExcludeExtend(bool value)
{
    _ExcludeExtend = value;
}

// public int GetWindowIndex(int axisIndex) [instance]
int32_t AxisFilter::GetWindowIndex(int32_t axisIndex)
{
    uStackFrame __("Fuse.Charting.AxisFilter", "GetWindowIndex(int)");

    if (IsCountAxis)
        return axisIndex - uPtr(uPtr(Plot)->PlotStats())->Offset;

    return axisIndex;
}

// public generated int get_Group() [instance]
int32_t AxisFilter::Group()
{
    return _Group;
}

// private generated void set_Group(int value) [instance]
void AxisFilter::Group(int32_t value)
{
    _Group = value;
}

// public bool get_RequireFilter() [instance]
bool AxisFilter::RequireFilter()
{
    return (::g::Uno::Int2__op_Inequality(SkipEnds(), ::g::Uno::Int2__New1(0)) || (Group() != 1)) || ExcludeExtend();
}

// public bool SetExcludeExtend(bool value) [instance]
bool AxisFilter::SetExcludeExtend(bool value)
{
    if (ExcludeExtend() == value)
        return false;

    ExcludeExtend(value);
    return true;
}

// public bool SetGroup(int value) [instance]
bool AxisFilter::SetGroup(int32_t value)
{
    value = ::g::Uno::Math::Max8(1, value);

    if (Group() == value)
        return false;

    Group(value);
    return true;
}

// public bool SetSkipEnds(int2 value) [instance]
bool AxisFilter::SetSkipEnds(::g::Uno::Int2 value)
{
    if (::g::Uno::Int2__op_Equality(value, SkipEnds()))
        return false;

    SkipEnds(value);
    return true;
}

// public generated int2 get_SkipEnds() [instance]
::g::Uno::Int2 AxisFilter::SkipEnds()
{
    return _SkipEnds;
}

// private generated void set_SkipEnds(int2 value) [instance]
void AxisFilter::SkipEnds(::g::Uno::Int2 value)
{
    _SkipEnds = value;
}

// public AxisFilter New() [static]
AxisFilter* AxisFilter::New1()
{
    AxisFilter* obj1 = (AxisFilter*)uNew(AxisFilter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotAxisLayout.uno
// ---------------------------------------------------------------------

// private struct PlotAxisLayout.CellSizing
// {
static void PlotAxisLayout__CellSizing_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::LayoutParams_typeof(), offsetof(PlotAxisLayout__CellSizing, LP), 0,
        ::g::Uno::Float2_typeof(), offsetof(PlotAxisLayout__CellSizing, Step), 0,
        ::g::Uno::Float2_typeof(), offsetof(PlotAxisLayout__CellSizing, Origin), 0,
        ::g::Uno::Bool_typeof(), offsetof(PlotAxisLayout__CellSizing, IsVert), 0);
}

uStructType* PlotAxisLayout__CellSizing_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 4;
    options.Alignment = alignof(PlotAxisLayout__CellSizing);
    options.ValueSize = sizeof(PlotAxisLayout__CellSizing);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Charting.PlotAxisLayout.CellSizing", options);
    type->fp_build_ = PlotAxisLayout__CellSizing_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotDataItem.uno
// -------------------------------------------------------------------

// public delegate void IPlotDataItem.ChangedHandler()
uDelegateType* IPlotDataItem__ChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Charting.IPlotDataItem.ChangedHandler", 0, 0);
    type->SetSignature(uVoid_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/Data.uno
// -----------------------------------------------------------

// internal sealed class Data
// {
static void Data_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), offsetof(Data, _sourceValue), 0,
        ::g::Fuse::IObject_typeof(), offsetof(Data, _sourceObject), 0,
        ::g::Uno::String_typeof(), offsetof(Data, _label), 0,
        ::g::Uno::Float4_typeof(), offsetof(Data, _color), 0,
        ::g::Uno::Float4_typeof(), offsetof(Data, Value), 0,
        ::g::Uno::Float4_typeof(), offsetof(Data, CumulativeValue), 0,
        ::g::Fuse::Charting::PlotBehavior_typeof(), offsetof(Data, Behavior), 0);
}

uType* Data_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Data);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Charting.Data", options);
    type->fp_build_ = Data_build;
    type->fp_ctor_ = (void*)Data__New1_fn;
    return type;
}

// public generated Data()
void Data__ctor__fn(Data* __this)
{
    __this->ctor_();
}

// public float4 get_Color()
void Data__get_Color_fn(Data* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value)
void Data__set_Color_fn(Data* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public static float4 get_DefaultValue()
void Data__get_DefaultValue_fn(::g::Uno::Float4* __retval)
{
    *__retval = Data::DefaultValue();
}

// private void Invalidate()
void Data__Invalidate_fn(Data* __this)
{
    __this->Invalidate();
}

// public string get_Label()
void Data__get_Label_fn(Data* __this, uString** __retval)
{
    *__retval = __this->Label();
}

// public void set_Label(string value)
void Data__set_Label_fn(Data* __this, uString* value)
{
    __this->Label(value);
}

// public generated Data New()
void Data__New1_fn(Data** __retval)
{
    *__retval = Data::New1();
}

// public Fuse.IObject get_SourceObject()
void Data__get_SourceObject_fn(Data* __this, uObject** __retval)
{
    *__retval = __this->SourceObject();
}

// public void set_SourceObject(Fuse.IObject value)
void Data__set_SourceObject_fn(Data* __this, uObject* value)
{
    __this->SourceObject(value);
}

// public float4 get_SourceValue()
void Data__get_SourceValue_fn(Data* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->SourceValue();
}

// public void set_SourceValue(float4 value)
void Data__set_SourceValue_fn(Data* __this, ::g::Uno::Float4* value)
{
    __this->SourceValue(*value);
}

// public generated Data() [instance]
void Data::ctor_()
{
}

// public float4 get_Color() [instance]
::g::Uno::Float4 Data::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance]
void Data::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Charting.Data", "set_Color(float4)");

    if (::g::Uno::Float4__op_Equality(_color, value))
        return;

    _color = value;
    Invalidate();
}

// private void Invalidate() [instance]
void Data::Invalidate()
{
    uStackFrame __("Fuse.Charting.Data", "Invalidate()");

    if (Behavior != NULL)
        uPtr(Behavior)->InvalidateData();
}

// public string get_Label() [instance]
uString* Data::Label()
{
    return _label;
}

// public void set_Label(string value) [instance]
void Data::Label(uString* value)
{
    uStackFrame __("Fuse.Charting.Data", "set_Label(string)");

    if (::g::Uno::String::op_Equality(_label, value))
        return;

    _label = value;
    Invalidate();
}

// public Fuse.IObject get_SourceObject() [instance]
uObject* Data::SourceObject()
{
    return _sourceObject;
}

// public void set_SourceObject(Fuse.IObject value) [instance]
void Data::SourceObject(uObject* value)
{
    uStackFrame __("Fuse.Charting.Data", "set_SourceObject(Fuse.IObject)");

    if (_sourceObject == value)
        return;

    _sourceObject = value;
    Invalidate();
}

// public float4 get_SourceValue() [instance]
::g::Uno::Float4 Data::SourceValue()
{
    return _sourceValue;
}

// public void set_SourceValue(float4 value) [instance]
void Data::SourceValue(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Charting.Data", "set_SourceValue(float4)");

    if (::g::Uno::Float4__op_Equality(_sourceValue, value))
        return;

    _sourceValue = value;
    Invalidate();
}

// public generated Data New() [static]
Data* Data::New1()
{
    Data* obj1 = (Data*)uNew(Data_typeof());
    obj1->ctor_();
    return obj1;
}

// public static float4 get_DefaultValue() [static]
::g::Uno::Float4 Data::DefaultValue()
{
    return ::g::Uno::Float4__New1(0.0f);
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBehavior.uno
// -------------------------------------------------------------------

// internal sealed class DataChangedArgs
// {
static void DataChangedArgs_build(uType* type)
{
}

uType* DataChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.ObjectSize = sizeof(DataChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Charting.DataChangedArgs", options);
    type->fp_build_ = DataChangedArgs_build;
    type->fp_ctor_ = (void*)DataChangedArgs__New2_fn;
    return type;
}

// public DataChangedArgs()
void DataChangedArgs__ctor_1_fn(DataChangedArgs* __this)
{
    __this->ctor_1();
}

// public DataChangedArgs New()
void DataChangedArgs__New2_fn(DataChangedArgs** __retval)
{
    *__retval = DataChangedArgs::New2();
}

// public DataChangedArgs() [instance]
void DataChangedArgs::ctor_1()
{
    ctor_();
}

// public DataChangedArgs New() [static]
DataChangedArgs* DataChangedArgs::New2()
{
    DataChangedArgs* obj1 = (DataChangedArgs*)uNew(DataChangedArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBehavior.uno
// -------------------------------------------------------------------

// internal delegate void DataChangedHandler(object sender, Fuse.Charting.DataChangedArgs args)
uDelegateType* DataChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Charting.DataChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Charting::DataChangedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/DataSeries.uno
// -----------------------------------------------------------------

// public sealed class DataSeries
// {
// static generated DataSeries()
static void DataSeries__cctor__fn(uType* __type)
{
    DataSeries::Empty_ = ::g::Fuse::Charting::DataStats::New1();
}

static void DataSeries_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Error on the SourceData");
    ::STRINGS[7] = uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/DataSeries.uno");
    ::STRINGS[8] = uString::Const("Fuse.Reactive.IObserver.OnFailed");
    ::STRINGS[9] = uString::Const("x");
    ::STRINGS[10] = uString::Const("y");
    ::STRINGS[0] = uString::Const("value");
    ::STRINGS[11] = uString::Const("z");
    ::STRINGS[12] = uString::Const("w");
    ::STRINGS[2] = uString::Const("label");
    ::STRINGS[13] = uString::Const("Invalid floating point value: ");
    ::STRINGS[14] = uString::Const("SafeMarshalFloat");
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Charting::Data_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::IArray_typeof();
    ::TYPES[6] = ::g::Fuse::Reactive::IObservableArray_typeof();
    ::TYPES[7] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[8] = ::g::Uno::IDisposable_typeof();
    ::TYPES[9] = ::g::Fuse::IObject_typeof();
    ::TYPES[10] = ::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof());
    type->SetInterfaces(
        ::TYPES[7/*Fuse.Reactive.IObserver*/], offsetof(DataSeries_type, interface0));
    type->SetFields(2,
        ::TYPES[8/*Uno.IDisposable*/], offsetof(DataSeries, _subscription), 0,
        ::TYPES[5/*Fuse.IArray*/], offsetof(DataSeries, _rawData), 0,
        ::TYPES[6/*Fuse.Reactive.IObservableArray*/], offsetof(DataSeries, _observableData), 0,
        ::TYPES[4/*Uno.Collections.List<Fuse.Charting.Data>*/], offsetof(DataSeries, _data), 0,
        ::g::Fuse::Charting::DataSeriesMetric_typeof(), offsetof(DataSeries, _metric), 0,
        ::g::Fuse::Charting::PlotBehavior_typeof(), offsetof(DataSeries, _plot), 0,
        ::g::Fuse::Charting::DataStats_typeof(), offsetof(DataSeries, Stats), 0,
        ::g::Fuse::Charting::DataStats_typeof(), (uintptr_t)&DataSeries::Empty_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Data", NULL, (void*)DataSeries__get_Data_fn, 0, false, ::TYPES[5/*Fuse.IArray*/], 0),
        new uFunction("set_Data", NULL, (void*)DataSeries__set_Data_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Fuse.IArray*/]),
        new uFunction("get_Metric", NULL, (void*)DataSeries__get_Metric_fn, 0, false, ::g::Fuse::Charting::DataSeriesMetric_typeof(), 0),
        new uFunction("set_Metric", NULL, (void*)DataSeries__set_Metric_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::DataSeriesMetric_typeof()),
        new uFunction(".ctor", NULL, (void*)DataSeries__New2_fn, 0, true, type, 0));
}

DataSeries_type* DataSeries_typeof()
{
    static uSStrong<DataSeries_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DataSeries);
    options.TypeSize = sizeof(DataSeries_type);
    type = (DataSeries_type*)uClassType::New("Fuse.Charting.DataSeries", options);
    type->fp_build_ = DataSeries_build;
    type->fp_ctor_ = (void*)DataSeries__New2_fn;
    type->fp_cctor_ = DataSeries__cctor__fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))DataSeries__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))DataSeries__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))DataSeries__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))DataSeries__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))DataSeries__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))DataSeries__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))DataSeries__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))DataSeries__FuseReactiveIObserverOnFailed_fn;
    return type;
}

// public generated DataSeries()
void DataSeries__ctor_1_fn(DataSeries* __this)
{
    __this->ctor_1();
}

// private void AddArrayData(Fuse.IArray data)
void DataSeries__AddArrayData_fn(DataSeries* __this, uObject* data)
{
    __this->AddArrayData(data);
}

// private void AddDataObject(object a)
void DataSeries__AddDataObject_fn(DataSeries* __this, uObject* a)
{
    __this->AddDataObject(a);
}

// private void AddSubscription()
void DataSeries__AddSubscription_fn(DataSeries* __this)
{
    __this->AddSubscription();
}

// private void ClearSubscription()
void DataSeries__ClearSubscription_fn(DataSeries* __this)
{
    __this->ClearSubscription();
}

// public Fuse.IArray get_Data()
void DataSeries__get_Data_fn(DataSeries* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(Fuse.IArray value)
void DataSeries__set_Data_fn(DataSeries* __this, uObject* value)
{
    __this->Data(value);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue)
void DataSeries__FuseReactiveIObserverOnAdd_fn(DataSeries* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Charting.DataSeries", "Fuse.Reactive.IObserver.OnAdd(object)");
    __this->AddDataObject(addedValue);
    __this->InvalidateData();
}

// private void Fuse.Reactive.IObserver.OnClear()
void DataSeries__FuseReactiveIObserverOnClear_fn(DataSeries* __this)
{
    uStackFrame __("Fuse.Charting.DataSeries", "Fuse.Reactive.IObserver.OnClear()");
    uPtr(__this->_data)->Clear();
    __this->InvalidateData();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message)
void DataSeries__FuseReactiveIObserverOnFailed_fn(DataSeries* __this, uString* message)
{
    uStackFrame __("Fuse.Charting.DataSeries", "Fuse.Reactive.IObserver.OnFailed(string)");
    uPtr(__this->_data)->Clear();
    ::g::Fuse::Diagnostics::InternalError(::STRINGS[6/*"Error on th...*/], __this, ::STRINGS[7/*"/usr/local/...*/], 199, ::STRINGS[8/*"Fuse.Reacti...*/]);
    __this->InvalidateData();
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value)
void DataSeries__FuseReactiveIObserverOnInsertAt_fn(DataSeries* __this, int32_t* index, uObject* value)
{
    uStackFrame __("Fuse.Charting.DataSeries", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    int32_t index_ = *index;
    __this->InsertDataObject(index_, value);
    __this->InvalidateData();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values)
void DataSeries__FuseReactiveIObserverOnNewAll_fn(DataSeries* __this, uObject* values)
{
    uStackFrame __("Fuse.Charting.DataSeries", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");
    uPtr(__this->_data)->Clear();

    for (int32_t i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[5/*Fuse.IArray*/])); ++i)
        __this->AddDataObject(::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[5/*Fuse.IArray*/]), i));

    __this->InvalidateData();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue)
void DataSeries__FuseReactiveIObserverOnNewAt_fn(DataSeries* __this, int32_t* index, uObject* newValue)
{
    uStackFrame __("Fuse.Charting.DataSeries", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    int32_t index_ = *index;
    uPtr(__this->_data)->RemoveAt(index_);
    __this->InsertDataObject(index_, newValue);
    __this->InvalidateData();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index)
void DataSeries__FuseReactiveIObserverOnRemoveAt_fn(DataSeries* __this, int32_t* index)
{
    uStackFrame __("Fuse.Charting.DataSeries", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    int32_t index_ = *index;
    uPtr(__this->_data)->RemoveAt(index_);
    __this->InvalidateData();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue)
void DataSeries__FuseReactiveIObserverOnSet_fn(DataSeries* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Charting.DataSeries", "Fuse.Reactive.IObserver.OnSet(object)");
    uPtr(__this->_data)->Clear();
    __this->AddDataObject(newValue);
    __this->InvalidateData();
}

// private void InsertDataObject(int index, object a)
void DataSeries__InsertDataObject_fn(DataSeries* __this, int32_t* index, uObject* a)
{
    __this->InsertDataObject(*index, a);
}

// private void InvalidateData()
void DataSeries__InvalidateData_fn(DataSeries* __this)
{
    __this->InvalidateData();
}

// public Fuse.Charting.DataSeriesMetric get_Metric()
void DataSeries__get_Metric_fn(DataSeries* __this, int32_t* __retval)
{
    *__retval = __this->Metric();
}

// public void set_Metric(Fuse.Charting.DataSeriesMetric value)
void DataSeries__set_Metric_fn(DataSeries* __this, int32_t* value)
{
    __this->Metric(*value);
}

// public generated DataSeries New()
void DataSeries__New2_fn(DataSeries** __retval)
{
    *__retval = DataSeries::New2();
}

// internal Uno.Collections.List<Fuse.Charting.Data> get_PlotData()
void DataSeries__get_PlotData_fn(DataSeries* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->PlotData();
}

// internal void Root(Fuse.Charting.PlotBehavior plot)
void DataSeries__Root_fn(DataSeries* __this, ::g::Fuse::Charting::PlotBehavior* plot)
{
    __this->Root(plot);
}

// private float SafeMarshalFloat(object a)
void DataSeries__SafeMarshalFloat_fn(DataSeries* __this, uObject* a, float* __retval)
{
    *__retval = __this->SafeMarshalFloat(a);
}

// internal void Unroot()
void DataSeries__Unroot_fn(DataSeries* __this)
{
    __this->Unroot();
}

uSStrong< ::g::Fuse::Charting::DataStats*> DataSeries::Empty_;

// public generated DataSeries() [instance]
void DataSeries::ctor_1()
{
    _data = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Fuse.Charting.Data>*/]));
    Stats = DataSeries::Empty_;
    ctor_();
}

// private void AddArrayData(Fuse.IArray data) [instance]
void DataSeries::AddArrayData(uObject* data)
{
    uStackFrame __("Fuse.Charting.DataSeries", "AddArrayData(Fuse.IArray)");

    for (int32_t i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(data), ::TYPES[5/*Fuse.IArray*/])); ++i)
        AddDataObject(::g::Fuse::IArray::Item(uInterface(uPtr(data), ::TYPES[5/*Fuse.IArray*/]), i));

    InvalidateData();
}

// private void AddDataObject(object a) [instance]
void DataSeries::AddDataObject(uObject* a)
{
    uStackFrame __("Fuse.Charting.DataSeries", "AddDataObject(object)");
    InsertDataObject(uPtr(_data)->Count(), a);
}

// private void AddSubscription() [instance]
void DataSeries::AddSubscription()
{
    uStackFrame __("Fuse.Charting.DataSeries", "AddSubscription()");

    if ((_plot == NULL) || (_rawData == NULL))
        return;

    if (_observableData != NULL)
    {
        _subscription = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(_observableData), ::TYPES[6/*Fuse.Reactive.IObservableArray*/]), (uObject*)this);
        ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface((uObject*)this, ::TYPES[7/*Fuse.Reactive.IObserver*/]), _observableData);
    }
    else
        AddArrayData(_rawData);
}

// private void ClearSubscription() [instance]
void DataSeries::ClearSubscription()
{
    uStackFrame __("Fuse.Charting.DataSeries", "ClearSubscription()");

    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[8/*Uno.IDisposable*/]));
        _subscription = NULL;
    }
}

// public Fuse.IArray get_Data() [instance]
uObject* DataSeries::Data()
{
    return _rawData;
}

// public void set_Data(Fuse.IArray value) [instance]
void DataSeries::Data(uObject* value)
{
    uStackFrame __("Fuse.Charting.DataSeries", "set_Data(Fuse.IArray)");
    ClearSubscription();
    _rawData = value;
    _observableData = uAs<uObject*>(value, ::TYPES[6/*Fuse.Reactive.IObservableArray*/]);
    AddSubscription();
}

// private void InsertDataObject(int index, object a) [instance]
void DataSeries::InsertDataObject(int32_t index, uObject* a)
{
    uStackFrame __("Fuse.Charting.DataSeries", "InsertDataObject(int,object)");
    uString* ret2;
    uObject* iobj = uAs<uObject*>(a, ::TYPES[9/*Fuse.IObject*/]);

    if (iobj != NULL)
    {
        ::g::Fuse::Charting::Data* d = ::g::Fuse::Charting::Data::New1();
        ::g::Uno::Float4 val = ::g::Uno::Float4__New1(0.0f);

        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(iobj), ::TYPES[9/*Fuse.IObject*/]), ::STRINGS[9/*"x"*/]))
            val.X = SafeMarshalFloat(::g::Fuse::IObject::Item(uInterface(uPtr(iobj), ::TYPES[9/*Fuse.IObject*/]), ::STRINGS[9/*"x"*/]));

        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(iobj), ::TYPES[9/*Fuse.IObject*/]), ::STRINGS[10/*"y"*/]))
            val.Y = SafeMarshalFloat(::g::Fuse::IObject::Item(uInterface(uPtr(iobj), ::TYPES[9/*Fuse.IObject*/]), ::STRINGS[10/*"y"*/]));
        else if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(iobj), ::TYPES[9/*Fuse.IObject*/]), ::STRINGS[0/*"value"*/]))
            val.Y = SafeMarshalFloat(::g::Fuse::IObject::Item(uInterface(uPtr(iobj), ::TYPES[9/*Fuse.IObject*/]), ::STRINGS[0/*"value"*/]));

        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(iobj), ::TYPES[9/*Fuse.IObject*/]), ::STRINGS[11/*"z"*/]))
            val.Z = SafeMarshalFloat(::g::Fuse::IObject::Item(uInterface(uPtr(iobj), ::TYPES[9/*Fuse.IObject*/]), ::STRINGS[11/*"z"*/]));

        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(iobj), ::TYPES[9/*Fuse.IObject*/]), ::STRINGS[12/*"w"*/]))
            val.W = SafeMarshalFloat(::g::Fuse::IObject::Item(uInterface(uPtr(iobj), ::TYPES[9/*Fuse.IObject*/]), ::STRINGS[12/*"w"*/]));

        d->SourceValue(val);

        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(iobj), ::TYPES[9/*Fuse.IObject*/]), ::STRINGS[2/*"label"*/]))
            uPtr(d)->Label((::g::Fuse::Marshal__ToType_fn(::TYPES[10/*Fuse.Marshal.ToType<string>*/], ::g::Fuse::IObject::Item(uInterface(uPtr(iobj), ::TYPES[9/*Fuse.IObject*/]), ::STRINGS[2/*"label"*/]), &ret2), ret2));

        d->SourceObject(iobj);
        d->Behavior = _plot;
        ::g::Uno::Collections::List__Insert_fn(uPtr(_data), uCRef<int32_t>(index), d);
        return;
    }

    float value = SafeMarshalFloat(a);
    ::g::Fuse::Charting::Data* vd = ::g::Fuse::Charting::Data::New1();
    vd->SourceValue(::g::Uno::Float4__New2(0.0f, value, 0.0f, 0.0f));
    vd->Behavior = _plot;
    ::g::Uno::Collections::List__Insert_fn(uPtr(_data), uCRef<int32_t>(index), vd);
}

// private void InvalidateData() [instance]
void DataSeries::InvalidateData()
{
    uStackFrame __("Fuse.Charting.DataSeries", "InvalidateData()");

    if (_plot != NULL)
        uPtr(_plot)->InvalidateData();
}

// public Fuse.Charting.DataSeriesMetric get_Metric() [instance]
int32_t DataSeries::Metric()
{
    return _metric;
}

// public void set_Metric(Fuse.Charting.DataSeriesMetric value) [instance]
void DataSeries::Metric(int32_t value)
{
    uStackFrame __("Fuse.Charting.DataSeries", "set_Metric(Fuse.Charting.DataSeriesMetric)");

    if (_metric == value)
        return;

    _metric = value;
    InvalidateData();
}

// internal Uno.Collections.List<Fuse.Charting.Data> get_PlotData() [instance]
::g::Uno::Collections::List* DataSeries::PlotData()
{
    return _data;
}

// internal void Root(Fuse.Charting.PlotBehavior plot) [instance]
void DataSeries::Root(::g::Fuse::Charting::PlotBehavior* plot)
{
    uStackFrame __("Fuse.Charting.DataSeries", "Root(Fuse.Charting.PlotBehavior)");
    _plot = plot;
    AddSubscription();
}

// private float SafeMarshalFloat(object a) [instance]
float DataSeries::SafeMarshalFloat(uObject* a)
{
    uStackFrame __("Fuse.Charting.DataSeries", "SafeMarshalFloat(object)");
    double value;

    if (::g::Fuse::Marshal::TryToDouble(a, &value))
    {
        float v = (float)value;

        if (::g::Uno::Float::IsNaN(v) || ::g::Uno::Float::IsInfinity(v))
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition1(::STRINGS[13/*"Invalid flo...*/], uBox(::g::Uno::Double_typeof(), value)), this, ::STRINGS[7/*"/usr/local/...*/], 104, ::STRINGS[14/*"SafeMarshal...*/], NULL);
            return 0.0f;
        }

        return v;
    }

    ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition1(::STRINGS[13/*"Invalid flo...*/], a), this, ::STRINGS[7/*"/usr/local/...*/], 111, ::STRINGS[14/*"SafeMarshal...*/], NULL);
    return 0.0f;
}

// internal void Unroot() [instance]
void DataSeries::Unroot()
{
    uStackFrame __("Fuse.Charting.DataSeries", "Unroot()");
    ::g::Fuse::Charting::Data* ret3;
    ClearSubscription();

    for (int32_t i = 0; i < uPtr(_data)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_data), uCRef<int32_t>(i), &ret3), ret3))->Behavior = NULL;

    uPtr(_data)->Clear();
}

// public generated DataSeries New() [static]
DataSeries* DataSeries::New2()
{
    DataSeries* obj1 = (DataSeries*)uNew(DataSeries_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/DataSeries.uno
// -----------------------------------------------------------------

// public enum DataSeriesMetric
uEnumType* DataSeriesMetric_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Charting.DataSeriesMetric", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Direct", 0LL,
        "Add", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/DataStats.uno
// ----------------------------------------------------------------

// internal sealed class DataSpec
// {
static void DataSpec_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Cannot user MergeRange on first axis");
    ::STRINGS[16] = uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/DataStats.uno");
    ::STRINGS[17] = uString::Const("SetAxisMetric");
    ::TYPES[11] = ::g::Fuse::Charting::PlotAxisMetric_typeof()->Array();
    ::TYPES[12] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[13] = ::g::Uno::Bool_typeof()->Array();
    ::TYPES[14] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[15] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::TYPES[11/*Fuse.Charting.PlotAxisMetric[]*/], offsetof(DataSpec, _axisMetric), 0,
        ::TYPES[12/*int[]*/], offsetof(DataSpec, _axisSteps), 0,
        ::g::Uno::Float_typeof(), offsetof(DataSpec, _rangePadding), 0,
        ::TYPES[13/*bool[]*/], offsetof(DataSpec, _hasRange), 0,
        ::TYPES[14/*float2[]*/], offsetof(DataSpec, _range), 0,
        ::TYPES[15/*Uno.Action*/], offsetof(DataSpec, Changed1), 0);
}

uType* DataSpec_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DataSpec);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Charting.DataSpec", options);
    type->fp_build_ = DataSpec_build;
    type->fp_ctor_ = (void*)DataSpec__New1_fn;
    return type;
}

// public DataSpec()
void DataSpec__ctor__fn(DataSpec* __this)
{
    __this->ctor_();
}

// internal generated void add_Changed(Uno.Action value)
void DataSpec__add_Changed_fn(DataSpec* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// internal generated void remove_Changed(Uno.Action value)
void DataSpec__remove_Changed_fn(DataSpec* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// public Fuse.Charting.PlotAxisMetric GetAxisMetric(int axis)
void DataSpec__GetAxisMetric_fn(DataSpec* __this, int32_t* axis, int32_t* __retval)
{
    *__retval = __this->GetAxisMetric(*axis);
}

// public int GetAxisSteps(int axis)
void DataSpec__GetAxisSteps_fn(DataSpec* __this, int32_t* axis, int32_t* __retval)
{
    *__retval = __this->GetAxisSteps(*axis);
}

// public float2 GetRange(int axis)
void DataSpec__GetRange_fn(DataSpec* __this, int32_t* axis, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetRange(*axis);
}

// public bool HasRange(int axis)
void DataSpec__HasRange_fn(DataSpec* __this, int32_t* axis, bool* __retval)
{
    *__retval = __this->HasRange(*axis);
}

// public bool IsCountAxis(int axis)
void DataSpec__IsCountAxis_fn(DataSpec* __this, int32_t* axis, bool* __retval)
{
    *__retval = __this->IsCountAxis(*axis);
}

// public DataSpec New()
void DataSpec__New1_fn(DataSpec** __retval)
{
    *__retval = DataSpec::New1();
}

// private void OnChanged()
void DataSpec__OnChanged_fn(DataSpec* __this)
{
    __this->OnChanged();
}

// public float get_RangePadding()
void DataSpec__get_RangePadding_fn(DataSpec* __this, float* __retval)
{
    *__retval = __this->RangePadding();
}

// public void set_RangePadding(float value)
void DataSpec__set_RangePadding_fn(DataSpec* __this, float* value)
{
    __this->RangePadding(*value);
}

// public void SetAxisMetric(int axis, Fuse.Charting.PlotAxisMetric value)
void DataSpec__SetAxisMetric_fn(DataSpec* __this, int32_t* axis, int32_t* value)
{
    __this->SetAxisMetric(*axis, *value);
}

// public void SetAxisSteps(int axis, int value)
void DataSpec__SetAxisSteps_fn(DataSpec* __this, int32_t* axis, int32_t* value)
{
    __this->SetAxisSteps(*axis, *value);
}

// public void SetRange(int axis, float2 value)
void DataSpec__SetRange_fn(DataSpec* __this, int32_t* axis, ::g::Uno::Float2* value)
{
    __this->SetRange(*axis, *value);
}

// public DataSpec() [instance]
void DataSpec::ctor_()
{
    uStackFrame __("Fuse.Charting.DataSpec", ".ctor()");
    _axisMetric = uArray::New(::TYPES[11/*Fuse.Charting.PlotAxisMetric[]*/], 4);
    _axisSteps = uArray::New(::TYPES[12/*int[]*/], 4);
    _rangePadding = 0.0f;
    _hasRange = uArray::New(::TYPES[13/*bool[]*/], 4);
    _range = uArray::New(::TYPES[14/*float2[]*/], 4);

    for (int32_t i = 0; i < 4; ++i)
    {
        uPtr(_axisMetric)->Item<int32_t>(i) = 2;
        uPtr(_axisSteps)->Item<int32_t>(i) = 10;
        uPtr(_hasRange)->Item<bool>(i) = false;
    }
}

// internal generated void add_Changed(Uno.Action value) [instance]
void DataSpec::add_Changed(uDelegate* value)
{
    uStackFrame __("Fuse.Charting.DataSpec", "add_Changed(Uno.Action)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[15/*Uno.Action*/]);
}

// internal generated void remove_Changed(Uno.Action value) [instance]
void DataSpec::remove_Changed(uDelegate* value)
{
    uStackFrame __("Fuse.Charting.DataSpec", "remove_Changed(Uno.Action)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[15/*Uno.Action*/]);
}

// public Fuse.Charting.PlotAxisMetric GetAxisMetric(int axis) [instance]
int32_t DataSpec::GetAxisMetric(int32_t axis)
{
    uStackFrame __("Fuse.Charting.DataSpec", "GetAxisMetric(int)");
    return uPtr(_axisMetric)->Item<int32_t>(axis);
}

// public int GetAxisSteps(int axis) [instance]
int32_t DataSpec::GetAxisSteps(int32_t axis)
{
    uStackFrame __("Fuse.Charting.DataSpec", "GetAxisSteps(int)");
    return uPtr(_axisSteps)->Item<int32_t>(axis);
}

// public float2 GetRange(int axis) [instance]
::g::Uno::Float2 DataSpec::GetRange(int32_t axis)
{
    uStackFrame __("Fuse.Charting.DataSpec", "GetRange(int)");
    return uPtr(_range)->Item< ::g::Uno::Float2>(axis);
}

// public bool HasRange(int axis) [instance]
bool DataSpec::HasRange(int32_t axis)
{
    uStackFrame __("Fuse.Charting.DataSpec", "HasRange(int)");
    return uPtr(_hasRange)->Item<bool>(axis);
}

// public bool IsCountAxis(int axis) [instance]
bool DataSpec::IsCountAxis(int32_t axis)
{
    uStackFrame __("Fuse.Charting.DataSpec", "IsCountAxis(int)");
    int32_t style = GetAxisMetric(axis);
    return (style == 0) || (style == 1);
}

// private void OnChanged() [instance]
void DataSpec::OnChanged()
{
    uStackFrame __("Fuse.Charting.DataSpec", "OnChanged()");

    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->InvokeVoid();
}

// public float get_RangePadding() [instance]
float DataSpec::RangePadding()
{
    return _rangePadding;
}

// public void set_RangePadding(float value) [instance]
void DataSpec::RangePadding(float value)
{
    uStackFrame __("Fuse.Charting.DataSpec", "set_RangePadding(float)");

    if (_rangePadding == value)
        return;

    _rangePadding = value;
    OnChanged();
}

// public void SetAxisMetric(int axis, Fuse.Charting.PlotAxisMetric value) [instance]
void DataSpec::SetAxisMetric(int32_t axis, int32_t value)
{
    uStackFrame __("Fuse.Charting.DataSpec", "SetAxisMetric(int,Fuse.Charting.PlotAxisMetric)");

    if (value == uPtr(_axisMetric)->Item<int32_t>(axis))
        return;

    if ((axis == 0) && (value == 3))
    {
        value = 2;
        ::g::Fuse::Diagnostics::UserError(::STRINGS[15/*"Cannot user...*/], this, ::STRINGS[16/*"/usr/local/...*/], 54, ::STRINGS[17/*"SetAxisMetric"*/], NULL);
    }

    uPtr(_axisMetric)->Item<int32_t>(axis) = value;
    OnChanged();
}

// public void SetAxisSteps(int axis, int value) [instance]
void DataSpec::SetAxisSteps(int32_t axis, int32_t value)
{
    uStackFrame __("Fuse.Charting.DataSpec", "SetAxisSteps(int,int)");
    value = ::g::Uno::Math::Max8(value, 1);

    if (uPtr(_axisSteps)->Item<int32_t>(axis) == value)
        return;

    uPtr(_axisSteps)->Item<int32_t>(axis) = value;
    OnChanged();
}

// public void SetRange(int axis, float2 value) [instance]
void DataSpec::SetRange(int32_t axis, ::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Charting.DataSpec", "SetRange(int,float2)");

    if (::g::Uno::Float2__op_Equality(uPtr(_range)->Item< ::g::Uno::Float2>(axis), value) && uPtr(_hasRange)->Item<bool>(axis))
        return;

    uPtr(_hasRange)->Item<bool>(axis) = true;
    uPtr(_range)->Item< ::g::Uno::Float2>(axis) = value;
    OnChanged();
}

// public DataSpec New() [static]
DataSpec* DataSpec::New1()
{
    DataSpec* obj1 = (DataSpec*)uNew(DataSpec_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/DataStats.uno
// ----------------------------------------------------------------

// internal sealed class DataStats
// {
static void DataStats_build(uType* type)
{
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Charting::Data_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Charting::Data_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Charting::DataSeries_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Charting::DataSeries_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(DataStats, FullCount), 0,
        ::g::Uno::Int_typeof(), offsetof(DataStats, Count), 0,
        ::g::Uno::Int_typeof(), offsetof(DataStats, Offset), 0,
        ::g::Uno::Int2_typeof(), offsetof(DataStats, _extend), 0,
        ::g::Uno::Float4_typeof(), offsetof(DataStats, Minimum), 0,
        ::g::Uno::Float4_typeof(), offsetof(DataStats, Maximum), 0,
        ::g::Uno::Int4_typeof(), offsetof(DataStats, Steps), 0,
        ::g::Uno::Float4_typeof(), offsetof(DataStats, Total), 0);
}

uType* DataStats_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DataStats);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Charting.DataStats", options);
    type->fp_build_ = DataStats_build;
    type->fp_ctor_ = (void*)DataStats__New1_fn;
    return type;
}

// public generated DataStats()
void DataStats__ctor__fn(DataStats* __this)
{
    __this->ctor_();
}

// private static void AddValueAssign(Uno.Collections.IList<Fuse.Charting.Data> data, Uno.Collections.IList<Fuse.Charting.Data> prev)
void DataStats__AddValueAssign_fn(uObject* data, uObject* prev)
{
    DataStats::AddValueAssign(data, prev);
}

// public void ApplyLimits(Fuse.Charting.DataSpec spec, int offset, int limit, bool hasLimit)
void DataStats__ApplyLimits_fn(DataStats* __this, ::g::Fuse::Charting::DataSpec* spec, int32_t* offset, int32_t* limit, bool* hasLimit)
{
    __this->ApplyLimits(spec, *offset, *limit, *hasLimit);
}

// public float4 get_Baseline()
void DataStats__get_Baseline_fn(DataStats* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Baseline();
}

// public static Fuse.Charting.DataStats Calculate(Uno.Collections.IList<Fuse.Charting.Data> data, Fuse.Charting.DataSpec spec)
void DataStats__Calculate_fn(uObject* data, ::g::Fuse::Charting::DataSpec* spec, DataStats** __retval)
{
    *__retval = DataStats::Calculate(data, spec);
}

// public static Fuse.Charting.DataStats CalculateAll(Uno.Collections.IList<Fuse.Charting.DataSeries> series, Fuse.Charting.DataSpec spec)
void DataStats__CalculateAll_fn(uObject* series, ::g::Fuse::Charting::DataSpec* spec, DataStats** __retval)
{
    *__retval = DataStats::CalculateAll(series, spec);
}

// public Fuse.Charting.DataStats Clone()
void DataStats__Clone_fn(DataStats* __this, DataStats** __retval)
{
    *__retval = __this->Clone();
}

// public void Combine(Fuse.Charting.DataStats ds)
void DataStats__Combine_fn(DataStats* __this, DataStats* ds)
{
    __this->Combine(ds);
}

// private static void CountValueAssign(Uno.Collections.IList<Fuse.Charting.Data> data, Fuse.Charting.DataSpec spec)
void DataStats__CountValueAssign_fn(uObject* data, ::g::Fuse::Charting::DataSpec* spec)
{
    DataStats::CountValueAssign(data, spec);
}

// public void Extend(int2 Extend)
void DataStats__Extend_fn(DataStats* __this, ::g::Uno::Int2* Extend1)
{
    __this->Extend(*Extend1);
}

// public int2 get_Extended()
void DataStats__get_Extended_fn(DataStats* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Extended();
}

// public float GetRelativeValue(float v, int axis)
void DataStats__GetRelativeValue_fn(DataStats* __this, float* v, int32_t* axis, float* __retval)
{
    *__retval = __this->GetRelativeValue(*v, *axis);
}

// public float4 GetRelativeValue(float4 v)
void DataStats__GetRelativeValue1_fn(DataStats* __this, ::g::Uno::Float4* v, ::g::Uno::Float4* __retval)
{
    *__retval = __this->GetRelativeValue1(*v);
}

// private void MergeAxis(int a, int b)
void DataStats__MergeAxis_fn(DataStats* __this, int32_t* a, int32_t* b)
{
    __this->MergeAxis(*a, *b);
}

// public generated DataStats New()
void DataStats__New1_fn(DataStats** __retval)
{
    *__retval = DataStats::New1();
}

// public int2 get_Range()
void DataStats__get_Range_fn(DataStats* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Range();
}

// public int2 get_RangeExtended()
void DataStats__get_RangeExtended_fn(DataStats* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->RangeExtended();
}

// public int2 get_WindowRange()
void DataStats__get_WindowRange_fn(DataStats* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->WindowRange();
}

// public generated DataStats() [instance]
void DataStats::ctor_()
{
    Steps = ::g::Uno::Int4__New1(1);
}

// public void ApplyLimits(Fuse.Charting.DataSpec spec, int offset, int limit, bool hasLimit) [instance]
void DataStats::ApplyLimits(::g::Fuse::Charting::DataSpec* spec, int32_t offset, int32_t limit, bool hasLimit)
{
    uStackFrame __("Fuse.Charting.DataStats", "ApplyLimits(Fuse.Charting.DataSpec,int,int,bool)");
    Offset = ::g::Uno::Math::Min8(offset, FullCount);
    Count = (hasLimit ? ::g::Uno::Math::Clamp8(limit, 0, FullCount - Offset) : FullCount - Offset);
    Minimum = ::g::Uno::Float4__op_Multiply1(::g::Uno::Math::Min7(Minimum, ::g::Uno::Float4__New1(0.0f)), 1.0f + uPtr(spec)->RangePadding());
    Maximum = ::g::Uno::Float4__op_Multiply1(::g::Uno::Math::Max7(Maximum, ::g::Uno::Float4__New1(0.0f)), 1.0f + spec->RangePadding());

    for (int32_t i = 0; i < 4; ++i)
    {
        if (uPtr(spec)->HasRange(i))
        {
            Steps.Item(i, uPtr(spec)->GetAxisSteps(i));
            ::g::Uno::Float2 r = spec->GetRange(i);
            Minimum.Item(i, r.Item(0));
            Maximum.Item(i, r.Item(1));
            continue;
        }

        switch (uPtr(spec)->GetAxisMetric(i))
        {
            case 0:
            {
                Steps.Item(i, Count - 1);
                Minimum.Item(i, (float)Offset);
                Maximum.Item(i, (float)((Offset + Count) - 1));
                break;
            }
            case 1:
            {
                Steps.Item(i, Count);
                Minimum.Item(i, (float)Offset);
                Maximum.Item(i, (float)(Offset + Count));
                break;
            }
            case 3:
            {
                Minimum.Item(i, Minimum.Item(i - 1));
                Maximum.Item(i, Maximum.Item(i - 1));
                Steps.Item(i, Steps.Item(i - 1));
                break;
            }
            case 2:
            {
                float mn = Minimum.Item(i);
                float mx = Maximum.Item(i);
                int32_t s = uPtr(spec)->GetAxisSteps(i);
                ::g::Fuse::Charting::DataUtils::GetStepping(&s, &mn, &mx);
                Minimum.Item(i, mn);
                Maximum.Item(i, mx);
                Steps.Item(i, s);
                break;
            }
        }

        Steps.Item(i, ::g::Uno::Math::Max8(Steps.Item(i), 1));
    }
}

// public float4 get_Baseline() [instance]
::g::Uno::Float4 DataStats::Baseline()
{
    return ::g::Uno::Math::Abs4(::g::Fuse::Charting::DataUtils::RelDiv1(Minimum, ::g::Uno::Float4__op_Subtraction2(Maximum, Minimum)));
}

// public Fuse.Charting.DataStats Clone() [instance]
DataStats* DataStats::Clone()
{
    uStackFrame __("Fuse.Charting.DataStats", "Clone()");
    DataStats* collection1;
    collection1 = DataStats::New1();
    uPtr(collection1)->FullCount = FullCount;
    uPtr(collection1)->Count = Count;
    uPtr(collection1)->_extend = _extend;
    uPtr(collection1)->Offset = Offset;
    uPtr(collection1)->Minimum = Minimum;
    uPtr(collection1)->Maximum = Maximum;
    uPtr(collection1)->Steps = Steps;
    uPtr(collection1)->Total = Total;
    return collection1;
}

// public void Combine(Fuse.Charting.DataStats ds) [instance]
void DataStats::Combine(DataStats* ds)
{
    uStackFrame __("Fuse.Charting.DataStats", "Combine(Fuse.Charting.DataStats)");
    FullCount = ::g::Uno::Math::Max8(FullCount, uPtr(ds)->FullCount);
    Count = ::g::Uno::Math::Max8(Count, ds->Count);
    _extend = ::g::Uno::Math::Max10(_extend, ds->_extend);
    Minimum = ::g::Uno::Math::Min7(Minimum, ds->Minimum);
    Maximum = ::g::Uno::Math::Max7(Maximum, ds->Maximum);
}

// public void Extend(int2 Extend) [instance]
void DataStats::Extend(::g::Uno::Int2 Extend1)
{
    _extend = Extend1;
}

// public int2 get_Extended() [instance]
::g::Uno::Int2 DataStats::Extended()
{
    return ::g::Uno::Int2__op_Subtraction(Range(), Offset);
}

// public float GetRelativeValue(float v, int axis) [instance]
float DataStats::GetRelativeValue(float v, int32_t axis)
{
    uStackFrame __("Fuse.Charting.DataStats", "GetRelativeValue(float,int)");
    return ::g::Fuse::Charting::DataUtils::RelDiv(v - Minimum.Item(axis), Maximum.Item(axis) - Minimum.Item(axis));
}

// public float4 GetRelativeValue(float4 v) [instance]
::g::Uno::Float4 DataStats::GetRelativeValue1(::g::Uno::Float4 v)
{
    uStackFrame __("Fuse.Charting.DataStats", "GetRelativeValue(float4)");
    return ::g::Uno::Float4__New2(GetRelativeValue(v.Item(0), 0), GetRelativeValue(v.Item(1), 1), GetRelativeValue(v.Item(2), 2), GetRelativeValue(v.Item(3), 3));
}

// private void MergeAxis(int a, int b) [instance]
void DataStats::MergeAxis(int32_t a, int32_t b)
{
    uStackFrame __("Fuse.Charting.DataStats", "MergeAxis(int,int)");
    float mn = ::g::Uno::Math::Min1(Minimum.Item(a), Minimum.Item(b));
    float mx = ::g::Uno::Math::Max1(Maximum.Item(a), Maximum.Item(b));
    Minimum.Item(a, (Minimum.Item(b, mn), mn));
    Maximum.Item(a, (Maximum.Item(b, mx), mx));
}

// public int2 get_Range() [instance]
::g::Uno::Int2 DataStats::Range()
{
    uStackFrame __("Fuse.Charting.DataStats", "get_Range()");
    return ::g::Uno::Int2__New2(::g::Uno::Math::Max8(0, Offset - _extend.Item(0)), ::g::Uno::Math::Min8(FullCount, (Offset + Count) + _extend.Item(1)));
}

// public int2 get_RangeExtended() [instance]
::g::Uno::Int2 DataStats::RangeExtended()
{
    uStackFrame __("Fuse.Charting.DataStats", "get_RangeExtended()");
    ::g::Uno::Int2 range = Range();
    ::g::Uno::Int2 window = WindowRange();
    return ::g::Uno::Int2__New2(window.Item(0) - range.Item(0), range.Item(1) - window.Item(1));
}

// public int2 get_WindowRange() [instance]
::g::Uno::Int2 DataStats::WindowRange()
{
    return ::g::Uno::Int2__New2(::g::Uno::Math::Max8(0, Offset), ::g::Uno::Math::Min8(FullCount, Offset + Count));
}

// private static void AddValueAssign(Uno.Collections.IList<Fuse.Charting.Data> data, Uno.Collections.IList<Fuse.Charting.Data> prev) [static]
void DataStats::AddValueAssign(uObject* data, uObject* prev)
{
    uStackFrame __("Fuse.Charting.DataStats", "AddValueAssign(Uno.Collections.IList<Fuse.Charting.Data>,Uno.Collections.IList<Fuse.Charting.Data>)");
    ::g::Fuse::Charting::Data* ret3;
    ::g::Fuse::Charting::Data* ret4;
    ::g::Fuse::Charting::Data* ret5;
    ::g::Fuse::Charting::Data* ret6;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(data), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Charting.Data>*/])); ++i)
    {
        float p = (i >= ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(prev), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Charting.Data>*/]))) ? 0.0f : uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(prev), ::TYPES[17/*Uno.Collections.IList<Fuse.Charting.Data>*/]), uCRef<int32_t>(i), &ret3), ret3))->Value.Y;
        float c = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(data), ::TYPES[17/*Uno.Collections.IList<Fuse.Charting.Data>*/]), uCRef<int32_t>(i), &ret4), ret4))->Value.Y;
        uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(data, ::TYPES[17/*Uno.Collections.IList<Fuse.Charting.Data>*/]), uCRef<int32_t>(i), &ret5), ret5))->Value.Y = (p + c);
        uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(data, ::TYPES[17/*Uno.Collections.IList<Fuse.Charting.Data>*/]), uCRef<int32_t>(i), &ret6), ret6))->Value.Z = p;
    }
}

// public static Fuse.Charting.DataStats Calculate(Uno.Collections.IList<Fuse.Charting.Data> data, Fuse.Charting.DataSpec spec) [static]
DataStats* DataStats::Calculate(uObject* data, ::g::Fuse::Charting::DataSpec* spec)
{
    uStackFrame __("Fuse.Charting.DataStats", "Calculate(Uno.Collections.IList<Fuse.Charting.Data>,Fuse.Charting.DataSpec)");
    ::g::Fuse::Charting::Data* ret7;
    ::g::Fuse::Charting::Data* ret8;
    ::g::Fuse::Charting::Data* ret9;
    ::g::Fuse::Charting::Data* ret10;
    ::g::Fuse::Charting::Data* ret11;
    ::g::Fuse::Charting::Data* ret12;
    ::g::Fuse::Charting::Data* ret13;
    DataStats* ds = DataStats::New1();
    ds->Count = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(data), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Charting.Data>*/]));
    ds->FullCount = ::g::Uno::Collections::ICollection::Count(uInterface(data, ::TYPES[16/*Uno.Collections.ICollection<Fuse.Charting.Data>*/]));
    ds->Offset = 0;
    ds->Total = ::g::Fuse::Charting::Data::DefaultValue();

    if (::g::Uno::Collections::ICollection::Count(uInterface(data, ::TYPES[16/*Uno.Collections.ICollection<Fuse.Charting.Data>*/])) != 0)
    {
        uPtr(ds)->Minimum = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(data), ::TYPES[17/*Uno.Collections.IList<Fuse.Charting.Data>*/]), uCRef<int32_t>(0), &ret7), ret7))->Value;
        ds->Total = ::g::Uno::Float4__op_Addition2(ds->Total, uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(data, ::TYPES[17/*Uno.Collections.IList<Fuse.Charting.Data>*/]), uCRef<int32_t>(0), &ret8), ret8))->Value);
        uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(data, ::TYPES[17/*Uno.Collections.IList<Fuse.Charting.Data>*/]), uCRef<int32_t>(0), &ret9), ret9))->CumulativeValue = ds->Total;
        ds->Maximum = ds->Minimum;

        for (int32_t i = 1; i < ::g::Uno::Collections::ICollection::Count(uInterface(data, ::TYPES[16/*Uno.Collections.ICollection<Fuse.Charting.Data>*/])); ++i)
        {
            uPtr(ds)->Total = ::g::Uno::Float4__op_Addition2(uPtr(ds)->Total, uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(data), ::TYPES[17/*Uno.Collections.IList<Fuse.Charting.Data>*/]), uCRef<int32_t>(i), &ret10), ret10))->Value);
            uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(data, ::TYPES[17/*Uno.Collections.IList<Fuse.Charting.Data>*/]), uCRef<int32_t>(i), &ret11), ret11))->CumulativeValue = ds->Total;
            ds->Minimum = ::g::Uno::Math::Min7(ds->Minimum, uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(data, ::TYPES[17/*Uno.Collections.IList<Fuse.Charting.Data>*/]), uCRef<int32_t>(i), &ret12), ret12))->Value);
            ds->Maximum = ::g::Uno::Math::Max7(ds->Maximum, uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(data, ::TYPES[17/*Uno.Collections.IList<Fuse.Charting.Data>*/]), uCRef<int32_t>(i), &ret13), ret13))->Value);
        }
    }

    ds->Steps = ::g::Uno::Int4__New1(1);

    for (int32_t i1 = 1; i1 < 4; ++i1)
        if (uPtr(spec)->GetAxisMetric(i1) == 3)
            uPtr(ds)->MergeAxis(i1 - 1, i1);

    return ds;
}

// public static Fuse.Charting.DataStats CalculateAll(Uno.Collections.IList<Fuse.Charting.DataSeries> series, Fuse.Charting.DataSpec spec) [static]
DataStats* DataStats::CalculateAll(uObject* series, ::g::Fuse::Charting::DataSpec* spec)
{
    uStackFrame __("Fuse.Charting.DataStats", "CalculateAll(Uno.Collections.IList<Fuse.Charting.DataSeries>,Fuse.Charting.DataSpec)");
    ::g::Fuse::Charting::DataSeries* ret14;
    ::g::Fuse::Charting::DataSeries* ret15;
    ::g::Fuse::Charting::DataSeries* ret16;
    ::g::Fuse::Charting::DataSeries* ret17;
    ::g::Fuse::Charting::DataSeries* ret18;
    ::g::Fuse::Charting::DataSeries* ret19;
    ::g::Fuse::Charting::DataSeries* ret20;
    ::g::Fuse::Charting::DataSeries* ret21;
    DataStats* dataStats = NULL;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(series), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Charting.DataSeries>*/])); ++i)
    {
        DataStats::CountValueAssign((uObject*)uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(series), ::TYPES[19/*Uno.Collections.IList<Fuse.Charting.DataSeries>*/]), uCRef<int32_t>(i), &ret14), ret14))->PlotData(), spec);

        if ((uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(series, ::TYPES[19/*Uno.Collections.IList<Fuse.Charting.DataSeries>*/]), uCRef<int32_t>(i), &ret15), ret15))->Metric() == 1) && (i > 0))
            DataStats::AddValueAssign((uObject*)uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(series), ::TYPES[19/*Uno.Collections.IList<Fuse.Charting.DataSeries>*/]), uCRef<int32_t>(i), &ret16), ret16))->PlotData(), (uObject*)uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(series), ::TYPES[19/*Uno.Collections.IList<Fuse.Charting.DataSeries>*/]), uCRef<int32_t>(i - 1), &ret17), ret17))->PlotData());

        uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(series, ::TYPES[19/*Uno.Collections.IList<Fuse.Charting.DataSeries>*/]), uCRef<int32_t>(i), &ret18), ret18))->Stats = DataStats::Calculate((uObject*)uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(series, ::TYPES[19/*Uno.Collections.IList<Fuse.Charting.DataSeries>*/]), uCRef<int32_t>(i), &ret19), ret19))->PlotData(), spec);

        if (i == 0)
            dataStats = uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(series), ::TYPES[19/*Uno.Collections.IList<Fuse.Charting.DataSeries>*/]), uCRef<int32_t>(i), &ret20), ret20))->Stats)->Clone();
        else
            uPtr(dataStats)->Combine(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(series), ::TYPES[19/*Uno.Collections.IList<Fuse.Charting.DataSeries>*/]), uCRef<int32_t>(i), &ret21), ret21))->Stats);
    }

    return dataStats;
}

// private static void CountValueAssign(Uno.Collections.IList<Fuse.Charting.Data> data, Fuse.Charting.DataSpec spec) [static]
void DataStats::CountValueAssign(uObject* data, ::g::Fuse::Charting::DataSpec* spec)
{
    uStackFrame __("Fuse.Charting.DataStats", "CountValueAssign(Uno.Collections.IList<Fuse.Charting.Data>,Fuse.Charting.DataSpec)");
    ::g::Fuse::Charting::Data* ret22;
    ::g::Fuse::Charting::Data* ret23;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(data), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Charting.Data>*/])); ++i)
    {
        ::g::Uno::Float4 v = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(data), ::TYPES[17/*Uno.Collections.IList<Fuse.Charting.Data>*/]), uCRef<int32_t>(i), &ret22), ret22))->SourceValue();

        for (int32_t j = 0; j < 4; j++)
        {
            int32_t r = uPtr(spec)->GetAxisMetric(j);

            if (r == 0)
                v.Item(j, (float)i);
            else if (r == 1)
                v.Item(j, (float)i + 0.5f);
        }

        uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(data, ::TYPES[17/*Uno.Collections.IList<Fuse.Charting.Data>*/]), uCRef<int32_t>(i), &ret23), ret23))->Value = v;
    }
}

// public generated DataStats New() [static]
DataStats* DataStats::New1()
{
    DataStats* obj2 = (DataStats*)uNew(DataStats_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/DataUtils.uno
// ----------------------------------------------------------------

// internal static class DataUtils
// {
static void DataUtils_build(uType* type)
{
    ::TYPES[12] = ::g::Uno::Int_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
}

uClassType* DataUtils_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Charting.DataUtils", options);
    type->fp_build_ = DataUtils_build;
    return type;
}

// public static void GetStepping(int& steps, float& min, float& max)
void DataUtils__GetStepping_fn(int32_t* steps, float* min, float* max)
{
    DataUtils::GetStepping(steps, min, max);
}

// public static float RelDiv(float num, float den)
void DataUtils__RelDiv_fn(float* num, float* den, float* __retval)
{
    *__retval = DataUtils::RelDiv(*num, *den);
}

// public static float4 RelDiv(float4 num, float4 den)
void DataUtils__RelDiv1_fn(::g::Uno::Float4* num, ::g::Uno::Float4* den, ::g::Uno::Float4* __retval)
{
    *__retval = DataUtils::RelDiv1(*num, *den);
}

// public static void GetStepping(int& steps, float& min, float& max) [static]
void DataUtils::GetStepping(int32_t* steps, float* min, float* max)
{
    uStackFrame __("Fuse.Charting.DataUtils", "GetStepping(int&,float&,float&)");
    float oMin = *min;
    float oMax = *max;
    int32_t desiredSteps = *steps;
    float range = *max - *min;
    float step = range / (float)*steps;
    float mag10 = ::g::Uno::Math::Ceil1(::g::Uno::Math::Log1(step) / ::g::Uno::Math::Log1(10.0f));
    float baseStepSize = ::g::Uno::Math::Pow1(10.0f, mag10);
    uArray* trySteps = uArray::Init<int32_t>(::TYPES[12/*int[]*/], 4, 5, 4, 2, 1);

    for (int32_t i = 0; i < trySteps->Length(); ++i)
    {
        float stepSize = baseStepSize / (float)uPtr(trySteps)->Item<int32_t>(i);
        float ns = ::g::Uno::Math::Floor1((range / stepSize) + 0.5f);

        if ((::g::Uno::Float::IsNaN(baseStepSize) || ::g::Uno::Float::IsNaN(ns)) || (ns < 1.0f))
            return;

        *min = ::g::Uno::Math::Floor1(oMin / stepSize) * stepSize;
        *max = ::g::Uno::Math::Ceil1(oMax / stepSize) * stepSize;
        *steps = (int32_t)::g::Uno::Math::Floor1(((*max - *min) / stepSize) + 0.5f);

        if (*steps <= desiredSteps)
            break;
    }
}

// public static float RelDiv(float num, float den) [static]
float DataUtils::RelDiv(float num, float den)
{
    float expNum = ::g::Uno::Math::Log22(::g::Uno::Math::Abs1(num));
    float expDen = ::g::Uno::Math::Log22(::g::Uno::Math::Abs1(den));

    if ((expNum - expDen) > 20.0f)
        return 0.0f;

    return num / den;
}

// public static float4 RelDiv(float4 num, float4 den) [static]
::g::Uno::Float4 DataUtils::RelDiv1(::g::Uno::Float4 num, ::g::Uno::Float4 den)
{
    uStackFrame __("Fuse.Charting.DataUtils", "RelDiv(float4,float4)");
    return ::g::Uno::Float4__New2(DataUtils::RelDiv(num.Item(0), den.Item(0)), DataUtils::RelDiv(num.Item(1), den.Item(1)), DataUtils::RelDiv(num.Item(2), den.Item(2)), DataUtils::RelDiv(num.Item(3), den.Item(3)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotExpression.uno
// ---------------------------------------------------------------------

// private enum PlotExpression.Field
uEnumType* PlotExpression__Field_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Charting.PlotExpression.Field", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "None", 0LL,
        "X", 1LL,
        "Y", 2LL,
        "Z", 3LL,
        "W", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/FilterObservable.uno
// -----------------------------------------------------------------------

// internal abstract class FilterObservable
// {
static void FilterObservable_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObservableArray_typeof(), offsetof(FilterObservable_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(FilterObservable_type, interface1),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(FilterObservable_type, interface2));
    type->SetFields(1,
        ::g::Fuse::Reactive::IObservableArray_typeof(), offsetof(FilterObservable, _source), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(FilterObservable, _subscription), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(FilterObservable__SourceItem_typeof(), NULL), offsetof(FilterObservable, _sourceItems), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(FilterObservable__SourceItem_typeof(), NULL), offsetof(FilterObservable, _outputItems), 0,
        ::g::Uno::Bool_typeof(), offsetof(FilterObservable, _syncDefer), 0);
}

FilterObservable_type* FilterObservable_typeof()
{
    static uSStrong<FilterObservable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Charting::ObservableData_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FilterObservable);
    options.TypeSize = sizeof(FilterObservable_type);
    type = (FilterObservable_type*)uClassType::New("Fuse.Charting.FilterObservable", options);
    type->fp_build_ = FilterObservable_build;
    type->fp_GetItem = (void(*)(::g::Fuse::Charting::ObservableData*, int32_t*, uObject**))FilterObservable__GetItem_fn;
    type->fp_GetLength = (void(*)(::g::Fuse::Charting::ObservableData*, int32_t*))FilterObservable__GetLength_fn;
    type->fp_OnSubscription = (void(*)(::g::Fuse::Charting::ObservableData*))FilterObservable__OnSubscription_fn;
    type->fp_OnUnsubscription = (void(*)(::g::Fuse::Charting::ObservableData*))FilterObservable__OnUnsubscription_fn;
    type->interface2.fp_OnClear = (void(*)(uObject*))FilterObservable__FuseReactiveIObserverOnClear_fn;
    type->interface2.fp_OnNewAll = (void(*)(uObject*, uObject*))FilterObservable__FuseReactiveIObserverOnNewAll_fn;
    type->interface2.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))FilterObservable__FuseReactiveIObserverOnNewAt_fn;
    type->interface2.fp_OnSet = (void(*)(uObject*, uObject*))FilterObservable__FuseReactiveIObserverOnSet_fn;
    type->interface2.fp_OnAdd = (void(*)(uObject*, uObject*))FilterObservable__FuseReactiveIObserverOnAdd_fn;
    type->interface2.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))FilterObservable__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface2.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))FilterObservable__FuseReactiveIObserverOnInsertAt_fn;
    type->interface2.fp_OnFailed = (void(*)(uObject*, uString*))FilterObservable__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::Charting::ObservableData__FuseReactiveIObservableArraySubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int32_t*))::g::Fuse::Charting::ObservableData__FuseIArrayget_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))::g::Fuse::Charting::ObservableData__FuseIArrayget_Item_fn;
    return type;
}

// protected generated FilterObservable()
void FilterObservable__ctor_1_fn(FilterObservable* __this)
{
    __this->ctor_1();
}

// private void CleanSubscription()
void FilterObservable__CleanSubscription_fn(FilterObservable* __this)
{
    __this->CleanSubscription();
}

// private void ClearSource()
void FilterObservable__ClearSource_fn(FilterObservable* __this)
{
    __this->ClearSource();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue)
void FilterObservable__FuseReactiveIObserverOnAdd_fn(FilterObservable* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Charting.FilterObservable", "Fuse.Reactive.IObserver.OnAdd(object)");
    FilterObservable__SourceItem* collection4;
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_sourceItems), (collection4 = FilterObservable__SourceItem::New1(), uPtr(collection4)->Index = uPtr(__this->_sourceItems)->Count(), uPtr(collection4)->Value = addedValue, collection4));
    __this->SyncItems();
}

// private void Fuse.Reactive.IObserver.OnClear()
void FilterObservable__FuseReactiveIObserverOnClear_fn(FilterObservable* __this)
{
    uStackFrame __("Fuse.Charting.FilterObservable", "Fuse.Reactive.IObserver.OnClear()");
    __this->ClearSource();
    __this->SyncItems();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message)
void FilterObservable__FuseReactiveIObserverOnFailed_fn(FilterObservable* __this, uString* message)
{
    uStackFrame __("Fuse.Charting.FilterObservable", "Fuse.Reactive.IObserver.OnFailed(string)");
    __this->ClearSource();
    __this->SyncItems();
    __this->TriggerFail(message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value)
void FilterObservable__FuseReactiveIObserverOnInsertAt_fn(FilterObservable* __this, int32_t* index, uObject* value)
{
    uStackFrame __("Fuse.Charting.FilterObservable", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    FilterObservable__SourceItem* collection5;
    int32_t index_ = *index;
    FilterObservable__SourceItem* ret7;

    for (int32_t i = index_; i < uPtr(__this->_sourceItems)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_sourceItems), uCRef<int32_t>(i), &ret7), ret7))->Index = (i + 1);

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_sourceItems), uCRef<int32_t>(index_), (collection5 = FilterObservable__SourceItem::New1(), uPtr(collection5)->Index = index_, uPtr(collection5)->Value = value, collection5));
    __this->SyncItems();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values)
void FilterObservable__FuseReactiveIObserverOnNewAll_fn(FilterObservable* __this, uObject* values)
{
    uStackFrame __("Fuse.Charting.FilterObservable", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");
    FilterObservable__SourceItem* collection1;
    __this->ClearSource();

    for (int32_t i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[5/*Fuse.IArray*/])); ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(__this->_sourceItems), (collection1 = FilterObservable__SourceItem::New1(), uPtr(collection1)->Index = i, uPtr(collection1)->Value = ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[5/*Fuse.IArray*/]), i), collection1));

    __this->SyncItems();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue)
void FilterObservable__FuseReactiveIObserverOnNewAt_fn(FilterObservable* __this, int32_t* index, uObject* newValue)
{
    uStackFrame __("Fuse.Charting.FilterObservable", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    FilterObservable__SourceItem* collection2;
    FilterObservable__SourceItem* ret8;
    int32_t index_ = *index;
    uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_sourceItems), uCRef<int32_t>(index_), &ret8), ret8))->Index = -1;
    uPtr(__this->_sourceItems)->RemoveAt(index_);
    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_sourceItems), uCRef<int32_t>(index_), (collection2 = FilterObservable__SourceItem::New1(), uPtr(collection2)->Index = index_, uPtr(collection2)->Value = newValue, collection2));
    __this->SyncItems();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index)
void FilterObservable__FuseReactiveIObserverOnRemoveAt_fn(FilterObservable* __this, int32_t* index)
{
    uStackFrame __("Fuse.Charting.FilterObservable", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    int32_t index_ = *index;
    FilterObservable__SourceItem* ret9;
    FilterObservable__SourceItem* ret10;

    for (int32_t i = index_ + 1; i < uPtr(__this->_sourceItems)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_sourceItems), uCRef<int32_t>(i), &ret9), ret9))->Index = (i - 1);

    uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_sourceItems), uCRef<int32_t>(index_), &ret10), ret10))->Index = -1;
    uPtr(__this->_sourceItems)->RemoveAt(index_);
    __this->SyncItems();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue)
void FilterObservable__FuseReactiveIObserverOnSet_fn(FilterObservable* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Charting.FilterObservable", "Fuse.Reactive.IObserver.OnSet(object)");
    FilterObservable__SourceItem* collection3;
    __this->ClearSource();
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_sourceItems), (collection3 = FilterObservable__SourceItem::New1(), uPtr(collection3)->Index = 0, uPtr(collection3)->Value = newValue, collection3));
    __this->SyncItems();
}

// protected override sealed object GetItem(int index)
void FilterObservable__GetItem_fn(FilterObservable* __this, int32_t* index, uObject** __retval)
{
    uStackFrame __("Fuse.Charting.FilterObservable", "GetItem(int)");
    FilterObservable__SourceItem* ret11;
    int32_t index_ = *index;
    return *__retval = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_outputItems), uCRef<int32_t>(index_), &ret11), ret11))->Value, void();
}

// protected override sealed int GetLength()
void FilterObservable__GetLength_fn(FilterObservable* __this, int32_t* __retval)
{
    uStackFrame __("Fuse.Charting.FilterObservable", "GetLength()");
    return *__retval = uPtr(__this->_outputItems)->Count(), void();
}

// protected override sealed void OnSubscription()
void FilterObservable__OnSubscription_fn(FilterObservable* __this)
{
    uStackFrame __("Fuse.Charting.FilterObservable", "OnSubscription()");

    if ((__this->_subscription != NULL) || (__this->Source() == NULL))
        return;

    __this->_subscription = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(__this->Source()), ::TYPES[6/*Fuse.Reactive.IObservableArray*/]), (uObject*)__this);
    __this->SyncItems();
}

// protected override sealed void OnUnsubscription()
void FilterObservable__OnUnsubscription_fn(FilterObservable* __this)
{
    uStackFrame __("Fuse.Charting.FilterObservable", "OnUnsubscription()");
    __this->CleanSubscription();
}

// public Fuse.Reactive.IObservableArray get_Source()
void FilterObservable__get_Source_fn(FilterObservable* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Reactive.IObservableArray value)
void FilterObservable__set_Source_fn(FilterObservable* __this, uObject* value)
{
    __this->Source(value);
}

// private void SyncDeferAction()
void FilterObservable__SyncDeferAction_fn(FilterObservable* __this)
{
    __this->SyncDeferAction();
}

// private void SyncItems()
void FilterObservable__SyncItems_fn(FilterObservable* __this)
{
    __this->SyncItems();
}

// public void Update()
void FilterObservable__Update_fn(FilterObservable* __this)
{
    __this->Update();
}

// protected generated FilterObservable() [instance]
void FilterObservable::ctor_1()
{
    _sourceItems = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[50/*Uno.Collections.List`1*/]->MakeType(FilterObservable__SourceItem_typeof(), NULL)));
    _outputItems = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[50/*Uno.Collections.List`1*/]->MakeType(FilterObservable__SourceItem_typeof(), NULL)));
    ctor_();
}

// private void CleanSubscription() [instance]
void FilterObservable::CleanSubscription()
{
    uStackFrame __("Fuse.Charting.FilterObservable", "CleanSubscription()");

    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[8/*Uno.IDisposable*/]));
        _subscription = NULL;
    }
}

// private void ClearSource() [instance]
void FilterObservable::ClearSource()
{
    uStackFrame __("Fuse.Charting.FilterObservable", "ClearSource()");
    FilterObservable__SourceItem* ret6;

    for (int32_t i = 0; i < uPtr(_sourceItems)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_sourceItems), uCRef<int32_t>(i), &ret6), ret6))->Index = -1;

    uPtr(_sourceItems)->Clear();
}

// public Fuse.Reactive.IObservableArray get_Source() [instance]
uObject* FilterObservable::Source()
{
    return _source;
}

// public void set_Source(Fuse.Reactive.IObservableArray value) [instance]
void FilterObservable::Source(uObject* value)
{
    uStackFrame __("Fuse.Charting.FilterObservable", "set_Source(Fuse.Reactive.IObservableArray)");
    CleanSubscription();
    _source = value;

    if (HasSubscription())
        OnSubscription();
}

// private void SyncDeferAction() [instance]
void FilterObservable::SyncDeferAction()
{
    uStackFrame __("Fuse.Charting.FilterObservable", "SyncDeferAction()");
    FilterObservable__SourceItem* ret12;
    FilterObservable__SourceItem* ret13;
    FilterObservable__SourceItem* ret14;
    FilterObservable__SourceItem* ret15;
    FilterObservable__SourceItem* ret16;
    FilterObservable__SourceItem* ret17;
    FilterObservable__SourceItem* ret18;
    _syncDefer = false;

    for (int32_t i = 0; i < uPtr(_sourceItems)->Count(); ++i)
    {
        FilterObservable__SourceItem* si = (::g::Uno::Collections::List__get_Item_fn(uPtr(_sourceItems), uCRef<int32_t>(i), &ret12), ret12);
        uPtr(si)->Accept = Accept(uPtr(si)->Value, i, uPtr(_sourceItems)->Count());
    }

    for (int32_t i1 = uPtr(_outputItems)->Count() - 1; i1 >= 0; --i1)
    {
        FilterObservable__SourceItem* oi = (::g::Uno::Collections::List__get_Item_fn(uPtr(_outputItems), uCRef<int32_t>(i1), &ret13), ret13);

        if (!uPtr(oi)->Desired())
        {
            uPtr(_outputItems)->RemoveAt(i1);
            TriggerRemoveAt(i1);
        }
    }

    int32_t outAt = 0;

    for (int32_t i2 = 0; i2 < uPtr(_sourceItems)->Count(); ++i2)
    {
        if (!uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_sourceItems), uCRef<int32_t>(i2), &ret14), ret14))->Desired())
            continue;

        while ((outAt < uPtr(_outputItems)->Count()) && (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_outputItems), uCRef<int32_t>(outAt), &ret15), ret15))->Index < i2))
            outAt++;

        if ((outAt < uPtr(_outputItems)->Count()) && (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_outputItems), uCRef<int32_t>(outAt), &ret16), ret16))->Index == i2))
            continue;

        ::g::Uno::Collections::List__Insert_fn(uPtr(_outputItems), uCRef<int32_t>(outAt), (::g::Uno::Collections::List__get_Item_fn(uPtr(_sourceItems), uCRef<int32_t>(i2), &ret17), ret17));
        TriggerInsertAt(outAt, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_sourceItems), uCRef<int32_t>(i2), &ret18), ret18))->Value);
        outAt++;
    }
}

// private void SyncItems() [instance]
void FilterObservable::SyncItems()
{
    uStackFrame __("Fuse.Charting.FilterObservable", "SyncItems()");

    if (_syncDefer)
        return;

    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)FilterObservable__SyncDeferAction_fn, this), -1, 2);
    _syncDefer = true;
}

// public void Update() [instance]
void FilterObservable::Update()
{
    uStackFrame __("Fuse.Charting.FilterObservable", "Update()");
    SyncItems();
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotDataItem.uno
// -------------------------------------------------------------------

// internal abstract class IPlotDataItem
// {
static void IPlotDataItem_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IObject_typeof(), offsetof(IPlotDataItem_type, interface0));
    type->SetFields(0,
        IPlotDataItem__ChangedHandler_typeof(), offsetof(IPlotDataItem, Changed1), 0);
}

IPlotDataItem_type* IPlotDataItem_typeof()
{
    static uSStrong<IPlotDataItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IPlotDataItem);
    options.TypeSize = sizeof(IPlotDataItem_type);
    type = (IPlotDataItem_type*)uClassType::New("Fuse.Charting.IPlotDataItem", options);
    type->fp_build_ = IPlotDataItem_build;
    return type;
}

// protected generated IPlotDataItem()
void IPlotDataItem__ctor__fn(IPlotDataItem* __this)
{
    __this->ctor_();
}

// public generated void add_Changed(Fuse.Charting.IPlotDataItem.ChangedHandler value)
void IPlotDataItem__add_Changed_fn(IPlotDataItem* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// public generated void remove_Changed(Fuse.Charting.IPlotDataItem.ChangedHandler value)
void IPlotDataItem__remove_Changed_fn(IPlotDataItem* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// protected void OnChanged()
void IPlotDataItem__OnChanged_fn(IPlotDataItem* __this)
{
    __this->OnChanged();
}

// protected generated IPlotDataItem() [instance]
void IPlotDataItem::ctor_()
{
}

// public generated void add_Changed(Fuse.Charting.IPlotDataItem.ChangedHandler value) [instance]
void IPlotDataItem::add_Changed(uDelegate* value)
{
    uStackFrame __("Fuse.Charting.IPlotDataItem", "add_Changed(Fuse.Charting.IPlotDataItem.ChangedHandler)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[43/*Fuse.Charting.IPlotDataItem.ChangedHandler*/]);
}

// public generated void remove_Changed(Fuse.Charting.IPlotDataItem.ChangedHandler value) [instance]
void IPlotDataItem::remove_Changed(uDelegate* value)
{
    uStackFrame __("Fuse.Charting.IPlotDataItem", "remove_Changed(Fuse.Charting.IPlotDataItem.ChangedHandler)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[43/*Fuse.Charting.IPlotDataItem.ChangedHandler*/]);
}

// protected void OnChanged() [instance]
void IPlotDataItem::OnChanged()
{
    uStackFrame __("Fuse.Charting.IPlotDataItem", "OnChanged()");

    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->InvokeVoid();
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotDataItem.uno
// -------------------------------------------------------------------

// internal abstract interface IPlotDataItemListener<T>
// {
uInterfaceType* IPlotDataItemListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Charting.IPlotDataItemListener`1", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotDataItem.uno
// -------------------------------------------------------------------

// internal abstract interface IPlotDataItemProvider
// {
uInterfaceType* IPlotDataItemProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Charting.IPlotDataItemProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotAxis.uno
// ---------------------------------------------------------------

// internal sealed class LabelFilterObservable
// {
static void LabelFilterObservable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObservableArray_typeof(), offsetof(::g::Fuse::Charting::FilterObservable_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Charting::FilterObservable_type, interface1),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Charting::FilterObservable_type, interface2));
    type->SetFields(6,
        ::g::Fuse::Charting::AxisFilter_typeof(), offsetof(LabelFilterObservable, Filter), 0);
}

::g::Fuse::Charting::FilterObservable_type* LabelFilterObservable_typeof()
{
    static uSStrong< ::g::Fuse::Charting::FilterObservable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Charting::FilterObservable_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LabelFilterObservable);
    options.TypeSize = sizeof(::g::Fuse::Charting::FilterObservable_type);
    type = (::g::Fuse::Charting::FilterObservable_type*)uClassType::New("Fuse.Charting.LabelFilterObservable", options);
    type->fp_build_ = LabelFilterObservable_build;
    type->fp_ctor_ = (void*)LabelFilterObservable__New1_fn;
    type->fp_Accept = (void(*)(::g::Fuse::Charting::FilterObservable*, uObject*, int32_t*, int32_t*, bool*))LabelFilterObservable__Accept_fn;
    type->interface2.fp_OnClear = (void(*)(uObject*))::g::Fuse::Charting::FilterObservable__FuseReactiveIObserverOnClear_fn;
    type->interface2.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Charting::FilterObservable__FuseReactiveIObserverOnNewAll_fn;
    type->interface2.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Charting::FilterObservable__FuseReactiveIObserverOnNewAt_fn;
    type->interface2.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Charting::FilterObservable__FuseReactiveIObserverOnSet_fn;
    type->interface2.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Charting::FilterObservable__FuseReactiveIObserverOnAdd_fn;
    type->interface2.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Charting::FilterObservable__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface2.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Charting::FilterObservable__FuseReactiveIObserverOnInsertAt_fn;
    type->interface2.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Charting::FilterObservable__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::Charting::ObservableData__FuseReactiveIObservableArraySubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int32_t*))::g::Fuse::Charting::ObservableData__FuseIArrayget_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))::g::Fuse::Charting::ObservableData__FuseIArrayget_Item_fn;
    return type;
}

// public generated LabelFilterObservable()
void LabelFilterObservable__ctor_2_fn(LabelFilterObservable* __this)
{
    __this->ctor_2();
}

// protected override sealed bool Accept(object value, int axisIndex, int axisCount)
void LabelFilterObservable__Accept_fn(LabelFilterObservable* __this, uObject* value, int32_t* axisIndex, int32_t* axisCount, bool* __retval)
{
    uStackFrame __("Fuse.Charting.LabelFilterObservable", "Accept(object,int,int)");
    int32_t axisIndex_ = *axisIndex;
    int32_t axisCount_ = *axisCount;
    return *__retval = uPtr(__this->Filter)->Accept1(value, axisIndex_, axisCount_), void();
}

// public generated LabelFilterObservable New()
void LabelFilterObservable__New1_fn(LabelFilterObservable** __retval)
{
    *__retval = LabelFilterObservable::New1();
}

// public generated LabelFilterObservable() [instance]
void LabelFilterObservable::ctor_2()
{
    Filter = ::g::Fuse::Charting::AxisFilter::New1();
    ctor_1();
}

// public generated LabelFilterObservable New() [static]
LabelFilterObservable* LabelFilterObservable::New1()
{
    LabelFilterObservable* obj1 = (LabelFilterObservable*)uNew(LabelFilterObservable_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/ObjectWrapper.uno
// --------------------------------------------------------------------

// internal sealed class ObjectWrapper<T>
// {
static void ObjectWrapper_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::IObject_typeof(), offsetof(ObjectWrapper_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ObjectWrapper, _name), 0,
        type->T(0), offsetof(ObjectWrapper, _data), 0);
}

ObjectWrapper_type* ObjectWrapper_typeof()
{
    static uSStrong<ObjectWrapper_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ObjectWrapper);
    options.TypeSize = sizeof(ObjectWrapper_type);
    type = (ObjectWrapper_type*)uClassType::New("Fuse.Charting.ObjectWrapper`1", options);
    type->fp_build_ = ObjectWrapper_build;
    type->interface0.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))ObjectWrapper__ContainsKey_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, uString*, uObject**))ObjectWrapper__get_Item_fn;
    type->interface0.fp_get_Keys = (void(*)(uObject*, uArray**))ObjectWrapper__get_Keys_fn;
    return type;
}

// public ObjectWrapper(string name, T data)
void ObjectWrapper__ctor__fn(ObjectWrapper* __this, uString* name, uObject* data)
{
    __this->ctor_(name, data);
}

// public bool ContainsKey(string key)
void ObjectWrapper__ContainsKey_fn(ObjectWrapper* __this, uString* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// public T get_Data()
void ObjectWrapper__get_Data_fn(ObjectWrapper* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public object get_Item(string key)
void ObjectWrapper__get_Item_fn(ObjectWrapper* __this, uString* key, uObject** __retval)
{
    *__retval = __this->Item(key);
}

// public string[] get_Keys()
void ObjectWrapper__get_Keys_fn(ObjectWrapper* __this, uArray** __retval)
{
    *__retval = __this->Keys();
}

// public ObjectWrapper New(string name, T data)
void ObjectWrapper__New1_fn(uType* __type, uString* name, uObject* data, ObjectWrapper** __retval)
{
    *__retval = ObjectWrapper::New1(__type, name, data);
}

// public ObjectWrapper(string name, T data) [instance]
void ObjectWrapper::ctor_(uString* name, uObject* data)
{
    _name = name;
    _data = data;
}

// public bool ContainsKey(string key) [instance]
bool ObjectWrapper::ContainsKey(uString* key)
{
    return ::g::Uno::String::op_Equality(key, _name) && (_data != NULL);
}

// public T get_Data() [instance]
uObject* ObjectWrapper::Data()
{
    return _data;
}

// public object get_Item(string key) [instance]
uObject* ObjectWrapper::Item(uString* key)
{
    if (::g::Uno::String::op_Equality(key, _name))
        return _data;

    return NULL;
}

// public string[] get_Keys() [instance]
uArray* ObjectWrapper::Keys()
{
    return uArray::Init<uString*>(::TYPES[1/*string[]*/], 1, (uString*)_name);
}

// public ObjectWrapper New(string name, T data) [static]
ObjectWrapper* ObjectWrapper::New1(uType* __type, uString* name, uObject* data)
{
    ObjectWrapper* obj1 = (ObjectWrapper*)uNew(__type);
    obj1->ctor_(name, data);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBehavior.uno
// -------------------------------------------------------------------

// internal sealed class ObservableAxisItems
// {
static void ObservableAxisItems_build(uType* type)
{
    type->SetBase(::g::Fuse::Charting::ReadOnlyObservableList_typeof()->MakeType(::g::Fuse::Charting::AxisEntry_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObservableArray_typeof(), offsetof(::g::Fuse::Charting::ObservableData_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Charting::ObservableData_type, interface1));
    type->SetFields(2);
}

::g::Fuse::Charting::ObservableData_type* ObservableAxisItems_typeof()
{
    static uSStrong< ::g::Fuse::Charting::ObservableData_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Charting::ReadOnlyObservableList_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ObservableAxisItems);
    options.TypeSize = sizeof(::g::Fuse::Charting::ObservableData_type);
    type = (::g::Fuse::Charting::ObservableData_type*)uClassType::New("Fuse.Charting.ObservableAxisItems", options);
    type->fp_build_ = ObservableAxisItems_build;
    type->fp_ctor_ = (void*)ObservableAxisItems__New2_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::Charting::ObservableData__FuseReactiveIObservableArraySubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int32_t*))::g::Fuse::Charting::ObservableData__FuseIArrayget_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))::g::Fuse::Charting::ObservableData__FuseIArrayget_Item_fn;
    return type;
}

// public generated ObservableAxisItems()
void ObservableAxisItems__ctor_2_fn(ObservableAxisItems* __this)
{
    __this->ctor_2();
}

// public generated ObservableAxisItems New()
void ObservableAxisItems__New2_fn(ObservableAxisItems** __retval)
{
    *__retval = ObservableAxisItems::New2();
}

// public generated ObservableAxisItems() [instance]
void ObservableAxisItems::ctor_2()
{
    ctor_1();
}

// public generated ObservableAxisItems New() [static]
ObservableAxisItems* ObservableAxisItems::New2()
{
    ObservableAxisItems* obj1 = (ObservableAxisItems*)uNew(ObservableAxisItems_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/ObservableList.uno
// ---------------------------------------------------------------------

// internal abstract class ObservableData
// {
static void ObservableData_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObservableArray_typeof(), offsetof(ObservableData_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(ObservableData_type, interface1));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::IObserver_typeof(), NULL), offsetof(ObservableData, _observers), 0);
}

ObservableData_type* ObservableData_typeof()
{
    static uSStrong<ObservableData_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ObservableData);
    options.TypeSize = sizeof(ObservableData_type);
    type = (ObservableData_type*)uClassType::New("Fuse.Charting.ObservableData", options);
    type->fp_build_ = ObservableData_build;
    type->fp_OnSubscribe = ObservableData__OnSubscribe_fn;
    type->fp_OnSubscription = ObservableData__OnSubscription_fn;
    type->fp_OnUnsubscription = ObservableData__OnUnsubscription_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))ObservableData__FuseReactiveIObservableArraySubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int32_t*))ObservableData__FuseIArrayget_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))ObservableData__FuseIArrayget_Item_fn;
    return type;
}

// protected generated ObservableData()
void ObservableData__ctor__fn(ObservableData* __this)
{
    __this->ctor_();
}

// private object Fuse.IArray.get_Item(int index)
void ObservableData__FuseIArrayget_Item_fn(ObservableData* __this, int32_t* index, uObject** __retval)
{
    uStackFrame __("Fuse.Charting.ObservableData", "Fuse.IArray.get_Item(int)");
    int32_t index_ = *index;
    return *__retval = __this->GetItem(index_), void();
}

// private int Fuse.IArray.get_Length()
void ObservableData__FuseIArrayget_Length_fn(ObservableData* __this, int32_t* __retval)
{
    uStackFrame __("Fuse.Charting.ObservableData", "Fuse.IArray.get_Length()");
    return *__retval = __this->GetLength(), void();
}

// public Uno.IDisposable Fuse.Reactive.IObservableArray.Subscribe(Fuse.Reactive.IObserver observer)
void ObservableData__FuseReactiveIObservableArraySubscribe_fn(ObservableData* __this, uObject* observer, uObject** __retval)
{
    uStackFrame __("Fuse.Charting.ObservableData", "Fuse.Reactive.IObservableArray.Subscribe(Fuse.Reactive.IObserver)");
    ObservableData__Subscription* collection1;

    if (__this->_observers == NULL)
        __this->_observers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[50/*Uno.Collections.List`1*/]->MakeType(::TYPES[7/*Fuse.Reactive.IObserver*/], NULL)));

    bool wasNone = uPtr(__this->_observers)->Count() == 0;
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_observers), observer);

    if (wasNone)
        __this->OnSubscription();

    __this->OnSubscribe(observer);
    return *__retval = (uObject*)(collection1 = ObservableData__Subscription::New1(), uPtr(collection1)->Source = __this, uPtr(collection1)->Observer = observer, collection1), void();
}

// protected bool get_HasSubscription()
void ObservableData__get_HasSubscription_fn(ObservableData* __this, bool* __retval)
{
    *__retval = __this->HasSubscription();
}

// protected virtual void OnSubscribe(Fuse.Reactive.IObserver observer)
void ObservableData__OnSubscribe_fn(ObservableData* __this, uObject* observer)
{
    uStackFrame __("Fuse.Charting.ObservableData", "OnSubscribe(Fuse.Reactive.IObserver)");
    ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(observer), ::TYPES[7/*Fuse.Reactive.IObserver*/]), (uObject*)__this);
}

// protected virtual void OnSubscription()
void ObservableData__OnSubscription_fn(ObservableData* __this)
{
}

// protected virtual void OnUnsubscription()
void ObservableData__OnUnsubscription_fn(ObservableData* __this)
{
}

// protected void TriggerAdd(object value)
void ObservableData__TriggerAdd_fn(ObservableData* __this, uObject* value)
{
    __this->TriggerAdd(value);
}

// protected void TriggerClear()
void ObservableData__TriggerClear_fn(ObservableData* __this)
{
    __this->TriggerClear();
}

// protected void TriggerFail(string message)
void ObservableData__TriggerFail_fn(ObservableData* __this, uString* message)
{
    __this->TriggerFail(message);
}

// protected void TriggerInsertAt(int index, object value)
void ObservableData__TriggerInsertAt_fn(ObservableData* __this, int32_t* index, uObject* value)
{
    __this->TriggerInsertAt(*index, value);
}

// protected void TriggerNewAll()
void ObservableData__TriggerNewAll_fn(ObservableData* __this)
{
    __this->TriggerNewAll();
}

// protected void TriggerNewAt(int index, object value)
void ObservableData__TriggerNewAt_fn(ObservableData* __this, int32_t* index, uObject* value)
{
    __this->TriggerNewAt(*index, value);
}

// protected void TriggerRemoveAt(int index)
void ObservableData__TriggerRemoveAt_fn(ObservableData* __this, int32_t* index)
{
    __this->TriggerRemoveAt(*index);
}

// protected void TriggerSet(object value)
void ObservableData__TriggerSet_fn(ObservableData* __this, uObject* value)
{
    __this->TriggerSet(value);
}

// private void Unsubscribe(Fuse.Reactive.IObserver observer)
void ObservableData__Unsubscribe_fn(ObservableData* __this, uObject* observer)
{
    __this->Unsubscribe(observer);
}

// protected generated ObservableData() [instance]
void ObservableData::ctor_()
{
}

// protected bool get_HasSubscription() [instance]
bool ObservableData::HasSubscription()
{
    uStackFrame __("Fuse.Charting.ObservableData", "get_HasSubscription()");
    return (_observers != NULL) && (uPtr(_observers)->Count() > 0);
}

// protected void TriggerAdd(object value) [instance]
void ObservableData::TriggerAdd(uObject* value)
{
    uStackFrame __("Fuse.Charting.ObservableData", "TriggerAdd(object)");
    uObject* ret2;

    if (_observers != NULL)

        for (int32_t i = 0; i < uPtr(_observers)->Count(); ++i)
            ::g::Fuse::Reactive::IObserver::OnAdd(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int32_t>(i), &ret2), ret2)), ::TYPES[7/*Fuse.Reactive.IObserver*/]), value);
}

// protected void TriggerClear() [instance]
void ObservableData::TriggerClear()
{
    uStackFrame __("Fuse.Charting.ObservableData", "TriggerClear()");
    uObject* ret3;

    if (_observers != NULL)

        for (int32_t i = 0; i < uPtr(_observers)->Count(); ++i)
            ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int32_t>(i), &ret3), ret3)), ::TYPES[7/*Fuse.Reactive.IObserver*/]));
}

// protected void TriggerFail(string message) [instance]
void ObservableData::TriggerFail(uString* message)
{
    uStackFrame __("Fuse.Charting.ObservableData", "TriggerFail(string)");
    uObject* ret4;

    if (_observers != NULL)

        for (int32_t i = 0; i < uPtr(_observers)->Count(); ++i)
            ::g::Fuse::Reactive::IObserver::OnFailed(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int32_t>(i), &ret4), ret4)), ::TYPES[7/*Fuse.Reactive.IObserver*/]), message);
}

// protected void TriggerInsertAt(int index, object value) [instance]
void ObservableData::TriggerInsertAt(int32_t index, uObject* value)
{
    uStackFrame __("Fuse.Charting.ObservableData", "TriggerInsertAt(int,object)");
    uObject* ret5;

    if (_observers != NULL)

        for (int32_t i = 0; i < uPtr(_observers)->Count(); ++i)
            ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int32_t>(i), &ret5), ret5)), ::TYPES[7/*Fuse.Reactive.IObserver*/]), index, value);
}

// protected void TriggerNewAll() [instance]
void ObservableData::TriggerNewAll()
{
    uStackFrame __("Fuse.Charting.ObservableData", "TriggerNewAll()");
    uObject* ret6;

    if (_observers != NULL)

        for (int32_t i = 0; i < uPtr(_observers)->Count(); ++i)
            ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int32_t>(i), &ret6), ret6)), ::TYPES[7/*Fuse.Reactive.IObserver*/]), (uObject*)this);
}

// protected void TriggerNewAt(int index, object value) [instance]
void ObservableData::TriggerNewAt(int32_t index, uObject* value)
{
    uStackFrame __("Fuse.Charting.ObservableData", "TriggerNewAt(int,object)");
    uObject* ret7;

    if (_observers != NULL)

        for (int32_t i = 0; i < uPtr(_observers)->Count(); ++i)
            ::g::Fuse::Reactive::IObserver::OnNewAt(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int32_t>(i), &ret7), ret7)), ::TYPES[7/*Fuse.Reactive.IObserver*/]), index, value);
}

// protected void TriggerRemoveAt(int index) [instance]
void ObservableData::TriggerRemoveAt(int32_t index)
{
    uStackFrame __("Fuse.Charting.ObservableData", "TriggerRemoveAt(int)");
    uObject* ret8;

    if (_observers != NULL)

        for (int32_t i = 0; i < uPtr(_observers)->Count(); ++i)
            ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int32_t>(i), &ret8), ret8)), ::TYPES[7/*Fuse.Reactive.IObserver*/]), index);
}

// protected void TriggerSet(object value) [instance]
void ObservableData::TriggerSet(uObject* value)
{
    uStackFrame __("Fuse.Charting.ObservableData", "TriggerSet(object)");
    uObject* ret9;

    if (_observers != NULL)

        for (int32_t i = 0; i < uPtr(_observers)->Count(); ++i)
            ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int32_t>(i), &ret9), ret9)), ::TYPES[7/*Fuse.Reactive.IObserver*/]), value);
}

// private void Unsubscribe(Fuse.Reactive.IObserver observer) [instance]
void ObservableData::Unsubscribe(uObject* observer)
{
    uStackFrame __("Fuse.Charting.ObservableData", "Unsubscribe(Fuse.Reactive.IObserver)");
    bool ret10;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_observers), observer, &ret10);

    if (uPtr(_observers)->Count() == 0)
        OnUnsubscription();
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBehavior.uno
// -------------------------------------------------------------------

// internal sealed class ObservableDataItems
// {
static void ObservableDataItems_build(uType* type)
{
    type->SetBase(::g::Fuse::Charting::ReadOnlyObservableList_typeof()->MakeType(::g::Fuse::Charting::PlotDataPoint_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObservableArray_typeof(), offsetof(::g::Fuse::Charting::ObservableData_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Charting::ObservableData_type, interface1));
    type->SetFields(2);
}

::g::Fuse::Charting::ObservableData_type* ObservableDataItems_typeof()
{
    static uSStrong< ::g::Fuse::Charting::ObservableData_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Charting::ReadOnlyObservableList_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ObservableDataItems);
    options.TypeSize = sizeof(::g::Fuse::Charting::ObservableData_type);
    type = (::g::Fuse::Charting::ObservableData_type*)uClassType::New("Fuse.Charting.ObservableDataItems", options);
    type->fp_build_ = ObservableDataItems_build;
    type->fp_ctor_ = (void*)ObservableDataItems__New2_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::Charting::ObservableData__FuseReactiveIObservableArraySubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int32_t*))::g::Fuse::Charting::ObservableData__FuseIArrayget_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))::g::Fuse::Charting::ObservableData__FuseIArrayget_Item_fn;
    return type;
}

// public generated ObservableDataItems()
void ObservableDataItems__ctor_2_fn(ObservableDataItems* __this)
{
    __this->ctor_2();
}

// public generated ObservableDataItems New()
void ObservableDataItems__New2_fn(ObservableDataItems** __retval)
{
    *__retval = ObservableDataItems::New2();
}

// public generated ObservableDataItems() [instance]
void ObservableDataItems::ctor_2()
{
    ctor_1();
}

// public generated ObservableDataItems New() [static]
ObservableDataItems* ObservableDataItems::New2()
{
    ObservableDataItems* obj1 = (ObservableDataItems*)uNew(ObservableDataItems_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/Plot.ScriptClass.uno
// -----------------------------------------------------------------------

// public partial class Plot
// {
// static Plot()
static void Plot__cctor_4_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[21/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::TYPES[22/*Fuse.Scripting.ScriptMethod<Fuse.Charting.Plot>*/], ::STRINGS[18/*"stepOffset"*/], uDelegate::New(::TYPES[23/*Uno.Action<Fuse.Charting.Plot, object[]>*/], (void*)Plot__stepOffset_fn))));
}

static void Plot_build(uType* type)
{
    ::STRINGS[18] = uString::Const("stepOffset");
    ::STRINGS[19] = uString::Const("stepOffset requires 1 step argument");
    ::STRINGS[20] = uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/Plot.ScriptClass.uno");
    ::TYPES[20] = ::g::Uno::Type_typeof();
    ::TYPES[21] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[22] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[23] = ::g::Uno::Action2_typeof()->MakeType(type, uObject_typeof()->Array(), NULL);
    ::TYPES[24] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[25] = ::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<int>*/, ::g::Uno::Int_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[24/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(120,
        ::g::Fuse::Charting::PlotBehavior_typeof(), offsetof(Plot, _plot), 0);
    type->Reflection.SetFunctions(32,
        new uFunction("get_DataExtend", NULL, (void*)Plot__get_DataExtend_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_DataExtend", NULL, (void*)Plot__set_DataExtend_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("get_DataLimit", NULL, (void*)Plot__get_DataLimit_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_DataLimit", NULL, (void*)Plot__set_DataLimit_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_DataOffset", NULL, (void*)Plot__get_DataOffset_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_DataOffset", NULL, (void*)Plot__set_DataOffset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Plot__New4_fn, 0, true, type, 0),
        new uFunction("get_Orientation", NULL, (void*)Plot__get_Orientation_fn, 0, false, ::g::Fuse::Charting::PlotOrientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)Plot__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotOrientation_typeof()),
        new uFunction("get_RangePadding", NULL, (void*)Plot__get_RangePadding_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_RangePadding", NULL, (void*)Plot__set_RangePadding_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Series", NULL, (void*)Plot__get_Series_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Charting::DataSeries_typeof(), NULL), 0),
        new uFunction("get_WAxisMetric", NULL, (void*)Plot__get_WAxisMetric_fn, 0, false, ::g::Fuse::Charting::PlotAxisMetric_typeof(), 0),
        new uFunction("set_WAxisMetric", NULL, (void*)Plot__set_WAxisMetric_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotAxisMetric_typeof()),
        new uFunction("get_WRange", NULL, (void*)Plot__get_WRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_WRange", NULL, (void*)Plot__set_WRange_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_XAxisMetric", NULL, (void*)Plot__get_XAxisMetric_fn, 0, false, ::g::Fuse::Charting::PlotAxisMetric_typeof(), 0),
        new uFunction("set_XAxisMetric", NULL, (void*)Plot__set_XAxisMetric_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotAxisMetric_typeof()),
        new uFunction("get_XAxisSteps", NULL, (void*)Plot__get_XAxisSteps_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_XAxisSteps", NULL, (void*)Plot__set_XAxisSteps_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_XRange", NULL, (void*)Plot__get_XRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_XRange", NULL, (void*)Plot__set_XRange_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_YAxisMetric", NULL, (void*)Plot__get_YAxisMetric_fn, 0, false, ::g::Fuse::Charting::PlotAxisMetric_typeof(), 0),
        new uFunction("set_YAxisMetric", NULL, (void*)Plot__set_YAxisMetric_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotAxisMetric_typeof()),
        new uFunction("get_YAxisSteps", NULL, (void*)Plot__get_YAxisSteps_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_YAxisSteps", NULL, (void*)Plot__set_YAxisSteps_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_YRange", NULL, (void*)Plot__get_YRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_YRange", NULL, (void*)Plot__set_YRange_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_ZAxisMetric", NULL, (void*)Plot__get_ZAxisMetric_fn, 0, false, ::g::Fuse::Charting::PlotAxisMetric_typeof(), 0),
        new uFunction("set_ZAxisMetric", NULL, (void*)Plot__set_ZAxisMetric_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotAxisMetric_typeof()),
        new uFunction("get_ZRange", NULL, (void*)Plot__get_ZRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_ZRange", NULL, (void*)Plot__set_ZRange_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
}

::g::Fuse::Controls::Panel_type* Plot_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 121;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(Plot);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Charting.Plot", options);
    type->fp_build_ = Plot_build;
    type->fp_ctor_ = (void*)Plot__New4_fn;
    type->fp_cctor_ = Plot__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Plot()
void Plot__ctor_7_fn(Plot* __this)
{
    __this->ctor_7();
}

// public int2 get_DataExtend()
void Plot__get_DataExtend_fn(Plot* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->DataExtend();
}

// public void set_DataExtend(int2 value)
void Plot__set_DataExtend_fn(Plot* __this, ::g::Uno::Int2* value)
{
    __this->DataExtend(*value);
}

// public int get_DataLimit()
void Plot__get_DataLimit_fn(Plot* __this, int32_t* __retval)
{
    *__retval = __this->DataLimit();
}

// public void set_DataLimit(int value)
void Plot__set_DataLimit_fn(Plot* __this, int32_t* value)
{
    __this->DataLimit(*value);
}

// public int get_DataOffset()
void Plot__get_DataOffset_fn(Plot* __this, int32_t* __retval)
{
    *__retval = __this->DataOffset();
}

// public void set_DataOffset(int value)
void Plot__set_DataOffset_fn(Plot* __this, int32_t* value)
{
    __this->DataOffset(*value);
}

// public Plot New()
void Plot__New4_fn(Plot** __retval)
{
    *__retval = Plot::New4();
}

// public Fuse.Charting.PlotOrientation get_Orientation()
void Plot__get_Orientation_fn(Plot* __this, int32_t* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Charting.PlotOrientation value)
void Plot__set_Orientation_fn(Plot* __this, int32_t* value)
{
    __this->Orientation(*value);
}

// public float get_RangePadding()
void Plot__get_RangePadding_fn(Plot* __this, float* __retval)
{
    *__retval = __this->RangePadding();
}

// public void set_RangePadding(float value)
void Plot__set_RangePadding_fn(Plot* __this, float* value)
{
    __this->RangePadding(*value);
}

// public Uno.Collections.IList<Fuse.Charting.DataSeries> get_Series()
void Plot__get_Series_fn(Plot* __this, uObject** __retval)
{
    *__retval = __this->Series();
}

// private static void stepOffset(Fuse.Charting.Plot p, object[] args)
void Plot__stepOffset_fn(Plot* p, uArray* args)
{
    Plot::stepOffset(p, args);
}

// public Fuse.Charting.PlotAxisMetric get_WAxisMetric()
void Plot__get_WAxisMetric_fn(Plot* __this, int32_t* __retval)
{
    *__retval = __this->WAxisMetric();
}

// public void set_WAxisMetric(Fuse.Charting.PlotAxisMetric value)
void Plot__set_WAxisMetric_fn(Plot* __this, int32_t* value)
{
    __this->WAxisMetric(*value);
}

// public float2 get_WRange()
void Plot__get_WRange_fn(Plot* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WRange();
}

// public void set_WRange(float2 value)
void Plot__set_WRange_fn(Plot* __this, ::g::Uno::Float2* value)
{
    __this->WRange(*value);
}

// public Fuse.Charting.PlotAxisMetric get_XAxisMetric()
void Plot__get_XAxisMetric_fn(Plot* __this, int32_t* __retval)
{
    *__retval = __this->XAxisMetric();
}

// public void set_XAxisMetric(Fuse.Charting.PlotAxisMetric value)
void Plot__set_XAxisMetric_fn(Plot* __this, int32_t* value)
{
    __this->XAxisMetric(*value);
}

// public int get_XAxisSteps()
void Plot__get_XAxisSteps_fn(Plot* __this, int32_t* __retval)
{
    *__retval = __this->XAxisSteps();
}

// public void set_XAxisSteps(int value)
void Plot__set_XAxisSteps_fn(Plot* __this, int32_t* value)
{
    __this->XAxisSteps(*value);
}

// public float2 get_XRange()
void Plot__get_XRange_fn(Plot* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->XRange();
}

// public void set_XRange(float2 value)
void Plot__set_XRange_fn(Plot* __this, ::g::Uno::Float2* value)
{
    __this->XRange(*value);
}

// public Fuse.Charting.PlotAxisMetric get_YAxisMetric()
void Plot__get_YAxisMetric_fn(Plot* __this, int32_t* __retval)
{
    *__retval = __this->YAxisMetric();
}

// public void set_YAxisMetric(Fuse.Charting.PlotAxisMetric value)
void Plot__set_YAxisMetric_fn(Plot* __this, int32_t* value)
{
    __this->YAxisMetric(*value);
}

// public int get_YAxisSteps()
void Plot__get_YAxisSteps_fn(Plot* __this, int32_t* __retval)
{
    *__retval = __this->YAxisSteps();
}

// public void set_YAxisSteps(int value)
void Plot__set_YAxisSteps_fn(Plot* __this, int32_t* value)
{
    __this->YAxisSteps(*value);
}

// public float2 get_YRange()
void Plot__get_YRange_fn(Plot* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->YRange();
}

// public void set_YRange(float2 value)
void Plot__set_YRange_fn(Plot* __this, ::g::Uno::Float2* value)
{
    __this->YRange(*value);
}

// public Fuse.Charting.PlotAxisMetric get_ZAxisMetric()
void Plot__get_ZAxisMetric_fn(Plot* __this, int32_t* __retval)
{
    *__retval = __this->ZAxisMetric();
}

// public void set_ZAxisMetric(Fuse.Charting.PlotAxisMetric value)
void Plot__set_ZAxisMetric_fn(Plot* __this, int32_t* value)
{
    __this->ZAxisMetric(*value);
}

// public float2 get_ZRange()
void Plot__get_ZRange_fn(Plot* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ZRange();
}

// public void set_ZRange(float2 value)
void Plot__set_ZRange_fn(Plot* __this, ::g::Uno::Float2* value)
{
    __this->ZRange(*value);
}

// public Plot() [instance]
void Plot::ctor_7()
{
    uStackFrame __("Fuse.Charting.Plot", ".ctor()");
    _plot = ::g::Fuse::Charting::PlotBehavior::New2();
    ctor_6();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Node>*/]), _plot);
}

// public int2 get_DataExtend() [instance]
::g::Uno::Int2 Plot::DataExtend()
{
    uStackFrame __("Fuse.Charting.Plot", "get_DataExtend()");
    return uPtr(_plot)->Extend();
}

// public void set_DataExtend(int2 value) [instance]
void Plot::DataExtend(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_DataExtend(int2)");
    uPtr(_plot)->Extend(value);
}

// public int get_DataLimit() [instance]
int32_t Plot::DataLimit()
{
    uStackFrame __("Fuse.Charting.Plot", "get_DataLimit()");
    return uPtr(_plot)->Limit();
}

// public void set_DataLimit(int value) [instance]
void Plot::DataLimit(int32_t value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_DataLimit(int)");
    uPtr(_plot)->Limit(value);
}

// public int get_DataOffset() [instance]
int32_t Plot::DataOffset()
{
    uStackFrame __("Fuse.Charting.Plot", "get_DataOffset()");
    return uPtr(_plot)->Offset();
}

// public void set_DataOffset(int value) [instance]
void Plot::DataOffset(int32_t value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_DataOffset(int)");
    uPtr(_plot)->Offset(value);
}

// public Fuse.Charting.PlotOrientation get_Orientation() [instance]
int32_t Plot::Orientation()
{
    uStackFrame __("Fuse.Charting.Plot", "get_Orientation()");
    return uPtr(_plot)->Orientation();
}

// public void set_Orientation(Fuse.Charting.PlotOrientation value) [instance]
void Plot::Orientation(int32_t value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_Orientation(Fuse.Charting.PlotOrientation)");
    uPtr(_plot)->Orientation(value);
}

// public float get_RangePadding() [instance]
float Plot::RangePadding()
{
    uStackFrame __("Fuse.Charting.Plot", "get_RangePadding()");
    return uPtr(uPtr(_plot)->DataSpec())->RangePadding();
}

// public void set_RangePadding(float value) [instance]
void Plot::RangePadding(float value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_RangePadding(float)");
    uPtr(uPtr(_plot)->DataSpec())->RangePadding(value);
}

// public Uno.Collections.IList<Fuse.Charting.DataSeries> get_Series() [instance]
uObject* Plot::Series()
{
    uStackFrame __("Fuse.Charting.Plot", "get_Series()");
    return uPtr(_plot)->Series();
}

// public Fuse.Charting.PlotAxisMetric get_WAxisMetric() [instance]
int32_t Plot::WAxisMetric()
{
    uStackFrame __("Fuse.Charting.Plot", "get_WAxisMetric()");
    return uPtr(uPtr(_plot)->DataSpec())->GetAxisMetric(3);
}

// public void set_WAxisMetric(Fuse.Charting.PlotAxisMetric value) [instance]
void Plot::WAxisMetric(int32_t value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_WAxisMetric(Fuse.Charting.PlotAxisMetric)");
    uPtr(uPtr(_plot)->DataSpec())->SetAxisMetric(3, value);
}

// public float2 get_WRange() [instance]
::g::Uno::Float2 Plot::WRange()
{
    uStackFrame __("Fuse.Charting.Plot", "get_WRange()");
    return uPtr(uPtr(_plot)->DataSpec())->GetRange(3);
}

// public void set_WRange(float2 value) [instance]
void Plot::WRange(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_WRange(float2)");
    uPtr(uPtr(_plot)->DataSpec())->SetRange(3, value);
}

// public Fuse.Charting.PlotAxisMetric get_XAxisMetric() [instance]
int32_t Plot::XAxisMetric()
{
    uStackFrame __("Fuse.Charting.Plot", "get_XAxisMetric()");
    return uPtr(uPtr(_plot)->DataSpec())->GetAxisMetric(0);
}

// public void set_XAxisMetric(Fuse.Charting.PlotAxisMetric value) [instance]
void Plot::XAxisMetric(int32_t value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_XAxisMetric(Fuse.Charting.PlotAxisMetric)");
    uPtr(uPtr(_plot)->DataSpec())->SetAxisMetric(0, value);
}

// public int get_XAxisSteps() [instance]
int32_t Plot::XAxisSteps()
{
    uStackFrame __("Fuse.Charting.Plot", "get_XAxisSteps()");
    return uPtr(uPtr(_plot)->DataSpec())->GetAxisSteps(0);
}

// public void set_XAxisSteps(int value) [instance]
void Plot::XAxisSteps(int32_t value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_XAxisSteps(int)");
    uPtr(uPtr(_plot)->DataSpec())->SetAxisSteps(0, value);
}

// public float2 get_XRange() [instance]
::g::Uno::Float2 Plot::XRange()
{
    uStackFrame __("Fuse.Charting.Plot", "get_XRange()");
    return uPtr(uPtr(_plot)->DataSpec())->GetRange(0);
}

// public void set_XRange(float2 value) [instance]
void Plot::XRange(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_XRange(float2)");
    uPtr(uPtr(_plot)->DataSpec())->SetRange(0, value);
}

// public Fuse.Charting.PlotAxisMetric get_YAxisMetric() [instance]
int32_t Plot::YAxisMetric()
{
    uStackFrame __("Fuse.Charting.Plot", "get_YAxisMetric()");
    return uPtr(uPtr(_plot)->DataSpec())->GetAxisMetric(1);
}

// public void set_YAxisMetric(Fuse.Charting.PlotAxisMetric value) [instance]
void Plot::YAxisMetric(int32_t value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_YAxisMetric(Fuse.Charting.PlotAxisMetric)");
    uPtr(uPtr(_plot)->DataSpec())->SetAxisMetric(1, value);
}

// public int get_YAxisSteps() [instance]
int32_t Plot::YAxisSteps()
{
    uStackFrame __("Fuse.Charting.Plot", "get_YAxisSteps()");
    return uPtr(uPtr(_plot)->DataSpec())->GetAxisSteps(1);
}

// public void set_YAxisSteps(int value) [instance]
void Plot::YAxisSteps(int32_t value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_YAxisSteps(int)");
    uPtr(uPtr(_plot)->DataSpec())->SetAxisSteps(1, value);
}

// public float2 get_YRange() [instance]
::g::Uno::Float2 Plot::YRange()
{
    uStackFrame __("Fuse.Charting.Plot", "get_YRange()");
    return uPtr(uPtr(_plot)->DataSpec())->GetRange(1);
}

// public void set_YRange(float2 value) [instance]
void Plot::YRange(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_YRange(float2)");
    uPtr(uPtr(_plot)->DataSpec())->SetRange(1, value);
}

// public Fuse.Charting.PlotAxisMetric get_ZAxisMetric() [instance]
int32_t Plot::ZAxisMetric()
{
    uStackFrame __("Fuse.Charting.Plot", "get_ZAxisMetric()");
    return uPtr(uPtr(_plot)->DataSpec())->GetAxisMetric(2);
}

// public void set_ZAxisMetric(Fuse.Charting.PlotAxisMetric value) [instance]
void Plot::ZAxisMetric(int32_t value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_ZAxisMetric(Fuse.Charting.PlotAxisMetric)");
    uPtr(uPtr(_plot)->DataSpec())->SetAxisMetric(2, value);
}

// public float2 get_ZRange() [instance]
::g::Uno::Float2 Plot::ZRange()
{
    uStackFrame __("Fuse.Charting.Plot", "get_ZRange()");
    return uPtr(uPtr(_plot)->DataSpec())->GetRange(2);
}

// public void set_ZRange(float2 value) [instance]
void Plot::ZRange(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Charting.Plot", "set_ZRange(float2)");
    uPtr(uPtr(_plot)->DataSpec())->SetRange(2, value);
}

// public Plot New() [static]
Plot* Plot::New4()
{
    Plot* obj1 = (Plot*)uNew(Plot_typeof());
    obj1->ctor_7();
    return obj1;
}

// private static void stepOffset(Fuse.Charting.Plot p, object[] args) [static]
void Plot::stepOffset(Plot* p, uArray* args)
{
    uStackFrame __("Fuse.Charting.Plot", "stepOffset(Fuse.Charting.Plot,object[])");
    Plot_typeof()->Init();
    int32_t ret2;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[19/*"stepOffset ...*/], p, ::STRINGS[20/*"/usr/local/...*/], 22, ::STRINGS[18/*"stepOffset"*/], NULL);
        return;
    }

    int32_t step = (::g::Fuse::Marshal__ToType_fn(::TYPES[25/*Fuse.Marshal.ToType<int>*/], uPtr(args)->Strong<uObject*>(0), &ret2), ret2);
    uPtr(uPtr(p)->_plot)->StepOffset(step);
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotArea.uno
// ---------------------------------------------------------------

// public sealed class PlotArea
// {
static void PlotArea_build(uType* type)
{
    ::STRINGS[21] = uString::Const("Parent must be an Element");
    ::STRINGS[22] = uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotArea.uno");
    ::STRINGS[23] = uString::Const("OnRooted");
    ::STRINGS[24] = uString::Const("Could not find PlotBehavior");
    ::TYPES[13] = ::g::Uno::Bool_typeof()->Array();
    ::TYPES[26] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[27] = ::g::Fuse::Elements::Element_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(18,
        ::g::Uno::Float2_typeof(), offsetof(PlotArea, _stepSize), 0,
        ::TYPES[13/*bool[]*/], offsetof(PlotArea, _hasStepSize), 0,
        ::TYPES[27/*Fuse.Elements.Element*/], offsetof(PlotArea, _parentElement), 0,
        ::g::Fuse::Charting::PlotBehavior_typeof(), offsetof(PlotArea, _plot), 0,
        ::g::Uno::Bool_typeof(), offsetof(PlotArea, _listenPlaced), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)PlotArea__New2_fn, 0, true, type, 0),
        new uFunction("get_XStepSize", NULL, (void*)PlotArea__get_XStepSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_XStepSize", NULL, (void*)PlotArea__set_XStepSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_YStepSize", NULL, (void*)PlotArea__get_YStepSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_YStepSize", NULL, (void*)PlotArea__set_YStepSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Node_type* PlotArea_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 23;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PlotArea);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Charting.PlotArea", options);
    type->fp_build_ = PlotArea_build;
    type->fp_ctor_ = (void*)PlotArea__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PlotArea__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PlotArea__OnUnrooted_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated PlotArea()
void PlotArea__ctor_3_fn(PlotArea* __this)
{
    __this->ctor_3();
}

// private void ListenPlaced(bool rooted)
void PlotArea__ListenPlaced_fn(PlotArea* __this, bool* rooted)
{
    __this->ListenPlaced(*rooted);
}

// public generated PlotArea New()
void PlotArea__New2_fn(PlotArea** __retval)
{
    *__retval = PlotArea::New2();
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args)
void PlotArea__OnPlaced_fn(PlotArea* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->OnPlaced(sender, args);
}

// protected override sealed void OnRooted()
void PlotArea__OnRooted_fn(PlotArea* __this)
{
    uStackFrame __("Fuse.Charting.PlotArea", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_parentElement = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[27/*Fuse.Elements.Element*/]);

    if (__this->_parentElement == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[21/*"Parent must...*/], __this, ::STRINGS[22/*"/usr/local/...*/], 53, ::STRINGS[23/*"OnRooted"*/], NULL);

    __this->_plot = ::g::Fuse::Charting::PlotBehavior::FindPlot(__this);

    if (__this->_plot == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[24/*"Could not f...*/], __this, ::STRINGS[22/*"/usr/local/...*/], 57, ::STRINGS[23/*"OnRooted"*/], NULL);

    __this->ListenPlaced(true);
    __this->Update();
}

// protected override sealed void OnUnrooted()
void PlotArea__OnUnrooted_fn(PlotArea* __this)
{
    uStackFrame __("Fuse.Charting.PlotArea", "OnUnrooted()");
    __this->ListenPlaced(false);
    __this->_parentElement = NULL;
    __this->_plot = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void Placed(float2 size)
void PlotArea__Placed_fn(PlotArea* __this, ::g::Uno::Float2* size)
{
    __this->Placed(*size);
}

// private void SetStepSize(int axis, float value)
void PlotArea__SetStepSize_fn(PlotArea* __this, int32_t* axis, float* value)
{
    __this->SetStepSize(*axis, *value);
}

// private void Update()
void PlotArea__Update_fn(PlotArea* __this)
{
    __this->Update();
}

// public float get_XStepSize()
void PlotArea__get_XStepSize_fn(PlotArea* __this, float* __retval)
{
    *__retval = __this->XStepSize();
}

// public void set_XStepSize(float value)
void PlotArea__set_XStepSize_fn(PlotArea* __this, float* value)
{
    __this->XStepSize(*value);
}

// public float get_YStepSize()
void PlotArea__get_YStepSize_fn(PlotArea* __this, float* __retval)
{
    *__retval = __this->YStepSize();
}

// public void set_YStepSize(float value)
void PlotArea__set_YStepSize_fn(PlotArea* __this, float* value)
{
    __this->YStepSize(*value);
}

// public generated PlotArea() [instance]
void PlotArea::ctor_3()
{
    _stepSize = ::g::Uno::Float2__New1(100.0f);
    _hasStepSize = uArray::New(::TYPES[13/*bool[]*/], 2);
    ctor_2();
}

// private void ListenPlaced(bool rooted) [instance]
void PlotArea::ListenPlaced(bool rooted)
{
    uStackFrame __("Fuse.Charting.PlotArea", "ListenPlaced(bool)");
    bool should = ((rooted && (uPtr(_hasStepSize)->Item<bool>(0) || uPtr(_hasStepSize)->Item<bool>(1))) && (_parentElement != NULL)) && (_plot != NULL);

    if (should == _listenPlaced)
        return;

    if (should)
        uPtr(_parentElement)->add_Placed(uDelegate::New(::TYPES[26/*Fuse.PlacedHandler*/], (void*)PlotArea__OnPlaced_fn, this));
    else
        uPtr(_parentElement)->remove_Placed(uDelegate::New(::TYPES[26/*Fuse.PlacedHandler*/], (void*)PlotArea__OnPlaced_fn, this));

    _listenPlaced = should;
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) [instance]
void PlotArea::OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    uStackFrame __("Fuse.Charting.PlotArea", "OnPlaced(object,Fuse.PlacedArgs)");

    if (_plot == NULL)
        return;

    Placed(uPtr(args)->NewSize());
}

// private void Placed(float2 size) [instance]
void PlotArea::Placed(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.Charting.PlotArea", "Placed(float2)");

    for (int32_t i = 0; i < 2; ++i)
    {
        if (!uPtr(_hasStepSize)->Item<bool>(i))
            continue;

        bool isX = uPtr(_plot)->GetAxisOrientation(i) == 1;
        float axisSize = isX ? size.X : size.Y;
        int32_t count = (int32_t)(axisSize / _stepSize.Item(i));
        count = ::g::Uno::Math::Max8(1, count);

        if (uPtr(_plot)->IsCountAxis(i))
            uPtr(_plot)->Limit(count);
        else
            uPtr(uPtr(_plot)->DataSpec())->SetAxisSteps(i, count);
    }
}

// private void SetStepSize(int axis, float value) [instance]
void PlotArea::SetStepSize(int32_t axis, float value)
{
    uStackFrame __("Fuse.Charting.PlotArea", "SetStepSize(int,float)");

    if ((_stepSize.Item(axis) == value) && uPtr(_hasStepSize)->Item<bool>(axis))
        return;

    _stepSize.Item(axis, value);
    uPtr(_hasStepSize)->Item<bool>(axis) = true;
    ListenPlaced(IsRootingCompleted());
    Update();
}

// private void Update() [instance]
void PlotArea::Update()
{
    uStackFrame __("Fuse.Charting.PlotArea", "Update()");

    if (_parentElement != NULL)
        Placed(uPtr(_parentElement)->ActualSize());
}

// public float get_XStepSize() [instance]
float PlotArea::XStepSize()
{
    uStackFrame __("Fuse.Charting.PlotArea", "get_XStepSize()");
    return _stepSize.Item(0);
}

// public void set_XStepSize(float value) [instance]
void PlotArea::XStepSize(float value)
{
    uStackFrame __("Fuse.Charting.PlotArea", "set_XStepSize(float)");
    SetStepSize(0, value);
}

// public float get_YStepSize() [instance]
float PlotArea::YStepSize()
{
    uStackFrame __("Fuse.Charting.PlotArea", "get_YStepSize()");
    return _stepSize.Item(1);
}

// public void set_YStepSize(float value) [instance]
void PlotArea::YStepSize(float value)
{
    uStackFrame __("Fuse.Charting.PlotArea", "set_YStepSize(float)");
    SetStepSize(1, value);
}

// public generated PlotArea New() [static]
PlotArea* PlotArea::New2()
{
    PlotArea* obj1 = (PlotArea*)uNew(PlotArea_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotAxis.uno
// ---------------------------------------------------------------

// public sealed class PlotAxis
// {
static void PlotAxis_build(uType* type)
{
    ::STRINGS[25] = uString::Const("Label");
    ::TYPES[24] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[28] = ::g::Fuse::Charting::DataChangedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[24/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(120,
        ::g::Fuse::Charting::PlotAxisData_typeof(), offsetof(PlotAxis, _each), 0,
        ::g::Fuse::Charting::PlotAxisLayout_typeof(), offsetof(PlotAxis, _layout1), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_Axis", NULL, (void*)PlotAxis__get_Axis_fn, 0, false, ::g::Fuse::Charting::PlotAxisLayoutAxis_typeof(), 0),
        new uFunction("set_Axis", NULL, (void*)PlotAxis__set_Axis_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotAxisLayoutAxis_typeof()),
        new uFunction("get_ContentPosition", NULL, (void*)PlotAxis__get_ContentPosition_fn, 0, false, ::g::Fuse::Charting::PlotAxisLayoutPosition_typeof(), 0),
        new uFunction("set_ContentPosition", NULL, (void*)PlotAxis__set_ContentPosition_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotAxisLayoutPosition_typeof()),
        new uFunction("get_ExcludeExtend", NULL, (void*)PlotAxis__get_ExcludeExtend_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ExcludeExtend", NULL, (void*)PlotAxis__set_ExcludeExtend_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Group", NULL, (void*)PlotAxis__get_Group_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Group", NULL, (void*)PlotAxis__set_Group_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)PlotAxis__New4_fn, 0, true, type, 0),
        new uFunction("get_SkipEnds", NULL, (void*)PlotAxis__get_SkipEnds_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_SkipEnds", NULL, (void*)PlotAxis__set_SkipEnds_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()));
}

::g::Fuse::Controls::Panel_type* PlotAxis_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 122;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(PlotAxis);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Charting.PlotAxis", options);
    type->fp_build_ = PlotAxis_build;
    type->fp_ctor_ = (void*)PlotAxis__New4_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PlotAxis__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PlotAxis__OnUnrooted_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public PlotAxis()
void PlotAxis__ctor_7_fn(PlotAxis* __this)
{
    __this->ctor_7();
}

// public Fuse.Charting.PlotAxisLayoutAxis get_Axis()
void PlotAxis__get_Axis_fn(PlotAxis* __this, int32_t* __retval)
{
    *__retval = __this->Axis();
}

// public void set_Axis(Fuse.Charting.PlotAxisLayoutAxis value)
void PlotAxis__set_Axis_fn(PlotAxis* __this, int32_t* value)
{
    __this->Axis(*value);
}

// public Fuse.Charting.PlotAxisLayoutPosition get_ContentPosition()
void PlotAxis__get_ContentPosition_fn(PlotAxis* __this, int32_t* __retval)
{
    *__retval = __this->ContentPosition();
}

// public void set_ContentPosition(Fuse.Charting.PlotAxisLayoutPosition value)
void PlotAxis__set_ContentPosition_fn(PlotAxis* __this, int32_t* value)
{
    __this->ContentPosition(*value);
}

// public bool get_ExcludeExtend()
void PlotAxis__get_ExcludeExtend_fn(PlotAxis* __this, bool* __retval)
{
    *__retval = __this->ExcludeExtend();
}

// public void set_ExcludeExtend(bool value)
void PlotAxis__set_ExcludeExtend_fn(PlotAxis* __this, bool* value)
{
    __this->ExcludeExtend(*value);
}

// public int get_Group()
void PlotAxis__get_Group_fn(PlotAxis* __this, int32_t* __retval)
{
    *__retval = __this->Group();
}

// public void set_Group(int value)
void PlotAxis__set_Group_fn(PlotAxis* __this, int32_t* value)
{
    __this->Group(*value);
}

// public PlotAxis New()
void PlotAxis__New4_fn(PlotAxis** __retval)
{
    *__retval = PlotAxis::New4();
}

// private void OnDataChanged(object s, Fuse.Charting.DataChangedArgs args)
void PlotAxis__OnDataChanged1_fn(PlotAxis* __this, uObject* s, ::g::Fuse::Charting::DataChangedArgs* args)
{
    __this->OnDataChanged1(s, args);
}

// protected override sealed void OnRooted()
void PlotAxis__OnRooted_fn(PlotAxis* __this)
{
    uStackFrame __("Fuse.Charting.PlotAxis", "OnRooted()");
    ::g::Fuse::Controls::Panel__OnRooted_fn(__this);

    if (uPtr(__this->_each)->Plot() != NULL)
        uPtr(uPtr(__this->_each)->Plot())->add_DataChanged(uDelegate::New(::TYPES[28/*Fuse.Charting.DataChangedHandler*/], (void*)PlotAxis__OnDataChanged1_fn, __this));
}

// protected override sealed void OnUnrooted()
void PlotAxis__OnUnrooted_fn(PlotAxis* __this)
{
    uStackFrame __("Fuse.Charting.PlotAxis", "OnUnrooted()");

    if (uPtr(__this->_each)->Plot() != NULL)
        uPtr(uPtr(__this->_each)->Plot())->remove_DataChanged(uDelegate::New(::TYPES[28/*Fuse.Charting.DataChangedHandler*/], (void*)PlotAxis__OnDataChanged1_fn, __this));

    ::g::Fuse::Controls::Panel__OnUnrooted_fn(__this);
}

// public int2 get_SkipEnds()
void PlotAxis__get_SkipEnds_fn(PlotAxis* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->SkipEnds();
}

// public void set_SkipEnds(int2 value)
void PlotAxis__set_SkipEnds_fn(PlotAxis* __this, ::g::Uno::Int2* value)
{
    __this->SkipEnds(*value);
}

// public PlotAxis() [instance]
void PlotAxis::ctor_7()
{
    uStackFrame __("Fuse.Charting.PlotAxis", ".ctor()");
    _each = ::g::Fuse::Charting::PlotAxisData::New4();
    _layout1 = ::g::Fuse::Charting::PlotAxisLayout::New2();
    ctor_6();
    Layout(_layout1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Node>*/]), _each);
    uPtr(_each)->TemplateKey(::STRINGS[25/*"Label"*/]);
    uPtr(_each)->TemplateSource((uObject*)this);
}

// public Fuse.Charting.PlotAxisLayoutAxis get_Axis() [instance]
int32_t PlotAxis::Axis()
{
    uStackFrame __("Fuse.Charting.PlotAxis", "get_Axis()");
    return uPtr(_each)->Axis();
}

// public void set_Axis(Fuse.Charting.PlotAxisLayoutAxis value) [instance]
void PlotAxis::Axis(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotAxis", "set_Axis(Fuse.Charting.PlotAxisLayoutAxis)");
    uPtr(_each)->Axis(value);
    uPtr(_layout1)->Axis(uPtr(_each)->Axis());
}

// public Fuse.Charting.PlotAxisLayoutPosition get_ContentPosition() [instance]
int32_t PlotAxis::ContentPosition()
{
    uStackFrame __("Fuse.Charting.PlotAxis", "get_ContentPosition()");
    return uPtr(_layout1)->ContentPosition();
}

// public void set_ContentPosition(Fuse.Charting.PlotAxisLayoutPosition value) [instance]
void PlotAxis::ContentPosition(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotAxis", "set_ContentPosition(Fuse.Charting.PlotAxisLayoutPosition)");
    uPtr(_layout1)->ContentPosition(value);
}

// public bool get_ExcludeExtend() [instance]
bool PlotAxis::ExcludeExtend()
{
    uStackFrame __("Fuse.Charting.PlotAxis", "get_ExcludeExtend()");
    return uPtr(_each)->ExcludeExtend();
}

// public void set_ExcludeExtend(bool value) [instance]
void PlotAxis::ExcludeExtend(bool value)
{
    uStackFrame __("Fuse.Charting.PlotAxis", "set_ExcludeExtend(bool)");
    uPtr(_each)->ExcludeExtend(value);
}

// public int get_Group() [instance]
int32_t PlotAxis::Group()
{
    uStackFrame __("Fuse.Charting.PlotAxis", "get_Group()");
    return uPtr(_each)->Group();
}

// public void set_Group(int value) [instance]
void PlotAxis::Group(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotAxis", "set_Group(int)");
    uPtr(_each)->Group(value);
    uPtr(_layout1)->Scale((float)uPtr(_each)->Group());
}

// private void OnDataChanged(object s, Fuse.Charting.DataChangedArgs args) [instance]
void PlotAxis::OnDataChanged1(uObject* s, ::g::Fuse::Charting::DataChangedArgs* args)
{
    uStackFrame __("Fuse.Charting.PlotAxis", "OnDataChanged(object,Fuse.Charting.DataChangedArgs)");

    if (uPtr(_each)->Plot() == NULL)
        return;

    uPtr(_layout1)->StepCount(uPtr(uPtr(uPtr(_each)->Plot())->PlotStats())->Steps.Item(uPtr(_each)->AxisIndex()));
    uPtr(_layout1)->Orientation(uPtr(uPtr(_each)->Plot())->GetAxisOrientation(Axis()));
    uPtr(_layout1)->ContentPositionBase((uPtr(uPtr(_each)->Plot())->AxisMetric(uPtr(_each)->AxisIndex()) == 1) ? 0.5f : 0.0f);
    InvalidateLayout(2);
}

// public int2 get_SkipEnds() [instance]
::g::Uno::Int2 PlotAxis::SkipEnds()
{
    uStackFrame __("Fuse.Charting.PlotAxis", "get_SkipEnds()");
    return uPtr(_each)->SkipEnds();
}

// public void set_SkipEnds(int2 value) [instance]
void PlotAxis::SkipEnds(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.Charting.PlotAxis", "set_SkipEnds(int2)");
    uPtr(_each)->SkipEnds(value);
}

// public PlotAxis New() [static]
PlotAxis* PlotAxis::New4()
{
    PlotAxis* obj1 = (PlotAxis*)uNew(PlotAxis_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotAxis.uno
// ---------------------------------------------------------------

// public sealed class PlotAxisData
// {
static void PlotAxisData_build(uType* type)
{
    ::STRINGS[26] = uString::Const("Requires Axis");
    ::STRINGS[27] = uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotAxis.uno");
    ::STRINGS[23] = uString::Const("OnRooted");
    ::STRINGS[24] = uString::Const("Could not find PlotBehavior");
    ::TYPES[28] = ::g::Fuse::Charting::DataChangedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotAxisData_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(PlotAxisData_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(PlotAxisData_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(PlotAxisData_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(PlotAxisData_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotAxisData_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotAxisData_type, interface6),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(PlotAxisData_type, interface7),
        ::g::Fuse::IDeferred_typeof(), offsetof(PlotAxisData_type, interface8),
        ::g::Fuse::Reactive::ItemsWindowList__IListener_typeof()->MakeType(::g::Fuse::Reactive::WindowItem_typeof(), NULL), offsetof(PlotAxisData_type, interface9),
        ::g::Fuse::Charting::IPlotDataItemProvider_typeof(), offsetof(PlotAxisData_type, interface10));
    type->SetFields(39,
        ::g::Fuse::Charting::PlotBehavior_typeof(), offsetof(PlotAxisData, _plot), 0,
        ::g::Fuse::Charting::LabelFilterObservable_typeof(), offsetof(PlotAxisData, _obsFilter), 0,
        ::g::Fuse::Charting::AxisFilter_typeof(), offsetof(PlotAxisData, _filter), 0,
        ::g::Uno::Bool_typeof(), offsetof(PlotAxisData, _hasAxis), 0,
        ::g::Fuse::Charting::PlotAxisLayoutAxis_typeof(), offsetof(PlotAxisData, _axis), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Axis", NULL, (void*)PlotAxisData__get_Axis_fn, 0, false, ::g::Fuse::Charting::PlotAxisLayoutAxis_typeof(), 0),
        new uFunction("set_Axis", NULL, (void*)PlotAxisData__set_Axis_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotAxisLayoutAxis_typeof()),
        new uFunction("get_ExcludeExtend", NULL, (void*)PlotAxisData__get_ExcludeExtend_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ExcludeExtend", NULL, (void*)PlotAxisData__set_ExcludeExtend_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Group", NULL, (void*)PlotAxisData__get_Group_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Group", NULL, (void*)PlotAxisData__set_Group_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)PlotAxisData__New4_fn, 0, true, type, 0),
        new uFunction("get_SkipEnds", NULL, (void*)PlotAxisData__get_SkipEnds_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_SkipEnds", NULL, (void*)PlotAxisData__set_SkipEnds_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()));
}

PlotAxisData_type* PlotAxisData_typeof()
{
    static uSStrong<PlotAxisData_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Instantiator_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(PlotAxisData);
    options.TypeSize = sizeof(PlotAxisData_type);
    type = (PlotAxisData_type*)uClassType::New("Fuse.Charting.PlotAxisData", options);
    type->fp_build_ = PlotAxisData_build;
    type->fp_ctor_ = (void*)PlotAxisData__New4_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PlotAxisData__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PlotAxisData__OnUnrooted_fn;
    type->interface9.fp_SetValid = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerSetValid_fn;
    type->interface9.fp_SetFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerSetFailed_fn;
    type->interface7.fp_TryGetDataProvider = (void(*)(uObject*, ::g::Fuse::Node*, int32_t*, uObject**, int32_t*))::g::Fuse::Reactive::Instantiator__FuseNodeISubtreeDataProviderTryGetDataProvider_fn;
    type->interface9.fp_AddedWindowItem = (void(*)(uObject*, int32_t*, ::g::Fuse::Reactive::WindowListItem*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerAddedWindowItem_fn;
    type->interface8.fp_Perform = (void(*)(uObject*, bool*))::g::Fuse::Reactive::Instantiator__FuseIDeferredPerform_fn;
    type->interface9.fp_RemovedWindowItem = (void(*)(uObject*, ::g::Fuse::Reactive::WindowListItem*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerRemovedWindowItem_fn;
    type->interface9.fp_OnCurrentDataChanged = (void(*)(uObject*, ::g::Fuse::Reactive::WindowListItem*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerOnCurrentDataChanged_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated PlotAxisData()
void PlotAxisData__ctor_5_fn(PlotAxisData* __this)
{
    __this->ctor_5();
}

// public Fuse.Charting.PlotAxisLayoutAxis get_Axis()
void PlotAxisData__get_Axis_fn(PlotAxisData* __this, int32_t* __retval)
{
    *__retval = __this->Axis();
}

// public void set_Axis(Fuse.Charting.PlotAxisLayoutAxis value)
void PlotAxisData__set_Axis_fn(PlotAxisData* __this, int32_t* value)
{
    __this->Axis(*value);
}

// internal int get_AxisIndex()
void PlotAxisData__get_AxisIndex_fn(PlotAxisData* __this, int32_t* __retval)
{
    *__retval = __this->AxisIndex();
}

// public bool get_ExcludeExtend()
void PlotAxisData__get_ExcludeExtend_fn(PlotAxisData* __this, bool* __retval)
{
    *__retval = __this->ExcludeExtend();
}

// public void set_ExcludeExtend(bool value)
void PlotAxisData__set_ExcludeExtend_fn(PlotAxisData* __this, bool* value)
{
    __this->ExcludeExtend(*value);
}

// public int get_Group()
void PlotAxisData__get_Group_fn(PlotAxisData* __this, int32_t* __retval)
{
    *__retval = __this->Group();
}

// public void set_Group(int value)
void PlotAxisData__set_Group_fn(PlotAxisData* __this, int32_t* value)
{
    __this->Group(*value);
}

// public generated PlotAxisData New()
void PlotAxisData__New4_fn(PlotAxisData** __retval)
{
    *__retval = PlotAxisData::New4();
}

// private void OnDataChanged(object s, Fuse.Charting.DataChangedArgs args)
void PlotAxisData__OnDataChanged1_fn(PlotAxisData* __this, uObject* s, ::g::Fuse::Charting::DataChangedArgs* args)
{
    __this->OnDataChanged1(s, args);
}

// protected override sealed void OnRooted()
void PlotAxisData__OnRooted_fn(PlotAxisData* __this)
{
    uStackFrame __("Fuse.Charting.PlotAxisData", "OnRooted()");
    ::g::Fuse::Charting::LabelFilterObservable* collection1;
    ::g::Fuse::Reactive::Instantiator__OnRooted_fn(__this);

    if (!__this->_hasAxis)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[26/*"Requires Axis"*/], __this, ::STRINGS[27/*"/usr/local/...*/], 32, ::STRINGS[23/*"OnRooted"*/], NULL);

    __this->_plot = ::g::Fuse::Charting::PlotBehavior::FindPlot(__this);

    if (__this->_plot == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[24/*"Could not f...*/], __this, ::STRINGS[27/*"/usr/local/...*/], 37, ::STRINGS[23/*"OnRooted"*/], NULL);
    else
    {
        uPtr(__this->_filter)->Plot = __this->_plot;
        uPtr(__this->_plot)->add_DataChanged(uDelegate::New(::TYPES[28/*Fuse.Charting.DataChangedHandler*/], (void*)PlotAxisData__OnDataChanged1_fn, __this));
        uObject* sourceItems = uPtr(__this->_plot)->GetAxisItems(__this->Axis());
        __this->_obsFilter = (collection1 = ::g::Fuse::Charting::LabelFilterObservable::New1(), uPtr(collection1)->Filter = __this->_filter, uPtr(collection1)->Source(sourceItems), sourceItems, collection1);
        __this->UpdateFilter();
        __this->SetItemsDerivedRooting(__this->_obsFilter);
    }
}

// protected override sealed void OnUnrooted()
void PlotAxisData__OnUnrooted_fn(PlotAxisData* __this)
{
    uStackFrame __("Fuse.Charting.PlotAxisData", "OnUnrooted()");

    if (__this->_plot != NULL)
    {
        uPtr(__this->_plot)->remove_DataChanged(uDelegate::New(::TYPES[28/*Fuse.Charting.DataChangedHandler*/], (void*)PlotAxisData__OnDataChanged1_fn, __this));
        __this->SetItems(NULL);
        __this->_obsFilter = NULL;
        __this->_plot = NULL;
        uPtr(__this->_filter)->Plot = NULL;
    }

    ::g::Fuse::Reactive::Instantiator__OnUnrooted_fn(__this);
}

// internal Fuse.Charting.PlotBehavior get_Plot()
void PlotAxisData__get_Plot_fn(PlotAxisData* __this, ::g::Fuse::Charting::PlotBehavior** __retval)
{
    *__retval = __this->Plot();
}

// public int2 get_SkipEnds()
void PlotAxisData__get_SkipEnds_fn(PlotAxisData* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->SkipEnds();
}

// public void set_SkipEnds(int2 value)
void PlotAxisData__set_SkipEnds_fn(PlotAxisData* __this, ::g::Uno::Int2* value)
{
    __this->SkipEnds(*value);
}

// private void UpdateFilter()
void PlotAxisData__UpdateFilter_fn(PlotAxisData* __this)
{
    __this->UpdateFilter();
}

// public generated PlotAxisData() [instance]
void PlotAxisData::ctor_5()
{
    uStackFrame __("Fuse.Charting.PlotAxisData", ".ctor()");
    _filter = ::g::Fuse::Charting::AxisFilter::New1();
    ctor_3();
}

// public Fuse.Charting.PlotAxisLayoutAxis get_Axis() [instance]
int32_t PlotAxisData::Axis()
{
    return _axis;
}

// public void set_Axis(Fuse.Charting.PlotAxisLayoutAxis value) [instance]
void PlotAxisData::Axis(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotAxisData", "set_Axis(Fuse.Charting.PlotAxisLayoutAxis)");

    if ((_axis == value) && _hasAxis)
        return;

    _hasAxis = true;
    _axis = value;
    UpdateFilter();
}

// internal int get_AxisIndex() [instance]
int32_t PlotAxisData::AxisIndex()
{
    return (Axis() == 0) ? 0 : 1;
}

// public bool get_ExcludeExtend() [instance]
bool PlotAxisData::ExcludeExtend()
{
    uStackFrame __("Fuse.Charting.PlotAxisData", "get_ExcludeExtend()");
    return uPtr(_filter)->ExcludeExtend();
}

// public void set_ExcludeExtend(bool value) [instance]
void PlotAxisData::ExcludeExtend(bool value)
{
    uStackFrame __("Fuse.Charting.PlotAxisData", "set_ExcludeExtend(bool)");

    if (uPtr(_filter)->SetExcludeExtend(value))
        UpdateFilter();
}

// public int get_Group() [instance]
int32_t PlotAxisData::Group()
{
    uStackFrame __("Fuse.Charting.PlotAxisData", "get_Group()");
    return uPtr(_filter)->Group();
}

// public void set_Group(int value) [instance]
void PlotAxisData::Group(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotAxisData", "set_Group(int)");

    if (uPtr(_filter)->SetGroup(value))
        UpdateFilter();
}

// private void OnDataChanged(object s, Fuse.Charting.DataChangedArgs args) [instance]
void PlotAxisData::OnDataChanged1(uObject* s, ::g::Fuse::Charting::DataChangedArgs* args)
{
    uStackFrame __("Fuse.Charting.PlotAxisData", "OnDataChanged(object,Fuse.Charting.DataChangedArgs)");
    uPtr(_obsFilter)->Update();
}

// internal Fuse.Charting.PlotBehavior get_Plot() [instance]
::g::Fuse::Charting::PlotBehavior* PlotAxisData::Plot()
{
    return _plot;
}

// public int2 get_SkipEnds() [instance]
::g::Uno::Int2 PlotAxisData::SkipEnds()
{
    uStackFrame __("Fuse.Charting.PlotAxisData", "get_SkipEnds()");
    return uPtr(_filter)->SkipEnds();
}

// public void set_SkipEnds(int2 value) [instance]
void PlotAxisData::SkipEnds(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.Charting.PlotAxisData", "set_SkipEnds(int2)");

    if (uPtr(_filter)->SetSkipEnds(value))
        UpdateFilter();
}

// private void UpdateFilter() [instance]
void PlotAxisData::UpdateFilter()
{
    uStackFrame __("Fuse.Charting.PlotAxisData", "UpdateFilter()");

    if ((_obsFilter == NULL) || (_plot == NULL))
        return;

    uPtr(_filter)->IsCountAxis = uPtr(_plot)->IsCountAxis(AxisIndex());
    uPtr(_obsFilter)->Update();
}

// public generated PlotAxisData New() [static]
PlotAxisData* PlotAxisData::New4()
{
    PlotAxisData* obj2 = (PlotAxisData*)uNew(PlotAxisData_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotAxisLayout.uno
// ---------------------------------------------------------------------

// public sealed class PlotAxisLayout
// {
static void PlotAxisLayout_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Charting::PlotAxisLayoutAxis_typeof(), offsetof(PlotAxisLayout, _axis), 0,
        ::g::Fuse::Charting::PlotAxisLayoutPosition_typeof(), offsetof(PlotAxisLayout, _position), 0,
        ::g::Uno::Int_typeof(), offsetof(PlotAxisLayout, _stepCount), 0,
        ::g::Fuse::Charting::PlotOrientation_typeof(), offsetof(PlotAxisLayout, _orientation), 0,
        ::g::Uno::Float_typeof(), offsetof(PlotAxisLayout, _positionBase), 0,
        ::g::Uno::Float_typeof(), offsetof(PlotAxisLayout, _scale), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_Axis", NULL, (void*)PlotAxisLayout__get_Axis_fn, 0, false, ::g::Fuse::Charting::PlotAxisLayoutAxis_typeof(), 0),
        new uFunction("set_Axis", NULL, (void*)PlotAxisLayout__set_Axis_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotAxisLayoutAxis_typeof()),
        new uFunction("get_ContentPosition", NULL, (void*)PlotAxisLayout__get_ContentPosition_fn, 0, false, ::g::Fuse::Charting::PlotAxisLayoutPosition_typeof(), 0),
        new uFunction("set_ContentPosition", NULL, (void*)PlotAxisLayout__set_ContentPosition_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotAxisLayoutPosition_typeof()),
        new uFunction("get_ContentPositionBase", NULL, (void*)PlotAxisLayout__get_ContentPositionBase_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ContentPositionBase", NULL, (void*)PlotAxisLayout__set_ContentPositionBase_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)PlotAxisLayout__New2_fn, 0, true, type, 0),
        new uFunction("get_Orientation", NULL, (void*)PlotAxisLayout__get_Orientation_fn, 0, false, ::g::Fuse::Charting::PlotOrientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)PlotAxisLayout__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotOrientation_typeof()),
        new uFunction("get_Scale", NULL, (void*)PlotAxisLayout__get_Scale_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Scale", NULL, (void*)PlotAxisLayout__set_Scale_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_StepCount", NULL, (void*)PlotAxisLayout__get_StepCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_StepCount", NULL, (void*)PlotAxisLayout__set_StepCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
}

::g::Fuse::Layouts::Layout_type* PlotAxisLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PlotAxisLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Charting.PlotAxisLayout", options);
    type->fp_build_ = PlotAxisLayout_build;
    type->fp_ctor_ = (void*)PlotAxisLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))PlotAxisLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))PlotAxisLayout__GetContentSize_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// public generated PlotAxisLayout()
void PlotAxisLayout__ctor_2_fn(PlotAxisLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp)
void PlotAxisLayout__ArrangePaddingBox_fn(PlotAxisLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Charting.PlotAxisLayout", "ArrangePaddingBox(Fuse.Visual,float4,Fuse.LayoutParams)");
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (::g::Uno::Float4__op_Inequality(padding_, ::g::Uno::Float4__New1(0.0f)))
        ::g::Fuse::Diagnostics::UserWarning(uString::Const("PlotAxisLayout does not support the `Padding` property"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotAxisLayout.uno"), 184, uString::Const("ArrangePaddingBox"));

    PlotAxisLayout__CellSizing cs = __this->CellSize(lp_);
    float dataOffset = __this->ContentPositionBase();
    ::g::Uno::Float2 posOffset = (__this->ContentPosition() == 0) ? ::g::Uno::Float2__op_UnaryNegation(::g::Uno::Math::Abs2(::g::Uno::Float2__op_Division1(cs.Step, 2.0f))) : ::g::Uno::Float2__New1(0.0f);
    int32_t c = 0;

    for (::g::Fuse::Visual* n = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[37/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::TYPES[37/*Fuse.Visual*/], NULL)); n != NULL; n = (::g::Fuse::Visual*)uPtr(n)->NextSibling(::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::TYPES[37/*Fuse.Visual*/], NULL)))
    {
        if (__this->ArrangeMarginBoxSpecial(n, padding_, lp_))
            continue;

        int32_t axisIndex = c;
        ::g::Fuse::Charting::AxisEntry* axisEntry = __this->GetNodeAxisEntry(n);

        if (axisEntry != NULL)
            axisIndex = uPtr(axisEntry)->ScreenIndex();

        uPtr(n)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply((float)axisIndex + dataOffset, cs.Step), posOffset), cs.Origin), cs.LP);
        c++;
    }
}

// public Fuse.Charting.PlotAxisLayoutAxis get_Axis()
void PlotAxisLayout__get_Axis_fn(PlotAxisLayout* __this, int32_t* __retval)
{
    *__retval = __this->Axis();
}

// public void set_Axis(Fuse.Charting.PlotAxisLayoutAxis value)
void PlotAxisLayout__set_Axis_fn(PlotAxisLayout* __this, int32_t* value)
{
    __this->Axis(*value);
}

// private Fuse.Charting.PlotAxisLayout.CellSizing CellSize(Fuse.LayoutParams lp)
void PlotAxisLayout__CellSize_fn(PlotAxisLayout* __this, ::g::Fuse::LayoutParams* lp, PlotAxisLayout__CellSizing* __retval)
{
    *__retval = __this->CellSize(*lp);
}

// public Fuse.Charting.PlotAxisLayoutPosition get_ContentPosition()
void PlotAxisLayout__get_ContentPosition_fn(PlotAxisLayout* __this, int32_t* __retval)
{
    *__retval = __this->ContentPosition();
}

// public void set_ContentPosition(Fuse.Charting.PlotAxisLayoutPosition value)
void PlotAxisLayout__set_ContentPosition_fn(PlotAxisLayout* __this, int32_t* value)
{
    __this->ContentPosition(*value);
}

// public float get_ContentPositionBase()
void PlotAxisLayout__get_ContentPositionBase_fn(PlotAxisLayout* __this, float* __retval)
{
    *__retval = __this->ContentPositionBase();
}

// public void set_ContentPositionBase(float value)
void PlotAxisLayout__set_ContentPositionBase_fn(PlotAxisLayout* __this, float* value)
{
    __this->ContentPositionBase(*value);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp)
void PlotAxisLayout__GetContentSize_fn(PlotAxisLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Charting.PlotAxisLayout", "GetContentSize(Fuse.Visual,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    PlotAxisLayout__CellSizing cs = __this->CellSize(lp_);
    ::g::Uno::Float2 max = ::g::Uno::Float2__New1(0.0f);
    int32_t count = 0;

    for (::g::Fuse::Visual* n = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[37/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::TYPES[37/*Fuse.Visual*/], NULL)); n != NULL; n = (::g::Fuse::Visual*)uPtr(n)->NextSibling(::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::TYPES[37/*Fuse.Visual*/], NULL)))
    {
        if (!__this->AffectsLayout(n))
            continue;

        ::g::Uno::Float2 sz = uPtr(n)->GetMarginSize(cs.LP);
        max = ::g::Uno::Math::Max3(sz, max);
        count++;
    }

    if (cs.IsVert)
        max.Y = (max.Y * (float)count);
    else
        max.X = (max.X * (float)count);

    return *__retval = max, void();
}

// private Fuse.Charting.AxisEntry GetNodeAxisEntry(Fuse.Node n)
void PlotAxisLayout__GetNodeAxisEntry_fn(PlotAxisLayout* __this, ::g::Fuse::Node* n, ::g::Fuse::Charting::AxisEntry** __retval)
{
    *__retval = __this->GetNodeAxisEntry(n);
}

// public generated PlotAxisLayout New()
void PlotAxisLayout__New2_fn(PlotAxisLayout** __retval)
{
    *__retval = PlotAxisLayout::New2();
}

// public Fuse.Charting.PlotOrientation get_Orientation()
void PlotAxisLayout__get_Orientation_fn(PlotAxisLayout* __this, int32_t* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Charting.PlotOrientation value)
void PlotAxisLayout__set_Orientation_fn(PlotAxisLayout* __this, int32_t* value)
{
    __this->Orientation(*value);
}

// public float get_Scale()
void PlotAxisLayout__get_Scale_fn(PlotAxisLayout* __this, float* __retval)
{
    *__retval = __this->Scale();
}

// public void set_Scale(float value)
void PlotAxisLayout__set_Scale_fn(PlotAxisLayout* __this, float* value)
{
    __this->Scale(*value);
}

// public int get_StepCount()
void PlotAxisLayout__get_StepCount_fn(PlotAxisLayout* __this, int32_t* __retval)
{
    *__retval = __this->StepCount();
}

// public void set_StepCount(int value)
void PlotAxisLayout__set_StepCount_fn(PlotAxisLayout* __this, int32_t* value)
{
    __this->StepCount(*value);
}

// public generated PlotAxisLayout() [instance]
void PlotAxisLayout::ctor_2()
{
    _scale = 1.0f;
    ctor_1();
}

// public Fuse.Charting.PlotAxisLayoutAxis get_Axis() [instance]
int32_t PlotAxisLayout::Axis()
{
    return _axis;
}

// public void set_Axis(Fuse.Charting.PlotAxisLayoutAxis value) [instance]
void PlotAxisLayout::Axis(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotAxisLayout", "set_Axis(Fuse.Charting.PlotAxisLayoutAxis)");

    if (_axis == value)
        return;

    _axis = value;
    InvalidateLayout();
}

// private Fuse.Charting.PlotAxisLayout.CellSizing CellSize(Fuse.LayoutParams lp) [instance]
PlotAxisLayout__CellSizing PlotAxisLayout::CellSize(::g::Fuse::LayoutParams lp)
{
    PlotAxisLayout__CellSizing collection1;
    ::g::Fuse::LayoutParams nlp = lp.CloneAndDerive();
    int32_t count = StepCount();
    ::g::Uno::Float2 step = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 origin = ::g::Uno::Float2__New1(0.0f);
    bool isVert = Orientation() == 2;

    if (isVert)
    {
        float sz = nlp.Size().Y / (float)count;
        step.Y = -sz;
        nlp.SetY(sz * Scale());
        origin = ::g::Uno::Float2__New2(0.0f, lp.Size().Y);
    }
    else
    {
        step.X = (nlp.Size().X / (float)count);
        nlp.SetX(step.X * Scale());
    }

    collection1 = uDefault<PlotAxisLayout__CellSizing>();
    collection1.LP = nlp;
    collection1.Step = step;
    collection1.Origin = origin;
    collection1.IsVert = isVert;
    return collection1;
}

// public Fuse.Charting.PlotAxisLayoutPosition get_ContentPosition() [instance]
int32_t PlotAxisLayout::ContentPosition()
{
    return _position;
}

// public void set_ContentPosition(Fuse.Charting.PlotAxisLayoutPosition value) [instance]
void PlotAxisLayout::ContentPosition(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotAxisLayout", "set_ContentPosition(Fuse.Charting.PlotAxisLayoutPosition)");

    if (_position == value)
        return;

    _position = value;
    InvalidateLayout();
}

// public float get_ContentPositionBase() [instance]
float PlotAxisLayout::ContentPositionBase()
{
    return _positionBase;
}

// public void set_ContentPositionBase(float value) [instance]
void PlotAxisLayout::ContentPositionBase(float value)
{
    uStackFrame __("Fuse.Charting.PlotAxisLayout", "set_ContentPositionBase(float)");

    if (_positionBase == value)
        return;

    _positionBase = value;
    InvalidateLayout();
}

// private Fuse.Charting.AxisEntry GetNodeAxisEntry(Fuse.Node n) [instance]
::g::Fuse::Charting::AxisEntry* PlotAxisLayout::GetNodeAxisEntry(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Charting.PlotAxisLayout", "GetNodeAxisEntry(Fuse.Node)");
    uObject* provider = uAs<uObject*>(uPtr(n)->ContextParent(), ::TYPES[45/*Fuse.Node.ISubtreeDataProvider*/]);

    if (n == NULL)
        return NULL;

    uObject* o;
    ::g::Fuse::Node__ISubtreeDataProvider::TryGetDataProvider(uInterface(uPtr(provider), ::TYPES[45/*Fuse.Node.ISubtreeDataProvider*/]), n, 1, &o);
    return uAs< ::g::Fuse::Charting::AxisEntry*>(o, ::TYPES[2/*Fuse.Charting.AxisEntry*/]);
}

// public Fuse.Charting.PlotOrientation get_Orientation() [instance]
int32_t PlotAxisLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Charting.PlotOrientation value) [instance]
void PlotAxisLayout::Orientation(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotAxisLayout", "set_Orientation(Fuse.Charting.PlotOrientation)");

    if (_orientation == value)
        return;

    _orientation = value;
    InvalidateLayout();
}

// public float get_Scale() [instance]
float PlotAxisLayout::Scale()
{
    return _scale;
}

// public void set_Scale(float value) [instance]
void PlotAxisLayout::Scale(float value)
{
    uStackFrame __("Fuse.Charting.PlotAxisLayout", "set_Scale(float)");

    if (_scale == value)
        return;

    _scale = value;
    InvalidateLayout();
}

// public int get_StepCount() [instance]
int32_t PlotAxisLayout::StepCount()
{
    return _stepCount;
}

// public void set_StepCount(int value) [instance]
void PlotAxisLayout::StepCount(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotAxisLayout", "set_StepCount(int)");

    if (_stepCount == value)
        return;

    _stepCount = ::g::Uno::Math::Max8(1, value);
    InvalidateLayout();
}

// public generated PlotAxisLayout New() [static]
PlotAxisLayout* PlotAxisLayout::New2()
{
    PlotAxisLayout* obj2 = (PlotAxisLayout*)uNew(PlotAxisLayout_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotAxisLayout.uno
// ---------------------------------------------------------------------

// public enum PlotAxisLayoutAxis
uEnumType* PlotAxisLayoutAxis_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Charting.PlotAxisLayoutAxis", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "X", 0LL,
        "Y", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotAxisLayout.uno
// ---------------------------------------------------------------------

// public enum PlotAxisLayoutPosition
uEnumType* PlotAxisLayoutPosition_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Charting.PlotAxisLayoutPosition", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Cell", 0LL,
        "Anchor", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/DataStats.uno
// ----------------------------------------------------------------

// public enum PlotAxisMetric
uEnumType* PlotAxisMetric_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Charting.PlotAxisMetric", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Count", 0LL,
        "OffsetCount", 1LL,
        "Range", 2LL,
        "MergeRange", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBar.uno
// --------------------------------------------------------------

// public sealed class PlotBar
// {
static void PlotBar_build(uType* type)
{
    ::STRINGS[28] = uString::Const("Expecting Unit=\"Normalized\" for attractor");
    ::STRINGS[29] = uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBar.uno");
    ::STRINGS[30] = uString::Const("set_Attractor");
    ::TYPES[29] = ::g::Fuse::Animations::DestinationBehavior_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[30] = ::g::Fuse::Animations::DestinationBehavior_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[31] = ::g::Fuse::Animations::DestinationBehavior__ValueHandler_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[32] = ::g::Fuse::Animations::DestinationBehavior__ValueHandler_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[33] = ::g::Fuse::Animations::AttractorConfig_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface18),
        ::g::Fuse::Charting::IPlotDataItemListener_typeof()->MakeType(::g::Fuse::Charting::PlotDataPoint_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface19));
    type->SetFields(121,
        ::g::Fuse::Charting::PlotBarStyle_typeof(), offsetof(PlotBar, _style), 0,
        ::TYPES[29/*Fuse.Animations.DestinationBehavior<float4>*/], offsetof(PlotBar, _animPosition), 0,
        ::TYPES[30/*Fuse.Animations.DestinationBehavior<float2>*/], offsetof(PlotBar, _animSize), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Attractor", NULL, (void*)PlotBar__get_Attractor_fn, 0, false, ::TYPES[33/*Fuse.Animations.AttractorConfig*/], 0),
        new uFunction("set_Attractor", NULL, (void*)PlotBar__set_Attractor_fn, 0, false, uVoid_typeof(), 1, ::TYPES[33/*Fuse.Animations.AttractorConfig*/]),
        new uFunction(".ctor", NULL, (void*)PlotBar__New4_fn, 0, true, type, 0),
        new uFunction("get_Style", NULL, (void*)PlotBar__get_Style_fn, 0, false, ::g::Fuse::Charting::PlotBarStyle_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)PlotBar__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotBarStyle_typeof()));
}

::g::Fuse::Charting::PlotElement_type* PlotBar_typeof()
{
    static uSStrong< ::g::Fuse::Charting::PlotElement_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Charting::PlotElement_typeof();
    options.FieldCount = 124;
    options.InterfaceCount = 20;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PlotBar);
    options.TypeSize = sizeof(::g::Fuse::Charting::PlotElement_type);
    type = (::g::Fuse::Charting::PlotElement_type*)uClassType::New("Fuse.Charting.PlotBar", options);
    type->fp_build_ = PlotBar_build;
    type->fp_ctor_ = (void*)PlotBar__New4_fn;
    type->fp_OnDataPointChanged = (void(*)(::g::Fuse::Charting::PlotElement*, ::g::Fuse::Charting::PlotDataPoint*))PlotBar__OnDataPointChanged_fn;
    type->interface19.fp_OnNewData = (void(*)(uObject*, void*))::g::Fuse::Charting::PlotElement__FuseChartingIPlotDataItemListenerFuseChartingPlotDataPointOnNewData_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated PlotBar()
void PlotBar__ctor_8_fn(PlotBar* __this)
{
    __this->ctor_8();
}

// private void AnimPosition(float4 value)
void PlotBar__AnimPosition_fn(PlotBar* __this, ::g::Uno::Float4* value)
{
    __this->AnimPosition(*value);
}

// private void AnimSize(float2 value)
void PlotBar__AnimSize_fn(PlotBar* __this, ::g::Uno::Float2* value)
{
    __this->AnimSize(*value);
}

// public Fuse.Animations.AttractorConfig get_Attractor()
void PlotBar__get_Attractor_fn(PlotBar* __this, ::g::Fuse::Animations::AttractorConfig** __retval)
{
    *__retval = __this->Attractor();
}

// public void set_Attractor(Fuse.Animations.AttractorConfig value)
void PlotBar__set_Attractor_fn(PlotBar* __this, ::g::Fuse::Animations::AttractorConfig* value)
{
    __this->Attractor(value);
}

// public generated PlotBar New()
void PlotBar__New4_fn(PlotBar** __retval)
{
    *__retval = PlotBar::New4();
}

// internal override sealed void OnDataPointChanged(Fuse.Charting.PlotDataPoint entry)
void PlotBar__OnDataPointChanged_fn(PlotBar* __this, ::g::Fuse::Charting::PlotDataPoint* entry)
{
    uStackFrame __("Fuse.Charting.PlotBar", "OnDataPointChanged(Fuse.Charting.PlotDataPoint)");
    ::g::Uno::Float4 relValue = uPtr(entry)->RelativeValue();
    bool isVert = uPtr(entry->Plot)->GetAxisOrientation(0) == 2;
    float barWidth = 1.0f / entry->Count();
    float barValue = 0.0f, barBase = 0.0f;

    switch (__this->Style())
    {
        case 0:
        {
            barValue = relValue.Y - uPtr(uPtr(uPtr(entry)->Plot)->PlotStats())->Baseline().Y;
            barBase = uPtr(uPtr(entry->Plot)->PlotStats())->Baseline().Y;
            break;
        }
        case 1:
        {
            barValue = relValue.Y - relValue.Z;
            barBase = relValue.Z;
            break;
        }
        case 2:
        {
            barValue = 1.0f;
            barBase = 0.0f;
            break;
        }
    }

    float barEnd = barBase + barValue;
    float primeAnchor = (isVert ? barEnd < barBase : barEnd > barBase) ? 1.0f : 0.0f;
    float secondAnchor = 0.5f;
    float axisBase = relValue.X;
    float nX, nY, nHeight, nWidth;
    ::g::Uno::Float2 nAnchor;

    if (isVert)
    {
        nX = barBase;
        nY = 1.0f - axisBase;
        nHeight = barWidth;
        nWidth = ::g::Uno::Math::Abs1(barValue);
        nAnchor = ::g::Uno::Float2__New2(primeAnchor, secondAnchor);
    }
    else
    {
        nX = axisBase;
        nY = 1.0f - barBase;
        nHeight = ::g::Uno::Math::Abs1(barValue);
        nWidth = barWidth;
        nAnchor = ::g::Uno::Float2__New2(secondAnchor, primeAnchor);
    }

    ::g::Fuse::Animations::DestinationBehavior__SetValue_fn(uPtr(__this->_animPosition), uCRef(::g::Uno::Float4__New2(nX, nY, nAnchor.X, nAnchor.Y)), uDelegate::New(::TYPES[31/*Fuse.Animations.DestinationBehavior<float4>.ValueHandler*/], (void*)PlotBar__AnimPosition_fn, __this));
    ::g::Fuse::Animations::DestinationBehavior__SetValue_fn(uPtr(__this->_animSize), uCRef(::g::Uno::Float2__New2(nWidth, nHeight)), uDelegate::New(::TYPES[32/*Fuse.Animations.DestinationBehavior<float2>.ValueHandler*/], (void*)PlotBar__AnimSize_fn, __this));
}

// public Fuse.Charting.PlotBarStyle get_Style()
void PlotBar__get_Style_fn(PlotBar* __this, int32_t* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Fuse.Charting.PlotBarStyle value)
void PlotBar__set_Style_fn(PlotBar* __this, int32_t* value)
{
    __this->Style(*value);
}

// public generated PlotBar() [instance]
void PlotBar::ctor_8()
{
    _animPosition = ((::g::Fuse::Animations::DestinationBehavior*)::g::Fuse::Animations::DestinationBehavior::New1(::TYPES[29/*Fuse.Animations.DestinationBehavior<float4>*/]));
    _animSize = ((::g::Fuse::Animations::DestinationBehavior*)::g::Fuse::Animations::DestinationBehavior::New1(::TYPES[30/*Fuse.Animations.DestinationBehavior<float2>*/]));
    ctor_7();
}

// private void AnimPosition(float4 value) [instance]
void PlotBar::AnimPosition(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Charting.PlotBar", "AnimPosition(float4)");
    X(::g::Uno::UX::Size__New1(value.Item(0) * 100.0f, 4));
    Y(::g::Uno::UX::Size__New1(value.Item(1) * 100.0f, 4));
    Anchor(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(value.Item(2) * 100.0f, 4), ::g::Uno::UX::Size__New1(value.Item(3) * 100.0f, 4)));
}

// private void AnimSize(float2 value) [instance]
void PlotBar::AnimSize(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Charting.PlotBar", "AnimSize(float2)");
    Width(::g::Uno::UX::Size__New1(value.Item(0) * 100.0f, 4));
    Height(::g::Uno::UX::Size__New1(value.Item(1) * 100.0f, 4));
}

// public Fuse.Animations.AttractorConfig get_Attractor() [instance]
::g::Fuse::Animations::AttractorConfig* PlotBar::Attractor()
{
    uStackFrame __("Fuse.Charting.PlotBar", "get_Attractor()");
    return uAs< ::g::Fuse::Animations::AttractorConfig*>(uPtr(_animPosition)->Motion, ::TYPES[33/*Fuse.Animations.AttractorConfig*/]);
}

// public void set_Attractor(Fuse.Animations.AttractorConfig value) [instance]
void PlotBar::Attractor(::g::Fuse::Animations::AttractorConfig* value)
{
    uStackFrame __("Fuse.Charting.PlotBar", "set_Attractor(Fuse.Animations.AttractorConfig)");
    uPtr(_animPosition)->Motion = value;
    uPtr(_animSize)->Motion = value;

    if (uPtr(value)->Unit() != 1)
        ::g::Fuse::Diagnostics::UserWarning(::STRINGS[28/*"Expecting U...*/], this, ::STRINGS[29/*"/usr/local/...*/], 86, ::STRINGS[30/*"set_Attractor"*/]);
}

// public Fuse.Charting.PlotBarStyle get_Style() [instance]
int32_t PlotBar::Style()
{
    return _style;
}

// public void set_Style(Fuse.Charting.PlotBarStyle value) [instance]
void PlotBar::Style(int32_t value)
{
    if (_style == value)
        return;

    _style = value;
}

// public generated PlotBar New() [static]
PlotBar* PlotBar::New4()
{
    PlotBar* obj1 = (PlotBar*)uNew(PlotBar_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBar.uno
// --------------------------------------------------------------

// public enum PlotBarStyle
uEnumType* PlotBarStyle_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Charting.PlotBarStyle", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Baseline", 0LL,
        "Range", 1LL,
        "Full", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBehavior.uno
// -------------------------------------------------------------------

// internal sealed class PlotBehavior
// {
static void PlotBehavior_build(uType* type)
{
    ::STRINGS[31] = uString::Const("Out-of-range series index");
    ::STRINGS[32] = uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBehavior.uno");
    ::STRINGS[33] = uString::Const("GetDataItems");
    ::STRINGS[34] = uString::Const("DataSeries is not part of this plot");
    ::STRINGS[35] = uString::Const("GetDataItemsObservable");
    ::STRINGS[36] = uString::Const("Invalid DataSpec");
    ::TYPES[34] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Charting::DataSeries_typeof(), NULL);
    ::TYPES[35] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Charting::ObservableDataItems_typeof(), NULL);
    ::TYPES[36] = ::g::Fuse::Charting::ObservableAxisItems_typeof()->Array();
    ::TYPES[37] = ::g::Fuse::Visual_typeof();
    ::TYPES[38] = ::TYPES[37/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.Charting.PlotBehavior>*/, type, NULL);
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Charting::DataSeries_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Charting::DataSeries_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Action_typeof();
    ::TYPES[39] = ::g::Fuse::Charting::AxisEntryData_typeof()->Array();
    ::TYPES[40] = ::g::Fuse::Charting::Data_typeof();
    ::TYPES[28] = ::g::Fuse::Charting::DataChangedHandler_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(18,
        ::g::Fuse::Charting::DataSpec_typeof(), offsetof(PlotBehavior, _spec), 0,
        ::g::Fuse::Charting::PlotOrientation_typeof(), offsetof(PlotBehavior, _orientation), 0,
        ::g::Uno::Int_typeof(), offsetof(PlotBehavior, _offset), 0,
        ::g::Uno::Bool_typeof(), offsetof(PlotBehavior, _hasLimit), 0,
        ::g::Uno::Int_typeof(), offsetof(PlotBehavior, _limit), 0,
        ::g::Uno::Int2_typeof(), offsetof(PlotBehavior, _extend), 0,
        ::TYPES[34/*Uno.Collections.List<Fuse.Charting.DataSeries>*/], offsetof(PlotBehavior, _series), 0,
        ::g::Uno::Bool_typeof(), offsetof(PlotBehavior, _pendingData), 0,
        ::g::Fuse::Charting::DataStats_typeof(), offsetof(PlotBehavior, _dataStats), 0,
        ::g::Fuse::Charting::DataStats_typeof(), offsetof(PlotBehavior, _plotStats), 0,
        ::TYPES[35/*Uno.Collections.List<Fuse.Charting.ObservableDataItems>*/], offsetof(PlotBehavior, _dataItems), 0,
        ::TYPES[36/*Fuse.Charting.ObservableAxisItems[]*/], offsetof(PlotBehavior, _axisItems), 0,
        ::TYPES[28/*Fuse.Charting.DataChangedHandler*/], offsetof(PlotBehavior, DataChanged1), 0);
}

::g::Fuse::Node_type* PlotBehavior_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 7;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(PlotBehavior);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Charting.PlotBehavior", options);
    type->fp_build_ = PlotBehavior_build;
    type->fp_ctor_ = (void*)PlotBehavior__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PlotBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PlotBehavior__OnUnrooted_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public PlotBehavior()
void PlotBehavior__ctor_3_fn(PlotBehavior* __this)
{
    __this->ctor_3();
}

// internal Fuse.Charting.PlotAxisMetric AxisMetric(int i)
void PlotBehavior__AxisMetric_fn(PlotBehavior* __this, int32_t* i, int32_t* __retval)
{
    *__retval = __this->AxisMetric(*i);
}

// internal generated void add_DataChanged(Fuse.Charting.DataChangedHandler value)
void PlotBehavior__add_DataChanged_fn(PlotBehavior* __this, uDelegate* value)
{
    __this->add_DataChanged(value);
}

// internal generated void remove_DataChanged(Fuse.Charting.DataChangedHandler value)
void PlotBehavior__remove_DataChanged_fn(PlotBehavior* __this, uDelegate* value)
{
    __this->remove_DataChanged(value);
}

// internal Fuse.Charting.DataSpec get_DataSpec()
void PlotBehavior__get_DataSpec_fn(PlotBehavior* __this, ::g::Fuse::Charting::DataSpec** __retval)
{
    *__retval = __this->DataSpec();
}

// internal void set_DataSpec(Fuse.Charting.DataSpec value)
void PlotBehavior__set_DataSpec_fn(PlotBehavior* __this, ::g::Fuse::Charting::DataSpec* value)
{
    __this->DataSpec(value);
}

// internal Fuse.Charting.DataStats get_DataStats()
void PlotBehavior__get_DataStats_fn(PlotBehavior* __this, ::g::Fuse::Charting::DataStats** __retval)
{
    *__retval = __this->DataStats();
}

// private void DeferredUpdateData()
void PlotBehavior__DeferredUpdateData_fn(PlotBehavior* __this)
{
    __this->DeferredUpdateData();
}

// public int2 get_Extend()
void PlotBehavior__get_Extend_fn(PlotBehavior* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Extend();
}

// public void set_Extend(int2 value)
void PlotBehavior__set_Extend_fn(PlotBehavior* __this, ::g::Uno::Int2* value)
{
    __this->Extend(*value);
}

// internal static Fuse.Charting.PlotBehavior FindPlot(Fuse.Node from)
void PlotBehavior__FindPlot_fn(::g::Fuse::Node* from, PlotBehavior** __retval)
{
    *__retval = PlotBehavior::FindPlot(from);
}

// internal Fuse.Reactive.IObservableArray GetAxisItems(int axis)
void PlotBehavior__GetAxisItems_fn(PlotBehavior* __this, int32_t* axis, uObject** __retval)
{
    *__retval = __this->GetAxisItems(*axis);
}

// internal Fuse.Charting.PlotOrientation GetAxisOrientation(int axis)
void PlotBehavior__GetAxisOrientation_fn(PlotBehavior* __this, int32_t* axis, int32_t* __retval)
{
    *__retval = __this->GetAxisOrientation(*axis);
}

// private Fuse.Charting.ObservableDataItems GetDataItems(int series)
void PlotBehavior__GetDataItems_fn(PlotBehavior* __this, int32_t* series, ::g::Fuse::Charting::ObservableDataItems** __retval)
{
    *__retval = __this->GetDataItems(*series);
}

// internal Fuse.Reactive.IObservableArray GetDataItemsObservable(Fuse.Charting.DataSeries series)
void PlotBehavior__GetDataItemsObservable_fn(PlotBehavior* __this, ::g::Fuse::Charting::DataSeries* series, uObject** __retval)
{
    *__retval = __this->GetDataItemsObservable(series);
}

// internal Fuse.Reactive.IObservableArray GetDataItemsObservable(int series)
void PlotBehavior__GetDataItemsObservable1_fn(PlotBehavior* __this, int32_t* series, uObject** __retval)
{
    *__retval = __this->GetDataItemsObservable1(*series);
}

// private void InvalidateCalculation()
void PlotBehavior__InvalidateCalculation_fn(PlotBehavior* __this)
{
    __this->InvalidateCalculation();
}

// internal void InvalidateData()
void PlotBehavior__InvalidateData_fn(PlotBehavior* __this)
{
    __this->InvalidateData();
}

// private void InvalidateWindow()
void PlotBehavior__InvalidateWindow_fn(PlotBehavior* __this)
{
    __this->InvalidateWindow();
}

// internal bool IsCountAxis(int i)
void PlotBehavior__IsCountAxis_fn(PlotBehavior* __this, int32_t* i, bool* __retval)
{
    *__retval = __this->IsCountAxis(*i);
}

// public int get_Limit()
void PlotBehavior__get_Limit_fn(PlotBehavior* __this, int32_t* __retval)
{
    *__retval = __this->Limit();
}

// public void set_Limit(int value)
void PlotBehavior__set_Limit_fn(PlotBehavior* __this, int32_t* value)
{
    __this->Limit(*value);
}

// public PlotBehavior New()
void PlotBehavior__New2_fn(PlotBehavior** __retval)
{
    *__retval = PlotBehavior::New2();
}

// public int get_Offset()
void PlotBehavior__get_Offset_fn(PlotBehavior* __this, int32_t* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(int value)
void PlotBehavior__set_Offset_fn(PlotBehavior* __this, int32_t* value)
{
    __this->Offset(*value);
}

// protected override sealed void OnRooted()
void PlotBehavior__OnRooted_fn(PlotBehavior* __this)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "OnRooted()");
    ::g::Fuse::Charting::DataSeries* ret16;
    ::g::Fuse::Node__OnRooted_fn(__this);

    for (int32_t i = 0; i < uPtr(__this->_series)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_series), uCRef<int32_t>(i), &ret16), ret16))->Root(__this);

    uPtr(__this->DataSpec())->add_Changed(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)PlotBehavior__OnSpecChanged_fn, __this));
    __this->InvalidateData();
}

// private void OnSpecChanged()
void PlotBehavior__OnSpecChanged_fn(PlotBehavior* __this)
{
    __this->OnSpecChanged();
}

// protected override sealed void OnUnrooted()
void PlotBehavior__OnUnrooted_fn(PlotBehavior* __this)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "OnUnrooted()");
    ::g::Fuse::Charting::DataSeries* ret17;

    for (int32_t i = 0; i < uPtr(__this->_series)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_series), uCRef<int32_t>(i), &ret17), ret17))->Unroot();

    for (int32_t i1 = 0; i1 < 4; ++i1)
        uPtr(uPtr(__this->_axisItems)->Strong< ::g::Fuse::Charting::ObservableAxisItems*>(i1))->Clear();

    uPtr(__this->_dataItems)->Clear();
    uPtr(__this->DataSpec())->remove_Changed(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)PlotBehavior__OnSpecChanged_fn, __this));
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public Fuse.Charting.PlotOrientation get_Orientation()
void PlotBehavior__get_Orientation_fn(PlotBehavior* __this, int32_t* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Charting.PlotOrientation value)
void PlotBehavior__set_Orientation_fn(PlotBehavior* __this, int32_t* value)
{
    __this->Orientation(*value);
}

// internal Fuse.Charting.DataStats get_PlotStats()
void PlotBehavior__get_PlotStats_fn(PlotBehavior* __this, ::g::Fuse::Charting::DataStats** __retval)
{
    *__retval = __this->PlotStats();
}

// public int4 ScreenSteps(int4 v)
void PlotBehavior__ScreenSteps_fn(PlotBehavior* __this, ::g::Uno::Int4* v, ::g::Uno::Int4* __retval)
{
    *__retval = __this->ScreenSteps(*v);
}

// public float4 ScreenValue(float4 v)
void PlotBehavior__ScreenValue_fn(PlotBehavior* __this, ::g::Uno::Float4* v, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ScreenValue(*v);
}

// public Uno.Collections.IList<Fuse.Charting.DataSeries> get_Series()
void PlotBehavior__get_Series_fn(PlotBehavior* __this, uObject** __retval)
{
    *__retval = __this->Series();
}

// public void StepOffset(int step)
void PlotBehavior__StepOffset_fn(PlotBehavior* __this, int32_t* step)
{
    __this->StepOffset(*step);
}

// private void UpdateAxisItems(Uno.Collections.List<Fuse.Charting.Data> data, int axis)
void PlotBehavior__UpdateAxisItems_fn(PlotBehavior* __this, ::g::Uno::Collections::List* data, int32_t* axis)
{
    __this->UpdateAxisItems(data, *axis);
}

// public PlotBehavior() [instance]
void PlotBehavior::ctor_3()
{
    uStackFrame __("Fuse.Charting.PlotBehavior", ".ctor()");
    _spec = ::g::Fuse::Charting::DataSpec::New1();
    _orientation = 1;
    _series = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[34/*Uno.Collections.List<Fuse.Charting.DataSeries>*/]));
    _dataStats = ::g::Fuse::Charting::DataStats::New1();
    _plotStats = ::g::Fuse::Charting::DataStats::New1();
    _dataItems = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[35/*Uno.Collections.List<Fuse.Charting.ObservableDataItems>*/]));
    ctor_2();
    _axisItems = uArray::New(::TYPES[36/*Fuse.Charting.ObservableAxisItems[]*/], 4);

    for (int32_t i = 0; i < 4; ++i)
        uPtr(_axisItems)->Strong< ::g::Fuse::Charting::ObservableAxisItems*>(i) = ::g::Fuse::Charting::ObservableAxisItems::New2();

    uPtr(_spec)->SetAxisMetric(0, 1);
}

// internal Fuse.Charting.PlotAxisMetric AxisMetric(int i) [instance]
int32_t PlotBehavior::AxisMetric(int32_t i)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "AxisMetric(int)");
    return uPtr(_spec)->GetAxisMetric(i);
}

// internal generated void add_DataChanged(Fuse.Charting.DataChangedHandler value) [instance]
void PlotBehavior::add_DataChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "add_DataChanged(Fuse.Charting.DataChangedHandler)");
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DataChanged1, value), ::TYPES[28/*Fuse.Charting.DataChangedHandler*/]);
}

// internal generated void remove_DataChanged(Fuse.Charting.DataChangedHandler value) [instance]
void PlotBehavior::remove_DataChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "remove_DataChanged(Fuse.Charting.DataChangedHandler)");
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DataChanged1, value), ::TYPES[28/*Fuse.Charting.DataChangedHandler*/]);
}

// internal Fuse.Charting.DataSpec get_DataSpec() [instance]
::g::Fuse::Charting::DataSpec* PlotBehavior::DataSpec()
{
    return _spec;
}

// internal void set_DataSpec(Fuse.Charting.DataSpec value) [instance]
void PlotBehavior::DataSpec(::g::Fuse::Charting::DataSpec* value)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "set_DataSpec(Fuse.Charting.DataSpec)");

    if (_spec == value)
        return;

    if (value == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[36/*"Invalid Dat...*/]));

    if (IsRootingCompleted())
        uPtr(_spec)->remove_Changed(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)PlotBehavior__OnSpecChanged_fn, this));

    _spec = value;

    if (IsRootingCompleted())
    {
        uPtr(_spec)->add_Changed(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)PlotBehavior__OnSpecChanged_fn, this));
        OnSpecChanged();
    }
}

// internal Fuse.Charting.DataStats get_DataStats() [instance]
::g::Fuse::Charting::DataStats* PlotBehavior::DataStats()
{
    return _dataStats;
}

// private void DeferredUpdateData() [instance]
void PlotBehavior::DeferredUpdateData()
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "DeferredUpdateData()");
    ::g::Fuse::Charting::PlotDataPoint* collection1;
    ::g::Fuse::Charting::DataSeries* ret6;
    ::g::Fuse::Charting::PlotDataPoint* ret7;
    ::g::Fuse::Charting::PlotDataPoint* ret8;
    ::g::Fuse::Charting::PlotDataPoint* ret9;
    ::g::Fuse::Charting::Data* ret10;
    ::g::Fuse::Charting::Data* ret11;
    ::g::Fuse::Charting::ObservableDataItems* ret12;
    ::g::Fuse::Charting::DataSeries* ret13;
    _pendingData = false;

    if (!IsRootingCompleted() || (uPtr(_series)->Count() == 0))
        return;

    _dataStats = ::g::Fuse::Charting::DataStats::CalculateAll((uObject*)_series, _spec);

    if (uPtr(_dataStats)->Count == 0)
        return;

    _plotStats = uPtr(_dataStats)->Clone();
    uPtr(_plotStats)->Extend(Extend());
    uPtr(_plotStats)->ApplyLimits(_spec, Offset(), Limit(), _hasLimit);

    for (int32_t s = 0; s < uPtr(_series)->Count(); ++s)
    {
        ::g::Uno::Collections::List* data = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_series), uCRef<int32_t>(s), &ret6), ret6))->PlotData();
        ::g::Fuse::Charting::ObservableDataItems* dataItems = GetDataItems(s);
        ::g::Uno::Int2 ends = uPtr(_plotStats)->Extended();
        int32_t diAt = 0;

        for (int32_t i = ends.Item(0); i < ends.Item(1); ++i)
        {
            int32_t ndx = i + uPtr(_plotStats)->Offset;

            if ((ndx < 0) || (ndx >= uPtr(data)->Count()))
                continue;

            while ((diAt < uPtr(dataItems)->Count()) && (uPtr((::g::Fuse::Charting::ReadOnlyObservableList__get_Item_fn(uPtr(dataItems), uCRef<int32_t>(diAt), &ret7), ret7))->Index < ndx))
                uPtr(dataItems)->RemoveAt(diAt);

            if ((diAt < uPtr(dataItems)->Count()) && (uPtr((::g::Fuse::Charting::ReadOnlyObservableList__get_Item_fn(uPtr(dataItems), uCRef<int32_t>(diAt), &ret8), ret8))->Index == ndx))
                uPtr((::g::Fuse::Charting::ReadOnlyObservableList__get_Item_fn(uPtr(dataItems), uCRef<int32_t>(diAt++), &ret9), ret9))->Update((::g::Uno::Collections::List__get_Item_fn(uPtr(data), uCRef<int32_t>(ndx), &ret10), ret10), ndx);
            else
                ::g::Fuse::Charting::ReadOnlyObservableList__Insert_fn(uPtr(dataItems), uCRef<int32_t>(diAt++), (collection1 = ::g::Fuse::Charting::PlotDataPoint::New1(), uPtr(collection1)->Data = (::g::Uno::Collections::List__get_Item_fn(uPtr(data), uCRef<int32_t>(ndx), &ret11), ret11), uPtr(collection1)->SeriesIndex = s, uPtr(collection1)->Plot = this, uPtr(collection1)->Index = ndx, collection1));
        }

        while (uPtr(dataItems)->Count() > diAt)
            uPtr(dataItems)->RemoveAt(uPtr(dataItems)->Count() - 1);
    }

    for (int32_t i1 = uPtr(_series)->Count(); i1 < uPtr(_dataItems)->Count(); ++i1)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dataItems), uCRef<int32_t>(i1), &ret12), ret12))->Clear();

    for (int32_t i2 = 0; i2 < 4; ++i2)
        UpdateAxisItems(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_series), uCRef<int32_t>(0), &ret13), ret13))->PlotData(), i2);

    if (::g::Uno::Delegate::op_Inequality(DataChanged1, NULL))
        uPtr(DataChanged1)->Invoke(2, this, (::g::Fuse::Charting::DataChangedArgs*)::g::Fuse::Charting::DataChangedArgs::New2());
}

// public int2 get_Extend() [instance]
::g::Uno::Int2 PlotBehavior::Extend()
{
    return _extend;
}

// public void set_Extend(int2 value) [instance]
void PlotBehavior::Extend(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "set_Extend(int2)");

    if (::g::Uno::Int2__op_Equality(_extend, value))
        return;

    _extend = value;
    InvalidateWindow();
}

// internal Fuse.Reactive.IObservableArray GetAxisItems(int axis) [instance]
uObject* PlotBehavior::GetAxisItems(int32_t axis)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "GetAxisItems(int)");
    return (uObject*)uPtr(_axisItems)->Strong< ::g::Fuse::Charting::ObservableAxisItems*>(axis);
}

// internal Fuse.Charting.PlotOrientation GetAxisOrientation(int axis) [instance]
int32_t PlotBehavior::GetAxisOrientation(int32_t axis)
{
    if (axis > 1)
        return 0;

    if (axis == 0)
        return Orientation();

    return ::g::Fuse::Charting::TypeUtils::Opposite(Orientation());
}

// private Fuse.Charting.ObservableDataItems GetDataItems(int series) [instance]
::g::Fuse::Charting::ObservableDataItems* PlotBehavior::GetDataItems(int32_t series)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "GetDataItems(int)");
    ::g::Fuse::Charting::ObservableDataItems* ret14;

    if ((series < 0) || (series > 128))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[31/*"Out-of-rang...*/], this, ::STRINGS[32/*"/usr/local/...*/], 320, ::STRINGS[33/*"GetDataItems"*/], NULL);
        series = 0;
    }

    while (series >= uPtr(_dataItems)->Count())
        ::g::Uno::Collections::List__Add_fn(uPtr(_dataItems), ::g::Fuse::Charting::ObservableDataItems::New2());

    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_dataItems), uCRef<int32_t>(series), &ret14), ret14);
}

// internal Fuse.Reactive.IObservableArray GetDataItemsObservable(Fuse.Charting.DataSeries series) [instance]
uObject* PlotBehavior::GetDataItemsObservable(::g::Fuse::Charting::DataSeries* series)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "GetDataItemsObservable(Fuse.Charting.DataSeries)");
    ::g::Fuse::Charting::DataSeries* ret15;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Series()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Charting.DataSeries>*/])); ++i)
        if ((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Series()), ::TYPES[19/*Uno.Collections.IList<Fuse.Charting.DataSeries>*/]), uCRef<int32_t>(i), &ret15), ret15) == series)
            return (uObject*)GetDataItems(i);

    ::g::Fuse::Diagnostics::UserError(::STRINGS[34/*"DataSeries ...*/], this, ::STRINGS[32/*"/usr/local/...*/], 312, ::STRINGS[35/*"GetDataItem...*/], NULL);
    return (uObject*)GetDataItems(0);
}

// internal Fuse.Reactive.IObservableArray GetDataItemsObservable(int series) [instance]
uObject* PlotBehavior::GetDataItemsObservable1(int32_t series)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "GetDataItemsObservable(int)");
    return (uObject*)GetDataItems(series);
}

// private void InvalidateCalculation() [instance]
void PlotBehavior::InvalidateCalculation()
{
    InvalidateData();
}

// internal void InvalidateData() [instance]
void PlotBehavior::InvalidateData()
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "InvalidateData()");

    if (!IsRootingStarted() || _pendingData)
        return;

    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)PlotBehavior__DeferredUpdateData_fn, this), -1, 2);
    _pendingData = true;
}

// private void InvalidateWindow() [instance]
void PlotBehavior::InvalidateWindow()
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "InvalidateWindow()");
    InvalidateData();
}

// internal bool IsCountAxis(int i) [instance]
bool PlotBehavior::IsCountAxis(int32_t i)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "IsCountAxis(int)");
    return uPtr(_spec)->IsCountAxis(i);
}

// public int get_Limit() [instance]
int32_t PlotBehavior::Limit()
{
    return _limit;
}

// public void set_Limit(int value) [instance]
void PlotBehavior::Limit(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "set_Limit(int)");
    value = ::g::Uno::Math::Max8(1, value);

    if ((_limit == value) && _hasLimit)
        return;

    _hasLimit = true;
    _limit = value;
    InvalidateWindow();
}

// public int get_Offset() [instance]
int32_t PlotBehavior::Offset()
{
    return _offset;
}

// public void set_Offset(int value) [instance]
void PlotBehavior::Offset(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "set_Offset(int)");
    int32_t v = ::g::Uno::Math::Max8(0, value);

    if (_offset == v)
        return;

    _offset = v;
    InvalidateWindow();
}

// private void OnSpecChanged() [instance]
void PlotBehavior::OnSpecChanged()
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "OnSpecChanged()");
    InvalidateData();
}

// public Fuse.Charting.PlotOrientation get_Orientation() [instance]
int32_t PlotBehavior::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Charting.PlotOrientation value) [instance]
void PlotBehavior::Orientation(int32_t value)
{
    if (_orientation == value)
        return;

    _orientation = value;
    InvalidateCalculation();
}

// internal Fuse.Charting.DataStats get_PlotStats() [instance]
::g::Fuse::Charting::DataStats* PlotBehavior::PlotStats()
{
    return _plotStats;
}

// public int4 ScreenSteps(int4 v) [instance]
::g::Uno::Int4 PlotBehavior::ScreenSteps(::g::Uno::Int4 v)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "ScreenSteps(int4)");

    if (Orientation() == 1)
        return ::g::Uno::Int4__New2(v.Item(0), v.Item(1), v.Item(2), v.Item(3));

    return ::g::Uno::Int4__New2(v.Item(1), v.Item(0), v.Item(2), v.Item(3));
}

// public float4 ScreenValue(float4 v) [instance]
::g::Uno::Float4 PlotBehavior::ScreenValue(::g::Uno::Float4 v)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "ScreenValue(float4)");

    if (Orientation() == 1)
        return ::g::Uno::Float4__New2(v.Item(0), 1.0f - v.Item(1), v.Item(2), v.Item(3));

    return ::g::Uno::Float4__New2(v.Item(1), 1.0f - v.Item(0), v.Item(2), v.Item(3));
}

// public Uno.Collections.IList<Fuse.Charting.DataSeries> get_Series() [instance]
uObject* PlotBehavior::Series()
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "get_Series()");
    return (uObject*)_series;
}

// public void StepOffset(int step) [instance]
void PlotBehavior::StepOffset(int32_t step)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "StepOffset(int)");
    int32_t effLimit = _hasLimit ? Limit() : 1;
    int32_t nextOffset = Offset() + step;
    int32_t cOffset = ::g::Uno::Math::Clamp8(nextOffset, 0, ::g::Uno::Math::Max8(0, uPtr(DataStats())->Count - effLimit));
    Offset(cOffset);
}

// private void UpdateAxisItems(Uno.Collections.List<Fuse.Charting.Data> data, int axis) [instance]
void PlotBehavior::UpdateAxisItems(::g::Uno::Collections::List* data, int32_t axis)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "UpdateAxisItems(Uno.Collections.List<Fuse.Charting.Data>,int)");
    ::g::Fuse::Charting::AxisEntryData collection2;
    ::g::Fuse::Charting::AxisEntryData collection3;
    ::g::Fuse::Charting::AxisEntry* collection4;
    ::g::Fuse::Charting::Data* ret18;
    ::g::Fuse::Charting::AxisEntry* ret19;
    ::g::Fuse::Charting::AxisEntry* ret20;
    ::g::Fuse::Charting::AxisEntry* ret21;
    uArray* labels = NULL;
    int32_t metric = AxisMetric(axis);

    switch (metric)
    {
        case 0:
        case 1:
        {
            int32_t c = uPtr(_plotStats)->Count;
            ::g::Uno::Int2 ends = uPtr(_plotStats)->Extended();
            int32_t ec = ends.Item(1) - ends.Item(0);
            uArray* f = uArray::New(::TYPES[39/*Fuse.Charting.AxisEntryData[]*/], ec);

            for (int32_t i = 0; i < ec; ++i)
            {
                int32_t ndx = (i + uPtr(_plotStats)->Offset) + ends.Item(0);
                ::g::Fuse::Charting::Data* sourceData = ((ndx < 0) || (ndx >= uPtr(data)->Count())) ? uCast< ::g::Fuse::Charting::Data*>(NULL, ::TYPES[40/*Fuse.Charting.Data*/]) : (::g::Uno::Collections::List__get_Item_fn(uPtr(data), uCRef<int32_t>(ndx), &ret18), ret18);
                uPtr(f)->Item< ::g::Fuse::Charting::AxisEntryData>((axis == 1) ? (ec - i) - 1 : i) = (collection2 = uDefault< ::g::Fuse::Charting::AxisEntryData>(), collection2.Data = sourceData, collection2.Index = ndx, collection2.Value = (float)ndx, collection2.Position = ((metric == 1) ? ((float)(i + ends.Item(0)) + 0.5f) / (float)c : (float)(i + ends.Item(0)) / (float)c), collection2);
            }

            labels = f;
            break;
        }
        case 3:
        case 2:
        {
            int32_t c1 = uPtr(_plotStats)->Steps.Item(axis);
            uArray* f1 = uArray::New(::TYPES[39/*Fuse.Charting.AxisEntryData[]*/], c1 + 1);
            float mn = uPtr(_plotStats)->Minimum.Item(axis);
            float mx = uPtr(_plotStats)->Maximum.Item(axis);
            float step = (mx - mn) / (float)c1;

            for (int32_t i1 = 0; i1 <= c1; ++i1)
                uPtr(f1)->Item< ::g::Fuse::Charting::AxisEntryData>(i1) = (collection3 = uDefault< ::g::Fuse::Charting::AxisEntryData>(), collection3.Data = NULL, collection3.Index = i1, collection3.Value = (mn + (step * (float)i1)), collection3.Position = ((float)i1 / (float)c1), collection3);

            labels = f1;
            break;
        }
    }

    if (labels == NULL)
        labels = uArray::New(::TYPES[39/*Fuse.Charting.AxisEntryData[]*/], 0);

    ::g::Fuse::Charting::ObservableAxisItems* items = uPtr(_axisItems)->Strong< ::g::Fuse::Charting::ObservableAxisItems*>(axis);
    int32_t iAt = 0;

    for (int32_t i2 = 0; i2 < uPtr(labels)->Length(); ++i2)
    {
        while ((iAt < uPtr(items)->Count()) && (uPtr((::g::Fuse::Charting::ReadOnlyObservableList__get_Item_fn(uPtr(items), uCRef<int32_t>(iAt), &ret19), ret19))->Data.Index < uPtr(labels)->Item< ::g::Fuse::Charting::AxisEntryData>(i2).Index))
            uPtr(items)->RemoveAt(iAt);

        if ((iAt < uPtr(items)->Count()) && (uPtr((::g::Fuse::Charting::ReadOnlyObservableList__get_Item_fn(uPtr(items), uCRef<int32_t>(iAt), &ret20), ret20))->Data.Index == uPtr(labels)->Item< ::g::Fuse::Charting::AxisEntryData>(i2).Index))
            uPtr((::g::Fuse::Charting::ReadOnlyObservableList__get_Item_fn(uPtr(items), uCRef<int32_t>(iAt++), &ret21), ret21))->Update(uPtr(labels)->Item< ::g::Fuse::Charting::AxisEntryData>(i2));
        else
            ::g::Fuse::Charting::ReadOnlyObservableList__Insert_fn(uPtr(items), uCRef<int32_t>(iAt++), (collection4 = ::g::Fuse::Charting::AxisEntry::New1(), uPtr(collection4)->Plot = this, uPtr(collection4)->Data = uPtr(labels)->Item< ::g::Fuse::Charting::AxisEntryData>(i2), uPtr(collection4)->Axis = axis, collection4));
    }

    while (uPtr(items)->Count() > uPtr(labels)->Length())
        uPtr(items)->RemoveAt(uPtr(items)->Count() - 1);
}

// internal static Fuse.Charting.PlotBehavior FindPlot(Fuse.Node from) [static]
PlotBehavior* PlotBehavior::FindPlot(::g::Fuse::Node* from)
{
    uStackFrame __("Fuse.Charting.PlotBehavior", "FindPlot(Fuse.Node)");

    while (from != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(from, ::TYPES[37/*Fuse.Visual*/]);

        if (v != NULL)
        {
            PlotBehavior* p = (PlotBehavior*)uPtr(v)->FirstChild(::TYPES[38/*Fuse.Visual.FirstChild<Fuse.Charting.PlotBehavior>*/]);

            if (p != NULL)
                return p;
        }

        from = uPtr(from)->Parent();
    }

    return NULL;
}

// public PlotBehavior New() [static]
PlotBehavior* PlotBehavior::New2()
{
    PlotBehavior* obj5 = (PlotBehavior*)uNew(PlotBehavior_typeof());
    obj5->ctor_3();
    return obj5;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotCurvePoint.uno
// ---------------------------------------------------------------------

// public sealed class PlotCurvePoint
// {
static void PlotCurvePoint_build(uType* type)
{
    ::TYPES[30] = ::g::Fuse::Animations::DestinationBehavior_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[32] = ::g::Fuse::Animations::DestinationBehavior__ValueHandler_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[41] = ::g::Fuse::Charting::PlotDataItemWatcher_typeof()->MakeType(::g::Fuse::Charting::PlotDataPoint_typeof(), NULL);
    ::TYPES[33] = ::g::Fuse::Animations::AttractorConfig_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotCurvePoint_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(PlotCurvePoint_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(PlotCurvePoint_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(PlotCurvePoint_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(PlotCurvePoint_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotCurvePoint_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotCurvePoint_type, interface6),
        ::g::Fuse::Charting::IPlotDataItemListener_typeof()->MakeType(::g::Fuse::Charting::PlotDataPoint_typeof(), NULL), offsetof(PlotCurvePoint_type, interface7));
    type->SetFields(22,
        ::TYPES[30/*Fuse.Animations.DestinationBehavior<float2>*/], offsetof(PlotCurvePoint, _animator), 0,
        ::g::Fuse::Charting::PointCalculator_typeof(), offsetof(PlotCurvePoint, _calc), 0,
        ::TYPES[41/*Fuse.Charting.PlotDataItemWatcher<Fuse.Charting.PlotDataPoint>*/], offsetof(PlotCurvePoint, _watcher), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Attractor", NULL, (void*)PlotCurvePoint__get_Attractor_fn, 0, false, ::TYPES[33/*Fuse.Animations.AttractorConfig*/], 0),
        new uFunction("set_Attractor", NULL, (void*)PlotCurvePoint__set_Attractor_fn, 0, false, uVoid_typeof(), 1, ::TYPES[33/*Fuse.Animations.AttractorConfig*/]),
        new uFunction(".ctor", NULL, (void*)PlotCurvePoint__New3_fn, 0, true, type, 0),
        new uFunction("get_Offset", NULL, (void*)PlotCurvePoint__get_Offset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)PlotCurvePoint__set_Offset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Style", NULL, (void*)PlotCurvePoint__get_Style_fn, 0, false, ::g::Fuse::Charting::PlotPointStyle_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)PlotCurvePoint__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotPointStyle_typeof()));
}

PlotCurvePoint_type* PlotCurvePoint_typeof()
{
    static uSStrong<PlotCurvePoint_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::CurvePoint_typeof();
    options.FieldCount = 25;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(PlotCurvePoint);
    options.TypeSize = sizeof(PlotCurvePoint_type);
    type = (PlotCurvePoint_type*)uClassType::New("Fuse.Charting.PlotCurvePoint", options);
    type->fp_build_ = PlotCurvePoint_build;
    type->fp_ctor_ = (void*)PlotCurvePoint__New3_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PlotCurvePoint__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PlotCurvePoint__OnUnrooted_fn;
    type->interface7.fp_OnNewData = (void(*)(uObject*, void*))PlotCurvePoint__FuseChartingIPlotDataItemListenerFuseChartingPlotDataPointOnNewData_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public PlotCurvePoint()
void PlotCurvePoint__ctor_3_fn(PlotCurvePoint* __this)
{
    __this->ctor_3();
}

// private void AnimUpdate(float2 value)
void PlotCurvePoint__AnimUpdate_fn(PlotCurvePoint* __this, ::g::Uno::Float2* value)
{
    __this->AnimUpdate(*value);
}

// public Fuse.Animations.AttractorConfig get_Attractor()
void PlotCurvePoint__get_Attractor_fn(PlotCurvePoint* __this, ::g::Fuse::Animations::AttractorConfig** __retval)
{
    *__retval = __this->Attractor();
}

// public void set_Attractor(Fuse.Animations.AttractorConfig value)
void PlotCurvePoint__set_Attractor_fn(PlotCurvePoint* __this, ::g::Fuse::Animations::AttractorConfig* value)
{
    __this->Attractor(value);
}

// private void Fuse.Charting.IPlotDataItemListener<Fuse.Charting.PlotDataPoint>.OnNewData(Fuse.Charting.PlotDataPoint entry)
void PlotCurvePoint__FuseChartingIPlotDataItemListenerFuseChartingPlotDataPointOnNewData_fn(PlotCurvePoint* __this, ::g::Fuse::Charting::PlotDataPoint* entry)
{
    uStackFrame __("Fuse.Charting.PlotCurvePoint", "Fuse.Charting.IPlotDataItemListener<Fuse.Charting.PlotDataPoint>.OnNewData(Fuse.Charting.PlotDataPoint)");
    ::g::Fuse::Animations::DestinationBehavior__SetValue_fn(uPtr(__this->_animator), uCRef(__this->_calc.PrepareEntry(entry)), uDelegate::New(::TYPES[32/*Fuse.Animations.DestinationBehavior<float2>.ValueHandler*/], (void*)PlotCurvePoint__AnimUpdate_fn, __this));
}

// public PlotCurvePoint New()
void PlotCurvePoint__New3_fn(PlotCurvePoint** __retval)
{
    *__retval = PlotCurvePoint::New3();
}

// public float get_Offset()
void PlotCurvePoint__get_Offset_fn(PlotCurvePoint* __this, float* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float value)
void PlotCurvePoint__set_Offset_fn(PlotCurvePoint* __this, float* value)
{
    __this->Offset(*value);
}

// protected override sealed void OnRooted()
void PlotCurvePoint__OnRooted_fn(PlotCurvePoint* __this)
{
    uStackFrame __("Fuse.Charting.PlotCurvePoint", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_watcher = ((::g::Fuse::Charting::PlotDataItemWatcher*)::g::Fuse::Charting::PlotDataItemWatcher::New1(::TYPES[41/*Fuse.Charting.PlotDataItemWatcher<Fuse.Charting.PlotDataPoint>*/], __this, (uObject*)__this));
    __this->_calc.CheckAttractor(__this->Attractor(), __this);
}

// protected override sealed void OnUnrooted()
void PlotCurvePoint__OnUnrooted_fn(PlotCurvePoint* __this)
{
    uStackFrame __("Fuse.Charting.PlotCurvePoint", "OnUnrooted()");
    uPtr(__this->_watcher)->Dispose();
    __this->_watcher = NULL;
    uPtr(__this->_animator)->Unroot();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public Fuse.Charting.PlotPointStyle get_Style()
void PlotCurvePoint__get_Style_fn(PlotCurvePoint* __this, int32_t* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Fuse.Charting.PlotPointStyle value)
void PlotCurvePoint__set_Style_fn(PlotCurvePoint* __this, int32_t* value)
{
    __this->Style(*value);
}

// public PlotCurvePoint() [instance]
void PlotCurvePoint::ctor_3()
{
    _animator = ((::g::Fuse::Animations::DestinationBehavior*)::g::Fuse::Animations::DestinationBehavior::New1(::TYPES[30/*Fuse.Animations.DestinationBehavior<float2>*/]));
    ctor_2();
    _calc.Init();
}

// private void AnimUpdate(float2 value) [instance]
void PlotCurvePoint::AnimUpdate(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Charting.PlotCurvePoint", "AnimUpdate(float2)");
    ::g::Uno::Float2 p = _calc.ValueToPos(value);
    X(p.X);
    Y(p.Y);
}

// public Fuse.Animations.AttractorConfig get_Attractor() [instance]
::g::Fuse::Animations::AttractorConfig* PlotCurvePoint::Attractor()
{
    uStackFrame __("Fuse.Charting.PlotCurvePoint", "get_Attractor()");
    return uAs< ::g::Fuse::Animations::AttractorConfig*>(uPtr(_animator)->Motion, ::TYPES[33/*Fuse.Animations.AttractorConfig*/]);
}

// public void set_Attractor(Fuse.Animations.AttractorConfig value) [instance]
void PlotCurvePoint::Attractor(::g::Fuse::Animations::AttractorConfig* value)
{
    uStackFrame __("Fuse.Charting.PlotCurvePoint", "set_Attractor(Fuse.Animations.AttractorConfig)");
    uPtr(_animator)->Motion = value;
}

// public float get_Offset() [instance]
float PlotCurvePoint::Offset()
{
    return _calc.Offset;
}

// public void set_Offset(float value) [instance]
void PlotCurvePoint::Offset(float value)
{
    _calc.Offset = value;
}

// public Fuse.Charting.PlotPointStyle get_Style() [instance]
int32_t PlotCurvePoint::Style()
{
    return _calc.Style;
}

// public void set_Style(Fuse.Charting.PlotPointStyle value) [instance]
void PlotCurvePoint::Style(int32_t value)
{
    _calc.Style = value;
}

// public PlotCurvePoint New() [static]
PlotCurvePoint* PlotCurvePoint::New3()
{
    PlotCurvePoint* obj1 = (PlotCurvePoint*)uNew(PlotCurvePoint_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotData.uno
// ---------------------------------------------------------------

// public sealed class PlotData
// {
static void PlotData_build(uType* type)
{
    ::STRINGS[24] = uString::Const("Could not find PlotBehavior");
    ::STRINGS[37] = uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotData.uno");
    ::STRINGS[23] = uString::Const("OnRooted");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotData_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(PlotData_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(PlotData_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(PlotData_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(PlotData_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotData_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotData_type, interface6),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(PlotData_type, interface7),
        ::g::Fuse::IDeferred_typeof(), offsetof(PlotData_type, interface8),
        ::g::Fuse::Reactive::ItemsWindowList__IListener_typeof()->MakeType(::g::Fuse::Reactive::WindowItem_typeof(), NULL), offsetof(PlotData_type, interface9),
        ::g::Fuse::Charting::IPlotDataItemProvider_typeof(), offsetof(PlotData_type, interface10));
    type->SetFields(39,
        ::g::Fuse::Charting::AxisFilter_typeof(), offsetof(PlotData, _filter), 0,
        ::g::Fuse::Charting::LabelFilterObservable_typeof(), offsetof(PlotData, _obsFilter), 0,
        ::g::Fuse::Charting::PlotBehavior_typeof(), offsetof(PlotData, _plot), 0,
        ::g::Fuse::Charting::DataSeries_typeof(), offsetof(PlotData, _Series), 0,
        ::g::Uno::Int_typeof(), offsetof(PlotData, _SeriesIndex), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_ExcludeExtend", NULL, (void*)PlotData__get_ExcludeExtend_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ExcludeExtend", NULL, (void*)PlotData__set_ExcludeExtend_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)PlotData__New4_fn, 0, true, type, 0),
        new uFunction("get_Series", NULL, (void*)PlotData__get_Series_fn, 0, false, ::g::Fuse::Charting::DataSeries_typeof(), 0),
        new uFunction("set_Series", NULL, (void*)PlotData__set_Series_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::DataSeries_typeof()),
        new uFunction("get_SeriesIndex", NULL, (void*)PlotData__get_SeriesIndex_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_SeriesIndex", NULL, (void*)PlotData__set_SeriesIndex_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_SkipEnds", NULL, (void*)PlotData__get_SkipEnds_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_SkipEnds", NULL, (void*)PlotData__set_SkipEnds_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()));
}

PlotData_type* PlotData_typeof()
{
    static uSStrong<PlotData_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Instantiator_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(PlotData);
    options.TypeSize = sizeof(PlotData_type);
    type = (PlotData_type*)uClassType::New("Fuse.Charting.PlotData", options);
    type->fp_build_ = PlotData_build;
    type->fp_ctor_ = (void*)PlotData__New4_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PlotData__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PlotData__OnUnrooted_fn;
    type->interface9.fp_SetValid = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerSetValid_fn;
    type->interface9.fp_SetFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerSetFailed_fn;
    type->interface7.fp_TryGetDataProvider = (void(*)(uObject*, ::g::Fuse::Node*, int32_t*, uObject**, int32_t*))::g::Fuse::Reactive::Instantiator__FuseNodeISubtreeDataProviderTryGetDataProvider_fn;
    type->interface9.fp_AddedWindowItem = (void(*)(uObject*, int32_t*, ::g::Fuse::Reactive::WindowListItem*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerAddedWindowItem_fn;
    type->interface8.fp_Perform = (void(*)(uObject*, bool*))::g::Fuse::Reactive::Instantiator__FuseIDeferredPerform_fn;
    type->interface9.fp_RemovedWindowItem = (void(*)(uObject*, ::g::Fuse::Reactive::WindowListItem*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerRemovedWindowItem_fn;
    type->interface9.fp_OnCurrentDataChanged = (void(*)(uObject*, ::g::Fuse::Reactive::WindowListItem*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerOnCurrentDataChanged_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public PlotData()
void PlotData__ctor_5_fn(PlotData* __this)
{
    __this->ctor_5();
}

// public bool get_ExcludeExtend()
void PlotData__get_ExcludeExtend_fn(PlotData* __this, bool* __retval)
{
    *__retval = __this->ExcludeExtend();
}

// public void set_ExcludeExtend(bool value)
void PlotData__set_ExcludeExtend_fn(PlotData* __this, bool* value)
{
    __this->ExcludeExtend(*value);
}

// public PlotData New()
void PlotData__New4_fn(PlotData** __retval)
{
    *__retval = PlotData::New4();
}

// protected override sealed void OnRooted()
void PlotData__OnRooted_fn(PlotData* __this)
{
    uStackFrame __("Fuse.Charting.PlotData", "OnRooted()");
    ::g::Fuse::Reactive::Instantiator__OnRooted_fn(__this);
    __this->_plot = ::g::Fuse::Charting::PlotBehavior::FindPlot(__this);

    if (__this->_plot == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[24/*"Could not f...*/], __this, ::STRINGS[37/*"/usr/local/...*/], 87, ::STRINGS[23/*"OnRooted"*/], NULL);
    else
    {
        uPtr(__this->_filter)->Plot = __this->_plot;
        __this->UpdateFilter();
    }
}

// protected override sealed void OnUnrooted()
void PlotData__OnUnrooted_fn(PlotData* __this)
{
    uStackFrame __("Fuse.Charting.PlotData", "OnUnrooted()");

    if (__this->_plot != NULL)
    {
        uPtr(__this->_filter)->Plot = NULL;
        __this->_plot = NULL;
        __this->_obsFilter = NULL;
        __this->SetItems(NULL);
    }

    ::g::Fuse::Reactive::Instantiator__OnUnrooted_fn(__this);
}

// public generated Fuse.Charting.DataSeries get_Series()
void PlotData__get_Series_fn(PlotData* __this, ::g::Fuse::Charting::DataSeries** __retval)
{
    *__retval = __this->Series();
}

// public generated void set_Series(Fuse.Charting.DataSeries value)
void PlotData__set_Series_fn(PlotData* __this, ::g::Fuse::Charting::DataSeries* value)
{
    __this->Series(value);
}

// public generated int get_SeriesIndex()
void PlotData__get_SeriesIndex_fn(PlotData* __this, int32_t* __retval)
{
    *__retval = __this->SeriesIndex();
}

// public generated void set_SeriesIndex(int value)
void PlotData__set_SeriesIndex_fn(PlotData* __this, int32_t* value)
{
    __this->SeriesIndex(*value);
}

// public int2 get_SkipEnds()
void PlotData__get_SkipEnds_fn(PlotData* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->SkipEnds();
}

// public void set_SkipEnds(int2 value)
void PlotData__set_SkipEnds_fn(PlotData* __this, ::g::Uno::Int2* value)
{
    __this->SkipEnds(*value);
}

// private void UpdateFilter()
void PlotData__UpdateFilter_fn(PlotData* __this)
{
    __this->UpdateFilter();
}

// public PlotData() [instance]
void PlotData::ctor_5()
{
    uStackFrame __("Fuse.Charting.PlotData", ".ctor()");
    _filter = ::g::Fuse::Charting::AxisFilter::New1();
    ctor_3();
    uPtr(_filter)->SetExcludeExtend(false);
    uPtr(_filter)->IsCountAxis = true;
}

// public bool get_ExcludeExtend() [instance]
bool PlotData::ExcludeExtend()
{
    uStackFrame __("Fuse.Charting.PlotData", "get_ExcludeExtend()");
    return uPtr(_filter)->ExcludeExtend();
}

// public void set_ExcludeExtend(bool value) [instance]
void PlotData::ExcludeExtend(bool value)
{
    uStackFrame __("Fuse.Charting.PlotData", "set_ExcludeExtend(bool)");

    if (uPtr(_filter)->SetExcludeExtend(value))
        UpdateFilter();
}

// public generated Fuse.Charting.DataSeries get_Series() [instance]
::g::Fuse::Charting::DataSeries* PlotData::Series()
{
    return _Series;
}

// public generated void set_Series(Fuse.Charting.DataSeries value) [instance]
void PlotData::Series(::g::Fuse::Charting::DataSeries* value)
{
    _Series = value;
}

// public generated int get_SeriesIndex() [instance]
int32_t PlotData::SeriesIndex()
{
    return _SeriesIndex;
}

// public generated void set_SeriesIndex(int value) [instance]
void PlotData::SeriesIndex(int32_t value)
{
    _SeriesIndex = value;
}

// public int2 get_SkipEnds() [instance]
::g::Uno::Int2 PlotData::SkipEnds()
{
    uStackFrame __("Fuse.Charting.PlotData", "get_SkipEnds()");
    return uPtr(_filter)->SkipEnds();
}

// public void set_SkipEnds(int2 value) [instance]
void PlotData::SkipEnds(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.Charting.PlotData", "set_SkipEnds(int2)");

    if (uPtr(_filter)->SetSkipEnds(value))
        UpdateFilter();
}

// private void UpdateFilter() [instance]
void PlotData::UpdateFilter()
{
    uStackFrame __("Fuse.Charting.PlotData", "UpdateFilter()");
    ::g::Fuse::Charting::LabelFilterObservable* collection1;

    if (_plot == NULL)
        return;

    uObject* items = (Series() != NULL) ? (uObject*)uPtr(_plot)->GetDataItemsObservable(Series()) : (uObject*)uPtr(_plot)->GetDataItemsObservable1(SeriesIndex());

    if ((_obsFilter == NULL) && uPtr(_filter)->RequireFilter())
        _obsFilter = (collection1 = ::g::Fuse::Charting::LabelFilterObservable::New1(), uPtr(collection1)->Filter = _filter, uPtr(collection1)->Source(items), items, collection1);

    uObject* useItems = items;

    if (_obsFilter != NULL)
    {
        uPtr(_obsFilter)->Update();
        useItems = _obsFilter;
    }

    SetItemsDerivedRooting(useItems);
}

// public PlotData New() [static]
PlotData* PlotData::New4()
{
    PlotData* obj2 = (PlotData*)uNew(PlotData_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotDataItem.uno
// -------------------------------------------------------------------

// internal sealed class PlotDataItemWatcher<T>
// {
static void PlotDataItemWatcher_build(uType* type)
{
    ::STRINGS[38] = uString::Const("Must be used within a Plot");
    ::STRINGS[39] = uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotDataItem.uno");
    ::STRINGS[40] = uString::Const("GetDataContext");
    ::TYPES[42] = ::g::Fuse::Charting::IPlotDataItemListener_typeof();
    ::TYPES[43] = ::g::Fuse::Charting::IPlotDataItem__ChangedHandler_typeof();
    ::TYPES[44] = ::g::Fuse::Charting::IPlotDataItemProvider_typeof();
    ::TYPES[45] = ::g::Fuse::Node__ISubtreeDataProvider_typeof();
    type->SetPrecalc(
        ::g::Fuse::Charting::IPlotDataItemListener_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PlotDataItemWatcher_type, interface0));
    type->SetFields(0,
        ::TYPES[42/*Fuse.Charting.IPlotDataItemListener`1*/]->MakeType(type->T(0), NULL), offsetof(PlotDataItemWatcher, _listener), 0,
        type->T(0), offsetof(PlotDataItemWatcher, _point), 0);
}

PlotDataItemWatcher_type* PlotDataItemWatcher_typeof()
{
    static uSStrong<PlotDataItemWatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(PlotDataItemWatcher);
    options.TypeSize = sizeof(PlotDataItemWatcher_type);
    type = (PlotDataItemWatcher_type*)uClassType::New("Fuse.Charting.PlotDataItemWatcher`1", options);
    type->fp_build_ = PlotDataItemWatcher_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))PlotDataItemWatcher__Dispose_fn;
    return type;
}

// public PlotDataItemWatcher(Fuse.Node origin, Fuse.Charting.IPlotDataItemListener<T> listener)
void PlotDataItemWatcher__ctor__fn(PlotDataItemWatcher* __this, ::g::Fuse::Node* origin, uObject* listener)
{
    __this->ctor_(origin, listener);
}

// public void Dispose()
void PlotDataItemWatcher__Dispose_fn(PlotDataItemWatcher* __this)
{
    __this->Dispose();
}

// internal T GetDataContext(Fuse.Node from)
void PlotDataItemWatcher__GetDataContext_fn(PlotDataItemWatcher* __this, ::g::Fuse::Node* from, ::g::Fuse::Charting::IPlotDataItem** __retval)
{
    *__retval = __this->GetDataContext(from);
}

// public PlotDataItemWatcher New(Fuse.Node origin, Fuse.Charting.IPlotDataItemListener<T> listener)
void PlotDataItemWatcher__New1_fn(uType* __type, ::g::Fuse::Node* origin, uObject* listener, PlotDataItemWatcher** __retval)
{
    *__retval = PlotDataItemWatcher::New1(__type, origin, listener);
}

// private void OnChanged()
void PlotDataItemWatcher__OnChanged_fn(PlotDataItemWatcher* __this)
{
    __this->OnChanged();
}

// public PlotDataItemWatcher(Fuse.Node origin, Fuse.Charting.IPlotDataItemListener<T> listener) [instance]
void PlotDataItemWatcher::ctor_(::g::Fuse::Node* origin, uObject* listener)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Charting.IPlotDataItemListener<T>*/),
    };
    uStackFrame __("Fuse.Charting.PlotDataItemWatcher`1", ".ctor(Fuse.Node,Fuse.Charting.IPlotDataItemListener<T>)");
    _listener = listener;
    _point = GetDataContext(origin);

    if (_point != NULL)
    {
        ::g::Fuse::Charting::IPlotDataItemListener::OnNewData_ex(uInterface(uPtr(_listener), __types[0]), _point);
        uPtr(_point)->add_Changed(uDelegate::New(::TYPES[43/*Fuse.Charting.IPlotDataItem.ChangedHandler*/], (void*)PlotDataItemWatcher__OnChanged_fn, this));
    }
}

// public void Dispose() [instance]
void PlotDataItemWatcher::Dispose()
{
    uStackFrame __("Fuse.Charting.PlotDataItemWatcher`1", "Dispose()");

    if (_point != NULL)
    {
        uPtr(_point)->remove_Changed(uDelegate::New(::TYPES[43/*Fuse.Charting.IPlotDataItem.ChangedHandler*/], (void*)PlotDataItemWatcher__OnChanged_fn, this));
        _point = NULL;
    }

    _listener = NULL;
}

// internal T GetDataContext(Fuse.Node from) [instance]
::g::Fuse::Charting::IPlotDataItem* PlotDataItemWatcher::GetDataContext(::g::Fuse::Node* from)
{
    uStackFrame __("Fuse.Charting.PlotDataItemWatcher`1", "GetDataContext(Fuse.Node)");
    ::g::Fuse::Node* n = uPtr(from)->ContextParent();
    ::g::Fuse::Node* p = from;

    while (n != NULL)
    {
        if (uIs(n, ::TYPES[44/*Fuse.Charting.IPlotDataItemProvider*/]))
        {
            uObject* o;
            ::g::Fuse::Node__ISubtreeDataProvider::TryGetDataProvider(uInterface(uPtr(uAs<uObject*>(n, ::TYPES[45/*Fuse.Node.ISubtreeDataProvider*/])), ::TYPES[45/*Fuse.Node.ISubtreeDataProvider*/]), p, 1, &o);
            return uAs< ::g::Fuse::Charting::IPlotDataItem*>(o, __type->T(0));
        }

        p = n;
        n = uPtr(n)->ContextParent();
    }

    ::g::Fuse::Diagnostics::UserError(::STRINGS[38/*"Must be use...*/], from, ::STRINGS[39/*"/usr/local/...*/], 70, ::STRINGS[40/*"GetDataCont...*/], NULL);
    return NULL;
}

// private void OnChanged() [instance]
void PlotDataItemWatcher::OnChanged()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Charting.IPlotDataItemListener<T>*/),
    };
    uStackFrame __("Fuse.Charting.PlotDataItemWatcher`1", "OnChanged()");
    ::g::Fuse::Charting::IPlotDataItemListener::OnNewData_ex(uInterface(uPtr(_listener), __types[0]), _point);
}

// public PlotDataItemWatcher New(Fuse.Node origin, Fuse.Charting.IPlotDataItemListener<T> listener) [static]
PlotDataItemWatcher* PlotDataItemWatcher::New1(uType* __type, ::g::Fuse::Node* origin, uObject* listener)
{
    PlotDataItemWatcher* obj1 = (PlotDataItemWatcher*)uNew(__type);
    obj1->ctor_(origin, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotDataItem.uno
// -------------------------------------------------------------------

// internal sealed class PlotDataPoint
// {
// static generated PlotDataPoint()
static void PlotDataPoint__cctor__fn(uType* __type)
{
    PlotDataPoint::NameKeys_ = uArray::Init<uString*>(::TYPES[1/*string[]*/], 14, ::STRINGS[9/*"x"*/], ::STRINGS[10/*"y"*/], ::STRINGS[11/*"z"*/], ::STRINGS[12/*"w"*/], ::STRINGS[41/*"source"*/], ::STRINGS[42/*"screenRel"*/], ::STRINGS[43/*"rel"*/], ::STRINGS[44/*"cumulative"*/], ::STRINGS[45/*"accumulated"*/], ::STRINGS[46/*"cumulativeW...*/], ::STRINGS[47/*"accumulated...*/], ::STRINGS[48/*"weight"*/], ::STRINGS[2/*"label"*/], ::STRINGS[4/*"object"*/]);
    PlotDataPoint::Empty_ = ::g::Fuse::Charting::DataSeries::New2();
}

static void PlotDataPoint_build(uType* type)
{
    ::STRINGS[9] = uString::Const("x");
    ::STRINGS[10] = uString::Const("y");
    ::STRINGS[11] = uString::Const("z");
    ::STRINGS[12] = uString::Const("w");
    ::STRINGS[41] = uString::Const("source");
    ::STRINGS[42] = uString::Const("screenRel");
    ::STRINGS[43] = uString::Const("rel");
    ::STRINGS[44] = uString::Const("cumulative");
    ::STRINGS[45] = uString::Const("accumulated");
    ::STRINGS[46] = uString::Const("cumulativeWeight");
    ::STRINGS[47] = uString::Const("accumulatedWeight");
    ::STRINGS[48] = uString::Const("weight");
    ::STRINGS[2] = uString::Const("label");
    ::STRINGS[4] = uString::Const("object");
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Charting::DataSeries_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Charting::DataSeries_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IObject_typeof(), offsetof(::g::Fuse::Charting::IPlotDataItem_type, interface0));
    type->SetFields(1,
        ::g::Fuse::Charting::PlotBehavior_typeof(), offsetof(PlotDataPoint, Plot), 0,
        ::g::Fuse::Charting::Data_typeof(), offsetof(PlotDataPoint, Data), 0,
        ::g::Uno::Int_typeof(), offsetof(PlotDataPoint, Index), 0,
        ::g::Uno::Int_typeof(), offsetof(PlotDataPoint, SeriesIndex), 0,
        ::TYPES[1/*string[]*/], (uintptr_t)&PlotDataPoint::NameKeys_, uFieldFlagsStatic,
        ::g::Fuse::Charting::DataSeries_typeof(), (uintptr_t)&PlotDataPoint::Empty_, uFieldFlagsStatic);
}

::g::Fuse::Charting::IPlotDataItem_type* PlotDataPoint_typeof()
{
    static uSStrong< ::g::Fuse::Charting::IPlotDataItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Charting::IPlotDataItem_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PlotDataPoint);
    options.TypeSize = sizeof(::g::Fuse::Charting::IPlotDataItem_type);
    type = (::g::Fuse::Charting::IPlotDataItem_type*)uClassType::New("Fuse.Charting.PlotDataPoint", options);
    type->fp_build_ = PlotDataPoint_build;
    type->fp_ctor_ = (void*)PlotDataPoint__New1_fn;
    type->fp_cctor_ = PlotDataPoint__cctor__fn;
    type->fp_ContainsKey = (void(*)(::g::Fuse::Charting::IPlotDataItem*, uString*, bool*))PlotDataPoint__ContainsKey_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Charting::IPlotDataItem*, uString*, uObject**))PlotDataPoint__get_Item_fn;
    type->fp_get_Keys = (void(*)(::g::Fuse::Charting::IPlotDataItem*, uArray**))PlotDataPoint__get_Keys_fn;
    type->interface0.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))PlotDataPoint__ContainsKey_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, uString*, uObject**))PlotDataPoint__get_Item_fn;
    type->interface0.fp_get_Keys = (void(*)(uObject*, uArray**))PlotDataPoint__get_Keys_fn;
    return type;
}

// public generated PlotDataPoint()
void PlotDataPoint__ctor_1_fn(PlotDataPoint* __this)
{
    __this->ctor_1();
}

// public float4 get_AccumulatedValue()
void PlotDataPoint__get_AccumulatedValue_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->AccumulatedValue();
}

// public float4 get_AccumulatedWeight()
void PlotDataPoint__get_AccumulatedWeight_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->AccumulatedWeight();
}

// public override sealed bool ContainsKey(string key)
void PlotDataPoint__ContainsKey_fn(PlotDataPoint* __this, uString* key, bool* __retval)
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "ContainsKey(string)");

    for (int32_t i = 0; i < uPtr(PlotDataPoint::NameKeys_)->Length(); ++i)
        if (::g::Uno::String::op_Equality(uPtr(PlotDataPoint::NameKeys_)->Strong<uString*>(i), key))
            return *__retval = true, void();

    return *__retval = false, void();
}

// public float get_Count()
void PlotDataPoint__get_Count_fn(PlotDataPoint* __this, float* __retval)
{
    *__retval = __this->Count();
}

// public float4 get_CumulativeValue()
void PlotDataPoint__get_CumulativeValue_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CumulativeValue();
}

// public float4 get_CumulativeWeight()
void PlotDataPoint__get_CumulativeWeight_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CumulativeWeight();
}

// public object GetValue(string key)
void PlotDataPoint__GetValue1_fn(PlotDataPoint* __this, uString* key, uObject** __retval)
{
    *__retval = __this->GetValue1(key);
}

// public override sealed object get_Item(string key)
void PlotDataPoint__get_Item_fn(PlotDataPoint* __this, uString* key, uObject** __retval)
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_Item(string)");
    uObject* q = __this->GetValue1(key);
    return *__retval = q, void();
}

// public override sealed string[] get_Keys()
void PlotDataPoint__get_Keys_fn(PlotDataPoint* __this, uArray** __retval)
{
    return *__retval = PlotDataPoint::NameKeys_, void();
}

// public generated PlotDataPoint New()
void PlotDataPoint__New1_fn(PlotDataPoint** __retval)
{
    *__retval = PlotDataPoint::New1();
}

// public float4 get_RawValue()
void PlotDataPoint__get_RawValue_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->RawValue();
}

// public float4 get_RelativeValue()
void PlotDataPoint__get_RelativeValue_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->RelativeValue();
}

// public float4 get_ScreenRelativeValue()
void PlotDataPoint__get_ScreenRelativeValue_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ScreenRelativeValue();
}

// private Fuse.Charting.DataSeries get_Series()
void PlotDataPoint__get_Series_fn(PlotDataPoint* __this, ::g::Fuse::Charting::DataSeries** __retval)
{
    *__retval = __this->Series();
}

// public void Update(Fuse.Charting.Data data, int index)
void PlotDataPoint__Update_fn(PlotDataPoint* __this, ::g::Fuse::Charting::Data* data, int32_t* index)
{
    __this->Update(data, *index);
}

// public Uno.UX.Size get_W()
void PlotDataPoint__get_W_fn(PlotDataPoint* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->W();
}

// public float4 get_Weight()
void PlotDataPoint__get_Weight_fn(PlotDataPoint* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Weight();
}

// public Uno.UX.Size get_X()
void PlotDataPoint__get_X_fn(PlotDataPoint* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->X();
}

// public Uno.UX.Size get_Y()
void PlotDataPoint__get_Y_fn(PlotDataPoint* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->Y();
}

// public Uno.UX.Size get_Z()
void PlotDataPoint__get_Z_fn(PlotDataPoint* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->Z();
}

uSStrong<uArray*> PlotDataPoint::NameKeys_;
uSStrong< ::g::Fuse::Charting::DataSeries*> PlotDataPoint::Empty_;

// public generated PlotDataPoint() [instance]
void PlotDataPoint::ctor_1()
{
    ctor_();
}

// public float4 get_AccumulatedValue() [instance]
::g::Uno::Float4 PlotDataPoint::AccumulatedValue()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_AccumulatedValue()");
    return ::g::Uno::Float4__op_Subtraction2(CumulativeValue(), RawValue());
}

// public float4 get_AccumulatedWeight() [instance]
::g::Uno::Float4 PlotDataPoint::AccumulatedWeight()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_AccumulatedWeight()");
    return ::g::Uno::Float4__op_Division2(AccumulatedValue(), uPtr(uPtr(Series())->Stats)->Total);
}

// public float get_Count() [instance]
float PlotDataPoint::Count()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_Count()");
    return (float)uPtr(uPtr(Plot)->PlotStats())->Count;
}

// public float4 get_CumulativeValue() [instance]
::g::Uno::Float4 PlotDataPoint::CumulativeValue()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_CumulativeValue()");
    return uPtr(Data)->CumulativeValue;
}

// public float4 get_CumulativeWeight() [instance]
::g::Uno::Float4 PlotDataPoint::CumulativeWeight()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_CumulativeWeight()");
    return ::g::Uno::Float4__op_Division2(CumulativeValue(), uPtr(uPtr(Series())->Stats)->Total);
}

// public object GetValue(string key) [instance]
uObject* PlotDataPoint::GetValue1(uString* key)
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "GetValue(string)");

    if (::g::Uno::String::op_Equality(key, ::STRINGS[9/*"x"*/]))
        return uBox(::g::Uno::UX::Size_typeof(), X());

    if (::g::Uno::String::op_Equality(key, ::STRINGS[10/*"y"*/]))
        return uBox(::g::Uno::UX::Size_typeof(), Y());

    if (::g::Uno::String::op_Equality(key, ::STRINGS[11/*"z"*/]))
        return uBox(::g::Uno::UX::Size_typeof(), Z());

    if (::g::Uno::String::op_Equality(key, ::STRINGS[12/*"w"*/]))
        return uBox(::g::Uno::UX::Size_typeof(), W());

    if (::g::Uno::String::op_Equality(key, ::STRINGS[42/*"screenRel"*/]))
        return uBox(::g::Uno::Float4_typeof(), ScreenRelativeValue());

    if (::g::Uno::String::op_Equality(key, ::STRINGS[43/*"rel"*/]))
        return uBox(::g::Uno::Float4_typeof(), RelativeValue());

    if (::g::Uno::String::op_Equality(key, ::STRINGS[41/*"source"*/]))
        return uBox(::g::Uno::Float4_typeof(), RawValue());

    if (::g::Uno::String::op_Equality(key, ::STRINGS[44/*"cumulative"*/]))
        return uBox(::g::Uno::Float4_typeof(), CumulativeValue());

    if (::g::Uno::String::op_Equality(key, ::STRINGS[45/*"accumulated"*/]))
        return uBox(::g::Uno::Float4_typeof(), AccumulatedValue());

    if (::g::Uno::String::op_Equality(key, ::STRINGS[46/*"cumulativeW...*/]))
        return uBox(::g::Uno::Float4_typeof(), CumulativeWeight());

    if (::g::Uno::String::op_Equality(key, ::STRINGS[47/*"accumulated...*/]))
        return uBox(::g::Uno::Float4_typeof(), AccumulatedWeight());

    if (::g::Uno::String::op_Equality(key, ::STRINGS[48/*"weight"*/]))
        return uBox(::g::Uno::Float4_typeof(), Weight());

    if (::g::Uno::String::op_Equality(key, ::STRINGS[2/*"label"*/]))
        return uPtr(Data)->Label();

    if (::g::Uno::String::op_Equality(key, ::STRINGS[4/*"object"*/]))
        return uPtr(Data)->SourceObject();

    return NULL;
}

// public float4 get_RawValue() [instance]
::g::Uno::Float4 PlotDataPoint::RawValue()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_RawValue()");
    return uPtr(Data)->Value;
}

// public float4 get_RelativeValue() [instance]
::g::Uno::Float4 PlotDataPoint::RelativeValue()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_RelativeValue()");
    return uPtr(uPtr(Plot)->PlotStats())->GetRelativeValue1(RawValue());
}

// public float4 get_ScreenRelativeValue() [instance]
::g::Uno::Float4 PlotDataPoint::ScreenRelativeValue()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_ScreenRelativeValue()");
    return uPtr(Plot)->ScreenValue(uPtr(uPtr(Plot)->PlotStats())->GetRelativeValue1(RawValue()));
}

// private Fuse.Charting.DataSeries get_Series() [instance]
::g::Fuse::Charting::DataSeries* PlotDataPoint::Series()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_Series()");
    ::g::Fuse::Charting::DataSeries* ret2;
    uObject* series = uPtr(Plot)->Series();

    if ((SeriesIndex < 0) || (SeriesIndex >= ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(series), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Charting.DataSeries>*/]))))
        return PlotDataPoint::Empty_;

    return (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(series), ::TYPES[19/*Uno.Collections.IList<Fuse.Charting.DataSeries>*/]), uCRef<int32_t>(SeriesIndex), &ret2), ret2);
}

// public void Update(Fuse.Charting.Data data, int index) [instance]
void PlotDataPoint::Update(::g::Fuse::Charting::Data* data, int32_t index)
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "Update(Fuse.Charting.Data,int)");
    Data = data;
    Index = index;
    OnChanged();
}

// public Uno.UX.Size get_W() [instance]
::g::Uno::UX::Size PlotDataPoint::W()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_W()");
    return ::g::Uno::UX::Size__New1(ScreenRelativeValue().W * 100.0f, 4);
}

// public float4 get_Weight() [instance]
::g::Uno::Float4 PlotDataPoint::Weight()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_Weight()");
    return ::g::Uno::Float4__op_Division2(RawValue(), uPtr(uPtr(Series())->Stats)->Total);
}

// public Uno.UX.Size get_X() [instance]
::g::Uno::UX::Size PlotDataPoint::X()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_X()");
    return ::g::Uno::UX::Size__New1(ScreenRelativeValue().X * 100.0f, 4);
}

// public Uno.UX.Size get_Y() [instance]
::g::Uno::UX::Size PlotDataPoint::Y()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_Y()");
    return ::g::Uno::UX::Size__New1(ScreenRelativeValue().Y * 100.0f, 4);
}

// public Uno.UX.Size get_Z() [instance]
::g::Uno::UX::Size PlotDataPoint::Z()
{
    uStackFrame __("Fuse.Charting.PlotDataPoint", "get_Z()");
    return ::g::Uno::UX::Size__New1(ScreenRelativeValue().Z * 100.0f, 4);
}

// public generated PlotDataPoint New() [static]
PlotDataPoint* PlotDataPoint::New1()
{
    PlotDataPoint* obj1 = (PlotDataPoint*)uNew(PlotDataPoint_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotExpression.uno
// ---------------------------------------------------------------------

// private sealed class PlotExpression.PlotDataSubscription<T>
// {
static void PlotExpression__PlotDataSubscription_build(uType* type)
{
    ::TYPES[46] = ::g::Fuse::Charting::PlotDataItemWatcher_typeof();
    ::TYPES[47] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Fuse::Charting::PlotExpression_typeof());
    type->SetPrecalc(
        ::g::Fuse::Charting::PlotDataItemWatcher_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PlotExpression__PlotDataSubscription_type, interface0),
        ::g::Fuse::Charting::IPlotDataItemListener_typeof()->MakeType(type->T(0), NULL), offsetof(PlotExpression__PlotDataSubscription_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Charting::PlotExpression_typeof(), offsetof(PlotExpression__PlotDataSubscription, _expr), 0,
        ::TYPES[47/*Fuse.Reactive.IListener*/], offsetof(PlotExpression__PlotDataSubscription, _listener), 0,
        ::g::Uno::String_typeof(), offsetof(PlotExpression__PlotDataSubscription, _key), 0,
        ::TYPES[46/*Fuse.Charting.PlotDataItemWatcher`1*/]->MakeType(type->T(0), NULL), offsetof(PlotExpression__PlotDataSubscription, _watcher), 0,
        ::g::Fuse::Charting::PlotExpression__Field_typeof(), offsetof(PlotExpression__PlotDataSubscription, _field), 0);
}

PlotExpression__PlotDataSubscription_type* PlotExpression__PlotDataSubscription_typeof()
{
    static uSStrong<PlotExpression__PlotDataSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(PlotExpression__PlotDataSubscription);
    options.TypeSize = sizeof(PlotExpression__PlotDataSubscription_type);
    type = (PlotExpression__PlotDataSubscription_type*)uClassType::New("Fuse.Charting.PlotExpression.PlotDataSubscription`1", options);
    type->fp_build_ = PlotExpression__PlotDataSubscription_build;
    type->interface1.fp_OnNewData = (void(*)(uObject*, void*))PlotExpression__PlotDataSubscription__FuseChartingIPlotDataItemListenerTOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))PlotExpression__PlotDataSubscription__Dispose_fn;
    return type;
}

// public PlotDataSubscription(Fuse.Charting.PlotExpression expr, Fuse.Node origin, string key, Fuse.Charting.PlotExpression.Field field, Fuse.Reactive.IListener listener)
void PlotExpression__PlotDataSubscription__ctor__fn(PlotExpression__PlotDataSubscription* __this, ::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Node* origin, uString* key, int32_t* field, uObject* listener)
{
    __this->ctor_(expr, origin, key, *field, listener);
}

// public void Dispose()
void PlotExpression__PlotDataSubscription__Dispose_fn(PlotExpression__PlotDataSubscription* __this)
{
    __this->Dispose();
}

// private void Fuse.Charting.IPlotDataItemListener<T>.OnNewData(T entry)
void PlotExpression__PlotDataSubscription__FuseChartingIPlotDataItemListenerTOnNewData_fn(PlotExpression__PlotDataSubscription* __this, ::g::Fuse::Charting::IPlotDataItem* entry)
{
    uStackFrame __("Fuse.Charting.PlotExpression.PlotDataSubscription`1", "Fuse.Charting.IPlotDataItemListener<T>.OnNewData(T)");
    uObject* q = uPtr(entry)->Item(__this->_key);

    if (q != NULL)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[47/*Fuse.Reactive.IListener*/]), (uObject*)__this->_expr, ::g::Fuse::Charting::PlotExpression::AccessField(__this->_field, q));
}

// public PlotDataSubscription New(Fuse.Charting.PlotExpression expr, Fuse.Node origin, string key, Fuse.Charting.PlotExpression.Field field, Fuse.Reactive.IListener listener)
void PlotExpression__PlotDataSubscription__New1_fn(uType* __type, ::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Node* origin, uString* key, int32_t* field, uObject* listener, PlotExpression__PlotDataSubscription** __retval)
{
    *__retval = PlotExpression__PlotDataSubscription::New1(__type, expr, origin, key, *field, listener);
}

// public PlotDataSubscription(Fuse.Charting.PlotExpression expr, Fuse.Node origin, string key, Fuse.Charting.PlotExpression.Field field, Fuse.Reactive.IListener listener) [instance]
void PlotExpression__PlotDataSubscription::ctor_(::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Node* origin, uString* key, int32_t field, uObject* listener)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Charting.PlotDataItemWatcher<T>*/),
    };
    uStackFrame __("Fuse.Charting.PlotExpression.PlotDataSubscription`1", ".ctor(Fuse.Charting.PlotExpression,Fuse.Node,string,Fuse.Charting.PlotExpression.Field,Fuse.Reactive.IListener)");
    _expr = expr;
    _listener = listener;
    _key = key;
    _field = field;
    _watcher = ((::g::Fuse::Charting::PlotDataItemWatcher*)::g::Fuse::Charting::PlotDataItemWatcher::New1(__types[0], origin, (uObject*)this));
}

// public void Dispose() [instance]
void PlotExpression__PlotDataSubscription::Dispose()
{
    uStackFrame __("Fuse.Charting.PlotExpression.PlotDataSubscription`1", "Dispose()");
    _expr = NULL;
    _listener = NULL;
    uPtr(_watcher)->Dispose();
    _watcher = NULL;
}

// public PlotDataSubscription New(Fuse.Charting.PlotExpression expr, Fuse.Node origin, string key, Fuse.Charting.PlotExpression.Field field, Fuse.Reactive.IListener listener) [static]
PlotExpression__PlotDataSubscription* PlotExpression__PlotDataSubscription::New1(uType* __type, ::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Node* origin, uString* key, int32_t field, uObject* listener)
{
    PlotExpression__PlotDataSubscription* obj1 = (PlotExpression__PlotDataSubscription*)uNew(__type);
    obj1->ctor_(expr, origin, key, field, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotElement.uno
// ------------------------------------------------------------------

// public abstract class PlotElement
// {
static void PlotElement_build(uType* type)
{
    ::TYPES[41] = ::g::Fuse::Charting::PlotDataItemWatcher_typeof()->MakeType(::g::Fuse::Charting::PlotDataPoint_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotElement_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(PlotElement_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(PlotElement_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(PlotElement_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(PlotElement_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotElement_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotElement_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(PlotElement_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(PlotElement_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(PlotElement_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(PlotElement_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(PlotElement_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(PlotElement_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(PlotElement_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(PlotElement_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(PlotElement_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(PlotElement_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(PlotElement_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(PlotElement_type, interface18),
        ::g::Fuse::Charting::IPlotDataItemListener_typeof()->MakeType(::g::Fuse::Charting::PlotDataPoint_typeof(), NULL), offsetof(PlotElement_type, interface19));
    type->SetFields(120,
        ::TYPES[41/*Fuse.Charting.PlotDataItemWatcher<Fuse.Charting.PlotDataPoint>*/], offsetof(PlotElement, _watcher), 0);
}

PlotElement_type* PlotElement_typeof()
{
    static uSStrong<PlotElement_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 121;
    options.InterfaceCount = 20;
    options.ObjectSize = sizeof(PlotElement);
    options.TypeSize = sizeof(PlotElement_type);
    type = (PlotElement_type*)uClassType::New("Fuse.Charting.PlotElement", options);
    type->fp_build_ = PlotElement_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PlotElement__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PlotElement__OnUnrooted_fn;
    type->interface19.fp_OnNewData = (void(*)(uObject*, void*))PlotElement__FuseChartingIPlotDataItemListenerFuseChartingPlotDataPointOnNewData_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal PlotElement()
void PlotElement__ctor_7_fn(PlotElement* __this)
{
    __this->ctor_7();
}

// private void Fuse.Charting.IPlotDataItemListener<Fuse.Charting.PlotDataPoint>.OnNewData(Fuse.Charting.PlotDataPoint entry)
void PlotElement__FuseChartingIPlotDataItemListenerFuseChartingPlotDataPointOnNewData_fn(PlotElement* __this, ::g::Fuse::Charting::PlotDataPoint* entry)
{
    uStackFrame __("Fuse.Charting.PlotElement", "Fuse.Charting.IPlotDataItemListener<Fuse.Charting.PlotDataPoint>.OnNewData(Fuse.Charting.PlotDataPoint)");
    __this->OnDataPointChanged(entry);
}

// protected override void OnRooted()
void PlotElement__OnRooted_fn(PlotElement* __this)
{
    uStackFrame __("Fuse.Charting.PlotElement", "OnRooted()");
    ::g::Fuse::Controls::Panel__OnRooted_fn(__this);
    __this->_watcher = ((::g::Fuse::Charting::PlotDataItemWatcher*)::g::Fuse::Charting::PlotDataItemWatcher::New1(::TYPES[41/*Fuse.Charting.PlotDataItemWatcher<Fuse.Charting.PlotDataPoint>*/], __this, (uObject*)__this));
}

// protected override void OnUnrooted()
void PlotElement__OnUnrooted_fn(PlotElement* __this)
{
    uStackFrame __("Fuse.Charting.PlotElement", "OnUnrooted()");
    uPtr(__this->_watcher)->Dispose();
    __this->_watcher = NULL;
    ::g::Fuse::Controls::Panel__OnUnrooted_fn(__this);
}

// internal PlotElement() [instance]
void PlotElement::ctor_7()
{
    ctor_6();
    SnapToPixels(true);
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotExpression.uno
// ---------------------------------------------------------------------

// public sealed class PlotExpression
// {
// static generated PlotExpression()
static void PlotExpression__cctor__fn(uType* __type)
{
    PlotExpression::_tokenSplit_ = uArray::Init<int32_t>(::g::Uno::Char_typeof()->Array(), 1, '.');
}

static void PlotExpression_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(PlotExpression, _idObject), 0,
        ::g::Uno::String_typeof(), offsetof(PlotExpression, _idProperty), 0,
        PlotExpression__Field_typeof(), offsetof(PlotExpression, _field), 0,
        ::g::Uno::String_typeof(), offsetof(PlotExpression, _Identifier), 0,
        ::g::Uno::Char_typeof()->Array(), (uintptr_t)&PlotExpression::_tokenSplit_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PlotExpression__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::Expression_type* PlotExpression_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PlotExpression);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Charting.PlotExpression", options);
    type->fp_build_ = PlotExpression_build;
    type->fp_cctor_ = PlotExpression__cctor__fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))PlotExpression__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))PlotExpression__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public PlotExpression(string identifier)
void PlotExpression__ctor_1_fn(PlotExpression* __this, uString* identifier)
{
    __this->ctor_1(identifier);
}

// private static object AccessField(Fuse.Charting.PlotExpression.Field f, object value)
void PlotExpression__AccessField_fn(int32_t* f, uObject* value, uObject** __retval)
{
    *__retval = PlotExpression::AccessField(*f, value);
}

// private generated string get_Identifier()
void PlotExpression__get_Identifier_fn(PlotExpression* __this, uString** __retval)
{
    *__retval = __this->Identifier();
}

// private generated void set_Identifier(string value)
void PlotExpression__set_Identifier_fn(PlotExpression* __this, uString* value)
{
    __this->Identifier(value);
}

// private static float4 LenientToFloat4(object value)
void PlotExpression__LenientToFloat4_fn(uObject* value, ::g::Uno::Float4* __retval)
{
    *__retval = PlotExpression::LenientToFloat4(value);
}

// public PlotExpression New(string identifier)
void PlotExpression__New1_fn(uString* identifier, PlotExpression** __retval)
{
    *__retval = PlotExpression::New1(identifier);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener)
void PlotExpression__Subscribe_fn(PlotExpression* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Charting.PlotExpression", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");

    if (::g::Uno::String::op_Equality(__this->_idObject, uString::Const("data")))
        return *__retval = (uObject*)((PlotExpression__PlotDataSubscription*)PlotExpression__PlotDataSubscription::New1(PlotExpression__PlotDataSubscription_typeof()->MakeType(::TYPES[3/*Fuse.Charting.PlotDataPoint*/], NULL), __this, ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(context), ::g::Fuse::Reactive::IContext_typeof())), __this->_idProperty, __this->_field, listener)), void();

    if (::g::Uno::String::op_Equality(__this->_idObject, uString::Const("axis")))
        return *__retval = (uObject*)((PlotExpression__PlotDataSubscription*)PlotExpression__PlotDataSubscription::New1(PlotExpression__PlotDataSubscription_typeof()->MakeType(::TYPES[2/*Fuse.Charting.AxisEntry*/], NULL), __this, ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(context), ::g::Fuse::Reactive::IContext_typeof())), __this->_idProperty, __this->_field, listener)), void();

    ::g::Fuse::Charting::PlotBehavior* plot = ::g::Fuse::Charting::PlotBehavior::FindPlot(::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(context), ::g::Fuse::Reactive::IContext_typeof())));

    if (plot == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Could not find a Plot"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotExpression.uno"), 89, uString::Const("Subscribe"), NULL);
        return *__retval = NULL, void();
    }

    return *__retval = (uObject*)PlotExpression__PlotSubscription::New1(__this, plot, ::g::Uno::UX::Selector__op_Implicit(__this->_idProperty), __this->_field, listener), void();
}

uSStrong<uArray*> PlotExpression::_tokenSplit_;

// public PlotExpression(string identifier) [instance]
void PlotExpression::ctor_1(uString* identifier)
{
    uStackFrame __("Fuse.Charting.PlotExpression", ".ctor(string)");
    ctor_();
    Identifier(identifier);
    uArray* parts = ::g::Uno::String::Split(uPtr(Identifier()), PlotExpression::_tokenSplit_);
    _idObject = ((uPtr(parts)->Length() > 0) ? (uString*)uPtr(parts)->Strong<uString*>(0) : NULL);
    _idProperty = ((parts->Length() > 1) ? (uString*)parts->Strong<uString*>(1) : NULL);
    uString* field = (parts->Length() > 2) ? (uString*)parts->Strong<uString*>(2) : NULL;

    if (::g::Uno::String::op_Inequality(_idObject, uString::Const("data")) && ::g::Uno::String::op_Inequality(_idObject, uString::Const("axis")))
    {
        field = _idProperty;
        _idProperty = _idObject;
        _idObject = uString::Const("plot");
    }

    if (::g::Uno::String::op_Equality(field, NULL))
        _field = 0;
    else if (::g::Uno::String::op_Equality(field, ::STRINGS[9/*"x"*/]))
        _field = 1;
    else if (::g::Uno::String::op_Equality(field, ::STRINGS[10/*"y"*/]))
        _field = 2;
    else if (::g::Uno::String::op_Equality(field, ::STRINGS[11/*"z"*/]))
        _field = 3;
    else if (::g::Uno::String::op_Equality(field, ::STRINGS[12/*"w"*/]))
        _field = 4;
    else
    {
        _field = 0;
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(uString::Const("Unrecognized field: "), field), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotExpression.uno"), 68, uString::Const(".ctor"), NULL);
    }
}

// private generated string get_Identifier() [instance]
uString* PlotExpression::Identifier()
{
    return _Identifier;
}

// private generated void set_Identifier(string value) [instance]
void PlotExpression::Identifier(uString* value)
{
    _Identifier = value;
}

// private static object AccessField(Fuse.Charting.PlotExpression.Field f, object value) [static]
uObject* PlotExpression::AccessField(int32_t f, uObject* value)
{
    uStackFrame __("Fuse.Charting.PlotExpression", "AccessField(Fuse.Charting.PlotExpression.Field,object)");
    PlotExpression_typeof()->Init();

    try
    {
        {
            switch (f)
            {
                case 0:
                    return value;
                case 1:
                    return uBox(::g::Uno::Float_typeof(), PlotExpression::LenientToFloat4(value).X);
                case 2:
                    return uBox(::g::Uno::Float_typeof(), PlotExpression::LenientToFloat4(value).Y);
                case 3:
                    return uBox(::g::Uno::Float_typeof(), PlotExpression::LenientToFloat4(value).Z);
                case 4:
                    return uBox(::g::Uno::Float_typeof(), PlotExpression::LenientToFloat4(value).W);
            }
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::g::Fuse::MarshalException_typeof()))
        {
            ::g::Fuse::MarshalException* e = (::g::Fuse::MarshalException*)__t.Exception;
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition1(uString::Const("Invalid field and/or conversion: "), uBox<int32_t>(PlotExpression__Field_typeof(), f)), value, uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotExpression.uno"), 111, uString::Const("AccessField"), NULL);
        }
        else         throw __t;
    }

    return NULL;
}

// private static float4 LenientToFloat4(object value) [static]
::g::Uno::Float4 PlotExpression::LenientToFloat4(uObject* value)
{
    uStackFrame __("Fuse.Charting.PlotExpression", "LenientToFloat4(object)");
    PlotExpression_typeof()->Init();

    if (uIs(value, ::g::Uno::Int4_typeof()))
    {
        ::g::Uno::Int4 o = uUnbox< ::g::Uno::Int4>(::g::Uno::Int4_typeof(), value);
        return ::g::Uno::Float4__New2((float)o.X, (float)o.Y, (float)o.Z, (float)o.W);
    }

    return ::g::Fuse::Marshal::ToFloat43(value);
}

// public PlotExpression New(string identifier) [static]
PlotExpression* PlotExpression::New1(uString* identifier)
{
    PlotExpression* obj1 = (PlotExpression*)uNew(PlotExpression_typeof());
    obj1->ctor_1(identifier);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBehavior.uno
// -------------------------------------------------------------------

// public enum PlotOrientation
uEnumType* PlotOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Charting.PlotOrientation", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Default", 0LL,
        "Horizontal", 1LL,
        "Vertical", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotPoint.uno
// ----------------------------------------------------------------

// public sealed class PlotPoint
// {
static void PlotPoint_build(uType* type)
{
    ::TYPES[30] = ::g::Fuse::Animations::DestinationBehavior_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[32] = ::g::Fuse::Animations::DestinationBehavior__ValueHandler_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[33] = ::g::Fuse::Animations::AttractorConfig_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Charting::PlotElement_type, interface18),
        ::g::Fuse::Charting::IPlotDataItemListener_typeof()->MakeType(::g::Fuse::Charting::PlotDataPoint_typeof(), NULL), offsetof(::g::Fuse::Charting::PlotElement_type, interface19));
    type->SetFields(121,
        ::TYPES[30/*Fuse.Animations.DestinationBehavior<float2>*/], offsetof(PlotPoint, _animator), 0,
        ::g::Fuse::Charting::PointCalculator_typeof(), offsetof(PlotPoint, _calc), 0,
        ::g::Fuse::Charting::PlotPointAnchor_typeof(), offsetof(PlotPoint, _anchor), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Attractor", NULL, (void*)PlotPoint__get_Attractor_fn, 0, false, ::TYPES[33/*Fuse.Animations.AttractorConfig*/], 0),
        new uFunction("set_Attractor", NULL, (void*)PlotPoint__set_Attractor_fn, 0, false, uVoid_typeof(), 1, ::TYPES[33/*Fuse.Animations.AttractorConfig*/]),
        new uFunction(".ctor", NULL, (void*)PlotPoint__New4_fn, 0, true, type, 0),
        new uFunction("get_PointAnchor", NULL, (void*)PlotPoint__get_PointAnchor_fn, 0, false, ::g::Fuse::Charting::PlotPointAnchor_typeof(), 0),
        new uFunction("set_PointAnchor", NULL, (void*)PlotPoint__set_PointAnchor_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotPointAnchor_typeof()),
        new uFunction("get_PointOffset", NULL, (void*)PlotPoint__get_PointOffset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_PointOffset", NULL, (void*)PlotPoint__set_PointOffset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Style", NULL, (void*)PlotPoint__get_Style_fn, 0, false, ::g::Fuse::Charting::PlotPointStyle_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)PlotPoint__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotPointStyle_typeof()));
}

::g::Fuse::Charting::PlotElement_type* PlotPoint_typeof()
{
    static uSStrong< ::g::Fuse::Charting::PlotElement_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Charting::PlotElement_typeof();
    options.FieldCount = 124;
    options.InterfaceCount = 20;
    options.ObjectSize = sizeof(PlotPoint);
    options.TypeSize = sizeof(::g::Fuse::Charting::PlotElement_type);
    type = (::g::Fuse::Charting::PlotElement_type*)uClassType::New("Fuse.Charting.PlotPoint", options);
    type->fp_build_ = PlotPoint_build;
    type->fp_ctor_ = (void*)PlotPoint__New4_fn;
    type->fp_OnDataPointChanged = (void(*)(::g::Fuse::Charting::PlotElement*, ::g::Fuse::Charting::PlotDataPoint*))PlotPoint__OnDataPointChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PlotPoint__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PlotPoint__OnUnrooted_fn;
    type->interface19.fp_OnNewData = (void(*)(uObject*, void*))::g::Fuse::Charting::PlotElement__FuseChartingIPlotDataItemListenerFuseChartingPlotDataPointOnNewData_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public PlotPoint()
void PlotPoint__ctor_8_fn(PlotPoint* __this)
{
    __this->ctor_8();
}

// private void AnimUpdate(float2 value)
void PlotPoint__AnimUpdate_fn(PlotPoint* __this, ::g::Uno::Float2* value)
{
    __this->AnimUpdate(*value);
}

// public Fuse.Animations.AttractorConfig get_Attractor()
void PlotPoint__get_Attractor_fn(PlotPoint* __this, ::g::Fuse::Animations::AttractorConfig** __retval)
{
    *__retval = __this->Attractor();
}

// public void set_Attractor(Fuse.Animations.AttractorConfig value)
void PlotPoint__set_Attractor_fn(PlotPoint* __this, ::g::Fuse::Animations::AttractorConfig* value)
{
    __this->Attractor(value);
}

// private Fuse.Charting.PlotPointAnchor get_EffectivePointAnchor()
void PlotPoint__get_EffectivePointAnchor_fn(PlotPoint* __this, int32_t* __retval)
{
    *__retval = __this->EffectivePointAnchor();
}

// public PlotPoint New()
void PlotPoint__New4_fn(PlotPoint** __retval)
{
    *__retval = PlotPoint::New4();
}

// internal override sealed void OnDataPointChanged(Fuse.Charting.PlotDataPoint entry)
void PlotPoint__OnDataPointChanged_fn(PlotPoint* __this, ::g::Fuse::Charting::PlotDataPoint* entry)
{
    uStackFrame __("Fuse.Charting.PlotPoint", "OnDataPointChanged(Fuse.Charting.PlotDataPoint)");
    ::g::Fuse::Animations::DestinationBehavior__SetValue_fn(uPtr(__this->_animator), uCRef(__this->_calc.PrepareEntry(entry)), uDelegate::New(::TYPES[32/*Fuse.Animations.DestinationBehavior<float2>.ValueHandler*/], (void*)PlotPoint__AnimUpdate_fn, __this));
}

// protected override sealed void OnRooted()
void PlotPoint__OnRooted_fn(PlotPoint* __this)
{
    uStackFrame __("Fuse.Charting.PlotPoint", "OnRooted()");
    ::g::Fuse::Charting::PlotElement__OnRooted_fn(__this);
    __this->_calc.CheckAttractor(__this->Attractor(), __this);
}

// protected override sealed void OnUnrooted()
void PlotPoint__OnUnrooted_fn(PlotPoint* __this)
{
    uStackFrame __("Fuse.Charting.PlotPoint", "OnUnrooted()");
    ::g::Fuse::Charting::PlotElement__OnUnrooted_fn(__this);
    uPtr(__this->_animator)->Unroot();
}

// public Fuse.Charting.PlotPointAnchor get_PointAnchor()
void PlotPoint__get_PointAnchor_fn(PlotPoint* __this, int32_t* __retval)
{
    *__retval = __this->PointAnchor();
}

// public void set_PointAnchor(Fuse.Charting.PlotPointAnchor value)
void PlotPoint__set_PointAnchor_fn(PlotPoint* __this, int32_t* value)
{
    __this->PointAnchor(*value);
}

// public float get_PointOffset()
void PlotPoint__get_PointOffset_fn(PlotPoint* __this, float* __retval)
{
    *__retval = __this->PointOffset();
}

// public void set_PointOffset(float value)
void PlotPoint__set_PointOffset_fn(PlotPoint* __this, float* value)
{
    __this->PointOffset(*value);
}

// public Fuse.Charting.PlotPointStyle get_Style()
void PlotPoint__get_Style_fn(PlotPoint* __this, int32_t* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Fuse.Charting.PlotPointStyle value)
void PlotPoint__set_Style_fn(PlotPoint* __this, int32_t* value)
{
    __this->Style(*value);
}

// public PlotPoint() [instance]
void PlotPoint::ctor_8()
{
    uStackFrame __("Fuse.Charting.PlotPoint", ".ctor()");
    _animator = ((::g::Fuse::Animations::DestinationBehavior*)::g::Fuse::Animations::DestinationBehavior::New1(::TYPES[30/*Fuse.Animations.DestinationBehavior<float2>*/]));
    ctor_7();
    Anchor(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(50.0f, 4), ::g::Uno::UX::Size__New1(50.0f, 4)));
    _calc.Init();
}

// private void AnimUpdate(float2 value) [instance]
void PlotPoint::AnimUpdate(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Charting.PlotPoint", "AnimUpdate(float2)");
    ::g::Uno::Float2 p = _calc.ValueToPos(value);
    X(::g::Uno::UX::Size__New1(p.X * 100.0f, 4));
    Y(::g::Uno::UX::Size__New1(p.Y * 100.0f, 4));

    if (EffectivePointAnchor() == 3)
    {
        ::g::Uno::Float2 position = _calc.AngleToAnchor(value.X);
        Anchor(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(position.X * 100.0f, 4), ::g::Uno::UX::Size__New1(position.Y * 100.0f, 4)));
    }
}

// public Fuse.Animations.AttractorConfig get_Attractor() [instance]
::g::Fuse::Animations::AttractorConfig* PlotPoint::Attractor()
{
    uStackFrame __("Fuse.Charting.PlotPoint", "get_Attractor()");
    return uAs< ::g::Fuse::Animations::AttractorConfig*>(uPtr(_animator)->Motion, ::TYPES[33/*Fuse.Animations.AttractorConfig*/]);
}

// public void set_Attractor(Fuse.Animations.AttractorConfig value) [instance]
void PlotPoint::Attractor(::g::Fuse::Animations::AttractorConfig* value)
{
    uStackFrame __("Fuse.Charting.PlotPoint", "set_Attractor(Fuse.Animations.AttractorConfig)");
    uPtr(_animator)->Motion = value;
}

// private Fuse.Charting.PlotPointAnchor get_EffectivePointAnchor() [instance]
int32_t PlotPoint::EffectivePointAnchor()
{
    if (PointAnchor() == 0)
        return _calc.IsRadial() ? 3 : 2;

    return PointAnchor();
}

// public Fuse.Charting.PlotPointAnchor get_PointAnchor() [instance]
int32_t PlotPoint::PointAnchor()
{
    return _anchor;
}

// public void set_PointAnchor(Fuse.Charting.PlotPointAnchor value) [instance]
void PlotPoint::PointAnchor(int32_t value)
{
    _anchor = value;
}

// public float get_PointOffset() [instance]
float PlotPoint::PointOffset()
{
    return _calc.Offset;
}

// public void set_PointOffset(float value) [instance]
void PlotPoint::PointOffset(float value)
{
    _calc.Offset = value;
}

// public Fuse.Charting.PlotPointStyle get_Style() [instance]
int32_t PlotPoint::Style()
{
    return _calc.Style;
}

// public void set_Style(Fuse.Charting.PlotPointStyle value) [instance]
void PlotPoint::Style(int32_t value)
{
    _calc.Style = value;
}

// public PlotPoint New() [static]
PlotPoint* PlotPoint::New4()
{
    PlotPoint* obj1 = (PlotPoint*)uNew(PlotPoint_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotPoint.uno
// ----------------------------------------------------------------

// public enum PlotPointAnchor
uEnumType* PlotPointAnchor_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Charting.PlotPointAnchor", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Default", 0LL,
        "None", 1LL,
        "Center", 2LL,
        "Radial", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotPoint.uno
// ----------------------------------------------------------------

// public enum PlotPointStyle
uEnumType* PlotPointStyle_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Charting.PlotPointStyle", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Axial", 0LL,
        "Radial", 1LL,
        "Angular", 2LL,
        "AngularFull", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotExpression.uno
// ---------------------------------------------------------------------

// private sealed class PlotExpression.PlotSubscription
// {
// static generated PlotSubscription()
static void PlotExpression__PlotSubscription__cctor__fn(uType* __type)
{
    PlotExpression__PlotSubscription::_undefined_ = PlotExpression__PlotSubscription__UndefinedObject::New1();
    PlotExpression__PlotSubscription::CountName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("count"));
    PlotExpression__PlotSubscription::HasNextName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("hasNext"));
    PlotExpression__PlotSubscription::HasPrevName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("hasPrev"));
    PlotExpression__PlotSubscription::OffsetName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("offset"));
    PlotExpression__PlotSubscription::DataMinlineName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("dataMinline"));
    PlotExpression__PlotSubscription::DataMaxlineName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("dataMaxline"));
    PlotExpression__PlotSubscription::BaselineName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("baseline"));
    PlotExpression__PlotSubscription::StepsName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("stepCount"));
}

static void PlotExpression__PlotSubscription_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Charting::PlotExpression_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PlotExpression__PlotSubscription_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Charting::PlotExpression_typeof(), offsetof(PlotExpression__PlotSubscription, _expr), 0,
        ::g::Fuse::Charting::PlotBehavior_typeof(), offsetof(PlotExpression__PlotSubscription, _plot), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(PlotExpression__PlotSubscription, _key), 0,
        ::g::Fuse::Charting::PlotExpression__Field_typeof(), offsetof(PlotExpression__PlotSubscription, _field), 0,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(PlotExpression__PlotSubscription, _listener), 0,
        uObject_typeof(), (uintptr_t)&PlotExpression__PlotSubscription::_undefined_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PlotExpression__PlotSubscription::CountName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PlotExpression__PlotSubscription::HasNextName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PlotExpression__PlotSubscription::HasPrevName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PlotExpression__PlotSubscription::OffsetName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PlotExpression__PlotSubscription::DataMinlineName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PlotExpression__PlotSubscription::DataMaxlineName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PlotExpression__PlotSubscription::BaselineName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PlotExpression__PlotSubscription::StepsName_, uFieldFlagsStatic);
}

PlotExpression__PlotSubscription_type* PlotExpression__PlotSubscription_typeof()
{
    static uSStrong<PlotExpression__PlotSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PlotExpression__PlotSubscription);
    options.TypeSize = sizeof(PlotExpression__PlotSubscription_type);
    type = (PlotExpression__PlotSubscription_type*)uClassType::New("Fuse.Charting.PlotExpression.PlotSubscription", options);
    type->fp_build_ = PlotExpression__PlotSubscription_build;
    type->fp_cctor_ = PlotExpression__PlotSubscription__cctor__fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))PlotExpression__PlotSubscription__Dispose_fn;
    return type;
}

// public PlotSubscription(Fuse.Charting.PlotExpression expr, Fuse.Charting.PlotBehavior plot, Uno.UX.Selector key, Fuse.Charting.PlotExpression.Field field, Fuse.Reactive.IListener listener)
void PlotExpression__PlotSubscription__ctor__fn(PlotExpression__PlotSubscription* __this, ::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Charting::PlotBehavior* plot, ::g::Uno::UX::Selector* key, int32_t* field, uObject* listener)
{
    __this->ctor_(expr, plot, *key, *field, listener);
}

// public void Dispose()
void PlotExpression__PlotSubscription__Dispose_fn(PlotExpression__PlotSubscription* __this)
{
    __this->Dispose();
}

// private object GetValue()
void PlotExpression__PlotSubscription__GetValue_fn(PlotExpression__PlotSubscription* __this, uObject** __retval)
{
    *__retval = __this->GetValue();
}

// public PlotSubscription New(Fuse.Charting.PlotExpression expr, Fuse.Charting.PlotBehavior plot, Uno.UX.Selector key, Fuse.Charting.PlotExpression.Field field, Fuse.Reactive.IListener listener)
void PlotExpression__PlotSubscription__New1_fn(::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Charting::PlotBehavior* plot, ::g::Uno::UX::Selector* key, int32_t* field, uObject* listener, PlotExpression__PlotSubscription** __retval)
{
    *__retval = PlotExpression__PlotSubscription::New1(expr, plot, *key, *field, listener);
}

// private void OnDataChanged(object s, object a)
void PlotExpression__PlotSubscription__OnDataChanged_fn(PlotExpression__PlotSubscription* __this, uObject* s, uObject* a)
{
    __this->OnDataChanged(s, a);
}

// private void PushValue()
void PlotExpression__PlotSubscription__PushValue_fn(PlotExpression__PlotSubscription* __this)
{
    __this->PushValue();
}

uSStrong<uObject*> PlotExpression__PlotSubscription::_undefined_;
::g::Uno::UX::Selector PlotExpression__PlotSubscription::CountName_;
::g::Uno::UX::Selector PlotExpression__PlotSubscription::HasNextName_;
::g::Uno::UX::Selector PlotExpression__PlotSubscription::HasPrevName_;
::g::Uno::UX::Selector PlotExpression__PlotSubscription::OffsetName_;
::g::Uno::UX::Selector PlotExpression__PlotSubscription::DataMinlineName_;
::g::Uno::UX::Selector PlotExpression__PlotSubscription::DataMaxlineName_;
::g::Uno::UX::Selector PlotExpression__PlotSubscription::BaselineName_;
::g::Uno::UX::Selector PlotExpression__PlotSubscription::StepsName_;

// public PlotSubscription(Fuse.Charting.PlotExpression expr, Fuse.Charting.PlotBehavior plot, Uno.UX.Selector key, Fuse.Charting.PlotExpression.Field field, Fuse.Reactive.IListener listener) [instance]
void PlotExpression__PlotSubscription::ctor_(::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Charting::PlotBehavior* plot, ::g::Uno::UX::Selector key, int32_t field, uObject* listener)
{
    uStackFrame __("Fuse.Charting.PlotExpression.PlotSubscription", ".ctor(Fuse.Charting.PlotExpression,Fuse.Charting.PlotBehavior,Uno.UX.Selector,Fuse.Charting.PlotExpression.Field,Fuse.Reactive.IListener)");
    _expr = expr;
    _plot = plot;
    _key = key;
    _field = field;
    _listener = listener;
    uPtr(_plot)->add_DataChanged(uDelegate::New(::TYPES[28/*Fuse.Charting.DataChangedHandler*/], (void*)PlotExpression__PlotSubscription__OnDataChanged_fn, this));
    PushValue();
}

// public void Dispose() [instance]
void PlotExpression__PlotSubscription::Dispose()
{
    uStackFrame __("Fuse.Charting.PlotExpression.PlotSubscription", "Dispose()");
    _expr = NULL;
    _listener = NULL;
    uPtr(_plot)->remove_DataChanged(uDelegate::New(::TYPES[28/*Fuse.Charting.DataChangedHandler*/], (void*)PlotExpression__PlotSubscription__OnDataChanged_fn, this));
    _plot = NULL;
}

// private object GetValue() [instance]
uObject* PlotExpression__PlotSubscription::GetValue()
{
    uStackFrame __("Fuse.Charting.PlotExpression.PlotSubscription", "GetValue()");

    if (::g::Uno::UX::Selector__op_Equality(_key, PlotExpression__PlotSubscription::CountName_))
        return uBox<int32_t>(::g::Uno::Int_typeof(), uPtr(uPtr(_plot)->PlotStats())->Count);

    if (::g::Uno::UX::Selector__op_Equality(_key, PlotExpression__PlotSubscription::HasNextName_))
        return uBox(::g::Uno::Bool_typeof(), (uPtr(_plot)->Offset() + uPtr(_plot)->Limit()) < uPtr(uPtr(_plot)->DataStats())->Count);

    if (::g::Uno::UX::Selector__op_Equality(_key, PlotExpression__PlotSubscription::HasPrevName_))
        return uBox(::g::Uno::Bool_typeof(), uPtr(_plot)->Offset() > 0);

    if (::g::Uno::UX::Selector__op_Equality(_key, PlotExpression__PlotSubscription::OffsetName_))
        return uBox<int32_t>(::g::Uno::Int_typeof(), uPtr(_plot)->Offset());

    if ((uPtr(uPtr(_plot)->PlotStats())->Count == 0) && (((::g::Uno::UX::Selector__op_Equality(_key, PlotExpression__PlotSubscription::BaselineName_) || ::g::Uno::UX::Selector__op_Equality(_key, PlotExpression__PlotSubscription::DataMaxlineName_)) || ::g::Uno::UX::Selector__op_Equality(_key, PlotExpression__PlotSubscription::DataMinlineName_)) || ::g::Uno::UX::Selector__op_Equality(_key, PlotExpression__PlotSubscription::StepsName_)))
        return PlotExpression__PlotSubscription::_undefined_;

    if (::g::Uno::UX::Selector__op_Equality(_key, PlotExpression__PlotSubscription::BaselineName_))
        return uBox(::g::Uno::Float4_typeof(), uPtr(uPtr(_plot)->PlotStats())->Baseline());

    if (::g::Uno::UX::Selector__op_Equality(_key, PlotExpression__PlotSubscription::DataMaxlineName_))
        return uBox(::g::Uno::Float4_typeof(), uPtr(_plot)->ScreenValue(uPtr(uPtr(_plot)->PlotStats())->GetRelativeValue1(uPtr(uPtr(_plot)->DataStats())->Maximum)));

    if (::g::Uno::UX::Selector__op_Equality(_key, PlotExpression__PlotSubscription::DataMinlineName_))
        return uBox(::g::Uno::Float4_typeof(), uPtr(_plot)->ScreenValue(uPtr(uPtr(_plot)->PlotStats())->GetRelativeValue1(uPtr(uPtr(_plot)->DataStats())->Minimum)));

    if (::g::Uno::UX::Selector__op_Equality(_key, PlotExpression__PlotSubscription::StepsName_))
        return uBox(::g::Uno::Int4_typeof(), uPtr(_plot)->ScreenSteps(uPtr(uPtr(_plot)->PlotStats())->Steps));

    return NULL;
}

// private void OnDataChanged(object s, object a) [instance]
void PlotExpression__PlotSubscription::OnDataChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Charting.PlotExpression.PlotSubscription", "OnDataChanged(object,object)");
    PushValue();
}

// private void PushValue() [instance]
void PlotExpression__PlotSubscription::PushValue()
{
    uStackFrame __("Fuse.Charting.PlotExpression.PlotSubscription", "PushValue()");
    uObject* q = GetValue();

    if (q == PlotExpression__PlotSubscription::_undefined_)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[47/*Fuse.Reactive.IListener*/]), (uObject*)_expr, NULL);
    else if (q != NULL)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[47/*Fuse.Reactive.IListener*/]), (uObject*)_expr, ::g::Fuse::Charting::PlotExpression::AccessField(_field, q));
    else
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(uString::Const("Unrecognizied Plot Identifier: "), ::g::Uno::UX::Selector__op_Implicit1(_key)), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotExpression.uno"), 203, uString::Const("PushValue"), NULL);
}

// public PlotSubscription New(Fuse.Charting.PlotExpression expr, Fuse.Charting.PlotBehavior plot, Uno.UX.Selector key, Fuse.Charting.PlotExpression.Field field, Fuse.Reactive.IListener listener) [static]
PlotExpression__PlotSubscription* PlotExpression__PlotSubscription::New1(::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Charting::PlotBehavior* plot, ::g::Uno::UX::Selector key, int32_t field, uObject* listener)
{
    PlotExpression__PlotSubscription* obj1 = (PlotExpression__PlotSubscription*)uNew(PlotExpression__PlotSubscription_typeof());
    obj1->ctor_(expr, plot, key, field, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotTicks.uno
// ----------------------------------------------------------------

// public enum PlotTickAxis
uEnumType* PlotTickAxis_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Charting.PlotTickAxis", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "X", 1LL,
        "Y", 2LL,
        "Both", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotTicks.uno
// ----------------------------------------------------------------

// public sealed class PlotTicks
// {
static void PlotTicks_build(uType* type)
{
    ::STRINGS[24] = uString::Const("Could not find PlotBehavior");
    ::STRINGS[49] = uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotTicks.uno");
    ::STRINGS[23] = uString::Const("OnRooted");
    ::TYPES[5] = ::g::Fuse::IArray_typeof();
    ::TYPES[28] = ::g::Fuse::Charting::DataChangedHandler_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface18),
        ::g::Fuse::Drawing::IDrawObjectWatcherFeedback_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface19));
    type->SetFields(121,
        ::g::Fuse::Charting::PlotTickAxis_typeof(), offsetof(PlotTicks, _axes), 0,
        ::g::Fuse::Charting::PlotTickStyle_typeof(), offsetof(PlotTicks, _style), 0,
        ::g::Uno::Bool_typeof(), offsetof(PlotTicks, _hasAxisLine), 0,
        ::g::Uno::Float_typeof(), offsetof(PlotTicks, _axisLine), 0,
        ::g::Uno::Float_typeof(), offsetof(PlotTicks, _offset), 0,
        ::g::Fuse::Charting::AxisFilter_typeof(), offsetof(PlotTicks, _filter), 0,
        ::g::Fuse::Charting::PlotBehavior_typeof(), offsetof(PlotTicks, _plot), 0);
    type->Reflection.SetFunctions(15,
        new uFunction("get_Axis", NULL, (void*)PlotTicks__get_Axis_fn, 0, false, ::g::Fuse::Charting::PlotTickAxis_typeof(), 0),
        new uFunction("set_Axis", NULL, (void*)PlotTicks__set_Axis_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotTickAxis_typeof()),
        new uFunction("get_AxisLine", NULL, (void*)PlotTicks__get_AxisLine_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_AxisLine", NULL, (void*)PlotTicks__set_AxisLine_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_BaseOffset", NULL, (void*)PlotTicks__get_BaseOffset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_BaseOffset", NULL, (void*)PlotTicks__set_BaseOffset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ExcludeExtend", NULL, (void*)PlotTicks__get_ExcludeExtend_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ExcludeExtend", NULL, (void*)PlotTicks__set_ExcludeExtend_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Group", NULL, (void*)PlotTicks__get_Group_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Group", NULL, (void*)PlotTicks__set_Group_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)PlotTicks__New3_fn, 0, true, type, 0),
        new uFunction("get_SkipEnds", NULL, (void*)PlotTicks__get_SkipEnds_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_SkipEnds", NULL, (void*)PlotTicks__set_SkipEnds_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("get_Style", NULL, (void*)PlotTicks__get_Style_fn, 0, false, ::g::Fuse::Charting::PlotTickStyle_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)PlotTicks__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Charting::PlotTickStyle_typeof()));
}

::g::Fuse::Controls::Shape_type* PlotTicks_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Shape_typeof();
    options.FieldCount = 128;
    options.InterfaceCount = 20;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PlotTicks);
    options.TypeSize = sizeof(::g::Fuse::Controls::Shape_type);
    type = (::g::Fuse::Controls::Shape_type*)uClassType::New("Fuse.Charting.PlotTicks", options);
    type->fp_build_ = PlotTicks_build;
    type->fp_ctor_ = (void*)PlotTicks__New3_fn;
    type->fp_CreateSurfacePath = (void(*)(::g::Fuse::Controls::Shape*, ::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::SurfacePath**))PlotTicks__CreateSurfacePath_fn;
    type->fp_get_NeedSurface = (void(*)(::g::Fuse::Controls::Shape*, bool*))PlotTicks__get_NeedSurface_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PlotTicks__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PlotTicks__OnUnrooted_fn;
    type->interface19.fp_Changed = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackChanged_fn;
    type->interface19.fp_Prepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackPrepare_fn;
    type->interface19.fp_Unprepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackUnprepare_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Shape__OnPropertyChanged2_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated PlotTicks()
void PlotTicks__ctor_7_fn(PlotTicks* __this)
{
    __this->ctor_7();
}

// public Fuse.Charting.PlotTickAxis get_Axis()
void PlotTicks__get_Axis_fn(PlotTicks* __this, int32_t* __retval)
{
    *__retval = __this->Axis();
}

// public void set_Axis(Fuse.Charting.PlotTickAxis value)
void PlotTicks__set_Axis_fn(PlotTicks* __this, int32_t* value)
{
    __this->Axis(*value);
}

// public float get_AxisLine()
void PlotTicks__get_AxisLine_fn(PlotTicks* __this, float* __retval)
{
    *__retval = __this->AxisLine();
}

// public void set_AxisLine(float value)
void PlotTicks__set_AxisLine_fn(PlotTicks* __this, float* value)
{
    __this->AxisLine(*value);
}

// public float get_BaseOffset()
void PlotTicks__get_BaseOffset_fn(PlotTicks* __this, float* __retval)
{
    *__retval = __this->BaseOffset();
}

// public void set_BaseOffset(float value)
void PlotTicks__set_BaseOffset_fn(PlotTicks* __this, float* value)
{
    __this->BaseOffset(*value);
}

// protected override sealed Fuse.Drawing.SurfacePath CreateSurfacePath(Fuse.Drawing.Surface surface)
void PlotTicks__CreateSurfacePath_fn(PlotTicks* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Fuse::Drawing::SurfacePath** __retval)
{
    uStackFrame __("Fuse.Charting.PlotTicks", "CreateSurfacePath(Fuse.Drawing.Surface)");
    ::g::Fuse::Drawing::LineSegments* list = ::g::Fuse::Drawing::LineSegments::New1();

    if (__this->_plot != NULL)
    {
        if ((__this->Axis() & 1) == 1)
            __this->DrawLine(list, 0);

        if ((__this->Axis() & 2) == 2)
            __this->DrawLine(list, 1);
    }

    return *__retval = uPtr(surface)->CreatePath(list->Segments(), 0), void();
}

// private void DrawLine(Fuse.Drawing.LineSegments list, int axis)
void PlotTicks__DrawLine_fn(PlotTicks* __this, ::g::Fuse::Drawing::LineSegments* list, int32_t* axis)
{
    __this->DrawLine(list, *axis);
}

// public bool get_ExcludeExtend()
void PlotTicks__get_ExcludeExtend_fn(PlotTicks* __this, bool* __retval)
{
    *__retval = __this->ExcludeExtend();
}

// public void set_ExcludeExtend(bool value)
void PlotTicks__set_ExcludeExtend_fn(PlotTicks* __this, bool* value)
{
    __this->ExcludeExtend(*value);
}

// private void GetOrientation(int axis, float2& xVector, float2& yVector)
void PlotTicks__GetOrientation_fn(PlotTicks* __this, int32_t* axis, ::g::Uno::Float2* xVector, ::g::Uno::Float2* yVector)
{
    __this->GetOrientation(*axis, xVector, yVector);
}

// public int get_Group()
void PlotTicks__get_Group_fn(PlotTicks* __this, int32_t* __retval)
{
    *__retval = __this->Group();
}

// public void set_Group(int value)
void PlotTicks__set_Group_fn(PlotTicks* __this, int32_t* value)
{
    __this->Group(*value);
}

// protected override sealed bool get_NeedSurface()
void PlotTicks__get_NeedSurface_fn(PlotTicks* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public generated PlotTicks New()
void PlotTicks__New3_fn(PlotTicks** __retval)
{
    *__retval = PlotTicks::New3();
}

// private void OnDataChanged(object s, Fuse.Charting.DataChangedArgs args)
void PlotTicks__OnDataChanged1_fn(PlotTicks* __this, uObject* s, ::g::Fuse::Charting::DataChangedArgs* args)
{
    __this->OnDataChanged1(s, args);
}

// protected override sealed void OnRooted()
void PlotTicks__OnRooted_fn(PlotTicks* __this)
{
    uStackFrame __("Fuse.Charting.PlotTicks", "OnRooted()");
    ::g::Fuse::Controls::Shape__OnRooted_fn(__this);
    __this->_plot = ::g::Fuse::Charting::PlotBehavior::FindPlot(__this);

    if (__this->_plot == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[24/*"Could not f...*/], __this, ::STRINGS[49/*"/usr/local/...*/], 183, ::STRINGS[23/*"OnRooted"*/], NULL);
    else
    {
        uPtr(__this->_filter)->Plot = __this->_plot;
        uPtr(__this->_plot)->add_DataChanged(uDelegate::New(::TYPES[28/*Fuse.Charting.DataChangedHandler*/], (void*)PlotTicks__OnDataChanged1_fn, __this));
    }
}

// protected override sealed void OnUnrooted()
void PlotTicks__OnUnrooted_fn(PlotTicks* __this)
{
    uStackFrame __("Fuse.Charting.PlotTicks", "OnUnrooted()");

    if (__this->_plot != NULL)
    {
        uPtr(__this->_plot)->remove_DataChanged(uDelegate::New(::TYPES[28/*Fuse.Charting.DataChangedHandler*/], (void*)PlotTicks__OnDataChanged1_fn, __this));
        __this->_plot = NULL;
        uPtr(__this->_filter)->Plot = NULL;
    }

    ::g::Fuse::Controls::Shape__OnUnrooted_fn(__this);
}

// public int2 get_SkipEnds()
void PlotTicks__get_SkipEnds_fn(PlotTicks* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->SkipEnds();
}

// public void set_SkipEnds(int2 value)
void PlotTicks__set_SkipEnds_fn(PlotTicks* __this, ::g::Uno::Int2* value)
{
    __this->SkipEnds(*value);
}

// public Fuse.Charting.PlotTickStyle get_Style()
void PlotTicks__get_Style_fn(PlotTicks* __this, int32_t* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Fuse.Charting.PlotTickStyle value)
void PlotTicks__set_Style_fn(PlotTicks* __this, int32_t* value)
{
    __this->Style(*value);
}

// public generated PlotTicks() [instance]
void PlotTicks::ctor_7()
{
    _axes = 1;
    _offset = 0.0f;
    _filter = ::g::Fuse::Charting::AxisFilter::New1();
    ctor_6();
}

// public Fuse.Charting.PlotTickAxis get_Axis() [instance]
int32_t PlotTicks::Axis()
{
    return _axes;
}

// public void set_Axis(Fuse.Charting.PlotTickAxis value) [instance]
void PlotTicks::Axis(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotTicks", "set_Axis(Fuse.Charting.PlotTickAxis)");

    if (_axes == value)
        return;

    _axes = value;
    InvalidateSurfacePath();
}

// public float get_AxisLine() [instance]
float PlotTicks::AxisLine()
{
    return _axisLine;
}

// public void set_AxisLine(float value) [instance]
void PlotTicks::AxisLine(float value)
{
    uStackFrame __("Fuse.Charting.PlotTicks", "set_AxisLine(float)");

    if (_hasAxisLine && (_axisLine == value))
        return;

    _hasAxisLine = true;
    _axisLine = value;
    InvalidateSurfacePath();
}

// public float get_BaseOffset() [instance]
float PlotTicks::BaseOffset()
{
    return _offset;
}

// public void set_BaseOffset(float value) [instance]
void PlotTicks::BaseOffset(float value)
{
    uStackFrame __("Fuse.Charting.PlotTicks", "set_BaseOffset(float)");

    if (_offset == value)
        return;

    _offset = value;
    InvalidateSurfacePath();
}

// private void DrawLine(Fuse.Drawing.LineSegments list, int axis) [instance]
void PlotTicks::DrawLine(::g::Fuse::Drawing::LineSegments* list, int32_t axis)
{
    uStackFrame __("Fuse.Charting.PlotTicks", "DrawLine(Fuse.Drawing.LineSegments,int)");
    uPtr(_filter)->IsCountAxis = uPtr(_plot)->IsCountAxis(axis);
    uObject* items = uPtr(_plot)->GetAxisItems(axis);
    bool isOffset = uPtr(_plot)->AxisMetric(axis) == 1;
    float offset = isOffset ? 0.5f : 0.0f;
    int32_t steps = uPtr(uPtr(_plot)->PlotStats())->Steps.Item(axis);
    ::g::Uno::Float2 sz = ActualSize();

    switch (Style())
    {
        case 0:
        {
            ::g::Uno::Float2 a, b;
            GetOrientation(axis, &a, &b);

            if (_hasAxisLine)
            {
                uPtr(list)->MoveTo(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Multiply(_axisLine, b), sz));
                list->LineToRel(::g::Uno::Float2__op_Multiply2(a, sz));
            }

            for (int32_t i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(items), ::TYPES[5/*Fuse.IArray*/])); ++i)
            {
                int32_t w;

                if (!uPtr(_filter)->Accept2(::g::Fuse::IArray::Item(uInterface(uPtr(items), ::TYPES[5/*Fuse.IArray*/]), i), i, ::g::Fuse::IArray::Length(uInterface(uPtr(items), ::TYPES[5/*Fuse.IArray*/])), &w))
                    continue;

                float pos = ((float)w + offset) / (float)steps;
                uPtr(list)->MoveTo(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Multiply(pos, a), sz));
                list->LineToRel(::g::Uno::Float2__op_Multiply2(b, sz));
            }

            break;
        }
        case 1:
        {
            if (_hasAxisLine)
            {
                uPtr(list)->MoveTo(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New2(_axisLine, 0.0f), sz), 2.0f), ::g::Uno::Float2__op_Division1(sz, 2.0f)));
                list->EllipticArcToRel(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New2(-_axisLine, 0.0f), sz), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply(_axisLine, sz), 2.0f), 0.0f, false, true);
                list->EllipticArcToRel(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New2(_axisLine, 0.0f), sz), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply(_axisLine, sz), 2.0f), 0.0f, false, true);
            }

            for (int32_t i1 = 0; i1 < ::g::Fuse::IArray::Length(uInterface(uPtr(items), ::TYPES[5/*Fuse.IArray*/])); ++i1)
            {
                int32_t w1;

                if (!uPtr(_filter)->Accept2(::g::Fuse::IArray::Item(uInterface(uPtr(items), ::TYPES[5/*Fuse.IArray*/]), i1), i1, ::g::Fuse::IArray::Length(uInterface(uPtr(items), ::TYPES[5/*Fuse.IArray*/])), &w1))
                    continue;

                float angle = ((((float)w1 + offset) / (float)steps) * 3.14159274f) * 2.0f;
                ::g::Uno::Float2 position = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(angle), ::g::Uno::Math::Sin1(angle));
                uPtr(list)->MoveTo(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply1(sz, 0.5f), ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply2(position, sz), 2.0f), BaseOffset())));
                list->LineToRel(::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply2(position, sz), 2.0f), 1.0f - BaseOffset()));
            }

            break;
        }
    }
}

// public bool get_ExcludeExtend() [instance]
bool PlotTicks::ExcludeExtend()
{
    uStackFrame __("Fuse.Charting.PlotTicks", "get_ExcludeExtend()");
    return uPtr(_filter)->ExcludeExtend();
}

// public void set_ExcludeExtend(bool value) [instance]
void PlotTicks::ExcludeExtend(bool value)
{
    uStackFrame __("Fuse.Charting.PlotTicks", "set_ExcludeExtend(bool)");

    if (uPtr(_filter)->SetExcludeExtend(value))
        InvalidateSurfacePath();
}

// private void GetOrientation(int axis, float2& xVector, float2& yVector) [instance]
void PlotTicks::GetOrientation(int32_t axis, ::g::Uno::Float2* xVector, ::g::Uno::Float2* yVector)
{
    uStackFrame __("Fuse.Charting.PlotTicks", "GetOrientation(int,float2&,float2&)");
    int32_t o = uPtr(_plot)->GetAxisOrientation(axis);

    if (o == 1)
    {
        *xVector = ::g::Uno::Float2__New2(1.0f, 0.0f);
        *yVector = ::g::Uno::Float2__New2(0.0f, 1.0f);
    }
    else
    {
        *xVector = ::g::Uno::Float2__New2(0.0f, 1.0f);
        *yVector = ::g::Uno::Float2__New2(1.0f, 0.0f);
    }
}

// public int get_Group() [instance]
int32_t PlotTicks::Group()
{
    uStackFrame __("Fuse.Charting.PlotTicks", "get_Group()");
    return uPtr(_filter)->Group();
}

// public void set_Group(int value) [instance]
void PlotTicks::Group(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotTicks", "set_Group(int)");

    if (uPtr(_filter)->SetGroup(value))
        InvalidateSurfacePath();
}

// private void OnDataChanged(object s, Fuse.Charting.DataChangedArgs args) [instance]
void PlotTicks::OnDataChanged1(uObject* s, ::g::Fuse::Charting::DataChangedArgs* args)
{
    uStackFrame __("Fuse.Charting.PlotTicks", "OnDataChanged(object,Fuse.Charting.DataChangedArgs)");
    InvalidateSurfacePath();
}

// public int2 get_SkipEnds() [instance]
::g::Uno::Int2 PlotTicks::SkipEnds()
{
    uStackFrame __("Fuse.Charting.PlotTicks", "get_SkipEnds()");
    return uPtr(_filter)->SkipEnds();
}

// public void set_SkipEnds(int2 value) [instance]
void PlotTicks::SkipEnds(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.Charting.PlotTicks", "set_SkipEnds(int2)");

    if (uPtr(_filter)->SetSkipEnds(value))
        InvalidateSurfacePath();
}

// public Fuse.Charting.PlotTickStyle get_Style() [instance]
int32_t PlotTicks::Style()
{
    return _style;
}

// public void set_Style(Fuse.Charting.PlotTickStyle value) [instance]
void PlotTicks::Style(int32_t value)
{
    uStackFrame __("Fuse.Charting.PlotTicks", "set_Style(Fuse.Charting.PlotTickStyle)");

    if (_style == value)
        return;

    _style = value;
    InvalidateSurfacePath();
}

// public generated PlotTicks New() [static]
PlotTicks* PlotTicks::New3()
{
    PlotTicks* obj1 = (PlotTicks*)uNew(PlotTicks_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotTicks.uno
// ----------------------------------------------------------------

// public enum PlotTickStyle
uEnumType* PlotTickStyle_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Charting.PlotTickStyle", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Axial", 0LL,
        "Angular", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotWedge.uno
// ----------------------------------------------------------------

// public sealed class PlotWedge
// {
static void PlotWedge_build(uType* type)
{
    ::TYPES[48] = ::g::Fuse::Animations::DestinationBehavior_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[49] = ::g::Fuse::Animations::DestinationBehavior__ValueHandler_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[41] = ::g::Fuse::Charting::PlotDataItemWatcher_typeof()->MakeType(::g::Fuse::Charting::PlotDataPoint_typeof(), NULL);
    ::TYPES[33] = ::g::Fuse::Animations::AttractorConfig_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotWedge_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(PlotWedge_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(PlotWedge_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(PlotWedge_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(PlotWedge_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotWedge_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PlotWedge_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(PlotWedge_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(PlotWedge_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(PlotWedge_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(PlotWedge_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(PlotWedge_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(PlotWedge_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(PlotWedge_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(PlotWedge_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(PlotWedge_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(PlotWedge_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(PlotWedge_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(PlotWedge_type, interface18),
        ::g::Fuse::Drawing::IDrawObjectWatcherFeedback_typeof(), offsetof(PlotWedge_type, interface19),
        ::g::Fuse::Charting::IPlotDataItemListener_typeof()->MakeType(::g::Fuse::Charting::PlotDataPoint_typeof(), NULL), offsetof(PlotWedge_type, interface20));
    type->SetFields(126,
        ::TYPES[48/*Fuse.Animations.DestinationBehavior<float>*/], offsetof(PlotWedge, _animStart), 0,
        ::TYPES[48/*Fuse.Animations.DestinationBehavior<float>*/], offsetof(PlotWedge, _animEnd), 0,
        ::TYPES[41/*Fuse.Charting.PlotDataItemWatcher<Fuse.Charting.PlotDataPoint>*/], offsetof(PlotWedge, _watcher1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Attractor", NULL, (void*)PlotWedge__get_Attractor_fn, 0, false, ::TYPES[33/*Fuse.Animations.AttractorConfig*/], 0),
        new uFunction("set_Attractor", NULL, (void*)PlotWedge__set_Attractor_fn, 0, false, uVoid_typeof(), 1, ::TYPES[33/*Fuse.Animations.AttractorConfig*/]),
        new uFunction(".ctor", NULL, (void*)PlotWedge__New4_fn, 0, true, type, 0));
}

PlotWedge_type* PlotWedge_typeof()
{
    static uSStrong<PlotWedge_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Ellipse_typeof();
    options.FieldCount = 129;
    options.InterfaceCount = 21;
    options.ObjectSize = sizeof(PlotWedge);
    options.TypeSize = sizeof(PlotWedge_type);
    type = (PlotWedge_type*)uClassType::New("Fuse.Charting.PlotWedge", options);
    type->fp_build_ = PlotWedge_build;
    type->fp_ctor_ = (void*)PlotWedge__New4_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PlotWedge__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PlotWedge__OnUnrooted_fn;
    type->interface20.fp_OnNewData = (void(*)(uObject*, void*))PlotWedge__FuseChartingIPlotDataItemListenerFuseChartingPlotDataPointOnNewData_fn;
    type->interface19.fp_Changed = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackChanged_fn;
    type->interface19.fp_Prepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackPrepare_fn;
    type->interface19.fp_Unprepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackUnprepare_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Shape__OnPropertyChanged2_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated PlotWedge()
void PlotWedge__ctor_9_fn(PlotWedge* __this)
{
    __this->ctor_9();
}

// private void AnimEnd(float value)
void PlotWedge__AnimEnd_fn(PlotWedge* __this, float* value)
{
    __this->AnimEnd(*value);
}

// private void AnimStart(float value)
void PlotWedge__AnimStart_fn(PlotWedge* __this, float* value)
{
    __this->AnimStart(*value);
}

// public Fuse.Animations.AttractorConfig get_Attractor()
void PlotWedge__get_Attractor_fn(PlotWedge* __this, ::g::Fuse::Animations::AttractorConfig** __retval)
{
    *__retval = __this->Attractor();
}

// public void set_Attractor(Fuse.Animations.AttractorConfig value)
void PlotWedge__set_Attractor_fn(PlotWedge* __this, ::g::Fuse::Animations::AttractorConfig* value)
{
    __this->Attractor(value);
}

// private void Fuse.Charting.IPlotDataItemListener<Fuse.Charting.PlotDataPoint>.OnNewData(Fuse.Charting.PlotDataPoint entry)
void PlotWedge__FuseChartingIPlotDataItemListenerFuseChartingPlotDataPointOnNewData_fn(PlotWedge* __this, ::g::Fuse::Charting::PlotDataPoint* entry)
{
    uStackFrame __("Fuse.Charting.PlotWedge", "Fuse.Charting.IPlotDataItemListener<Fuse.Charting.PlotDataPoint>.OnNewData(Fuse.Charting.PlotDataPoint)");
    ::g::Fuse::Animations::DestinationBehavior__SetValue_fn(uPtr(__this->_animStart), uCRef(uPtr(entry)->AccumulatedWeight().Y), uDelegate::New(::TYPES[49/*Fuse.Animations.DestinationBehavior<float>.ValueHandler*/], (void*)PlotWedge__AnimStart_fn, __this));
    ::g::Fuse::Animations::DestinationBehavior__SetValue_fn(uPtr(__this->_animEnd), uCRef(entry->CumulativeWeight().Y), uDelegate::New(::TYPES[49/*Fuse.Animations.DestinationBehavior<float>.ValueHandler*/], (void*)PlotWedge__AnimEnd_fn, __this));
}

// public generated PlotWedge New()
void PlotWedge__New4_fn(PlotWedge** __retval)
{
    *__retval = PlotWedge::New4();
}

// protected override sealed void OnRooted()
void PlotWedge__OnRooted_fn(PlotWedge* __this)
{
    uStackFrame __("Fuse.Charting.PlotWedge", "OnRooted()");
    ::g::Fuse::Controls::Shape__OnRooted_fn(__this);
    __this->_watcher1 = ((::g::Fuse::Charting::PlotDataItemWatcher*)::g::Fuse::Charting::PlotDataItemWatcher::New1(::TYPES[41/*Fuse.Charting.PlotDataItemWatcher<Fuse.Charting.PlotDataPoint>*/], __this, (uObject*)__this));
}

// protected override sealed void OnUnrooted()
void PlotWedge__OnUnrooted_fn(PlotWedge* __this)
{
    uStackFrame __("Fuse.Charting.PlotWedge", "OnUnrooted()");
    uPtr(__this->_watcher1)->Dispose();
    __this->_watcher1 = NULL;
    uPtr(__this->_animStart)->Unroot();
    uPtr(__this->_animEnd)->Unroot();
    ::g::Fuse::Controls::Shape__OnUnrooted_fn(__this);
}

// public generated PlotWedge() [instance]
void PlotWedge::ctor_9()
{
    _animStart = ((::g::Fuse::Animations::DestinationBehavior*)::g::Fuse::Animations::DestinationBehavior::New1(::TYPES[48/*Fuse.Animations.DestinationBehavior<float>*/]));
    _animEnd = ((::g::Fuse::Animations::DestinationBehavior*)::g::Fuse::Animations::DestinationBehavior::New1(::TYPES[48/*Fuse.Animations.DestinationBehavior<float>*/]));
    ctor_8();
}

// private void AnimEnd(float value) [instance]
void PlotWedge::AnimEnd(float value)
{
    uStackFrame __("Fuse.Charting.PlotWedge", "AnimEnd(float)");
    EndAngle((value * 3.14159274f) * 2.0f);
}

// private void AnimStart(float value) [instance]
void PlotWedge::AnimStart(float value)
{
    uStackFrame __("Fuse.Charting.PlotWedge", "AnimStart(float)");
    StartAngle((value * 3.14159274f) * 2.0f);
}

// public Fuse.Animations.AttractorConfig get_Attractor() [instance]
::g::Fuse::Animations::AttractorConfig* PlotWedge::Attractor()
{
    uStackFrame __("Fuse.Charting.PlotWedge", "get_Attractor()");
    return uAs< ::g::Fuse::Animations::AttractorConfig*>(uPtr(_animStart)->Motion, ::TYPES[33/*Fuse.Animations.AttractorConfig*/]);
}

// public void set_Attractor(Fuse.Animations.AttractorConfig value) [instance]
void PlotWedge::Attractor(::g::Fuse::Animations::AttractorConfig* value)
{
    uStackFrame __("Fuse.Charting.PlotWedge", "set_Attractor(Fuse.Animations.AttractorConfig)");
    uPtr(_animStart)->Motion = value;
    uPtr(_animEnd)->Motion = value;
}

// public generated PlotWedge New() [static]
PlotWedge* PlotWedge::New4()
{
    PlotWedge* obj1 = (PlotWedge*)uNew(PlotWedge_typeof());
    obj1->ctor_9();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotPoint.uno
// ----------------------------------------------------------------

// internal struct PointCalculator
// {
static void PointCalculator_build(uType* type)
{
    ::STRINGS[28] = uString::Const("Expecting Unit=\"Normalized\" for attractor");
    ::STRINGS[50] = uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotPoint.uno");
    ::STRINGS[51] = uString::Const("CheckAttractor");
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Charting::PlotPointStyle_typeof(), offsetof(PointCalculator, Style), 0,
        ::g::Uno::Float_typeof(), offsetof(PointCalculator, Offset), 0);
}

uStructType* PointCalculator_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.Alignment = alignof(PointCalculator);
    options.ValueSize = sizeof(PointCalculator);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Charting.PointCalculator", options);
    type->fp_build_ = PointCalculator_build;
    return type;
}

// public float2 AngleToAnchor(float angle)
void PointCalculator__AngleToAnchor_fn(PointCalculator* __this, float* angle, ::g::Uno::Float2* __retval)
{
    *__retval = __this->AngleToAnchor(*angle);
}

// public void CheckAttractor(Fuse.Animations.AttractorConfig attractor, object where)
void PointCalculator__CheckAttractor_fn(PointCalculator* __this, ::g::Fuse::Animations::AttractorConfig* attractor, uObject* where)
{
    __this->CheckAttractor(attractor, where);
}

// public void Init()
void PointCalculator__Init_fn(PointCalculator* __this)
{
    __this->Init();
}

// public bool get_IsRadial()
void PointCalculator__get_IsRadial_fn(PointCalculator* __this, bool* __retval)
{
    *__retval = __this->IsRadial();
}

// private static float PiRange(float a)
void PointCalculator__PiRange_fn(float* a, float* __retval)
{
    *__retval = PointCalculator::PiRange(*a);
}

// public float2 PrepareEntry(Fuse.Charting.PlotDataPoint entry)
void PointCalculator__PrepareEntry_fn(PointCalculator* __this, ::g::Fuse::Charting::PlotDataPoint* entry, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PrepareEntry(entry);
}

// public float2 ValueToPos(float2 value)
void PointCalculator__ValueToPos_fn(PointCalculator* __this, ::g::Uno::Float2* value, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ValueToPos(*value);
}

// public float2 AngleToAnchor(float angle) [instance]
::g::Uno::Float2 PointCalculator::AngleToAnchor(float angle)
{
    angle = PointCalculator::PiRange(angle);
    float pi = 3.14159274f;
    float considerOffset = ::g::Uno::Math::Clamp1(Offset, 0.0f, 0.2f);
    float axisEps = ::g::Uno::Math::Acos1(1.0f - considerOffset);
    return (angle < (-pi + axisEps)) ? ::g::Uno::Float2__New2(1.0f, 0.5f) : (angle < ((-pi / 2.0f) - axisEps)) ? ::g::Uno::Float2__New2(1.0f, 1.0f) : (angle < ((-pi / 2.0f) + axisEps)) ? ::g::Uno::Float2__New2(0.5f, 1.0f) : (angle < -axisEps) ? ::g::Uno::Float2__New2(0.0f, 1.0f) : (angle < axisEps) ? ::g::Uno::Float2__New2(0.0f, 0.5f) : (angle < ((pi / 2.0f) - axisEps)) ? ::g::Uno::Float2__New2(0.0f, 0.0f) : (angle < ((pi / 2.0f) + axisEps)) ? ::g::Uno::Float2__New2(0.5f, 0.0f) : (angle < (pi - axisEps)) ? ::g::Uno::Float2__New2(1.0f, 0.0f) : ::g::Uno::Float2__New2(1.0f, 0.5f);
}

// public void CheckAttractor(Fuse.Animations.AttractorConfig attractor, object where) [instance]
void PointCalculator::CheckAttractor(::g::Fuse::Animations::AttractorConfig* attractor, uObject* where)
{
    uStackFrame __("Fuse.Charting.PointCalculator", "CheckAttractor(Fuse.Animations.AttractorConfig,object)");

    if (attractor != NULL)
    {
        if (uPtr(attractor)->Unit() != 1)
            ::g::Fuse::Diagnostics::UserWarning(::STRINGS[28/*"Expecting U...*/], where, ::STRINGS[50/*"/usr/local/...*/], 56, ::STRINGS[51/*"CheckAttrac...*/]);
    }
}

// public void Init() [instance]
void PointCalculator::Init()
{
    Style = 0;
    Offset = 0.0f;
}

// public bool get_IsRadial() [instance]
bool PointCalculator::IsRadial()
{
    return ((Style == 1) || (Style == 2)) || (Style == 3);
}

// public float2 PrepareEntry(Fuse.Charting.PlotDataPoint entry) [instance]
::g::Uno::Float2 PointCalculator::PrepareEntry(::g::Fuse::Charting::PlotDataPoint* entry)
{
    uStackFrame __("Fuse.Charting.PointCalculator", "PrepareEntry(Fuse.Charting.PlotDataPoint)");
    ::g::Uno::Float2 value = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float4 rel = uPtr(entry)->ScreenRelativeValue();

    switch (Style)
    {
        case 0:
        {
            value = ::g::Uno::Float2__New2(rel.X, rel.Y);
            break;
        }
        case 1:
        {
            float angle = ((uPtr(entry)->AccumulatedWeight().Y + (uPtr(entry)->Weight().Y / 2.0f)) * 3.14159274f) * 2.0f;
            value = ::g::Uno::Float2__New2(angle, 0.0f);
            break;
        }
        case 3:
        case 2:
        {
            value = ::g::Uno::Float2__New2((rel.X * 3.14159274f) * 2.0f, 1.0f - rel.Y);
            break;
        }
    }

    return value;
}

// public float2 ValueToPos(float2 value) [instance]
::g::Uno::Float2 PointCalculator::ValueToPos(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Charting.PointCalculator", "ValueToPos(float2)");

    switch (Style)
    {
        case 0:
            return ::g::Uno::Float2__New2(value.X, value.Y);
        case 3:
        case 1:
        {
            float len = 1.0f + Offset;
            return ::g::Uno::Float2__New2(((::g::Uno::Math::Cos1(value.X) * len) + 1.0f) / 2.0f, ((::g::Uno::Math::Sin1(value.X) * len) + 1.0f) / 2.0f);
        }
        case 2:
        {
            float len1 = value.Item(1) + Offset;
            return ::g::Uno::Float2__New2(((::g::Uno::Math::Cos1(value.Item(0)) * len1) + 1.0f) / 2.0f, ((::g::Uno::Math::Sin1(value.Item(0)) * len1) + 1.0f) / 2.0f);
        }
    }

    return ::g::Uno::Float2__New1(0.0f);
}

// private static float PiRange(float a) [static]
float PointCalculator::PiRange(float a)
{
    float l = ::g::Uno::Math::Floor1((a + 3.14159274f) / 6.28318548f);
    return a - ((l * 3.14159274f) * 2.0f);
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/ObservableList.uno
// ---------------------------------------------------------------------

// internal sealed class ReadOnlyObservableData<T>
// {
static void ReadOnlyObservableData_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObservableArray_typeof(), offsetof(::g::Fuse::Charting::ObservableData_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Charting::ObservableData_type, interface1));
    type->SetFields(1,
        type->T(0), offsetof(ReadOnlyObservableData, _value), 0);
}

::g::Fuse::Charting::ObservableData_type* ReadOnlyObservableData_typeof()
{
    static uSStrong< ::g::Fuse::Charting::ObservableData_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Charting::ObservableData_typeof();
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ReadOnlyObservableData);
    options.TypeSize = sizeof(::g::Fuse::Charting::ObservableData_type);
    type = (::g::Fuse::Charting::ObservableData_type*)uClassType::New("Fuse.Charting.ReadOnlyObservableData`1", options);
    type->fp_build_ = ReadOnlyObservableData_build;
    type->fp_ctor_ = (void*)ReadOnlyObservableData__New1_fn;
    type->fp_GetItem = (void(*)(::g::Fuse::Charting::ObservableData*, int32_t*, uObject**))ReadOnlyObservableData__GetItem_fn;
    type->fp_GetLength = (void(*)(::g::Fuse::Charting::ObservableData*, int32_t*))ReadOnlyObservableData__GetLength_fn;
    type->fp_OnSubscribe = (void(*)(::g::Fuse::Charting::ObservableData*, uObject*))ReadOnlyObservableData__OnSubscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::Charting::ObservableData__FuseReactiveIObservableArraySubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int32_t*))::g::Fuse::Charting::ObservableData__FuseIArrayget_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))::g::Fuse::Charting::ObservableData__FuseIArrayget_Item_fn;
    return type;
}

// public ReadOnlyObservableData()
void ReadOnlyObservableData__ctor_1_fn(ReadOnlyObservableData* __this)
{
    __this->ctor_1();
}

// public ReadOnlyObservableData(T initialValue)
void ReadOnlyObservableData__ctor_2_fn(ReadOnlyObservableData* __this, uObject* initialValue)
{
    __this->ctor_2(initialValue);
}

// public void Clear()
void ReadOnlyObservableData__Clear_fn(ReadOnlyObservableData* __this)
{
    __this->Clear();
}

// protected override sealed object GetItem(int index)
void ReadOnlyObservableData__GetItem_fn(ReadOnlyObservableData* __this, int32_t* index, uObject** __retval)
{
    return *__retval = __this->_value, void();
}

// protected override sealed int GetLength()
void ReadOnlyObservableData__GetLength_fn(ReadOnlyObservableData* __this, int32_t* __retval)
{
    return *__retval = (__this->_value == NULL) ? 0 : 1, void();
}

// public ReadOnlyObservableData New()
void ReadOnlyObservableData__New1_fn(uType* __type, ReadOnlyObservableData** __retval)
{
    *__retval = ReadOnlyObservableData::New1(__type);
}

// public ReadOnlyObservableData New(T initialValue)
void ReadOnlyObservableData__New2_fn(uType* __type, uObject* initialValue, ReadOnlyObservableData** __retval)
{
    *__retval = ReadOnlyObservableData::New2(__type, initialValue);
}

// protected override sealed void OnSubscribe(Fuse.Reactive.IObserver observer)
void ReadOnlyObservableData__OnSubscribe_fn(ReadOnlyObservableData* __this, uObject* observer)
{
    uStackFrame __("Fuse.Charting.ReadOnlyObservableData`1", "OnSubscribe(Fuse.Reactive.IObserver)");
    ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(observer), ::TYPES[7/*Fuse.Reactive.IObserver*/]), __this->_value);
}

// public void Set(T value)
void ReadOnlyObservableData__Set_fn(ReadOnlyObservableData* __this, uObject* value)
{
    __this->Set(value);
}

// public T get_Value()
void ReadOnlyObservableData__get_Value_fn(ReadOnlyObservableData* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public ReadOnlyObservableData() [instance]
void ReadOnlyObservableData::ctor_1()
{
    ctor_();
}

// public ReadOnlyObservableData(T initialValue) [instance]
void ReadOnlyObservableData::ctor_2(uObject* initialValue)
{
    ctor_();
    _value = initialValue;
}

// public void Clear() [instance]
void ReadOnlyObservableData::Clear()
{
    uStackFrame __("Fuse.Charting.ReadOnlyObservableData`1", "Clear()");
    _value = NULL;
    TriggerClear();
}

// public void Set(T value) [instance]
void ReadOnlyObservableData::Set(uObject* value)
{
    uStackFrame __("Fuse.Charting.ReadOnlyObservableData`1", "Set(T)");
    _value = value;
    TriggerSet(_value);
}

// public T get_Value() [instance]
uObject* ReadOnlyObservableData::Value()
{
    return _value;
}

// public ReadOnlyObservableData New() [static]
ReadOnlyObservableData* ReadOnlyObservableData::New1(uType* __type)
{
    ReadOnlyObservableData* obj1 = (ReadOnlyObservableData*)uNew(__type);
    obj1->ctor_1();
    return obj1;
}

// public ReadOnlyObservableData New(T initialValue) [static]
ReadOnlyObservableData* ReadOnlyObservableData::New2(uType* __type, uObject* initialValue)
{
    ReadOnlyObservableData* obj2 = (ReadOnlyObservableData*)uNew(__type);
    obj2->ctor_2(initialValue);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/ObservableList.uno
// ---------------------------------------------------------------------

// internal class ReadOnlyObservableList<T>
// {
static void ReadOnlyObservableList_build(uType* type)
{
    ::TYPES[50] = ::g::Uno::Collections::List_typeof();
    ::TYPES[51] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    type->SetPrecalc(
        ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObservableArray_typeof(), offsetof(::g::Fuse::Charting::ObservableData_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Charting::ObservableData_type, interface1));
    type->SetFields(1,
        ::TYPES[50/*Uno.Collections.List`1*/]->MakeType(type->T(0), NULL), offsetof(ReadOnlyObservableList, _values), 0);
}

::g::Fuse::Charting::ObservableData_type* ReadOnlyObservableList_typeof()
{
    static uSStrong< ::g::Fuse::Charting::ObservableData_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Charting::ObservableData_typeof();
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ReadOnlyObservableList);
    options.TypeSize = sizeof(::g::Fuse::Charting::ObservableData_type);
    type = (::g::Fuse::Charting::ObservableData_type*)uClassType::New("Fuse.Charting.ReadOnlyObservableList`1", options);
    type->fp_build_ = ReadOnlyObservableList_build;
    type->fp_ctor_ = (void*)ReadOnlyObservableList__New1_fn;
    type->fp_GetItem = (void(*)(::g::Fuse::Charting::ObservableData*, int32_t*, uObject**))ReadOnlyObservableList__GetItem_fn;
    type->fp_GetLength = (void(*)(::g::Fuse::Charting::ObservableData*, int32_t*))ReadOnlyObservableList__GetLength_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::Charting::ObservableData__FuseReactiveIObservableArraySubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int32_t*))::g::Fuse::Charting::ObservableData__FuseIArrayget_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))::g::Fuse::Charting::ObservableData__FuseIArrayget_Item_fn;
    return type;
}

// public generated ReadOnlyObservableList()
void ReadOnlyObservableList__ctor_1_fn(ReadOnlyObservableList* __this)
{
    __this->ctor_1();
}

// public void Add(T obj)
void ReadOnlyObservableList__Add_fn(ReadOnlyObservableList* __this, void* obj)
{
    uStackFrame __("Fuse.Charting.ReadOnlyObservableList`1", "Add(T)");
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), obj);
    __this->TriggerAdd(uBoxPtr(__this->__type->GetBase(ReadOnlyObservableList_typeof())->T(0), obj));
}

// public void Clear()
void ReadOnlyObservableList__Clear_fn(ReadOnlyObservableList* __this)
{
    __this->Clear();
}

// public int get_Count()
void ReadOnlyObservableList__get_Count_fn(ReadOnlyObservableList* __this, int32_t* __retval)
{
    *__retval = __this->Count();
}

// protected override sealed object GetItem(int index)
void ReadOnlyObservableList__GetItem_fn(ReadOnlyObservableList* __this, int32_t* index, uObject** __retval)
{
    uStackFrame __("Fuse.Charting.ReadOnlyObservableList`1", "GetItem(int)");
    uT ret2(__this->__type->GetBase(ReadOnlyObservableList_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(ReadOnlyObservableList_typeof())->T(0)->ValueSize));
    int32_t index_ = *index;
    return *__retval = uBoxPtr(__this->__type->GetBase(ReadOnlyObservableList_typeof())->T(0), (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_values), uCRef<int32_t>(index_), &ret2), ret2)), void();
}

// protected override sealed int GetLength()
void ReadOnlyObservableList__GetLength_fn(ReadOnlyObservableList* __this, int32_t* __retval)
{
    uStackFrame __("Fuse.Charting.ReadOnlyObservableList`1", "GetLength()");
    return *__retval = uPtr(__this->_values)->Count(), void();
}

// public void Insert(int index, T value)
void ReadOnlyObservableList__Insert_fn(ReadOnlyObservableList* __this, int32_t* index, void* value)
{
    uStackFrame __("Fuse.Charting.ReadOnlyObservableList`1", "Insert(int,T)");
    int32_t index_ = *index;
    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_values), uCRef<int32_t>(index_), value);
    __this->TriggerInsertAt(index_, uBoxPtr(__this->__type->GetBase(ReadOnlyObservableList_typeof())->T(0), value));
}

// public T get_Item(int index)
void ReadOnlyObservableList__get_Item_fn(ReadOnlyObservableList* __this, int32_t* index, uTRef __retval)
{
    uStackFrame __("Fuse.Charting.ReadOnlyObservableList`1", "get_Item(int)");
    uT ret3(__this->__type->GetBase(ReadOnlyObservableList_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(ReadOnlyObservableList_typeof())->T(0)->ValueSize));
    int32_t index_ = *index;
    return __retval.Store((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_values), uCRef<int32_t>(index_), &ret3), ret3)), void();
}

// public generated ReadOnlyObservableList New()
void ReadOnlyObservableList__New1_fn(uType* __type, ReadOnlyObservableList** __retval)
{
    *__retval = ReadOnlyObservableList::New1(__type);
}

// public void RemoveAt(int index)
void ReadOnlyObservableList__RemoveAt_fn(ReadOnlyObservableList* __this, int32_t* index)
{
    __this->RemoveAt(*index);
}

// public void Replace(int index, T value)
void ReadOnlyObservableList__Replace_fn(ReadOnlyObservableList* __this, int32_t* index, void* value)
{
    uStackFrame __("Fuse.Charting.ReadOnlyObservableList`1", "Replace(int,T)");
    int32_t index_ = *index;
    uPtr(__this->_values)->RemoveAt(index_);
    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_values), uCRef<int32_t>(index_), value);
    __this->TriggerNewAt(index_, uBoxPtr(__this->__type->GetBase(ReadOnlyObservableList_typeof())->T(0), value));
}

// public void ReplaceAll(T[] values)
void ReadOnlyObservableList__ReplaceAll_fn(ReadOnlyObservableList* __this, uArray* values)
{
    __this->ReplaceAll(values);
}

// public generated ReadOnlyObservableList() [instance]
void ReadOnlyObservableList::ctor_1()
{
    uType* __types[] = {
        __type->GetBase(ReadOnlyObservableList_typeof())->Precalced(1/*Uno.Collections.List<T>*/),
    };
    _values = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
    ctor_();
}

// public void Clear() [instance]
void ReadOnlyObservableList::Clear()
{
    uStackFrame __("Fuse.Charting.ReadOnlyObservableList`1", "Clear()");
    uPtr(_values)->Clear();
    TriggerClear();
}

// public int get_Count() [instance]
int32_t ReadOnlyObservableList::Count()
{
    uStackFrame __("Fuse.Charting.ReadOnlyObservableList`1", "get_Count()");
    return uPtr(_values)->Count();
}

// public void RemoveAt(int index) [instance]
void ReadOnlyObservableList::RemoveAt(int32_t index)
{
    uStackFrame __("Fuse.Charting.ReadOnlyObservableList`1", "RemoveAt(int)");
    uPtr(_values)->RemoveAt(index);
    TriggerRemoveAt(index);
}

// public void ReplaceAll(T[] values) [instance]
void ReadOnlyObservableList::ReplaceAll(uArray* values)
{
    uType* __types[] = {
        __type->GetBase(ReadOnlyObservableList_typeof())->Precalced(0/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
    };
    uStackFrame __("Fuse.Charting.ReadOnlyObservableList`1", "ReplaceAll(T[])");
    uPtr(_values)->Clear();
    uPtr(_values)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[0], values)));
    TriggerNewAll();
}

// public generated ReadOnlyObservableList New() [static]
ReadOnlyObservableList* ReadOnlyObservableList::New1(uType* __type)
{
    ReadOnlyObservableList* obj1 = (ReadOnlyObservableList*)uNew(__type);
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/FilterObservable.uno
// -----------------------------------------------------------------------

// private sealed class FilterObservable.SourceItem
// {
static void FilterObservable__SourceItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(FilterObservable__SourceItem, Index), 0,
        uObject_typeof(), offsetof(FilterObservable__SourceItem, Value), 0,
        ::g::Uno::Bool_typeof(), offsetof(FilterObservable__SourceItem, Accept), 0);
}

uType* FilterObservable__SourceItem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FilterObservable__SourceItem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Charting.FilterObservable.SourceItem", options);
    type->fp_build_ = FilterObservable__SourceItem_build;
    type->fp_ctor_ = (void*)FilterObservable__SourceItem__New1_fn;
    return type;
}

// public generated SourceItem()
void FilterObservable__SourceItem__ctor__fn(FilterObservable__SourceItem* __this)
{
    __this->ctor_();
}

// public bool get_Desired()
void FilterObservable__SourceItem__get_Desired_fn(FilterObservable__SourceItem* __this, bool* __retval)
{
    *__retval = __this->Desired();
}

// public generated SourceItem New()
void FilterObservable__SourceItem__New1_fn(FilterObservable__SourceItem** __retval)
{
    *__retval = FilterObservable__SourceItem::New1();
}

// public generated SourceItem() [instance]
void FilterObservable__SourceItem::ctor_()
{
}

// public bool get_Desired() [instance]
bool FilterObservable__SourceItem::Desired()
{
    return (Index != -1) && Accept;
}

// public generated SourceItem New() [static]
FilterObservable__SourceItem* FilterObservable__SourceItem::New1()
{
    FilterObservable__SourceItem* obj1 = (FilterObservable__SourceItem*)uNew(FilterObservable__SourceItem_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/ObservableList.uno
// ---------------------------------------------------------------------

// private sealed class ObservableData.Subscription
// {
static void ObservableData__Subscription_build(uType* type)
{
    ::STRINGS[52] = uString::Const("ReadOnly array");
    ::STRINGS[53] = uString::Const("/usr/local/share/uno/Packages/Fuse.Charting/1.12.0/ObservableList.uno");
    ::STRINGS[54] = uString::Const("ClearExclusive");
    ::STRINGS[55] = uString::Const("ReplaceAllExclusive");
    ::STRINGS[56] = uString::Const("SetExclusive");
    type->SetInterfaces(
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(ObservableData__Subscription_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ObservableData__Subscription_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Charting::ObservableData_typeof(), offsetof(ObservableData__Subscription, Source), 0,
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(ObservableData__Subscription, Observer), 0);
}

ObservableData__Subscription_type* ObservableData__Subscription_typeof()
{
    static uSStrong<ObservableData__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ObservableData__Subscription);
    options.TypeSize = sizeof(ObservableData__Subscription_type);
    type = (ObservableData__Subscription_type*)uClassType::New("Fuse.Charting.ObservableData.Subscription", options);
    type->fp_build_ = ObservableData__Subscription_build;
    type->fp_ctor_ = (void*)ObservableData__Subscription__New1_fn;
    type->interface0.fp_ClearExclusive = (void(*)(uObject*))ObservableData__Subscription__ClearExclusive_fn;
    type->interface0.fp_SetExclusive = (void(*)(uObject*, uObject*))ObservableData__Subscription__SetExclusive_fn;
    type->interface0.fp_ReplaceAllExclusive = (void(*)(uObject*, uObject*))ObservableData__Subscription__ReplaceAllExclusive_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ObservableData__Subscription__Dispose_fn;
    return type;
}

// public generated Subscription()
void ObservableData__Subscription__ctor__fn(ObservableData__Subscription* __this)
{
    __this->ctor_();
}

// public void ClearExclusive()
void ObservableData__Subscription__ClearExclusive_fn(ObservableData__Subscription* __this)
{
    __this->ClearExclusive();
}

// public void Dispose()
void ObservableData__Subscription__Dispose_fn(ObservableData__Subscription* __this)
{
    __this->Dispose();
}

// public generated Subscription New()
void ObservableData__Subscription__New1_fn(ObservableData__Subscription** __retval)
{
    *__retval = ObservableData__Subscription::New1();
}

// public void ReplaceAllExclusive(Fuse.IArray values)
void ObservableData__Subscription__ReplaceAllExclusive_fn(ObservableData__Subscription* __this, uObject* values)
{
    __this->ReplaceAllExclusive(values);
}

// public void SetExclusive(object newValue)
void ObservableData__Subscription__SetExclusive_fn(ObservableData__Subscription* __this, uObject* newValue)
{
    __this->SetExclusive(newValue);
}

// public generated Subscription() [instance]
void ObservableData__Subscription::ctor_()
{
}

// public void ClearExclusive() [instance]
void ObservableData__Subscription::ClearExclusive()
{
    ::g::Fuse::Diagnostics::InternalError(::STRINGS[52/*"ReadOnly ar...*/], this, ::STRINGS[53/*"/usr/local/...*/], 49, ::STRINGS[54/*"ClearExclus...*/]);
}

// public void Dispose() [instance]
void ObservableData__Subscription::Dispose()
{
    uStackFrame __("Fuse.Charting.ObservableData.Subscription", "Dispose()");
    uPtr(Source)->Unsubscribe(Observer);
}

// public void ReplaceAllExclusive(Fuse.IArray values) [instance]
void ObservableData__Subscription::ReplaceAllExclusive(uObject* values)
{
    ::g::Fuse::Diagnostics::InternalError(::STRINGS[52/*"ReadOnly ar...*/], this, ::STRINGS[53/*"/usr/local/...*/], 51, ::STRINGS[55/*"ReplaceAllE...*/]);
}

// public void SetExclusive(object newValue) [instance]
void ObservableData__Subscription::SetExclusive(uObject* newValue)
{
    ::g::Fuse::Diagnostics::InternalError(::STRINGS[52/*"ReadOnly ar...*/], this, ::STRINGS[53/*"/usr/local/...*/], 50, ::STRINGS[56/*"SetExclusive"*/]);
}

// public generated Subscription New() [static]
ObservableData__Subscription* ObservableData__Subscription::New1()
{
    ObservableData__Subscription* obj1 = (ObservableData__Subscription*)uNew(ObservableData__Subscription_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBehavior.uno
// -------------------------------------------------------------------

// internal static class TypeUtils
// {
static void TypeUtils_build(uType* type)
{
}

uClassType* TypeUtils_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Charting.TypeUtils", options);
    type->fp_build_ = TypeUtils_build;
    return type;
}

// public static Fuse.Charting.PlotOrientation Opposite(Fuse.Charting.PlotOrientation a)
void TypeUtils__Opposite_fn(int32_t* a, int32_t* __retval)
{
    *__retval = TypeUtils::Opposite(*a);
}

// public static Fuse.Charting.PlotOrientation Opposite(Fuse.Charting.PlotOrientation a) [static]
int32_t TypeUtils::Opposite(int32_t a)
{
    switch (a)
    {
        case 0:
            return 0;
        case 1:
            return 2;
        case 2:
            return 1;
    }

    return 0;
}
// }

// /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotExpression.uno
// ---------------------------------------------------------------------

// private sealed class PlotExpression.PlotSubscription.UndefinedObject
// {
static void PlotExpression__PlotSubscription__UndefinedObject_build(uType* type)
{
}

uType* PlotExpression__PlotSubscription__UndefinedObject_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PlotExpression__PlotSubscription__UndefinedObject);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Charting.PlotExpression.PlotSubscription.UndefinedObject", options);
    type->fp_build_ = PlotExpression__PlotSubscription__UndefinedObject_build;
    type->fp_ctor_ = (void*)PlotExpression__PlotSubscription__UndefinedObject__New1_fn;
    return type;
}

// public generated UndefinedObject()
void PlotExpression__PlotSubscription__UndefinedObject__ctor__fn(PlotExpression__PlotSubscription__UndefinedObject* __this)
{
    __this->ctor_();
}

// public generated UndefinedObject New()
void PlotExpression__PlotSubscription__UndefinedObject__New1_fn(PlotExpression__PlotSubscription__UndefinedObject** __retval)
{
    *__retval = PlotExpression__PlotSubscription__UndefinedObject::New1();
}

// public generated UndefinedObject() [instance]
void PlotExpression__PlotSubscription__UndefinedObject::ctor_()
{
}

// public generated UndefinedObject New() [static]
PlotExpression__PlotSubscription__UndefinedObject* PlotExpression__PlotSubscription__UndefinedObject::New1()
{
    PlotExpression__PlotSubscription__UndefinedObject* obj1 = (PlotExpression__PlotSubscription__UndefinedObject*)uNew(PlotExpression__PlotSubscription__UndefinedObject_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Charting
