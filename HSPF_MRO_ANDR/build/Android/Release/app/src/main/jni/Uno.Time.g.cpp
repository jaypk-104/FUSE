// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Time.Calendars.Era.h>
#include <Uno.Time.Calendars.GregorianYearMonthDayCalculator.h>
#include <Uno.Time.Calendars.TimeOfDayCalculator.h>
#include <Uno.Time.Calendars.WeekYearCalculator.h>
#include <Uno.Time.Calendars.YearMonthDayCalculator.h>
#include <Uno.Time.CalendarSystem.h>
#include <Uno.Time.Constants.h>
#include <Uno.Time.Converter.h>
#include <Uno.Time.DateTimeZone.h>
#include <Uno.Time.DeviceTimeZone.h>
#include <Uno.Time.Duration.h>
#include <Uno.Time.FixedDateTimeZone.h>
#include <Uno.Time.HashCodeHelper.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.LocalDate.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.Time.LocalTime.h>
#include <Uno.Time.Offset.h>
#include <Uno.Time.Preconditions.h>
#include <Uno.Time.Text.LocalDatePattern.h>
#include <Uno.Time.Text.LocalDateTimePattern.h>
#include <Uno.Time.Text.LocalTimePattern.h>
#include <Uno.Time.Text.OffsetPattern.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.Type.h>
static uString* STRINGS[12];
static uType* TYPES[12];

namespace g{
namespace Uno{
namespace Time{

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/CalendarSystem.uno
// -------------------------------------------------------------------------------

// public sealed class CalendarSystem
// {
static void CalendarSystem_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ISO");
    type->SetFields(0,
        ::g::Uno::Time::Calendars::YearMonthDayCalculator_typeof(), offsetof(CalendarSystem, _yearMonthDayCalculator), 0,
        ::g::Uno::Time::Calendars::WeekYearCalculator_typeof(), offsetof(CalendarSystem, _weekYearCalculator), 0,
        ::g::Uno::String_typeof(), offsetof(CalendarSystem, _id), 0,
        ::g::Uno::String_typeof(), offsetof(CalendarSystem, _name), 0,
        ::g::Uno::Time::Calendars::Era_typeof()->Array(), offsetof(CalendarSystem, _eras), 0,
        ::g::Uno::Int_typeof(), offsetof(CalendarSystem, _minYear), 0,
        ::g::Uno::Int_typeof(), offsetof(CalendarSystem, _maxYear), 0,
        ::g::Uno::Long_typeof(), offsetof(CalendarSystem, _minTicks), 0,
        ::g::Uno::Long_typeof(), offsetof(CalendarSystem, _maxTicks), 0,
        type, (uintptr_t)&CalendarSystem::_gregorianCalendarSystem_, uFieldFlagsStatic);
}

uType* CalendarSystem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(CalendarSystem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.CalendarSystem", options);
    type->fp_build_ = CalendarSystem_build;
    type->fp_ToString = (void(*)(uObject*, uString**))CalendarSystem__ToString_fn;
    return type;
}

// private CalendarSystem(string id, string name, Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek)
void CalendarSystem__ctor__fn(CalendarSystem* __this, uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int32_t* minDaysInFirstWeek)
{
    __this->ctor_(id, name, yearMonthDayCalculator, *minDaysInFirstWeek);
}

// internal int GetDayOfMonth(Uno.Time.Instant instant)
void CalendarSystem__GetDayOfMonth_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval)
{
    *__retval = __this->GetDayOfMonth(*instant);
}

// internal int GetHourOfDay(Uno.Time.Instant instant)
void CalendarSystem__GetHourOfDay_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval)
{
    *__retval = __this->GetHourOfDay(*instant);
}

// internal Uno.Time.Instant GetInstant(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour)
void CalendarSystem__GetInstant_fn(CalendarSystem* __this, int32_t* year, int32_t* monthOfYear, int32_t* dayOfMonth, int32_t* hourOfDay, int32_t* minuteOfHour, ::g::Uno::Time::Instant* __retval)
{
    *__retval = __this->GetInstant(*year, *monthOfYear, *dayOfMonth, *hourOfDay, *minuteOfHour);
}

// internal int GetMinuteOfHour(Uno.Time.Instant instant)
void CalendarSystem__GetMinuteOfHour_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval)
{
    *__retval = __this->GetMinuteOfHour(*instant);
}

// internal int GetMonthOfYear(Uno.Time.Instant instant)
void CalendarSystem__GetMonthOfYear_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval)
{
    *__retval = __this->GetMonthOfYear(*instant);
}

// internal int GetSecondOfMinute(Uno.Time.Instant instant)
void CalendarSystem__GetSecondOfMinute_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval)
{
    *__retval = __this->GetSecondOfMinute(*instant);
}

// internal long GetTickOfDay(Uno.Time.Instant instant)
void CalendarSystem__GetTickOfDay_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int64_t* __retval)
{
    *__retval = __this->GetTickOfDay(*instant);
}

// internal int GetYear(Uno.Time.Instant instant)
void CalendarSystem__GetYear_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval)
{
    *__retval = __this->GetYear(*instant);
}

// public static Uno.Time.CalendarSystem get_Iso()
void CalendarSystem__get_Iso_fn(CalendarSystem** __retval)
{
    *__retval = CalendarSystem::Iso();
}

// private CalendarSystem New(string id, string name, Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek)
void CalendarSystem__New1_fn(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int32_t* minDaysInFirstWeek, CalendarSystem** __retval)
{
    *__retval = CalendarSystem::New1(id, name, yearMonthDayCalculator, *minDaysInFirstWeek);
}

// public override sealed string ToString()
void CalendarSystem__ToString_fn(CalendarSystem* __this, uString** __retval)
{
    return *__retval = __this->_id, void();
}

uSStrong<CalendarSystem*> CalendarSystem::_gregorianCalendarSystem_;

// private CalendarSystem(string id, string name, Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) [instance]
void CalendarSystem::ctor_(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int32_t minDaysInFirstWeek)
{
    _id = id;
    _name = name;
    _yearMonthDayCalculator = yearMonthDayCalculator;
    _weekYearCalculator = ::g::Uno::Time::Calendars::WeekYearCalculator::New1(yearMonthDayCalculator, minDaysInFirstWeek);
    _eras = uPtr(_yearMonthDayCalculator)->Eras();
    _minYear = uPtr(yearMonthDayCalculator)->MinYear();
    _maxYear = yearMonthDayCalculator->MaxYear();
    _minTicks = yearMonthDayCalculator->GetStartOfYearInTicks(_minYear);
    _maxTicks = (yearMonthDayCalculator->GetStartOfYearInTicks(_maxYear + 1) - 1LL);
}

// internal int GetDayOfMonth(Uno.Time.Instant instant) [instance]
int32_t CalendarSystem::GetDayOfMonth(::g::Uno::Time::Instant instant)
{
    return uPtr(_yearMonthDayCalculator)->GetDayOfMonth(instant);
}

// internal int GetHourOfDay(Uno.Time.Instant instant) [instance]
int32_t CalendarSystem::GetHourOfDay(::g::Uno::Time::Instant instant)
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetHourOfDay(instant);
}

// internal Uno.Time.Instant GetInstant(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour) [instance]
::g::Uno::Time::Instant CalendarSystem::GetInstant(int32_t year, int32_t monthOfYear, int32_t dayOfMonth, int32_t hourOfDay, int32_t minuteOfHour)
{
    ::g::Uno::Time::Instant date = uPtr(_yearMonthDayCalculator)->GetInstant(year, monthOfYear, dayOfMonth);
    int64_t timeTicks = ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetTicks(hourOfDay, minuteOfHour);
    return date.PlusTicks(timeTicks);
}

// internal int GetMinuteOfHour(Uno.Time.Instant instant) [instance]
int32_t CalendarSystem::GetMinuteOfHour(::g::Uno::Time::Instant instant)
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetMinuteOfHour(instant);
}

// internal int GetMonthOfYear(Uno.Time.Instant instant) [instance]
int32_t CalendarSystem::GetMonthOfYear(::g::Uno::Time::Instant instant)
{
    return uPtr(_yearMonthDayCalculator)->GetMonthOfYear(instant);
}

// internal int GetSecondOfMinute(Uno.Time.Instant instant) [instance]
int32_t CalendarSystem::GetSecondOfMinute(::g::Uno::Time::Instant instant)
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetSecondOfMinute(instant);
}

// internal long GetTickOfDay(Uno.Time.Instant instant) [instance]
int64_t CalendarSystem::GetTickOfDay(::g::Uno::Time::Instant instant)
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetTickOfDay(instant);
}

// internal int GetYear(Uno.Time.Instant instant) [instance]
int32_t CalendarSystem::GetYear(::g::Uno::Time::Instant instant)
{
    return uPtr(_yearMonthDayCalculator)->GetYear(instant);
}

// private CalendarSystem New(string id, string name, Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) [static]
CalendarSystem* CalendarSystem::New1(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int32_t minDaysInFirstWeek)
{
    CalendarSystem* obj2 = (CalendarSystem*)uNew(CalendarSystem_typeof());
    obj2->ctor_(id, name, yearMonthDayCalculator, minDaysInFirstWeek);
    return obj2;
}

// public static Uno.Time.CalendarSystem get_Iso() [static]
CalendarSystem* CalendarSystem::Iso()
{
    if (CalendarSystem::_gregorianCalendarSystem_ == NULL)
        CalendarSystem::_gregorianCalendarSystem_ = CalendarSystem::New1(::STRINGS[0/*"ISO"*/], ::STRINGS[0/*"ISO"*/], ::g::Uno::Time::Calendars::GregorianYearMonthDayCalculator::New1(), 4);

    return CalendarSystem::_gregorianCalendarSystem_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/Utilities/Constants.uno
// ------------------------------------------------------------------------------------

// public static class Constants
// {
// static Constants()
static void Constants__cctor__fn(uType* __type)
{
    Constants::UnixEpoch_ = uDefault< ::g::Uno::Time::Instant>();
    Constants::BclEpoch_ = ::g::Uno::Time::Instant__FromUtc(1, 1, 1, 0, 0);
}

static void Constants_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Time::Instant_typeof(), (uintptr_t)&Constants::UnixEpoch_, uFieldFlagsStatic,
        ::g::Uno::Time::Instant_typeof(), (uintptr_t)&Constants::BclEpoch_, uFieldFlagsStatic);
}

uClassType* Constants_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Time.Constants", options);
    type->fp_build_ = Constants_build;
    type->fp_cctor_ = Constants__cctor__fn;
    return type;
}

::g::Uno::Time::Instant Constants::UnixEpoch_;
::g::Uno::Time::Instant Constants::BclEpoch_;
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/Utilities/Converter.uno
// ------------------------------------------------------------------------------------

// internal static class Converter
// {
static void Converter_build(uType* type)
{
}

uClassType* Converter_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Time.Converter", options);
    type->fp_build_ = Converter_build;
    return type;
}

// internal static int TicksToDays(long ticks)
void Converter__TicksToDays_fn(int64_t* ticks, int32_t* __retval)
{
    *__retval = Converter::TicksToDays(*ticks);
}

// internal static int TicksToDays(long ticks) [static]
int32_t Converter::TicksToDays(int64_t ticks)
{
    if (ticks >= 0LL)
        return (int32_t)((ticks >> 14) / 52734375LL);
    else
        return (int32_t)((ticks - 863999999999LL) / 864000000000LL);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/DateTimeZone.uno
// -----------------------------------------------------------------------------

// public abstract class DateTimeZone
// {
// static generated DateTimeZone()
static void DateTimeZone__cctor__fn(uType* __type)
{
    ::TYPES[11/*Uno.Time.Offset*/]->Init();
    DateTimeZone::UtcZone_ = ::g::Uno::Time::FixedDateTimeZone::New2(::g::Uno::Time::Offset::Zero());
}

static void DateTimeZone_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(DateTimeZone, id), 0,
        ::g::Uno::Bool_typeof(), offsetof(DateTimeZone, isFixed), 0,
        ::g::Uno::Long_typeof(), offsetof(DateTimeZone, minOffsetTicks), 0,
        ::g::Uno::Long_typeof(), offsetof(DateTimeZone, maxOffsetTicks), 0,
        type, (uintptr_t)&DateTimeZone::UtcZone_, uFieldFlagsStatic);
}

DateTimeZone_type* DateTimeZone_typeof()
{
    static uSStrong<DateTimeZone_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DateTimeZone);
    options.TypeSize = sizeof(DateTimeZone_type);
    type = (DateTimeZone_type*)uClassType::New("Uno.Time.DateTimeZone", options);
    type->fp_build_ = DateTimeZone_build;
    type->fp_cctor_ = DateTimeZone__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))DateTimeZone__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))DateTimeZone__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))DateTimeZone__ToString_fn;
    return type;
}

// protected DateTimeZone(string id, bool isFixed, Uno.Time.Offset minOffset, Uno.Time.Offset maxOffset)
void DateTimeZone__ctor__fn(DateTimeZone* __this, uString* id1, bool* isFixed1, ::g::Uno::Time::Offset* minOffset, ::g::Uno::Time::Offset* maxOffset)
{
    __this->ctor_(id1, *isFixed1, *minOffset, *maxOffset);
}

// public override sealed bool Equals(object obj)
void DateTimeZone__Equals_fn(DateTimeZone* __this, uObject* obj, bool* __retval)
{
    return *__retval = __this->Equals2(uAs<DateTimeZone*>(obj, DateTimeZone_typeof())), void();
}

// public bool Equals(Uno.Time.DateTimeZone obj)
void DateTimeZone__Equals2_fn(DateTimeZone* __this, DateTimeZone* obj, bool* __retval)
{
    *__retval = __this->Equals2(obj);
}

// public override int GetHashCode()
void DateTimeZone__GetHashCode_fn(DateTimeZone* __this, int32_t* __retval)
{
    int32_t ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// public string get_Id()
void DateTimeZone__get_Id_fn(DateTimeZone* __this, uString** __retval)
{
    *__retval = __this->Id();
}

// public override string ToString()
void DateTimeZone__ToString_fn(DateTimeZone* __this, uString** __retval)
{
    return *__retval = __this->Id(), void();
}

// public static Uno.Time.DateTimeZone get_Utc()
void DateTimeZone__get_Utc_fn(DateTimeZone** __retval)
{
    *__retval = DateTimeZone::Utc();
}

uSStrong<DateTimeZone*> DateTimeZone::UtcZone_;

// protected DateTimeZone(string id, bool isFixed, Uno.Time.Offset minOffset, Uno.Time.Offset maxOffset) [instance]
void DateTimeZone::ctor_(uString* id1, bool isFixed1, ::g::Uno::Time::Offset minOffset, ::g::Uno::Time::Offset maxOffset)
{
    id = id1;
    isFixed = isFixed1;
    minOffsetTicks = minOffset.Ticks();
    maxOffsetTicks = maxOffset.Ticks();
}

// public bool Equals(Uno.Time.DateTimeZone obj) [instance]
bool DateTimeZone::Equals2(DateTimeZone* obj)
{
    if (::g::Uno::Object::ReferenceEquals(this, obj))
        return true;

    return (!::g::Uno::Object::ReferenceEquals(obj, NULL) && ::g::Uno::Type::op_Equality(::g::Uno::Object::GetType(uPtr(obj)), ::g::Uno::Object::GetType(this))) && EqualsImpl(obj);
}

// public string get_Id() [instance]
uString* DateTimeZone::Id()
{
    return id;
}

// public static Uno.Time.DateTimeZone get_Utc() [static]
DateTimeZone* DateTimeZone::Utc()
{
    DateTimeZone_typeof()->Init();
    return DateTimeZone::UtcZone_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/Timezones/DeviceTimeZone.uno
// -----------------------------------------------------------------------------------------

// public sealed class DeviceTimeZone
// {
static void DeviceTimeZone_build(uType* type)
{
    ::STRINGS[1] = uString::Const("UTC");
    ::TYPES[0] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Time::Offset_typeof());
    type->SetFields(4);
}

::g::Uno::Time::DateTimeZone_type* DeviceTimeZone_typeof()
{
    static uSStrong< ::g::Uno::Time::DateTimeZone_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::DateTimeZone_typeof();
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DeviceTimeZone);
    options.TypeSize = sizeof(::g::Uno::Time::DateTimeZone_type);
    type = (::g::Uno::Time::DateTimeZone_type*)uClassType::New("Uno.Time.DeviceTimeZone", options);
    type->fp_build_ = DeviceTimeZone_build;
    type->fp_ctor_ = (void*)DeviceTimeZone__New1_fn;
    type->fp_EqualsImpl = (void(*)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::DateTimeZone*, bool*))DeviceTimeZone__EqualsImpl_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))DeviceTimeZone__GetHashCode_fn;
    type->fp_GetUtcOffset = (void(*)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::LocalDateTime*, ::g::Uno::Time::Offset*))DeviceTimeZone__GetUtcOffset_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))DeviceTimeZone__ToString_fn;
    return type;
}

// public DeviceTimeZone()
void DeviceTimeZone__ctor_1_fn(DeviceTimeZone* __this)
{
    __this->ctor_1();
}

// internal DeviceTimeZone(string id)
void DeviceTimeZone__ctor_2_fn(DeviceTimeZone* __this, uString* id1)
{
    __this->ctor_2(id1);
}

// protected override sealed bool EqualsImpl(Uno.Time.DateTimeZone other)
void DeviceTimeZone__EqualsImpl_fn(DeviceTimeZone* __this, ::g::Uno::Time::DateTimeZone* other, bool* __retval)
{
    return *__retval = uIs(other, __this->__type), void();
}

// public override sealed int GetHashCode()
void DeviceTimeZone__GetHashCode_fn(DeviceTimeZone* __this, int32_t* __retval)
{
    int32_t ret3;
    int32_t hash = ::g::Uno::Time::HashCodeHelper::Initialize();
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[0/*Uno.Time.HashCodeHelper.Hash<string>*/], uCRef<int32_t>(hash), __this->Id(), &ret3), ret3);
    return *__retval = hash, void();
}

// public override sealed Uno.Time.Offset GetUtcOffset(Uno.Time.LocalDateTime dateTime)
void DeviceTimeZone__GetUtcOffset_fn(DeviceTimeZone* __this, ::g::Uno::Time::LocalDateTime* dateTime, ::g::Uno::Time::Offset* __retval)
{
    ::g::Uno::Time::LocalDateTime dateTime_ = *dateTime;
    int32_t offsetMinutes = ::g::Uno::Diagnostics::Clock::GetTimezoneOffset(dateTime_.Year(), dateTime_.Month(), dateTime_.Day());
    return *__retval = ::g::Uno::Time::Offset__FromHoursAndMinutes(offsetMinutes / 60, offsetMinutes % 60), void();
}

// public DeviceTimeZone New()
void DeviceTimeZone__New1_fn(DeviceTimeZone** __retval)
{
    *__retval = DeviceTimeZone::New1();
}

// public override sealed string ToString()
void DeviceTimeZone__ToString_fn(DeviceTimeZone* __this, uString** __retval)
{
    return *__retval = __this->Id(), void();
}

// public DeviceTimeZone() [instance]
void DeviceTimeZone::ctor_1()
{
    ctor_2(::STRINGS[1/*"UTC"*/]);
}

// internal DeviceTimeZone(string id) [instance]
void DeviceTimeZone::ctor_2(uString* id1)
{
    ctor_(id1, false, ::g::Uno::Time::Offset__FromHours(-12), ::g::Uno::Time::Offset__FromHours(12));
}

// public DeviceTimeZone New() [static]
DeviceTimeZone* DeviceTimeZone::New1()
{
    DeviceTimeZone* obj1 = (DeviceTimeZone*)uNew(DeviceTimeZone_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/Duration.uno
// -------------------------------------------------------------------------

// public struct Duration
// {
// static Duration()
static void Duration__cctor__fn(uType* __type)
{
    Duration::Zero_ = Duration__New1(0LL);
    Duration::Epsilon_ = Duration__New1(1LL);
    Duration::OneStandardWeek_ = Duration__New1(6048000000000LL);
    Duration::OneStandardDay_ = Duration__New1(864000000000LL);
    Duration::OneHour_ = Duration__New1(36000000000LL);
    Duration::OneMinute_ = Duration__New1(600000000LL);
    Duration::OneSecond_ = Duration__New1(10000000LL);
    Duration::OneMillisecond_ = Duration__New1(10000LL);
}

static void Duration_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Long_typeof();
    type->SetFields(0,
        ::TYPES[1/*long*/], offsetof(Duration, ticks), 0,
        type, (uintptr_t)&Duration::Zero_, uFieldFlagsStatic,
        type, (uintptr_t)&Duration::Epsilon_, uFieldFlagsStatic,
        type, (uintptr_t)&Duration::OneStandardWeek_, uFieldFlagsStatic,
        type, (uintptr_t)&Duration::OneStandardDay_, uFieldFlagsStatic,
        type, (uintptr_t)&Duration::OneHour_, uFieldFlagsStatic,
        type, (uintptr_t)&Duration::OneMinute_, uFieldFlagsStatic,
        type, (uintptr_t)&Duration::OneSecond_, uFieldFlagsStatic,
        type, (uintptr_t)&Duration::OneMillisecond_, uFieldFlagsStatic);
}

uStructType* Duration_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 9;
    options.Alignment = alignof(Duration);
    options.ValueSize = sizeof(Duration);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Time.Duration", options);
    type->fp_build_ = Duration_build;
    type->fp_cctor_ = Duration__cctor__fn;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Duration__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Duration__GetHashCode_fn;
    return type;
}

// internal Duration(long ticks)
void Duration__ctor_1_fn(Duration* __this, int64_t* ticks1)
{
    __this->ctor_1(*ticks1);
}

// public override sealed bool Equals(object obj)
void Duration__Equals_fn(Duration* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, __type))
        return *__retval = __this->Equals2(uUnbox<Duration>(__type, obj)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.Duration other)
void Duration__Equals2_fn(Duration* __this, Duration* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// public override sealed int GetHashCode()
void Duration__GetHashCode_fn(Duration* __this, uType* __type, int32_t* __retval)
{
    return *__retval = ::g::Uno::Long::GetHashCode(__this->Ticks(), ::TYPES[1/*long*/]), void();
}

// internal Duration New(long ticks)
void Duration__New1_fn(int64_t* ticks1, Duration* __retval)
{
    *__retval = Duration__New1(*ticks1);
}

// public long get_Ticks()
void Duration__get_Ticks_fn(Duration* __this, int64_t* __retval)
{
    *__retval = __this->Ticks();
}

Duration Duration::Zero_;
Duration Duration::Epsilon_;
Duration Duration::OneStandardWeek_;
Duration Duration::OneStandardDay_;
Duration Duration::OneHour_;
Duration Duration::OneMinute_;
Duration Duration::OneSecond_;
Duration Duration::OneMillisecond_;

// internal Duration(long ticks) [instance]
void Duration::ctor_1(int64_t ticks1)
{
    ticks = ticks1;
}

// public bool Equals(Uno.Time.Duration other) [instance]
bool Duration::Equals2(Duration other)
{
    return Ticks() == other.Ticks();
}

// public long get_Ticks() [instance]
int64_t Duration::Ticks()
{
    return ticks;
}

// internal Duration New(long ticks) [static]
Duration Duration__New1(int64_t ticks1)
{
    Duration obj1;
    obj1.ctor_1(ticks1);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/Timezones/FixedDateTimeZone.uno
// --------------------------------------------------------------------------------------------

// internal sealed class FixedDateTimeZone
// {
static void FixedDateTimeZone_build(uType* type)
{
    ::STRINGS[1] = uString::Const("UTC");
    ::TYPES[2] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.Offset>*/, ::g::Uno::Time::Offset_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Time::Offset_typeof());
    type->SetFields(4,
        ::g::Uno::Time::Offset_typeof(), offsetof(FixedDateTimeZone, offset), 0);
}

::g::Uno::Time::DateTimeZone_type* FixedDateTimeZone_typeof()
{
    static uSStrong< ::g::Uno::Time::DateTimeZone_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::DateTimeZone_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FixedDateTimeZone);
    options.TypeSize = sizeof(::g::Uno::Time::DateTimeZone_type);
    type = (::g::Uno::Time::DateTimeZone_type*)uClassType::New("Uno.Time.FixedDateTimeZone", options);
    type->fp_build_ = FixedDateTimeZone_build;
    type->fp_EqualsImpl = (void(*)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::DateTimeZone*, bool*))FixedDateTimeZone__EqualsImpl_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))FixedDateTimeZone__GetHashCode_fn;
    type->fp_GetUtcOffset = (void(*)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::LocalDateTime*, ::g::Uno::Time::Offset*))FixedDateTimeZone__GetUtcOffset_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))FixedDateTimeZone__ToString_fn;
    return type;
}

// public FixedDateTimeZone(string id, Uno.Time.Offset offset)
void FixedDateTimeZone__ctor_1_fn(FixedDateTimeZone* __this, uString* id1, ::g::Uno::Time::Offset* offset1)
{
    __this->ctor_1(id1, *offset1);
}

// public FixedDateTimeZone(Uno.Time.Offset offset)
void FixedDateTimeZone__ctor_2_fn(FixedDateTimeZone* __this, ::g::Uno::Time::Offset* offset1)
{
    __this->ctor_2(*offset1);
}

// protected override sealed bool EqualsImpl(Uno.Time.DateTimeZone other)
void FixedDateTimeZone__EqualsImpl_fn(FixedDateTimeZone* __this, ::g::Uno::Time::DateTimeZone* other, bool* __retval)
{
    FixedDateTimeZone* otherZone = uCast<FixedDateTimeZone*>(other, __this->__type);
    return *__retval = ::g::Uno::Time::Offset__op_Equality(__this->offset, uPtr(otherZone)->offset) && ::g::Uno::String::op_Equality(__this->Id(), uPtr(other)->Id()), void();
}

// public override sealed int GetHashCode()
void FixedDateTimeZone__GetHashCode_fn(FixedDateTimeZone* __this, int32_t* __retval)
{
    int32_t ret3;
    int32_t ret4;
    int32_t hash = ::g::Uno::Time::HashCodeHelper::Initialize();
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[2/*Uno.Time.HashCodeHelper.Hash<Uno.Time.Offset>*/], uCRef<int32_t>(hash), uCRef(__this->offset), &ret3), ret3);
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[0/*Uno.Time.HashCodeHelper.Hash<string>*/], uCRef<int32_t>(hash), __this->Id(), &ret4), ret4);
    return *__retval = hash, void();
}

// public override sealed Uno.Time.Offset GetUtcOffset(Uno.Time.LocalDateTime dateTime)
void FixedDateTimeZone__GetUtcOffset_fn(FixedDateTimeZone* __this, ::g::Uno::Time::LocalDateTime* dateTime, ::g::Uno::Time::Offset* __retval)
{
    return *__retval = __this->offset, void();
}

// public FixedDateTimeZone New(Uno.Time.Offset offset)
void FixedDateTimeZone__New2_fn(::g::Uno::Time::Offset* offset1, FixedDateTimeZone** __retval)
{
    *__retval = FixedDateTimeZone::New2(*offset1);
}

// public override sealed string ToString()
void FixedDateTimeZone__ToString_fn(FixedDateTimeZone* __this, uString** __retval)
{
    return *__retval = __this->Id(), void();
}

// public FixedDateTimeZone(string id, Uno.Time.Offset offset) [instance]
void FixedDateTimeZone::ctor_1(uString* id1, ::g::Uno::Time::Offset offset1)
{
    ctor_(id1, true, offset1, offset1);
    offset = offset1;
}

// public FixedDateTimeZone(Uno.Time.Offset offset) [instance]
void FixedDateTimeZone::ctor_2(::g::Uno::Time::Offset offset1)
{
    ctor_1(::STRINGS[1/*"UTC"*/], offset1);
}

// public FixedDateTimeZone New(Uno.Time.Offset offset) [static]
FixedDateTimeZone* FixedDateTimeZone::New2(::g::Uno::Time::Offset offset1)
{
    FixedDateTimeZone* obj1 = (FixedDateTimeZone*)uNew(FixedDateTimeZone_typeof());
    obj1->ctor_2(offset1);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/Utilities/HashcodeHelper.uno
// -----------------------------------------------------------------------------------------

// internal static class HashCodeHelper
// {
static void HashCodeHelper_build(uType* type)
{
}

uClassType* HashCodeHelper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Time.HashCodeHelper", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->fp_build_ = HashCodeHelper_build;
    return type;
}

// internal static int Hash<T>(int code, T value)
void HashCodeHelper__Hash_fn(uType* __type, int32_t* code, void* value, int32_t* __retval)
{
    int32_t code_ = *code;
    int32_t hash = 0;

    if (!::g::Uno::Object::Equals(uBoxPtr(__type->U(0), uPtr(value), U_ALLOCA(__type->U(0)->ObjectSize)), NULL))
        hash = ::g::Uno::Object::GetHashCode(uBoxPtr(__type->U(0), uPtr(value), U_ALLOCA(__type->U(0)->ObjectSize)));

    return *__retval = HashCodeHelper::MakeHash(code_, hash), void();
}

// internal static int Initialize()
void HashCodeHelper__Initialize_fn(int32_t* __retval)
{
    *__retval = HashCodeHelper::Initialize();
}

// private static int MakeHash(int code, int value)
void HashCodeHelper__MakeHash_fn(int32_t* code, int32_t* value, int32_t* __retval)
{
    *__retval = HashCodeHelper::MakeHash(*code, *value);
}

// internal static int Initialize() [static]
int32_t HashCodeHelper::Initialize()
{
    return 17;
}

// private static int MakeHash(int code, int value) [static]
int32_t HashCodeHelper::MakeHash(int32_t code, int32_t value)
{
    return (code * 37) + value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/Instant.uno
// ------------------------------------------------------------------------

// public struct Instant
// {
static void Instant_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Long_typeof();
    type->SetFields(0,
        ::TYPES[1/*long*/], offsetof(Instant, _ticks), 0);
}

uStructType* Instant_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 1;
    options.Alignment = alignof(Instant);
    options.ValueSize = sizeof(Instant);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Time.Instant", options);
    type->fp_build_ = Instant_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Instant__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Instant__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Instant__ToString_fn;
    return type;
}

// public Instant(long ticks)
void Instant__ctor_1_fn(Instant* __this, int64_t* ticks)
{
    __this->ctor_1(*ticks);
}

// public override sealed bool Equals(object obj)
void Instant__Equals_fn(Instant* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, __type))
        return *__retval = __this->Equals2(uUnbox<Instant>(__type, obj)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.Instant other)
void Instant__Equals2_fn(Instant* __this, Instant* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// public static Uno.Time.Instant FromUtc(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour)
void Instant__FromUtc_fn(int32_t* year, int32_t* monthOfYear, int32_t* dayOfMonth, int32_t* hourOfDay, int32_t* minuteOfHour, Instant* __retval)
{
    *__retval = Instant__FromUtc(*year, *monthOfYear, *dayOfMonth, *hourOfDay, *minuteOfHour);
}

// public override sealed int GetHashCode()
void Instant__GetHashCode_fn(Instant* __this, uType* __type, int32_t* __retval)
{
    return *__retval = ::g::Uno::Long::GetHashCode(__this->Ticks(), ::TYPES[1/*long*/]), void();
}

// internal Uno.Time.Instant Minus(Uno.Time.Offset offset)
void Instant__Minus2_fn(Instant* __this, ::g::Uno::Time::Offset* offset, Instant* __retval)
{
    *__retval = __this->Minus2(*offset);
}

// public Instant New(long ticks)
void Instant__New1_fn(int64_t* ticks, Instant* __retval)
{
    *__retval = Instant__New1(*ticks);
}

// public static operator +(Uno.Time.Instant left, Uno.Time.Duration right)
void Instant__op_Addition_fn(Instant* left, ::g::Uno::Time::Duration* right, Instant* __retval)
{
    *__retval = Instant__op_Addition(*left, *right);
}

// public static operator ==(Uno.Time.Instant left, Uno.Time.Instant right)
void Instant__op_Equality_fn(Instant* left, Instant* right, bool* __retval)
{
    *__retval = Instant__op_Equality(*left, *right);
}

// public static operator -(Uno.Time.Instant left, Uno.Time.Duration right)
void Instant__op_Subtraction_fn(Instant* left, ::g::Uno::Time::Duration* right, Instant* __retval)
{
    *__retval = Instant__op_Subtraction(*left, *right);
}

// public static operator -(Uno.Time.Instant left, Uno.Time.Instant right)
void Instant__op_Subtraction1_fn(Instant* left, Instant* right, ::g::Uno::Time::Duration* __retval)
{
    *__retval = Instant__op_Subtraction1(*left, *right);
}

// internal Uno.Time.Instant Plus(Uno.Time.Offset offset)
void Instant__Plus1_fn(Instant* __this, ::g::Uno::Time::Offset* offset, Instant* __retval)
{
    *__retval = __this->Plus1(*offset);
}

// public Uno.Time.Instant PlusTicks(long ticksToAdd)
void Instant__PlusTicks_fn(Instant* __this, int64_t* ticksToAdd, Instant* __retval)
{
    *__retval = __this->PlusTicks(*ticksToAdd);
}

// public long get_Ticks()
void Instant__get_Ticks_fn(Instant* __this, int64_t* __retval)
{
    *__retval = __this->Ticks();
}

// public override sealed string ToString()
void Instant__ToString_fn(Instant* __this, uType* __type, uString** __retval)
{
    return *__retval = uPtr(::g::Uno::Time::Text::LocalDateTimePattern::GeneralIsoPattern())->Format(::g::Uno::Time::LocalDateTime__New9(*__this)), void();
}

// public Instant(long ticks) [instance]
void Instant::ctor_1(int64_t ticks)
{
    _ticks = ticks;
}

// public bool Equals(Uno.Time.Instant other) [instance]
bool Instant::Equals2(Instant other)
{
    return Ticks() == other.Ticks();
}

// internal Uno.Time.Instant Minus(Uno.Time.Offset offset) [instance]
Instant Instant::Minus2(::g::Uno::Time::Offset offset)
{
    return Instant__New1(_ticks - offset.Ticks());
}

// internal Uno.Time.Instant Plus(Uno.Time.Offset offset) [instance]
Instant Instant::Plus1(::g::Uno::Time::Offset offset)
{
    return Instant__New1(Ticks() + offset.Ticks());
}

// public Uno.Time.Instant PlusTicks(long ticksToAdd) [instance]
Instant Instant::PlusTicks(int64_t ticksToAdd)
{
    return Instant__New1(_ticks + ticksToAdd);
}

// public long get_Ticks() [instance]
int64_t Instant::Ticks()
{
    return _ticks;
}

// public static Uno.Time.Instant FromUtc(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour) [static]
Instant Instant__FromUtc(int32_t year, int32_t monthOfYear, int32_t dayOfMonth, int32_t hourOfDay, int32_t minuteOfHour)
{
    return uPtr(::g::Uno::Time::CalendarSystem::Iso())->GetInstant(year, monthOfYear, dayOfMonth, hourOfDay, minuteOfHour);
}

// public Instant New(long ticks) [static]
Instant Instant__New1(int64_t ticks)
{
    Instant obj1;
    obj1.ctor_1(ticks);
    return obj1;
}

// public static operator +(Uno.Time.Instant left, Uno.Time.Duration right) [static]
Instant Instant__op_Addition(Instant left, ::g::Uno::Time::Duration right)
{
    return Instant__New1(left.Ticks() + right.Ticks());
}

// public static operator ==(Uno.Time.Instant left, Uno.Time.Instant right) [static]
bool Instant__op_Equality(Instant left, Instant right)
{
    return left.Equals2(right);
}

// public static operator -(Uno.Time.Instant left, Uno.Time.Duration right) [static]
Instant Instant__op_Subtraction(Instant left, ::g::Uno::Time::Duration right)
{
    return Instant__New1(left.Ticks() - right.Ticks());
}

// public static operator -(Uno.Time.Instant left, Uno.Time.Instant right) [static]
::g::Uno::Time::Duration Instant__op_Subtraction1(Instant left, Instant right)
{
    return ::g::Uno::Time::Duration__New1(left.Ticks() - right.Ticks());
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/LocalDate.uno
// --------------------------------------------------------------------------

// public struct LocalDate
// {
static void LocalDate_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Time::LocalDateTime_typeof();
    type->SetFields(0,
        ::TYPES[3/*Uno.Time.LocalDateTime*/], offsetof(LocalDate, _localTime), 0);
}

uStructType* LocalDate_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 1;
    options.Alignment = alignof(LocalDate);
    options.ValueSize = sizeof(LocalDate);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Time.LocalDate", options);
    type->fp_build_ = LocalDate_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))LocalDate__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))LocalDate__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))LocalDate__ToString_fn;
    return type;
}

// public LocalDate(int year, int month, int day)
void LocalDate__ctor_1_fn(LocalDate* __this, int32_t* year, int32_t* month, int32_t* day)
{
    __this->ctor_1(*year, *month, *day);
}

// public LocalDate(int year, int month, int day, Uno.Time.CalendarSystem calendar)
void LocalDate__ctor_2_fn(LocalDate* __this, int32_t* year, int32_t* month, int32_t* day, ::g::Uno::Time::CalendarSystem* calendar)
{
    __this->ctor_2(*year, *month, *day, calendar);
}

// internal LocalDate(Uno.Time.LocalDateTime localTime)
void LocalDate__ctor_5_fn(LocalDate* __this, ::g::Uno::Time::LocalDateTime* localTime)
{
    __this->ctor_5(*localTime);
}

// public int get_Day()
void LocalDate__get_Day_fn(LocalDate* __this, int32_t* __retval)
{
    *__retval = __this->Day();
}

// public override sealed bool Equals(object obj)
void LocalDate__Equals_fn(LocalDate* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, __type))
        return *__retval = LocalDate__op_Equality(*__this, uUnbox<LocalDate>(__type, obj)), void();

    return *__retval = false, void();
}

// public override sealed int GetHashCode()
void LocalDate__GetHashCode_fn(LocalDate* __this, uType* __type, int32_t* __retval)
{
    ::g::Uno::Time::LocalDateTime ind22;
    return *__retval = (ind22 = __this->_localTime, (&ind22))->GetHashCode(::TYPES[3/*Uno.Time.LocalDateTime*/]), void();
}

// public int get_Month()
void LocalDate__get_Month_fn(LocalDate* __this, int32_t* __retval)
{
    *__retval = __this->Month();
}

// public LocalDate New(int year, int month, int day)
void LocalDate__New1_fn(int32_t* year, int32_t* month, int32_t* day, LocalDate* __retval)
{
    *__retval = LocalDate__New1(*year, *month, *day);
}

// internal LocalDate New(Uno.Time.LocalDateTime localTime)
void LocalDate__New5_fn(::g::Uno::Time::LocalDateTime* localTime, LocalDate* __retval)
{
    *__retval = LocalDate__New5(*localTime);
}

// public static operator ==(Uno.Time.LocalDate lhs, Uno.Time.LocalDate rhs)
void LocalDate__op_Equality_fn(LocalDate* lhs, LocalDate* rhs, bool* __retval)
{
    *__retval = LocalDate__op_Equality(*lhs, *rhs);
}

// public static operator !=(Uno.Time.LocalDate lhs, Uno.Time.LocalDate rhs)
void LocalDate__op_Inequality_fn(LocalDate* lhs, LocalDate* rhs, bool* __retval)
{
    *__retval = LocalDate__op_Inequality(*lhs, *rhs);
}

// public override sealed string ToString()
void LocalDate__ToString_fn(LocalDate* __this, uType* __type, uString** __retval)
{
    return *__retval = uPtr(::g::Uno::Time::Text::LocalDatePattern::GeneralIsoPattern())->Format(*__this), void();
}

// public int get_Year()
void LocalDate__get_Year_fn(LocalDate* __this, int32_t* __retval)
{
    *__retval = __this->Year();
}

// public LocalDate(int year, int month, int day) [instance]
void LocalDate::ctor_1(int32_t year, int32_t month, int32_t day)
{
    ctor_2(year, month, day, ::g::Uno::Time::CalendarSystem::Iso());
}

// public LocalDate(int year, int month, int day, Uno.Time.CalendarSystem calendar) [instance]
void LocalDate::ctor_2(int32_t year, int32_t month, int32_t day, ::g::Uno::Time::CalendarSystem* calendar)
{
    ctor_5(::g::Uno::Time::LocalDateTime__New8(year, month, day, 0, 0, calendar));
}

// internal LocalDate(Uno.Time.LocalDateTime localTime) [instance]
void LocalDate::ctor_5(::g::Uno::Time::LocalDateTime localTime)
{
    _localTime = localTime;
}

// public int get_Day() [instance]
int32_t LocalDate::Day()
{
    ::g::Uno::Time::LocalDateTime ind4;
    return (ind4 = _localTime, (&ind4))->Day();
}

// public int get_Month() [instance]
int32_t LocalDate::Month()
{
    ::g::Uno::Time::LocalDateTime ind3;
    return (ind3 = _localTime, (&ind3))->Month();
}

// public int get_Year() [instance]
int32_t LocalDate::Year()
{
    ::g::Uno::Time::LocalDateTime ind2;
    return (ind2 = _localTime, (&ind2))->Year();
}

// public LocalDate New(int year, int month, int day) [static]
LocalDate LocalDate__New1(int32_t year, int32_t month, int32_t day)
{
    LocalDate obj23;
    obj23.ctor_1(year, month, day);
    return obj23;
}

// internal LocalDate New(Uno.Time.LocalDateTime localTime) [static]
LocalDate LocalDate__New5(::g::Uno::Time::LocalDateTime localTime)
{
    LocalDate obj27;
    obj27.ctor_5(localTime);
    return obj27;
}

// public static operator ==(Uno.Time.LocalDate lhs, Uno.Time.LocalDate rhs) [static]
bool LocalDate__op_Equality(LocalDate lhs, LocalDate rhs)
{
    return ::g::Uno::Time::LocalDateTime__op_Equality(lhs._localTime, rhs._localTime);
}

// public static operator !=(Uno.Time.LocalDate lhs, Uno.Time.LocalDate rhs) [static]
bool LocalDate__op_Inequality(LocalDate lhs, LocalDate rhs)
{
    return ::g::Uno::Time::LocalDateTime__op_Inequality(lhs._localTime, rhs._localTime);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/LocalDateTime.uno
// ------------------------------------------------------------------------------

// public struct LocalDateTime
// {
static void LocalDateTime_build(uType* type)
{
    ::STRINGS[2] = uString::Const("calendar");
    ::TYPES[4] = ::g::Uno::Time::Preconditions_typeof()->MakeMethod(0/*CheckNotNull<Uno.Time.CalendarSystem>*/, ::g::Uno::Time::CalendarSystem_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.Instant>*/, ::g::Uno::Time::Instant_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.CalendarSystem>*/, ::g::Uno::Time::CalendarSystem_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Time::CalendarSystem_typeof(), offsetof(LocalDateTime, _calendar), 0,
        ::g::Uno::Time::Instant_typeof(), offsetof(LocalDateTime, _instant), 0);
}

uStructType* LocalDateTime_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 2;
    options.Alignment = alignof(LocalDateTime);
    options.ValueSize = sizeof(LocalDateTime);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Time.LocalDateTime", options);
    type->fp_build_ = LocalDateTime_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))LocalDateTime__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))LocalDateTime__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))LocalDateTime__ToString_fn;
    return type;
}

// public LocalDateTime(int year, int month, int day, int hour, int minute, Uno.Time.CalendarSystem calendar)
void LocalDateTime__ctor_8_fn(LocalDateTime* __this, int32_t* year, int32_t* month, int32_t* day, int32_t* hour, int32_t* minute, ::g::Uno::Time::CalendarSystem* calendar)
{
    __this->ctor_8(*year, *month, *day, *hour, *minute, calendar);
}

// internal LocalDateTime(Uno.Time.Instant instant)
void LocalDateTime__ctor_9_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* instant)
{
    __this->ctor_9(*instant);
}

// public LocalDateTime(Uno.Time.Instant instant, Uno.Time.CalendarSystem calendar)
void LocalDateTime__ctor_10_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::CalendarSystem* calendar)
{
    __this->ctor_10(*instant, calendar);
}

// public Uno.Time.CalendarSystem get_Calendar()
void LocalDateTime__get_Calendar_fn(LocalDateTime* __this, ::g::Uno::Time::CalendarSystem** __retval)
{
    *__retval = __this->Calendar();
}

// public Uno.Time.LocalDate get_Date()
void LocalDateTime__get_Date_fn(LocalDateTime* __this, ::g::Uno::Time::LocalDate* __retval)
{
    *__retval = __this->Date();
}

// public int get_Day()
void LocalDateTime__get_Day_fn(LocalDateTime* __this, int32_t* __retval)
{
    *__retval = __this->Day();
}

// public override sealed bool Equals(object obj)
void LocalDateTime__Equals_fn(LocalDateTime* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, __type))
        return *__retval = __this->Equals2(uUnbox<LocalDateTime>(__type, obj)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.LocalDateTime other)
void LocalDateTime__Equals2_fn(LocalDateTime* __this, LocalDateTime* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// public override sealed int GetHashCode()
void LocalDateTime__GetHashCode_fn(LocalDateTime* __this, uType* __type, int32_t* __retval)
{
    int32_t ret21;
    int32_t ret22;
    int32_t hash = ::g::Uno::Time::HashCodeHelper::Initialize();
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[5/*Uno.Time.HashCodeHelper.Hash<Uno.Time.Instant>*/], uCRef<int32_t>(hash), uCRef(__this->Instant()), &ret21), ret21);
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[6/*Uno.Time.HashCodeHelper.Hash<Uno.Time.CalendarSystem>*/], uCRef<int32_t>(hash), __this->Calendar(), &ret22), ret22);
    return *__retval = hash, void();
}

// public int get_Hour()
void LocalDateTime__get_Hour_fn(LocalDateTime* __this, int32_t* __retval)
{
    *__retval = __this->Hour();
}

// internal Uno.Time.Instant get_Instant()
void LocalDateTime__get_Instant_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* __retval)
{
    *__retval = __this->Instant();
}

// public int get_Minute()
void LocalDateTime__get_Minute_fn(LocalDateTime* __this, int32_t* __retval)
{
    *__retval = __this->Minute();
}

// public int get_Month()
void LocalDateTime__get_Month_fn(LocalDateTime* __this, int32_t* __retval)
{
    *__retval = __this->Month();
}

// public LocalDateTime New(int year, int month, int day, int hour, int minute, Uno.Time.CalendarSystem calendar)
void LocalDateTime__New8_fn(int32_t* year, int32_t* month, int32_t* day, int32_t* hour, int32_t* minute, ::g::Uno::Time::CalendarSystem* calendar, LocalDateTime* __retval)
{
    *__retval = LocalDateTime__New8(*year, *month, *day, *hour, *minute, calendar);
}

// internal LocalDateTime New(Uno.Time.Instant instant)
void LocalDateTime__New9_fn(::g::Uno::Time::Instant* instant, LocalDateTime* __retval)
{
    *__retval = LocalDateTime__New9(*instant);
}

// public LocalDateTime New(Uno.Time.Instant instant, Uno.Time.CalendarSystem calendar)
void LocalDateTime__New10_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::CalendarSystem* calendar, LocalDateTime* __retval)
{
    *__retval = LocalDateTime__New10(*instant, calendar);
}

// public static operator ==(Uno.Time.LocalDateTime left, Uno.Time.LocalDateTime right)
void LocalDateTime__op_Equality_fn(LocalDateTime* left, LocalDateTime* right, bool* __retval)
{
    *__retval = LocalDateTime__op_Equality(*left, *right);
}

// public static operator !=(Uno.Time.LocalDateTime left, Uno.Time.LocalDateTime right)
void LocalDateTime__op_Inequality_fn(LocalDateTime* left, LocalDateTime* right, bool* __retval)
{
    *__retval = LocalDateTime__op_Inequality(*left, *right);
}

// public int get_Second()
void LocalDateTime__get_Second_fn(LocalDateTime* __this, int32_t* __retval)
{
    *__retval = __this->Second();
}

// public long get_TickOfDay()
void LocalDateTime__get_TickOfDay_fn(LocalDateTime* __this, int64_t* __retval)
{
    *__retval = __this->TickOfDay();
}

// public Uno.Time.LocalTime get_TimeOfDay()
void LocalDateTime__get_TimeOfDay_fn(LocalDateTime* __this, ::g::Uno::Time::LocalTime* __retval)
{
    *__retval = __this->TimeOfDay();
}

// public override sealed string ToString()
void LocalDateTime__ToString_fn(LocalDateTime* __this, uType* __type, uString** __retval)
{
    return *__retval = uPtr(::g::Uno::Time::Text::LocalDateTimePattern::GeneralIsoPattern())->Format(*__this), void();
}

// public int get_Year()
void LocalDateTime__get_Year_fn(LocalDateTime* __this, int32_t* __retval)
{
    *__retval = __this->Year();
}

// public LocalDateTime(int year, int month, int day, int hour, int minute, Uno.Time.CalendarSystem calendar) [instance]
void LocalDateTime::ctor_8(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, ::g::Uno::Time::CalendarSystem* calendar)
{
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[4/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.CalendarSystem>*/], calendar, ::STRINGS[2/*"calendar"*/]);
    _instant = uPtr(calendar)->GetInstant(year, month, day, hour, minute);
    _calendar = calendar;
}

// internal LocalDateTime(Uno.Time.Instant instant) [instance]
void LocalDateTime::ctor_9(::g::Uno::Time::Instant instant)
{
    ctor_10(instant, ::g::Uno::Time::CalendarSystem::Iso());
}

// public LocalDateTime(Uno.Time.Instant instant, Uno.Time.CalendarSystem calendar) [instance]
void LocalDateTime::ctor_10(::g::Uno::Time::Instant instant, ::g::Uno::Time::CalendarSystem* calendar)
{
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[4/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.CalendarSystem>*/], calendar, ::STRINGS[2/*"calendar"*/]);
    _instant = instant;
    _calendar = calendar;
}

// public Uno.Time.CalendarSystem get_Calendar() [instance]
::g::Uno::Time::CalendarSystem* LocalDateTime::Calendar()
{
    ::g::Uno::Time::CalendarSystem* ind10;
    ind10 = _calendar;
    return (ind10 != NULL) ? ind10 : (::g::Uno::Time::CalendarSystem*)::g::Uno::Time::CalendarSystem::Iso();
}

// public Uno.Time.LocalDate get_Date() [instance]
::g::Uno::Time::LocalDate LocalDateTime::Date()
{
    ::g::Uno::Time::Instant ind1;
    ::g::Uno::Time::Instant ind2;
    int64_t dayTicks = (ind1 = _instant, (&ind1))->Ticks() % 864000000000LL;

    if (dayTicks < 0LL)
        dayTicks = dayTicks + 864000000000LL;

    return ::g::Uno::Time::LocalDate__New5(LocalDateTime__New10(::g::Uno::Time::Instant__New1((ind2 = _instant, (&ind2))->Ticks() - dayTicks), Calendar()));
}

// public int get_Day() [instance]
int32_t LocalDateTime::Day()
{
    return uPtr(Calendar())->GetDayOfMonth(_instant);
}

// public bool Equals(Uno.Time.LocalDateTime other) [instance]
bool LocalDateTime::Equals2(LocalDateTime other)
{
    return ::g::Uno::Time::Instant__op_Equality(_instant, other._instant) && ::g::Uno::Object::Equals(uPtr(Calendar()), other.Calendar());
}

// public int get_Hour() [instance]
int32_t LocalDateTime::Hour()
{
    return uPtr(Calendar())->GetHourOfDay(_instant);
}

// internal Uno.Time.Instant get_Instant() [instance]
::g::Uno::Time::Instant LocalDateTime::Instant()
{
    return _instant;
}

// public int get_Minute() [instance]
int32_t LocalDateTime::Minute()
{
    return uPtr(Calendar())->GetMinuteOfHour(_instant);
}

// public int get_Month() [instance]
int32_t LocalDateTime::Month()
{
    return uPtr(Calendar())->GetMonthOfYear(_instant);
}

// public int get_Second() [instance]
int32_t LocalDateTime::Second()
{
    return uPtr(Calendar())->GetSecondOfMinute(_instant);
}

// public long get_TickOfDay() [instance]
int64_t LocalDateTime::TickOfDay()
{
    return uPtr(Calendar())->GetTickOfDay(_instant);
}

// public Uno.Time.LocalTime get_TimeOfDay() [instance]
::g::Uno::Time::LocalTime LocalDateTime::TimeOfDay()
{
    return ::g::Uno::Time::LocalTime__New5(TickOfDay());
}

// public int get_Year() [instance]
int32_t LocalDateTime::Year()
{
    return uPtr(Calendar())->GetYear(_instant);
}

// public LocalDateTime New(int year, int month, int day, int hour, int minute, Uno.Time.CalendarSystem calendar) [static]
LocalDateTime LocalDateTime__New8(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, ::g::Uno::Time::CalendarSystem* calendar)
{
    LocalDateTime obj14;
    obj14.ctor_8(year, month, day, hour, minute, calendar);
    return obj14;
}

// internal LocalDateTime New(Uno.Time.Instant instant) [static]
LocalDateTime LocalDateTime__New9(::g::Uno::Time::Instant instant)
{
    LocalDateTime obj11;
    obj11.ctor_9(instant);
    return obj11;
}

// public LocalDateTime New(Uno.Time.Instant instant, Uno.Time.CalendarSystem calendar) [static]
LocalDateTime LocalDateTime__New10(::g::Uno::Time::Instant instant, ::g::Uno::Time::CalendarSystem* calendar)
{
    LocalDateTime obj12;
    obj12.ctor_10(instant, calendar);
    return obj12;
}

// public static operator ==(Uno.Time.LocalDateTime left, Uno.Time.LocalDateTime right) [static]
bool LocalDateTime__op_Equality(LocalDateTime left, LocalDateTime right)
{
    return left.Equals2(right);
}

// public static operator !=(Uno.Time.LocalDateTime left, Uno.Time.LocalDateTime right) [static]
bool LocalDateTime__op_Inequality(LocalDateTime left, LocalDateTime right)
{
    return !LocalDateTime__op_Equality(left, right);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/LocalTime.uno
// --------------------------------------------------------------------------

// public struct LocalTime
// {
// static LocalTime()
static void LocalTime__cctor__fn(uType* __type)
{
    LocalTime::Midnight_ = LocalTime__New2(0, 0, 0);
    LocalTime::Noon_ = LocalTime__New2(12, 0, 0);
}

static void LocalTime_build(uType* type)
{
    ::STRINGS[3] = uString::Const("hour");
    ::STRINGS[4] = uString::Const("minute");
    ::STRINGS[5] = uString::Const("second");
    ::TYPES[1] = ::g::Uno::Long_typeof();
    type->SetFields(0,
        ::TYPES[1/*long*/], offsetof(LocalTime, _ticks), 0,
        type, (uintptr_t)&LocalTime::Midnight_, uFieldFlagsStatic,
        type, (uintptr_t)&LocalTime::Noon_, uFieldFlagsStatic);
}

uStructType* LocalTime_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 3;
    options.Alignment = alignof(LocalTime);
    options.ValueSize = sizeof(LocalTime);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Time.LocalTime", options);
    type->fp_build_ = LocalTime_build;
    type->fp_cctor_ = LocalTime__cctor__fn;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))LocalTime__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))LocalTime__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))LocalTime__ToString_fn;
    return type;
}

// public LocalTime(int hour, int minute)
void LocalTime__ctor_1_fn(LocalTime* __this, int32_t* hour, int32_t* minute)
{
    __this->ctor_1(*hour, *minute);
}

// public LocalTime(int hour, int minute, int second)
void LocalTime__ctor_2_fn(LocalTime* __this, int32_t* hour, int32_t* minute, int32_t* second)
{
    __this->ctor_2(*hour, *minute, *second);
}

// internal LocalTime(long ticks)
void LocalTime__ctor_5_fn(LocalTime* __this, int64_t* ticks)
{
    __this->ctor_5(*ticks);
}

// public override sealed bool Equals(object obj)
void LocalTime__Equals_fn(LocalTime* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, __type))
        return *__retval = LocalTime__op_Equality(*__this, uUnbox<LocalTime>(__type, obj)), void();

    return *__retval = false, void();
}

// public override sealed int GetHashCode()
void LocalTime__GetHashCode_fn(LocalTime* __this, uType* __type, int32_t* __retval)
{
    int64_t ticks = __this->_ticks;
    return *__retval = ::g::Uno::Long::GetHashCode(ticks, ::TYPES[1/*long*/]), void();
}

// public int get_Hour()
void LocalTime__get_Hour_fn(LocalTime* __this, int32_t* __retval)
{
    *__retval = __this->Hour();
}

// public int get_Millisecond()
void LocalTime__get_Millisecond_fn(LocalTime* __this, int32_t* __retval)
{
    *__retval = __this->Millisecond();
}

// public int get_Minute()
void LocalTime__get_Minute_fn(LocalTime* __this, int32_t* __retval)
{
    *__retval = __this->Minute();
}

// public LocalTime New(int hour, int minute)
void LocalTime__New1_fn(int32_t* hour, int32_t* minute, LocalTime* __retval)
{
    *__retval = LocalTime__New1(*hour, *minute);
}

// public LocalTime New(int hour, int minute, int second)
void LocalTime__New2_fn(int32_t* hour, int32_t* minute, int32_t* second, LocalTime* __retval)
{
    *__retval = LocalTime__New2(*hour, *minute, *second);
}

// internal LocalTime New(long ticks)
void LocalTime__New5_fn(int64_t* ticks, LocalTime* __retval)
{
    *__retval = LocalTime__New5(*ticks);
}

// public static operator ==(Uno.Time.LocalTime lhs, Uno.Time.LocalTime rhs)
void LocalTime__op_Equality_fn(LocalTime* lhs, LocalTime* rhs, bool* __retval)
{
    *__retval = LocalTime__op_Equality(*lhs, *rhs);
}

// public static operator !=(Uno.Time.LocalTime lhs, Uno.Time.LocalTime rhs)
void LocalTime__op_Inequality_fn(LocalTime* lhs, LocalTime* rhs, bool* __retval)
{
    *__retval = LocalTime__op_Inequality(*lhs, *rhs);
}

// public int get_Second()
void LocalTime__get_Second_fn(LocalTime* __this, int32_t* __retval)
{
    *__retval = __this->Second();
}

// public override sealed string ToString()
void LocalTime__ToString_fn(LocalTime* __this, uType* __type, uString** __retval)
{
    return *__retval = uPtr(::g::Uno::Time::Text::LocalTimePattern::GeneralIsoPattern())->Format(*__this), void();
}

LocalTime LocalTime::Midnight_;
LocalTime LocalTime::Noon_;

// public LocalTime(int hour, int minute) [instance]
void LocalTime::ctor_1(int32_t hour, int32_t minute)
{
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[3/*"hour"*/], hour, 0, 23);
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[4/*"minute"*/], minute, 0, 59);
    _ticks = (((int64_t)hour * 36000000000LL) + ((int64_t)minute * 600000000LL));
}

// public LocalTime(int hour, int minute, int second) [instance]
void LocalTime::ctor_2(int32_t hour, int32_t minute, int32_t second)
{
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[3/*"hour"*/], hour, 0, 23);
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[4/*"minute"*/], minute, 0, 59);
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[5/*"second"*/], second, 0, 59);
    _ticks = ((((int64_t)hour * 36000000000LL) + ((int64_t)minute * 600000000LL)) + ((int64_t)second * 10000000LL));
}

// internal LocalTime(long ticks) [instance]
void LocalTime::ctor_5(int64_t ticks)
{
    _ticks = ticks;
}

// public int get_Hour() [instance]
int32_t LocalTime::Hour()
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetHourOfDayFromTickOfDay(_ticks);
}

// public int get_Millisecond() [instance]
int32_t LocalTime::Millisecond()
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetMillisecondOfSecondFromTickOfDay(_ticks);
}

// public int get_Minute() [instance]
int32_t LocalTime::Minute()
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetMinuteOfHourFromTickOfDay(_ticks);
}

// public int get_Second() [instance]
int32_t LocalTime::Second()
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetSecondOfMinuteFromTickOfDay(_ticks);
}

// public LocalTime New(int hour, int minute) [static]
LocalTime LocalTime__New1(int32_t hour, int32_t minute)
{
    LocalTime obj1;
    obj1.ctor_1(hour, minute);
    return obj1;
}

// public LocalTime New(int hour, int minute, int second) [static]
LocalTime LocalTime__New2(int32_t hour, int32_t minute, int32_t second)
{
    LocalTime obj2;
    obj2.ctor_2(hour, minute, second);
    return obj2;
}

// internal LocalTime New(long ticks) [static]
LocalTime LocalTime__New5(int64_t ticks)
{
    LocalTime obj5;
    obj5.ctor_5(ticks);
    return obj5;
}

// public static operator ==(Uno.Time.LocalTime lhs, Uno.Time.LocalTime rhs) [static]
bool LocalTime__op_Equality(LocalTime lhs, LocalTime rhs)
{
    LocalTime_typeof()->Init();
    return lhs._ticks == rhs._ticks;
}

// public static operator !=(Uno.Time.LocalTime lhs, Uno.Time.LocalTime rhs) [static]
bool LocalTime__op_Inequality(LocalTime lhs, LocalTime rhs)
{
    LocalTime_typeof()->Init();
    return lhs._ticks != rhs._ticks;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/Offset.uno
// -----------------------------------------------------------------------

// public struct Offset
// {
// static Offset()
static void Offset__cctor__fn(uType* __type)
{
    Offset::Zero_ = Offset__FromMilliseconds(0);
    Offset::MinValue_ = Offset__FromMilliseconds(-86399999);
    Offset::MaxValue_ = Offset__FromMilliseconds(86399999);
}

static void Offset_build(uType* type)
{
    ::STRINGS[6] = uString::Const("milliseconds");
    ::TYPES[7] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[7/*int*/], offsetof(Offset, _milliseconds), 0,
        type, (uintptr_t)&Offset::Zero_, uFieldFlagsStatic,
        type, (uintptr_t)&Offset::MinValue_, uFieldFlagsStatic,
        type, (uintptr_t)&Offset::MaxValue_, uFieldFlagsStatic);
}

uStructType* Offset_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 4;
    options.Alignment = alignof(Offset);
    options.ValueSize = sizeof(Offset);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Time.Offset", options);
    type->fp_build_ = Offset_build;
    type->fp_cctor_ = Offset__cctor__fn;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Offset__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Offset__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Offset__ToString_fn;
    return type;
}

// private Offset(int milliseconds)
void Offset__ctor_1_fn(Offset* __this, int32_t* milliseconds)
{
    __this->ctor_1(*milliseconds);
}

// public override sealed bool Equals(object obj)
void Offset__Equals_fn(Offset* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, __type))
        return *__retval = __this->Equals2(uUnbox<Offset>(__type, obj)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.Offset other)
void Offset__Equals2_fn(Offset* __this, Offset* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// public static Uno.Time.Offset FromHours(int hours)
void Offset__FromHours_fn(int32_t* hours, Offset* __retval)
{
    *__retval = Offset__FromHours(*hours);
}

// public static Uno.Time.Offset FromHoursAndMinutes(int hours, int minutes)
void Offset__FromHoursAndMinutes_fn(int32_t* hours, int32_t* minutes, Offset* __retval)
{
    *__retval = Offset__FromHoursAndMinutes(*hours, *minutes);
}

// public static Uno.Time.Offset FromMilliseconds(int milliseconds)
void Offset__FromMilliseconds_fn(int32_t* milliseconds, Offset* __retval)
{
    *__retval = Offset__FromMilliseconds(*milliseconds);
}

// public override sealed int GetHashCode()
void Offset__GetHashCode_fn(Offset* __this, uType* __type, int32_t* __retval)
{
    return *__retval = ::g::Uno::Int::GetHashCode(__this->Milliseconds(), ::TYPES[7/*int*/]), void();
}

// public int get_Milliseconds()
void Offset__get_Milliseconds_fn(Offset* __this, int32_t* __retval)
{
    *__retval = __this->Milliseconds();
}

// private Offset New(int milliseconds)
void Offset__New1_fn(int32_t* milliseconds, Offset* __retval)
{
    *__retval = Offset__New1(*milliseconds);
}

// public static operator ==(Uno.Time.Offset left, Uno.Time.Offset right)
void Offset__op_Equality_fn(Offset* left, Offset* right, bool* __retval)
{
    *__retval = Offset__op_Equality(*left, *right);
}

// public long get_Ticks()
void Offset__get_Ticks_fn(Offset* __this, int64_t* __retval)
{
    *__retval = __this->Ticks();
}

// public override sealed string ToString()
void Offset__ToString_fn(Offset* __this, uType* __type, uString** __retval)
{
    return *__retval = uPtr(::g::Uno::Time::Text::OffsetPattern::GeneralIsoPattern())->Format(*__this), void();
}

Offset Offset::Zero_;
Offset Offset::MinValue_;
Offset Offset::MaxValue_;

// private Offset(int milliseconds) [instance]
void Offset::ctor_1(int32_t milliseconds)
{
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[6/*"milliseconds"*/], milliseconds, -86399999, 86399999);
    _milliseconds = milliseconds;
}

// public bool Equals(Uno.Time.Offset other) [instance]
bool Offset::Equals2(Offset other)
{
    return Milliseconds() == other.Milliseconds();
}

// public int get_Milliseconds() [instance]
int32_t Offset::Milliseconds()
{
    return _milliseconds;
}

// public long get_Ticks() [instance]
int64_t Offset::Ticks()
{
    return (int64_t)Milliseconds() * 10000LL;
}

// public static Uno.Time.Offset FromHours(int hours) [static]
Offset Offset__FromHours(int32_t hours)
{
    Offset_typeof()->Init();
    return Offset__New1(hours * 3600000);
}

// public static Uno.Time.Offset FromHoursAndMinutes(int hours, int minutes) [static]
Offset Offset__FromHoursAndMinutes(int32_t hours, int32_t minutes)
{
    Offset_typeof()->Init();
    return Offset__New1((hours * 3600000) + (minutes * 60000));
}

// public static Uno.Time.Offset FromMilliseconds(int milliseconds) [static]
Offset Offset__FromMilliseconds(int32_t milliseconds)
{
    Offset_typeof()->Init();
    return Offset__New1(milliseconds);
}

// private Offset New(int milliseconds) [static]
Offset Offset__New1(int32_t milliseconds)
{
    Offset obj1;
    obj1.ctor_1(milliseconds);
    return obj1;
}

// public static operator ==(Uno.Time.Offset left, Uno.Time.Offset right) [static]
bool Offset__op_Equality(Offset left, Offset right)
{
    Offset_typeof()->Init();
    return ::g::Uno::Int::Equals(left.Milliseconds(), ::TYPES[7/*int*/], uBox<int32_t>(::TYPES[7/*int*/], right.Milliseconds()));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/Utilities/Preconditions.uno
// ----------------------------------------------------------------------------------------

// internal static class Preconditions
// {
static void Preconditions_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Value should be in range [");
    ::STRINGS[8] = uString::Const("-");
    ::STRINGS[9] = uString::Const("]");
}

uClassType* Preconditions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Time.Preconditions", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->fp_build_ = Preconditions_build;
    return type;
}

// internal static void CheckArgumentRange(string paramName, int value, int minInclusive, int maxInclusive)
void Preconditions__CheckArgumentRange_fn(uString* paramName, int32_t* value, int32_t* minInclusive, int32_t* maxInclusive)
{
    Preconditions::CheckArgumentRange(paramName, *value, *minInclusive, *maxInclusive);
}

// internal static T CheckNotNull<T>(T argument, string paramName)
void Preconditions__CheckNotNull_fn(uType* __type, uObject* argument, uString* paramName, uObject** __retval)
{
    *__retval = Preconditions::CheckNotNull(__type, argument, paramName);
}

// internal static void CheckArgumentRange(string paramName, int value, int minInclusive, int maxInclusive) [static]
void Preconditions::CheckArgumentRange(uString* paramName, int32_t value, int32_t minInclusive, int32_t maxInclusive)
{
    if ((value < minInclusive) || (value > maxInclusive))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(paramName, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[7/*"Value shoul...*/], uBox<int32_t>(::TYPES[7/*int*/], minInclusive)), ::STRINGS[8/*"-"*/]), uBox<int32_t>(::TYPES[7/*int*/], maxInclusive)), ::STRINGS[9/*"]"*/])));
}

// internal static T CheckNotNull<T>(T argument, string paramName) [static]
uObject* Preconditions::CheckNotNull(uType* __type, uObject* argument, uString* paramName)
{
    if (argument == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(paramName));

    return argument;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/ZonedDateTime.uno
// ------------------------------------------------------------------------------

// public sealed class ZonedDateTime
// {
static void ZonedDateTime_build(uType* type)
{
    ::STRINGS[10] = uString::Const("zone");
    ::STRINGS[2] = uString::Const("calendar");
    ::STRINGS[11] = uString::Const("targetZone");
    ::TYPES[8] = ::g::Uno::Time::Preconditions_typeof()->MakeMethod(0/*CheckNotNull<Uno.Time.DateTimeZone>*/, ::g::Uno::Time::DateTimeZone_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Time::Preconditions_typeof()->MakeMethod(0/*CheckNotNull<Uno.Time.CalendarSystem>*/, ::g::Uno::Time::CalendarSystem_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.LocalDateTime>*/, ::g::Uno::Time::LocalDateTime_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.Offset>*/, ::g::Uno::Time::Offset_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.DateTimeZone>*/, ::g::Uno::Time::DateTimeZone_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Time::LocalDateTime_typeof();
    ::TYPES[11] = ::g::Uno::Time::Offset_typeof();
    type->SetDependencies(
        ::g::Uno::Time::DateTimeZone_typeof(),
        ::g::Uno::Time::Offset_typeof());
    type->SetFields(0,
        ::TYPES[3/*Uno.Time.LocalDateTime*/], offsetof(ZonedDateTime, _localDateTime), 0,
        ::g::Uno::Time::DateTimeZone_typeof(), offsetof(ZonedDateTime, _zone), 0,
        ::TYPES[11/*Uno.Time.Offset*/], offsetof(ZonedDateTime, _offset), 0);
}

uType* ZonedDateTime_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ZonedDateTime);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.ZonedDateTime", options);
    type->fp_build_ = ZonedDateTime_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))ZonedDateTime__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))ZonedDateTime__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ZonedDateTime__ToString_fn;
    return type;
}

// public ZonedDateTime(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone)
void ZonedDateTime__ctor__fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone)
{
    __this->ctor_(*instant, zone);
}

// public ZonedDateTime(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone, Uno.Time.CalendarSystem calendar)
void ZonedDateTime__ctor_1_fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar)
{
    __this->ctor_1(*instant, zone, calendar);
}

// public Uno.Time.LocalDate get_Date()
void ZonedDateTime__get_Date_fn(ZonedDateTime* __this, ::g::Uno::Time::LocalDate* __retval)
{
    *__retval = __this->Date();
}

// public int get_Day()
void ZonedDateTime__get_Day_fn(ZonedDateTime* __this, int32_t* __retval)
{
    *__retval = __this->Day();
}

// public override sealed bool Equals(object obj)
void ZonedDateTime__Equals_fn(ZonedDateTime* __this, uObject* obj, bool* __retval)
{
    if (uIs(obj, __this->__type))
        return *__retval = __this->Equals2(uCast<ZonedDateTime*>(obj, __this->__type)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.ZonedDateTime other)
void ZonedDateTime__Equals2_fn(ZonedDateTime* __this, ZonedDateTime* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode()
void ZonedDateTime__GetHashCode_fn(ZonedDateTime* __this, int32_t* __retval)
{
    int32_t ret33;
    int32_t ret34;
    int32_t ret35;
    int32_t hash = ::g::Uno::Time::HashCodeHelper::Initialize();
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[9/*Uno.Time.HashCodeHelper.Hash<Uno.Time.LocalDateTime>*/], uCRef<int32_t>(hash), uCRef(__this->_localDateTime), &ret33), ret33);
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[2/*Uno.Time.HashCodeHelper.Hash<Uno.Time.Offset>*/], uCRef<int32_t>(hash), uCRef(__this->_offset), &ret34), ret34);
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[10/*Uno.Time.HashCodeHelper.Hash<Uno.Time.DateTimeZone>*/], uCRef<int32_t>(hash), __this->_zone, &ret35), ret35);
    return *__retval = hash, void();
}

// public int get_Hour()
void ZonedDateTime__get_Hour_fn(ZonedDateTime* __this, int32_t* __retval)
{
    *__retval = __this->Hour();
}

// internal Uno.Time.Instant get_Instant()
void ZonedDateTime__get_Instant_fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* __retval)
{
    *__retval = __this->Instant();
}

// public Uno.Time.LocalDateTime get_LocalDateTime()
void ZonedDateTime__get_LocalDateTime_fn(ZonedDateTime* __this, ::g::Uno::Time::LocalDateTime* __retval)
{
    *__retval = __this->LocalDateTime();
}

// public int get_Minute()
void ZonedDateTime__get_Minute_fn(ZonedDateTime* __this, int32_t* __retval)
{
    *__retval = __this->Minute();
}

// public int get_Month()
void ZonedDateTime__get_Month_fn(ZonedDateTime* __this, int32_t* __retval)
{
    *__retval = __this->Month();
}

// public ZonedDateTime New(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone)
void ZonedDateTime__New1_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone, ZonedDateTime** __retval)
{
    *__retval = ZonedDateTime::New1(*instant, zone);
}

// public ZonedDateTime New(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone, Uno.Time.CalendarSystem calendar)
void ZonedDateTime__New2_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar, ZonedDateTime** __retval)
{
    *__retval = ZonedDateTime::New2(*instant, zone, calendar);
}

// public static Uno.Time.ZonedDateTime get_Now()
void ZonedDateTime__get_Now_fn(ZonedDateTime** __retval)
{
    *__retval = ZonedDateTime::Now();
}

// public Uno.Time.Offset get_Offset()
void ZonedDateTime__get_Offset_fn(ZonedDateTime* __this, ::g::Uno::Time::Offset* __retval)
{
    *__retval = __this->Offset();
}

// public int get_Second()
void ZonedDateTime__get_Second_fn(ZonedDateTime* __this, int32_t* __retval)
{
    *__retval = __this->Second();
}

// public Uno.Time.LocalTime get_TimeOfDay()
void ZonedDateTime__get_TimeOfDay_fn(ZonedDateTime* __this, ::g::Uno::Time::LocalTime* __retval)
{
    *__retval = __this->TimeOfDay();
}

// public Uno.Time.Instant ToInstant()
void ZonedDateTime__ToInstant_fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* __retval)
{
    *__retval = __this->ToInstant();
}

// public override sealed string ToString()
void ZonedDateTime__ToString_fn(ZonedDateTime* __this, uString** __retval)
{
    ::g::Uno::Time::LocalDateTime ind25;
    ::g::Uno::Time::Offset ind26;
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((ind25 = __this->_localDateTime, (&ind25))->ToString(::TYPES[3/*Uno.Time.LocalDateTime*/]), uPtr(__this->_zone)->ToString()), (ind26 = __this->_offset, (&ind26))->ToString(::TYPES[11/*Uno.Time.Offset*/])), void();
}

// public Uno.Time.ZonedDateTime WithZone(Uno.Time.DateTimeZone targetZone)
void ZonedDateTime__WithZone_fn(ZonedDateTime* __this, ::g::Uno::Time::DateTimeZone* targetZone, ZonedDateTime** __retval)
{
    *__retval = __this->WithZone(targetZone);
}

// public int get_Year()
void ZonedDateTime__get_Year_fn(ZonedDateTime* __this, int32_t* __retval)
{
    *__retval = __this->Year();
}

// public Uno.Time.DateTimeZone get_Zone()
void ZonedDateTime__get_Zone_fn(ZonedDateTime* __this, ::g::Uno::Time::DateTimeZone** __retval)
{
    *__retval = __this->Zone();
}

// public ZonedDateTime(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone) [instance]
void ZonedDateTime::ctor_(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone)
{
    ctor_1(instant, zone, ::g::Uno::Time::CalendarSystem::Iso());
}

// public ZonedDateTime(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone, Uno.Time.CalendarSystem calendar) [instance]
void ZonedDateTime::ctor_1(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar)
{
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[8/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.DateTimeZone>*/], zone, ::STRINGS[10/*"zone"*/]);
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[4/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.CalendarSystem>*/], calendar, ::STRINGS[2/*"calendar"*/]);
    _offset = uPtr(zone)->GetUtcOffset(::g::Uno::Time::LocalDateTime__New10(instant, calendar));
    _localDateTime = ::g::Uno::Time::LocalDateTime__New10(instant.Plus1(_offset), calendar);
    _zone = zone;
}

// public Uno.Time.LocalDate get_Date() [instance]
::g::Uno::Time::LocalDate ZonedDateTime::Date()
{
    ::g::Uno::Time::LocalDateTime ind2;
    return (ind2 = _localDateTime, (&ind2))->Date();
}

// public int get_Day() [instance]
int32_t ZonedDateTime::Day()
{
    ::g::Uno::Time::LocalDateTime ind14;
    return (ind14 = _localDateTime, (&ind14))->Day();
}

// public bool Equals(Uno.Time.ZonedDateTime other) [instance]
bool ZonedDateTime::Equals2(ZonedDateTime* other)
{
    return (::g::Uno::Time::LocalDateTime__op_Equality(LocalDateTime(), uPtr(other)->LocalDateTime()) && ::g::Uno::Time::Offset__op_Equality(Offset(), uPtr(other)->Offset())) && uPtr(Zone())->Equals2(uPtr(other)->Zone());
}

// public int get_Hour() [instance]
int32_t ZonedDateTime::Hour()
{
    ::g::Uno::Time::LocalDateTime ind17;
    return (ind17 = _localDateTime, (&ind17))->Hour();
}

// internal Uno.Time.Instant get_Instant() [instance]
::g::Uno::Time::Instant ZonedDateTime::Instant()
{
    ::g::Uno::Time::LocalDateTime ind4;
    return (ind4 = _localDateTime, (&ind4))->Instant();
}

// public Uno.Time.LocalDateTime get_LocalDateTime() [instance]
::g::Uno::Time::LocalDateTime ZonedDateTime::LocalDateTime()
{
    return _localDateTime;
}

// public int get_Minute() [instance]
int32_t ZonedDateTime::Minute()
{
    ::g::Uno::Time::LocalDateTime ind19;
    return (ind19 = _localDateTime, (&ind19))->Minute();
}

// public int get_Month() [instance]
int32_t ZonedDateTime::Month()
{
    ::g::Uno::Time::LocalDateTime ind11;
    return (ind11 = _localDateTime, (&ind11))->Month();
}

// public Uno.Time.Offset get_Offset() [instance]
::g::Uno::Time::Offset ZonedDateTime::Offset()
{
    return _offset;
}

// public int get_Second() [instance]
int32_t ZonedDateTime::Second()
{
    ::g::Uno::Time::LocalDateTime ind20;
    return (ind20 = _localDateTime, (&ind20))->Second();
}

// public Uno.Time.LocalTime get_TimeOfDay() [instance]
::g::Uno::Time::LocalTime ZonedDateTime::TimeOfDay()
{
    ::g::Uno::Time::LocalDateTime ind5;
    return (ind5 = _localDateTime, (&ind5))->TimeOfDay();
}

// public Uno.Time.Instant ToInstant() [instance]
::g::Uno::Time::Instant ZonedDateTime::ToInstant()
{
    ::g::Uno::Time::LocalDateTime ind27;
    return (ind27 = _localDateTime, (&ind27))->Instant().Minus2(_offset);
}

// public Uno.Time.ZonedDateTime WithZone(Uno.Time.DateTimeZone targetZone) [instance]
ZonedDateTime* ZonedDateTime::WithZone(::g::Uno::Time::DateTimeZone* targetZone)
{
    ::g::Uno::Time::LocalDateTime ind24;
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[8/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.DateTimeZone>*/], targetZone, ::STRINGS[11/*"targetZone"*/]);
    return ZonedDateTime::New2(ToInstant(), targetZone, (ind24 = _localDateTime, (&ind24))->Calendar());
}

// public int get_Year() [instance]
int32_t ZonedDateTime::Year()
{
    ::g::Uno::Time::LocalDateTime ind7;
    return (ind7 = _localDateTime, (&ind7))->Year();
}

// public Uno.Time.DateTimeZone get_Zone() [instance]
::g::Uno::Time::DateTimeZone* ZonedDateTime::Zone()
{
    ::g::Uno::Time::DateTimeZone* ind28;
    ind28 = _zone;
    return (ind28 != NULL) ? ind28 : (::g::Uno::Time::DateTimeZone*)::g::Uno::Time::DateTimeZone::Utc();
}

// public ZonedDateTime New(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone) [static]
ZonedDateTime* ZonedDateTime::New1(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone)
{
    ZonedDateTime* obj30 = (ZonedDateTime*)uNew(ZonedDateTime_typeof());
    obj30->ctor_(instant, zone);
    return obj30;
}

// public ZonedDateTime New(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone, Uno.Time.CalendarSystem calendar) [static]
ZonedDateTime* ZonedDateTime::New2(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar)
{
    ZonedDateTime* obj31 = (ZonedDateTime*)uNew(ZonedDateTime_typeof());
    obj31->ctor_1(instant, zone, calendar);
    return obj31;
}

// public static Uno.Time.ZonedDateTime get_Now() [static]
ZonedDateTime* ZonedDateTime::Now()
{
    int64_t ticks = ::g::Uno::Diagnostics::Clock::GetTicks();
    return ZonedDateTime::New1(::g::Uno::Time::Instant__New1(ticks), ::g::Uno::Time::DeviceTimeZone::New1());
}
// }

}}} // ::g::Uno::Time
