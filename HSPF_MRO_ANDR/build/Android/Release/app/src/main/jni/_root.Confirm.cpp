// This file was generated based on '.uno/ux15/Confirm.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Confirm.h>
#include <_root.HSMRO_accessor_Confirm_Show.h>
#include <_root.HSMRO_accessor_Confirm_Text.h>
#include <_root.HSMRO_Confirm_Show_Property.h>
#include <_root.HSMRO_FuseControlsShape_Color_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_Value_Property.h>
#include <_root.HSMRO_FuseControlsTextInputControl_Value_Property.h>
#include <_root.HSMRO_FuseElementsElement_HitTestMode_Property.h>
#include <_root.HSMRO_FuseElementsElement_Offset_Property.h>
#include <_root.HSMRO_FuseElementsElement_Opacity_Property.h>
#include <_root.HSMRO_FuseTriggersWhileBool_Value_Property.h>
#include <_root.MainView.h>
#include <_root.SelectableRectangle.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Controls.WrapPanel.h>
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
#include <Fuse.Selection.Selection.h>
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
static uString* STRINGS[27];
static uType* TYPES[9];

namespace g{

// public partial sealed class Confirm
// {
// static Confirm()
static void Confirm__cctor_4_fn(uType* __type)
{
    Confirm::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Show"*/]);
    Confirm::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    Confirm::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Offset"*/]);
    Confirm::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Color"*/]);
    Confirm::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"HitTestMode"*/]);
    Confirm::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Opacity"*/]);
    Confirm::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"root"*/]);
    Confirm::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"AddToBasket...*/]);
    Confirm::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"addTaskButt...*/]);
    Confirm::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"text"*/]);
    Confirm::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"ButtonsPanel"*/]);
    Confirm::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Event_Handler"*/]);
    Confirm::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"show"*/]);
}

static void Confirm_build(uType* type)
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
    ::STRINGS[13] = uString::Const("cancel_remark");
    ::STRINGS[14] = uString::Const("Pages/Menu_Supplier/Confirm.ux");
    ::STRINGS[15] = uString::Const("1");
    ::STRINGS[16] = uString::Const("\353\257\270\354\267\250\352\270\211\355\222\210\353\252\251");
    ::STRINGS[17] = uString::Const("2");
    ::STRINGS[18] = uString::Const("\354\212\244\355\216\231\354\240\225\353\263\264\353\266\200\354\241\261");
    ::STRINGS[19] = uString::Const("3");
    ::STRINGS[20] = uString::Const("\353\213\250\354\242\205");
    ::STRINGS[21] = uString::Const("4");
    ::STRINGS[22] = uString::Const("\352\270\260\355\203\200");
    ::STRINGS[23] = uString::Const("_________________________________");
    ::STRINGS[24] = uString::Const("Yes");
    ::STRINGS[25] = uString::Const("No");
    ::STRINGS[26] = uString::Const("Text");
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
        ::g::HSMRO_accessor_Confirm_Show_typeof(),
        ::g::HSMRO_accessor_Confirm_Text_typeof(),
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
    type->SetFields(116,
        ::g::Uno::Bool_typeof(), offsetof(Confirm, _field_Show), 0,
        ::g::Uno::String_typeof(), offsetof(Confirm, _field_Text), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(Confirm, this_Show_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Confirm, text_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Confirm, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), NULL), offsetof(Confirm, text_Offset_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(Confirm, addTaskButtons_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), NULL), offsetof(Confirm, ButtonsPanel_Offset_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL), offsetof(Confirm, AddToBasketPanel_HitTestMode_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(Confirm, AddToBasketPanel_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(Confirm, show_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(Confirm, AddToBasketPanel), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(Confirm, addTaskButtons), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(Confirm, text), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(Confirm, ButtonsPanel), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(Confirm, show), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(Confirm, Event_Handler), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm::__selector12_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Confirm_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 146;
    options.InterfaceCount = 19;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(Confirm);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Confirm", options);
    type->fp_build_ = Confirm_build;
    type->fp_ctor_ = (void*)Confirm__New4_fn;
    type->fp_cctor_ = Confirm__cctor_4_fn;
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

// public Confirm()
void Confirm__ctor_7_fn(Confirm* __this)
{
    __this->ctor_7();
}

// private void InitializeUX()
void Confirm__InitializeUX_fn(Confirm* __this)
{
    __this->InitializeUX();
}

// public Confirm New()
void Confirm__New4_fn(Confirm** __retval)
{
    *__retval = Confirm::New4();
}

// public void SetShow(bool value, Uno.UX.IPropertyListener origin)
void Confirm__SetShow_fn(Confirm* __this, bool* value, uObject* origin)
{
    __this->SetShow(*value, origin);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin)
void Confirm__SetText_fn(Confirm* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public bool get_Show()
void Confirm__get_Show_fn(Confirm* __this, bool* __retval)
{
    *__retval = __this->Show();
}

// public void set_Show(bool value)
void Confirm__set_Show_fn(Confirm* __this, bool* value)
{
    __this->Show(*value);
}

// public string get_Text()
void Confirm__get_Text_fn(Confirm* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value)
void Confirm__set_Text_fn(Confirm* __this, uString* value)
{
    __this->Text(value);
}

::g::Uno::UX::Selector Confirm::__selector0_;
::g::Uno::UX::Selector Confirm::__selector1_;
::g::Uno::UX::Selector Confirm::__selector2_;
::g::Uno::UX::Selector Confirm::__selector3_;
::g::Uno::UX::Selector Confirm::__selector4_;
::g::Uno::UX::Selector Confirm::__selector5_;
::g::Uno::UX::Selector Confirm::__selector6_;
::g::Uno::UX::Selector Confirm::__selector7_;
::g::Uno::UX::Selector Confirm::__selector8_;
::g::Uno::UX::Selector Confirm::__selector9_;
::g::Uno::UX::Selector Confirm::__selector10_;
::g::Uno::UX::Selector Confirm::__selector11_;
::g::Uno::UX::Selector Confirm::__selector12_;

// public Confirm() [instance]
void Confirm::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance]
void Confirm::InitializeUX()
{
    this_Show_inst = ::g::HSMRO_Confirm_Show_Property::New1(this, Confirm::__selector0_);
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    text = ::g::Fuse::Controls::Text::New3();
    text_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(text, Confirm::__selector1_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::HSMRO_accessor_Confirm_Text::Singleton());
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::HSMRO_FuseControlsTextInputControl_Value_Property::New1(temp, Confirm::__selector1_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"cancel_remark"*/]);
    text_Offset_inst = ::g::HSMRO_FuseElementsElement_Offset_Property::New1(text, Confirm::__selector2_);
    addTaskButtons = ::g::Fuse::Controls::Rectangle::New3();
    addTaskButtons_Color_inst = ::g::HSMRO_FuseControlsShape_Color_Property::New1(addTaskButtons, Confirm::__selector3_);
    ButtonsPanel = ::g::Fuse::Controls::StackPanel::New4();
    ButtonsPanel_Offset_inst = ::g::HSMRO_FuseElementsElement_Offset_Property::New1(ButtonsPanel, Confirm::__selector2_);
    AddToBasketPanel = ::g::Fuse::Controls::Panel::New3();
    AddToBasketPanel_HitTestMode_inst = ::g::HSMRO_FuseElementsElement_HitTestMode_Property::New1(AddToBasketPanel, Confirm::__selector4_);
    AddToBasketPanel_Opacity_inst = ::g::HSMRO_FuseElementsElement_Opacity_Property::New1(AddToBasketPanel, Confirm::__selector5_);
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(this);
    show = ::g::Fuse::Triggers::WhileTrue::New2();
    show_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(show, Confirm::__selector1_);
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::HSMRO_accessor_Confirm_Show::Singleton());
    ::g::Fuse::Controls::DockPanel* temp6 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Gestures::Tapped* temp7 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp8 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<bool>*/], this_Show_inst);
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(text_Value_inst, (uObject*)temp2, 3);
    ::g::Fuse::Controls::DockPanel* temp10 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp11 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Selection::Selection* temp12 = ::g::Fuse::Selection::Selection::New2();
    ::g::Fuse::Controls::WrapPanel* temp13 = ::g::Fuse::Controls::WrapPanel::New4();
    ::g::SelectableRectangle* temp14 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Text* temp15 = ::g::Fuse::Controls::Text::New3();
    ::g::SelectableRectangle* temp16 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Text* temp17 = ::g::Fuse::Controls::Text::New3();
    ::g::SelectableRectangle* temp18 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Text* temp19 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::WrapPanel* temp20 = ::g::Fuse::Controls::WrapPanel::New4();
    ::g::SelectableRectangle* temp21 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Text* temp22 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Controls::Rectangle* temp24 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp25 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Tapped* temp26 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp27 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<bool>*/], this_Show_inst);
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp28 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp29 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp30 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp31 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Tapped* temp32 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp33 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<bool>*/], this_Show_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp34 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9607843f, 0.5607843f, 0.5294118f, 1.0f));
    ::g::Fuse::Animations::Change* temp35 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Uno.UX.Size2>*/], text_Offset_inst);
    ::g::Fuse::Animations::Change* temp36 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float4>*/], addTaskButtons_Color_inst);
    ::g::Fuse::Animations::Change* temp37 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Uno.UX.Size2>*/], ButtonsPanel_Offset_inst);
    ::g::Fuse::Animations::Change* temp38 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<Fuse.Elements.HitTestMode>*/], AddToBasketPanel_HitTestMode_inst);
    ::g::Fuse::Animations::Change* temp39 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<float>*/], AddToBasketPanel_Opacity_inst);
    ::g::Fuse::Reactive::DataBinding* temp40 = ::g::Fuse::Reactive::DataBinding::New1(show_Value_inst, (uObject*)temp5, 3);
    Event_Handler = ::g::Fuse::UserEvent::New2();
    Name(Confirm::__selector6_);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    uPtr(AddToBasketPanel)->HitTestMode(0);
    uPtr(AddToBasketPanel)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(AddToBasketPanel)->Opacity(0.0f);
    uPtr(AddToBasketPanel)->Name(Confirm::__selector7_);
    uPtr(AddToBasketPanel)->SourceLineNumber(2);
    uPtr(AddToBasketPanel)->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddToBasketPanel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->Alignment(0);
    temp6->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp6->SourceLineNumber(3);
    temp6->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), addTaskButtons);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), text);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), ButtonsPanel);
    uPtr(addTaskButtons)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(addTaskButtons)->Layer(1);
    uPtr(addTaskButtons)->Name(Confirm::__selector8_);
    uPtr(addTaskButtons)->SourceLineNumber(4);
    uPtr(addTaskButtons)->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(addTaskButtons, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addTaskButtons)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp7->SourceLineNumber(5);
    temp7->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp8);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp8, uCRef(false));
    temp8->SourceLineNumber(6);
    temp8->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    uPtr(text)->TextWrapping(1);
    uPtr(text)->FontSize(25.0f);
    uPtr(text)->Color(::g::Fuse::Drawing::Colors::White());
    uPtr(text)->Alignment(10);
    uPtr(text)->Name(Confirm::__selector9_);
    uPtr(text)->SourceLineNumber(9);
    uPtr(text)->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(text, 2);
    uPtr(text)->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(text)->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    temp2->SourceLineNumber(9);
    temp2->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp1->SourceLineNumber(9);
    temp1->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp10->Alignment(10);
    temp10->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp10->SourceLineNumber(31);
    temp10->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp10, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp11->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp11->Color(::g::Fuse::Drawing::Colors::White());
    temp11->SourceLineNumber(32);
    temp11->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp11, 2);
    temp12->MinCount(1);
    temp12->MaxCount(1);
    temp12->SourceLineNumber(33);
    temp12->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp13->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    temp13->SourceLineNumber(35);
    temp13->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp13, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp14->ID(::STRINGS[15/*"1"*/]);
    temp14->SelectionColor(::g::Uno::Float4__New2(0.6784314f, 0.6784314f, 0.6784314f, 1.0f));
    temp14->SourceLineNumber(36);
    temp14->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp14, 2);
    temp15->Value(::STRINGS[16/*"미취급품목"*/]);
    temp15->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp15->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 15.0f, 0.0f));
    temp15->SourceLineNumber(37);
    temp15->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp16->ID(::STRINGS[17/*"2"*/]);
    temp16->SelectionColor(::g::Uno::Float4__New2(0.6784314f, 0.6784314f, 0.6784314f, 1.0f));
    temp16->SourceLineNumber(38);
    temp16->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp16, 2);
    temp17->Value(::STRINGS[18/*"스펙정보부족"*/]);
    temp17->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp17->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 15.0f, 0.0f));
    temp17->SourceLineNumber(39);
    temp17->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp18->ID(::STRINGS[19/*"3"*/]);
    temp18->SelectionColor(::g::Uno::Float4__New2(0.6784314f, 0.6784314f, 0.6784314f, 1.0f));
    temp18->SourceLineNumber(40);
    temp18->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp18, 2);
    temp19->Value(::STRINGS[20/*"단종"*/]);
    temp19->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp19->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp19->SourceLineNumber(41);
    temp19->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp20->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    temp20->SourceLineNumber(43);
    temp20->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp20, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp21->ID(::STRINGS[21/*"4"*/]);
    temp21->SelectionColor(::g::Uno::Float4__New2(0.6784314f, 0.6784314f, 0.6784314f, 1.0f));
    temp21->SourceLineNumber(44);
    temp21->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp21, 2);
    temp22->Value(::STRINGS[22/*"기타"*/]);
    temp22->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp22->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp22->SourceLineNumber(45);
    temp22->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp->PlaceholderText(::STRINGS[23/*"___________...*/]);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.972549f, 0.972549f, 0.972549f, 0.1607843f));
    temp->TextWrapping(1);
    temp->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Width(::g::Uno::UX::Size__New1(230.0f, 1));
    temp->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    temp->SourceLineNumber(46);
    temp->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    temp3->SourceLineNumber(46);
    temp3->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    uPtr(ButtonsPanel)->Orientation(0);
    uPtr(ButtonsPanel)->Alignment(2);
    uPtr(ButtonsPanel)->Name(Confirm::__selector10_);
    uPtr(ButtonsPanel)->SourceLineNumber(49);
    uPtr(ButtonsPanel)->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(ButtonsPanel, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ButtonsPanel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ButtonsPanel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ButtonsPanel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), show);
    temp24->CornerRadius(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp24->Color(::g::Fuse::Drawing::Colors::White());
    temp24->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp24->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp24->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp24->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp24->SourceLineNumber(50);
    temp24->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp24, 2);
    temp24->Fill(temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp25->Value(::STRINGS[24/*"Yes"*/]);
    temp25->Color(::g::Fuse::Drawing::Colors::White());
    temp25->Alignment(10);
    temp25->SourceLineNumber(51);
    temp25->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp25->Font(::g::MainView::AGOTHIC14());
    temp26->SourceLineNumber(52);
    temp26->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp28);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp27, uCRef(false));
    temp27->SourceLineNumber(53);
    temp27->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp28->EventName(Confirm::__selector11_);
    temp28->SourceLineNumber(54);
    temp28->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp30->CornerRadius(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp30->Color(::g::Fuse::Drawing::Colors::White());
    temp30->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp30->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp30->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp30->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp30->SourceLineNumber(57);
    temp30->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp30->Fill(temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp31->Value(::STRINGS[25/*"No"*/]);
    temp31->Color(::g::Fuse::Drawing::Colors::White());
    temp31->Alignment(10);
    temp31->SourceLineNumber(58);
    temp31->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp31->Font(::g::MainView::AGOTHIC14());
    temp32->SourceLineNumber(59);
    temp32->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp33);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp33, uCRef(false));
    temp33->SourceLineNumber(60);
    temp33->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    uPtr(show)->Name(Confirm::__selector12_);
    uPtr(show)->SourceLineNumber(63);
    uPtr(show)->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp40);
    ::g::Fuse::Animations::Change__set_Value_fn(temp35, uCRef(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 1), ::g::Uno::UX::Size__New1(0.0f, 1))));
    temp35->Duration(0.2);
    temp35->DelayBack(0.0);
    temp35->Delay(0.2);
    temp35->Easing(::g::Fuse::Animations::Easing::CubicOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp36, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.8666667f)));
    temp36->Duration(0.15);
    temp36->DelayBack(0.25);
    ::g::Fuse::Animations::Change__set_Value_fn(temp37, uCRef(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 1), ::g::Uno::UX::Size__New1(0.0f, 1))));
    temp37->Duration(0.3);
    temp37->Delay(0.0);
    temp37->Easing(::g::Fuse::Animations::Easing::QuinticInOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp38, uCRef<int32_t>(4));
    ::g::Fuse::Animations::Change__set_Value_fn(temp39, uCRef(1.0f));
    temp39->Duration(0.5);
    temp39->Easing(::g::Fuse::Animations::Easing::QuinticOut());
    temp5->SourceLineNumber(63);
    temp5->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    temp4->SourceLineNumber(63);
    temp4->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    uPtr(Event_Handler)->Name(Confirm::__selector11_);
    uPtr(Event_Handler)->SourceLineNumber(84);
    uPtr(Event_Handler)->SourceFileName(::STRINGS[14/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), AddToBasketPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), Event_Handler);
}

// public void SetShow(bool value, Uno.UX.IPropertyListener origin) [instance]
void Confirm::SetShow(bool value, uObject* origin)
{
    if (value != _field_Show)
    {
        _field_Show = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Show"*/]), origin);
    }
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance]
void Confirm::SetText(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"Text"*/]), origin);
    }
}

// public bool get_Show() [instance]
bool Confirm::Show()
{
    return _field_Show;
}

// public void set_Show(bool value) [instance]
void Confirm::Show(bool value)
{
    SetShow(value, NULL);
}

// public string get_Text() [instance]
uString* Confirm::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance]
void Confirm::Text(uString* value)
{
    SetText(value, NULL);
}

// public Confirm New() [static]
Confirm* Confirm::New4()
{
    Confirm* obj1 = (Confirm*)uNew(Confirm_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
