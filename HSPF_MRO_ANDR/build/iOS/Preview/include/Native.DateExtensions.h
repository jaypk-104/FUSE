// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/DatePicker.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Native{struct DateExtensions;}}
namespace g{namespace Uno{namespace Data{namespace Json{struct JsonReader;}}}}
namespace g{namespace Uno{namespace Time{struct LocalDate;}}}

namespace g{
namespace Native{

// internal static class DateExtensions
// {
uClassType* DateExtensions_typeof();
void DateExtensions__FromJSON_fn(::g::Uno::Data::Json::JsonReader* json, ::g::Uno::Time::LocalDate* __retval);
void DateExtensions__ToJSON_fn(::g::Uno::Time::LocalDate* localDate, uString** __retval);

struct DateExtensions : uObject
{
    static ::g::Uno::Time::LocalDate FromJSON(::g::Uno::Data::Json::JsonReader* json);
    static uString* ToJSON(::g::Uno::Time::LocalDate localDate);
};
// }

}} // ::g::Native
