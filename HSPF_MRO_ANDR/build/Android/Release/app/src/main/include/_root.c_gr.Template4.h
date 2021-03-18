// This file was generated based on '.uno/ux15/c_gr.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_gr;}
namespace g{struct c_gr__Template4;}

namespace g{

// public partial sealed class c_gr.Template4
// {
::g::Uno::UX::Template_type* c_gr__Template4_typeof();
void c_gr__Template4__ctor_1_fn(c_gr__Template4* __this, ::g::c_gr* parent, ::g::c_gr* parentInstance);
void c_gr__Template4__New1_fn(c_gr__Template4* __this, uObject** __retval);
void c_gr__Template4__New2_fn(::g::c_gr* parent, ::g::c_gr* parentInstance, c_gr__Template4** __retval);

struct c_gr__Template4 : ::g::Uno::UX::Template
{
    uWeak< ::g::c_gr*> __parent1;
    uWeak< ::g::c_gr*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_gr__Template4_typeof()->Init(), __selector0_; }

    void ctor_1(::g::c_gr* parent, ::g::c_gr* parentInstance);
    static c_gr__Template4* New2(::g::c_gr* parent, ::g::c_gr* parentInstance);
};
// }

} // ::g
