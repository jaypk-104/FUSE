// This file was generated based on '.uno/ux15/c_inq.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_inq__Template1;}
namespace g{struct c_inq__Template1__Template2;}

namespace g{

// public partial sealed class c_inq.Template1.Template2
// {
::g::Uno::UX::Template_type* c_inq__Template1__Template2_typeof();
void c_inq__Template1__Template2__ctor_1_fn(c_inq__Template1__Template2* __this, ::g::c_inq__Template1* parent, ::g::Fuse::Controls::Page* parentInstance);
void c_inq__Template1__Template2__New1_fn(c_inq__Template1__Template2* __this, uObject** __retval);
void c_inq__Template1__Template2__New2_fn(::g::c_inq__Template1* parent, ::g::Fuse::Controls::Page* parentInstance, c_inq__Template1__Template2** __retval);

struct c_inq__Template1__Template2 : ::g::Uno::UX::Template
{
    uWeak< ::g::c_inq__Template1*> __parent1;
    uWeak< ::g::Fuse::Controls::Page*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> __self_USR_NM_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_USR_ID_inst1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_inq__Template1__Template2_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return c_inq__Template1__Template2_typeof()->Init(), __selector1_; }

    void ctor_1(::g::c_inq__Template1* parent, ::g::Fuse::Controls::Page* parentInstance);
    static c_inq__Template1__Template2* New2(::g::c_inq__Template1* parent, ::g::Fuse::Controls::Page* parentInstance);
};
// }

} // ::g
