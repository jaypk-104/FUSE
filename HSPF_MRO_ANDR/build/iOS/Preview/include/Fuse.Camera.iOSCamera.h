// This file was generated based on /usr/local/share/uno/Packages/Fuse.Camera/1.12.0/iOS/iOSCamera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Camera{struct iOSCamera;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Camera{

// public sealed extern class iOSCamera
// {
uType* iOSCamera_typeof();
void iOSCamera__ctor__fn(iOSCamera* __this);
void iOSCamera__CheckPermissions_fn(::g::Uno::Threading::Promise* p);
void iOSCamera__CheckPermissionsInternal_fn(uDelegate* onComplete, uDelegate* onFail);
void iOSCamera__New1_fn(iOSCamera** __retval);
void iOSCamera__RequestPermissions_fn(::g::Uno::Threading::Promise* p);
void iOSCamera__RequestPermissionsInternal_fn(uDelegate* onComplete, uDelegate* onFail);
void iOSCamera__TakePicture_fn(::g::Uno::Threading::Promise* p);
void iOSCamera__TakePictureInternal_fn(uDelegate* onComplete, uDelegate* onFail);

struct iOSCamera : uObject
{
    void ctor_();
    static void CheckPermissions(::g::Uno::Threading::Promise* p);
    static void CheckPermissionsInternal(uDelegate* onComplete, uDelegate* onFail);
    static iOSCamera* New1();
    static void RequestPermissions(::g::Uno::Threading::Promise* p);
    static void RequestPermissionsInternal(uDelegate* onComplete, uDelegate* onFail);
    static void TakePicture(::g::Uno::Threading::Promise* p);
    static void TakePictureInternal(uDelegate* onComplete, uDelegate* onFail);
};
// }

}}} // ::g::Fuse::Camera
