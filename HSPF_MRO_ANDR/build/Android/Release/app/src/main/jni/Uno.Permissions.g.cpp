// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Permissions.Internal.Android.h>
#include <Uno.Permissions.IPermissionPromise.h>
#include <Uno.Permissions.PermissionPromise.h>
#include <Uno.Permissions.Permissions.Android.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.PermissionsPromise.h>
#include <Uno.Permissions.PlatformPermission.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno/JNIHelper.h>

namespace g{
namespace Uno{
namespace Permissions{

// /usr/local/share/uno/Packages/Uno.Permissions/1.12.0/Permissions.uno
// --------------------------------------------------------------------

// public static extern class Permissions.Android
// {
static void Permissions__Android_build(uType* type)
{
}

uClassType* Permissions__Android_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Permissions.Permissions.Android", options);
    type->fp_build_ = Permissions__Android_build;
    return type;
}

// public static Uno.Permissions.PlatformPermission get_CAMERA()
void Permissions__Android__get_CAMERA_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Permissions__Android::CAMERA();
}

// public static Uno.Permissions.PlatformPermission get_INTERNET()
void Permissions__Android__get_INTERNET_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Permissions__Android::INTERNET();
}

// public static Uno.Permissions.PlatformPermission get_READ_EXTERNAL_STORAGE()
void Permissions__Android__get_READ_EXTERNAL_STORAGE_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Permissions__Android::READ_EXTERNAL_STORAGE();
}

// public static Uno.Permissions.PlatformPermission get_VIBRATE()
void Permissions__Android__get_VIBRATE_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Permissions__Android::VIBRATE();
}

// public static Uno.Permissions.PlatformPermission get_WRITE_EXTERNAL_STORAGE()
void Permissions__Android__get_WRITE_EXTERNAL_STORAGE_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Permissions__Android::WRITE_EXTERNAL_STORAGE();
}

// public static Uno.Permissions.PlatformPermission get_CAMERA() [static]
::g::Uno::Permissions::PlatformPermission Permissions__Android::CAMERA()
{
    return ::g::Uno::Permissions::Internal::Android::_camera();
}

// public static Uno.Permissions.PlatformPermission get_INTERNET() [static]
::g::Uno::Permissions::PlatformPermission Permissions__Android::INTERNET()
{
    return ::g::Uno::Permissions::Internal::Android::_internet();
}

// public static Uno.Permissions.PlatformPermission get_READ_EXTERNAL_STORAGE() [static]
::g::Uno::Permissions::PlatformPermission Permissions__Android::READ_EXTERNAL_STORAGE()
{
    return ::g::Uno::Permissions::Internal::Android::_read_external_storage();
}

// public static Uno.Permissions.PlatformPermission get_VIBRATE() [static]
::g::Uno::Permissions::PlatformPermission Permissions__Android::VIBRATE()
{
    return ::g::Uno::Permissions::Internal::Android::_vibrate();
}

// public static Uno.Permissions.PlatformPermission get_WRITE_EXTERNAL_STORAGE() [static]
::g::Uno::Permissions::PlatformPermission Permissions__Android::WRITE_EXTERNAL_STORAGE()
{
    return ::g::Uno::Permissions::Internal::Android::_write_external_storage();
}
// }

// /usr/local/share/uno/Packages/Uno.Permissions/1.12.0/Permissions.uno
// --------------------------------------------------------------------

// internal abstract interface IPermissionPromise
// {
uInterfaceType* IPermissionPromise_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Permissions.IPermissionPromise", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Permissions/1.12.0/Permissions.uno
// --------------------------------------------------------------------

// internal sealed class PermissionPromise
// {
static void PermissionPromise_build(uType* type)
{
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Permissions::PlatformPermission_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PermissionPromise_type, interface0),
        ::g::Uno::Permissions::IPermissionPromise_typeof(), offsetof(PermissionPromise_type, interface1));
    type->SetFields(9,
        ::g::Uno::Permissions::PlatformPermission_typeof(), offsetof(PermissionPromise, _permission), 0);
}

PermissionPromise_type* PermissionPromise_typeof()
{
    static uSStrong<PermissionPromise_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PermissionPromise);
    options.TypeSize = sizeof(PermissionPromise_type);
    type = (PermissionPromise_type*)uClassType::New("Uno.Permissions.PermissionPromise", options);
    type->fp_build_ = PermissionPromise_build;
    type->interface1.fp_Resolve = (void(*)(uObject*))PermissionPromise__Resolve1_fn;
    type->interface1.fp_Reject = (void(*)(uObject*, ::g::Uno::Exception*))::g::Uno::Threading::Promise__Reject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public PermissionPromise(Uno.Permissions.PlatformPermission p)
void PermissionPromise__ctor_7_fn(PermissionPromise* __this, ::g::Uno::Permissions::PlatformPermission* p)
{
    __this->ctor_7(*p);
}

// public PermissionPromise New(Uno.Permissions.PlatformPermission p)
void PermissionPromise__New5_fn(::g::Uno::Permissions::PlatformPermission* p, PermissionPromise** __retval)
{
    *__retval = PermissionPromise::New5(*p);
}

// public void Resolve()
void PermissionPromise__Resolve1_fn(PermissionPromise* __this)
{
    __this->Resolve1();
}

// public PermissionPromise(Uno.Permissions.PlatformPermission p) [instance]
void PermissionPromise::ctor_7(::g::Uno::Permissions::PlatformPermission p)
{
    ctor_3();
    _permission = p;
}

// public void Resolve() [instance]
void PermissionPromise::Resolve1()
{
    ::g::Uno::Threading::Promise__Resolve_fn(this, uCRef(_permission));
}

// public PermissionPromise New(Uno.Permissions.PlatformPermission p) [static]
PermissionPromise* PermissionPromise::New5(::g::Uno::Permissions::PlatformPermission p)
{
    PermissionPromise* obj1 = (PermissionPromise*)uNew(PermissionPromise_typeof());
    obj1->ctor_7(p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Permissions/1.12.0/Permissions.uno
// --------------------------------------------------------------------

// public static extern class Permissions
// {
static void Permissions_build(uType* type)
{
}

uClassType* Permissions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Permissions.Permissions", options);
    type->fp_build_ = Permissions_build;
    return type;
}

// private static void Failed(object promise)
void Permissions__Failed_fn(uObject* promise)
{
    Permissions::Failed(promise);
}

// public static Uno.Threading.Future<Uno.Permissions.PlatformPermission> Request(Uno.Permissions.PlatformPermission x)
void Permissions__Request_fn(::g::Uno::Permissions::PlatformPermission* x, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Permissions::Request(*x);
}

// public static Uno.Threading.Future<Uno.Permissions.PlatformPermission[]> Request(Uno.Permissions.PlatformPermission[] x)
void Permissions__Request1_fn(uArray* x, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Permissions::Request1(x);
}

// private static void requestPermission(Uno.Threading.Promise<Uno.Permissions.PlatformPermission> promise, string permissionName)
void Permissions__requestPermission_fn(::g::Uno::Threading::Promise* promise, uString* permissionName)
{
    Permissions::requestPermission(promise, permissionName);
}

// private static void requestPermissions(Uno.Threading.Promise<Uno.Permissions.PlatformPermission[]> promise, string[] permissionNames)
void Permissions__requestPermissions_fn(::g::Uno::Threading::Promise* promise, uArray* permissionNames)
{
    Permissions::requestPermissions(promise, permissionNames);
}

// private static void Succeeded(object promise)
void Permissions__Succeeded_fn(uObject* promise)
{
    Permissions::Succeeded(promise);
}

// private static void Failed(object promise) [static]
void Permissions::Failed(uObject* promise)
{
    ::g::Uno::Permissions::IPermissionPromise::Reject(uInterface(uPtr((uObject*)promise), ::g::Uno::Permissions::IPermissionPromise_typeof()), ::g::Uno::Exception::New2(uString::Const("Permissions could not be requested or granted.")));
}

// public static Uno.Threading.Future<Uno.Permissions.PlatformPermission> Request(Uno.Permissions.PlatformPermission x) [static]
::g::Uno::Threading::Future1* Permissions::Request(::g::Uno::Permissions::PlatformPermission x)
{
    ::g::Uno::Permissions::PermissionPromise* futurePermission = ::g::Uno::Permissions::PermissionPromise::New5(x);
    Permissions::requestPermission(futurePermission, x.Name);
    return futurePermission;
}

// public static Uno.Threading.Future<Uno.Permissions.PlatformPermission[]> Request(Uno.Permissions.PlatformPermission[] x) [static]
::g::Uno::Threading::Future1* Permissions::Request1(uArray* x)
{
    ::g::Uno::Permissions::PermissionsPromise* futurePermission = ::g::Uno::Permissions::PermissionsPromise::New5(x);
    uArray* names = uArray::New(::g::Uno::String_typeof()->Array(), uPtr(x)->Length());

    for (int32_t i = 0; i < x->Length(); i++)
        uPtr(names)->Strong<uString*>(i) = uPtr(x)->Item< ::g::Uno::Permissions::PlatformPermission>(i).Name;

    Permissions::requestPermissions(futurePermission, names);
    return futurePermission;
}

// private static void requestPermission(Uno.Threading.Promise<Uno.Permissions.PlatformPermission> promise, string permissionName) [static]
void Permissions::requestPermission(::g::Uno::Threading::Promise* promise, uString* permissionName)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "requestPermission64", "(Lcom/uno/UnoObject;Ljava/lang/String;)V");
        ::g::Uno::Threading::Promise* _upromise=promise;
        jobject _promise = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_upromise);
        uString* _upermissionName=permissionName;
        jstring _permissionName = JniHelper::UnoToJavaString(_upermissionName);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_promise,_permissionName);
        
        if (_promise!=NULL) { U_JNIVAR->DeleteLocalRef(_promise); }
        if (_permissionName!=NULL) { U_JNIVAR->DeleteLocalRef(_permissionName); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void requestPermissions(Uno.Threading.Promise<Uno.Permissions.PlatformPermission[]> promise, string[] permissionNames) [static]
void Permissions::requestPermissions(::g::Uno::Threading::Promise* promise, uArray* permissionNames)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "requestPermissions65", "(Lcom/uno/UnoObject;Lcom/uno/StringArray;)V");
        ::g::Uno::Threading::Promise* _upromise=promise;
        jobject _promise = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_upromise);
        uArray* _upermissionNames=permissionNames;
        jobject _permissionNames = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box10(_upermissionNames);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_promise,_permissionNames);
        
        if (_promise!=NULL) { U_JNIVAR->DeleteLocalRef(_promise); }
        if (_permissionNames!=NULL) { U_JNIVAR->DeleteLocalRef(_permissionNames); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void Succeeded(object promise) [static]
void Permissions::Succeeded(uObject* promise)
{
    ::g::Uno::Permissions::IPermissionPromise::Resolve(uInterface(uPtr((uObject*)promise), ::g::Uno::Permissions::IPermissionPromise_typeof()));
}
// }

// /usr/local/share/uno/Packages/Uno.Permissions/1.12.0/Permissions.uno
// --------------------------------------------------------------------

// internal sealed class PermissionsPromise
// {
static void PermissionsPromise_build(uType* type)
{
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Permissions::PlatformPermission_typeof()->Array(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PermissionsPromise_type, interface0),
        ::g::Uno::Permissions::IPermissionPromise_typeof(), offsetof(PermissionsPromise_type, interface1));
    type->SetFields(9,
        ::g::Uno::Permissions::PlatformPermission_typeof()->Array(), offsetof(PermissionsPromise, _permissions), 0);
}

PermissionsPromise_type* PermissionsPromise_typeof()
{
    static uSStrong<PermissionsPromise_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PermissionsPromise);
    options.TypeSize = sizeof(PermissionsPromise_type);
    type = (PermissionsPromise_type*)uClassType::New("Uno.Permissions.PermissionsPromise", options);
    type->fp_build_ = PermissionsPromise_build;
    type->interface1.fp_Resolve = (void(*)(uObject*))PermissionsPromise__Resolve1_fn;
    type->interface1.fp_Reject = (void(*)(uObject*, ::g::Uno::Exception*))::g::Uno::Threading::Promise__Reject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public PermissionsPromise(Uno.Permissions.PlatformPermission[] permissions)
void PermissionsPromise__ctor_7_fn(PermissionsPromise* __this, uArray* permissions)
{
    __this->ctor_7(permissions);
}

// public PermissionsPromise New(Uno.Permissions.PlatformPermission[] permissions)
void PermissionsPromise__New5_fn(uArray* permissions, PermissionsPromise** __retval)
{
    *__retval = PermissionsPromise::New5(permissions);
}

// public void Resolve()
void PermissionsPromise__Resolve1_fn(PermissionsPromise* __this)
{
    __this->Resolve1();
}

// public PermissionsPromise(Uno.Permissions.PlatformPermission[] permissions) [instance]
void PermissionsPromise::ctor_7(uArray* permissions)
{
    ctor_3();
    _permissions = permissions;
}

// public void Resolve() [instance]
void PermissionsPromise::Resolve1()
{
    ::g::Uno::Threading::Promise__Resolve_fn(this, _permissions);
}

// public PermissionsPromise New(Uno.Permissions.PlatformPermission[] permissions) [static]
PermissionsPromise* PermissionsPromise::New5(uArray* permissions)
{
    PermissionsPromise* obj1 = (PermissionsPromise*)uNew(PermissionsPromise_typeof());
    obj1->ctor_7(permissions);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Permissions/1.12.0/Permissions.uno
// --------------------------------------------------------------------

// public struct PlatformPermission
// {
static void PlatformPermission_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(PlatformPermission, Name), 0);
}

uStructType* PlatformPermission_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 1;
    options.Alignment = alignof(PlatformPermission);
    options.ValueSize = sizeof(PlatformPermission);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Permissions.PlatformPermission", options);
    type->fp_build_ = PlatformPermission_build;
    return type;
}

// internal PlatformPermission(string name)
void PlatformPermission__ctor_1_fn(PlatformPermission* __this, uString* name)
{
    __this->ctor_1(name);
}

// internal PlatformPermission New(string name)
void PlatformPermission__New1_fn(uString* name, PlatformPermission* __retval)
{
    *__retval = PlatformPermission__New1(name);
}

// internal PlatformPermission(string name) [instance]
void PlatformPermission::ctor_1(uString* name)
{
    Name = name;
}

// internal PlatformPermission New(string name) [static]
PlatformPermission PlatformPermission__New1(uString* name)
{
    PlatformPermission obj1;
    obj1.ctor_1(name);
    return obj1;
}
// }

}}} // ::g::Uno::Permissions
