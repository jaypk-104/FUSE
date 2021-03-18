// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/DatePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Native{

// internal abstract interface IDatePickerHost
// {
uInterfaceType* IDatePickerHost_typeof();

struct IDatePickerHost
{
    void(*fp_OnDateChanged)(uObject*);
    static void OnDateChanged(const uInterface& __this) { __this.VTable<IDatePickerHost>()->fp_OnDateChanged(__this); }
};
// }

}} // ::g::Native
