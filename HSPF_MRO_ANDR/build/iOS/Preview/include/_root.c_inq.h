// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/c_inq.g.uno.
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
#include <Uno.DateTime.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct DatePicker;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_inq;}
namespace g{struct Tab;}

namespace g{

// public partial sealed class c_inq
// {
::g::Fuse::Controls::Panel_type* c_inq_typeof();
void c_inq__ctor_8_fn(c_inq* __this, ::g::Fuse::Navigation::Router* router1);
void c_inq__InitializeUX_fn(c_inq* __this);
void c_inq__New5_fn(::g::Fuse::Navigation::Router* router1, c_inq** __retval);

struct c_inq : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> navigation_1_Active_inst;
    uStrong< ::g::Uno::UX::Property1*> tab1_1_Background_inst;
    uStrong< ::g::Uno::UX::Property1*> tab2_1_Background_inst;
    uStrong< ::g::Uno::UX::Property1*> tab1_1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> tab2_1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> page1Tab_1_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> dtpk1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> dtpk1_MinValue_inst;
    uStrong< ::g::Uno::UX::Property1*> dtpk1_MaxValue_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> img_visible_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> imgtransform_ZoomFactor_inst;
    uStrong< ::g::Uno::UX::Property1*> imgtransform_Translation_inst;
    uStrong< ::g::Uno::UX::Property1*> imgtransform_Rotation_inst;
    uStrong< ::g::Uno::UX::Property1*> img_visible_sub_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> imgtransform_sub_ZoomFactor_inst;
    uStrong< ::g::Uno::UX::Property1*> imgtransform_sub_Translation_inst;
    uStrong< ::g::Uno::UX::Property1*> imgtransform_sub_Rotation_inst;
    uStrong< ::g::Uno::UX::Property1*> indicator_1_Element_LayoutMaster_inst;
    uStrong< ::g::Uno::UX::Property1*> indicator_1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> navigation_1_Interaction_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> indicator_1;
    uStrong< ::g::Fuse::Controls::Panel*> page2Tab_1;
    uStrong< ::g::Tab*> tab2_1;
    uStrong< ::g::Fuse::Controls::Panel*> page1Tab_1;
    uStrong< ::g::Tab*> tab1_1;
    uStrong< ::g::Fuse::Controls::PageControl*> navigation_1;
    uStrong< ::g::Fuse::Controls::Page*> page2_1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb41;
    uStrong< ::g::Fuse::Controls::DatePicker*> dtpk1;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> img_visible;
    uStrong< ::g::Fuse::Elements::InteractiveTransform*> imgtransform;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> img_visible_sub;
    uStrong< ::g::Fuse::Elements::InteractiveTransform*> imgtransform_sub;
    uStrong< ::g::Fuse::Navigation::Router*> router_appr_inq;
    uStrong< ::g::Fuse::Controls::Page*> page1_1;
    uStrong< ::g::Fuse::Navigation::Router*> router_inq;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return c_inq_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_inq_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return c_inq_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return c_inq_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return c_inq_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return c_inq_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return c_inq_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return c_inq_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return c_inq_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return c_inq_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return c_inq_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return c_inq_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return c_inq_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return c_inq_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return c_inq_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return c_inq_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return c_inq_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return c_inq_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return c_inq_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return c_inq_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return c_inq_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return c_inq_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return c_inq_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return c_inq_typeof()->Init(), __selector22_; }
    static ::g::Uno::UX::Selector __selector23_;
    static ::g::Uno::UX::Selector& __selector23() { return c_inq_typeof()->Init(), __selector23_; }
    static ::g::Uno::UX::Selector __selector24_;
    static ::g::Uno::UX::Selector& __selector24() { return c_inq_typeof()->Init(), __selector24_; }
    static ::g::Uno::UX::Selector __selector25_;
    static ::g::Uno::UX::Selector& __selector25() { return c_inq_typeof()->Init(), __selector25_; }
    static ::g::Uno::UX::Selector __selector26_;
    static ::g::Uno::UX::Selector& __selector26() { return c_inq_typeof()->Init(), __selector26_; }
    static ::g::Uno::UX::Selector __selector27_;
    static ::g::Uno::UX::Selector& __selector27() { return c_inq_typeof()->Init(), __selector27_; }
    static ::g::Uno::UX::Selector __selector28_;
    static ::g::Uno::UX::Selector& __selector28() { return c_inq_typeof()->Init(), __selector28_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static c_inq* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
