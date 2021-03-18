// This file was generated based on Projects/NativeControls/DatePicker.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Native{struct DatePickerBase;}}
namespace g{namespace Native{struct DatePickerBase__CurrentDateProperty;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Native{

// private sealed class DatePickerBase.CurrentDateProperty
// {
::g::Uno::UX::Property1_type* DatePickerBase__CurrentDateProperty_typeof();
void DatePickerBase__CurrentDateProperty__ctor_3_fn(DatePickerBase__CurrentDateProperty* __this, ::g::Native::DatePickerBase* datePicker);
void DatePickerBase__CurrentDateProperty__Get1_fn(DatePickerBase__CurrentDateProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void DatePickerBase__CurrentDateProperty__New1_fn(::g::Native::DatePickerBase* datePicker, DatePickerBase__CurrentDateProperty** __retval);
void DatePickerBase__CurrentDateProperty__get_Object_fn(DatePickerBase__CurrentDateProperty* __this, ::g::Uno::UX::PropertyObject** __retval);
void DatePickerBase__CurrentDateProperty__Set1_fn(DatePickerBase__CurrentDateProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString* value, uObject* origin);
void DatePickerBase__CurrentDateProperty__get_SupportsOriginSetter_fn(DatePickerBase__CurrentDateProperty* __this, bool* __retval);

struct DatePickerBase__CurrentDateProperty : ::g::Uno::UX::Property1
{
    uStrong< ::g::Native::DatePickerBase*> _dp;

    void ctor_3(::g::Native::DatePickerBase* datePicker);
    static DatePickerBase__CurrentDateProperty* New1(::g::Native::DatePickerBase* datePicker);
};
// }

}} // ::g::Native
