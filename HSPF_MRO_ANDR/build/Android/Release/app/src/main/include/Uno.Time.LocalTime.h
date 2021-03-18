// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Time/LocalTime.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace Time{struct LocalTime;}}}

namespace g{
namespace Uno{
namespace Time{

// public struct LocalTime
// {
uStructType* LocalTime_typeof();
void LocalTime__ctor_1_fn(LocalTime* __this, int32_t* hour, int32_t* minute);
void LocalTime__ctor_2_fn(LocalTime* __this, int32_t* hour, int32_t* minute, int32_t* second);
void LocalTime__ctor_5_fn(LocalTime* __this, int64_t* ticks);
void LocalTime__Equals_fn(LocalTime* __this, uType* __type, uObject* obj, bool* __retval);
void LocalTime__GetHashCode_fn(LocalTime* __this, uType* __type, int32_t* __retval);
void LocalTime__get_Hour_fn(LocalTime* __this, int32_t* __retval);
void LocalTime__get_Millisecond_fn(LocalTime* __this, int32_t* __retval);
void LocalTime__get_Minute_fn(LocalTime* __this, int32_t* __retval);
void LocalTime__New1_fn(int32_t* hour, int32_t* minute, LocalTime* __retval);
void LocalTime__New2_fn(int32_t* hour, int32_t* minute, int32_t* second, LocalTime* __retval);
void LocalTime__New5_fn(int64_t* ticks, LocalTime* __retval);
void LocalTime__op_Equality_fn(LocalTime* lhs, LocalTime* rhs, bool* __retval);
void LocalTime__op_Inequality_fn(LocalTime* lhs, LocalTime* rhs, bool* __retval);
void LocalTime__get_Second_fn(LocalTime* __this, int32_t* __retval);
void LocalTime__ToString_fn(LocalTime* __this, uType* __type, uString** __retval);

struct LocalTime
{
    static LocalTime Midnight_;
    static LocalTime& Midnight() { return LocalTime_typeof()->Init(), Midnight_; }
    static LocalTime Noon_;
    static LocalTime& Noon() { return LocalTime_typeof()->Init(), Noon_; }
    int64_t _ticks;

    void ctor_1(int32_t hour, int32_t minute);
    void ctor_2(int32_t hour, int32_t minute, int32_t second);
    void ctor_5(int64_t ticks);
    bool Equals(uType* __type, uObject* obj) { bool __retval; return LocalTime__Equals_fn(this, __type, obj, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return LocalTime__GetHashCode_fn(this, __type, &__retval), __retval; }
    int32_t Hour();
    int32_t Millisecond();
    int32_t Minute();
    int32_t Second();
    uString* ToString(uType* __type) { uString* __retval; return LocalTime__ToString_fn(this, __type, &__retval), __retval; }
};

LocalTime LocalTime__New1(int32_t hour, int32_t minute);
LocalTime LocalTime__New2(int32_t hour, int32_t minute, int32_t second);
LocalTime LocalTime__New5(int64_t ticks);
bool LocalTime__op_Equality(LocalTime lhs, LocalTime rhs);
bool LocalTime__op_Inequality(LocalTime lhs, LocalTime rhs);
// }

}}} // ::g::Uno::Time
