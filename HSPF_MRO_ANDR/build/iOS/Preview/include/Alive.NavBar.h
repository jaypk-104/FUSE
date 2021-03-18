// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/NavBar.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Container.h>
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
namespace g{namespace Alive{struct NavBar;}}
namespace g{namespace Fuse{namespace Controls{struct DockPanel;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class NavBar
// {
::g::Fuse::Controls::Panel_type* NavBar_typeof();
void NavBar__ctor_8_fn(NavBar* __this);
void NavBar__InitializeUX_fn(NavBar* __this);
void NavBar__New5_fn(NavBar** __retval);

struct NavBar : ::g::Fuse::Controls::Container
{
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Fuse::Controls::DockPanel*> inner;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return NavBar_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return NavBar_typeof()->Init(), __selector1_; }

    void ctor_8();
    void InitializeUX();
    static NavBar* New5();
};
// }

}} // ::g::Alive
