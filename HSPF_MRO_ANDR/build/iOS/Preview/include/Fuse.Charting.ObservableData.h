// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/ObservableList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Fuse.Reactive.IObservableArray.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Charting{struct ObservableData;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal abstract class ObservableData
// {
struct ObservableData_type : uType
{
    ::g::Fuse::Reactive::IObservableArray interface0;
    ::g::Fuse::IArray interface1;
    void(*fp_GetItem)(::g::Fuse::Charting::ObservableData*, int32_t*, uObject**);
    void(*fp_GetLength)(::g::Fuse::Charting::ObservableData*, int32_t*);
    void(*fp_OnSubscribe)(::g::Fuse::Charting::ObservableData*, uObject*);
    void(*fp_OnSubscription)(::g::Fuse::Charting::ObservableData*);
    void(*fp_OnUnsubscription)(::g::Fuse::Charting::ObservableData*);
};

ObservableData_type* ObservableData_typeof();
void ObservableData__ctor__fn(ObservableData* __this);
void ObservableData__FuseIArrayget_Item_fn(ObservableData* __this, int32_t* index, uObject** __retval);
void ObservableData__FuseIArrayget_Length_fn(ObservableData* __this, int32_t* __retval);
void ObservableData__FuseReactiveIObservableArraySubscribe_fn(ObservableData* __this, uObject* observer, uObject** __retval);
void ObservableData__get_HasSubscription_fn(ObservableData* __this, bool* __retval);
void ObservableData__OnSubscribe_fn(ObservableData* __this, uObject* observer);
void ObservableData__OnSubscription_fn(ObservableData* __this);
void ObservableData__OnUnsubscription_fn(ObservableData* __this);
void ObservableData__TriggerAdd_fn(ObservableData* __this, uObject* value);
void ObservableData__TriggerClear_fn(ObservableData* __this);
void ObservableData__TriggerFail_fn(ObservableData* __this, uString* message);
void ObservableData__TriggerInsertAt_fn(ObservableData* __this, int32_t* index, uObject* value);
void ObservableData__TriggerNewAll_fn(ObservableData* __this);
void ObservableData__TriggerNewAt_fn(ObservableData* __this, int32_t* index, uObject* value);
void ObservableData__TriggerRemoveAt_fn(ObservableData* __this, int32_t* index);
void ObservableData__TriggerSet_fn(ObservableData* __this, uObject* value);
void ObservableData__Unsubscribe_fn(ObservableData* __this, uObject* observer);

struct ObservableData : uObject
{
    uStrong< ::g::Uno::Collections::List*> _observers;

    void ctor_();
    uObject* GetItem(int32_t index) { uObject* __retval; return (((ObservableData_type*)__type)->fp_GetItem)(this, &index, &__retval), __retval; }
    int32_t GetLength() { int32_t __retval; return (((ObservableData_type*)__type)->fp_GetLength)(this, &__retval), __retval; }
    bool HasSubscription();
    void OnSubscribe(uObject* observer) { (((ObservableData_type*)__type)->fp_OnSubscribe)(this, observer); }
    void OnSubscription() { (((ObservableData_type*)__type)->fp_OnSubscription)(this); }
    void OnUnsubscription() { (((ObservableData_type*)__type)->fp_OnUnsubscription)(this); }
    void TriggerAdd(uObject* value);
    void TriggerClear();
    void TriggerFail(uString* message);
    void TriggerInsertAt(int32_t index, uObject* value);
    void TriggerNewAll();
    void TriggerNewAt(int32_t index, uObject* value);
    void TriggerRemoveAt(int32_t index);
    void TriggerSet(uObject* value);
    void Unsubscribe(uObject* observer);
    static void OnSubscribe(ObservableData* __this, uObject* observer) { ObservableData__OnSubscribe_fn(__this, observer); }
    static void OnSubscription(ObservableData* __this) { ObservableData__OnSubscription_fn(__this); }
    static void OnUnsubscription(ObservableData* __this) { ObservableData__OnUnsubscription_fn(__this); }
};
// }

}}} // ::g::Fuse::Charting
