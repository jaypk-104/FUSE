// This file was generated based on '.uno/ux15/SubPage_appr.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct SubPage_appr;}
namespace g{struct SubPage_appr__Template1;}

namespace g{

// public partial sealed class SubPage_appr.Template1
// {
::g::Uno::UX::Template_type* SubPage_appr__Template1_typeof();
void SubPage_appr__Template1__ctor_1_fn(SubPage_appr__Template1* __this, ::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance);
void SubPage_appr__Template1__New1_fn(SubPage_appr__Template1* __this, uObject** __retval);
void SubPage_appr__Template1__New2_fn(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance, SubPage_appr__Template1** __retval);

struct SubPage_appr__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::SubPage_appr*> __parent1;
    uWeak< ::g::SubPage_appr*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return SubPage_appr__Template1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return SubPage_appr__Template1_typeof()->Init(), __selector1_; }

    void ctor_1(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance);
    static SubPage_appr__Template1* New2(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance);
};
// }

} // ::g
