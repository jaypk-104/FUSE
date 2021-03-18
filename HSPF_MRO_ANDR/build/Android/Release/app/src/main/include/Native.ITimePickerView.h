// This file was generated based on Projects/NativeControls/TimePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{struct LocalTime;}}}

namespace g{
namespace Native{

// internal abstract interface ITimePickerView
// {
uInterfaceType* ITimePickerView_typeof();

struct ITimePickerView
{
    void(*fp_get_CurrentTime)(uObject*, ::g::Uno::Time::LocalTime*);
    void(*fp_set_CurrentTime)(uObject*, ::g::Uno::Time::LocalTime*);
    static ::g::Uno::Time::LocalTime CurrentTime(const uInterface& __this);
    static void CurrentTime(const uInterface& __this, ::g::Uno::Time::LocalTime value);
};

}} // ::g::Native

#include <Uno.Time.LocalTime.h>

namespace g{
namespace Native{

inline ::g::Uno::Time::LocalTime ITimePickerView::CurrentTime(const uInterface& __this) { ::g::Uno::Time::LocalTime __retval; return __this.VTable<ITimePickerView>()->fp_get_CurrentTime(__this, &__retval), __retval; }
inline void ITimePickerView::CurrentTime(const uInterface& __this, ::g::Uno::Time::LocalTime value) { __this.VTable<ITimePickerView>()->fp_set_CurrentTime(__this, &value); }
// }

}} // ::g::Native
