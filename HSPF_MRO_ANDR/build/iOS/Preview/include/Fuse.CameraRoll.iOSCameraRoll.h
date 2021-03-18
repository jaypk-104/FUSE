// This file was generated based on /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/iOS/iOSCameraRoll.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace CameraRoll{struct iOSCameraRoll;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace CameraRoll{

// public sealed extern class iOSCameraRoll
// {
uType* iOSCameraRoll_typeof();
void iOSCameraRoll__ctor__fn(iOSCameraRoll* __this);
void iOSCameraRoll__AddToCameraRoll_fn(::g::Fuse::ImageTools::Image* photo, ::g::Uno::Threading::Future1** __retval);
void iOSCameraRoll__AddToCameraRollInternal_fn(uString* path, uDelegate* success, uDelegate* fail);
void iOSCameraRoll__CheckPermissions_fn(::g::Uno::Threading::Promise* p);
void iOSCameraRoll__CheckPermissionsInternal_fn(uDelegate* onComplete, uDelegate* onFail);
void iOSCameraRoll__New1_fn(iOSCameraRoll** __retval);
void iOSCameraRoll__RequestPermissions_fn(::g::Uno::Threading::Promise* p);
void iOSCameraRoll__RequestPermissionsInternal_fn(uDelegate* onComplete, uDelegate* onFail);
void iOSCameraRoll__SelectPicture_fn(::g::Uno::Threading::Promise* p);
void iOSCameraRoll__SelectPictureInternal_fn(uDelegate* onComplete, uDelegate* onFail);

struct iOSCameraRoll : uObject
{
    void ctor_();
    static ::g::Uno::Threading::Future1* AddToCameraRoll(::g::Fuse::ImageTools::Image* photo);
    static void AddToCameraRollInternal(uString* path, uDelegate* success, uDelegate* fail);
    static void CheckPermissions(::g::Uno::Threading::Promise* p);
    static void CheckPermissionsInternal(uDelegate* onComplete, uDelegate* onFail);
    static iOSCameraRoll* New1();
    static void RequestPermissions(::g::Uno::Threading::Promise* p);
    static void RequestPermissionsInternal(uDelegate* onComplete, uDelegate* onFail);
    static void SelectPicture(::g::Uno::Threading::Promise* p);
    static void SelectPictureInternal(uDelegate* onComplete, uDelegate* onFail);
};
// }

}}} // ::g::Fuse::CameraRoll
