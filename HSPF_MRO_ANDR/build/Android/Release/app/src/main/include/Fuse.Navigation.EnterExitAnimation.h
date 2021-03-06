// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.12.0/NavigationAnimations.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Navigation.NavigationAnimation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct EnterExitAnimation;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class EnterExitAnimation
// {
::g::Fuse::Navigation::NavigationAnimation_type* EnterExitAnimation_typeof();
void EnterExitAnimation__ctor_6_fn(EnterExitAnimation* __this);
void EnterExitAnimation__ForceUpdate_fn(EnterExitAnimation* __this);
void EnterExitAnimation__IsMatch_fn(EnterExitAnimation* __this, double* progress, bool* __retval);
void EnterExitAnimation__OnNavigationStateChanged_fn(EnterExitAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct EnterExitAnimation : ::g::Fuse::Navigation::NavigationAnimation
{
    bool PositiveProgress;
    bool NegativeProgress;

    void ctor_6();
    bool IsMatch(double progress);
};
// }

}}} // ::g::Fuse::Navigation
