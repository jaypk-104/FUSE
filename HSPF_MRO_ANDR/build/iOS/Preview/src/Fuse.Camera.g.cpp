// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Camera.Camera.h>
#include <Fuse.Camera.iOSCamera.h>
#include <Fuse.Camera.ResizeImageCallback.h>
#include <Fuse.ImageTools.Image.h>
#include <Fuse.ImageTools.ImageTools.h>
#include <Fuse.ImageTools.ResizeMode.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.JSObjectUtils.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[5];
static uType* TYPES[10];

namespace g{
namespace Fuse{
namespace Camera{

// /usr/local/share/uno/Packages/Fuse.Camera/1.12.0/Camera.uno
// -----------------------------------------------------------

// public sealed class Camera
// {
static void Camera_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Camera");
    ::STRINGS[1] = uString::Const("takePicture");
    ::STRINGS[2] = uString::Const("checkPermissions");
    ::STRINGS[3] = uString::Const("requestPermissions");
    ::STRINGS[4] = uString::Const("Negative image size values are not supported");
    ::TYPES[0] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(3/*ValueOrDefault<int>*/, ::g::Uno::Int_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&Camera::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Camera__New2_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* Camera_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Camera);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Camera.Camera", options);
    type->fp_build_ = Camera_build;
    type->fp_ctor_ = (void*)Camera__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Camera()
void Camera__ctor_2_fn(Camera* __this)
{
    __this->ctor_2();
}

// private static Uno.Threading.Future<string> CheckUserPermissions(object[] args)
void Camera__CheckUserPermissions_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::CheckUserPermissions(args);
}

// public Camera New()
void Camera__New2_fn(Camera** __retval)
{
    *__retval = Camera::New2();
}

// private static Uno.Threading.Future<string> RequestUserPermissions(object[] args)
void Camera__RequestUserPermissions_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::RequestUserPermissions(args);
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> TakePicture()
void Camera__TakePicture_fn(::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePicture();
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> TakePicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p)
void Camera__TakePicture1_fn(::g::Uno::Threading::Promise* p, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePicture1(p);
}

// private static Uno.Threading.Future<Fuse.ImageTools.Image> TakePictureInterface(object[] args)
void Camera__TakePictureInterface_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePictureInterface(args);
}

uSStrong<Camera*> Camera::_instance_;

// public Camera() [instance]
void Camera::ctor_2()
{
    uStackFrame __("Fuse.Camera.Camera", ".ctor()");
    ctor_1();

    if (Camera::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Camera::_instance_ = this, ::STRINGS[0/*"FuseJS/Camera"*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[0/*Fuse.Scripting.NativePromise<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], ::STRINGS[1/*"takePicture"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.FutureFactory<Fuse.ImageTools.Image>*/], (void*)Camera__TakePictureInterface_fn), uDelegate::New(::TYPES[2/*Fuse.Scripting.ResultConverter<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], (void*)::g::Fuse::ImageTools::Image__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[3/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[2/*"checkPermis...*/], uDelegate::New(::TYPES[4/*Fuse.Scripting.FutureFactory<string>*/], (void*)Camera__CheckUserPermissions_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[3/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[3/*"requestPerm...*/], uDelegate::New(::TYPES[4/*Fuse.Scripting.FutureFactory<string>*/], (void*)Camera__RequestUserPermissions_fn), NULL));
}

// private static Uno.Threading.Future<string> CheckUserPermissions(object[] args) [static]
::g::Uno::Threading::Future1* Camera::CheckUserPermissions(uArray* args)
{
    uStackFrame __("Fuse.Camera.Camera", "CheckUserPermissions(object[])");
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[5/*Uno.Threading.Promise<string>*/]);
    ::g::Fuse::Camera::iOSCamera::CheckPermissions(p);
    return p;
}

// public Camera New() [static]
Camera* Camera::New2()
{
    Camera* obj1 = (Camera*)uNew(Camera_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Uno.Threading.Future<string> RequestUserPermissions(object[] args) [static]
::g::Uno::Threading::Future1* Camera::RequestUserPermissions(uArray* args)
{
    uStackFrame __("Fuse.Camera.Camera", "RequestUserPermissions(object[])");
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[5/*Uno.Threading.Promise<string>*/]);
    ::g::Fuse::Camera::iOSCamera::RequestPermissions(p);
    return p;
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> TakePicture() [static]
::g::Uno::Threading::Future1* Camera::TakePicture()
{
    uStackFrame __("Fuse.Camera.Camera", "TakePicture()");
    return Camera::TakePicture1((::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[6/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]));
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> TakePicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [static]
::g::Uno::Threading::Future1* Camera::TakePicture1(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::Camera::iOSCamera::TakePicture(p);
    return p;
}

// private static Uno.Threading.Future<Fuse.ImageTools.Image> TakePictureInterface(object[] args) [static]
::g::Uno::Threading::Future1* Camera::TakePictureInterface(uArray* args)
{
    uStackFrame __("Fuse.Camera.Camera", "TakePictureInterface(object[])");
    int32_t ret2;
    int32_t ret3;

    if (uPtr(args)->Length() == 0)
        return Camera::TakePicture();

    int32_t width = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::TYPES[7/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], args, uCRef<int32_t>(0), uCRef<int32_t>(0), &ret2), ret2);
    int32_t height = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::TYPES[7/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], args, uCRef<int32_t>(1), uCRef<int32_t>(width), &ret3), ret3);
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[6/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]);

    if ((width <= 0) || (height <= 0))
    {
        uPtr(p)->Reject(::g::Uno::Exception::New2(::STRINGS[4/*"Negative im...*/]));
        return p;
    }

    ::g::Fuse::Camera::ResizeImageCallback* cb = ::g::Fuse::Camera::ResizeImageCallback::New1(p, width, height);
    Camera::TakePicture1(cb->ImagePromise());
    return p;
}
// }

// /usr/local/share/uno/Packages/Fuse.Camera/1.12.0/Camera.uno
// -----------------------------------------------------------

// internal sealed class ResizeImageCallback
// {
static void ResizeImageCallback_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[6/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/], offsetof(ResizeImageCallback, _promise), 0,
        ::g::Uno::Int_typeof(), offsetof(ResizeImageCallback, _width), 0,
        ::g::Uno::Int_typeof(), offsetof(ResizeImageCallback, _height), 0,
        ::TYPES[6/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/], offsetof(ResizeImageCallback, _ImagePromise), 0);
}

uType* ResizeImageCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ResizeImageCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Camera.ResizeImageCallback", options);
    type->fp_build_ = ResizeImageCallback_build;
    return type;
}

// public ResizeImageCallback(Uno.Threading.Promise<Fuse.ImageTools.Image> p, int width, int height)
void ResizeImageCallback__ctor__fn(ResizeImageCallback* __this, ::g::Uno::Threading::Promise* p, int32_t* width, int32_t* height)
{
    __this->ctor_(p, *width, *height);
}

// public generated Uno.Threading.Promise<Fuse.ImageTools.Image> get_ImagePromise()
void ResizeImageCallback__get_ImagePromise_fn(ResizeImageCallback* __this, ::g::Uno::Threading::Promise** __retval)
{
    *__retval = __this->ImagePromise();
}

// private generated void set_ImagePromise(Uno.Threading.Promise<Fuse.ImageTools.Image> value)
void ResizeImageCallback__set_ImagePromise_fn(ResizeImageCallback* __this, ::g::Uno::Threading::Promise* value)
{
    __this->ImagePromise(value);
}

// public ResizeImageCallback New(Uno.Threading.Promise<Fuse.ImageTools.Image> p, int width, int height)
void ResizeImageCallback__New1_fn(::g::Uno::Threading::Promise* p, int32_t* width, int32_t* height, ResizeImageCallback** __retval)
{
    *__retval = ResizeImageCallback::New1(p, *width, *height);
}

// private void ResolveResized(Fuse.ImageTools.Image img)
void ResizeImageCallback__ResolveResized_fn(ResizeImageCallback* __this, ::g::Fuse::ImageTools::Image* img)
{
    __this->ResolveResized(img);
}

// private void ResolveTaken(Fuse.ImageTools.Image img)
void ResizeImageCallback__ResolveTaken_fn(ResizeImageCallback* __this, ::g::Fuse::ImageTools::Image* img)
{
    __this->ResolveTaken(img);
}

// public ResizeImageCallback(Uno.Threading.Promise<Fuse.ImageTools.Image> p, int width, int height) [instance]
void ResizeImageCallback::ctor_(::g::Uno::Threading::Promise* p, int32_t width, int32_t height)
{
    uStackFrame __("Fuse.Camera.ResizeImageCallback", ".ctor(Uno.Threading.Promise<Fuse.ImageTools.Image>,int,int)");
    _width = width;
    _height = height;
    _promise = p;
    ImagePromise((::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[6/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]));
    uPtr(ImagePromise())->Then1(uDelegate::New(::TYPES[8/*Uno.Action<Fuse.ImageTools.Image>*/], (void*)ResizeImageCallback__ResolveTaken_fn, this), uDelegate::New(::TYPES[9/*Uno.Action<Uno.Exception>*/], (void*)::g::Uno::Threading::Promise__Reject_fn, uPtr(_promise)));
}

// public generated Uno.Threading.Promise<Fuse.ImageTools.Image> get_ImagePromise() [instance]
::g::Uno::Threading::Promise* ResizeImageCallback::ImagePromise()
{
    return _ImagePromise;
}

// private generated void set_ImagePromise(Uno.Threading.Promise<Fuse.ImageTools.Image> value) [instance]
void ResizeImageCallback::ImagePromise(::g::Uno::Threading::Promise* value)
{
    _ImagePromise = value;
}

// private void ResolveResized(Fuse.ImageTools.Image img) [instance]
void ResizeImageCallback::ResolveResized(::g::Fuse::ImageTools::Image* img)
{
    uStackFrame __("Fuse.Camera.ResizeImageCallback", "ResolveResized(Fuse.ImageTools.Image)");
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_promise), img);
}

// private void ResolveTaken(Fuse.ImageTools.Image img) [instance]
void ResizeImageCallback::ResolveTaken(::g::Fuse::ImageTools::Image* img)
{
    uStackFrame __("Fuse.Camera.ResizeImageCallback", "ResolveTaken(Fuse.ImageTools.Image)");
    ImagePromise(uCast< ::g::Uno::Threading::Promise*>(::g::Fuse::ImageTools::ImageTools::Resize(img, _width, _height, 1, true), ::TYPES[6/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]));
    uPtr(ImagePromise())->Then1(uDelegate::New(::TYPES[8/*Uno.Action<Fuse.ImageTools.Image>*/], (void*)ResizeImageCallback__ResolveResized_fn, this), uDelegate::New(::TYPES[9/*Uno.Action<Uno.Exception>*/], (void*)::g::Uno::Threading::Promise__Reject_fn, uPtr(_promise)));
}

// public ResizeImageCallback New(Uno.Threading.Promise<Fuse.ImageTools.Image> p, int width, int height) [static]
ResizeImageCallback* ResizeImageCallback::New1(::g::Uno::Threading::Promise* p, int32_t width, int32_t height)
{
    ResizeImageCallback* obj1 = (ResizeImageCallback*)uNew(ResizeImageCallback_typeof());
    obj1->ctor_(p, width, height);
    return obj1;
}
// }

}}} // ::g::Fuse::Camera
