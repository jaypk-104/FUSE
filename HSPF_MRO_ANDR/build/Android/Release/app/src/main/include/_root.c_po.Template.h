// This file was generated based on '.uno/ux15/c_po.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_po;}
namespace g{struct c_po__Template;}

namespace g{

// public partial sealed class c_po.Template
// {
::g::Uno::UX::Template_type* c_po__Template_typeof();
void c_po__Template__ctor_1_fn(c_po__Template* __this, ::g::c_po* parent, ::g::c_po* parentInstance);
void c_po__Template__New1_fn(c_po__Template* __this, uObject** __retval);
void c_po__Template__New2_fn(::g::c_po* parent, ::g::c_po* parentInstance, c_po__Template** __retval);

struct c_po__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::c_po*> __parent1;
    uWeak< ::g::c_po*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Items_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb73;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb74;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_po__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return c_po__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return c_po__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return c_po__Template_typeof()->Init(), __selector3_; }

    void ctor_1(::g::c_po* parent, ::g::c_po* parentInstance);
    static c_po__Template* New2(::g::c_po* parent, ::g::c_po* parentInstance);
};
// }

} // ::g
