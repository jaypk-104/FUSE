// This file was generated based on Projects/NativeControls/TimePicker.ScriptClass.uno.
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
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Time.LocalTime.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Native{struct TimePickerBase;}}
namespace g{namespace Native{struct TimePickerBase__CurrentTimeProperty;}}
namespace g{namespace Uno{namespace Data{namespace Json{struct JsonReader;}}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Native{

// public interfacemodifiers class TimePickerBase
// {
::g::Fuse::Controls::Panel_type* TimePickerBase_typeof();
void TimePickerBase__get_CurrentTime_fn(TimePickerBase* __this, ::g::Uno::Time::LocalTime* __retval);
void TimePickerBase__set_CurrentTime_fn(TimePickerBase* __this, ::g::Uno::Time::LocalTime* value);
void TimePickerBase__FromJSON_fn(::g::Uno::Data::Json::JsonReader* json, ::g::Uno::Time::LocalTime* __retval);
void TimePickerBase__getCurrentTimeProperty_fn(TimePickerBase* timePicker, ::g::Uno::UX::Property1** __retval);
void TimePickerBase__OnRooted_fn(TimePickerBase* __this);
void TimePickerBase__OnTimeChanged_fn(TimePickerBase* __this);
void TimePickerBase__setTime_fn(::g::Fuse::Scripting::Context* context, TimePickerBase* timePicker, uArray* args);
void TimePickerBase__get_TimePickerView_fn(TimePickerBase* __this, uObject** __retval);
void TimePickerBase__ToJSON_fn(::g::Uno::Time::LocalTime* localTime, uString** __retval);
void TimePickerBase__UpdateCurrentTime_fn(TimePickerBase* __this);

struct TimePickerBase : ::g::Fuse::Controls::Panel
{
    uStrong<TimePickerBase__CurrentTimeProperty*> _currentTimeProperty;
    static ::g::Uno::UX::Selector _currentTimeName_;
    static ::g::Uno::UX::Selector& _currentTimeName() { return TimePickerBase_typeof()->Init(), _currentTimeName_; }
    ::g::Uno::Time::LocalTime _out;
    ::g::Uno::Time::LocalTime _in;

    ::g::Uno::Time::LocalTime CurrentTime();
    void CurrentTime(::g::Uno::Time::LocalTime value);
    void OnTimeChanged();
    uObject* TimePickerView();
    void UpdateCurrentTime();
    static ::g::Uno::Time::LocalTime FromJSON(::g::Uno::Data::Json::JsonReader* json);
    static ::g::Uno::UX::Property1* getCurrentTimeProperty(TimePickerBase* timePicker);
    static void setTime(::g::Fuse::Scripting::Context* context, TimePickerBase* timePicker, uArray* args);
    static uString* ToJSON(::g::Uno::Time::LocalTime localTime);
};
// }

}} // ::g::Native
