// This file was generated based on /usr/local/share/uno/Packages/Uno.Permissions/1.12.0/Permissions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Uno{
namespace Permissions{

// internal abstract interface IPermissionPromise
// {
uInterfaceType* IPermissionPromise_typeof();

struct IPermissionPromise
{
    void(*fp_Reject)(uObject*, ::g::Uno::Exception*);
    void(*fp_Resolve)(uObject*);
    static void Reject(const uInterface& __this, ::g::Uno::Exception* e) { __this.VTable<IPermissionPromise>()->fp_Reject(__this, e); }
    static void Resolve(const uInterface& __this) { __this.VTable<IPermissionPromise>()->fp_Resolve(__this); }
};
// }

}}} // ::g::Uno::Permissions
