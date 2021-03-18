// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/iOS/DateExtensions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Native.iOS.DateExtensions.h>
#include <ObjC.Object.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>
#include <Uno.Time.LocalDate.h>
#include <Uno.Time.LocalTime.h>

namespace g{
namespace Native{
namespace iOS{

// internal static extern class DateExtensions
// {
static void DateExtensions_build(uType* type)
{
}

uClassType* DateExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Native.iOS.DateExtensions", options);
    type->fp_build_ = DateExtensions_build;
    return type;
}

// private static void GetDate(ObjC.Object handle, int& hour, int& minute, int& year, int& month, int& day)
void DateExtensions__GetDate_fn(::g::ObjC::Object* handle, int32_t* hour, int32_t* minute, int32_t* year, int32_t* month, int32_t* day)
{
    DateExtensions::GetDate(handle, hour, minute, year, month, day);
}

// public static Uno.Time.LocalDate GetLocalDate(ObjC.Object datePicker)
void DateExtensions__GetLocalDate_fn(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate* __retval)
{
    *__retval = DateExtensions::GetLocalDate(datePicker);
}

// public static Uno.Time.LocalTime GetLocalTime(ObjC.Object datePicker)
void DateExtensions__GetLocalTime_fn(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalTime* __retval)
{
    *__retval = DateExtensions::GetLocalTime(datePicker);
}

// private static ObjC.Object MakeNSDate(int hour, int minute, int year, int month, int day)
void DateExtensions__MakeNSDate_fn(int32_t* hour, int32_t* minute, int32_t* year, int32_t* month, int32_t* day, ::g::ObjC::Object** __retval)
{
    *__retval = DateExtensions::MakeNSDate(*hour, *minute, *year, *month, *day);
}

// private static void SetDate(ObjC.Object handle, ObjC.Object nsDateHandle)
void DateExtensions__SetDate_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* nsDateHandle)
{
    DateExtensions::SetDate(handle, nsDateHandle);
}

// public static void SetDate(ObjC.Object datePicker, Uno.Time.LocalDate date)
void DateExtensions__SetDate1_fn(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate* date)
{
    DateExtensions::SetDate1(datePicker, *date);
}

// private static void SetMaxDate(ObjC.Object handle, ObjC.Object nsDateHandle)
void DateExtensions__SetMaxDate_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* nsDateHandle)
{
    DateExtensions::SetMaxDate(handle, nsDateHandle);
}

// public static void SetMaxDate(ObjC.Object datePicker, Uno.Time.LocalDate date)
void DateExtensions__SetMaxDate1_fn(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate* date)
{
    DateExtensions::SetMaxDate1(datePicker, *date);
}

// private static void SetMinDate(ObjC.Object handle, ObjC.Object nsDateHandle)
void DateExtensions__SetMinDate_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* nsDateHandle)
{
    DateExtensions::SetMinDate(handle, nsDateHandle);
}

// public static void SetMinDate(ObjC.Object datePicker, Uno.Time.LocalDate date)
void DateExtensions__SetMinDate1_fn(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate* date)
{
    DateExtensions::SetMinDate1(datePicker, *date);
}

// public static void SetTime(ObjC.Object datePicker, Uno.Time.LocalTime time)
void DateExtensions__SetTime_fn(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalTime* time)
{
    DateExtensions::SetTime(datePicker, *time);
}

// public static ObjC.Object ToNSDate(Uno.Time.LocalDate date)
void DateExtensions__ToNSDate_fn(::g::Uno::Time::LocalDate* date, ::g::ObjC::Object** __retval)
{
    *__retval = DateExtensions::ToNSDate(*date);
}

// public static ObjC.Object ToNSDate(Uno.Time.LocalTime time)
void DateExtensions__ToNSDate1_fn(::g::Uno::Time::LocalTime* time, ::g::ObjC::Object** __retval)
{
    *__retval = DateExtensions::ToNSDate1(*time);
}

// private static void GetDate(ObjC.Object handle, int& hour, int& minute, int& year, int& month, int& day) [static]
void DateExtensions::GetDate(::g::ObjC::Object* handle, int32_t* hour, int32_t* minute, int32_t* year, int32_t* month, int32_t* day)
{
    @autoreleasepool
    {
        [] (::id handle, int32_t* hour, int32_t* minute, int32_t* year, int32_t* month, int32_t* day) -> void
        {
            UIDatePicker* dp = (UIDatePicker*)handle;
            NSDate* date = [dp date];
            NSCalendar* calendar = [NSCalendar currentCalendar];
            NSDateComponents* components = [calendar components:NSCalendarUnitHour|NSCalendarUnitMinute|NSCalendarUnitYear|NSCalendarUnitMonth|NSCalendarUnitDay fromDate:date]; 
            
            *hour = (int)[components hour];
            *minute = (int)[components minute];
            *year = (int)[components year];
            *month = (int)[components month];
            *day = (int)[components day];
        } (::g::ObjC::Object::GetHandle(handle), hour, minute, year, month, day);
        
    }
    
}

// public static Uno.Time.LocalDate GetLocalDate(ObjC.Object datePicker) [static]
::g::Uno::Time::LocalDate DateExtensions::GetLocalDate(::g::ObjC::Object* datePicker)
{
    uStackFrame __("Native.iOS.DateExtensions", "GetLocalDate(ObjC.Object)");
    int32_t hour = 0, minute = 0, year = 0, month = 0, day = 0;
    DateExtensions::GetDate(datePicker, &hour, &minute, &year, &month, &day);
    return ::g::Uno::Time::LocalDate__New1(year, month, day);
}

// public static Uno.Time.LocalTime GetLocalTime(ObjC.Object datePicker) [static]
::g::Uno::Time::LocalTime DateExtensions::GetLocalTime(::g::ObjC::Object* datePicker)
{
    uStackFrame __("Native.iOS.DateExtensions", "GetLocalTime(ObjC.Object)");
    int32_t hour = 0, minute = 0, year = 0, month = 0, day = 0;
    DateExtensions::GetDate(datePicker, &hour, &minute, &year, &month, &day);
    return ::g::Uno::Time::LocalTime__New1(hour, minute);
}

// private static ObjC.Object MakeNSDate(int hour, int minute, int year, int month, int day) [static]
::g::ObjC::Object* DateExtensions::MakeNSDate(int32_t hour, int32_t minute, int32_t year, int32_t month, int32_t day)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (int32_t hour, int32_t minute, int32_t year, int32_t month, int32_t day) -> ::id
        {
            NSDateComponents* components = [[NSDateComponents alloc] init];
            
            [components setHour:hour];
            [components setMinute:minute];
            [components setYear:year];
            [components setMonth:month];
            [components setDay:day];
            
                        NSCalendar* calendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
            NSDate* date = [calendar dateFromComponents:components];
            
            return date;
        } (hour, minute, year, month, day));
        
    }
    
}

// private static void SetDate(ObjC.Object handle, ObjC.Object nsDateHandle) [static]
void DateExtensions::SetDate(::g::ObjC::Object* handle, ::g::ObjC::Object* nsDateHandle)
{
    @autoreleasepool
    {
        [] (::id handle, ::id nsDateHandle) -> void
        {
            UIDatePicker* dp = (UIDatePicker*)handle;
            NSDate* date = (NSDate*)nsDateHandle;
            [dp setDate:date animated:true];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(nsDateHandle));
        
    }
    
}

// public static void SetDate(ObjC.Object datePicker, Uno.Time.LocalDate date) [static]
void DateExtensions::SetDate1(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate date)
{
    DateExtensions::SetDate(datePicker, DateExtensions::ToNSDate(date));
}

// private static void SetMaxDate(ObjC.Object handle, ObjC.Object nsDateHandle) [static]
void DateExtensions::SetMaxDate(::g::ObjC::Object* handle, ::g::ObjC::Object* nsDateHandle)
{
    @autoreleasepool
    {
        [] (::id handle, ::id nsDateHandle) -> void
        {
            UIDatePicker* dp = (UIDatePicker*)handle;
            NSDate* date = (NSDate*)nsDateHandle;
            [dp setMaximumDate:date];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(nsDateHandle));
        
    }
    
}

// public static void SetMaxDate(ObjC.Object datePicker, Uno.Time.LocalDate date) [static]
void DateExtensions::SetMaxDate1(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate date)
{
    DateExtensions::SetMaxDate(datePicker, DateExtensions::ToNSDate(date));
}

// private static void SetMinDate(ObjC.Object handle, ObjC.Object nsDateHandle) [static]
void DateExtensions::SetMinDate(::g::ObjC::Object* handle, ::g::ObjC::Object* nsDateHandle)
{
    @autoreleasepool
    {
        [] (::id handle, ::id nsDateHandle) -> void
        {
            UIDatePicker* dp = (UIDatePicker*)handle;
            NSDate* date = (NSDate*)nsDateHandle;
            [dp setMinimumDate:date];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(nsDateHandle));
        
    }
    
}

// public static void SetMinDate(ObjC.Object datePicker, Uno.Time.LocalDate date) [static]
void DateExtensions::SetMinDate1(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalDate date)
{
    DateExtensions::SetMinDate(datePicker, DateExtensions::ToNSDate(date));
}

// public static void SetTime(ObjC.Object datePicker, Uno.Time.LocalTime time) [static]
void DateExtensions::SetTime(::g::ObjC::Object* datePicker, ::g::Uno::Time::LocalTime time)
{
    DateExtensions::SetDate(datePicker, DateExtensions::ToNSDate1(time));
}

// public static ObjC.Object ToNSDate(Uno.Time.LocalDate date) [static]
::g::ObjC::Object* DateExtensions::ToNSDate(::g::Uno::Time::LocalDate date)
{
    uStackFrame __("Native.iOS.DateExtensions", "ToNSDate(Uno.Time.LocalDate)");
    return DateExtensions::MakeNSDate(0, 0, date.Year(), date.Month(), date.Day());
}

// public static ObjC.Object ToNSDate(Uno.Time.LocalTime time) [static]
::g::ObjC::Object* DateExtensions::ToNSDate1(::g::Uno::Time::LocalTime time)
{
    return DateExtensions::MakeNSDate(time.Hour(), time.Minute(), 0, 0, 0);
}
// }

}}} // ::g::Native::iOS
