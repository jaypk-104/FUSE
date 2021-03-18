// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/DatePicker.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Native.IDatePickerHost.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Time.LocalDate.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Native{struct DatePickerBase;}}
namespace g{namespace Native{struct DatePickerBase__CurrentDateProperty;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Native{

// public interfacemodifiers class DatePickerBase
// {
struct DatePickerBase_type : ::g::Fuse::Controls::Panel_type
{
    ::g::Native::IDatePickerHost interface19;
};

DatePickerBase_type* DatePickerBase_typeof();
void DatePickerBase__ctor_7_fn(DatePickerBase* __this);
void DatePickerBase__ArgsToLocalDate_fn(uArray* args, ::g::Uno::Time::LocalDate* __retval);
void DatePickerBase__get_CurrentDate_fn(DatePickerBase* __this, ::g::Uno::Time::LocalDate* __retval);
void DatePickerBase__set_CurrentDate_fn(DatePickerBase* __this, ::g::Uno::Time::LocalDate* value);
void DatePickerBase__get_DatePickerView_fn(DatePickerBase* __this, uObject** __retval);
void DatePickerBase__getCurrentDateProperty_fn(DatePickerBase* datePicker, ::g::Uno::UX::Property1** __retval);
void DatePickerBase__set_MaxDate_fn(DatePickerBase* __this, ::g::Uno::Time::LocalDate* value);
void DatePickerBase__set_MinDate_fn(DatePickerBase* __this, ::g::Uno::Time::LocalDate* value);
void DatePickerBase__NativeIDatePickerHostOnDateChanged_fn(DatePickerBase* __this);
void DatePickerBase__OnDateChanged_fn(DatePickerBase* __this);
void DatePickerBase__OnRooted_fn(DatePickerBase* __this);
void DatePickerBase__setDate_fn(::g::Fuse::Scripting::Context* context, DatePickerBase* datePicker, uArray* args);
void DatePickerBase__setMaxDate_fn(::g::Fuse::Scripting::Context* context, DatePickerBase* datePicker, uArray* args);
void DatePickerBase__setMinDate_fn(::g::Fuse::Scripting::Context* context, DatePickerBase* datePicker, uArray* args);
void DatePickerBase__UpdateCurrentDate_fn(DatePickerBase* __this);

struct DatePickerBase : ::g::Fuse::Controls::Panel
{
    uStrong<DatePickerBase__CurrentDateProperty*> _currentDateProperty;
    static ::g::Uno::UX::Selector _currentDateName_;
    static ::g::Uno::UX::Selector& _currentDateName() { return DatePickerBase_typeof()->Init(), _currentDateName_; }
    ::g::Uno::Time::LocalDate _out;
    ::g::Uno::Time::LocalDate _in;

    void ctor_7();
    ::g::Uno::Time::LocalDate CurrentDate();
    void CurrentDate(::g::Uno::Time::LocalDate value);
    uObject* DatePickerView();
    void MaxDate(::g::Uno::Time::LocalDate value);
    void MinDate(::g::Uno::Time::LocalDate value);
    void OnDateChanged();
    void UpdateCurrentDate();
    static ::g::Uno::Time::LocalDate ArgsToLocalDate(uArray* args);
    static ::g::Uno::UX::Property1* getCurrentDateProperty(DatePickerBase* datePicker);
    static void setDate(::g::Fuse::Scripting::Context* context, DatePickerBase* datePicker, uArray* args);
    static void setMaxDate(::g::Fuse::Scripting::Context* context, DatePickerBase* datePicker, uArray* args);
    static void setMinDate(::g::Fuse::Scripting::Context* context, DatePickerBase* datePicker, uArray* args);
};
// }

}} // ::g::Native
