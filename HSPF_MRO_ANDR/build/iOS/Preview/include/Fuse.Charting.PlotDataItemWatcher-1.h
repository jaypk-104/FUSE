// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotDataItem.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Charting{struct IPlotDataItem;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotDataItemWatcher;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Charting{

// internal sealed class PlotDataItemWatcher<T>
// {
struct PlotDataItemWatcher_type : uType
{
    ::g::Uno::IDisposable interface0;
};

PlotDataItemWatcher_type* PlotDataItemWatcher_typeof();
void PlotDataItemWatcher__ctor__fn(PlotDataItemWatcher* __this, ::g::Fuse::Node* origin, uObject* listener);
void PlotDataItemWatcher__Dispose_fn(PlotDataItemWatcher* __this);
void PlotDataItemWatcher__GetDataContext_fn(PlotDataItemWatcher* __this, ::g::Fuse::Node* from, ::g::Fuse::Charting::IPlotDataItem** __retval);
void PlotDataItemWatcher__New1_fn(uType* __type, ::g::Fuse::Node* origin, uObject* listener, PlotDataItemWatcher** __retval);
void PlotDataItemWatcher__OnChanged_fn(PlotDataItemWatcher* __this);

struct PlotDataItemWatcher : uObject
{
    uStrong<uObject*> _listener;
    uStrong< ::g::Fuse::Charting::IPlotDataItem*> _point;

    void ctor_(::g::Fuse::Node* origin, uObject* listener);
    void Dispose();
    ::g::Fuse::Charting::IPlotDataItem* GetDataContext(::g::Fuse::Node* from);
    void OnChanged();
    static PlotDataItemWatcher* New1(uType* __type, ::g::Fuse::Node* origin, uObject* listener);
};
// }

}}} // ::g::Fuse::Charting
