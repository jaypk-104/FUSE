// This file was generated based on /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/Android/AndroidCameraRoll.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace CameraRoll{struct AndroidCameraRoll;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace CameraRoll{

// internal static extern class AndroidCameraRoll
// {
uClassType* AndroidCameraRoll_typeof();
void AndroidCameraRoll__AddToCameraRoll_fn(::g::Fuse::ImageTools::Image* photo, ::g::Uno::Threading::Future1** __retval);
void AndroidCameraRoll__CheckPermissions_fn(::g::Uno::Threading::Promise* p);
void AndroidCameraRoll__RequestPermissions_fn(::g::Uno::Threading::Promise* p);
void AndroidCameraRoll__SelectPicture_fn(::g::Uno::Threading::Promise* p);

struct AndroidCameraRoll : uObject
{
    static ::g::Uno::Threading::Future1* AddToCameraRoll(::g::Fuse::ImageTools::Image* photo);
    static void CheckPermissions(::g::Uno::Threading::Promise* p);
    static void RequestPermissions(::g::Uno::Threading::Promise* p);
    static void SelectPicture(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::CameraRoll
