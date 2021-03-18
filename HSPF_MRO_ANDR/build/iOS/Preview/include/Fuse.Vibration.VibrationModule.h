// This file was generated based on /usr/local/share/uno/Packages/Fuse.Vibration/1.12.0/VibrationModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Vibration{struct VibrationModule;}}}

namespace g{
namespace Fuse{
namespace Vibration{

// public sealed class VibrationModule
// {
::g::Fuse::Scripting::NativeModule_type* VibrationModule_typeof();
void VibrationModule__ctor_2_fn(VibrationModule* __this);
void VibrationModule__New2_fn(VibrationModule** __retval);
void VibrationModule__Vibrate_fn(::g::Fuse::Scripting::Context* context, uArray* args, uArray** __retval);

struct VibrationModule : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<VibrationModule*> _instance_;
    static uSStrong<VibrationModule*>& _instance() { return _instance_; }

    void ctor_2();
    static VibrationModule* New2();
    static uArray* Vibrate(::g::Fuse::Scripting::Context* context, uArray* args);
};
// }

}}} // ::g::Fuse::Vibration
