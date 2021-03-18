// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/SelectableRectangle.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_accessor_SelectableRectangle_ID.h>
#include <_root.HSMRO_accessor_SelectableRectangle_SelectionColor.h>
#include <_root.HSMRO_FuseControlsShape_Color_Property.h>
#include <_root.HSMRO_FuseSelectionSelectable_Value_Property.h>
#include <_root.HSMRO_SelectableRectangle_ID_Property.h>
#include <_root.HSMRO_SelectableRectangle_SelectionColor_Property.h>
#include <_root.SelectableRectangle.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Selection.Selectable.h>
#include <Fuse.Selection.ToggleSelection.h>
#include <Fuse.Selection.WhileSelected.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[7];
static uType* TYPES[8];

namespace g{

// public partial sealed class SelectableRectangle
// {
// static SelectableRectangle()
static void SelectableRectangle__cctor_5_fn(uType* __type)
{
    SelectableRectangle::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"add1"*/]);
    SelectableRectangle::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    SelectableRectangle::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Color"*/]);
    SelectableRectangle::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"ID"*/]);
    SelectableRectangle::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"SelectionCo...*/]);
    SelectableRectangle::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"add1"*/]);
}

static void SelectableRectangle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("add1");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Color");
    ::STRINGS[3] = uString::Const("ID");
    ::STRINGS[4] = uString::Const("SelectionColor");
    ::STRINGS[5] = uString::Const("Pages/Menu_Supplier/Confirm.ux");
    ::STRINGS[6] = uString::Const("\n"
        "\t\t\t\t\t\t\tcancel_type = this.ID.value;\n"
        "\t\t\t\t\t\t");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::HSMRO_accessor_SelectableRectangle_ID_typeof(),
        ::g::HSMRO_accessor_SelectableRectangle_SelectionColor_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface4),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Shape_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface10),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Shape_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface18),
        ::g::Fuse::Drawing::IDrawObjectWatcherFeedback_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface19));
    type->SetFields(122,
        ::g::Uno::String_typeof(), offsetof(SelectableRectangle, _field_ID), 0,
        ::g::Uno::Float4_typeof(), offsetof(SelectableRectangle, _field_SelectionColor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SelectableRectangle, add1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(SelectableRectangle, this_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SelectableRectangle, this_ID_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(SelectableRectangle, this_SelectionColor_inst), 0,
        ::g::Fuse::Selection::Selectable_typeof(), offsetof(SelectableRectangle, add1), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(SelectableRectangle, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&SelectableRectangle::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SelectableRectangle::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SelectableRectangle::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SelectableRectangle::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SelectableRectangle::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SelectableRectangle::__selector4_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_ID", NULL, (void*)SelectableRectangle__get_ID_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_ID", NULL, (void*)SelectableRectangle__set_ID_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)SelectableRectangle__New4_fn, 0, true, type, 0),
        new uFunction("get_SelectionColor", NULL, (void*)SelectableRectangle__get_SelectionColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_SelectionColor", NULL, (void*)SelectableRectangle__set_SelectionColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("SetID", NULL, (void*)SelectableRectangle__SetID_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetSelectionColor", NULL, (void*)SelectableRectangle__SetSelectionColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

::g::Fuse::Controls::Shape_type* SelectableRectangle_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Rectangle_typeof();
    options.FieldCount = 136;
    options.InterfaceCount = 20;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(SelectableRectangle);
    options.TypeSize = sizeof(::g::Fuse::Controls::Shape_type);
    type = (::g::Fuse::Controls::Shape_type*)uClassType::New("SelectableRectangle", options);
    type->fp_build_ = SelectableRectangle_build;
    type->fp_ctor_ = (void*)SelectableRectangle__New4_fn;
    type->fp_cctor_ = SelectableRectangle__cctor_5_fn;
    type->interface19.fp_Changed = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackChanged_fn;
    type->interface19.fp_Prepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackPrepare_fn;
    type->interface19.fp_Unprepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackUnprepare_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Shape__OnPropertyChanged2_fn;
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

// public SelectableRectangle()
void SelectableRectangle__ctor_8_fn(SelectableRectangle* __this)
{
    __this->ctor_8();
}

// public string get_ID()
void SelectableRectangle__get_ID_fn(SelectableRectangle* __this, uString** __retval)
{
    *__retval = __this->ID();
}

// public void set_ID(string value)
void SelectableRectangle__set_ID_fn(SelectableRectangle* __this, uString* value)
{
    __this->ID(value);
}

// private void InitializeUX()
void SelectableRectangle__InitializeUX_fn(SelectableRectangle* __this)
{
    __this->InitializeUX();
}

// public SelectableRectangle New()
void SelectableRectangle__New4_fn(SelectableRectangle** __retval)
{
    *__retval = SelectableRectangle::New4();
}

// public float4 get_SelectionColor()
void SelectableRectangle__get_SelectionColor_fn(SelectableRectangle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->SelectionColor();
}

// public void set_SelectionColor(float4 value)
void SelectableRectangle__set_SelectionColor_fn(SelectableRectangle* __this, ::g::Uno::Float4* value)
{
    __this->SelectionColor(*value);
}

// public void SetID(string value, Uno.UX.IPropertyListener origin)
void SelectableRectangle__SetID_fn(SelectableRectangle* __this, uString* value, uObject* origin)
{
    __this->SetID(value, origin);
}

// public void SetSelectionColor(float4 value, Uno.UX.IPropertyListener origin)
void SelectableRectangle__SetSelectionColor_fn(SelectableRectangle* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetSelectionColor(*value, origin);
}

uSStrong<uArray*> SelectableRectangle::__g_static_nametable1_;
::g::Uno::UX::Selector SelectableRectangle::__selector0_;
::g::Uno::UX::Selector SelectableRectangle::__selector1_;
::g::Uno::UX::Selector SelectableRectangle::__selector2_;
::g::Uno::UX::Selector SelectableRectangle::__selector3_;
::g::Uno::UX::Selector SelectableRectangle::__selector4_;

// public SelectableRectangle() [instance]
void SelectableRectangle::ctor_8()
{
    uStackFrame __("SelectableRectangle", ".ctor()");
    ctor_7();
    InitializeUX();
}

// public string get_ID() [instance]
uString* SelectableRectangle::ID()
{
    return _field_ID;
}

// public void set_ID(string value) [instance]
void SelectableRectangle::ID(uString* value)
{
    uStackFrame __("SelectableRectangle", "set_ID(string)");
    SetID(value, NULL);
}

// private void InitializeUX() [instance]
void SelectableRectangle::InitializeUX()
{
    uStackFrame __("SelectableRectangle", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp = ::g::Fuse::Reactive::Constant::New1(this);
    add1 = ::g::Fuse::Selection::Selectable::New2();
    add1_Value_inst = ::g::HSMRO_FuseSelectionSelectable_Value_Property::New1(add1, SelectableRectangle::__selector0_);
    ::g::Fuse::Reactive::Property* temp1 = ::g::Fuse::Reactive::Property::New1(temp, ::g::HSMRO_accessor_SelectableRectangle_ID::Singleton());
    this_Color_inst = ::g::HSMRO_FuseControlsShape_Color_Property::New1(this, SelectableRectangle::__selector1_);
    this_ID_inst = ::g::HSMRO_SelectableRectangle_ID_Property::New1(this, SelectableRectangle::__selector2_);
    this_SelectionColor_inst = ::g::HSMRO_SelectableRectangle_SelectionColor_Property::New1(this, SelectableRectangle::__selector3_);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SelectableRectangle::__g_static_nametable1_);
    ::g::Fuse::Reactive::Constant* temp2 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::HSMRO_accessor_SelectableRectangle_SelectionColor::Singleton());
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(add1_Value_inst, (uObject*)temp1, 1);
    ::g::Fuse::Selection::WhileSelected* temp6 = ::g::Fuse::Selection::WhileSelected::New2();
    ::g::Fuse::Animations::Scale* temp7 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Change* temp8 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], this_Color_inst);
    ::g::Fuse::Gestures::Clicked* temp9 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Selection::ToggleSelection* temp10 = ::g::Fuse::Selection::ToggleSelection::New2();
    ::g::Fuse::Reactive::JavaScript* temp11 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(this_Color_inst, (uObject*)temp3, 3);
    CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    Width(::g::Uno::UX::Size__New1(20.0f, 1));
    Height(::g::Uno::UX::Size__New1(20.0f, 1));
    SourceLineNumber(10);
    SourceFileName(::STRINGS[5/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(this, 2);
    temp4->Color(::g::Uno::Float4__New2(0.7607843f, 0.7607843f, 0.7607843f, 0.9960784f));
    temp4->SourceLineNumber(13);
    temp4->SourceFileName(::STRINGS[5/*"Pages/Menu_...*/]);
    uPtr(add1)->Name(SelectableRectangle::__selector4_);
    uPtr(add1)->SourceLineNumber(15);
    uPtr(add1)->SourceFileName(::STRINGS[5/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(add1)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    temp1->SourceLineNumber(15);
    temp1->SourceFileName(::STRINGS[5/*"Pages/Menu_...*/]);
    temp->SourceLineNumber(15);
    temp->SourceFileName(::STRINGS[5/*"Pages/Menu_...*/]);
    temp6->SourceLineNumber(17);
    temp6->SourceFileName(::STRINGS[5/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    temp7->Factor(1.3f);
    temp7->Duration(0.5);
    temp7->Easing(::g::Fuse::Animations::Easing::BackOut());
    temp7->EasingBack(::g::Fuse::Animations::Easing::BackIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp8, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    temp8->Duration(0.5);
    temp9->SourceLineNumber(22);
    temp9->SourceFileName(::STRINGS[5/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Nodes()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp10->SourceLineNumber(23);
    temp10->SourceFileName(::STRINGS[5/*"Pages/Menu_...*/]);
    temp11->Code(::STRINGS[6/*"\n\t\t\t\t\...*/]);
    temp11->LineNumber(24);
    temp11->FileName(::STRINGS[5/*"Pages/Menu_...*/]);
    temp11->SourceLineNumber(24);
    temp11->SourceFileName(::STRINGS[5/*"Pages/Menu_...*/]);
    temp3->SourceLineNumber(10);
    temp3->SourceFileName(::STRINGS[5/*"Pages/Menu_...*/]);
    temp2->SourceLineNumber(10);
    temp2->SourceFileName(::STRINGS[5/*"Pages/Menu_...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), add1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_ID_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_SelectionColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), add1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
}

// public float4 get_SelectionColor() [instance]
::g::Uno::Float4 SelectableRectangle::SelectionColor()
{
    return _field_SelectionColor;
}

// public void set_SelectionColor(float4 value) [instance]
void SelectableRectangle::SelectionColor(::g::Uno::Float4 value)
{
    uStackFrame __("SelectableRectangle", "set_SelectionColor(float4)");
    SetSelectionColor(value, NULL);
}

// public void SetID(string value, Uno.UX.IPropertyListener origin) [instance]
void SelectableRectangle::SetID(uString* value, uObject* origin)
{
    uStackFrame __("SelectableRectangle", "SetID(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_ID))
    {
        _field_ID = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"ID"*/]), origin);
    }
}

// public void SetSelectionColor(float4 value, Uno.UX.IPropertyListener origin) [instance]
void SelectableRectangle::SetSelectionColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("SelectableRectangle", "SetSelectionColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_SelectionColor))
    {
        _field_SelectionColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"SelectionCo...*/]), origin);
    }
}

// public SelectableRectangle New() [static]
SelectableRectangle* SelectableRectangle::New4()
{
    SelectableRectangle* obj1 = (SelectableRectangle*)uNew(SelectableRectangle_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
