// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/Confirm_return.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Confirm_return.h>
#include <_root.HSMRO_accessor_Confirm_return_Show.h>
#include <_root.HSMRO_accessor_Confirm_return_Text.h>
#include <_root.HSMRO_Confirm_return_Show_Property.h>
#include <_root.HSMRO_FuseControlsShape_Color_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_Value_Property.h>
#include <_root.HSMRO_FuseControlsTextInputControl_Value_Property.h>
#include <_root.HSMRO_FuseElementsElement_HitTestMode_Property.h>
#include <_root.HSMRO_FuseElementsElement_Offset_Property.h>
#include <_root.HSMRO_FuseElementsElement_Opacity_Property.h>
#include <_root.HSMRO_FuseTriggersWhileBool_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Actions.RaiseUserEvent.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.UserEvent.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[20];
static uType* TYPES[9];

namespace g{

// public partial sealed class Confirm_return
// {
// static Confirm_return()
static void Confirm_return__cctor_4_fn(uType* __type)
{
    Confirm_return::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Show"*/]);
    Confirm_return::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    Confirm_return::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Offset"*/]);
    Confirm_return::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Color"*/]);
    Confirm_return::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"HitTestMode"*/]);
    Confirm_return::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Opacity"*/]);
    Confirm_return::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"root"*/]);
    Confirm_return::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"AddToBasket...*/]);
    Confirm_return::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"addTaskButt...*/]);
    Confirm_return::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"text"*/]);
    Confirm_return::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"ButtonsPanel"*/]);
    Confirm_return::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Event_Handler"*/]);
    Confirm_return::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"show"*/]);
}

static void Confirm_return_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Show");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Offset");
    ::STRINGS[3] = uString::Const("Color");
    ::STRINGS[4] = uString::Const("HitTestMode");
    ::STRINGS[5] = uString::Const("Opacity");
    ::STRINGS[6] = uString::Const("root");
    ::STRINGS[7] = uString::Const("AddToBasketPanel");
    ::STRINGS[8] = uString::Const("addTaskButtons");
    ::STRINGS[9] = uString::Const("text");
    ::STRINGS[10] = uString::Const("ButtonsPanel");
    ::STRINGS[11] = uString::Const("Event_Handler");
    ::STRINGS[12] = uString::Const("show");
    ::STRINGS[13] = uString::Const("return_text");
    ::STRINGS[14] = uString::Const("Pages/Menu_Supplier/Confirm_return.ux");
    ::STRINGS[15] = uString::Const("(\353\260\230\353\240\244\354\202\254\354\234\240\354\236\205\353\240\245)");
    ::STRINGS[16] = uString::Const("Yes");
    ::STRINGS[17] = uString::Const("No");
    ::STRINGS[18] = uString::Const("Handler_return");
    ::STRINGS[19] = uString::Const("Text");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::HSMRO_accessor_Confirm_return_Show_typeof(),
        ::g::HSMRO_accessor_Confirm_return_Text_typeof(),
        ::g::MainView_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(120,
        ::g::Uno::Bool_typeof(), offsetof(Confirm_return, _field_Show), 0,
        uObject_typeof(), offsetof(Confirm_return, _field_Handler_return), 0,
        ::g::Uno::String_typeof(), offsetof(Confirm_return, _field_Text), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(Confirm_return, this_Show_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Confirm_return, text_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Confirm_return, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), NULL), offsetof(Confirm_return, text_Offset_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(Confirm_return, addTaskButtons_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), NULL), offsetof(Confirm_return, ButtonsPanel_Offset_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL), offsetof(Confirm_return, AddToBasketPanel_HitTestMode_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(Confirm_return, AddToBasketPanel_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(Confirm_return, show_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(Confirm_return, AddToBasketPanel), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(Confirm_return, addTaskButtons), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(Confirm_return, text), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(Confirm_return, ButtonsPanel), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(Confirm_return, show), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(Confirm_return, Event_Handler), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_return::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_return::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_return::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_return::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_return::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_return::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_return::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_return::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_return::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_return::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_return::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_return::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_return::__selector12_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Handler_return", NULL, (void*)Confirm_return__get_Handler_return_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Handler_return", NULL, (void*)Confirm_return__set_Handler_return_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)Confirm_return__New4_fn, 0, true, type, 0),
        new uFunction("SetHandler_return", NULL, (void*)Confirm_return__SetHandler_return_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetShow", NULL, (void*)Confirm_return__SetShow_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetText", NULL, (void*)Confirm_return__SetText_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Show", NULL, (void*)Confirm_return__get_Show_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Show", NULL, (void*)Confirm_return__set_Show_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Text", NULL, (void*)Confirm_return__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Text", NULL, (void*)Confirm_return__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Controls::Panel_type* Confirm_return_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 151;
    options.InterfaceCount = 19;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(Confirm_return);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Confirm_return", options);
    type->fp_build_ = Confirm_return_build;
    type->fp_ctor_ = (void*)Confirm_return__New4_fn;
    type->fp_cctor_ = Confirm_return__cctor_4_fn;
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

// public Confirm_return()
void Confirm_return__ctor_7_fn(Confirm_return* __this)
{
    __this->ctor_7();
}

// public object get_Handler_return()
void Confirm_return__get_Handler_return_fn(Confirm_return* __this, uObject** __retval)
{
    *__retval = __this->Handler_return();
}

// public void set_Handler_return(object value)
void Confirm_return__set_Handler_return_fn(Confirm_return* __this, uObject* value)
{
    __this->Handler_return(value);
}

// private void InitializeUX()
void Confirm_return__InitializeUX_fn(Confirm_return* __this)
{
    __this->InitializeUX();
}

// public Confirm_return New()
void Confirm_return__New4_fn(Confirm_return** __retval)
{
    *__retval = Confirm_return::New4();
}

// public void SetHandler_return(object value, Uno.UX.IPropertyListener origin)
void Confirm_return__SetHandler_return_fn(Confirm_return* __this, uObject* value, uObject* origin)
{
    __this->SetHandler_return(value, origin);
}

// public void SetShow(bool value, Uno.UX.IPropertyListener origin)
void Confirm_return__SetShow_fn(Confirm_return* __this, bool* value, uObject* origin)
{
    __this->SetShow(*value, origin);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin)
void Confirm_return__SetText_fn(Confirm_return* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public bool get_Show()
void Confirm_return__get_Show_fn(Confirm_return* __this, bool* __retval)
{
    *__retval = __this->Show();
}

// public void set_Show(bool value)
void Confirm_return__set_Show_fn(Confirm_return* __this, bool* value)
{
    __this->Show(*value);
}

// public string get_Text()
void Confirm_return__get_Text_fn(Confirm_return* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value)
void Confirm_return__set_Text_fn(Confirm_return* __this, uString* value)
{
    __this->Text(value);
}

::g::Uno::UX::Selector Confirm_return::__selector0_;
::g::Uno::UX::Selector Confirm_return::__selector1_;
::g::Uno::UX::Selector Confirm_return::__selector2_;
::g::Uno::UX::Selector Confirm_return::__selector3_;
::g::Uno::UX::Selector Confirm_return::__selector4_;
::g::Uno::UX::Selector Confirm_return::__selector5_;
::g::Uno::UX::Selector Confirm_return::__selector6_;
::g::Uno::UX::Selector Confirm_return::__selector7_;
::g::Uno::UX::Selector Confirm_return::__selector8_;
::g::Uno::UX::Selector Confirm_return::__selector9_;
::g::Uno::UX::Selector Confirm_return::__selector10_;
::g::Uno::UX::Selector Confirm_return::__selector11_;
::g::Uno::UX::Selector Confirm_return::__selector12_;

// public Confirm_return() [instance]
void Confirm_return::ctor_7()
{
    uStackFrame __("Confirm_return", ".ctor()");
    ctor_6();
    InitializeUX();
}

// public object get_Handler_return() [instance]
uObject* Confirm_return::Handler_return()
{
    return _field_Handler_return;
}

// public void set_Handler_return(object value) [instance]
void Confirm_return::Handler_return(uObject* value)
{
    uStackFrame __("Confirm_return", "set_Handler_return(object)");
    SetHandler_return(value, NULL);
}

// private void InitializeUX() [instance]
void Confirm_return::InitializeUX()
{
    uStackFrame __("Confirm_return", "InitializeUX()");
    this_Show_inst = ::g::HSMRO_Confirm_return_Show_Property::New1(this, Confirm_return::__selector0_);
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    text = ::g::Fuse::Controls::Text::New3();
    text_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(text, Confirm_return::__selector1_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::HSMRO_accessor_Confirm_return_Text::Singleton());
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::HSMRO_FuseControlsTextInputControl_Value_Property::New1(temp, Confirm_return::__selector1_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"return_text"*/]);
    text_Offset_inst = ::g::HSMRO_FuseElementsElement_Offset_Property::New1(text, Confirm_return::__selector2_);
    addTaskButtons = ::g::Fuse::Controls::Rectangle::New3();
    addTaskButtons_Color_inst = ::g::HSMRO_FuseControlsShape_Color_Property::New1(addTaskButtons, Confirm_return::__selector3_);
    ButtonsPanel = ::g::Fuse::Controls::StackPanel::New4();
    ButtonsPanel_Offset_inst = ::g::HSMRO_FuseElementsElement_Offset_Property::New1(ButtonsPanel, Confirm_return::__selector2_);
    AddToBasketPanel = ::g::Fuse::Controls::Panel::New3();
    AddToBasketPanel_HitTestMode_inst = ::g::HSMRO_FuseElementsElement_HitTestMode_Property::New1(AddToBasketPanel, Confirm_return::__selector4_);
    AddToBasketPanel_Opacity_inst = ::g::HSMRO_FuseElementsElement_Opacity_Property::New1(AddToBasketPanel, Confirm_return::__selector5_);
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(this);
    show = ::g::Fuse::Triggers::WhileTrue::New2();
    show_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(show, Confirm_return::__selector1_);
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::HSMRO_accessor_Confirm_return_Show::Singleton());
    ::g::Fuse::Gestures::Tapped* temp6 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp7 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<bool>*/], this_Show_inst);
    ::g::Fuse::Controls::DockPanel* temp8 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(text_Value_inst, (uObject*)temp2, 3);
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp11 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.1254902f));
    ::g::Fuse::Controls::Rectangle* temp12 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp13 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Tapped* temp14 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp15 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp16 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp17 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp18 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Tapped* temp19 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp20 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<bool>*/], this_Show_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp21 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9607843f, 0.5607843f, 0.5294118f, 1.0f));
    ::g::Fuse::Animations::Change* temp22 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Uno.UX.Size2>*/], text_Offset_inst);
    ::g::Fuse::Animations::Change* temp23 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float4>*/], addTaskButtons_Color_inst);
    ::g::Fuse::Animations::Change* temp24 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Uno.UX.Size2>*/], ButtonsPanel_Offset_inst);
    ::g::Fuse::Animations::Change* temp25 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<Fuse.Elements.HitTestMode>*/], AddToBasketPanel_HitTestMode_inst);
    ::g::Fuse::Animations::Change* temp26 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<float>*/], AddToBasketPanel_Opacity_inst);
    ::g::Fuse::Reactive::DataBinding* temp27 = ::g::Fuse::Reactive::DataBinding::New1(show_Value_inst, (uObject*)temp5, 3);
    Event_Handler = ::g::Fuse::UserEvent::New2();
    Name(Confirm_return::__selector6_);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    uPtr(AddToBasketPanel)->HitTestMode(0);
    uPtr(AddToBasketPanel)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(AddToBasketPanel)->Opacity(0.0f);
    uPtr(AddToBasketPanel)->Name(Confirm_return::__selector7_);
    uPtr(AddToBasketPanel)->SourceLineNumber(2);
    uPtr(AddToBasketPanel)->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddToBasketPanel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), addTaskButtons);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddToBasketPanel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddToBasketPanel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), show);
    uPtr(addTaskButtons)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(addTaskButtons)->Layer(1);
    uPtr(addTaskButtons)->Name(Confirm_return::__selector8_);
    uPtr(addTaskButtons)->SourceLineNumber(3);
    uPtr(addTaskButtons)->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addTaskButtons)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->SourceLineNumber(4);
    temp6->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp7);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp7, uCRef(false));
    temp7->SourceLineNumber(5);
    temp7->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp8->Alignment(10);
    temp8->SourceLineNumber(8);
    temp8->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), text);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), ButtonsPanel);
    uPtr(text)->TextWrapping(1);
    uPtr(text)->FontSize(25.0f);
    uPtr(text)->Color(::g::Fuse::Drawing::Colors::White());
    uPtr(text)->Alignment(10);
    uPtr(text)->Name(Confirm_return::__selector9_);
    uPtr(text)->SourceLineNumber(9);
    uPtr(text)->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(text, 2);
    uPtr(text)->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(text)->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    temp2->SourceLineNumber(9);
    temp2->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp1->SourceLineNumber(9);
    temp1->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp->PlaceholderText(::STRINGS[15/*"(??????????????????)"*/]);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.9803922f, 0.945098f, 0.945098f, 1.0f));
    temp->TextAlignment(1);
    temp->TextColor(::g::Fuse::Drawing::Colors::White());
    temp->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    temp->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp->Alignment(0);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    temp->SourceLineNumber(10);
    temp->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 2);
    temp->Font(::g::MainView::AGOTHIC14());
    temp->Background(temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    temp3->SourceLineNumber(10);
    temp3->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    uPtr(ButtonsPanel)->Orientation(0);
    uPtr(ButtonsPanel)->Alignment(2);
    uPtr(ButtonsPanel)->Name(Confirm_return::__selector10_);
    uPtr(ButtonsPanel)->SourceLineNumber(11);
    uPtr(ButtonsPanel)->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ButtonsPanel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ButtonsPanel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp12->CornerRadius(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp12->Color(::g::Fuse::Drawing::Colors::White());
    temp12->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp12->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp12->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp12->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp12->SourceLineNumber(12);
    temp12->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp12->Fill(temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp13->Value(::STRINGS[16/*"Yes"*/]);
    temp13->Color(::g::Fuse::Drawing::Colors::White());
    temp13->Alignment(10);
    temp13->SourceLineNumber(13);
    temp13->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp13->Font(::g::MainView::AGOTHIC14());
    temp14->SourceLineNumber(14);
    temp14->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp15);
    temp15->EventName(Confirm_return::__selector11_);
    temp15->SourceLineNumber(15);
    temp15->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp17->CornerRadius(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp17->Color(::g::Fuse::Drawing::Colors::White());
    temp17->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp17->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp17->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp17->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp17->SourceLineNumber(19);
    temp17->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp17->Fill(temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp18->Value(::STRINGS[17/*"No"*/]);
    temp18->Color(::g::Fuse::Drawing::Colors::White());
    temp18->Alignment(10);
    temp18->SourceLineNumber(20);
    temp18->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp18->Font(::g::MainView::AGOTHIC14());
    temp19->SourceLineNumber(21);
    temp19->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp20);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp20, uCRef(false));
    temp20->SourceLineNumber(22);
    temp20->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    uPtr(show)->Name(Confirm_return::__selector12_);
    uPtr(show)->SourceLineNumber(30);
    uPtr(show)->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    ::g::Fuse::Animations::Change__set_Value_fn(temp22, uCRef(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 1), ::g::Uno::UX::Size__New1(0.0f, 1))));
    temp22->Duration(0.2);
    temp22->DelayBack(0.0);
    temp22->Delay(0.2);
    temp22->Easing(::g::Fuse::Animations::Easing::CubicOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp23, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.8666667f)));
    temp23->Duration(0.15);
    temp23->DelayBack(0.25);
    ::g::Fuse::Animations::Change__set_Value_fn(temp24, uCRef(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 1), ::g::Uno::UX::Size__New1(0.0f, 1))));
    temp24->Duration(0.3);
    temp24->Delay(0.0);
    temp24->Easing(::g::Fuse::Animations::Easing::QuinticInOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp25, uCRef<int32_t>(4));
    ::g::Fuse::Animations::Change__set_Value_fn(temp26, uCRef(1.0f));
    temp26->Duration(0.5);
    temp26->Easing(::g::Fuse::Animations::Easing::QuinticOut());
    temp5->SourceLineNumber(30);
    temp5->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp4->SourceLineNumber(30);
    temp4->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    uPtr(Event_Handler)->Name(Confirm_return::__selector11_);
    uPtr(Event_Handler)->SourceLineNumber(44);
    uPtr(Event_Handler)->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), AddToBasketPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), Event_Handler);
}

// public void SetHandler_return(object value, Uno.UX.IPropertyListener origin) [instance]
void Confirm_return::SetHandler_return(uObject* value, uObject* origin)
{
    uStackFrame __("Confirm_return", "SetHandler_return(object,Uno.UX.IPropertyListener)");

    if (value != _field_Handler_return)
    {
        _field_Handler_return = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"Handler_ret...*/]), origin);
    }
}

// public void SetShow(bool value, Uno.UX.IPropertyListener origin) [instance]
void Confirm_return::SetShow(bool value, uObject* origin)
{
    uStackFrame __("Confirm_return", "SetShow(bool,Uno.UX.IPropertyListener)");

    if (value != _field_Show)
    {
        _field_Show = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Show"*/]), origin);
    }
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance]
void Confirm_return::SetText(uString* value, uObject* origin)
{
    uStackFrame __("Confirm_return", "SetText(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"Text"*/]), origin);
    }
}

// public bool get_Show() [instance]
bool Confirm_return::Show()
{
    return _field_Show;
}

// public void set_Show(bool value) [instance]
void Confirm_return::Show(bool value)
{
    uStackFrame __("Confirm_return", "set_Show(bool)");
    SetShow(value, NULL);
}

// public string get_Text() [instance]
uString* Confirm_return::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance]
void Confirm_return::Text(uString* value)
{
    uStackFrame __("Confirm_return", "set_Text(string)");
    SetText(value, NULL);
}

// public Confirm_return New() [static]
Confirm_return* Confirm_return::New4()
{
    Confirm_return* obj1 = (Confirm_return*)uNew(Confirm_return_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
