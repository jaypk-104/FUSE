// This file was generated based on '.uno/ux15/c_inq.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct c_inq__Template;}
namespace g{struct c_inq__Template__Template2;}

namespace g{

// public partial sealed class c_inq.Template.Template2
// {
::g::Uno::UX::Template_type* c_inq__Template__Template2_typeof();
void c_inq__Template__Template2__ctor_1_fn(c_inq__Template__Template2* __this, ::g::c_inq__Template* parent, ::g::Fuse::Controls::Page* parentInstance);
void c_inq__Template__Template2__New1_fn(c_inq__Template__Template2* __this, uObject** __retval);
void c_inq__Template__Template2__New2_fn(::g::c_inq__Template* parent, ::g::Fuse::Controls::Page* parentInstance, c_inq__Template__Template2** __retval);

struct c_inq__Template__Template2 : ::g::Uno::UX::Template
{
    uWeak< ::g::c_inq__Template*> __parent1;
    uWeak< ::g::Fuse::Controls::Page*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb46;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb47;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb48;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb49;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb50;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb51;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return c_inq__Template__Template2_typeof()->Init(), __selector0_; }

    void ctor_1(::g::c_inq__Template* parent, ::g::Fuse::Controls::Page* parentInstance);
    static c_inq__Template__Template2* New2(::g::c_inq__Template* parent, ::g::Fuse::Controls::Page* parentInstance);
};
// }

} // ::g
