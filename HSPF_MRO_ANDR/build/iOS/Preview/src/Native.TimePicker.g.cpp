// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layer.h>
#include <Fuse.Node.h>
#include <Fuse.Visual.h>
#include <Native.Android.TimePickerView.h>
#include <Native.iOS.TimePickerView.h>
#include <Native.ITimePickerHost.h>
#include <Native.TimePicker.h>
#include <Native.TimePicker.Template.h>
#include <Native.TimePicker.Template1.h>
#include <Native.TimePicker.Template2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[5];
static uType* TYPES[2];

namespace g{
namespace Native{

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/.uno/ux15/Native.TimePicker.g.uno
// -------------------------------------------------------------------------------------------

// public partial sealed class TimePicker.Template
// {
// static Template()
static void TimePicker__Template__cctor__fn(uType* __type)
{
    TimePicker__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"GraphicsApp...*/]);
}

static void TimePicker__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("GraphicsAppearance");
    ::STRINGS[1] = uString::Const("TimePicker.ux");
    ::STRINGS[2] = uString::Const("GraphicsAppearance for TimePicker not implemented!");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Native::TimePicker_typeof(), offsetof(TimePicker__Template, __parent1), uFieldFlagsWeak,
        ::g::Native::TimePicker_typeof(), offsetof(TimePicker__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&TimePicker__Template::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TimePicker__Template__New2_fn, 0, true, type, 2, ::g::Native::TimePicker_typeof(), ::g::Native::TimePicker_typeof()));
}

::g::Uno::UX::Template_type* TimePicker__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(TimePicker__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Native.TimePicker.Template", options);
    type->fp_build_ = TimePicker__Template_build;
    type->fp_cctor_ = TimePicker__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))TimePicker__Template__New1_fn;
    return type;
}

// public Template(Native.TimePicker parent, Native.TimePicker parentInstance)
void TimePicker__Template__ctor_1_fn(TimePicker__Template* __this, ::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void TimePicker__Template__New1_fn(TimePicker__Template* __this, uObject** __retval)
{
    uStackFrame __("Native.TimePicker.Template", "New()");
    ::g::Fuse::Controls::Panel* __self1 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp1 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp2 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp3 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    __self1->Margin(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    __self1->Padding(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    __self1->Name(TimePicker__Template::__selector0_);
    __self1->SourceLineNumber(2);
    __self1->SourceFileName(::STRINGS[1/*"TimePicker.ux"*/]);
    temp->Value(::STRINGS[2/*"GraphicsApp...*/]);
    temp->TextWrapping(1);
    temp->Alignment(10);
    temp->SourceLineNumber(3);
    temp->SourceFileName(::STRINGS[1/*"TimePicker.ux"*/]);
    temp1->Layer(1);
    temp1->SourceLineNumber(4);
    temp1->SourceFileName(::STRINGS[1/*"TimePicker.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Strokes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp2);
    temp2->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    __self1->Background(temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    return *__retval = __self1, void();
}

// public Template New(Native.TimePicker parent, Native.TimePicker parentInstance)
void TimePicker__Template__New2_fn(::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance, TimePicker__Template** __retval)
{
    *__retval = TimePicker__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector TimePicker__Template::__selector0_;

// public Template(Native.TimePicker parent, Native.TimePicker parentInstance) [instance]
void TimePicker__Template::ctor_1(::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance)
{
    ctor_(::STRINGS[0/*"GraphicsApp...*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(Native.TimePicker parent, Native.TimePicker parentInstance) [static]
TimePicker__Template* TimePicker__Template::New2(::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance)
{
    TimePicker__Template* obj1 = (TimePicker__Template*)uNew(TimePicker__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/.uno/ux15/Native.TimePicker.g.uno
// -------------------------------------------------------------------------------------------

// public partial sealed class TimePicker.Template1
// {
// static Template1()
static void TimePicker__Template1__cctor__fn(uType* __type)
{
}

static void TimePicker__Template1_build(uType* type)
{
    ::STRINGS[3] = uString::Const("iOSAppearance");
    type->SetFields(2,
        ::g::Native::TimePicker_typeof(), offsetof(TimePicker__Template1, __parent1), uFieldFlagsWeak,
        ::g::Native::TimePicker_typeof(), offsetof(TimePicker__Template1, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TimePicker__Template1__New2_fn, 0, true, type, 2, ::g::Native::TimePicker_typeof(), ::g::Native::TimePicker_typeof()));
}

::g::Uno::UX::Template_type* TimePicker__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(TimePicker__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Native.TimePicker.Template1", options);
    type->fp_build_ = TimePicker__Template1_build;
    type->fp_cctor_ = TimePicker__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))TimePicker__Template1__New1_fn;
    return type;
}

// public Template1(Native.TimePicker parent, Native.TimePicker parentInstance)
void TimePicker__Template1__ctor_1_fn(TimePicker__Template1* __this, ::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void TimePicker__Template1__New1_fn(TimePicker__Template1* __this, uObject** __retval)
{
    uStackFrame __("Native.TimePicker.Template1", "New()");
    ::g::Native::iOS::TimePickerView* __self1 = ::g::Native::iOS::TimePickerView::New3((uObject*)__this->__parent1);
    return *__retval = __self1, void();
}

// public Template1 New(Native.TimePicker parent, Native.TimePicker parentInstance)
void TimePicker__Template1__New2_fn(::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance, TimePicker__Template1** __retval)
{
    *__retval = TimePicker__Template1::New2(parent, parentInstance);
}

// public Template1(Native.TimePicker parent, Native.TimePicker parentInstance) [instance]
void TimePicker__Template1::ctor_1(::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance)
{
    ctor_(::STRINGS[3/*"iOSAppearance"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(Native.TimePicker parent, Native.TimePicker parentInstance) [static]
TimePicker__Template1* TimePicker__Template1::New2(::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance)
{
    TimePicker__Template1* obj1 = (TimePicker__Template1*)uNew(TimePicker__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/.uno/ux15/Native.TimePicker.g.uno
// -------------------------------------------------------------------------------------------

// public partial sealed class TimePicker.Template2
// {
// static Template2()
static void TimePicker__Template2__cctor__fn(uType* __type)
{
}

static void TimePicker__Template2_build(uType* type)
{
    ::STRINGS[4] = uString::Const("AndroidAppearance");
    type->SetFields(2,
        ::g::Native::TimePicker_typeof(), offsetof(TimePicker__Template2, __parent1), uFieldFlagsWeak,
        ::g::Native::TimePicker_typeof(), offsetof(TimePicker__Template2, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TimePicker__Template2__New2_fn, 0, true, type, 2, ::g::Native::TimePicker_typeof(), ::g::Native::TimePicker_typeof()));
}

::g::Uno::UX::Template_type* TimePicker__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(TimePicker__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Native.TimePicker.Template2", options);
    type->fp_build_ = TimePicker__Template2_build;
    type->fp_cctor_ = TimePicker__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))TimePicker__Template2__New1_fn;
    return type;
}

// public Template2(Native.TimePicker parent, Native.TimePicker parentInstance)
void TimePicker__Template2__ctor_1_fn(TimePicker__Template2* __this, ::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void TimePicker__Template2__New1_fn(TimePicker__Template2* __this, uObject** __retval)
{
    uStackFrame __("Native.TimePicker.Template2", "New()");
    ::g::Native::Android::TimePickerView* __self1 = ::g::Native::Android::TimePickerView::New1((uObject*)__this->__parent1);
    return *__retval = __self1, void();
}

// public Template2 New(Native.TimePicker parent, Native.TimePicker parentInstance)
void TimePicker__Template2__New2_fn(::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance, TimePicker__Template2** __retval)
{
    *__retval = TimePicker__Template2::New2(parent, parentInstance);
}

// public Template2(Native.TimePicker parent, Native.TimePicker parentInstance) [instance]
void TimePicker__Template2::ctor_1(::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance)
{
    ctor_(::STRINGS[4/*"AndroidAppe...*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(Native.TimePicker parent, Native.TimePicker parentInstance) [static]
TimePicker__Template2* TimePicker__Template2::New2(::g::Native::TimePicker* parent, ::g::Native::TimePicker* parentInstance)
{
    TimePicker__Template2* obj1 = (TimePicker__Template2*)uNew(TimePicker__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/.uno/ux15/Native.TimePicker.g.uno
// -------------------------------------------------------------------------------------------

// public partial sealed class TimePicker
// {
// static TimePicker()
static void TimePicker__cctor_5_fn(uType* __type)
{
    TimePicker::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("self"));
}

static void TimePicker_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Native::TimePickerBase_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Native::TimePickerBase_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Native::TimePickerBase_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Native::TimePickerBase_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Native::TimePickerBase_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Native::TimePickerBase_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Native::TimePickerBase_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Native::TimePickerBase_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Native::TimePickerBase_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Native::TimePickerBase_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Native::TimePickerBase_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Native::TimePickerBase_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Native::TimePickerBase_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Native::TimePickerBase_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Native::TimePickerBase_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Native::TimePickerBase_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Native::TimePickerBase_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Native::TimePickerBase_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Native::TimePickerBase_type, interface18),
        ::g::Native::ITimePickerHost_typeof(), offsetof(::g::Native::TimePickerBase_type, interface19));
    type->SetFields(123,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&TimePicker::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TimePicker__New4_fn, 0, true, type, 0));
}

::g::Native::TimePickerBase_type* TimePicker_typeof()
{
    static uSStrong< ::g::Native::TimePickerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Native::TimePickerBase_typeof();
    options.FieldCount = 124;
    options.InterfaceCount = 20;
    options.ObjectSize = sizeof(TimePicker);
    options.TypeSize = sizeof(::g::Native::TimePickerBase_type);
    type = (::g::Native::TimePickerBase_type*)uClassType::New("Native.TimePicker", options);
    type->fp_build_ = TimePicker_build;
    type->fp_ctor_ = (void*)TimePicker__New4_fn;
    type->fp_cctor_ = TimePicker__cctor_5_fn;
    type->interface19.fp_OnTimeChanged = (void(*)(uObject*))::g::Native::TimePickerBase__NativeITimePickerHostOnTimeChanged_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
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

// public TimePicker()
void TimePicker__ctor_8_fn(TimePicker* __this)
{
    __this->ctor_8();
}

// private void InitializeUX()
void TimePicker__InitializeUX_fn(TimePicker* __this)
{
    __this->InitializeUX();
}

// public TimePicker New()
void TimePicker__New4_fn(TimePicker** __retval)
{
    *__retval = TimePicker::New4();
}

::g::Uno::UX::Selector TimePicker::__selector0_;

// public TimePicker() [instance]
void TimePicker::ctor_8()
{
    uStackFrame __("Native.TimePicker", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance]
void TimePicker::InitializeUX()
{
    uStackFrame __("Native.TimePicker", "InitializeUX()");
    TimePicker__Template* GraphicsAppearance = TimePicker__Template::New2(this, this);
    TimePicker__Template1* iOSAppearance = TimePicker__Template1::New2(this, this);
    TimePicker__Template2* AndroidAppearance = TimePicker__Template2::New2(this, this);
    Name(TimePicker::__selector0_);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[1/*"TimePicker.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), GraphicsAppearance);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), iOSAppearance);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), AndroidAppearance);
}

// public TimePicker New() [static]
TimePicker* TimePicker::New4()
{
    TimePicker* obj1 = (TimePicker*)uNew(TimePicker_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}} // ::g::Native
