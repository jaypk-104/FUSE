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
void ReadOnlyObservableData__ctor_1_fn(ReadOnlyObservableData* __this);
void ReadOnlyObservableData__ctor_2_fn(ReadOnlyObservableData* __this, uObject* initialValue);
void ReadOnlyObservableData__Clear_fn(ReadOnlyObservableData* __this);
void ReadOnlyObservableData__GetItem_fn(ReadOnlyObservableData* __this, int32_t* index, uObject** __retval);
void ReadOnlyObservableData__GetLength_fn(ReadOnlyObservableData* __this, int32_t* __retval);
void ReadOnlyObservableData__New1_fn(uType* __type, ReadOnlyObservableData** __retval);
void ReadOnlyObservableData__New2_fn(uType* __type, uObject* initialValue, ReadOnlyObservableData** __retval);
void ReadOnlyObservableData__OnSubscribe_fn(ReadOnlyObservableData* __this, uObject* observer);
void ReadOnlyObservableData__Set_fn(ReadOnlyObservableData* __this, uObject* value);
void ReadOnlyObservableData__get_Value_fn(ReadOnlyObservableData* __this, uObject** __retval);

struct ReadOnlyObservableData : ::g::Fuse::Charting::ObservableData
{
    uStrong<uObject*> _value;

    void ctor_1();
    void ctor_2(uObject* initialValue);
    void Clear();
    void Set(uObject* value);
    uObject* Value();
    static ReadOnlyObservableData* New1(uType* __type);
    static ReadOnlyObservableData* New2(uType* __type, uObject* initialValue);
};
// }

}}} // ::g::Fuse::Charting
