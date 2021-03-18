// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/iOS/DatePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Native.IDatePickerHost.h>
#include <Native.iOS.DateExtensions.h>
#include <Native.iOS.DatePickerView.h>
#include <Native.iOS.UIControlEvent.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action2-2.h>
#include <uObjC.Foreign.h>
#include <Uno.Time.LocalDate.h>
static uType* TYPES[3];

namespace g{
namespace Native{
namespace iOS{

// internal sealed extern class DatePickerView
// {
static void DatePickerView_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    ::TYPES[2] = ::g::Native::IDatePickerHost_typeof();
    type->SetInterfaces(
        ::TYPES[1/*Uno.IDisposable*/], offsetof(DatePickerView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(DatePickerView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(DatePickerView_type, interface2),
        ::g::Native::IDatePickerView_typeof(), offsetof(DatePickerView_type, interface3));
    type->SetFields(10,
        ::TYPES[2/*Native.IDatePickerHost*/], offsetof(DatePickerView, _host), 0,
        ::TYPES[1/*Uno.IDisposable*/], offsetof(DatePickerView, _valueChangedEvent), 0);
}

DatePickerView_type* DatePickerView_typeof()
{
    static uSStrong<DatePickerView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(DatePickerView);
    options.TypeSize = sizeof(DatePickerView_type);
    type = (DatePickerView_type*)uClassType::New("Native.iOS.DatePickerView", options);
    type->fp_build_ = DatePickerView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))DatePickerView__Dispose_fn;
    type->interface3.fp_get_CurrentDate = (void(*)(uObject*, ::g::Uno::Time::LocalDate*))DatePickerView__get_CurrentDate_fn;
    type->interface3.fp_set_CurrentDate = (void(*)(uObject*, ::g::Uno::Time::LocalDate*))DatePickerView__set_CurrentDate_fn;
    type->interface3.fp_set_MinDate = (void(*)(uObject*, ::g::Uno::Time::LocalDate*))DatePickerView__set_MinDate_fn;
    type->interface3.fp_set_MaxDate = (void(*)(uObject*, ::g::Uno::Time::LocalDate*))DatePickerView__set_MaxDate_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))DatePickerView__Dispose_fn;
    return type;
}

// public DatePickerView(Native.IDatePickerHost host)
void DatePickerView__ctor_5_fn(DatePickerView* __this, uObject* host)
{
    __this->ctor_5(host);
}

// private static ObjC.Object Create()
void DatePickerView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = DatePickerView::Create();
}

// public Uno.Time.LocalDate get_CurrentDate()
void DatePickerView__get_CurrentDate_fn(DatePickerView* __this, ::g::Uno::Time::LocalDate* __retval)
{
    *__retval = __this->CurrentDate();
}

// public void set_CurrentDate(Uno.Time.LocalDate value)
void DatePickerView__set_CurrentDate_fn(DatePickerView* __this, ::g::Uno::Time::LocalDate* value)
{
    __this->CurrentDate(*value);
}

// public override sealed void Dispose()
void DatePickerView__Dispose_fn(DatePickerView* __this)
{
    uStackFrame __("Native.iOS.DatePickerView", "Dispose()");
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_valueChangedEvent), ::TYPES[1/*Uno.IDisposable*/]));
    __this->_valueChangedEvent = NULL;
    __this->_host = NULL;
}

// public void set_MaxDate(Uno.Time.LocalDate value)
void DatePickerView__set_MaxDate_fn(DatePickerView* __this, ::g::Uno::Time::LocalDate* value)
{
    __this->MaxDate(*value);
}

// public void set_MinDate(Uno.Time.LocalDate value)
void DatePickerView__set_MinDate_fn(DatePickerView* __this, ::g::Uno::Time::LocalDate* value)
{
    __this->MinDate(*value);
}

// public DatePickerView New(Native.IDatePickerHost host)
void DatePickerView__New3_fn(uObject* host, DatePickerView** __retval)
{
    *__retval = DatePickerView::New3(host);
}

// private void OnDateChanged(ObjC.Object sender, ObjC.Object args)
void DatePickerView__OnDateChanged_fn(DatePickerView* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    __this->OnDateChanged(sender, args);
}

// public DatePickerView(Native.IDatePickerHost host) [instance]
void DatePickerView::ctor_5(uObject* host)
{
    uStackFrame __("Native.iOS.DatePickerView", ".ctor(Native.IDatePickerHost)");
    ctor_4(DatePickerView::Create());
    _host = host;
    _valueChangedEvent = ::g::Native::iOS::UIControlEvent::AddValueChangedCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)DatePickerView__OnDateChanged_fn, this));
}

// public Uno.Time.LocalDate get_CurrentDate() [instance]
::g::Uno::Time::LocalDate DatePickerView::CurrentDate()
{
    uStackFrame __("Native.iOS.DatePickerView", "get_CurrentDate()");
    return ::g::Native::iOS::DateExtensions::GetLocalDate(Handle());
}

// public void set_CurrentDate(Uno.Time.LocalDate value) [instance]
void DatePickerView::CurrentDate(::g::Uno::Time::LocalDate value)
{
    ::g::Native::iOS::DateExtensions::SetDate1(Handle(), value);
}

// public void set_MaxDate(Uno.Time.LocalDate value) [instance]
void DatePickerView::MaxDate(::g::Uno::Time::LocalDate value)
{
    ::g::Native::iOS::DateExtensions::SetMaxDate1(Handle(), value);
}

// public void set_MinDate(Uno.Time.LocalDate value) [instance]
void DatePickerView::MinDate(::g::Uno::Time::LocalDate value)
{
    ::g::Native::iOS::DateExtensions::SetMinDate1(Handle(), value);
}

// private void OnDateChanged(ObjC.Object sender, ObjC.Object args) [instance]
void DatePickerView::OnDateChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    uStackFrame __("Native.iOS.DatePickerView", "OnDateChanged(ObjC.Object,ObjC.Object)");
    ::g::Native::IDatePickerHost::OnDateChanged(uInterface(uPtr(_host), ::TYPES[2/*Native.IDatePickerHost*/]));
}

// private static ObjC.Object Create() [static]
::g::ObjC::Object* DatePickerView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIDatePicker* dp = [[UIDatePicker alloc] init];
            [dp setDatePickerMode:UIDatePickerModeDate];
            return dp;
        } ());
        
    }
    
}

// public DatePickerView New(Native.IDatePickerHost host) [static]
DatePickerView* DatePickerView::New3(uObject* host)
{
    DatePickerView* obj1 = (DatePickerView*)uNew(DatePickerView_typeof());
    obj1->ctor_5(host);
    return obj1;
}
// }

}}} // ::g::Native::iOS
