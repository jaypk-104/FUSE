// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/TimePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Native{

// internal abstract interface ITimePickerHost
// {
uInterfaceType* ITimePickerHost_typeof();

struct ITimePickerHost
{
    void(*fp_OnTimeChanged)(uObject*);
    static void OnTimeChanged(const uInterface& __this) { __this.VTable<ITimePickerHost>()->fp_OnTimeChanged(__this); }
};
// }

}} // ::g::Native
