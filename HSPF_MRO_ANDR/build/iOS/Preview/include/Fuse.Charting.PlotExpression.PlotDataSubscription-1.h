// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotExpression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Charting.IPlotDataItem.h>
#include <Fuse.Charting.IPlotDataItemListener-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Charting{struct PlotDataItemWatcher;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotExpression;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotExpression__PlotDataSubscription;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Charting{

// private sealed class PlotExpression.PlotDataSubscription<T>
// {
struct PlotExpression__PlotDataSubscription_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Charting::IPlotDataItemListener interface1;
};

PlotExpression__PlotDataSubscription_type* PlotExpression__PlotDataSubscription_typeof();
void PlotExpression__PlotDataSubscription__ctor__fn(PlotExpression__PlotDataSubscription* __this, ::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Node* origin, uString* key, int32_t* field, uObject* listener);
void PlotExpression__PlotDataSubscription__Dispose_fn(PlotExpression__PlotDataSubscription* __this);
void PlotExpression__PlotDataSubscription__FuseChartingIPlotDataItemListenerTOnNewData_fn(PlotExpression__PlotDataSubscription* __this, ::g::Fuse::Charting::IPlotDataItem* entry);
void PlotExpression__PlotDataSubscription__New1_fn(uType* __type, ::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Node* origin, uString* key, int32_t* field, uObject* listener, PlotExpression__PlotDataSubscription** __retval);

struct PlotExpression__PlotDataSubscription : uObject
{
    uStrong< ::g::Fuse::Charting::PlotExpression*> _expr;
    uStrong<uObject*> _listener;
    uStrong<uString*> _key;
    uStrong< ::g::Fuse::Charting::PlotDataItemWatcher*> _watcher;
    int32_t _field;

    void ctor_(::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Node* origin, uString* key, int32_t field, uObject* listener);
    void Dispose();
    static PlotExpression__PlotDataSubscription* New1(uType* __type, ::g::Fuse::Charting::PlotExpression* expr, ::g::Fuse::Node* origin, uString* key, int32_t field, uObject* listener);
};
// }

}}} // ::g::Fuse::Charting
