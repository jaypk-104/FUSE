// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBehavior.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Charting.PlotDataPoint.h>
#include <Fuse.Charting.ReadOnlyObservableList-1.h>
#include <Fuse.IArray.h>
#include <Fuse.Reactive.IObservableArray.h>
namespace g{namespace Fuse{namespace Charting{struct ObservableDataItems;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal sealed class ObservableDataItems
// {
::g::Fuse::Charting::ObservableData_type* ObservableDataItems_typeof();
void ObservableDataItems__ctor_2_fn(ObservableDataItems* __this);
void ObservableDataItems__New2_fn(ObservableDataItems** __retval);

struct ObservableDataItems : ::g::Fuse::Charting::ReadOnlyObservableList
{
    void ctor_2();
    static ObservableDataItems* New2();
};
// }

}}} // ::g::Fuse::Charting
