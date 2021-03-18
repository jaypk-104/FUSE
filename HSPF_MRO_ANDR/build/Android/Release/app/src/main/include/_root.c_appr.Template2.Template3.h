// This file was generated based on '.uno/ux15/c_appr.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_appr__Template2;}
namespace g{struct c_appr__Template2__Template3;}

namespace g{

// public partial sealed class c_appr.Template2.Template3
// {
::g::Uno::UX::Template_type* c_appr__Template2__Template3_typeof();
void c_appr__Template2__Template3__ctor_1_fn(c_appr__Template2__Template3* __this, ::g::c_appr__Template2* parent, ::g::Fuse::Controls::Page* parentInstance);
void c_appr__Template2__Template3__New1_fn(c_appr__Template2__Template3* __this, uObject** __retval);
void c_appr__Template2__Template3__New2_fn(::g::c_appr__Template2* parent, ::g::Fuse::Controls::Page* parentInstance, c_appr__Template2__Template3** __retval);

struct c_appr__Template2__Template3 : ::g::Uno::UX::Template
{
    uWeak< ::g::c_appr__Template2*> __parent1;
    uWeak< ::g::Fuse::Controls::Page*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> stsCircle_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Fuse::Controls::Circle*> stsCircle;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb33;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_appr__Template2__Template3_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return c_appr__Template2__Template3_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return c_appr__Template2__Template3_typeof()->Init(), __selector2_; }

    void ctor_1(::g::c_appr__Template2* parent, ::g::Fuse::Controls::Page* parentInstance);
    static c_appr__Template2__Template3* New2(::g::c_appr__Template2* parent, ::g::Fuse::Controls::Page* parentInstance);
};
// }

} // ::g
