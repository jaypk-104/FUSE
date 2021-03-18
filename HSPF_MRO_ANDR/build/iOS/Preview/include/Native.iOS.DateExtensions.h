// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/iOS/DateExtensions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Native{namespace iOS{struct DateExtensions;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Time{struct LocalDate;}}}
namespace g{namespace Uno{namespace Time{struct LocalTime;}}}

namespace g{
namespace Native{
namespace iOS{

// internal static extern class DateExtensions
// {
uClassType* DateExtensions_typeof();
void DateExtensions__GetDate_fn(::g::ObjC::Object* handle, int32_t* hour, int32_t* minute, int32_t* year, int32_t* month, int32_t* day);
void DateExtensions__GetLocalDate_fn(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate* __retval);
void DateExtensions__GetLocalTime_fn(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalTime* __retval);
void DateExtensions__MakeNSDate_fn(int32_t* hour, int32_t* minute, int32_t* year, int32_t* month, int32_t* day, ::g::ObjC::Object** __retval);
void DateExtensions__SetDate_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* nsDateHandle);
void DateExtensions__SetDate1_fn(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate* date);
void DateExtensions__SetMaxDate_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* nsDateHandle);
void DateExtensions__SetMaxDate1_fn(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate* date);
void DateExtensions__SetMinDate_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* nsDateHandle);
void DateExtensions__SetMinDate1_fn(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate* date);
void DateExtensions__SetTime_fn(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalTime* time);
void DateExtensions__ToNSDate_fn(::g::Uno::Time::LocalDate* date, ::g::ObjC::Object** __retval);
void DateExtensions__ToNSDate1_fn(::g::Uno::Time::LocalTime* time, ::g::ObjC::Object** __retval);

struct DateExtensions : uObject
{
    static void GetDate(::g::ObjC::Object* handle, int32_t* hour, int32_t* minute, int32_t* year, int32_t* month, int32_t* day);
    static ::g::Uno::Time::LocalDate GetLocalDate(::g::ObjC::Object* datePicker);
    static ::g::Uno::Time::LocalTime GetLocalTime(::g::ObjC::Object* datePicker);
    static ::g::ObjC::Object* MakeNSDate(int32_t hour, int32_t minute, int32_t year, int32_t month, int32_t day);
    static void SetDate(::g::ObjC::Object* handle, ::g::ObjC::Object* nsDateHandle);
    static void SetDate1(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate date);
    static void SetMaxDate(::g::ObjC::Object* handle, ::g::ObjC::Object* nsDateHandle);
    static void SetMaxDate1(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate date);
    static void SetMinDate(::g::ObjC::Object* handle, ::g::ObjC::Object* nsDateHandle);
    static void SetMinDate1(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate date);
    static void SetTime(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalTime time);
    static ::g::ObjC::Object* ToNSDate(::g::Uno::Time::LocalDate date);
    static ::g::ObjC::Object* ToNSDate1(::g::Uno::Time::LocalTime time);
};
// }

}}} // ::g::Native::iOS
