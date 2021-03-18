// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Alerts.NativeAlerts.DialogCallback.h>
#include <Uno.Bool.h>
#include <Uno.Threading.Promise-1.h>

namespace g{
namespace Fuse{
namespace Alerts{

// /usr/local/share/uno/Packages/Fuse.Alerts/1.14.0/NativeAlerts.uno
// -----------------------------------------------------------------

// internal sealed class NativeAlerts.DialogCallback
// {
static void NativeAlerts__DialogCallback_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(NativeAlerts__DialogCallback, _promise), 0);
}

uType* NativeAlerts__DialogCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NativeAlerts__DialogCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Alerts.NativeAlerts.DialogCallback", options);
    type->fp_build_ = NativeAlerts__DialogCallback_build;
    return type;
}

// public DialogCallback(Uno.Threading.Promise<bool> promise)
void NativeAlerts__DialogCallback__ctor__fn(NativeAlerts__DialogCallback* __this, ::g::Uno::Threading::Promise* promise)
{
    __this->ctor_(promise);
}

// public void Negative()
void NativeAlerts__DialogCallback__Negative_fn(NativeAlerts__DialogCallback* __this)
{
    __this->Negative();
}

// public DialogCallback New(Uno.Threading.Promise<bool> promise)
void NativeAlerts__DialogCallback__New1_fn(::g::Uno::Threading::Promise* promise, NativeAlerts__DialogCallback** __retval)
{
    *__retval = NativeAlerts__DialogCallback::New1(promise);
}

// public void Positive()
void NativeAlerts__DialogCallback__Positive_fn(NativeAlerts__DialogCallback* __this)
{
    __this->Positive();
}

// public DialogCallback(Uno.Threading.Promise<bool> promise) [instance]
void NativeAlerts__DialogCallback::ctor_(::g::Uno::Threading::Promise* promise)
{
    _promise = promise;
}

// public void Negative() [instance]
void NativeAlerts__DialogCallback::Negative()
{
    uStackFrame __("Fuse.Alerts.NativeAlerts.DialogCallback", "Negative()");
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_promise), uCRef(false));
}

// public void Positive() [instance]
void NativeAlerts__DialogCallback::Positive()
{
    uStackFrame __("Fuse.Alerts.NativeAlerts.DialogCallback", "Positive()");
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_promise), uCRef(true));
}

// public DialogCallback New(Uno.Threading.Promise<bool> promise) [static]
NativeAlerts__DialogCallback* NativeAlerts__DialogCallback::New1(::g::Uno::Threading::Promise* promise)
{
    NativeAlerts__DialogCallback* obj1 = (NativeAlerts__DialogCallback*)uNew(NativeAlerts__DialogCallback_typeof());
    obj1->ctor_(promise);
    return obj1;
}
// }

}}} // ::g::Fuse::Alerts
