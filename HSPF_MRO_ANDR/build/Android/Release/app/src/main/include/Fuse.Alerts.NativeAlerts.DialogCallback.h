// This file was generated based on /usr/local/share/uno/Packages/Fuse.Alerts/1.14.0/NativeAlerts.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Alerts{struct NativeAlerts__DialogCallback;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Alerts{

// internal sealed class NativeAlerts.DialogCallback
// {
uType* NativeAlerts__DialogCallback_typeof();
void NativeAlerts__DialogCallback__ctor__fn(NativeAlerts__DialogCallback* __this, ::g::Uno::Threading::Promise* promise);
void NativeAlerts__DialogCallback__Negative_fn(NativeAlerts__DialogCallback* __this);
void NativeAlerts__DialogCallback__New1_fn(::g::Uno::Threading::Promise* promise, NativeAlerts__DialogCallback** __retval);
void NativeAlerts__DialogCallback__Positive_fn(NativeAlerts__DialogCallback* __this);

struct NativeAlerts__DialogCallback : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> _promise;

    void ctor_(::g::Uno::Threading::Promise* promise);
    void Negative();
    void Positive();
    static NativeAlerts__DialogCallback* New1(::g::Uno::Threading::Promise* promise);
};
// }

}}} // ::g::Fuse::Alerts
