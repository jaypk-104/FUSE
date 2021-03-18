// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/CycleButton2.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CycleButton2;}
namespace g{struct CycleButton2__Template;}

namespace g{

// public partial sealed class CycleButton2.Template
// {
::g::Uno::UX::Template_type* CycleButton2__Template_typeof();
void CycleButton2__Template__ctor_1_fn(CycleButton2__Template* __this, ::g::CycleButton2* parent, ::g::CycleButton2* parentInstance);
void CycleButton2__Template__New1_fn(CycleButton2__Template* __this, uObject** __retval);
void CycleButton2__Template__New2_fn(::g::CycleButton2* parent, ::g::CycleButton2* parentInstance, CycleButton2__Template** __retval);

struct CycleButton2__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::CycleButton2*> __parent1;
    uWeak< ::g::CycleButton2*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> __self_IsActive_inst1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CycleButton2__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::CycleButton2* parent, ::g::CycleButton2* parentInstance);
    static CycleButton2__Template* New2(::g::CycleButton2* parent, ::g::CycleButton2* parentInstance);
};
// }

} // ::g
