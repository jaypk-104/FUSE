// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/DataSeries.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Charting{struct Data;}}}
namespace g{namespace Fuse{namespace Charting{struct DataSeries;}}}
namespace g{namespace Fuse{namespace Charting{struct DataStats;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotBehavior;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Charting{

// public sealed class DataSeries
// {
struct DataSeries_type : uType
{
    ::g::Fuse::Reactive::IObserver interface0;
};

DataSeries_type* DataSeries_typeof();
void DataSeries__ctor_1_fn(DataSeries* __this);
void DataSeries__AddArrayData_fn(DataSeries* __this, uObject* data);
void DataSeries__AddDataObject_fn(DataSeries* __this, uObject* a);
void DataSeries__AddSubscription_fn(DataSeries* __this);
void DataSeries__ClearSubscription_fn(DataSeries* __this);
void DataSeries__FuseReactiveIObserverOnAdd_fn(DataSeries* __this, uObject* addedValue);
void DataSeries__FuseReactiveIObserverOnClear_fn(DataSeries* __this);
void DataSeries__FuseReactiveIObserverOnFailed_fn(DataSeries* __this, uString* message);
void DataSeries__FuseReactiveIObserverOnInsertAt_fn(DataSeries* __this, int32_t* index, uObject* value);
void DataSeries__FuseReactiveIObserverOnNewAll_fn(DataSeries* __this, uObject* values);
void DataSeries__FuseReactiveIObserverOnNewAt_fn(DataSeries* __this, int32_t* index, uObject* newValue);
void DataSeries__FuseReactiveIObserverOnRemoveAt_fn(DataSeries* __this, int32_t* index);
void DataSeries__FuseReactiveIObserverOnSet_fn(DataSeries* __this, uObject* newValue);
void DataSeries__InsertDataObject_fn(DataSeries* __this, int32_t* index, uObject* a);
void DataSeries__InvalidateData_fn(DataSeries* __this);
void DataSeries__get_Metric_fn(DataSeries* __this, int32_t* __retval);
void DataSeries__set_Metric_fn(DataSeries* __this, int32_t* value);
void DataSeries__New2_fn(DataSeries** __retval);
void DataSeries__get_PlotData_fn(DataSeries* __this, ::g::Uno::Collections::List** __retval);
void DataSeries__Root_fn(DataSeries* __this, ::g::Fuse::Charting::PlotBehavior* plot);
void DataSeries__SafeMarshalFloat_fn(DataSeries* __this, uObject* a, float* __retval);
void DataSeries__Unroot_fn(DataSeries* __this);

struct DataSeries : ::g::Uno::UX::PropertyObject
{
    uStrong<uObject*> _subscription;
    uStrong<uObject*> _rawData;
    uStrong<uObject*> _observableData;
    uStrong< ::g::Uno::Collections::List*> _data;
    int32_t _metric;
    uStrong< ::g::Fuse::Charting::PlotBehavior*> _plot;
    static uSStrong< ::g::Fuse::Charting::DataStats*> Empty_;
    static uSStrong< ::g::Fuse::Charting::DataStats*>& Empty() { return DataSeries_typeof()->Init(), Empty_; }
    uStrong< ::g::Fuse::Charting::DataStats*> Stats;

    void ctor_1();
    void AddArrayData(uObject* data);
    void AddDataObject(uObject* a);
    void AddSubscription();
    void ClearSubscription();
    void InsertDataObject(int32_t index, uObject* a);
    void InvalidateData();
    int32_t Metric();
    void Metric(int32_t value);
    ::g::Uno::Collections::List* PlotData();
    void Root(::g::Fuse::Charting::PlotBehavior* plot);
    float SafeMarshalFloat(uObject* a);
    void Unroot();
    static DataSeries* New2();
};
// }

}}} // ::g::Fuse::Charting
