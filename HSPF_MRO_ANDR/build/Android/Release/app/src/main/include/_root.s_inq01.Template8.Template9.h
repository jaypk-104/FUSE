// This file was generated based on '.uno/ux15/s_inq01.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct s_inq01__Template8;}
namespace g{struct s_inq01__Template8__Template9;}

namespace g{

// public partial sealed class s_inq01.Template8.Template9
// {
::g::Uno::UX::Template_type* s_inq01__Template8__Template9_typeof();
void s_inq01__Template8__Template9__ctor_1_fn(s_inq01__Template8__Template9* __this, ::g::s_inq01__Template8* parent, ::g::Fuse::Controls::Page* parentInstance);
void s_inq01__Template8__Template9__New1_fn(s_inq01__Template8__Template9* __this, uObject** __retval);
void s_inq01__Template8__Template9__New2_fn(::g::s_inq01__Template8* parent, ::g::Fuse::Controls::Page* parentInstance, s_inq01__Template8__Template9** __retval);

struct s_inq01__Template8__Template9 : ::g::Uno::UX::Template
{
    uWeak< ::g::s_inq01__Template8*> __parent1;
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
    uStrong< ::g::Uno::UX::Property1*> temp9_Value_inst;
    uStrong< ::g::Fuse::Controls::Circle*> stsCircle;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb122;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return s_inq01__Template8__Template9_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return s_inq01__Template8__Template9_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return s_inq01__Template8__Template9_typeof()->Init(), __selector2_; }

    void ctor_1(::g::s_inq01__Template8* parent, ::g::Fuse::Controls::Page* parentInstance);
    static s_inq01__Template8__Template9* New2(::g::s_inq01__Template8* parent, ::g::Fuse::Controls::Page* parentInstance);
};
// }

} // ::g
