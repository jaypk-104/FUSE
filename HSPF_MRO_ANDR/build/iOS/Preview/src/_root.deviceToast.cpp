// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/toast.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.deviceToast.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Uno.Bool.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[4];
static uType* TYPES[2];

namespace g{

// public sealed class deviceToast
// {
static void deviceToast_build(uType* type)
{
    ::STRINGS[0] = uString::Const("deviceToast");
    ::STRINGS[1] = uString::Const("ToastIt");
    ::STRINGS[2] = uString::Const("Toast not supported on this platform.");
    ::STRINGS[3] = uString::Const("/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/toast.uno");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&deviceToast::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)deviceToast__New2_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* deviceToast_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(deviceToast);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("deviceToast", options);
    type->fp_build_ = deviceToast_build;
    type->fp_ctor_ = (void*)deviceToast__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public deviceToast()
void deviceToast__ctor_2_fn(deviceToast* __this)
{
    __this->ctor_2();
}

// public deviceToast New()
void deviceToast__New2_fn(deviceToast** __retval)
{
    *__retval = deviceToast::New2();
}

// private static object ToastIt(Fuse.Scripting.Context c, object[] args)
void deviceToast__ToastIt_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = deviceToast::ToastIt(c, args);
}

// private static extern void ToastIt(string message)
void deviceToast__ToastIt1_fn(uString* message)
{
    deviceToast::ToastIt1(message);
}

uSStrong<deviceToast*> deviceToast::_instance_;

// public deviceToast() [instance]
void deviceToast::ctor_2()
{
    uStackFrame __("deviceToast", ".ctor()");
    ctor_1();

    if (deviceToast::_instance_ != NULL)
        return;

    deviceToast::_instance_ = this;
    ::g::Uno::UX::Resource::SetGlobalKey(deviceToast::_instance_, ::STRINGS[0/*"deviceToast"*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"ToastIt"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)deviceToast__ToastIt_fn)));
}

// public deviceToast New() [static]
deviceToast* deviceToast::New2()
{
    deviceToast* obj1 = (deviceToast*)uNew(deviceToast_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static object ToastIt(Fuse.Scripting.Context c, object[] args) [static]
uObject* deviceToast::ToastIt(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("deviceToast", "ToastIt(Fuse.Scripting.Context,object[])");
    uString* arg = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    deviceToast::ToastIt1(arg);
    return NULL;
}

// private static extern void ToastIt(string message) [static]
void deviceToast::ToastIt1(uString* message)
{
    uStackFrame __("deviceToast", "ToastIt(string)");
    ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[2/*"Toast not s...*/], 0, ::STRINGS[3/*"/Users/jay/...*/], 47);
}
// }

} // ::g
