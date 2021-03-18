// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Native.IDatePickerView.h>
#include <Native.ITimePickerView.h>

namespace g{
namespace Native{

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/DatePicker.uno
// ------------------------------------------------------------------------

// internal abstract interface IDatePickerView
// {
uInterfaceType* IDatePickerView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Native.IDatePickerView", 0, 0);
    return type;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/TimePicker.uno
// ------------------------------------------------------------------------

// internal abstract interface ITimePickerView
// {
uInterfaceType* ITimePickerView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Native.ITimePickerView", 0, 0);
    return type;
}
// }

}} // ::g::Native
