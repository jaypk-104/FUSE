// This file was generated based on '.uno/ux15/c_inq.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_inq__Template;}
namespace g{struct c_inq__Template__Template1;}

namespace g{

// public partial sealed class c_inq.Template.Template1
// {
::g::Uno::UX::Template_type* c_inq__Template__Template1_typeof();
void c_inq__Template__Template1__ctor_1_fn(c_inq__Template__Template1* __this, ::g::c_inq__Template* parent, ::g::Fuse::Controls::Page* parentInstance);
void c_inq__Template__Template1__New1_fn(c_inq__Template__Template1* __this, uObject** __retval);
void c_inq__Template__Template1__New2_fn(::g::c_inq__Template* parent, ::g::Fuse::Controls::Page* parentInstance, c_inq__Template__Template1** __retval);

struct c_inq__Template__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::c_inq__Template*> __parent1;
    uWeak< ::g::Fuse::Controls::Page*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_inq__Template__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::c_inq__Template* parent, ::g::Fuse::Controls::Page* parentInstance);
    static c_inq__Template__Template1* New2(::g::c_inq__Template* parent, ::g::Fuse::Controls::Page* parentInstance);
};
// }

} // ::g
