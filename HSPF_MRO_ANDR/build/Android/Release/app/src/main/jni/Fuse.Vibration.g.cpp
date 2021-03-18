// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Marshal.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Vibration.AndroidVibrator.h>
#include <Fuse.Vibration.Vibrate.h>
#include <Fuse.Vibration.Vibration.h>
#include <Fuse.Vibration.VibrationModule.h>
#include <jni.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Permissions.Permissions.Android.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.PlatformPermission.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Vibration{

// /usr/local/share/uno/Packages/Fuse.Vibration/1.12.0/Vibration.uno
// -----------------------------------------------------------------

// internal sealed class AndroidVibrator
// {
static void AndroidVibrator_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(AndroidVibrator, _seconds), 0);
}

uType* AndroidVibrator_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(AndroidVibrator);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Vibration.AndroidVibrator", options);
    type->fp_build_ = AndroidVibrator_build;
    return type;
}

// public AndroidVibrator(double seconds)
void AndroidVibrator__ctor__fn(AndroidVibrator* __this, double* seconds)
{
    __this->ctor_(*seconds);
}

// public extern void Done(Uno.Permissions.PlatformPermission permission)
void AndroidVibrator__Done_fn(AndroidVibrator* __this, ::g::Uno::Permissions::PlatformPermission* permission)
{
    __this->Done(*permission);
}

// public AndroidVibrator New(double seconds)
void AndroidVibrator__New1_fn(double* seconds, AndroidVibrator** __retval)
{
    *__retval = AndroidVibrator::New1(*seconds);
}

// public AndroidVibrator(double seconds) [instance]
void AndroidVibrator::ctor_(double seconds)
{
    _seconds = seconds;
}

// public extern void Done(Uno.Permissions.PlatformPermission permission) [instance]
void AndroidVibrator::Done(::g::Uno::Permissions::PlatformPermission permission)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Done402", "(Lcom/uno/UnoObject;Lcom/uno/UnoObject;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Uno::Permissions::PlatformPermission _upermission=permission;
        jobject _permission = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(uBox(::g::Uno::Permissions::PlatformPermission_typeof(), _upermission));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_permission);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_permission!=NULL) { U_JNIVAR->DeleteLocalRef(_permission); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public AndroidVibrator New(double seconds) [static]
AndroidVibrator* AndroidVibrator::New1(double seconds)
{
    AndroidVibrator* obj1 = (AndroidVibrator*)uNew(AndroidVibrator_typeof());
    obj1->ctor_(seconds);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Vibration/1.12.0/Vibrate.uno
// ---------------------------------------------------------------

// public sealed class Vibrate
// {
static void Vibrate_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Uno::Double_typeof(), offsetof(Vibrate, _Duration), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Vibrate_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Vibrate);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Vibration.Vibrate", options);
    type->fp_build_ = Vibrate_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Vibrate__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated double get_Duration()
void Vibrate__get_Duration_fn(Vibrate* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void set_Duration(double value)
void Vibrate__set_Duration_fn(Vibrate* __this, double* value)
{
    __this->Duration(*value);
}

// protected override sealed void Perform(Fuse.Node target)
void Vibrate__Perform_fn(Vibrate* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Vibration::Vibration::Vibrate(__this->Duration());
}

// public generated double get_Duration() [instance]
double Vibrate::Duration()
{
    return _Duration;
}

// public generated void set_Duration(double value) [instance]
void Vibrate::Duration(double value)
{
    _Duration = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Vibration/1.12.0/Vibration.uno
// -----------------------------------------------------------------

// public static class Vibration
// {
static void Vibration_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Permissions::PlatformPermission_typeof(), NULL);
}

uClassType* Vibration_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Vibration.Vibration", options);
    type->fp_build_ = Vibration_build;
    return type;
}

// public static extern void Vibrate(double seconds)
void Vibration__Vibrate_fn(double* seconds)
{
    Vibration::Vibrate(*seconds);
}

// public static extern void Vibrate(double seconds) [static]
void Vibration::Vibrate(double seconds)
{
    uPtr(::g::Uno::Permissions::Permissions::Request(::g::Uno::Permissions::Permissions__Android::VIBRATE()))->Then(uDelegate::New(::TYPES[0/*Uno.Action<Uno.Permissions.PlatformPermission>*/], (void*)::g::Fuse::Vibration::AndroidVibrator__Done_fn, ::g::Fuse::Vibration::AndroidVibrator::New1(seconds)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Vibration/1.12.0/VibrationModule.uno
// -----------------------------------------------------------------------

// public sealed class VibrationModule
// {
static void VibrationModule_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Vibration");
    ::STRINGS[1] = uString::Const("vibrate");
    ::TYPES[1] = ::g::Fuse::Scripting::NativeCallback_typeof();
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&VibrationModule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* VibrationModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(VibrationModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Vibration.VibrationModule", options);
    type->fp_build_ = VibrationModule_build;
    type->fp_ctor_ = (void*)VibrationModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public VibrationModule()
void VibrationModule__ctor_2_fn(VibrationModule* __this)
{
    __this->ctor_2();
}

// public VibrationModule New()
void VibrationModule__New2_fn(VibrationModule** __retval)
{
    *__retval = VibrationModule::New2();
}

// private static object[] Vibrate(Fuse.Scripting.Context context, object[] args)
void VibrationModule__Vibrate_fn(::g::Fuse::Scripting::Context* context, uArray* args, uArray** __retval)
{
    *__retval = VibrationModule::Vibrate(context, args);
}

uSStrong<VibrationModule*> VibrationModule::_instance_;

// public VibrationModule() [instance]
void VibrationModule::ctor_2()
{
    ctor_1();

    if (VibrationModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(VibrationModule::_instance_ = this, ::STRINGS[0/*"FuseJS/Vibr...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"vibrate"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)VibrationModule__Vibrate_fn)));
}

// public VibrationModule New() [static]
VibrationModule* VibrationModule::New2()
{
    VibrationModule* obj1 = (VibrationModule*)uNew(VibrationModule_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static object[] Vibrate(Fuse.Scripting.Context context, object[] args) [static]
uArray* VibrationModule::Vibrate(::g::Fuse::Scripting::Context* context, uArray* args)
{
    double seconds = (uPtr(args)->Length() > 0) ? ::g::Fuse::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)) : 0.4;
    ::g::Fuse::Vibration::Vibration::Vibrate(seconds);
    return NULL;
}
// }

}}} // ::g::Fuse::Vibration
