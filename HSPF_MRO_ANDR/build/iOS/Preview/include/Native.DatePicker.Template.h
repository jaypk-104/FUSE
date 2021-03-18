// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/.uno/ux15/Native.DatePicker.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Native{struct DatePicker;}}
namespace g{namespace Native{struct DatePicker__Template;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Native{

// public partial sealed class DatePicker.Template
// {
::g::Uno::UX::Template_type* DatePicker__Template_typeof();
void DatePicker__Template__ctor_1_fn(DatePicker__Template* __this, ::g::Native::DatePicker* parent, ::g::Native::DatePicker* parentInstance);
void DatePicker__Template__New1_fn(DatePicker__Template* __this, uObject** __retval);
void DatePicker__Template__New2_fn(::g::Native::DatePicker* parent, ::g::Native::DatePicker* parentInstance, DatePicker__Template** __retval);

struct DatePicker__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Native::DatePicker*> __parent1;
    uWeak< ::g::Native::DatePicker*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DatePicker__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::Native::DatePicker* parent, ::g::Native::DatePicker* parentInstance);
    static DatePicker__Template* New2(::g::Native::DatePicker* parent, ::g::Native::DatePicker* parentInstance);
};
// }

}} // ::g::Native
