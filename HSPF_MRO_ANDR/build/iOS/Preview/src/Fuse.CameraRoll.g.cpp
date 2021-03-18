// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.CameraRoll.CameraRoll.h>
#include <Fuse.CameraRoll.iOSCameraRoll.h>
#include <Fuse.ImageTools.Image.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[5];
static uType* TYPES[9];

namespace g{
namespace Fuse{
namespace CameraRoll{

// /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/CameraRoll.uno
// -------------------------------------------------------------------

// public sealed class CameraRoll
// {
static void CameraRoll_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/CameraRoll");
    ::STRINGS[1] = uString::Const("getImage");
    ::STRINGS[2] = uString::Const("publishImage");
    ::STRINGS[3] = uString::Const("checkPermissions");
    ::STRINGS[4] = uString::Const("requestPermissions");
    ::TYPES[0] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&CameraRoll::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CameraRoll__New2_fn, 0, true, type, 0));
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
    uStackFrame __("Fuse.CameraRoll.CameraRoll", ".ctor()");
    ctor_1();

    if (CameraRoll::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(CameraRoll::_instance_ = this, ::STRINGS[0/*"FuseJS/Came...*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[0/*Fuse.Scripting.NativePromise<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], ::STRINGS[1/*"getImage"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.FutureFactory<Fuse.ImageTools.Image>*/], (void*)CameraRoll__SelectPictureInterface_fn), uDelegate::New(::TYPES[2/*Fuse.Scripting.ResultConverter<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], (void*)::g::Fuse::ImageTools::Image__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[3/*Fuse.Scripting.NativePromise<bool, Fuse.Scripting.Object>*/], ::STRINGS[2/*"publishImage"*/], uDelegate::New(::TYPES[4/*Fuse.Scripting.FutureFactory<bool>*/], (void*)CameraRoll__AddToCameraRollInterface_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[5/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[3/*"checkPermis...*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.FutureFactory<string>*/], (void*)CameraRoll__CheckUserPermissions_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[5/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[4/*"requestPerm...*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.FutureFactory<string>*/], (void*)CameraRoll__RequestUserPermissions_fn), NULL));
}

// internal static Uno.Threading.Future<bool> AddToCameraRoll(Fuse.ImageTools.Image photo) [static]
::g::Uno::Threading::Future1* CameraRoll::AddToCameraRoll(::g::Fuse::ImageTools::Image* photo)
{
    uStackFrame __("Fuse.CameraRoll.CameraRoll", "AddToCameraRoll(Fuse.ImageTools.Image)");
    return ::g::Fuse::CameraRoll::iOSCameraRoll::AddToCameraRoll(photo);
}

// private static Uno.Threading.Future<bool> AddToCameraRollInterface(object[] args) [static]
::g::Uno::Threading::Future1* CameraRoll::AddToCameraRollInterface(uArray* args)
{
    uStackFrame __("Fuse.CameraRoll.CameraRoll", "AddToCameraRollInterface(object[])");
    ::g::Fuse::ImageTools::Image* Image = ::g::Fuse::ImageTools::Image::FromObject1(uPtr(args)->Strong<uObject*>(0));
    return CameraRoll::AddToCameraRoll(Image);
}

// private static Uno.Threading.Future<string> CheckUserPermissions(object[] args) [static]
::g::Uno::Threading::Future1* CameraRoll::CheckUserPermissions(uArray* args)
{
    uStackFrame __("Fuse.CameraRoll.CameraRoll", "CheckUserPermissions(object[])");
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[7/*Uno.Threading.Promise<string>*/]);
    ::g::Fuse::CameraRoll::iOSCameraRoll::CheckPermissions(p);
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
    uStackFrame __("Fuse.CameraRoll.CameraRoll", "RequestUserPermissions(object[])");
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[7/*Uno.Threading.Promise<string>*/]);
    ::g::Fuse::CameraRoll::iOSCameraRoll::RequestPermissions(p);
    return p;
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> SelectPicture() [static]
::g::Uno::Threading::Future1* CameraRoll::SelectPicture()
{
    uStackFrame __("Fuse.CameraRoll.CameraRoll", "SelectPicture()");
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[8/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]);
    ::g::Fuse::CameraRoll::iOSCameraRoll::SelectPicture(p);
    return p;
}

// private static Uno.Threading.Future<Fuse.ImageTools.Image> SelectPictureInterface(object[] args) [static]
::g::Uno::Threading::Future1* CameraRoll::SelectPictureInterface(uArray* args)
{
    uStackFrame __("Fuse.CameraRoll.CameraRoll", "SelectPictureInterface(object[])");
    return CameraRoll::SelectPicture();
}
// }

}}} // ::g::Fuse::CameraRoll
