// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/iOS/DatePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Native.IDatePickerView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Native{namespace iOS{struct DatePickerView;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Time{struct LocalDate;}}}

namespace g{
namespace Native{
namespace iOS{

// internal sealed extern class DatePickerView
// {
struct DatePickerView_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Native::IDatePickerView interface3;
};

DatePickerView_type* DatePickerView_typeof();
void DatePickerView__ctor_5_fn(DatePickerView* __this, uObject* host);
void DatePickerView__Create_fn(::g::ObjC::Object** __retval);
void DatePickerView__get_CurrentDate_fn(DatePickerView* __this, ::g::Uno::Time::LocalDate* __retval);
void DatePickerView__set_CurrentDate_fn(DatePickerView* __this, ::g::Uno::Time::LocalDate* value);
void DatePickerView__Dispose_fn(DatePickerView* __this);
void DatePickerView__set_MaxDate_fn(DatePickerView* __this, ::g::Uno::Time::LocalDate* value);
void DatePickerView__set_MinDate_fn(DatePickerView* __this, ::g::Uno::Time::LocalDate* value);
void DatePickerView__New3_fn(uObject* host, DatePickerView** __retval);
void DatePickerView__OnDateChanged_fn(DatePickerView* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* args);

struct DatePickerView : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong<uObject*> _host;
    uStrong<uObject*> _valueChangedEvent;

    void ctor_5(uObject* host);
    ::g::Uno::Time::LocalDate CurrentDate();
    void CurrentDate(::g::Uno::Time::LocalDate value);
    void MaxDate(::g::Uno::Time::LocalDate value);
    void MinDate(::g::Uno::Time::LocalDate value);
    void OnDateChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* args);
    static ::g::ObjC::Object* Create();
    static DatePickerView* New3(uObject* host);
};
// }

}}} // ::g::Native::iOS
