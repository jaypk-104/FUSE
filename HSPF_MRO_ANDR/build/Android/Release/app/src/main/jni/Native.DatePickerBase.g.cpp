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
#include <Native.DateExtensions.h>
#include <Native.DatePickerBase.CurrentDateProperty.h>
#include <Native.DatePickerBase.h>
#include <Native.IDatePickerView.h>
#include <Uno.Action.h>
#include <Uno.Action3-3.h>
#include <Uno.Bool.h>
#include <Uno.Data.Json.JsonReader.h>
#include <Uno.Func1-2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Time.LocalDate.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{
namespace Native{

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/DatePicker.ScriptClass.uno
// ------------------------------------------------------------------------------------

// private sealed class DatePickerBase.CurrentDateProperty
// {
static void DatePickerBase__CurrentDateProperty_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetDependencies(
        ::g::Native::DatePickerBase_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(1,
        ::g::Native::DatePickerBase_typeof(), offsetof(DatePickerBase__CurrentDateProperty, _dp), 0);
}

::g::Uno::UX::Property1_type* DatePickerBase__CurrentDateProperty_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(DatePickerBase__CurrentDateProperty);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Native.DatePickerBase.CurrentDateProperty", options);
    type->fp_build_ = DatePickerBase__CurrentDateProperty_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))DatePickerBase__CurrentDateProperty__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))DatePickerBase__CurrentDateProperty__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))DatePickerBase__CurrentDateProperty__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))DatePickerBase__CurrentDateProperty__get_SupportsOriginSetter_fn;
    return type;
}

// public CurrentDateProperty(Native.DatePickerBase datePicker)
void DatePickerBase__CurrentDateProperty__ctor_3_fn(DatePickerBase__CurrentDateProperty* __this, ::g::Native::DatePickerBase* datePicker)
{
    __this->ctor_3(datePicker);
}

// public override sealed string Get(Uno.UX.PropertyObject obj)
void DatePickerBase__CurrentDateProperty__Get1_fn(DatePickerBase__CurrentDateProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    ::g::Uno::Time::LocalDate date = uPtr(::g::Uno::Time::ZonedDateTime::Now())->Date();
    ::g::Uno::Threading::Monitor::Enter(__this->_dp);

    {
        try
        {
            {
                date = uPtr(__this->_dp)->_out;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(__this->_dp);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(__this->_dp);
        }
        __after_finally_0:;
    }

    return *__retval = ::g::Native::DateExtensions::ToJSON(date), void();
}

// public CurrentDateProperty New(Native.DatePickerBase datePicker)
void DatePickerBase__CurrentDateProperty__New1_fn(::g::Native::DatePickerBase* datePicker, DatePickerBase__CurrentDateProperty** __retval)
{
    *__retval = DatePickerBase__CurrentDateProperty::New1(datePicker);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void DatePickerBase__CurrentDateProperty__get_Object_fn(DatePickerBase__CurrentDateProperty* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_dp, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string value, Uno.UX.IPropertyListener origin)
void DatePickerBase__CurrentDateProperty__Set1_fn(DatePickerBase__CurrentDateProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString* value, uObject* origin)
{
    ::g::Uno::Time::LocalDate date = ::g::Native::DateExtensions::FromJSON(::g::Uno::Data::Json::JsonReader::Parse(value));
    ::g::Uno::Threading::Monitor::Enter(__this->_dp);

    {
        try
        {
            {
                uPtr(__this->_dp)->_in = date;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(__this->_dp);
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(__this->_dp);
        }
        __after_finally_1:;
    }

    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Native::DatePickerBase__UpdateCurrentDate_fn, uPtr(__this->_dp)));
}

// public override sealed bool get_SupportsOriginSetter()
void DatePickerBase__CurrentDateProperty__get_SupportsOriginSetter_fn(DatePickerBase__CurrentDateProperty* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public CurrentDateProperty(Native.DatePickerBase datePicker) [instance]
void DatePickerBase__CurrentDateProperty::ctor_3(::g::Native::DatePickerBase* datePicker)
{
    ctor_2(::g::Native::DatePickerBase::_currentDateName());
    _dp = datePicker;
}

// public CurrentDateProperty New(Native.DatePickerBase datePicker) [static]
DatePickerBase__CurrentDateProperty* DatePickerBase__CurrentDateProperty::New1(::g::Native::DatePickerBase* datePicker)
{
    DatePickerBase__CurrentDateProperty* obj1 = (DatePickerBase__CurrentDateProperty*)uNew(DatePickerBase__CurrentDateProperty_typeof());
    obj1->ctor_3(datePicker);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/DatePicker.ScriptClass.uno
// ------------------------------------------------------------------------------------

// public interfacemodifiers class DatePickerBase
// {
// static DatePickerBase()
static void DatePickerBase__cctor_4_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    DatePickerBase::_currentDateName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("CurrentDate"));
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::g::Fuse::Scripting::ScriptMember_typeof()->Array(), 4, (::g::Fuse::Scripting::ScriptProperty1*)::g::Fuse::Scripting::ScriptProperty1::New1(::g::Fuse::Scripting::ScriptProperty1_typeof()->MakeType(__type, ::g::Uno::String_typeof(), NULL), uString::Const("CurrentDate"), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(__type, ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), NULL), (void*)DatePickerBase__getCurrentDateProperty_fn), uString::Const(".notNull().parseJson()")), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("setDate"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, uObject_typeof()->Array(), NULL), (void*)DatePickerBase__setDate_fn), 1), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("setMinDate"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, uObject_typeof()->Array(), NULL), (void*)DatePickerBase__setMinDate_fn), 1), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("setMaxDate"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, uObject_typeof()->Array(), NULL), (void*)DatePickerBase__setMaxDate_fn), 1)));
}

static void DatePickerBase_build(uType* type)
{
    type->SetDependencies(
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
        DatePickerBase__CurrentDateProperty_typeof(), offsetof(DatePickerBase, _currentDateProperty), 0,
        ::g::Uno::Time::LocalDate_typeof(), offsetof(DatePickerBase, _out), 0,
        ::g::Uno::Time::LocalDate_typeof(), offsetof(DatePickerBase, _in), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DatePickerBase::_currentDateName_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* DatePickerBase_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 120;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DatePickerBase);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Native.DatePickerBase", options);
    type->fp_build_ = DatePickerBase_build;
    type->fp_cctor_ = DatePickerBase__cctor_4_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DatePickerBase__OnRooted_fn;
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

// private static Uno.Time.LocalDate ArgsToLocalDate(object[] args)
void DatePickerBase__ArgsToLocalDate_fn(uArray* args, ::g::Uno::Time::LocalDate* __retval)
{
    *__retval = DatePickerBase::ArgsToLocalDate(args);
}

// public Uno.Time.LocalDate get_CurrentDate()
void DatePickerBase__get_CurrentDate_fn(DatePickerBase* __this, ::g::Uno::Time::LocalDate* __retval)
{
    *__retval = __this->CurrentDate();
}

// public void set_CurrentDate(Uno.Time.LocalDate value)
void DatePickerBase__set_CurrentDate_fn(DatePickerBase* __this, ::g::Uno::Time::LocalDate* value)
{
    __this->CurrentDate(*value);
}

// private Native.IDatePickerView get_DatePickerView()
void DatePickerBase__get_DatePickerView_fn(DatePickerBase* __this, uObject** __retval)
{
    *__retval = __this->DatePickerView();
}

// private static Uno.UX.Property<string> getCurrentDateProperty(Native.DatePickerBase datePicker)
void DatePickerBase__getCurrentDateProperty_fn(DatePickerBase* datePicker, ::g::Uno::UX::Property1** __retval)
{
    *__retval = DatePickerBase::getCurrentDateProperty(datePicker);
}

// public void set_MaxDate(Uno.Time.LocalDate value)
void DatePickerBase__set_MaxDate_fn(DatePickerBase* __this, ::g::Uno::Time::LocalDate* value)
{
    __this->MaxDate(*value);
}

// public void set_MinDate(Uno.Time.LocalDate value)
void DatePickerBase__set_MinDate_fn(DatePickerBase* __this, ::g::Uno::Time::LocalDate* value)
{
    __this->MinDate(*value);
}

// internal void OnDateChanged()
void DatePickerBase__OnDateChanged_fn(DatePickerBase* __this)
{
    __this->OnDateChanged();
}

// protected override sealed void OnRooted()
void DatePickerBase__OnRooted_fn(DatePickerBase* __this)
{
    ::g::Fuse::Controls::Panel__OnRooted_fn(__this);
    __this->_out = __this->CurrentDate();
    __this->_in = __this->CurrentDate();
}

// private static void setDate(Fuse.Scripting.Context context, Native.DatePickerBase datePicker, object[] args)
void DatePickerBase__setDate_fn(::g::Fuse::Scripting::Context* context, DatePickerBase* datePicker, uArray* args)
{
    DatePickerBase::setDate(context, datePicker, args);
}

// private static void setMaxDate(Fuse.Scripting.Context context, Native.DatePickerBase datePicker, object[] args)
void DatePickerBase__setMaxDate_fn(::g::Fuse::Scripting::Context* context, DatePickerBase* datePicker, uArray* args)
{
    DatePickerBase::setMaxDate(context, datePicker, args);
}

// private static void setMinDate(Fuse.Scripting.Context context, Native.DatePickerBase datePicker, object[] args)
void DatePickerBase__setMinDate_fn(::g::Fuse::Scripting::Context* context, DatePickerBase* datePicker, uArray* args)
{
    DatePickerBase::setMinDate(context, datePicker, args);
}

// private void UpdateCurrentDate()
void DatePickerBase__UpdateCurrentDate_fn(DatePickerBase* __this)
{
    __this->UpdateCurrentDate();
}

::g::Uno::UX::Selector DatePickerBase::_currentDateName_;

// public Uno.Time.LocalDate get_CurrentDate() [instance]
::g::Uno::Time::LocalDate DatePickerBase::CurrentDate()
{
    uObject* dpv = DatePickerView();
    return (dpv != NULL) ? ::g::Native::IDatePickerView::CurrentDate(uInterface(uPtr(dpv), ::g::Native::IDatePickerView_typeof())) : uPtr(::g::Uno::Time::ZonedDateTime::Now())->Date();
}

// public void set_CurrentDate(Uno.Time.LocalDate value) [instance]
void DatePickerBase::CurrentDate(::g::Uno::Time::LocalDate value)
{
    uObject* dpv = DatePickerView();

    if ((dpv != NULL) && ::g::Uno::Time::LocalDate__op_Inequality(::g::Native::IDatePickerView::CurrentDate(uInterface(uPtr(dpv), ::g::Native::IDatePickerView_typeof())), value))
    {
        ::g::Native::IDatePickerView::CurrentDate(uInterface(uPtr(dpv), ::g::Native::IDatePickerView_typeof()), value);
        OnDateChanged();
    }
}

// private Native.IDatePickerView get_DatePickerView() [instance]
uObject* DatePickerBase::DatePickerView()
{
    return uAs<uObject*>(NativeView(), ::g::Native::IDatePickerView_typeof());
}

// public void set_MaxDate(Uno.Time.LocalDate value) [instance]
void DatePickerBase::MaxDate(::g::Uno::Time::LocalDate value)
{
    uObject* dpv = DatePickerView();

    if (dpv != NULL)
        ::g::Native::IDatePickerView::MaxDate(uInterface(uPtr(dpv), ::g::Native::IDatePickerView_typeof()), value);
}

// public void set_MinDate(Uno.Time.LocalDate value) [instance]
void DatePickerBase::MinDate(::g::Uno::Time::LocalDate value)
{
    uObject* dpv = DatePickerView();

    if (dpv != NULL)
        ::g::Native::IDatePickerView::MinDate(uInterface(uPtr(dpv), ::g::Native::IDatePickerView_typeof()), value);
}

// internal void OnDateChanged() [instance]
void DatePickerBase::OnDateChanged()
{
    ::g::Uno::Threading::Monitor::Enter(this);

    {
        try
        {
            {
                _out = CurrentDate();
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

    OnPropertyChanged1(DatePickerBase::_currentDateName_, NULL);
}

// private void UpdateCurrentDate() [instance]
void DatePickerBase::UpdateCurrentDate()
{
    ::g::Uno::Threading::Monitor::Enter(this);

    {
        try
        {
            {
                CurrentDate(_in);
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

// private static Uno.Time.LocalDate ArgsToLocalDate(object[] args) [static]
::g::Uno::Time::LocalDate DatePickerBase::ArgsToLocalDate(uArray* args)
{
    DatePickerBase_typeof()->Init();

    if (uPtr(args)->Length() < 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("Missing argument")));

    ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::g::Fuse::Scripting::Object_typeof());

    if (obj == NULL)
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("Argument must be an object with year, month and date")));

    if (!uPtr(obj)->ContainsKey(uString::Const("year")))
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("year missing from argument")));

    if (!uPtr(obj)->ContainsKey(uString::Const("month")))
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("month missing from argument")));

    if (!uPtr(obj)->ContainsKey(uString::Const("day")))
        U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("day missing from argument")));

    return ::g::Uno::Time::LocalDate__New1(::g::Fuse::Marshal::ToInt(uPtr(obj)->Item(uString::Const("year"))), ::g::Fuse::Marshal::ToInt(uPtr(obj)->Item(uString::Const("month"))), ::g::Fuse::Marshal::ToInt(uPtr(obj)->Item(uString::Const("day"))));
}

// private static Uno.UX.Property<string> getCurrentDateProperty(Native.DatePickerBase datePicker) [static]
::g::Uno::UX::Property1* DatePickerBase::getCurrentDateProperty(DatePickerBase* datePicker)
{
    DatePickerBase_typeof()->Init();

    if (uPtr(datePicker)->_currentDateProperty == NULL)
        uPtr(datePicker)->_currentDateProperty = DatePickerBase__CurrentDateProperty::New1(datePicker);

    return uPtr(datePicker)->_currentDateProperty;
}

// private static void setDate(Fuse.Scripting.Context context, Native.DatePickerBase datePicker, object[] args) [static]
void DatePickerBase::setDate(::g::Fuse::Scripting::Context* context, DatePickerBase* datePicker, uArray* args)
{
    DatePickerBase_typeof()->Init();
    uPtr(datePicker)->CurrentDate(DatePickerBase::ArgsToLocalDate(args));
}

// private static void setMaxDate(Fuse.Scripting.Context context, Native.DatePickerBase datePicker, object[] args) [static]
void DatePickerBase::setMaxDate(::g::Fuse::Scripting::Context* context, DatePickerBase* datePicker, uArray* args)
{
    DatePickerBase_typeof()->Init();
    uPtr(datePicker)->MaxDate(DatePickerBase::ArgsToLocalDate(args));
}

// private static void setMinDate(Fuse.Scripting.Context context, Native.DatePickerBase datePicker, object[] args) [static]
void DatePickerBase::setMinDate(::g::Fuse::Scripting::Context* context, DatePickerBase* datePicker, uArray* args)
{
    DatePickerBase_typeof()->Init();
    uPtr(datePicker)->MinDate(DatePickerBase::ArgsToLocalDate(args));
}
// }

}} // ::g::Native
