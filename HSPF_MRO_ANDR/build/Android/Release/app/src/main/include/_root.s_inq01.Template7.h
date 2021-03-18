// This file was generated based on '.uno/ux15/s_inq01.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct s_inq01;}
namespace g{struct s_inq01__Template7;}

namespace g{

// public partial sealed class s_inq01.Template7
// {
::g::Uno::UX::Template_type* s_inq01__Template7_typeof();
void s_inq01__Template7__ctor_1_fn(s_inq01__Template7* __this, ::g::s_inq01* parent, ::g::s_inq01* parentInstance);
void s_inq01__Template7__New1_fn(s_inq01__Template7* __this, uObject** __retval);
void s_inq01__Template7__New2_fn(::g::s_inq01* parent, ::g::s_inq01* parentInstance, s_inq01__Template7** __retval);

struct s_inq01__Template7 : ::g::Uno::UX::Template
{
    uWeak< ::g::s_inq01*> __parent1;
    uWeak< ::g::s_inq01*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return s_inq01__Template7_typeof()->Init(), __selector0_; }

    void ctor_1(::g::s_inq01* parent, ::g::s_inq01* parentInstance);
    static s_inq01__Template7* New2(::g::s_inq01* parent, ::g::s_inq01* parentInstance);
};
// }

} // ::g
