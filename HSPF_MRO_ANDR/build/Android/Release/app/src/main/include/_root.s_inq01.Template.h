// This file was generated based on '.uno/ux15/s_inq01.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Confirm;}
namespace g{struct s_inq01;}
namespace g{struct s_inq01__Template;}

namespace g{

// public partial sealed class s_inq01.Template
// {
::g::Uno::UX::Template_type* s_inq01__Template_typeof();
void s_inq01__Template__ctor_1_fn(s_inq01__Template* __this, ::g::s_inq01* parent, ::g::s_inq01* parentInstance);
void s_inq01__Template__New1_fn(s_inq01__Template* __this, uObject** __retval);
void s_inq01__Template__New2_fn(::g::s_inq01* parent, ::g::s_inq01* parentInstance, s_inq01__Template** __retval);

struct s_inq01__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::s_inq01*> __parent1;
    uWeak< ::g::s_inq01*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> sp_Alignment_inst;
    uStrong< ::g::Uno::UX::Property1*> menuButtons_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> refundScaling_Factor_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> confirmAbandon_Show_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp10_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp11_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp12_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp13_Value_inst;
    uStrong< ::g::Confirm*> confirmAbandon;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb106;
    uStrong< ::g::Fuse::Controls::Grid*> menuButtons;
    uStrong< ::g::Fuse::Controls::Panel*> sp;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> menuLayout;
    uStrong< ::g::Fuse::Scaling*> refundScaling;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb107;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return s_inq01__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return s_inq01__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return s_inq01__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return s_inq01__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return s_inq01__Template_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return s_inq01__Template_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return s_inq01__Template_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return s_inq01__Template_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return s_inq01__Template_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return s_inq01__Template_typeof()->Init(), __selector9_; }

    void ctor_1(::g::s_inq01* parent, ::g::s_inq01* parentInstance);
    static s_inq01__Template* New2(::g::s_inq01* parent, ::g::s_inq01* parentInstance);
};
// }

} // ::g
