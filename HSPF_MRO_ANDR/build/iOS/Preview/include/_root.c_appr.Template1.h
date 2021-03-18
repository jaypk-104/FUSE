// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/c_appr.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_appr;}
namespace g{struct c_appr__Template1;}

namespace g{

// public partial sealed class c_appr.Template1
// {
::g::Uno::UX::Template_type* c_appr__Template1_typeof();
void c_appr__Template1__ctor_1_fn(c_appr__Template1* __this, ::g::c_appr* parent, ::g::c_appr* parentInstance);
void c_appr__Template1__New1_fn(c_appr__Template1* __this, uObject** __retval);
void c_appr__Template1__New2_fn(::g::c_appr* parent, ::g::c_appr* parentInstance, c_appr__Template1** __retval);

struct c_appr__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::c_appr*> __parent1;
    uWeak< ::g::c_appr*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_appr__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::c_appr* parent, ::g::c_appr* parentInstance);
    static c_appr__Template1* New2(::g::c_appr* parent, ::g::c_appr* parentInstance);
};
// }

} // ::g
