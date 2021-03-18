// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/iOS/TimePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Native.iOS.DateExtensions.h>
#include <Native.iOS.TimePickerView.h>
#include <Native.iOS.UIControlEvent.h>
#include <Native.ITimePickerHost.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action2-2.h>
#include <uObjC.Foreign.h>
#include <Uno.Time.LocalTime.h>
static uType* TYPES[3];

namespace g{
namespace Native{
namespace iOS{

// internal sealed extern class TimePickerView
// {
static void TimePickerView_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    ::TYPES[2] = ::g::Native::ITimePickerHost_typeof();
    type->SetInterfaces(
        ::TYPES[1/*Uno.IDisposable*/], offsetof(TimePickerView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TimePickerView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TimePickerView_type, interface2),
        ::g::Native::ITimePickerView_typeof(), offsetof(TimePickerView_type, interface3));
    type->SetFields(10,
        ::TYPES[2/*Native.ITimePickerHost*/], offsetof(TimePickerView, _host), 0,
        ::TYPES[1/*Uno.IDisposable*/], offsetof(TimePickerView, _valueChangedEvent), 0);
}

TimePickerView_type* TimePickerView_typeof()
{
    static uSStrong<TimePickerView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TimePickerView);
    options.TypeSize = sizeof(TimePickerView_type);
    type = (TimePickerView_type*)uClassType::New("Native.iOS.TimePickerView", options);
    type->fp_build_ = TimePickerView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))TimePickerView__Dispose_fn;
    type->interface3.fp_get_CurrentTime = (void(*)(uObject*, ::g::Uno::Time::LocalTime*))TimePickerView__get_CurrentTime_fn;
    type->interface3.fp_set_CurrentTime = (void(*)(uObject*, ::g::Uno::Time::LocalTime*))TimePickerView__set_CurrentTime_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TimePickerView__Dispose_fn;
    return type;
}

// public TimePickerView(Native.ITimePickerHost host)
void TimePickerView__ctor_5_fn(TimePickerView* __this, uObject* host)
{
    __this->ctor_5(host);
}

// private static ObjC.Object Create()
void TimePickerView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = TimePickerView::Create();
}

// public Uno.Time.LocalTime get_CurrentTime()
void TimePickerView__get_CurrentTime_fn(TimePickerView* __this, ::g::Uno::Time::LocalTime* __retval)
{
    *__retval = __this->CurrentTime();
}

// public void set_CurrentTime(Uno.Time.LocalTime value)
void TimePickerView__set_CurrentTime_fn(TimePickerView* __this, ::g::Uno::Time::LocalTime* value)
{
    __this->CurrentTime(*value);
}

// public override sealed void Dispose()
void TimePickerView__Dispose_fn(TimePickerView* __this)
{
    uStackFrame __("Native.iOS.TimePickerView", "Dispose()");
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_valueChangedEvent), ::TYPES[1/*Uno.IDisposable*/]));
    __this->_host = NULL;
}

// public TimePickerView New(Native.ITimePickerHost host)
void TimePickerView__New3_fn(uObject* host, TimePickerView** __retval)
{
    *__retval = TimePickerView::New3(host);
}

// private void OnTimeChanged(ObjC.Object sender, ObjC.Object args)
void TimePickerView__OnTimeChanged_fn(TimePickerView* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    __this->OnTimeChanged(sender, args);
}

// public TimePickerView(Native.ITimePickerHost host) [instance]
void TimePickerView::ctor_5(uObject* host)
{
    uStackFrame __("Native.iOS.TimePickerView", ".ctor(Native.ITimePickerHost)");
    ctor_4(TimePickerView::Create());
    _host = host;
    _valueChangedEvent = ::g::Native::iOS::UIControlEvent::AddValueChangedCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)TimePickerView__OnTimeChanged_fn, this));
}

// public Uno.Time.LocalTime get_CurrentTime() [instance]
::g::Uno::Time::LocalTime TimePickerView::CurrentTime()
{
    uStackFrame __("Native.iOS.TimePickerView", "get_CurrentTime()");
    return ::g::Native::iOS::DateExtensions::GetLocalTime(Handle());
}

// public void set_CurrentTime(Uno.Time.LocalTime value) [instance]
void TimePickerView::CurrentTime(::g::Uno::Time::LocalTime value)
{
    ::g::Native::iOS::DateExtensions::SetTime(Handle(), value);
}

// private void OnTimeChanged(ObjC.Object sender, ObjC.Object args) [instance]
void TimePickerView::OnTimeChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    uStackFrame __("Native.iOS.TimePickerView", "OnTimeChanged(ObjC.Object,ObjC.Object)");
    ::g::Native::ITimePickerHost::OnTimeChanged(uInterface(uPtr(_host), ::TYPES[2/*Native.ITimePickerHost*/]));
}

// private static ObjC.Object Create() [static]
::g::ObjC::Object* TimePickerView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIDatePicker* dp = [[UIDatePicker alloc] init];
            [dp setDatePickerMode:UIDatePickerModeTime];
            return dp;
        } ());
        
    }
    
}

// public TimePickerView New(Native.ITimePickerHost host) [static]
TimePickerView* TimePickerView::New3(uObject* host)
{
    TimePickerView* obj1 = (TimePickerView*)uNew(TimePickerView_typeof());
    obj1->ctor_5(host);
    return obj1;
}
// }

}}} // ::g::Native::iOS
