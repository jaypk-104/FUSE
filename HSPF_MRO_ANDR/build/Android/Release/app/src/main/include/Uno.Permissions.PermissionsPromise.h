// This file was generated based on /usr/local/share/uno/Packages/Uno.Permissions/1.12.0/Permissions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Permissions.IPermissionPromise.h>
#include <Uno.Permissions.PlatformPermission.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Uno{namespace Permissions{struct PermissionsPromise;}}}

namespace g{
namespace Uno{
namespace Permissions{

// internal sealed class PermissionsPromise
// {
struct PermissionsPromise_type : ::g::Uno::Threading::Future_type
{
    ::g::Uno::Permissions::IPermissionPromise interface1;
};

PermissionsPromise_type* PermissionsPromise_typeof();
void PermissionsPromise__ctor_7_fn(PermissionsPromise* __this, uArray* permissions);
void PermissionsPromise__New5_fn(uArray* permissions, PermissionsPromise** __retval);
void PermissionsPromise__Resolve1_fn(PermissionsPromise* __this);

struct PermissionsPromise : ::g::Uno::Threading::Promise
{
    uStrong<uArray*> _permissions;

    void ctor_7(uArray* permissions);
    void Resolve1();
    static PermissionsPromise* New5(uArray* permissions);
};
// }

}}} // ::g::Uno::Permissions
