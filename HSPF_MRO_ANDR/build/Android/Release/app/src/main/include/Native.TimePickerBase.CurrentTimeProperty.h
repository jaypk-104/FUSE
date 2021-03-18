// This file was generated based on Projects/NativeControls/TimePicker.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Native{struct TimePickerBase;}}
namespace g{namespace Native{struct TimePickerBase__CurrentTimeProperty;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Native{

// private sealed class TimePickerBase.CurrentTimeProperty
// {
::g::Uno::UX::Property1_type* TimePickerBase__CurrentTimeProperty_typeof();
void TimePickerBase__CurrentTimeProperty__ctor_3_fn(TimePickerBase__CurrentTimeProperty* __this, ::g::Native::TimePickerBase* timePicker);
void TimePickerBase__CurrentTimeProperty__Get1_fn(TimePickerBase__CurrentTimeProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void TimePickerBase__CurrentTimeProperty__New1_fn(::g::Native::TimePickerBase* timePicker, TimePickerBase__CurrentTimeProperty** __retval);
void TimePickerBase__CurrentTimeProperty__get_Object_fn(TimePickerBase__CurrentTimeProperty* __this, ::g::Uno::UX::PropertyObject** __retval);
void TimePickerBase__CurrentTimeProperty__Set1_fn(TimePickerBase__CurrentTimeProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString* value, uObject* origin);
void TimePickerBase__CurrentTimeProperty__get_SupportsOriginSetter_fn(TimePickerBase__CurrentTimeProperty* __this, bool* __retval);

struct TimePickerBase__CurrentTimeProperty : ::g::Uno::UX::Property1
{
    uStrong< ::g::Native::TimePickerBase*> _tp;

    void ctor_3(::g::Native::TimePickerBase* timePicker);
    static TimePickerBase__CurrentTimeProperty* New1(::g::Native::TimePickerBase* timePicker);
};
// }

}} // ::g::Native
