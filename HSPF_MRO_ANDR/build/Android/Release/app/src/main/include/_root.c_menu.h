// This file was generated based on '.uno/ux15/c_menu.g.uno'.
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
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_menu;}

namespace g{

// public partial sealed class c_menu
// {
::g::Fuse::Controls::Panel_type* c_menu_typeof();
void c_menu__ctor_8_fn(c_menu* __this, ::g::Fuse::Navigation::Router* router1);
void c_menu__InitializeUX_fn(c_menu* __this);
void c_menu__New5_fn(::g::Fuse::Navigation::Router* router1, c_menu** __retval);

struct c_menu : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Visibility_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb63;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb64;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb65;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb66;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb67;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb68;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return c_menu_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_menu_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return c_menu_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return c_menu_typeof()->Init(), __selector2_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static c_menu* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
