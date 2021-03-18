// This file was generated based on '.uno/ux15/MyToggle.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_accessor_MyToggle_IsActive.h>
#include <_root.HSMRO_accessor_MyToggle_PrimaryColor.h>
#include <_root.HSMRO_accessor_MyToggle_SecondaryColor.h>
#include <_root.HSMRO_FuseAnimationsChangefloat4_Value_Property.h>
#include <_root.HSMRO_FuseControlsShape_Color_Property.h>
#include <_root.HSMRO_FuseGesturesSwipeGesture_IsActive_Property.h>
#include <_root.MyToggle.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.SwipingAnimation.h>
#include <Fuse.Gestures.ToggleSwipeActive.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
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
static uString* STRINGS[10];
static uType* TYPES[5];

namespace g{

// public partial sealed class MyToggle
// {
// static MyToggle()
static void MyToggle__cctor_4_fn(uType* __type)
{
    MyToggle::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"IsActive"*/]);
    MyToggle::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Color"*/]);
    MyToggle::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Value"*/]);
    MyToggle::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"swipe"*/]);
    MyToggle::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"handle"*/]);
    MyToggle::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"background"*/]);
}

static void MyToggle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("IsActive");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("swipe");
    ::STRINGS[4] = uString::Const("handle");
    ::STRINGS[5] = uString::Const("background");
    ::STRINGS[6] = uString::Const("Pages/LoginPage.ux");
    ::STRINGS[7] = uString::Const("ON");
    ::STRINGS[8] = uString::Const("PrimaryColor");
    ::STRINGS[9] = uString::Const("SecondaryColor");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::HSMRO_accessor_MyToggle_IsActive_typeof(),
        ::g::HSMRO_accessor_MyToggle_PrimaryColor_typeof(),
        ::g::HSMRO_accessor_MyToggle_SecondaryColor_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(116,
        ::g::Uno::Float4_typeof(), offsetof(MyToggle, _field_PrimaryColor), 0,
        ::g::Uno::Float4_typeof(), offsetof(MyToggle, _field_SecondaryColor), 0,
        ::g::Uno::Bool_typeof(), offsetof(MyToggle, _field_IsActive), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MyToggle, swipe_IsActive_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MyToggle, handle_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MyToggle, background_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MyToggle, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MyToggle, temp1_Value_inst), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(MyToggle, swipe), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MyToggle, handle), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MyToggle, background), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyToggle::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyToggle::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyToggle::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyToggle::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyToggle::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyToggle::__selector5_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* MyToggle_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 133;
    options.InterfaceCount = 19;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(MyToggle);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("MyToggle", options);
    type->fp_build_ = MyToggle_build;
    type->fp_ctor_ = (void*)MyToggle__New4_fn;
    type->fp_cctor_ = MyToggle__cctor_4_fn;
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

// public MyToggle()
void MyToggle__ctor_7_fn(MyToggle* __this)
{
    __this->ctor_7();
}

// private void InitializeUX()
void MyToggle__InitializeUX_fn(MyToggle* __this)
{
    __this->InitializeUX();
}

// public bool get_IsActive()
void MyToggle__get_IsActive_fn(MyToggle* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value)
void MyToggle__set_IsActive_fn(MyToggle* __this, bool* value)
{
    __this->IsActive(*value);
}

// public MyToggle New()
void MyToggle__New4_fn(MyToggle** __retval)
{
    *__retval = MyToggle::New4();
}

// public float4 get_PrimaryColor()
void MyToggle__get_PrimaryColor_fn(MyToggle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->PrimaryColor();
}

// public void set_PrimaryColor(float4 value)
void MyToggle__set_PrimaryColor_fn(MyToggle* __this, ::g::Uno::Float4* value)
{
    __this->PrimaryColor(*value);
}

// public float4 get_SecondaryColor()
void MyToggle__get_SecondaryColor_fn(MyToggle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->SecondaryColor();
}

// public void set_SecondaryColor(float4 value)
void MyToggle__set_SecondaryColor_fn(MyToggle* __this, ::g::Uno::Float4* value)
{
    __this->SecondaryColor(*value);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin)
void MyToggle__SetIsActive_fn(MyToggle* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// public void SetPrimaryColor(float4 value, Uno.UX.IPropertyListener origin)
void MyToggle__SetPrimaryColor_fn(MyToggle* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetPrimaryColor(*value, origin);
}

// public void SetSecondaryColor(float4 value, Uno.UX.IPropertyListener origin)
void MyToggle__SetSecondaryColor_fn(MyToggle* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetSecondaryColor(*value, origin);
}

::g::Uno::UX::Selector MyToggle::__selector0_;
::g::Uno::UX::Selector MyToggle::__selector1_;
::g::Uno::UX::Selector MyToggle::__selector2_;
::g::Uno::UX::Selector MyToggle::__selector3_;
::g::Uno::UX::Selector MyToggle::__selector4_;
::g::Uno::UX::Selector MyToggle::__selector5_;

// public MyToggle() [instance]
void MyToggle::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance]
void MyToggle::InitializeUX()
{
    ::g::Fuse::Reactive::Constant* temp2 = ::g::Fuse::Reactive::Constant::New1(this);
    swipe = ::g::Fuse::Gestures::SwipeGesture::New2();
    swipe_IsActive_inst = ::g::HSMRO_FuseGesturesSwipeGesture_IsActive_Property::New1(swipe, MyToggle::__selector0_);
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::HSMRO_accessor_MyToggle_IsActive::Singleton());
    handle = ::g::Fuse::Controls::Rectangle::New3();
    handle_Color_inst = ::g::HSMRO_FuseControlsShape_Color_Property::New1(handle, MyToggle::__selector1_);
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(this);
    background = ::g::Fuse::Controls::Rectangle::New3();
    background_Color_inst = ::g::HSMRO_FuseControlsShape_Color_Property::New1(background, MyToggle::__selector1_);
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Animations::Change* temp = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], handle_Color_inst);
    temp_Value_inst = ::g::HSMRO_FuseAnimationsChangefloat4_Value_Property::New1(temp, MyToggle::__selector2_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::HSMRO_accessor_MyToggle_SecondaryColor::Singleton());
    ::g::Fuse::Animations::Change* temp1 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], background_Color_inst);
    temp1_Value_inst = ::g::HSMRO_FuseAnimationsChangefloat4_Value_Property::New1(temp1, MyToggle::__selector2_);
    ::g::Fuse::Reactive::Property* temp7 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::HSMRO_accessor_MyToggle_PrimaryColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp9 = ::g::Fuse::Reactive::Property::New1(temp8, ::g::HSMRO_accessor_MyToggle_PrimaryColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp10 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp11 = ::g::Fuse::Reactive::Property::New1(temp10, ::g::HSMRO_accessor_MyToggle_SecondaryColor::Singleton());
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(swipe_IsActive_inst, (uObject*)temp3, 3);
    ::g::Fuse::Gestures::SwipingAnimation* temp13 = ::g::Fuse::Gestures::SwipingAnimation::New2(swipe);
    ::g::Fuse::Animations::Move* temp14 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp6, 1);
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp7, 1);
    ::g::Fuse::Gestures::Clicked* temp17 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Gestures::ToggleSwipeActive* temp18 = ::g::Fuse::Gestures::ToggleSwipeActive::New2();
    ::g::Fuse::Controls::Shadow* temp19 = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Reactive::DataBinding* temp20 = ::g::Fuse::Reactive::DataBinding::New1(handle_Color_inst, (uObject*)temp9, 1);
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(background_Color_inst, (uObject*)temp11, 1);
    PrimaryColor(::g::Uno::Float4__New2(0.2784314f, 0.2509804f, 0.7058824f, 1.0f));
    SecondaryColor(::g::Uno::Float4__New2(0.8470588f, 0.8431373f, 0.9137255f, 1.0f));
    Width(::g::Uno::UX::Size__New1(60.0f, 1));
    Height(::g::Uno::UX::Size__New1(30.0f, 1));
    Alignment(3);
    SourceLineNumber(108);
    SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(this, 1);
    ::g::Fuse::Controls::Grid::SetRow(this, 2);
    uPtr(swipe)->Type(1);
    uPtr(swipe)->Direction(2);
    uPtr(swipe)->Length(40.0f);
    uPtr(swipe)->Name(MyToggle::__selector3_);
    uPtr(swipe)->SourceLineNumber(113);
    uPtr(swipe)->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(swipe)->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp3->SourceLineNumber(113);
    temp3->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    temp2->SourceLineNumber(113);
    temp2->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    temp13->SourceLineNumber(114);
    temp13->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    temp14->X(28.0f);
    temp14->Target(handle);
    temp6->SourceLineNumber(116);
    temp6->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    temp4->SourceLineNumber(116);
    temp4->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    temp7->SourceLineNumber(117);
    temp7->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    temp5->SourceLineNumber(117);
    temp5->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    temp17->SourceLineNumber(120);
    temp17->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp18);
    temp18->SourceLineNumber(121);
    temp18->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    temp18->Target(swipe);
    uPtr(handle)->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    uPtr(handle)->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    uPtr(handle)->Alignment(1);
    uPtr(handle)->Margin(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    uPtr(handle)->Name(MyToggle::__selector4_);
    uPtr(handle)->SourceLineNumber(124);
    uPtr(handle)->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(handle)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(handle)->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp20);
    temp19->Distance(1.0f);
    temp19->Size(1.0f);
    temp19->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2666667f));
    temp19->SourceLineNumber(125);
    temp19->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    temp9->SourceLineNumber(124);
    temp9->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    temp8->SourceLineNumber(124);
    temp8->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    uPtr(background)->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    uPtr(background)->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(background)->Alignment(0);
    uPtr(background)->Layer(1);
    uPtr(background)->Name(MyToggle::__selector5_);
    uPtr(background)->SourceLineNumber(128);
    uPtr(background)->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(background)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(background)->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    temp21->Value(::STRINGS[7/*"ON"*/]);
    temp21->TextColor(::g::Uno::Float4__New2(0.8470588f, 0.8431373f, 0.9137255f, 1.0f));
    temp21->Alignment(9);
    temp21->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp21->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp21->SourceLineNumber(129);
    temp21->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    temp11->SourceLineNumber(128);
    temp11->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    temp10->SourceLineNumber(128);
    temp10->SourceFileName(::STRINGS[6/*"Pages/Login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), swipe);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), handle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), background);
}

// public bool get_IsActive() [instance]
bool MyToggle::IsActive()
{
    return _field_IsActive;
}

// public void set_IsActive(bool value) [instance]
void MyToggle::IsActive(bool value)
{
    SetIsActive(value, NULL);
}

// public float4 get_PrimaryColor() [instance]
::g::Uno::Float4 MyToggle::PrimaryColor()
{
    return _field_PrimaryColor;
}

// public void set_PrimaryColor(float4 value) [instance]
void MyToggle::PrimaryColor(::g::Uno::Float4 value)
{
    SetPrimaryColor(value, NULL);
}

// public float4 get_SecondaryColor() [instance]
::g::Uno::Float4 MyToggle::SecondaryColor()
{
    return _field_SecondaryColor;
}

// public void set_SecondaryColor(float4 value) [instance]
void MyToggle::SecondaryColor(::g::Uno::Float4 value)
{
    SetSecondaryColor(value, NULL);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) [instance]
void MyToggle::SetIsActive(bool value, uObject* origin)
{
    if (value != _field_IsActive)
    {
        _field_IsActive = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"IsActive"*/]), origin);
    }
}

// public void SetPrimaryColor(float4 value, Uno.UX.IPropertyListener origin) [instance]
void MyToggle::SetPrimaryColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_PrimaryColor))
    {
        _field_PrimaryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"PrimaryColor"*/]), origin);
    }
}

// public void SetSecondaryColor(float4 value, Uno.UX.IPropertyListener origin) [instance]
void MyToggle::SetSecondaryColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_SecondaryColor))
    {
        _field_SecondaryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"SecondaryCo...*/]), origin);
    }
}

// public MyToggle New() [static]
MyToggle* MyToggle::New4()
{
    MyToggle* obj1 = (MyToggle*)uNew(MyToggle_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
