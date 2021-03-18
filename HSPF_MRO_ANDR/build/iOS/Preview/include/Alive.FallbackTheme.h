// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Alive.FallbackTheme.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Alive.LightTheme.h>
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Alive{struct FallbackTheme;}}

namespace g{
namespace Alive{

// public partial sealed class FallbackTheme
// {
::g::Fuse::Triggers::WhileBool_type* FallbackTheme_typeof();
void FallbackTheme__ctor_11_fn(FallbackTheme* __this);
void FallbackTheme__InitializeUX2_fn(FallbackTheme* __this);
void FallbackTheme__New5_fn(FallbackTheme** __retval);

struct FallbackTheme : ::g::Alive::LightTheme
{
    void ctor_11();
    void InitializeUX2();
    static FallbackTheme* New5();
};
// }

}} // ::g::Alive
