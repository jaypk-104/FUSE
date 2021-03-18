// This file was generated based on /usr/local/share/uno/Packages/Fuse.Camera/1.12.0/Android/AndroidCamera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Camera{struct requestAndroidPermissions;}}}
namespace g{namespace Fuse{namespace ImageTools{struct PromiseCallback;}}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Camera{

// internal sealed extern class requestAndroidPermissions
// {
uType* requestAndroidPermissions_typeof();
void requestAndroidPermissions__ctor__fn(requestAndroidPermissions* __this, ::g::Uno::Threading::Promise* p);
void requestAndroidPermissions__Execute_fn(requestAndroidPermissions* __this);
void requestAndroidPermissions__New1_fn(::g::Uno::Threading::Promise* p, requestAndroidPermissions** __retval);
void requestAndroidPermissions__OnPermissions_fn(requestAndroidPermissions* __this, uArray* grantedPermissions);
void requestAndroidPermissions__OnRejected_fn(requestAndroidPermissions* __this, ::g::Uno::Exception* e);

struct requestAndroidPermissions : uObject
{
    uStrong< ::g::Fuse::ImageTools::PromiseCallback*> _callback;

    void ctor_(::g::Uno::Threading::Promise* p);
    void Execute();
    void OnPermissions(uArray* grantedPermissions);
    void OnRejected(::g::Uno::Exception* e);
    static requestAndroidPermissions* New1(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::Camera
