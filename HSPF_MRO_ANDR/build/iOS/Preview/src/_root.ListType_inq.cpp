// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/ListType_inq.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_accessor_ListType_inq_USR_ID.h>
#include <_root.HSMRO_accessor_ListType_inq_USR_NM.h>
#include <_root.HSMRO_bundle.h>
#include <_root.HSMRO_FuseAnimationsChangestring_Value_Property.h>
#include <_root.HSMRO_FuseControlsShape_Color_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_Value_Property.h>
#include <_root.HSMRO_FuseElementsElement_Visibility_Property.h>
#include <_root.HSMRO_FuseSelectionSelectable_Value_Property.h>
#include <_root.ListType_inq.h>
#include <_root.MainView.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
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
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[9];
static uType* TYPES[7];

namespace g{

// public partial sealed class ListType_inq
// {
// static ListType_inq()
static void ListType_inq__cctor_4_fn(uType* __type)
{
    ListType_inq::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    ListType_inq::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Color"*/]);
    ListType_inq::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Visibility"*/]);
    ListType_inq::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"theBack"*/]);
    ListType_inq::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"theCheck"*/]);
    ListType_inq::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"chk_line_usr"*/]);
}

static void ListType_inq_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("Visibility");
    ::STRINGS[3] = uString::Const("theBack");
    ::STRINGS[4] = uString::Const("theCheck");
    ::STRINGS[5] = uString::Const("chk_line_usr");
    ::STRINGS[6] = uString::Const("Pages/Menu_Customer/c_inq.ux");
    ::STRINGS[7] = uString::Const("USR_ID");
    ::STRINGS[8] = uString::Const("USR_NM");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::HSMRO_accessor_ListType_inq_USR_ID_typeof(),
        ::g::HSMRO_accessor_ListType_inq_USR_NM_typeof(),
        ::g::HSMRO_bundle_typeof(),
        ::g::MainView_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(121,
        ::g::Uno::String_typeof(), offsetof(ListType_inq, _field_USR_NM), 0,
        ::g::Uno::String_typeof(), offsetof(ListType_inq, _field_USR_ID), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListType_inq, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListType_inq, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListType_inq, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListType_inq, chk_line_usr_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ListType_inq, theBack_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(ListType_inq, theCheck_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListType_inq, temp3_Value_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(ListType_inq, theBack), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(ListType_inq, theCheck), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(ListType_inq, chk_line_usr), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListType_inq::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListType_inq::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListType_inq::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListType_inq::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListType_inq::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListType_inq::__selector5_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction(".ctor", NULL, (void*)ListType_inq__New5_fn, 0, true, type, 0),
        new uFunction("SetUSR_ID", NULL, (void*)ListType_inq__SetUSR_ID_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetUSR_NM", NULL, (void*)ListType_inq__SetUSR_NM_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_USR_ID", NULL, (void*)ListType_inq__get_USR_ID_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_USR_ID", NULL, (void*)ListType_inq__set_USR_ID_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_USR_NM", NULL, (void*)ListType_inq__get_USR_NM_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_USR_NM", NULL, (void*)ListType_inq__set_USR_NM_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Controls::Panel_type* ListType_inq_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::DockPanel_typeof();
    options.FieldCount = 139;
    options.InterfaceCount = 19;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(ListType_inq);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ListType_inq", options);
    type->fp_build_ = ListType_inq_build;
    type->fp_ctor_ = (void*)ListType_inq__New5_fn;
    type->fp_cctor_ = ListType_inq__cctor_4_fn;
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

// public ListType_inq()
void ListType_inq__ctor_8_fn(ListType_inq* __this)
{
    __this->ctor_8();
}

// private void InitializeUX()
void ListType_inq__InitializeUX_fn(ListType_inq* __this)
{
    __this->InitializeUX();
}

// public ListType_inq New()
void ListType_inq__New5_fn(ListType_inq** __retval)
{
    *__retval = ListType_inq::New5();
}

// public void SetUSR_ID(string value, Uno.UX.IPropertyListener origin)
void ListType_inq__SetUSR_ID_fn(ListType_inq* __this, uString* value, uObject* origin)
{
    __this->SetUSR_ID(value, origin);
}

// public void SetUSR_NM(string value, Uno.UX.IPropertyListener origin)
void ListType_inq__SetUSR_NM_fn(ListType_inq* __this, uString* value, uObject* origin)
{
    __this->SetUSR_NM(value, origin);
}

// public string get_USR_ID()
void ListType_inq__get_USR_ID_fn(ListType_inq* __this, uString** __retval)
{
    *__retval = __this->USR_ID();
}

// public void set_USR_ID(string value)
void ListType_inq__set_USR_ID_fn(ListType_inq* __this, uString* value)
{
    __this->USR_ID(value);
}

// public string get_USR_NM()
void ListType_inq__get_USR_NM_fn(ListType_inq* __this, uString** __retval)
{
    *__retval = __this->USR_NM();
}

// public void set_USR_NM(string value)
void ListType_inq__set_USR_NM_fn(ListType_inq* __this, uString* value)
{
    __this->USR_NM(value);
}

::g::Uno::UX::Selector ListType_inq::__selector0_;
::g::Uno::UX::Selector ListType_inq::__selector1_;
::g::Uno::UX::Selector ListType_inq::__selector2_;
::g::Uno::UX::Selector ListType_inq::__selector3_;
::g::Uno::UX::Selector ListType_inq::__selector4_;
::g::Uno::UX::Selector ListType_inq::__selector5_;

// public ListType_inq() [instance]
void ListType_inq::ctor_8()
{
    uStackFrame __("ListType_inq", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance]
void ListType_inq::InitializeUX()
{
    uStackFrame __("ListType_inq", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Selection::Selectable* temp = ::g::Fuse::Selection::Selectable::New2();
    temp_Value_inst = ::g::HSMRO_FuseSelectionSelectable_Value_Property::New1(temp, ListType_inq::__selector0_);
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::HSMRO_accessor_ListType_inq_USR_NM::Singleton());
    ::g::Fuse::Reactive::Constant* temp6 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp1, ListType_inq::__selector0_);
    ::g::Fuse::Reactive::Property* temp7 = ::g::Fuse::Reactive::Property::New1(temp6, ::g::HSMRO_accessor_ListType_inq_USR_NM::Singleton());
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp2, ListType_inq::__selector0_);
    ::g::Fuse::Reactive::Property* temp9 = ::g::Fuse::Reactive::Property::New1(temp8, ::g::HSMRO_accessor_ListType_inq_USR_ID::Singleton());
    chk_line_usr = ::g::Fuse::Controls::Text::New3();
    chk_line_usr_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(chk_line_usr, ListType_inq::__selector0_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"chk_line_usr"*/]);
    theBack = ::g::Fuse::Controls::Rectangle::New3();
    theBack_Color_inst = ::g::HSMRO_FuseControlsShape_Color_Property::New1(theBack, ListType_inq::__selector1_);
    theCheck = ::g::Fuse::Controls::Image::New3();
    theCheck_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(theCheck, ListType_inq::__selector2_);
    ::g::Fuse::Reactive::Constant* temp11 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Animations::Change* temp3 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<string>*/], chk_line_usr_Value_inst);
    temp3_Value_inst = ::g::HSMRO_FuseAnimationsChangestring_Value_Property::New1(temp3, ListType_inq::__selector0_);
    ::g::Fuse::Reactive::Property* temp12 = ::g::Fuse::Reactive::Property::New1(temp11, ::g::HSMRO_accessor_ListType_inq_USR_ID::Singleton());
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp5, 1);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp7, 1);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp9, 1);
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(chk_line_usr_Value_inst, (uObject*)temp10, 3);
    ::g::Fuse::Selection::WhileSelected* temp17 = ::g::Fuse::Selection::WhileSelected::New2();
    ::g::Fuse::Animations::Change* temp18 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], theBack_Color_inst);
    ::g::Fuse::Animations::Change* temp19 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], theCheck_Visibility_inst);
    ::g::Fuse::Reactive::DataBinding* temp20 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp12, 1);
    ::g::Fuse::Gestures::Tapped* temp21 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Selection::ToggleSelection* temp22 = ::g::Fuse::Selection::ToggleSelection::New2();
    Alignment(0);
    Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    SourceLineNumber(271);
    SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    temp->SourceLineNumber(275);
    temp->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    temp5->SourceLineNumber(275);
    temp5->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    temp4->SourceLineNumber(275);
    temp4->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    uPtr(theBack)->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(theBack)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(theBack)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(theBack)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(theBack)->Layer(1);
    uPtr(theBack)->Name(ListType_inq::__selector3_);
    uPtr(theBack)->SourceLineNumber(276);
    uPtr(theBack)->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    uPtr(theCheck)->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.0f, 1.0f));
    uPtr(theCheck)->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    uPtr(theCheck)->Visibility(2);
    uPtr(theCheck)->Name(ListType_inq::__selector4_);
    uPtr(theCheck)->SourceLineNumber(278);
    uPtr(theCheck)->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(theCheck, 1);
    uPtr(theCheck)->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::checkf49575a4()));
    temp1->FontSize(20.0f);
    temp1->Alignment(0);
    temp1->SourceLineNumber(279);
    temp1->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 2);
    temp1->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    temp7->SourceLineNumber(279);
    temp7->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    temp6->SourceLineNumber(279);
    temp6->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    temp2->FontSize(1.0f);
    temp2->Visibility(2);
    temp2->Opacity(1.0f);
    temp2->Layer(1);
    temp2->SourceLineNumber(280);
    temp2->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp9->SourceLineNumber(280);
    temp9->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    temp8->SourceLineNumber(280);
    temp8->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    uPtr(chk_line_usr)->FontSize(1.0f);
    uPtr(chk_line_usr)->Visibility(2);
    uPtr(chk_line_usr)->Name(ListType_inq::__selector5_);
    uPtr(chk_line_usr)->SourceLineNumber(282);
    uPtr(chk_line_usr)->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chk_line_usr)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    temp10->SourceLineNumber(282);
    temp10->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    temp17->SourceLineNumber(284);
    temp17->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp20);
    ::g::Fuse::Animations::Change__set_Value_fn(temp18, uCRef(::g::Uno::Float4__New2(0.6666667f, 1.0f, 0.6666667f, 1.0f)));
    temp18->Duration(0.2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp19, uCRef<int32_t>(0));
    temp12->SourceLineNumber(287);
    temp12->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    temp11->SourceLineNumber(287);
    temp11->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    temp21->SourceLineNumber(290);
    temp21->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp22);
    temp22->SourceLineNumber(291);
    temp22->SourceFileName(::STRINGS[6/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), theBack);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), theCheck);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), chk_line_usr);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
}

// public void SetUSR_ID(string value, Uno.UX.IPropertyListener origin) [instance]
void ListType_inq::SetUSR_ID(uString* value, uObject* origin)
{
    uStackFrame __("ListType_inq", "SetUSR_ID(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_USR_ID))
    {
        _field_USR_ID = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"USR_ID"*/]), origin);
    }
}

// public void SetUSR_NM(string value, Uno.UX.IPropertyListener origin) [instance]
void ListType_inq::SetUSR_NM(uString* value, uObject* origin)
{
    uStackFrame __("ListType_inq", "SetUSR_NM(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_USR_NM))
    {
        _field_USR_NM = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"USR_NM"*/]), origin);
    }
}

// public string get_USR_ID() [instance]
uString* ListType_inq::USR_ID()
{
    return _field_USR_ID;
}

// public void set_USR_ID(string value) [instance]
void ListType_inq::USR_ID(uString* value)
{
    uStackFrame __("ListType_inq", "set_USR_ID(string)");
    SetUSR_ID(value, NULL);
}

// public string get_USR_NM() [instance]
uString* ListType_inq::USR_NM()
{
    return _field_USR_NM;
}

// public void set_USR_NM(string value) [instance]
void ListType_inq::USR_NM(uString* value)
{
    uStackFrame __("ListType_inq", "set_USR_NM(string)");
    SetUSR_NM(value, NULL);
}

// public ListType_inq New() [static]
ListType_inq* ListType_inq::New5()
{
    ListType_inq* obj1 = (ListType_inq*)uNew(ListType_inq_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
