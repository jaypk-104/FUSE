// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/LocalDate.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Time.LocalDateTime.h>
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace Time{struct CalendarSystem;}}}
namespace g{namespace Uno{namespace Time{struct LocalDate;}}}

namespace g{
namespace Uno{
namespace Time{

// public struct LocalDate
// {
uStructType* LocalDate_typeof();
void LocalDate__ctor_1_fn(LocalDate* __this, int32_t* year, int32_t* month, int32_t* day);
void LocalDate__ctor_2_fn(LocalDate* __this, int32_t* year, int32_t* month, int32_t* day, ::g::Uno::Time::CalendarSystem* calendar);
void LocalDate__ctor_5_fn(LocalDate* __this, ::g::Uno::Time::LocalDateTime* localTime);
void LocalDate__get_Day_fn(LocalDate* __this, int32_t* __retval);
void LocalDate__Equals_fn(LocalDate* __this, uType* __type, uObject* obj, bool* __retval);
void LocalDate__GetHashCode_fn(LocalDate* __this, uType* __type, int32_t* __retval);
void LocalDate__get_Month_fn(LocalDate* __this, int32_t* __retval);
void LocalDate__New1_fn(int32_t* year, int32_t* month, int32_t* day, LocalDate* __retval);
void LocalDate__New5_fn(::g::Uno::Time::LocalDateTime* localTime, LocalDate* __retval);
void LocalDate__op_Equality_fn(LocalDate* lhs, LocalDate* rhs, bool* __retval);
void LocalDate__op_Inequality_fn(LocalDate* lhs, LocalDate* rhs, bool* __retval);
void LocalDate__ToString_fn(LocalDate* __this, uType* __type, uString** __retval);
void LocalDate__get_Year_fn(LocalDate* __this, int32_t* __retval);

struct LocalDate
{
    ::g::Uno::Time::LocalDateTime _localTime;

    void ctor_1(int32_t year, int32_t month, int32_t day);
    void ctor_2(int32_t year, int32_t month, int32_t day, ::g::Uno::Time::CalendarSystem* calendar);
    void ctor_5(::g::Uno::Time::LocalDateTime localTime);
    int32_t Day();
    bool Equals(uType* __type, uObject* obj) { bool __retval; return LocalDate__Equals_fn(this, __type, obj, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return LocalDate__GetHashCode_fn(this, __type, &__retval), __retval; }
    int32_t Month();
    uString* ToString(uType* __type) { uString* __retval; return LocalDate__ToString_fn(this, __type, &__retval), __retval; }
    int32_t Year();
};

LocalDate LocalDate__New1(int32_t year, int32_t month, int32_t day);
LocalDate LocalDate__New5(::g::Uno::Time::LocalDateTime localTime);
bool LocalDate__op_Equality(LocalDate lhs, LocalDate rhs);
bool LocalDate__op_Inequality(LocalDate lhs, LocalDate rhs);
// }

}}} // ::g::Uno::Time
