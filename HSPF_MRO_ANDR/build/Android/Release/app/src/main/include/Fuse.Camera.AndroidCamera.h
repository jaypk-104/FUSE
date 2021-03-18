// This file was generated based on /usr/local/share/uno/Packages/Fuse.Camera/1.12.0/Android/AndroidCamera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Camera{struct AndroidCamera;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Camera{

// internal static extern class AndroidCamera
// {
uClassType* AndroidCamera_typeof();
void AndroidCamera__CheckPermissions_fn(::g::Uno::Threading::Promise* p);
void AndroidCamera__RequestPermissions_fn(::g::Uno::Threading::Promise* p);
void AndroidCamera__TakePicture_fn(::g::Uno::Threading::Promise* p);

struct AndroidCamera : uObject
{
    static void CheckPermissions(::g::Uno::Threading::Promise* p);
    static void RequestPermissions(::g::Uno::Threading::Promise* p);
    static void TakePicture(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::Camera
