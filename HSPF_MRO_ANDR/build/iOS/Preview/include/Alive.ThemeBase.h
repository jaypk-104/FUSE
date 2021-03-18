// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Alive.ThemeBase.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Alive{struct ThemeBase;}}

namespace g{
namespace Alive{

// public partial class ThemeBase
// {
::g::Fuse::Triggers::WhileBool_type* ThemeBase_typeof();
void ThemeBase__ctor_9_fn(ThemeBase* __this);
void ThemeBase__InitializeUX_fn(ThemeBase* __this);
void ThemeBase__New3_fn(ThemeBase** __retval);

struct ThemeBase : ::g::Fuse::Triggers::WhileTrue
{
    void ctor_9();
    void InitializeUX();
    static ThemeBase* New3();
};
// }

}} // ::g::Alive
