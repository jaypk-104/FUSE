// This file was generated based on /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/Android/AndroidCameraRoll.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace CameraRoll{struct CheckPermissionsCommand;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace CameraRoll{

// internal sealed extern class CheckPermissionsCommand
// {
uType* CheckPermissionsCommand_typeof();
void CheckPermissionsCommand__ctor__fn(CheckPermissionsCommand* __this, ::g::Uno::Threading::Promise* p);
void CheckPermissionsCommand__CheckPermissionsInternal_fn(uDelegate* onComplete, uDelegate* onFail);
void CheckPermissionsCommand__New1_fn(::g::Uno::Threading::Promise* p, CheckPermissionsCommand** __retval);

struct CheckPermissionsCommand : uObject
{
    void ctor_(::g::Uno::Threading::Promise* p);
    static void CheckPermissionsInternal(uDelegate* onComplete, uDelegate* onFail);
    static CheckPermissionsCommand* New1(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::CameraRoll
