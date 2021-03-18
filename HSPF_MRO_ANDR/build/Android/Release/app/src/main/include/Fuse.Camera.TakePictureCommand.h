// This file was generated based on /usr/local/share/uno/Packages/Fuse.Camera/1.12.0/Android/AndroidCamera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Camera{struct TakePictureCommand;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Camera{

// internal sealed extern class TakePictureCommand
// {
uType* TakePictureCommand_typeof();
void TakePictureCommand__ctor__fn(TakePictureCommand* __this, ::g::Uno::Threading::Promise* promise);
void TakePictureCommand__CreateImage_fn(::g::Java::Object** __retval);
void TakePictureCommand__CreateIntent_fn(::g::Java::Object* photo, ::g::Java::Object** __retval);
void TakePictureCommand__Execute_fn(TakePictureCommand* __this, uArray* grantedPermissions);
void TakePictureCommand__New1_fn(::g::Uno::Threading::Promise* promise, TakePictureCommand** __retval);

struct TakePictureCommand : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> _promise;

    void ctor_(::g::Uno::Threading::Promise* promise);
    void Execute(uArray* grantedPermissions);
    static ::g::Java::Object* CreateImage();
    static ::g::Java::Object* CreateIntent(::g::Java::Object* photo);
    static TakePictureCommand* New1(::g::Uno::Threading::Promise* promise);
};
// }

}}} // ::g::Fuse::Camera
