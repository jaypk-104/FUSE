// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/ObservableList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Charting.ObservableData.h>
#include <Fuse.IArray.h>
#include <Fuse.Reactive.IObservableArray.h>
namespace g{namespace Fuse{namespace Charting{struct ReadOnlyObservableData;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal sealed class ReadOnlyObservableData<T>
// {
::g::Fuse::Charting::ObservableData_type* ReadOnlyObservableData_typeof();
void ReadOnlyObservableData__GetItem_fn(ReadOnlyObservableData* __this, int32_t* index, uObject** __retval);
void ReadOnlyObservableData__GetLength_fn(ReadOnlyObservableData* __this, int32_t* __retval);
void ReadOnlyObservableData__OnSubscribe_fn(ReadOnlyObservableData* __this, uObject* observer);

struct ReadOnlyObservableData : ::g::Fuse::Charting::ObservableData
{
    uStrong<uObject*> _value;
};
// }

}}} // ::g::Fuse::Charting
