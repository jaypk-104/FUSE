// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/ObservableList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Charting.ObservableData.h>
#include <Fuse.IArray.h>
#include <Fuse.Reactive.IObservableArray.h>
namespace g{namespace Fuse{namespace Charting{struct ReadOnlyObservableList;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal class ReadOnlyObservableList<T>
// {
::g::Fuse::Charting::ObservableData_type* ReadOnlyObservableList_typeof();
void ReadOnlyObservableList__ctor_1_fn(ReadOnlyObservableList* __this);
void ReadOnlyObservableList__Add_fn(ReadOnlyObservableList* __this, void* obj);
void ReadOnlyObservableList__Clear_fn(ReadOnlyObservableList* __this);
void ReadOnlyObservableList__get_Count_fn(ReadOnlyObservableList* __this, int32_t* __retval);
void ReadOnlyObservableList__GetItem_fn(ReadOnlyObservableList* __this, int32_t* index, uObject** __retval);
void ReadOnlyObservableList__GetLength_fn(ReadOnlyObservableList* __this, int32_t* __retval);
void ReadOnlyObservableList__Insert_fn(ReadOnlyObservableList* __this, int32_t* index, void* value);
void ReadOnlyObservableList__get_Item_fn(ReadOnlyObservableList* __this, int32_t* index, uTRef __retval);
void ReadOnlyObservableList__New1_fn(uType* __type, ReadOnlyObservableList** __retval);
void ReadOnlyObservableList__RemoveAt_fn(ReadOnlyObservableList* __this, int32_t* index);
void ReadOnlyObservableList__Replace_fn(ReadOnlyObservableList* __this, int32_t* index, void* value);
void ReadOnlyObservableList__ReplaceAll_fn(ReadOnlyObservableList* __this, uArray* values);

struct ReadOnlyObservableList : ::g::Fuse::Charting::ObservableData
{
    uStrong< ::g::Uno::Collections::List*> _values;

    void ctor_1();
    template<class T>
    void Add(T obj) { ReadOnlyObservableList__Add_fn(this, uConstrain(__type->GetBase(ReadOnlyObservableList_typeof())->T(0), obj)); }
    void Clear();
    int32_t Count();
    template<class T>
    void Insert(int32_t index, T value) { ReadOnlyObservableList__Insert_fn(this, &index, uConstrain(__type->GetBase(ReadOnlyObservableList_typeof())->T(0), value)); }
    template<class T>
    T Item(int32_t index) { T __retval; return ReadOnlyObservableList__get_Item_fn(this, &index, &__retval), __retval; }
    void RemoveAt(int32_t index);
    template<class T>
    void Replace(int32_t index, T value) { ReadOnlyObservableList__Replace_fn(this, &index, uConstrain(__type->GetBase(ReadOnlyObservableList_typeof())->T(0), value)); }
    void ReplaceAll(uArray* values);
    static ReadOnlyObservableList* New1(uType* __type);
};
// }

}}} // ::g::Fuse::Charting
