// This file was generated based on '.uno/ux15/MonthView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MonthView;}
namespace g{struct MonthView__Template1;}

namespace g{

// public partial sealed class MonthView.Template1
// {
::g::Uno::UX::Template_type* MonthView__Template1_typeof();
void MonthView__Template1__ctor_1_fn(MonthView__Template1* __this, ::g::MonthView* parent, ::g::MonthView* parentInstance);
void MonthView__Template1__New1_fn(MonthView__Template1* __this, uObject** __retval);
void MonthView__Template1__New2_fn(::g::MonthView* parent, ::g::MonthView* parentInstance, MonthView__Template1** __retval);

struct MonthView__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::MonthView*> __parent1;
    uWeak< ::g::MonthView*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MonthView__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::MonthView* parent, ::g::MonthView* parentInstance);
    static MonthView__Template1* New2(::g::MonthView* parent, ::g::MonthView* parentInstance);
};
// }

} // ::g
