// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/CancelInteractions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct CancelInteractions;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class CancelInteractions
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* CancelInteractions_typeof();
void CancelInteractions__ctor_2_fn(CancelInteractions* __this);
void CancelInteractions__New2_fn(CancelInteractions** __retval);
void CancelInteractions__Perform_fn(CancelInteractions* __this, ::g::Fuse::Node* target);
void CancelInteractions__get_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual** __retval);
void CancelInteractions__set_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual* value);

struct CancelInteractions : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Visual*> _Target;

    void ctor_2();
    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
    static CancelInteractions* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
