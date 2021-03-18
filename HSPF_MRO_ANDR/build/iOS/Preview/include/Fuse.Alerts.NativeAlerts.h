// This file was generated based on /usr/local/share/uno/Packages/Fuse.Alerts/1.14.0/NativeAlerts.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Alerts{struct NativeAlerts;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Alerts{

// public sealed class NativeAlerts
// {
::g::Fuse::Scripting::NativeModule_type* NativeAlerts_typeof();
void NativeAlerts__ctor_2_fn(NativeAlerts* __this);
void NativeAlerts__Alert_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);
void NativeAlerts__AlertInternal_fn(uString* title, uString* message, uString* okButtonLabel, ::g::Uno::Threading::Future1** __retval);
void NativeAlerts__AlertNative_fn(uString* title, uString* message, uString* okButtonLabel, uDelegate* onOK);
void NativeAlerts__Confirm_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);
void NativeAlerts__ConfirmInternal_fn(uString* title, uString* message, uString* okButtonLabel, uString* cancelButtonLabel, ::g::Uno::Threading::Future1** __retval);
void NativeAlerts__ConfirmNative_fn(uString* title, uString* message, uString* okButtonLabel, uString* cancelButtonLabel, uDelegate* onOK, uDelegate* onCancel);
void NativeAlerts__getOrDefault_fn(uType* __type, uArray* args, int32_t* index, void* defaultValue, uTRef __retval);
void NativeAlerts__New2_fn(NativeAlerts** __retval);

struct NativeAlerts : ::g::Fuse::Scripting::NativeModule
{
    void ctor_2();
    static ::g::Uno::Threading::Future1* Alert(uArray* args);
    static ::g::Uno::Threading::Future1* AlertInternal(uString* title, uString* message, uString* okButtonLabel);
    static void AlertNative(uString* title, uString* message, uString* okButtonLabel, uDelegate* onOK);
    static ::g::Uno::Threading::Future1* Confirm(uArray* args);
    static ::g::Uno::Threading::Future1* ConfirmInternal(uString* title, uString* message, uString* okButtonLabel, uString* cancelButtonLabel);
    static void ConfirmNative(uString* title, uString* message, uString* okButtonLabel, uString* cancelButtonLabel, uDelegate* onOK, uDelegate* onCancel);
    template<class T>
    static T getOrDefault(uType* __type, uArray* args, int32_t index, T defaultValue) { T __retval; return NativeAlerts__getOrDefault_fn(__type, args, &index, uConstrain(__type->U(0), defaultValue), &__retval), __retval; }
    static NativeAlerts* New2();
};
// }

}}} // ::g::Fuse::Alerts
