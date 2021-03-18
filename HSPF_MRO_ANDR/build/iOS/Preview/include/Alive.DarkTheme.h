// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Alive.DarkTheme.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Alive.ThemeBase.h>
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
#include <Uno.Float4.h>
namespace g{namespace Alive{struct DarkTheme;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class DarkTheme
// {
::g::Fuse::Triggers::WhileBool_type* DarkTheme_typeof();
void DarkTheme__ctor_10_fn(DarkTheme* __this);
void DarkTheme__InitializeUX1_fn(DarkTheme* __this);
void DarkTheme__New4_fn(DarkTheme** __retval);

struct DarkTheme : ::g::Alive::ThemeBase
{
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DarkTheme_typeof()->Init(), __selector0_; }

    void ctor_10();
    void InitializeUX1();
    static DarkTheme* New4();
};
// }

}} // ::g::Alive
