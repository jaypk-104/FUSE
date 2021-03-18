// This file was generated based on '.uno/ux15/LoginPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LoginPage;}
namespace g{struct LoginPage__Template5;}

namespace g{

// public partial sealed class LoginPage.Template5
// {
::g::Uno::UX::Template_type* LoginPage__Template5_typeof();
void LoginPage__Template5__ctor_1_fn(LoginPage__Template5* __this, ::g::LoginPage* parent, ::g::LoginPage* parentInstance);
void LoginPage__Template5__New1_fn(LoginPage__Template5* __this, uObject** __retval);
void LoginPage__Template5__New2_fn(::g::LoginPage* parent, ::g::LoginPage* parentInstance, LoginPage__Template5** __retval);

struct LoginPage__Template5 : ::g::Uno::UX::Template
{
    uWeak< ::g::LoginPage*> __parent1;
    uWeak< ::g::LoginPage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return LoginPage__Template5_typeof()->Init(), __selector0_; }

    void ctor_1(::g::LoginPage* parent, ::g::LoginPage* parentInstance);
    static LoginPage__Template5* New2(::g::LoginPage* parent, ::g::LoginPage* parentInstance);
};
// }

} // ::g
