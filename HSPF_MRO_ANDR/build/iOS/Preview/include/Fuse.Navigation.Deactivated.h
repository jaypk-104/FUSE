// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.12.0/Activated.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Navigation.NavigationTrigger.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct Deactivated;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class Deactivated
// {
::g::Fuse::Navigation::NavigationTrigger_type* Deactivated_typeof();
void Deactivated__ctor_7_fn(Deactivated* __this);
void Deactivated__ActiveChanged_fn(Deactivated* __this, bool* isActive, bool* isRoot);
void Deactivated__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler);
void Deactivated__New2_fn(Deactivated** __retval);
void Deactivated__RemoveHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler);

struct Deactivated : ::g::Fuse::Navigation::NavigationTrigger
{
    void ctor_7();
    static void AddHandler(::g::Fuse::Visual* visual, uDelegate* handler);
    static Deactivated* New2();
    static void RemoveHandler(::g::Fuse::Visual* visual, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Navigation
