// This file was generated based on /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/Android/AndroidCameraRoll.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace CameraRoll{struct AddPicturePermissionCheckCommand;}}}
namespace g{namespace Fuse{namespace ImageTools{struct BoolPromiseCallback;}}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace CameraRoll{

// internal sealed extern class AddPicturePermissionCheckCommand
// {
uType* AddPicturePermissionCheckCommand_typeof();
void AddPicturePermissionCheckCommand__ctor__fn(AddPicturePermissionCheckCommand* __this, ::g::Uno::Threading::Promise* p, uString* path);
void AddPicturePermissionCheckCommand__AddToCameraRollInternal_fn(uString* path, uDelegate* success, uDelegate* reject);
void AddPicturePermissionCheckCommand__Execute_fn(AddPicturePermissionCheckCommand* __this);
void AddPicturePermissionCheckCommand__New1_fn(::g::Uno::Threading::Promise* p, uString* path, AddPicturePermissionCheckCommand** __retval);
void AddPicturePermissionCheckCommand__OnPermissions_fn(AddPicturePermissionCheckCommand* __this, uArray* grantedPermissions);
void AddPicturePermissionCheckCommand__OnRejected_fn(AddPicturePermissionCheckCommand* __this, ::g::Uno::Exception* e);

struct AddPicturePermissionCheckCommand : uObject
{
    uStrong< ::g::Fuse::ImageTools::BoolPromiseCallback*> _callback;
    uStrong<uString*> _path;

    void ctor_(::g::Uno::Threading::Promise* p, uString* path);
    void Execute();
    void OnPermissions(uArray* grantedPermissions);
    void OnRejected(::g::Uno::Exception* e);
    static void AddToCameraRollInternal(uString* path, uDelegate* success, uDelegate* reject);
    static AddPicturePermissionCheckCommand* New1(::g::Uno::Threading::Promise* p, uString* path);
};
// }

}}} // ::g::Fuse::CameraRoll
