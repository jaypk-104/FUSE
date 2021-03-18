// This file was generated based on /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/CameraRoll.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace CameraRoll{struct CameraRoll;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace CameraRoll{

// public sealed class CameraRoll
// {
::g::Fuse::Scripting::NativeModule_type* CameraRoll_typeof();
void CameraRoll__ctor_2_fn(CameraRoll* __this);
void CameraRoll__AddToCameraRoll_fn(::g::Fuse::ImageTools::Image* photo, ::g::Uno::Threading::Future1** __retval);
void CameraRoll__AddToCameraRollInterface_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);
void CameraRoll__CheckUserPermissions_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);
void CameraRoll__New2_fn(CameraRoll** __retval);
void CameraRoll__RequestUserPermissions_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);
void CameraRoll__SelectPicture_fn(::g::Uno::Threading::Future1** __retval);
void CameraRoll__SelectPictureInterface_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);

struct CameraRoll : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<CameraRoll*> _instance_;
    static uSStrong<CameraRoll*>& _instance() { return _instance_; }

    void ctor_2();
    static ::g::Uno::Threading::Future1* AddToCameraRoll(::g::Fuse::ImageTools::Image* photo);
    static ::g::Uno::Threading::Future1* AddToCameraRollInterface(uArray* args);
    static ::g::Uno::Threading::Future1* CheckUserPermissions(uArray* args);
    static CameraRoll* New2();
    static ::g::Uno::Threading::Future1* RequestUserPermissions(uArray* args);
    static ::g::Uno::Threading::Future1* SelectPicture();
    static ::g::Uno::Threading::Future1* SelectPictureInterface(uArray* args);
};
// }

}}} // ::g::Fuse::CameraRoll
