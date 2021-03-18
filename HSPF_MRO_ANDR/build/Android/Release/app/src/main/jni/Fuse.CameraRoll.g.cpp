// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.ActivityResultCallback.h>
#include <Android.ActivityUtils.h>
#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.CameraRoll.AddPicturePermissionCheckCommand.h>
#include <Fuse.CameraRoll.AndroidCameraRoll.h>
#include <Fuse.CameraRoll.CameraRoll.h>
#include <Fuse.CameraRoll.CheckPermissionsCommand.h>
#include <Fuse.CameraRoll.requestAndroidPermissions.h>
#include <Fuse.CameraRoll.SelectPictureClosure.h>
#include <Fuse.CameraRoll.SelectPicturePermissionCheckCommand.h>
#include <Fuse.ImageTools.BoolPromiseCallback.h>
#include <Fuse.ImageTools.Image.h>
#include <Fuse.ImageTools.PromiseCallback-1.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Permissions.Permissions.Android.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.PlatformPermission.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[8];
static uType* TYPES[17];

namespace g{
namespace Fuse{
namespace CameraRoll{

// /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/Android/AndroidCameraRoll.uno
// ----------------------------------------------------------------------------------

// internal sealed extern class AddPicturePermissionCheckCommand
// {
static void AddPicturePermissionCheckCommand_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Required permission was not granted.");
    ::TYPES[0] = ::g::Uno::Permissions::PlatformPermission_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[0/*Uno.Permissions.PlatformPermission[]*/], NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::ImageTools::BoolPromiseCallback_typeof(), offsetof(AddPicturePermissionCheckCommand, _callback), 0,
        ::g::Uno::String_typeof(), offsetof(AddPicturePermissionCheckCommand, _path), 0);
}

uType* AddPicturePermissionCheckCommand_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AddPicturePermissionCheckCommand);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.CameraRoll.AddPicturePermissionCheckCommand", options);
    type->fp_build_ = AddPicturePermissionCheckCommand_build;
    return type;
}

// public AddPicturePermissionCheckCommand(Uno.Threading.Promise<bool> p, string path)
void AddPicturePermissionCheckCommand__ctor__fn(AddPicturePermissionCheckCommand* __this, ::g::Uno::Threading::Promise* p, uString* path)
{
    __this->ctor_(p, path);
}

// internal static void AddToCameraRollInternal(string path, Uno.Action success, Uno.Action<string> reject)
void AddPicturePermissionCheckCommand__AddToCameraRollInternal_fn(uString* path, uDelegate* success, uDelegate* reject)
{
    AddPicturePermissionCheckCommand::AddToCameraRollInternal(path, success, reject);
}

// public void Execute()
void AddPicturePermissionCheckCommand__Execute_fn(AddPicturePermissionCheckCommand* __this)
{
    __this->Execute();
}

// public AddPicturePermissionCheckCommand New(Uno.Threading.Promise<bool> p, string path)
void AddPicturePermissionCheckCommand__New1_fn(::g::Uno::Threading::Promise* p, uString* path, AddPicturePermissionCheckCommand** __retval)
{
    *__retval = AddPicturePermissionCheckCommand::New1(p, path);
}

// private void OnPermissions(Uno.Permissions.PlatformPermission[] grantedPermissions)
void AddPicturePermissionCheckCommand__OnPermissions_fn(AddPicturePermissionCheckCommand* __this, uArray* grantedPermissions)
{
    __this->OnPermissions(grantedPermissions);
}

// private void OnRejected(Uno.Exception e)
void AddPicturePermissionCheckCommand__OnRejected_fn(AddPicturePermissionCheckCommand* __this, ::g::Uno::Exception* e)
{
    __this->OnRejected(e);
}

// public AddPicturePermissionCheckCommand(Uno.Threading.Promise<bool> p, string path) [instance]
void AddPicturePermissionCheckCommand::ctor_(::g::Uno::Threading::Promise* p, uString* path)
{
    _path = path;
    _callback = ::g::Fuse::ImageTools::BoolPromiseCallback::New1(p);
}

// public void Execute() [instance]
void AddPicturePermissionCheckCommand::Execute()
{
    uArray* array2;
    uPtr(::g::Uno::Permissions::Permissions::Request1((array2 = uArray::New(::TYPES[0/*Uno.Permissions.PlatformPermission[]*/], 2), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(0) = ::g::Uno::Permissions::Permissions__Android::WRITE_EXTERNAL_STORAGE(), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(1) = ::g::Uno::Permissions::Permissions__Android::READ_EXTERNAL_STORAGE(), array2)))->Then1(uDelegate::New(::TYPES[1/*Uno.Action<Uno.Permissions.PlatformPermission[]>*/], (void*)AddPicturePermissionCheckCommand__OnPermissions_fn, this), uDelegate::New(::TYPES[2/*Uno.Action<Uno.Exception>*/], (void*)AddPicturePermissionCheckCommand__OnRejected_fn, this));
}

// private void OnPermissions(Uno.Permissions.PlatformPermission[] grantedPermissions) [instance]
void AddPicturePermissionCheckCommand::OnPermissions(uArray* grantedPermissions)
{
    if (uPtr(grantedPermissions)->Length() == 2)
        AddPicturePermissionCheckCommand::AddToCameraRollInternal(_path, uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)::g::Fuse::ImageTools::BoolPromiseCallback__Resolve_fn, uPtr(_callback)), uDelegate::New(::TYPES[4/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::BoolPromiseCallback__Reject_fn, uPtr(_callback)));
    else
        uPtr(_callback)->Reject(::STRINGS[0/*"Required pe...*/]);
}

// private void OnRejected(Uno.Exception e) [instance]
void AddPicturePermissionCheckCommand::OnRejected(::g::Uno::Exception* e)
{
    uPtr(_callback)->Reject(uPtr(e)->Message());
}

// internal static void AddToCameraRollInternal(string path, Uno.Action success, Uno.Action<string> reject) [static]
void AddPicturePermissionCheckCommand::AddToCameraRollInternal(uString* path, uDelegate* success, uDelegate* reject)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddToCameraRollInternal395", "(Ljava/lang/String;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action_String;)V");
        uString* _upath=path;
        jstring _path = JniHelper::UnoToJavaString(_upath);
        uDelegate* _usuccess=success;
        jobject _success = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_usuccess, "com.foreign.Uno.Action");
        uDelegate* _ureject=reject;
        jobject _reject = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ureject, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_path,_success,_reject);
        
        if (_path!=NULL) { U_JNIVAR->DeleteLocalRef(_path); }
        if (_success!=NULL) { U_JNIVAR->DeleteLocalRef(_success); }
        if (_reject!=NULL) { U_JNIVAR->DeleteLocalRef(_reject); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public AddPicturePermissionCheckCommand New(Uno.Threading.Promise<bool> p, string path) [static]
AddPicturePermissionCheckCommand* AddPicturePermissionCheckCommand::New1(::g::Uno::Threading::Promise* p, uString* path)
{
    AddPicturePermissionCheckCommand* obj1 = (AddPicturePermissionCheckCommand*)uNew(AddPicturePermissionCheckCommand_typeof());
    obj1->ctor_(p, path);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/Android/AndroidCameraRoll.uno
// ----------------------------------------------------------------------------------

// internal static extern class AndroidCameraRoll
// {
static void AndroidCameraRoll_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
}

uClassType* AndroidCameraRoll_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.CameraRoll.AndroidCameraRoll", options);
    type->fp_build_ = AndroidCameraRoll_build;
    return type;
}

// internal static Uno.Threading.Future<bool> AddToCameraRoll(Fuse.ImageTools.Image photo)
void AndroidCameraRoll__AddToCameraRoll_fn(::g::Fuse::ImageTools::Image* photo, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = AndroidCameraRoll::AddToCameraRoll(photo);
}

// internal static void CheckPermissions(Uno.Threading.Promise<string> p)
void AndroidCameraRoll__CheckPermissions_fn(::g::Uno::Threading::Promise* p)
{
    AndroidCameraRoll::CheckPermissions(p);
}

// internal static void RequestPermissions(Uno.Threading.Promise<string> p)
void AndroidCameraRoll__RequestPermissions_fn(::g::Uno::Threading::Promise* p)
{
    AndroidCameraRoll::RequestPermissions(p);
}

// internal static void SelectPicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p)
void AndroidCameraRoll__SelectPicture_fn(::g::Uno::Threading::Promise* p)
{
    AndroidCameraRoll::SelectPicture(p);
}

// internal static Uno.Threading.Future<bool> AddToCameraRoll(Fuse.ImageTools.Image photo) [static]
::g::Uno::Threading::Future1* AndroidCameraRoll::AddToCameraRoll(::g::Fuse::ImageTools::Image* photo)
{
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[5/*Uno.Threading.Promise<bool>*/]);
    ::g::Fuse::CameraRoll::AddPicturePermissionCheckCommand::New1(p, uPtr(photo)->Path())->Execute();
    return p;
}

// internal static void CheckPermissions(Uno.Threading.Promise<string> p) [static]
void AndroidCameraRoll::CheckPermissions(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::CameraRoll::CheckPermissionsCommand::New1(p);
}

// internal static void RequestPermissions(Uno.Threading.Promise<string> p) [static]
void AndroidCameraRoll::RequestPermissions(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::CameraRoll::requestAndroidPermissions::New1(p)->Execute();
}

// internal static void SelectPicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [static]
void AndroidCameraRoll::SelectPicture(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::CameraRoll::SelectPicturePermissionCheckCommand::New1(p)->Execute();
}
// }

// /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/CameraRoll.uno
// -------------------------------------------------------------------

// public sealed class CameraRoll
// {
static void CameraRoll_build(uType* type)
{
    ::STRINGS[1] = uString::Const("FuseJS/CameraRoll");
    ::STRINGS[2] = uString::Const("getImage");
    ::STRINGS[3] = uString::Const("publishImage");
    ::STRINGS[4] = uString::Const("checkPermissions");
    ::STRINGS[5] = uString::Const("requestPermissions");
    ::TYPES[6] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&CameraRoll::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* CameraRoll_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CameraRoll);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.CameraRoll.CameraRoll", options);
    type->fp_build_ = CameraRoll_build;
    type->fp_ctor_ = (void*)CameraRoll__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public CameraRoll()
void CameraRoll__ctor_2_fn(CameraRoll* __this)
{
    __this->ctor_2();
}

// internal static Uno.Threading.Future<bool> AddToCameraRoll(Fuse.ImageTools.Image photo)
void CameraRoll__AddToCameraRoll_fn(::g::Fuse::ImageTools::Image* photo, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = CameraRoll::AddToCameraRoll(photo);
}

// private static Uno.Threading.Future<bool> AddToCameraRollInterface(object[] args)
void CameraRoll__AddToCameraRollInterface_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = CameraRoll::AddToCameraRollInterface(args);
}

// private static Uno.Threading.Future<string> CheckUserPermissions(object[] args)
void CameraRoll__CheckUserPermissions_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = CameraRoll::CheckUserPermissions(args);
}

// public CameraRoll New()
void CameraRoll__New2_fn(CameraRoll** __retval)
{
    *__retval = CameraRoll::New2();
}

// private static Uno.Threading.Future<string> RequestUserPermissions(object[] args)
void CameraRoll__RequestUserPermissions_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = CameraRoll::RequestUserPermissions(args);
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> SelectPicture()
void CameraRoll__SelectPicture_fn(::g::Uno::Threading::Future1** __retval)
{
    *__retval = CameraRoll::SelectPicture();
}

// private static Uno.Threading.Future<Fuse.ImageTools.Image> SelectPictureInterface(object[] args)
void CameraRoll__SelectPictureInterface_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = CameraRoll::SelectPictureInterface(args);
}

uSStrong<CameraRoll*> CameraRoll::_instance_;

// public CameraRoll() [instance]
void CameraRoll::ctor_2()
{
    ctor_1();

    if (CameraRoll::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(CameraRoll::_instance_ = this, ::STRINGS[1/*"FuseJS/Came...*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[6/*Fuse.Scripting.NativePromise<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], ::STRINGS[2/*"getImage"*/], uDelegate::New(::TYPES[7/*Fuse.Scripting.FutureFactory<Fuse.ImageTools.Image>*/], (void*)CameraRoll__SelectPictureInterface_fn), uDelegate::New(::TYPES[8/*Fuse.Scripting.ResultConverter<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], (void*)::g::Fuse::ImageTools::Image__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<bool, Fuse.Scripting.Object>*/], ::STRINGS[3/*"publishImage"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.FutureFactory<bool>*/], (void*)CameraRoll__AddToCameraRollInterface_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[11/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[4/*"checkPermis...*/], uDelegate::New(::TYPES[12/*Fuse.Scripting.FutureFactory<string>*/], (void*)CameraRoll__CheckUserPermissions_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[11/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[5/*"requestPerm...*/], uDelegate::New(::TYPES[12/*Fuse.Scripting.FutureFactory<string>*/], (void*)CameraRoll__RequestUserPermissions_fn), NULL));
}

// internal static Uno.Threading.Future<bool> AddToCameraRoll(Fuse.ImageTools.Image photo) [static]
::g::Uno::Threading::Future1* CameraRoll::AddToCameraRoll(::g::Fuse::ImageTools::Image* photo)
{
    return ::g::Fuse::CameraRoll::AndroidCameraRoll::AddToCameraRoll(photo);
}

// private static Uno.Threading.Future<bool> AddToCameraRollInterface(object[] args) [static]
::g::Uno::Threading::Future1* CameraRoll::AddToCameraRollInterface(uArray* args)
{
    ::g::Fuse::ImageTools::Image* Image = ::g::Fuse::ImageTools::Image::FromObject1(uPtr(args)->Strong<uObject*>(0));
    return CameraRoll::AddToCameraRoll(Image);
}

// private static Uno.Threading.Future<string> CheckUserPermissions(object[] args) [static]
::g::Uno::Threading::Future1* CameraRoll::CheckUserPermissions(uArray* args)
{
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[13/*Uno.Threading.Promise<string>*/]);
    ::g::Fuse::CameraRoll::AndroidCameraRoll::CheckPermissions(p);
    return p;
}

// public CameraRoll New() [static]
CameraRoll* CameraRoll::New2()
{
    CameraRoll* obj1 = (CameraRoll*)uNew(CameraRoll_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Uno.Threading.Future<string> RequestUserPermissions(object[] args) [static]
::g::Uno::Threading::Future1* CameraRoll::RequestUserPermissions(uArray* args)
{
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[13/*Uno.Threading.Promise<string>*/]);
    ::g::Fuse::CameraRoll::AndroidCameraRoll::RequestPermissions(p);
    return p;
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> SelectPicture() [static]
::g::Uno::Threading::Future1* CameraRoll::SelectPicture()
{
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[14/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]);
    ::g::Fuse::CameraRoll::AndroidCameraRoll::SelectPicture(p);
    return p;
}

// private static Uno.Threading.Future<Fuse.ImageTools.Image> SelectPictureInterface(object[] args) [static]
::g::Uno::Threading::Future1* CameraRoll::SelectPictureInterface(uArray* args)
{
    return CameraRoll::SelectPicture();
}
// }

// /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/Android/AndroidCameraRoll.uno
// ----------------------------------------------------------------------------------

// internal sealed extern class CheckPermissionsCommand
// {
static void CheckPermissionsCommand_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::ImageTools::PromiseCallback_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
}

uType* CheckPermissionsCommand_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(CheckPermissionsCommand);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.CameraRoll.CheckPermissionsCommand", options);
    type->fp_build_ = CheckPermissionsCommand_build;
    return type;
}

// public CheckPermissionsCommand(Uno.Threading.Promise<string> p)
void CheckPermissionsCommand__ctor__fn(CheckPermissionsCommand* __this, ::g::Uno::Threading::Promise* p)
{
    __this->ctor_(p);
}

// internal static void CheckPermissionsInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail)
void CheckPermissionsCommand__CheckPermissionsInternal_fn(uDelegate* onComplete, uDelegate* onFail)
{
    CheckPermissionsCommand::CheckPermissionsInternal(onComplete, onFail);
}

// public CheckPermissionsCommand New(Uno.Threading.Promise<string> p)
void CheckPermissionsCommand__New1_fn(::g::Uno::Threading::Promise* p, CheckPermissionsCommand** __retval)
{
    *__retval = CheckPermissionsCommand::New1(p);
}

// public CheckPermissionsCommand(Uno.Threading.Promise<string> p) [instance]
void CheckPermissionsCommand::ctor_(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::ImageTools::PromiseCallback* cb = (::g::Fuse::ImageTools::PromiseCallback*)::g::Fuse::ImageTools::PromiseCallback::New1(::TYPES[15/*Fuse.ImageTools.PromiseCallback<string>*/], p);
    CheckPermissionsCommand::CheckPermissionsInternal(uDelegate::New(::TYPES[4/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Resolve_fn, cb), uDelegate::New(::TYPES[4/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Reject_fn, cb));
}

// internal static void CheckPermissionsInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail) [static]
void CheckPermissionsCommand::CheckPermissionsInternal(uDelegate* onComplete, uDelegate* onFail)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CheckPermissionsInternal396", "(Lcom/foreign/Uno/Action_String;Lcom/foreign/Uno/Action_String;)V");
        uDelegate* _uonComplete=onComplete;
        jobject _onComplete = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonComplete, "com.foreign.Uno.Action_String");
        uDelegate* _uonFail=onFail;
        jobject _onFail = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonFail, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_onComplete,_onFail);
        
        if (_onComplete!=NULL) { U_JNIVAR->DeleteLocalRef(_onComplete); }
        if (_onFail!=NULL) { U_JNIVAR->DeleteLocalRef(_onFail); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public CheckPermissionsCommand New(Uno.Threading.Promise<string> p) [static]
CheckPermissionsCommand* CheckPermissionsCommand::New1(::g::Uno::Threading::Promise* p)
{
    CheckPermissionsCommand* obj1 = (CheckPermissionsCommand*)uNew(CheckPermissionsCommand_typeof());
    obj1->ctor_(p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/Android/AndroidCameraRoll.uno
// ----------------------------------------------------------------------------------

// internal sealed extern class requestAndroidPermissions
// {
static void requestAndroidPermissions_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Success");
    ::STRINGS[0] = uString::Const("Required permission was not granted.");
    ::TYPES[15] = ::g::Fuse::ImageTools::PromiseCallback_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::Permissions::PlatformPermission_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[0/*Uno.Permissions.PlatformPermission[]*/], NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[15/*Fuse.ImageTools.PromiseCallback<string>*/], offsetof(requestAndroidPermissions, _callback), 0);
}

uType* requestAndroidPermissions_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(requestAndroidPermissions);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.CameraRoll.requestAndroidPermissions", options);
    type->fp_build_ = requestAndroidPermissions_build;
    return type;
}

// public requestAndroidPermissions(Uno.Threading.Promise<string> p)
void requestAndroidPermissions__ctor__fn(requestAndroidPermissions* __this, ::g::Uno::Threading::Promise* p)
{
    __this->ctor_(p);
}

// public void Execute()
void requestAndroidPermissions__Execute_fn(requestAndroidPermissions* __this)
{
    __this->Execute();
}

// public requestAndroidPermissions New(Uno.Threading.Promise<string> p)
void requestAndroidPermissions__New1_fn(::g::Uno::Threading::Promise* p, requestAndroidPermissions** __retval)
{
    *__retval = requestAndroidPermissions::New1(p);
}

// private void OnPermissions(Uno.Permissions.PlatformPermission[] grantedPermissions)
void requestAndroidPermissions__OnPermissions_fn(requestAndroidPermissions* __this, uArray* grantedPermissions)
{
    __this->OnPermissions(grantedPermissions);
}

// private void OnRejected(Uno.Exception e)
void requestAndroidPermissions__OnRejected_fn(requestAndroidPermissions* __this, ::g::Uno::Exception* e)
{
    __this->OnRejected(e);
}

// public requestAndroidPermissions(Uno.Threading.Promise<string> p) [instance]
void requestAndroidPermissions::ctor_(::g::Uno::Threading::Promise* p)
{
    _callback = ((::g::Fuse::ImageTools::PromiseCallback*)::g::Fuse::ImageTools::PromiseCallback::New1(::TYPES[15/*Fuse.ImageTools.PromiseCallback<string>*/], p));
}

// public void Execute() [instance]
void requestAndroidPermissions::Execute()
{
    uArray* array2;
    uPtr(::g::Uno::Permissions::Permissions::Request1((array2 = uArray::New(::TYPES[0/*Uno.Permissions.PlatformPermission[]*/], 2), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(0) = ::g::Uno::Permissions::Permissions__Android::WRITE_EXTERNAL_STORAGE(), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(1) = ::g::Uno::Permissions::Permissions__Android::READ_EXTERNAL_STORAGE(), array2)))->Then1(uDelegate::New(::TYPES[1/*Uno.Action<Uno.Permissions.PlatformPermission[]>*/], (void*)requestAndroidPermissions__OnPermissions_fn, this), uDelegate::New(::TYPES[2/*Uno.Action<Uno.Exception>*/], (void*)requestAndroidPermissions__OnRejected_fn, this));
}

// private void OnPermissions(Uno.Permissions.PlatformPermission[] grantedPermissions) [instance]
void requestAndroidPermissions::OnPermissions(uArray* grantedPermissions)
{
    if (uPtr(grantedPermissions)->Length() == 2)
        ::g::Fuse::ImageTools::PromiseCallback__Resolve_fn(uPtr(_callback), ::STRINGS[6/*"Success"*/]);
    else
        uPtr(_callback)->Reject(::STRINGS[0/*"Required pe...*/]);
}

// private void OnRejected(Uno.Exception e) [instance]
void requestAndroidPermissions::OnRejected(::g::Uno::Exception* e)
{
    uPtr(_callback)->Reject(uPtr(e)->Message());
}

// public requestAndroidPermissions New(Uno.Threading.Promise<string> p) [static]
requestAndroidPermissions* requestAndroidPermissions::New1(::g::Uno::Threading::Promise* p)
{
    requestAndroidPermissions* obj1 = (requestAndroidPermissions*)uNew(requestAndroidPermissions_typeof());
    obj1->ctor_(p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/Android/AndroidCameraRoll.uno
// ----------------------------------------------------------------------------------

// internal sealed extern class SelectPictureClosure
// {
static void SelectPictureClosure_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL), offsetof(SelectPictureClosure, _p), 0);
}

uType* SelectPictureClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(SelectPictureClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.CameraRoll.SelectPictureClosure", options);
    type->fp_build_ = SelectPictureClosure_build;
    return type;
}

// public SelectPictureClosure(Uno.Threading.Promise<Fuse.ImageTools.Image> p)
void SelectPictureClosure__ctor__fn(SelectPictureClosure* __this, ::g::Uno::Threading::Promise* p)
{
    __this->ctor_(p);
}

// private void HandleIntent(int resultCode, Java.Object intent, Uno.Action<string> onComplete, Uno.Action<string> onFail)
void SelectPictureClosure__HandleIntent_fn(SelectPictureClosure* __this, int32_t* resultCode, ::g::Java::Object* intent, uDelegate* onComplete, uDelegate* onFail)
{
    __this->HandleIntent(*resultCode, intent, onComplete, onFail);
}

// public SelectPictureClosure New(Uno.Threading.Promise<Fuse.ImageTools.Image> p)
void SelectPictureClosure__New1_fn(::g::Uno::Threading::Promise* p, SelectPictureClosure** __retval)
{
    *__retval = SelectPictureClosure::New1(p);
}

// public void OnActivityResult(int resultCode, Java.Object intent, object info)
void SelectPictureClosure__OnActivityResult_fn(SelectPictureClosure* __this, int32_t* resultCode, ::g::Java::Object* intent, uObject* info)
{
    __this->OnActivityResult(*resultCode, intent, info);
}

// public void OnComplete(string path)
void SelectPictureClosure__OnComplete_fn(SelectPictureClosure* __this, uString* path)
{
    __this->OnComplete(path);
}

// public void OnFail(string reason)
void SelectPictureClosure__OnFail_fn(SelectPictureClosure* __this, uString* reason)
{
    __this->OnFail(reason);
}

// public SelectPictureClosure(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [instance]
void SelectPictureClosure::ctor_(::g::Uno::Threading::Promise* p)
{
    _p = p;
}

// private void HandleIntent(int resultCode, Java.Object intent, Uno.Action<string> onComplete, Uno.Action<string> onFail) [instance]
void SelectPictureClosure::HandleIntent(int32_t resultCode, ::g::Java::Object* intent, uDelegate* onComplete, uDelegate* onFail)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HandleIntent397", "(Lcom/uno/UnoObject;ILjava/lang/Object;Lcom/foreign/Uno/Action_String;Lcom/foreign/Uno/Action_String;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        int32_t _uresultCode=resultCode;
        jint _resultCode = (jint)_uresultCode;
        ::g::Java::Object* _uintent=intent;
        jobject _intent = (_uintent==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uintent, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _uonComplete=onComplete;
        jobject _onComplete = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonComplete, "com.foreign.Uno.Action_String");
        uDelegate* _uonFail=onFail;
        jobject _onFail = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonFail, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_resultCode,_intent,_onComplete,_onFail);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        
        if (_intent!=NULL) { U_JNIVAR->DeleteLocalRef(_intent); }
        if (_onComplete!=NULL) { U_JNIVAR->DeleteLocalRef(_onComplete); }
        if (_onFail!=NULL) { U_JNIVAR->DeleteLocalRef(_onFail); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void OnActivityResult(int resultCode, Java.Object intent, object info) [instance]
void SelectPictureClosure::OnActivityResult(int32_t resultCode, ::g::Java::Object* intent, uObject* info)
{
    HandleIntent(resultCode, intent, uDelegate::New(::TYPES[4/*Uno.Action<string>*/], (void*)SelectPictureClosure__OnComplete_fn, this), uDelegate::New(::TYPES[4/*Uno.Action<string>*/], (void*)SelectPictureClosure__OnFail_fn, this));
}

// public void OnComplete(string path) [instance]
void SelectPictureClosure::OnComplete(uString* path)
{
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_p), ::g::Fuse::ImageTools::Image::New2(path));
}

// public void OnFail(string reason) [instance]
void SelectPictureClosure::OnFail(uString* reason)
{
    uPtr(_p)->Reject(::g::Uno::Exception::New2(reason));
}

// public SelectPictureClosure New(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [static]
SelectPictureClosure* SelectPictureClosure::New1(::g::Uno::Threading::Promise* p)
{
    SelectPictureClosure* obj1 = (SelectPictureClosure*)uNew(SelectPictureClosure_typeof());
    obj1->ctor_(p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/Android/AndroidCameraRoll.uno
// ----------------------------------------------------------------------------------

// internal sealed extern class SelectPicturePermissionCheckCommand
// {
static void SelectPicturePermissionCheckCommand_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Couldn't create valid intent");
    ::STRINGS[0] = uString::Const("Required permission was not granted.");
    ::TYPES[0] = ::g::Uno::Permissions::PlatformPermission_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[0/*Uno.Permissions.PlatformPermission[]*/], NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[16] = ::g::Android::ActivityResultCallback_typeof();
    type->SetDependencies(
        ::g::Android::ActivityUtils_typeof());
    type->SetFields(0,
        ::g::Fuse::CameraRoll::SelectPictureClosure_typeof(), offsetof(SelectPicturePermissionCheckCommand, _closure), 0);
}

uType* SelectPicturePermissionCheckCommand_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SelectPicturePermissionCheckCommand);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.CameraRoll.SelectPicturePermissionCheckCommand", options);
    type->fp_build_ = SelectPicturePermissionCheckCommand_build;
    return type;
}

// public SelectPicturePermissionCheckCommand(Uno.Threading.Promise<Fuse.ImageTools.Image> p)
void SelectPicturePermissionCheckCommand__ctor__fn(SelectPicturePermissionCheckCommand* __this, ::g::Uno::Threading::Promise* p)
{
    __this->ctor_(p);
}

// private static Java.Object CreateIntent()
void SelectPicturePermissionCheckCommand__CreateIntent_fn(::g::Java::Object** __retval)
{
    *__retval = SelectPicturePermissionCheckCommand::CreateIntent();
}

// public void Execute()
void SelectPicturePermissionCheckCommand__Execute_fn(SelectPicturePermissionCheckCommand* __this)
{
    __this->Execute();
}

// public SelectPicturePermissionCheckCommand New(Uno.Threading.Promise<Fuse.ImageTools.Image> p)
void SelectPicturePermissionCheckCommand__New1_fn(::g::Uno::Threading::Promise* p, SelectPicturePermissionCheckCommand** __retval)
{
    *__retval = SelectPicturePermissionCheckCommand::New1(p);
}

// private void OnPermissions(Uno.Permissions.PlatformPermission[] grantedPermissions)
void SelectPicturePermissionCheckCommand__OnPermissions_fn(SelectPicturePermissionCheckCommand* __this, uArray* grantedPermissions)
{
    __this->OnPermissions(grantedPermissions);
}

// private void OnRejected(Uno.Exception e)
void SelectPicturePermissionCheckCommand__OnRejected_fn(SelectPicturePermissionCheckCommand* __this, ::g::Uno::Exception* e)
{
    __this->OnRejected(e);
}

// public SelectPicturePermissionCheckCommand(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [instance]
void SelectPicturePermissionCheckCommand::ctor_(::g::Uno::Threading::Promise* p)
{
    _closure = ::g::Fuse::CameraRoll::SelectPictureClosure::New1(p);
}

// public void Execute() [instance]
void SelectPicturePermissionCheckCommand::Execute()
{
    uArray* array2;
    uPtr(::g::Uno::Permissions::Permissions::Request1((array2 = uArray::New(::TYPES[0/*Uno.Permissions.PlatformPermission[]*/], 2), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(0) = ::g::Uno::Permissions::Permissions__Android::WRITE_EXTERNAL_STORAGE(), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(1) = ::g::Uno::Permissions::Permissions__Android::READ_EXTERNAL_STORAGE(), array2)))->Then1(uDelegate::New(::TYPES[1/*Uno.Action<Uno.Permissions.PlatformPermission[]>*/], (void*)SelectPicturePermissionCheckCommand__OnPermissions_fn, this), uDelegate::New(::TYPES[2/*Uno.Action<Uno.Exception>*/], (void*)SelectPicturePermissionCheckCommand__OnRejected_fn, this));
}

// private void OnPermissions(Uno.Permissions.PlatformPermission[] grantedPermissions) [instance]
void SelectPicturePermissionCheckCommand::OnPermissions(uArray* grantedPermissions)
{
    if (uPtr(grantedPermissions)->Length() == 2)
    {
        ::g::Java::Object* intent = SelectPicturePermissionCheckCommand::CreateIntent();

        if (intent == NULL)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[7/*"Couldn't cr...*/]));

        ::g::Android::ActivityUtils::StartActivity1(intent, uDelegate::New(::TYPES[16/*Android.ActivityResultCallback*/], (void*)::g::Fuse::CameraRoll::SelectPictureClosure__OnActivityResult_fn, uPtr(_closure)));
    }
    else
        uPtr(_closure)->OnFail(::STRINGS[0/*"Required pe...*/]);
}

// private void OnRejected(Uno.Exception e) [instance]
void SelectPicturePermissionCheckCommand::OnRejected(::g::Uno::Exception* e)
{
    uPtr(_closure)->OnFail(uPtr(e)->Message());
}

// private static Java.Object CreateIntent() [static]
::g::Java::Object* SelectPicturePermissionCheckCommand::CreateIntent()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateIntent398", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public SelectPicturePermissionCheckCommand New(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [static]
SelectPicturePermissionCheckCommand* SelectPicturePermissionCheckCommand::New1(::g::Uno::Threading::Promise* p)
{
    SelectPicturePermissionCheckCommand* obj1 = (SelectPicturePermissionCheckCommand*)uNew(SelectPicturePermissionCheckCommand_typeof());
    obj1->ctor_(p);
    return obj1;
}
// }

}}} // ::g::Fuse::CameraRoll
