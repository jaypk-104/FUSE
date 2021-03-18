// This file was generated based on '.uno/ux15/Confirm_inq.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Confirm_inq.h>
#include <_root.HSMRO_accessor_Confirm_inq_Show.h>
#include <_root.HSMRO_accessor_Confirm_inq_Text.h>
#include <_root.HSMRO_Confirm_inq_Show_Property.h>
#include <_root.HSMRO_FuseControlsShape_Color_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_Value_Property.h>
#include <_root.HSMRO_FuseElementsElement_HitTestMode_Property.h>
#include <_root.HSMRO_FuseElementsElement_Offset_Property.h>
#include <_root.HSMRO_FuseElementsElement_Opacity_Property.h>
#include <_root.HSMRO_FuseTriggersWhileBool_Value_Property.h>
#include <_root.MainView.h>
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
static uString* STRINGS[17];
static uType* TYPES[9];

namespace g{

// public partial sealed class Confirm_inq
// {
// static Confirm_inq()
static void Confirm_inq__cctor_4_fn(uType* __type)
{
    Confirm_inq::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Show"*/]);
    Confirm_inq::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    Confirm_inq::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Offset"*/]);
    Confirm_inq::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Color"*/]);
    Confirm_inq::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"HitTestMode"*/]);
    Confirm_inq::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Opacity"*/]);
    Confirm_inq::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"root"*/]);
    Confirm_inq::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"AddToBasket...*/]);
    Confirm_inq::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"addTaskButt...*/]);
    Confirm_inq::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"text"*/]);
    Confirm_inq::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"ButtonsPanel"*/]);
    Confirm_inq::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Event_Handler"*/]);
    Confirm_inq::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"show"*/]);
}

static void Confirm_inq_build(uType* type)
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
    ::STRINGS[13] = uString::Const("Pages/Menu_Supplier/Confirm_inq.ux");
    ::STRINGS[14] = uString::Const("Yes");
    ::STRINGS[15] = uString::Const("No");
    ::STRINGS[16] = uString::Const("Text");
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
        ::g::HSMRO_accessor_Confirm_inq_Show_typeof(),
        ::g::HSMRO_accessor_Confirm_inq_Text_typeof(),
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
        ::g::Uno::Bool_typeof(), offsetof(Confirm_inq, _field_Show), 0,
        ::g::Uno::String_typeof(), offsetof(Confirm_inq, _field_Text), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(Confirm_inq, this_Show_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Confirm_inq, text_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), NULL), offsetof(Confirm_inq, text_Offset_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(Confirm_inq, addTaskButtons_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), NULL), offsetof(Confirm_inq, ButtonsPanel_Offset_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL), offsetof(Confirm_inq, AddToBasketPanel_HitTestMode_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(Confirm_inq, AddToBasketPanel_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(Confirm_inq, show_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(Confirm_inq, AddToBasketPanel), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(Confirm_inq, addTaskButtons), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(Confirm_inq, text), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(Confirm_inq, ButtonsPanel), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(Confirm_inq, show), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(Confirm_inq, Event_Handler), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_inq::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_inq::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_inq::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_inq::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_inq::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_inq::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_inq::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_inq::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_inq::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_inq::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_inq::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_inq::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Confirm_inq::__selector12_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Confirm_inq_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 145;
    options.InterfaceCount = 19;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(Confirm_inq);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Confirm_inq", options);
    type->fp_build_ = Confirm_inq_build;
    type->fp_ctor_ = (void*)Confirm_inq__New4_fn;
    type->fp_cctor_ = Confirm_inq__cctor_4_fn;
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

// public Confirm_inq()
void Confirm_inq__ctor_7_fn(Confirm_inq* __this)
{
    __this->ctor_7();
}

// private void InitializeUX()
void Confirm_inq__InitializeUX_fn(Confirm_inq* __this)
{
    __this->InitializeUX();
}

// public Confirm_inq New()
void Confirm_inq__New4_fn(Confirm_inq** __retval)
{
    *__retval = Confirm_inq::New4();
}

// public void SetShow(bool value, Uno.UX.IPropertyListener origin)
void Confirm_inq__SetShow_fn(Confirm_inq* __this, bool* value, uObject* origin)
{
    __this->SetShow(*value, origin);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin)
void Confirm_inq__SetText_fn(Confirm_inq* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public bool get_Show()
void Confirm_inq__get_Show_fn(Confirm_inq* __this, bool* __retval)
{
    *__retval = __this->Show();
}

// public void set_Show(bool value)
void Confirm_inq__set_Show_fn(Confirm_inq* __this, bool* value)
{
    __this->Show(*value);
}

// public string get_Text()
void Confirm_inq__get_Text_fn(Confirm_inq* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value)
void Confirm_inq__set_Text_fn(Confirm_inq* __this, uString* value)
{
    __this->Text(value);
}

::g::Uno::UX::Selector Confirm_inq::__selector0_;
::g::Uno::UX::Selector Confirm_inq::__selector1_;
::g::Uno::UX::Selector Confirm_inq::__selector2_;
::g::Uno::UX::Selector Confirm_inq::__selector3_;
::g::Uno::UX::Selector Confirm_inq::__selector4_;
::g::Uno::UX::Selector Confirm_inq::__selector5_;
::g::Uno::UX::Selector Confirm_inq::__selector6_;
::g::Uno::UX::Selector Confirm_inq::__selector7_;
::g::Uno::UX::Selector Confirm_inq::__selector8_;
::g::Uno::UX::Selector Confirm_inq::__selector9_;
::g::Uno::UX::Selector Confirm_inq::__selector10_;
::g::Uno::UX::Selector Confirm_inq::__selector11_;
::g::Uno::UX::Selector Confirm_inq::__selector12_;

// public Confirm_inq() [instance]
void Confirm_inq::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance]
void Confirm_inq::InitializeUX()
{
    this_Show_inst = ::g::HSMRO_Confirm_inq_Show_Property::New1(this, Confirm_inq::__selector0_);
    ::g::Fuse::Reactive::Constant* temp = ::g::Fuse::Reactive::Constant::New1(this);
    text = ::g::Fuse::Controls::Text::New3();
    text_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(text, Confirm_inq::__selector1_);
    ::g::Fuse::Reactive::Property* temp1 = ::g::Fuse::Reactive::Property::New1(temp, ::g::HSMRO_accessor_Confirm_inq_Text::Singleton());
    text_Offset_inst = ::g::HSMRO_FuseElementsElement_Offset_Property::New1(text, Confirm_inq::__selector2_);
    addTaskButtons = ::g::Fuse::Controls::Rectangle::New3();
    addTaskButtons_Color_inst = ::g::HSMRO_FuseControlsShape_Color_Property::New1(addTaskButtons, Confirm_inq::__selector3_);
    ButtonsPanel = ::g::Fuse::Controls::StackPanel::New4();
    ButtonsPanel_Offset_inst = ::g::HSMRO_FuseElementsElement_Offset_Property::New1(ButtonsPanel, Confirm_inq::__selector2_);
    AddToBasketPanel = ::g::Fuse::Controls::Panel::New3();
    AddToBasketPanel_HitTestMode_inst = ::g::HSMRO_FuseElementsElement_HitTestMode_Property::New1(AddToBasketPanel, Confirm_inq::__selector4_);
    AddToBasketPanel_Opacity_inst = ::g::HSMRO_FuseElementsElement_Opacity_Property::New1(AddToBasketPanel, Confirm_inq::__selector5_);
    ::g::Fuse::Reactive::Constant* temp2 = ::g::Fuse::Reactive::Constant::New1(this);
    show = ::g::Fuse::Triggers::WhileTrue::New2();
    show_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(show, Confirm_inq::__selector1_);
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::HSMRO_accessor_Confirm_inq_Show::Singleton());
    ::g::Fuse::Controls::DockPanel* temp4 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Gestures::Tapped* temp5 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp6 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<bool>*/], this_Show_inst);
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(text_Value_inst, (uObject*)temp1, 3);
    ::g::Fuse::Controls::Rectangle* temp8 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp9 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Tapped* temp10 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp11 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<bool>*/], this_Show_inst);
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp12 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp13 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp14 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp15 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Tapped* temp16 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::Set* temp17 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<bool>*/], this_Show_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp18 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9607843f, 0.5607843f, 0.5294118f, 1.0f));
    ::g::Fuse::Animations::Change* temp19 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Uno.UX.Size2>*/], text_Offset_inst);
    ::g::Fuse::Animations::Change* temp20 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float4>*/], addTaskButtons_Color_inst);
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Uno.UX.Size2>*/], ButtonsPanel_Offset_inst);
    ::g::Fuse::Animations::Change* temp22 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<Fuse.Elements.HitTestMode>*/], AddToBasketPanel_HitTestMode_inst);
    ::g::Fuse::Animations::Change* temp23 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<float>*/], AddToBasketPanel_Opacity_inst);
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(show_Value_inst, (uObject*)temp3, 3);
    Event_Handler = ::g::Fuse::UserEvent::New2();
    Name(Confirm_inq::__selector6_);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    uPtr(AddToBasketPanel)->HitTestMode(0);
    uPtr(AddToBasketPanel)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(AddToBasketPanel)->Opacity(0.0f);
    uPtr(AddToBasketPanel)->Name(Confirm_inq::__selector7_);
    uPtr(AddToBasketPanel)->SourceLineNumber(2);
    uPtr(AddToBasketPanel)->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddToBasketPanel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->Alignment(0);
    temp4->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp4->SourceLineNumber(3);
    temp4->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), addTaskButtons);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), text);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), ButtonsPanel);
    uPtr(addTaskButtons)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(addTaskButtons)->Layer(1);
    uPtr(addTaskButtons)->Name(Confirm_inq::__selector8_);
    uPtr(addTaskButtons)->SourceLineNumber(4);
    uPtr(addTaskButtons)->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(addTaskButtons, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addTaskButtons)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp5->SourceLineNumber(5);
    temp5->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp6);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp6, uCRef(false));
    temp6->SourceLineNumber(6);
    temp6->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    uPtr(text)->TextWrapping(1);
    uPtr(text)->FontSize(25.0f);
    uPtr(text)->Color(::g::Fuse::Drawing::Colors::White());
    uPtr(text)->Alignment(10);
    uPtr(text)->Name(Confirm_inq::__selector9_);
    uPtr(text)->SourceLineNumber(9);
    uPtr(text)->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(text, 4);
    uPtr(text)->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(text)->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    temp1->SourceLineNumber(9);
    temp1->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    temp->SourceLineNumber(9);
    temp->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    uPtr(ButtonsPanel)->Orientation(0);
    uPtr(ButtonsPanel)->Alignment(2);
    uPtr(ButtonsPanel)->Name(Confirm_inq::__selector10_);
    uPtr(ButtonsPanel)->SourceLineNumber(11);
    uPtr(ButtonsPanel)->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(ButtonsPanel, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ButtonsPanel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ButtonsPanel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ButtonsPanel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), show);
    temp8->CornerRadius(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp8->Color(::g::Fuse::Drawing::Colors::White());
    temp8->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp8->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp8->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp8->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp8->SourceLineNumber(12);
    temp8->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp8, 2);
    temp8->Fill(temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp9->Value(::STRINGS[14/*"Yes"*/]);
    temp9->Color(::g::Fuse::Drawing::Colors::White());
    temp9->Alignment(10);
    temp9->SourceLineNumber(13);
    temp9->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    temp9->Font(::g::MainView::AGOTHIC14());
    temp10->SourceLineNumber(14);
    temp10->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp12);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp11, uCRef(false));
    temp11->SourceLineNumber(15);
    temp11->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    temp12->EventName(Confirm_inq::__selector11_);
    temp12->SourceLineNumber(16);
    temp12->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    temp14->CornerRadius(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp14->Color(::g::Fuse::Drawing::Colors::White());
    temp14->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp14->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp14->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp14->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp14->SourceLineNumber(19);
    temp14->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    temp14->Fill(temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp15->Value(::STRINGS[15/*"No"*/]);
    temp15->Color(::g::Fuse::Drawing::Colors::White());
    temp15->Alignment(10);
    temp15->SourceLineNumber(20);
    temp15->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    temp15->Font(::g::MainView::AGOTHIC14());
    temp16->SourceLineNumber(21);
    temp16->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp17);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp17, uCRef(false));
    temp17->SourceLineNumber(22);
    temp17->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    uPtr(show)->Name(Confirm_inq::__selector12_);
    uPtr(show)->SourceLineNumber(25);
    uPtr(show)->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(show)->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    ::g::Fuse::Animations::Change__set_Value_fn(temp19, uCRef(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 1), ::g::Uno::UX::Size__New1(0.0f, 1))));
    temp19->Duration(0.2);
    temp19->DelayBack(0.0);
    temp19->Delay(0.2);
    temp19->Easing(::g::Fuse::Animations::Easing::CubicOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp20, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.8666667f)));
    temp20->Duration(0.15);
    temp20->DelayBack(0.25);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 1), ::g::Uno::UX::Size__New1(0.0f, 1))));
    temp21->Duration(0.3);
    temp21->Delay(0.0);
    temp21->Easing(::g::Fuse::Animations::Easing::QuinticInOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp22, uCRef<int32_t>(4));
    ::g::Fuse::Animations::Change__set_Value_fn(temp23, uCRef(1.0f));
    temp23->Duration(0.5);
    temp23->Easing(::g::Fuse::Animations::Easing::QuinticOut());
    temp3->SourceLineNumber(25);
    temp3->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    temp2->SourceLineNumber(25);
    temp2->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    uPtr(Event_Handler)->Name(Confirm_inq::__selector11_);
    uPtr(Event_Handler)->SourceLineNumber(38);
    uPtr(Event_Handler)->SourceFileName(::STRINGS[13/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), AddToBasketPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), Event_Handler);
}

// public void SetShow(bool value, Uno.UX.IPropertyListener origin) [instance]
void Confirm_inq::SetShow(bool value, uObject* origin)
{
    if (value != _field_Show)
    {
        _field_Show = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Show"*/]), origin);
    }
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance]
void Confirm_inq::SetText(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Text"*/]), origin);
    }
}

// public bool get_Show() [instance]
bool Confirm_inq::Show()
{
    return _field_Show;
}

// public void set_Show(bool value) [instance]
void Confirm_inq::Show(bool value)
{
    SetShow(value, NULL);
}

// public string get_Text() [instance]
uString* Confirm_inq::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance]
void Confirm_inq::Text(uString* value)
{
    SetText(value, NULL);
}

// public Confirm_inq New() [static]
Confirm_inq* Confirm_inq::New4()
{
    Confirm_inq* obj1 = (Confirm_inq*)uNew(Confirm_inq_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
