// This file was generated based on /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/Android/AndroidCameraRoll.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace CameraRoll{struct SelectPictureClosure;}}}
namespace g{namespace Fuse{namespace CameraRoll{struct SelectPicturePermissionCheckCommand;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace CameraRoll{

// internal sealed extern class SelectPicturePermissionCheckCommand
// {
uType* SelectPicturePermissionCheckCommand_typeof();
void SelectPicturePermissionCheckCommand__ctor__fn(SelectPicturePermissionCheckCommand* __this, ::g::Uno::Threading::Promise* p);
void SelectPicturePermissionCheckCommand__CreateIntent_fn(::g::Java::Object** __retval);
void SelectPicturePermissionCheckCommand__Execute_fn(SelectPicturePermissionCheckCommand* __this);
void SelectPicturePermissionCheckCommand__New1_fn(::g::Uno::Threading::Promise* p, SelectPicturePermissionCheckCommand** __retval);
void SelectPicturePermissionCheckCommand__OnPermissions_fn(SelectPicturePermissionCheckCommand* __this, uArray* grantedPermissions);
void SelectPicturePermissionCheckCommand__OnRejected_fn(SelectPicturePermissionCheckCommand* __this, ::g::Uno::Exception* e);

struct SelectPicturePermissionCheckCommand : uObject
{
    uStrong< ::g::Fuse::CameraRoll::SelectPictureClosure*> _closure;

    void ctor_(::g::Uno::Threading::Promise* p);
    void Execute();
    void OnPermissions(uArray* grantedPermissions);
    void OnRejected(::g::Uno::Exception* e);
    static ::g::Java::Object* CreateIntent();
    static SelectPicturePermissionCheckCommand* New1(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::CameraRoll
