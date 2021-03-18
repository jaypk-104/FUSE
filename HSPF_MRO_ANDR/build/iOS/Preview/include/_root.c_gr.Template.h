// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/c_gr.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_gr;}
namespace g{struct c_gr__Template;}

namespace g{

// public partial sealed class c_gr.Template
// {
::g::Uno::UX::Template_type* c_gr__Template_typeof();
void c_gr__Template__ctor_1_fn(c_gr__Template* __this, ::g::c_gr* parent, ::g::c_gr* parentInstance);
void c_gr__Template__New1_fn(c_gr__Template* __this, uObject** __retval);
void c_gr__Template__New2_fn(::g::c_gr* parent, ::g::c_gr* parentInstance, c_gr__Template** __retval);

struct c_gr__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::c_gr*> __parent1;
    uWeak< ::g::c_gr*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_gr__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::c_gr* parent, ::g::c_gr* parentInstance);
    static c_gr__Template* New2(::g::c_gr* parent, ::g::c_gr* parentInstance);
};
// }

} // ::g
