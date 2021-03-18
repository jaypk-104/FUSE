// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/DatePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{struct LocalDate;}}}

namespace g{
namespace Native{

// internal abstract interface IDatePickerView
// {
uInterfaceType* IDatePickerView_typeof();

struct IDatePickerView
{
    void(*fp_get_CurrentDate)(uObject*, ::g::Uno::Time::LocalDate*);
    void(*fp_set_CurrentDate)(uObject*, ::g::Uno::Time::LocalDate*);
    void(*fp_set_MaxDate)(uObject*, ::g::Uno::Time::LocalDate*);
    void(*fp_set_MinDate)(uObject*, ::g::Uno::Time::LocalDate*);
    static ::g::Uno::Time::LocalDate CurrentDate(const uInterface& __this);
    static void CurrentDate(const uInterface& __this, ::g::Uno::Time::LocalDate value);
    static void MaxDate(const uInterface& __this, ::g::Uno::Time::LocalDate value);
    static void MinDate(const uInterface& __this, ::g::Uno::Time::LocalDate value);
};

}} // ::g::Native

#include <Uno.Time.LocalDate.h>

namespace g{
namespace Native{

inline ::g::Uno::Time::LocalDate IDatePickerView::CurrentDate(const uInterface& __this) { ::g::Uno::Time::LocalDate __retval; return __this.VTable<IDatePickerView>()->fp_get_CurrentDate(__this, &__retval), __retval; }
inline void IDatePickerView::CurrentDate(const uInterface& __this, ::g::Uno::Time::LocalDate value) { __this.VTable<IDatePickerView>()->fp_set_CurrentDate(__this, &value); }
inline void IDatePickerView::MaxDate(const uInterface& __this, ::g::Uno::Time::LocalDate value) { __this.VTable<IDatePickerView>()->fp_set_MaxDate(__this, &value); }
inline void IDatePickerView::MinDate(const uInterface& __this, ::g::Uno::Time::LocalDate value) { __this.VTable<IDatePickerView>()->fp_set_MinDate(__this, &value); }
// }

}} // ::g::Native
