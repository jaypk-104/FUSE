// This file was generated based on '.uno/ux15/c_inq.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct Busy;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_inq;}
namespace g{struct c_inq__Template;}
namespace g{struct MyLoadingIndicator;}

namespace g{

// public partial sealed class c_inq.Template
// {
::g::Uno::UX::Template_type* c_inq__Template_typeof();
void c_inq__Template__ctor_1_fn(c_inq__Template* __this, ::g::c_inq* parent, ::g::c_inq* parentInstance);
void c_inq__Template__New1_fn(c_inq__Template* __this, uObject** __retval);
void c_inq__Template__New2_fn(::g::c_inq* parent, ::g::c_inq* parentInstance, c_inq__Template** __retval);

struct c_inq__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::c_inq*> __parent1;
    uWeak< ::g::c_inq*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> isBusy_IsActive_inst;
    uStrong< ::g::Uno::UX::Property1*> loadingPanel_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> _222_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> inq_hope_dt_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Items_inst;
    uStrong< ::g::Fuse::Triggers::Busy*> isBusy;
    uStrong< ::g::MyLoadingIndicator*> loadingPanel;
    uStrong< ::g::Fuse::Controls::Text*> _222;
    uStrong< ::g::Fuse::Navigation::Router*> router_cal;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb42;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb43;
    uStrong< ::g::Fuse::Controls::Text*> inq_hope_dt;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb44;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb45;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb52;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_inq__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return c_inq__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return c_inq__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return c_inq__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return c_inq__Template_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return c_inq__Template_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return c_inq__Template_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return c_inq__Template_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return c_inq__Template_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return c_inq__Template_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return c_inq__Template_typeof()->Init(), __selector10_; }

    void ctor_1(::g::c_inq* parent, ::g::c_inq* parentInstance);
    static c_inq__Template* New2(::g::c_inq* parent, ::g::c_inq* parentInstance);
};
// }

} // ::g
