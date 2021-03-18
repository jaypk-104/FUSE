// This file was generated based on '.uno/ux15/c_po.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_po__Template2;}
namespace g{struct c_po__Template2__Template10;}

namespace g{

// public partial sealed class c_po.Template2.Template10
// {
::g::Uno::UX::Template_type* c_po__Template2__Template10_typeof();
void c_po__Template2__Template10__ctor_1_fn(c_po__Template2__Template10* __this, ::g::c_po__Template2* parent, ::g::Fuse::Controls::Page* parentInstance);
void c_po__Template2__Template10__New1_fn(c_po__Template2__Template10* __this, uObject** __retval);
void c_po__Template2__Template10__New2_fn(::g::c_po__Template2* parent, ::g::Fuse::Controls::Page* parentInstance, c_po__Template2__Template10** __retval);

struct c_po__Template2__Template10 : ::g::Uno::UX::Template
{
    uWeak< ::g::c_po__Template2*> __parent1;
    uWeak< ::g::Fuse::Controls::Page*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> __self_Value_inst1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_po__Template2__Template10_typeof()->Init(), __selector0_; }

    void ctor_1(::g::c_po__Template2* parent, ::g::Fuse::Controls::Page* parentInstance);
    static c_po__Template2__Template10* New2(::g::c_po__Template2* parent, ::g::Fuse::Controls::Page* parentInstance);
};
// }

} // ::g
