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
namespace g{namespace Fuse{namespace Navigation{struct Activated;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class Activated
// {
::g::Fuse::Navigation::NavigationTrigger_type* Activated_typeof();
void Activated__ctor_7_fn(Activated* __this);
void Activated__ActiveChanged_fn(Activated* __this, bool* isActive, bool* isRoot);
void Activated__New2_fn(Activated** __retval);

struct Activated : ::g::Fuse::Navigation::NavigationTrigger
{
    void ctor_7();
    static Activated* New2();
};
// }

}}} // ::g::Fuse::Navigation
