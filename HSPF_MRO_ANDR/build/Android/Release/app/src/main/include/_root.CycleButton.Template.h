// This file was generated based on '.uno/ux15/CycleButton.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CycleButton;}
namespace g{struct CycleButton__Template;}

namespace g{

// public partial sealed class CycleButton.Template
// {
::g::Uno::UX::Template_type* CycleButton__Template_typeof();
void CycleButton__Template__ctor_1_fn(CycleButton__Template* __this, ::g::CycleButton* parent, ::g::CycleButton* parentInstance);
void CycleButton__Template__New1_fn(CycleButton__Template* __this, uObject** __retval);
void CycleButton__Template__New2_fn(::g::CycleButton* parent, ::g::CycleButton* parentInstance, CycleButton__Template** __retval);

struct CycleButton__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::CycleButton*> __parent1;
    uWeak< ::g::CycleButton*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> __self_IsActive_inst1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CycleButton__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::CycleButton* parent, ::g::CycleButton* parentInstance);
    static CycleButton__Template* New2(::g::CycleButton* parent, ::g::CycleButton* parentInstance);
};
// }

} // ::g
