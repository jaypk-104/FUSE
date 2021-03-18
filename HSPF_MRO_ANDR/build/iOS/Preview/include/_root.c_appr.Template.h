// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/c_appr.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_appr;}
namespace g{struct c_appr__Template;}

namespace g{

// public partial sealed class c_appr.Template
// {
::g::Uno::UX::Template_type* c_appr__Template_typeof();
void c_appr__Template__ctor_1_fn(c_appr__Template* __this, ::g::c_appr* parent, ::g::c_appr* parentInstance);
void c_appr__Template__New1_fn(c_appr__Template* __this, uObject** __retval);
void c_appr__Template__New2_fn(::g::c_appr* parent, ::g::c_appr* parentInstance, c_appr__Template** __retval);

struct c_appr__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::c_appr*> __parent1;
    uWeak< ::g::c_appr*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Types_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_CurrentType_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Modes_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_CurrentMode_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Items_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb26;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb27;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb28;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_appr__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return c_appr__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return c_appr__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return c_appr__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return c_appr__Template_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return c_appr__Template_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return c_appr__Template_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return c_appr__Template_typeof()->Init(), __selector7_; }

    void ctor_1(::g::c_appr* parent, ::g::c_appr* parentInstance);
    static c_appr__Template* New2(::g::c_appr* parent, ::g::c_appr* parentInstance);
};
// }

} // ::g
