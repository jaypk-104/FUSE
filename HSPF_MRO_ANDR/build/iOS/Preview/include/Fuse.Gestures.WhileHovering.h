// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/WhileHovering.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct WhileHovering;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class WhileHovering
// {
::g::Fuse::Triggers::Trigger_type* WhileHovering_typeof();
void WhileHovering__ctor_5_fn(WhileHovering* __this);
void WhileHovering__New2_fn(WhileHovering** __retval);
void WhileHovering__OnIsContextEnabledChanged_fn(WhileHovering* __this, uObject* s, uObject* a);
void WhileHovering__OnPointerEntered_fn(WhileHovering* __this, uObject* sender, uObject* args);
void WhileHovering__OnPointerLeft_fn(WhileHovering* __this, uObject* sender, uObject* args);
void WhileHovering__OnRooted_fn(WhileHovering* __this);
void WhileHovering__OnUnrooted_fn(WhileHovering* __this);

struct WhileHovering : ::g::Fuse::Triggers::Trigger
{
    void ctor_5();
    void OnIsContextEnabledChanged(uObject* s, uObject* a);
    void OnPointerEntered(uObject* sender, uObject* args);
    void OnPointerLeft(uObject* sender, uObject* args);
    static WhileHovering* New2();
};
// }

}}} // ::g::Fuse::Gestures
