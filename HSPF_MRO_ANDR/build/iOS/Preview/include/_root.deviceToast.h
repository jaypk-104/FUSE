// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/toast.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{struct deviceToast;}

namespace g{

// public sealed class deviceToast
// {
::g::Fuse::Scripting::NativeModule_type* deviceToast_typeof();
void deviceToast__ctor_2_fn(deviceToast* __this);
void deviceToast__New2_fn(deviceToast** __retval);
void deviceToast__ToastIt_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void deviceToast__ToastIt1_fn(uString* message);

struct deviceToast : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<deviceToast*> _instance_;
    static uSStrong<deviceToast*>& _instance() { return _instance_; }

    void ctor_2();
    static deviceToast* New2();
    static uObject* ToastIt(::g::Fuse::Scripting::Context* c, uArray* args);
    static void ToastIt1(uString* message);
};
// }

} // ::g
