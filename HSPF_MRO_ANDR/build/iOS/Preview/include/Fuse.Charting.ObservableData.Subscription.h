// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/ObservableList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ISubscription.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Charting{struct ObservableData;}}}
namespace g{namespace Fuse{namespace Charting{struct ObservableData__Subscription;}}}

namespace g{
namespace Fuse{
namespace Charting{

// private sealed class ObservableData.Subscription
// {
struct ObservableData__Subscription_type : uType
{
    ::g::Fuse::Reactive::ISubscription interface0;
    ::g::Uno::IDisposable interface1;
};

ObservableData__Subscription_type* ObservableData__Subscription_typeof();
void ObservableData__Subscription__ctor__fn(ObservableData__Subscription* __this);
void ObservableData__Subscription__ClearExclusive_fn(ObservableData__Subscription* __this);
void ObservableData__Subscription__Dispose_fn(ObservableData__Subscription* __this);
void ObservableData__Subscription__New1_fn(ObservableData__Subscription** __retval);
void ObservableData__Subscription__ReplaceAllExclusive_fn(ObservableData__Subscription* __this, uObject* values);
void ObservableData__Subscription__SetExclusive_fn(ObservableData__Subscription* __this, uObject* newValue);

struct ObservableData__Subscription : uObject
{
    uStrong< ::g::Fuse::Charting::ObservableData*> Source;
    uStrong<uObject*> Observer;

    void ctor_();
    void ClearExclusive();
    void Dispose();
    void ReplaceAllExclusive(uObject* values);
    void SetExclusive(uObject* newValue);
    static ObservableData__Subscription* New1();
};
// }

}}} // ::g::Fuse::Charting
