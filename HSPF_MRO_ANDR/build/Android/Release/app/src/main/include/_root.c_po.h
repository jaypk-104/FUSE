// This file was generated based on '.uno/ux15/c_po.g.uno'.
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_po;}
namespace g{struct Tab;}

namespace g{

// public partial sealed class c_po
// {
::g::Fuse::Controls::Panel_type* c_po_typeof();
void c_po__ctor_8_fn(c_po* __this, ::g::Fuse::Navigation::Router* router1);
void c_po__InitializeUX_fn(c_po* __this);
void c_po__New5_fn(::g::Fuse::Navigation::Router* router1, c_po** __retval);
void c_po__get_Options_fn(c_po* __this, uObject** __retval);
void c_po__set_Options_fn(c_po* __this, uObject* value);
void c_po__get_Options2_fn(c_po* __this, uObject** __retval);
void c_po__set_Options2_fn(c_po* __this, uObject* value);
void c_po__get_Selected_fn(c_po* __this, uObject** __retval);
void c_po__set_Selected_fn(c_po* __this, uObject* value);
void c_po__get_Selected2_fn(c_po* __this, uObject** __retval);
void c_po__set_Selected2_fn(c_po* __this, uObject* value);
void c_po__SetOptions_fn(c_po* __this, uObject* value, uObject* origin);
void c_po__SetOptions2_fn(c_po* __this, uObject* value, uObject* origin);
void c_po__SetSelected_fn(c_po* __this, uObject* value, uObject* origin);
void c_po__SetSelected2_fn(c_po* __this, uObject* value, uObject* origin);

struct c_po : ::g::Fuse::Controls::Page
{
    uStrong<uObject*> _field_Options;
    uStrong<uObject*> _field_Selected;
    uStrong<uObject*> _field_Options2;
    uStrong<uObject*> _field_Selected2;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> navigation_1_po_Active_inst;
    uStrong< ::g::Uno::UX::Property1*> tab1_item_Background_inst;
    uStrong< ::g::Uno::UX::Property1*> tab1_item_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> tab2_cart_Background_inst;
    uStrong< ::g::Uno::UX::Property1*> tab2_cart_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> tab3_po_Background_inst;
    uStrong< ::g::Uno::UX::Property1*> tab3_po_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> indicator_1_po_Element_LayoutMaster_inst;
    uStrong< ::g::Uno::UX::Property1*> indicator_1_po_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Options_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Selected_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Options2_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Selected2_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> indicator_1_po;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb69;
    uStrong< ::g::Fuse::Controls::Panel*> page1Tab_1_po;
    uStrong< ::g::Tab*> tab1_item;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb70;
    uStrong< ::g::Fuse::Controls::Panel*> page2Tab_1_po;
    uStrong< ::g::Tab*> tab2_cart;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb71;
    uStrong< ::g::Fuse::Controls::Panel*> page3Tab_1_po;
    uStrong< ::g::Tab*> tab3_po;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb72;
    uStrong< ::g::Fuse::Controls::PageControl*> navigation_1_po;
    uStrong< ::g::Fuse::Controls::Page*> poItem;
    uStrong< ::g::Fuse::Navigation::Router*> router_item;
    uStrong< ::g::Fuse::Controls::Page*> poCart;
    uStrong< ::g::Fuse::Navigation::Router*> router_cart;
    uStrong< ::g::Fuse::Controls::Page*> poOrder;
    uStrong< ::g::Fuse::Navigation::Router*> router_order;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return c_po_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_po_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return c_po_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return c_po_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return c_po_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return c_po_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return c_po_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return c_po_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return c_po_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return c_po_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return c_po_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return c_po_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return c_po_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return c_po_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return c_po_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return c_po_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return c_po_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return c_po_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return c_po_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return c_po_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return c_po_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return c_po_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return c_po_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return c_po_typeof()->Init(), __selector22_; }
    static ::g::Uno::UX::Selector __selector23_;
    static ::g::Uno::UX::Selector& __selector23() { return c_po_typeof()->Init(), __selector23_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    uObject* Options();
    void Options(uObject* value);
    uObject* Options2();
    void Options2(uObject* value);
    uObject* Selected();
    void Selected(uObject* value);
    uObject* Selected2();
    void Selected2(uObject* value);
    void SetOptions(uObject* value, uObject* origin);
    void SetOptions2(uObject* value, uObject* origin);
    void SetSelected(uObject* value, uObject* origin);
    void SetSelected2(uObject* value, uObject* origin);
    static c_po* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
