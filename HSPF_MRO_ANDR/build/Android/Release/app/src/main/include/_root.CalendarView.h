// This file was generated based on '.uno/ux15/CalendarView.g.uno'.
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
namespace g{namespace Fuse{namespace Controls{struct Navigator;}}}
namespace g{namespace Fuse{namespace Controls{struct NavigatorSwipe;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CalendarView;}

namespace g{

// public partial sealed class CalendarView
// {
::g::Fuse::Controls::Panel_type* CalendarView_typeof();
void CalendarView__ctor_8_fn(CalendarView* __this, ::g::Fuse::Navigation::Router* router1);
void CalendarView__InitializeUX_fn(CalendarView* __this);
void CalendarView__New5_fn(::g::Fuse::Navigation::Router* router1, CalendarView** __retval);

struct CalendarView : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> swipeLeft_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> swipeRight_IsEnabled_inst;
    uStrong< ::g::Fuse::Controls::Navigator*> calNav;
    uStrong< ::g::Fuse::Controls::NavigatorSwipe*> swipeLeft;
    uStrong< ::g::Fuse::Controls::NavigatorSwipe*> swipeRight;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return CalendarView_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CalendarView_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return CalendarView_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return CalendarView_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return CalendarView_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return CalendarView_typeof()->Init(), __selector4_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static CalendarView* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
