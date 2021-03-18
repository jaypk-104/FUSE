// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/TabPage.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Alive{struct TabPage;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class TabPage
// {
::g::Fuse::Controls::Panel_type* TabPage_typeof();
void TabPage__get_Label_fn(TabPage* __this, uString** __retval);
void TabPage__set_Label_fn(TabPage* __this, uString* value);
void TabPage__SetLabel_fn(TabPage* __this, uString* value, uObject* origin);

struct TabPage : ::g::Fuse::Controls::Page
{
    uStrong<uString*> _field_Label;
    static ::g::Uno::UX::Selector __selector01_;
    static ::g::Uno::UX::Selector& __selector01() { return TabPage_typeof()->Init(), __selector01_; }

    uString* Label();
    void Label(uString* value);
    void SetLabel(uString* value, uObject* origin);
};
// }

}} // ::g::Alive
