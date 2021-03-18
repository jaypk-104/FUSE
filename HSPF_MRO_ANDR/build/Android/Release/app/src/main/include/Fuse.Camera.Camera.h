// This file was generated based on /usr/local/share/uno/Packages/Fuse.Camera/1.12.0/Camera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Camera{struct Camera;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Camera{

// public sealed class Camera
// {
::g::Fuse::Scripting::NativeModule_type* Camera_typeof();
void Camera__ctor_2_fn(Camera* __this);
void Camera__CheckUserPermissions_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);
void Camera__New2_fn(Camera** __retval);
void Camera__RequestUserPermissions_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);
void Camera__TakePicture_fn(::g::Uno::Threading::Future1** __retval);
void Camera__TakePicture1_fn(::g::Uno::Threading::Promise* p, ::g::Uno::Threading::Future1** __retval);
void Camera__TakePictureInterface_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);

struct Camera : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Camera*> _instance_;
    static uSStrong<Camera*>& _instance() { return _instance_; }

    void ctor_2();
    static ::g::Uno::Threading::Future1* CheckUserPermissions(uArray* args);
    static Camera* New2();
    static ::g::Uno::Threading::Future1* RequestUserPermissions(uArray* args);
    static ::g::Uno::Threading::Future1* TakePicture();
    static ::g::Uno::Threading::Future1* TakePicture1(::g::Uno::Threading::Promise* p);
    static ::g::Uno::Threading::Future1* TakePictureInterface(uArray* args);
};
// }

}}} // ::g::Fuse::Camera
