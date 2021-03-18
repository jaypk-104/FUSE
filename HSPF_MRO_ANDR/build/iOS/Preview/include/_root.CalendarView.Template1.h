// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/CalendarView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CalendarView;}
namespace g{struct CalendarView__Template1;}

namespace g{

// public partial sealed class CalendarView.Template1
// {
::g::Uno::UX::Template_type* CalendarView__Template1_typeof();
void CalendarView__Template1__ctor_1_fn(CalendarView__Template1* __this, ::g::CalendarView* parent, ::g::CalendarView* parentInstance);
void CalendarView__Template1__New1_fn(CalendarView__Template1* __this, uObject** __retval);
void CalendarView__Template1__New2_fn(::g::CalendarView* parent, ::g::CalendarView* parentInstance, CalendarView__Template1** __retval);

struct CalendarView__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::CalendarView*> __parent1;
    uWeak< ::g::CalendarView*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CalendarView__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::CalendarView* parent, ::g::CalendarView* parentInstance);
    static CalendarView__Template1* New2(::g::CalendarView* parent, ::g::CalendarView* parentInstance);
};
// }

} // ::g
