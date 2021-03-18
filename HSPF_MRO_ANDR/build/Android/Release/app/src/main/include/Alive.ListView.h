// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/ListView.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.StackPanel.h>
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
namespace g{namespace Alive{struct ListView;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class ListView
// {
::g::Fuse::Controls::Panel_type* ListView_typeof();
void ListView__get_IsAnimated_fn(ListView* __this, bool* __retval);
void ListView__set_IsAnimated_fn(ListView* __this, bool* value);
void ListView__get_Items_fn(ListView* __this, uObject** __retval);
void ListView__set_Items_fn(ListView* __this, uObject* value);
void ListView__SetIsAnimated_fn(ListView* __this, bool* value, uObject* origin);
void ListView__SetItems_fn(ListView* __this, uObject* value, uObject* origin);

struct ListView : ::g::Fuse::Controls::StackPanel
{
    uStrong<uObject*> _field_Items;
    bool _field_IsAnimated;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ListView_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ListView_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ListView_typeof()->Init(), __selector1_; }

    bool IsAnimated();
    void IsAnimated(bool value);
    uObject* Items();
    void Items(uObject* value);
    void SetIsAnimated(bool value, uObject* origin);
    void SetItems(uObject* value, uObject* origin);
};
// }

}} // ::g::Alive
