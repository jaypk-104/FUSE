// This file was generated based on /usr/local/share/uno/Packages/Fuse.ImageTools/1.12.0/Android/Commands.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Permissions.PlatformPermission.h>
namespace g{namespace Fuse{namespace ImageTools{struct PCommand;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace ImageTools{

// internal abstract extern class PCommand
// {
struct PCommand_type : uType
{
    void(*fp_OnGranted)(::g::Fuse::ImageTools::PCommand*);
    void(*fp_OnRejected)(::g::Fuse::ImageTools::PCommand*, ::g::Uno::Exception*);
};

PCommand_type* PCommand_typeof();
void PCommand__ctor__fn(PCommand* __this, uArray* requiredPermissions);
void PCommand__Execute_fn(PCommand* __this);
void PCommand__OnPermissions_fn(PCommand* __this, uArray* grantedPermissions);

struct PCommand : uObject
{
    uStrong<uArray*> _requiredPermissions;

    void ctor_(uArray* requiredPermissions);
    void Execute();
    void OnGranted() { (((PCommand_type*)__type)->fp_OnGranted)(this); }
    void OnPermissions(uArray* grantedPermissions);
    void OnRejected(::g::Uno::Exception* e) { (((PCommand_type*)__type)->fp_OnRejected)(this, e); }
};
// }

}}} // ::g::Fuse::ImageTools
