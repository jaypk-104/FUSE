// This file was generated based on '.uno/ux15/s_inq01.g.uno'.
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
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Animations{struct Attractor;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct s_inq01;}
namespace g{struct TabHeader;}
namespace g{struct TabIcon;}

namespace g{

// public partial sealed class s_inq01
// {
::g::Fuse::Controls::Panel_type* s_inq01_typeof();
void s_inq01__ctor_8_fn(s_inq01* __this, ::g::Fuse::Navigation::Router* router1);
void s_inq01__InitializeUX_fn(s_inq01* __this);
void s_inq01__New5_fn(::g::Fuse::Navigation::Router* router1, s_inq01** __retval);

struct s_inq01 : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> img_visible_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> popup1_visible_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> imgtransform_ZoomFactor_inst;
    uStrong< ::g::Uno::UX::Property1*> imgtransform_Translation_inst;
    uStrong< ::g::Uno::UX::Property1*> imgtransform_Rotation_inst;
    uStrong< ::g::Uno::UX::Property1*> img_visible_sub_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> imgtransform_sub_ZoomFactor_inst;
    uStrong< ::g::Uno::UX::Property1*> imgtransform_sub_Translation_inst;
    uStrong< ::g::Uno::UX::Property1*> imgtransform_sub_Rotation_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> nav_Active_inst;
    uStrong< ::g::Uno::UX::Property1*> indicator_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> bgColor_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> indicator_Width_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> shrinkIndicatorWidth_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> indicatorColorAttractor_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> bgColorAttractor_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> h1_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> col1_Width_inst;
    uStrong< ::g::Uno::UX::Property1*> c1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp10_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp11_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp12_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp13_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp14_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp15_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> h2_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> col2_Width_inst;
    uStrong< ::g::Uno::UX::Property1*> c2_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> h3_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> col3_Width_inst;
    uStrong< ::g::Uno::UX::Property1*> c3_Color_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> img_visible;
    uStrong< ::g::Fuse::Elements::InteractiveTransform*> imgtransform;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb102;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> img_visible_sub;
    uStrong< ::g::Fuse::Elements::InteractiveTransform*> imgtransform_sub;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb103;
    uStrong< ::g::Fuse::Controls::Rectangle*> indicator;
    uStrong< ::g::Fuse::Controls::Panel*> p1;
    uStrong< ::g::Fuse::Controls::Panel*> p4;
    uStrong< ::g::Fuse::Layouts::Column*> col1;
    uStrong< ::g::Fuse::Layouts::Column*> col2;
    uStrong< ::g::Fuse::Layouts::Column*> col3;
    uStrong< ::g::TabIcon*> c1;
    uStrong< ::g::TabHeader*> h1;
    uStrong< ::g::TabIcon*> c2;
    uStrong< ::g::TabHeader*> h2;
    uStrong< ::g::TabIcon*> c3;
    uStrong< ::g::TabHeader*> h3;
    uStrong< ::g::Fuse::Controls::PageControl*> nav;
    uStrong< ::g::Fuse::Animations::Attractor*> indicatorColorAttractor;
    uStrong< ::g::Fuse::Controls::Rectangle*> bgColor;
    uStrong< ::g::Fuse::Animations::Attractor*> bgColorAttractor;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> shrinkIndicatorWidth;
    uStrong< ::g::Fuse::Controls::Page*> page1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb104;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb105;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> popup1_visible;
    uStrong< ::g::Fuse::Controls::Rectangle*> popup;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb108;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb109;
    uStrong< ::g::Fuse::Controls::Rectangle*> remark;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb112;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb111;
    uStrong< ::g::Fuse::Controls::Page*> page2;
    uStrong< ::g::Fuse::Navigation::Router*> router_inq;
    uStrong< ::g::Fuse::Controls::Page*> page3;
    uStrong< ::g::Fuse::Navigation::Router*> router_po;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return s_inq01_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return s_inq01_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return s_inq01_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return s_inq01_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return s_inq01_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return s_inq01_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return s_inq01_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return s_inq01_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return s_inq01_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return s_inq01_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return s_inq01_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return s_inq01_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return s_inq01_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return s_inq01_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return s_inq01_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return s_inq01_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return s_inq01_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return s_inq01_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return s_inq01_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return s_inq01_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return s_inq01_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return s_inq01_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return s_inq01_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return s_inq01_typeof()->Init(), __selector22_; }
    static ::g::Uno::UX::Selector __selector23_;
    static ::g::Uno::UX::Selector& __selector23() { return s_inq01_typeof()->Init(), __selector23_; }
    static ::g::Uno::UX::Selector __selector24_;
    static ::g::Uno::UX::Selector& __selector24() { return s_inq01_typeof()->Init(), __selector24_; }
    static ::g::Uno::UX::Selector __selector25_;
    static ::g::Uno::UX::Selector& __selector25() { return s_inq01_typeof()->Init(), __selector25_; }
    static ::g::Uno::UX::Selector __selector26_;
    static ::g::Uno::UX::Selector& __selector26() { return s_inq01_typeof()->Init(), __selector26_; }
    static ::g::Uno::UX::Selector __selector27_;
    static ::g::Uno::UX::Selector& __selector27() { return s_inq01_typeof()->Init(), __selector27_; }
    static ::g::Uno::UX::Selector __selector28_;
    static ::g::Uno::UX::Selector& __selector28() { return s_inq01_typeof()->Init(), __selector28_; }
    static ::g::Uno::UX::Selector __selector29_;
    static ::g::Uno::UX::Selector& __selector29() { return s_inq01_typeof()->Init(), __selector29_; }
    static ::g::Uno::UX::Selector __selector30_;
    static ::g::Uno::UX::Selector& __selector30() { return s_inq01_typeof()->Init(), __selector30_; }
    static ::g::Uno::UX::Selector __selector31_;
    static ::g::Uno::UX::Selector& __selector31() { return s_inq01_typeof()->Init(), __selector31_; }
    static ::g::Uno::UX::Selector __selector32_;
    static ::g::Uno::UX::Selector& __selector32() { return s_inq01_typeof()->Init(), __selector32_; }
    static ::g::Uno::UX::Selector __selector33_;
    static ::g::Uno::UX::Selector& __selector33() { return s_inq01_typeof()->Init(), __selector33_; }
    static ::g::Uno::UX::Selector __selector34_;
    static ::g::Uno::UX::Selector& __selector34() { return s_inq01_typeof()->Init(), __selector34_; }
    static ::g::Uno::UX::Selector __selector35_;
    static ::g::Uno::UX::Selector& __selector35() { return s_inq01_typeof()->Init(), __selector35_; }
    static ::g::Uno::UX::Selector __selector36_;
    static ::g::Uno::UX::Selector& __selector36() { return s_inq01_typeof()->Init(), __selector36_; }
    static ::g::Uno::UX::Selector __selector37_;
    static ::g::Uno::UX::Selector& __selector37() { return s_inq01_typeof()->Init(), __selector37_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static s_inq01* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
