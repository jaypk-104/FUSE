// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/DatePicker.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Native.DateExtensions.h>
#include <Uno.Data.Json.JsonReader.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.Time.LocalDate.h>
static uString* STRINGS[9];
static uType* TYPES[1];

namespace g{
namespace Native{

// internal static class DateExtensions
// {
static void DateExtensions_build(uType* type)
{
    ::STRINGS[0] = uString::Const("year");
    ::STRINGS[1] = uString::Const("month");
    ::STRINGS[2] = uString::Const("day");
    ::STRINGS[3] = uString::Const("\"year\":");
    ::STRINGS[4] = uString::Const(",");
    ::STRINGS[5] = uString::Const("\"month\":");
    ::STRINGS[6] = uString::Const("\"day\":");
    ::STRINGS[7] = uString::Const("{");
    ::STRINGS[8] = uString::Const("}");
    ::TYPES[0] = ::g::Uno::Int_typeof();
}

uClassType* DateExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Native.DateExtensions", options);
    type->fp_build_ = DateExtensions_build;
    return type;
}

// public static Uno.Time.LocalDate FromJSON(Uno.Data.Json.JsonReader json)
void DateExtensions__FromJSON_fn(::g::Uno::Data::Json::JsonReader* json, ::g::Uno::Time::LocalDate* __retval)
{
    *__retval = DateExtensions::FromJSON(json);
}

// public static string ToJSON(Uno.Time.LocalDate localDate)
void DateExtensions__ToJSON_fn(::g::Uno::Time::LocalDate* localDate, uString** __retval)
{
    *__retval = DateExtensions::ToJSON(*localDate);
}

// public static Uno.Time.LocalDate FromJSON(Uno.Data.Json.JsonReader json) [static]
::g::Uno::Time::LocalDate DateExtensions::FromJSON(::g::Uno::Data::Json::JsonReader* json)
{
    uStackFrame __("Native.DateExtensions", "FromJSON(Uno.Data.Json.JsonReader)");
    int32_t year = (int32_t)uPtr(uPtr(json)->Item1(::STRINGS[0/*"year"*/]))->AsNumber();
    int32_t month = (int32_t)uPtr(json->Item1(::STRINGS[1/*"month"*/]))->AsNumber();
    int32_t day = (int32_t)uPtr(json->Item1(::STRINGS[2/*"day"*/]))->AsNumber();
    return ::g::Uno::Time::LocalDate__New1(year, month, day);
}

// public static string ToJSON(Uno.Time.LocalDate localDate) [static]
uString* DateExtensions::ToJSON(::g::Uno::Time::LocalDate localDate)
{
    uStackFrame __("Native.DateExtensions", "ToJSON(Uno.Time.LocalDate)");
    uString* year = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[3/*"\"year\":"*/], ::g::Uno::Int::ToString(localDate.Year(), ::TYPES[0/*int*/])), ::STRINGS[4/*","*/]);
    uString* month = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[5/*"\"month\":"*/], ::g::Uno::Int::ToString(localDate.Month(), ::TYPES[0/*int*/])), ::STRINGS[4/*","*/]);
    uString* day = ::g::Uno::String::op_Addition2(::STRINGS[6/*"\"day\":"*/], ::g::Uno::Int::ToString(localDate.Day(), ::TYPES[0/*int*/]));
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[7/*"{"*/], year), month), day), ::STRINGS[8/*"}"*/]);
}
// }

}} // ::g::Native
