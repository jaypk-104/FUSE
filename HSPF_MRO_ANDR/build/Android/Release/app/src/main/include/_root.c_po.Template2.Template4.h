// This file was generated based on '.uno/ux15/c_po.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_po__Template2;}
namespace g{struct c_po__Template2__Template4;}

namespace g{

// public partial sealed class c_po.Template2.Template4
// {
::g::Uno::UX::Template_type* c_po__Template2__Template4_typeof();
void c_po__Template2__Template4__ctor_1_fn(c_po__Template2__Template4* __this, ::g::c_po__Template2* parent, ::g::Fuse::Controls::Page* parentInstance);
void c_po__Template2__Template4__New1_fn(c_po__Template2__Template4* __this, uObject** __retval);
void c_po__Template2__Template4__New2_fn(::g::c_po__Template2* parent, ::g::Fuse::Controls::Page* parentInstance, c_po__Template2__Template4** __retval);

struct c_po__Template2__Template4 : ::g::Uno::UX::Template
{
    uWeak< ::g::c_po__Template2*> __parent1;
    uWeak< ::g::Fuse::Controls::Page*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> __self_Color_inst1;
    uStrong< ::g::Uno::UX::Property1*> checkImage3_Opacity_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb88;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_po__Template2__Template4_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return c_po__Template2__Template4_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return c_po__Template2__Template4_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return c_po__Template2__Template4_typeof()->Init(), __selector3_; }

    void ctor_1(::g::c_po__Template2* parent, ::g::Fuse::Controls::Page* parentInstance);
    static c_po__Template2__Template4* New2(::g::c_po__Template2* parent, ::g::Fuse::Controls::Page* parentInstance);
};
// }

} // ::g
