// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/iOS/TimePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Native.ITimePickerView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Native{namespace iOS{struct TimePickerView;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Time{struct LocalTime;}}}

namespace g{
namespace Native{
namespace iOS{

// internal sealed extern class TimePickerView
// {
struct TimePickerView_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Native::ITimePickerView interface3;
};

TimePickerView_type* TimePickerView_typeof();
void TimePickerView__ctor_5_fn(TimePickerView* __this, uObject* host);
void TimePickerView__Create_fn(::g::ObjC::Object** __retval);
void TimePickerView__get_CurrentTime_fn(TimePickerView* __this, ::g::Uno::Time::LocalTime* __retval);
void TimePickerView__set_CurrentTime_fn(TimePickerView* __this, ::g::Uno::Time::LocalTime* value);
void TimePickerView__Dispose_fn(TimePickerView* __this);
void TimePickerView__New3_fn(uObject* host, TimePickerView** __retval);
void TimePickerView__OnTimeChanged_fn(TimePickerView* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* args);

struct TimePickerView : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong<uObject*> _host;
    uStrong<uObject*> _valueChangedEvent;

    void ctor_5(uObject* host);
    ::g::Uno::Time::LocalTime CurrentTime();
    void CurrentTime(::g::Uno::Time::LocalTime value);
    void OnTimeChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* args);
    static ::g::ObjC::Object* Create();
    static TimePickerView* New3(uObject* host);
};
// }

}}} // ::g::Native::iOS
