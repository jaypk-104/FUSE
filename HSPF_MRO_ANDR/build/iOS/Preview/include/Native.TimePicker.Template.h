// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/.uno/ux15/Native.TimePicker.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Native{struct TimePicker;}}
namespace g{namespace Native{struct TimePicker__Template;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Native{

// public partial sealed class TimePicker.Template
// {
::g::Uno::UX::Template_type* TimePicker__Template_typeof();
void TimePicker__Template__ctor_1_fn(TimePicker__Template* __this, ::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance);
void TimePicker__Template__New1_fn(TimePicker__Template* __this, uObject** __retval);
void TimePicker__Template__New2_fn(::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance, TimePicker__Template** __retval);

struct TimePicker__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Native::TimePicker*> __parent1;
    uWeak< ::g::Native::TimePicker*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TimePicker__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance);
    static TimePicker__Template* New2(::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance);
};
// }

}} // ::g::Native
