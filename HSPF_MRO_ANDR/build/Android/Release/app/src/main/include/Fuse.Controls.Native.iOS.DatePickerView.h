// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.DatePicker/1.12.0/iOS/DatePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct DatePickerView;}}}}}
namespace g{namespace Fuse{namespace Controls{struct DatePicker;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class DatePickerView
// {
uType* DatePickerView_typeof();
void DatePickerView__ctor__fn(DatePickerView* __this, ::g::Fuse::Controls::DatePicker* host);
void DatePickerView__New1_fn(::g::Fuse::Controls::DatePicker* host, DatePickerView** __retval);

struct DatePickerView : uObject
{
    void ctor_(::g::Fuse::Controls::DatePicker* host);
    static DatePickerView* New1(::g::Fuse::Controls::DatePicker* host);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
