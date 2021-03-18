// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/c_inq.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_inq__Template1;}
namespace g{struct c_inq__Template1__Template3;}

namespace g{

// public partial sealed class c_inq.Template1.Template3
// {
::g::Uno::UX::Template_type* c_inq__Template1__Template3_typeof();
void c_inq__Template1__Template3__ctor_1_fn(c_inq__Template1__Template3* __this, ::g::c_inq__Template1* parent, ::g::Fuse::Controls::Page* parentInstance);
void c_inq__Template1__Template3__New1_fn(c_inq__Template1__Template3* __this, uObject** __retval);
void c_inq__Template1__Template3__New2_fn(::g::c_inq__Template1* parent, ::g::Fuse::Controls::Page* parentInstance, c_inq__Template1__Template3** __retval);

struct c_inq__Template1__Template3 : ::g::Uno::UX::Template
{
    uWeak< ::g::c_inq__Template1*> __parent1;
    uWeak< ::g::Fuse::Controls::Page*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb54;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_inq__Template1__Template3_typeof()->Init(), __selector0_; }

    void ctor_1(::g::c_inq__Template1* parent, ::g::Fuse::Controls::Page* parentInstance);
    static c_inq__Template1__Template3* New2(::g::c_inq__Template1* parent, ::g::Fuse::Controls::Page* parentInstance);
};
// }

} // ::g
