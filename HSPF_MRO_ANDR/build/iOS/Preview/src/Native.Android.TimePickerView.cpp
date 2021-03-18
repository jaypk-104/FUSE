// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/Android/TimePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Native.Android.TimePickerView.h>
#include <Native.ITimePickerHost.h>

namespace g{
namespace Native{
namespace Android{

// internal sealed extern class TimePickerView
// {
static void TimePickerView_build(uType* type)
{
}

uType* TimePickerView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TimePickerView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Native.Android.TimePickerView", options);
    type->fp_build_ = TimePickerView_build;
    return type;
}

// public TimePickerView(Native.ITimePickerHost host)
void TimePickerView__ctor__fn(TimePickerView* __this, uObject* host)
{
    __this->ctor_(host);
}

// public TimePickerView New(Native.ITimePickerHost host)
void TimePickerView__New1_fn(uObject* host, TimePickerView** __retval)
{
    *__retval = TimePickerView::New1(host);
}

// public TimePickerView(Native.ITimePickerHost host) [instance]
void TimePickerView::ctor_(uObject* host)
{
}

// public TimePickerView New(Native.ITimePickerHost host) [static]
TimePickerView* TimePickerView::New1(uObject* host)
{
    TimePickerView* obj1 = (TimePickerView*)uNew(TimePickerView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

}}} // ::g::Native::Android
