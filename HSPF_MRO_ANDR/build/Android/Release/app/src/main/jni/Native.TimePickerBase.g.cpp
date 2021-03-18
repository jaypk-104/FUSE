// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Marshal.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod1-1.h>
#include <Fuse.Scripting.ScriptProperty1-2.h>
#include <Fuse.UpdateManager.h>
#include <Native.ITimePickerView.h>
#include <Native.TimePickerBase.CurrentTimeProperty.h>
#include <Native.TimePickerBase.h>
#include <Uno.Action.h>
#include <Uno.Action3-3.h>
#include <Uno.Bool.h>
#include <Uno.Data.Json.JsonReader.h>
#include <Uno.Double.h>
#include <Uno.Func1-2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Time.LocalTime.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{
namespace Native{

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/TimePicker.ScriptClass.uno
// ------------------------------------------------------------------------------------

// private sealed class TimePickerBase.CurrentTimeProperty
// {
static void TimePickerBase__CurrentTimeProperty_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetDependencies(
        ::g::Native::TimePickerBase_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(1,
        ::g::Native::TimePickerBase_typeof(), offsetof(TimePickerBase__CurrentTimeProperty, _tp), 0);
}

::g::Uno::UX::Property1_type* TimePickerBase__CurrentTimeProperty_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TimePickerBase__CurrentTimeProperty);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Native.TimePickerBase.CurrentTimeProperty", options);
    type->fp_build_ = TimePickerBase__CurrentTimeProperty_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))TimePickerBase__CurrentTimeProperty__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))TimePickerBase__CurrentTimeProperty__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))TimePickerBase__CurrentTimeProperty__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))TimePickerBase__CurrentTimeProperty__get_SupportsOriginSetter_fn;
    return type;
}

// public CurrentTimeProperty(Native.TimePickerBase timePicker)
void TimePickerBase__CurrentTimeProperty__ctor_3_fn(TimePickerBase__CurrentTimeProperty* __this, ::g::Native::TimePickerBase* timePicker)
{
    __this->ctor_3(timePicker);
}

// public override sealed string Get(Uno.UX.PropertyObject obj)
void TimePickerBase__CurrentTimeProperty__Get1_fn(TimePickerBase__CurrentTimeProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    ::g::Uno::Time::LocalTime time = uPtr(::g::Uno::Time::ZonedDateTime::Now())->TimeOfDay();
    ::g::Uno::Threading::Monitor::Enter(__this->_tp);

    {
        try
        {
            {
                time = uPtr(__this->_tp)->_out;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(__this->_tp);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(__this->_tp);
        }
        __after_finally_0:;
    }

    return *__retval = ::g::Native::TimePickerBase::ToJSON(time), void();
}

// public CurrentTimeProperty New(Native.TimePickerBase timePicker)
void TimePickerBase__CurrentTimeProperty__New1_fn(::g::Native::TimePickerBase* timePicker, TimePickerBase__CurrentTimeProperty** __retval)
{
    *__retval = TimePickerBase__CurrentTimeProperty::New1(timePicker);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void TimePickerBase__CurrentTimeProperty__get_Object_fn(TimePickerBase__CurrentTimeProperty* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_tp, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string value, Uno.UX.IPropertyListener origin)
void TimePickerBase__CurrentTimeProperty__Set1_fn(TimePickerBase__CurrentTimeProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString* value, uObject* origin)
{
    ::g::Uno::Time::LocalTime newTime = ::g::Native::TimePickerBase::FromJSON(::g::Uno::Data::Json::JsonReader::Parse(value));
    ::g::Uno::Threading::Monitor::Enter(__this->_tp);

    {
        try
        {
            {
                uPtr(__this->_tp)->_in = newTime;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(__this->_tp);
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(__this->_tp);
        }
        __after_finally_1:;
    }

    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Native::TimePickerBase__UpdateCurrentTime_fn, uPtr(__this->_tp)));
}

// public override sealed bool get_SupportsOriginSetter()
void TimePickerBase__CurrentTimeProperty__get_SupportsOriginSetter_fn(TimePickerBase__CurrentTimeProperty* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public CurrentTimeProperty(Native.TimePickerBase timePicker) [instance]
void TimePickerBase__CurrentTimeProperty::ctor_3(::g::Native::TimePickerBase* timePicker)
{
    ctor_2(::g::Native::TimePickerBase::_currentTimeName());
    _tp = timePicker;
}

// public CurrentTimeProperty New(Native.TimePickerBase timePicker) [static]
TimePickerBase__CurrentTimeProperty* TimePickerBase__CurrentTimeProperty::New1(::g::Native::TimePickerBase* timePicker)
{
    TimePickerBase__CurrentTimeProperty* obj1 = (TimePickerBase__CurrentTimeProperty*)uNew(TimePickerBase__CurrentTimeProperty_typeof());
    obj1->ctor_3(timePicker);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/TimePicker.ScriptClass.uno
// ------------------------------------------------------------------------------------

// public interfacemodifiers class TimePickerBase
// {
// static TimePickerBase()
static void TimePickerBase__cctor_4_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    TimePickerBase::_currentTimeName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("CurrentTime"));
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::g::Fuse::Scripting::ScriptMember_typeof()->Array(), 2, (::g::Fuse::Scripting::ScriptProperty1*)::g::Fuse::Scripting::ScriptProperty1::New1(::g::Fuse::Scripting::ScriptProperty1_typeof()->MakeType(__type, ::g::Uno::String_typeof(), NULL), uString::Const("CurrentTime"), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(__type, ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), NULL), (void*)TimePickerBase__getCurrentTimeProperty_fn), uString::Const(".notNull().parseJson()")), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("setTime"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, uObject_typeof()->Array(), NULL), (void*)TimePickerBase__setTime_fn), 1)));
}

static void TimePickerBase_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Time::LocalTime_typeof(),
        ::g::Fuse::Marshal_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(116,
        TimePickerBase__CurrentTimeProperty_typeof(), offsetof(TimePickerBase, _currentTimeProperty), 0,
        ::g::Uno::Time::LocalTime_typeof(), offsetof(TimePickerBase, _out), 0,
        ::g::Uno::Time::LocalTime_typeof(), offsetof(TimePickerBase, _in), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&TimePickerBase::_currentTimeName_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* TimePickerBase_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 120;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TimePickerBase);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Native.TimePickerBase", options);
    type->fp_build_ = TimePickerBase_build;
    type->fp_cctor_ = TimePickerBase__cctor_4_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))TimePickerBase__OnRooted_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Uno.Time.LocalTime get_CurrentTime()
void TimePickerBase__get_CurrentTime_fn(TimePickerBase* __this, ::g::Uno::Time::LocalTime* __retval)
{
    *__retval = __this->CurrentTime();
}

// public void set_CurrentTime(Uno.Time.LocalTime value)
void TimePickerBase__set_CurrentTime_fn(TimePickerBase* __this, ::g::Uno::Time::LocalTime* value)
{
    __this->CurrentTime(*value);
}

// private static Uno.Time.LocalTime FromJSON(Uno.Data.Json.JsonReader json)
void TimePickerBase__FromJSON_fn(::g::Uno::Data::Json::JsonReader* json, ::g::Uno::Time::LocalTime* __retval)
{
    *__retval = TimePickerBase::FromJSON(json);
}

// private static Uno.UX.Property<string> getCurrentTimeProperty(Native.TimePickerBase timePicker)
void TimePickerBase__getCurrentTimeProperty_fn(TimePickerBase* timePicker, ::g::Uno::UX::Property1** __retval)
{
    *__retval = TimePickerBase::getCurrentTimeProperty(timePicker);
}

// protected override sealed void OnRooted()
void TimePickerBase__OnRooted_fn(TimePickerBase* __this)
{
    ::g::Fuse::Controls::Panel__OnRooted_fn(__this);
    __this->_out = __this->CurrentTime();
    __this->_in = __this->CurrentTime();
}

// private void OnTimeChanged()
void TimePickerBase__OnTimeChanged_fn(TimePickerBase* __this)
{
    __this->OnTimeChanged();
}

// private static void setTime(Fuse.Scripting.Context context, Native.TimePickerBase timePicker, object[] args)
void TimePickerBase__setTime_fn(::g::Fuse::Scripting::Context* context, TimePickerBase* timePicker, uArray* args)
{
    TimePickerBase::setTime(context, timePicker, args);
}

// private Native.ITimePickerView get_TimePickerView()
void TimePickerBase__get_TimePickerView_fn(TimePickerBase* __this, uObject** __retval)
{
    *__retval = __this->TimePickerView();
}

// private static string ToJSON(Uno.Time.LocalTime localTime)
void TimePickerBase__ToJSON_fn(::g::Uno::Time::LocalTime* localTime, uString** __retval)
{
    *__retval = TimePickerBase::ToJSON(*localTime);
}

// private void UpdateCurrentTime()
void TimePickerBase__UpdateCurrentTime_fn(TimePickerBase* __this)
{
    __this->UpdateCurrentTime();
}

::g::Uno::UX::Selector TimePickerBase::_currentTimeName_;

// public Uno.Time.LocalTime get_CurrentTime() [instance]
::g::Uno::Time::LocalTime TimePickerBase::CurrentTime()
{
    uObject* tpv = TimePickerView();
    return (tpv != NULL) ? ::g::Native::ITimePickerView::CurrentTime(uInterface(uPtr(tpv), ::g::Native::ITimePickerView_typeof())) : uPtr(::g::Uno::Time::ZonedDateTime::Now())->TimeOfDay();
}

// public void set_CurrentTime(Uno.Time.LocalTime value) [instance]
void TimePickerBase::CurrentTime(::g::Uno::Time::LocalTime value)
{
    uObject* tpv = TimePickerView();

    if ((tpv != NULL) && ::g::Uno::Time::LocalTime__op_Inequality(::g::Native::ITimePickerView::CurrentTime(uInterface(uPtr(tpv), ::g::Native::ITimePickerView_typeof())), value))
    {
        ::g::Native::ITimePickerView::CurrentTime(uInterface(uPtr(tpv), ::g::Native::ITimePickerView_typeof()), value);
        OnTimeChanged();
    }
}

// private void OnTimeChanged() [instance]
void TimePickerBase::OnTimeChanged()
{
    ::g::Uno::Threading::Monitor::Enter(this);

    {
        try
        {
            {
                _out = CurrentTime();
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(this);
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(this);
        }
        __after_finally_2:;
    }

    OnPropertyChanged1(TimePickerBase::_currentTimeName_, NULL);
}

// private Native.ITimePickerView get_TimePickerView() [instance]
uObject* TimePickerBase::TimePickerView()
{
    return uAs<uObject*>(NativeView(), ::g::Native::ITimePickerView_typeof());
}

// private void UpdateCurrentTime() [instance]
void TimePickerBase::UpdateCurrentTime()
{
    ::g::Uno::Threading::Monitor::Enter(this);

    {
        try
        {
            {
                CurrentTime(_in);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(this);
            }
                        throw __t;
            goto __after_finally_3;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(this);
        }
        __after_finally_3:;
    }
}

// private static Uno.Time.LocalTime FromJSON(Uno.Data.Json.JsonReader json) [static]
::g::Uno::Time::LocalTime TimePickerBase::FromJSON(::g::Uno::Data::Json::JsonReader* json)
{
    TimePickerBase_typeof()->Init();
    int32_t hour = (int32_t)uPtr(uPtr(json)->Item1(uString::Const("hour")))->AsNumber();
    int32_t minute = (int32_t)uPtr(json->Item1(uString::Const("minute")))->AsNumber();
    return ::g::Uno::Time::LocalTime__New1(hour, minute);
}

// private static Uno.UX.Property<string> getCurrentTimeProperty(Native.TimePickerBase timePicker) [static]
::g::Uno::UX::Property1* TimePickerBase::getCurrentTimeProperty(TimePickerBase* timePicker)
{
    TimePickerBase_typeof()->Init();

    if (uPtr(timePicker)->_currentTimeProperty == NULL)
        uPtr(timePicker)->_currentTimeProperty = TimePickerBase__CurrentTimeProperty::New1(timePicker);

    return uPtr(timePicker)->_currentTimeProperty;
}

// private static void setTime(Fuse.Scripting.Context context, Native.TimePickerBase timePicker, object[] args) [static]
void TimePickerBase::setTime(::g::Fuse::Scripting::Context* context, TimePickerBase* timePicker, uArray* args)
{
    TimePickerBase_typeof()->Init();

    if (uPtr(args)->Length() < 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("To few arguments")));

    ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::g::Fuse::Scripting::Object_typeof());

    if (obj == NULL)
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("Argument must be an object with hour and minute")));

    if (!uPtr(obj)->ContainsKey(uString::Const("hour")))
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("hour missing from argument")));

    if (!uPtr(obj)->ContainsKey(uString::Const("minute")))
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("minute missing from argument")));

    uPtr(timePicker)->CurrentTime(::g::Uno::Time::LocalTime__New1(::g::Fuse::Marshal::ToInt(uPtr(obj)->Item(uString::Const("hour"))), ::g::Fuse::Marshal::ToInt(uPtr(obj)->Item(uString::Const("minute")))));
}

// private static string ToJSON(Uno.Time.LocalTime localTime) [static]
uString* TimePickerBase::ToJSON(::g::Uno::Time::LocalTime localTime)
{
    TimePickerBase_typeof()->Init();
    uString* hour = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("\"hour\":"), ::g::Uno::Int::ToString(localTime.Hour(), ::g::Uno::Int_typeof())), uString::Const(","));
    uString* minute = ::g::Uno::String::op_Addition2(uString::Const("\"minute\":"), ::g::Uno::Int::ToString(localTime.Minute(), ::g::Uno::Int_typeof()));
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("{"), hour), minute), uString::Const("}"));
}
// }

}} // ::g::Native
