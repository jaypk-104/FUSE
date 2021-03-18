// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Alive.TabBar.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Alive{struct ButtonText;}}
namespace g{namespace Alive{struct TabBar;}}
namespace g{namespace Alive{struct TabBar__Template;}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class TabBar.Template
// {
::g::Uno::UX::Template_type* TabBar__Template_typeof();
void TabBar__Template__ctor_1_fn(TabBar__Template* __this, ::g::Alive::TabBar* parent, ::g::Alive::TabBar* parentInstance);
void TabBar__Template__New1_fn(TabBar__Template* __this, uObject** __retval);
void TabBar__Template__New2_fn(::g::Alive::TabBar* parent, ::g::Alive::TabBar* parentInstance, TabBar__Template** __retval);

struct TabBar__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Alive::TabBar*> __parent1;
    uWeak< ::g::Alive::TabBar*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Target_inst;
    uStrong< ::g::Uno::UX::Property1*> labelText_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> indicator_Element_LayoutMaster_inst;
    uStrong< ::g::Uno::UX::Property1*> labelText_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> button;
    uStrong< ::g::Alive::ButtonText*> labelText;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TabBar__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return TabBar__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return TabBar__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return TabBar__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return TabBar__Template_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return TabBar__Template_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return TabBar__Template_typeof()->Init(), __selector6_; }

    void ctor_1(::g::Alive::TabBar* parent, ::g::Alive::TabBar* parentInstance);
    static TabBar__Template* New2(::g::Alive::TabBar* parent, ::g::Alive::TabBar* parentInstance);
};
// }

}} // ::g::Alive
