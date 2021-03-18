// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/Android/DatePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Native.Android.DatePickerView.h>
#include <Native.IDatePickerHost.h>

namespace g{
namespace Native{
namespace Android{

// internal sealed extern class DatePickerView
// {
static void DatePickerView_build(uType* type)
{
}

uType* DatePickerView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(DatePickerView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Native.Android.DatePickerView", options);
    type->fp_build_ = DatePickerView_build;
    return type;
}

// public DatePickerView(Native.IDatePickerHost host)
void DatePickerView__ctor__fn(DatePickerView* __this, uObject* host)
{
    __this->ctor_(host);
}

// public DatePickerView New(Native.IDatePickerHost host)
void DatePickerView__New1_fn(uObject* host, DatePickerView** __retval)
{
    *__retval = DatePickerView::New1(host);
}

// public DatePickerView(Native.IDatePickerHost host) [instance]
void DatePickerView::ctor_(uObject* host)
{
}

// public DatePickerView New(Native.IDatePickerHost host) [static]
DatePickerView* DatePickerView::New1(uObject* host)
{
    DatePickerView* obj1 = (DatePickerView*)uNew(DatePickerView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

}}} // ::g::Native::Android
