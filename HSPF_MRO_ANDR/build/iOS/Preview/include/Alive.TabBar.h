// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/TabBar.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Alive{struct TabBar;}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class TabBar
// {
::g::Fuse::Controls::Panel_type* TabBar_typeof();
void TabBar__ctor_7_fn(TabBar* __this, uObject* Navigation1);
void TabBar__InitializeUX_fn(TabBar* __this);
void TabBar__New4_fn(uObject* Navigation1, TabBar** __retval);

struct TabBar : ::g::Fuse::Controls::Panel
{
    uStrong<uObject*> Navigation;
    uStrong< ::g::Uno::UX::Property1*> indicator_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Color_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> indicator;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TabBar_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return TabBar_typeof()->Init(), __selector1_; }

    void ctor_7(uObject* Navigation1);
    void InitializeUX();
    static TabBar* New4(uObject* Navigation1);
};
// }

}} // ::g::Alive
