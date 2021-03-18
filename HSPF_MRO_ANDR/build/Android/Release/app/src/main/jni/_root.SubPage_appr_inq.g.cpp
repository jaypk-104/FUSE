// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Confirm.h>
#include <_root.Confirm_msg.h>
#include <_root.Confirm_return.h>
#include <_root.Handler.h>
#include <_root.Handler_return.h>
#include <_root.HSMRO_bundle.h>
#include <_root.HSMRO_Confirm_msg_Show_Property.h>
#include <_root.HSMRO_Confirm_return_Show_Property.h>
#include <_root.HSMRO_Confirm_Show_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_Value_Property.h>
#include <_root.HSMRO_FuseElementsElement_Visibility_Property.h>
#include <_root.HSMRO_FuseReactiveEach_Items_Property.h>
#include <_root.HSMRO_FuseTriggersWhileBool_Value_Property.h>
#include <_root.MainView.h>
#include <_root.SubPage_appr_inq.h>
#include <_root.SubPage_appr_inq.Template.h>
#include <_root.SubPage_appr_inq.Template1.h>
#include <_root.SubPage_appr_inq.Template2.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Controls.WrapPanel.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.KeyPressHandler.h>
#include <Fuse.Triggers.OnBackButton.h>
#include <Fuse.Triggers.OnKeyPress.h>
#include <Fuse.Triggers.OnUserEvent.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.UserEventHandler.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[36];
static uType* TYPES[3];

namespace g{

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/SubPage_appr_inq.g.uno
// ------------------------------------------------------------------

// public partial sealed class SubPage_appr_inq
// {
// static SubPage_appr_inq()
static void SubPage_appr_inq__cctor_4_fn(uType* __type)
{
    SubPage_appr_inq::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 10, uString::Const("temp_eb20"), uString::Const("router"), uString::Const("confirmAbandon1"), uString::Const("temp_eb21"), uString::Const("confirmAbandon2"), uString::Const("temp_eb22"), uString::Const("confirmAbandon3"), uString::Const("temp_eb23"), uString::Const("confirmAbandon4"), uString::Const("temp_eb24"));
    SubPage_appr_inq::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Show"));
    SubPage_appr_inq::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    SubPage_appr_inq::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    SubPage_appr_inq::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("confirmAbandon1"));
    SubPage_appr_inq::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("confirmAbandon2"));
    SubPage_appr_inq::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("confirmAbandon3"));
    SubPage_appr_inq::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("confirmAbandon4"));
}

static void SubPage_appr_inq_build(uType* type)
{
    type->SetDependencies(
        ::g::HSMRO_bundle_typeof(),
        ::g::MainView_typeof());
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
    type->SetFields(122,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(SubPage_appr_inq, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr_inq, confirmAbandon3_Show_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(SubPage_appr_inq, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(SubPage_appr_inq, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(SubPage_appr_inq, temp9_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr_inq, confirmAbandon1_Show_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr_inq, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr_inq, confirmAbandon2_Show_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr_inq, temp11_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr_inq, confirmAbandon4_Show_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq, temp12_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr_inq, temp_eb20), 0,
        ::g::Confirm_msg_typeof(), offsetof(SubPage_appr_inq, confirmAbandon1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr_inq, temp_eb21), 0,
        ::g::Confirm_typeof(), offsetof(SubPage_appr_inq, confirmAbandon2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr_inq, temp_eb22), 0,
        ::g::Confirm_return_typeof(), offsetof(SubPage_appr_inq, confirmAbandon3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr_inq, temp_eb23), 0,
        ::g::Confirm_typeof(), offsetof(SubPage_appr_inq, confirmAbandon4), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr_inq, temp_eb24), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(SubPage_appr_inq, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&SubPage_appr_inq::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr_inq::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr_inq::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr_inq::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr_inq::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr_inq::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr_inq::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr_inq::__selector6_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* SubPage_appr_inq_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 158;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(SubPage_appr_inq);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SubPage_appr_inq", options);
    type->fp_build_ = SubPage_appr_inq_build;
    type->fp_cctor_ = SubPage_appr_inq__cctor_4_fn;
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

// public SubPage_appr_inq(Fuse.Navigation.Router router)
void SubPage_appr_inq__ctor_8_fn(SubPage_appr_inq* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX()
void SubPage_appr_inq__InitializeUX_fn(SubPage_appr_inq* __this)
{
    __this->InitializeUX();
}

// public SubPage_appr_inq New(Fuse.Navigation.Router router)
void SubPage_appr_inq__New5_fn(::g::Fuse::Navigation::Router* router1, SubPage_appr_inq** __retval)
{
    *__retval = SubPage_appr_inq::New5(router1);
}

uSStrong<uArray*> SubPage_appr_inq::__g_static_nametable1_;
::g::Uno::UX::Selector SubPage_appr_inq::__selector0_;
::g::Uno::UX::Selector SubPage_appr_inq::__selector1_;
::g::Uno::UX::Selector SubPage_appr_inq::__selector2_;
::g::Uno::UX::Selector SubPage_appr_inq::__selector3_;
::g::Uno::UX::Selector SubPage_appr_inq::__selector4_;
::g::Uno::UX::Selector SubPage_appr_inq::__selector5_;
::g::Uno::UX::Selector SubPage_appr_inq::__selector6_;

// public SubPage_appr_inq(Fuse.Navigation.Router router) [instance]
void SubPage_appr_inq::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance]
void SubPage_appr_inq::InitializeUX()
{
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(uString::Const("sub_appr_back"));
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(uString::Const("abdBtn1Click_inq"));
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(uString::Const("abdBtn2Click_inq"));
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(uString::Const("abdBtn3Click_inq"));
    confirmAbandon3 = ::g::Confirm_return::New4();
    confirmAbandon3_Show_inst = ::g::HSMRO_Confirm_return_Show_Property::New1(confirmAbandon3, SubPage_appr_inq::__selector0_);
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(uString::Const("root_show"));
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(uString::Const("btnBackClick_appr_inq"));
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::HSMRO_FuseReactiveEach_Items_Property::New1(temp, SubPage_appr_inq::__selector1_);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(uString::Const("items_appr_line_inq"));
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::HSMRO_FuseReactiveEach_Items_Property::New1(temp1, SubPage_appr_inq::__selector1_);
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(uString::Const("remark_list_inq"));
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp2, SubPage_appr_inq::__selector2_);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(uString::Const("RETURN_REMARK"));
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp3, SubPage_appr_inq::__selector2_);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"USR_NM"*/]);
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    temp4_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp4, SubPage_appr_inq::__selector2_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(uString::Const("APP_DT_H"));
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    temp5_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp5, SubPage_appr_inq::__selector2_);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("APP_TITLE"));
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    temp6_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp6, SubPage_appr_inq::__selector2_);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(uString::Const("APP_TEXT"));
    ::g::Fuse::Controls::Text* temp7 = ::g::Fuse::Controls::Text::New3();
    temp7_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp7, SubPage_appr_inq::__selector2_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(uString::Const("APP_INQ_NO"));
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(uString::Const("INQ_AMT"));
    uString* temp28 = uString::Const(" \354\233\220");
    ::g::Fuse::Reactive::Constant* temp29 = ::g::Fuse::Reactive::Constant::New1(temp28);
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New3();
    temp8_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp8, SubPage_appr_inq::__selector2_);
    ::g::Fuse::Reactive::Add* temp30 = ::g::Fuse::Reactive::Add::New1(temp27, temp29);
    ::g::Fuse::Reactive::Each* temp9 = ::g::Fuse::Reactive::Each::New4();
    temp9_Items_inst = ::g::HSMRO_FuseReactiveEach_Items_Property::New1(temp9, SubPage_appr_inq::__selector1_);
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(uString::Const("items_dtl_inq"));
    confirmAbandon1 = ::g::Confirm_msg::New4();
    confirmAbandon1_Show_inst = ::g::HSMRO_Confirm_msg_Show_Property::New1(confirmAbandon1, SubPage_appr_inq::__selector0_);
    ::g::Fuse::Triggers::WhileTrue* temp10 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp10_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(temp10, SubPage_appr_inq::__selector2_);
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(uString::Const("apprBtn1flag"));
    confirmAbandon2 = ::g::Confirm::New4();
    confirmAbandon2_Show_inst = ::g::HSMRO_Confirm_Show_Property::New1(confirmAbandon2, SubPage_appr_inq::__selector0_);
    ::g::Fuse::Triggers::WhileTrue* temp11 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp11_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(temp11, SubPage_appr_inq::__selector2_);
    ::g::Fuse::Reactive::Data* temp33 = ::g::Fuse::Reactive::Data::New1(uString::Const("apprBtn3flag"));
    confirmAbandon4 = ::g::Confirm::New4();
    confirmAbandon4_Show_inst = ::g::HSMRO_Confirm_Show_Property::New1(confirmAbandon4, SubPage_appr_inq::__selector0_);
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New3();
    temp12_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp12, SubPage_appr_inq::__selector2_);
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(uString::Const("APP_NO"));
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SubPage_appr_inq::__g_static_nametable1_);
    ::g::Fuse::Triggers::OnBackButton* temp35 = ::g::Fuse::Triggers::OnBackButton::New3();
    temp_eb20 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp13);
    ::g::Handler* temp36 = ::g::Handler::New3();
    temp_eb21 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp14);
    ::g::Handler* temp37 = ::g::Handler::New3();
    temp_eb22 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp15);
    ::g::Handler_return* temp38 = ::g::Handler_return::New3();
    temp_eb23 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp16);
    ::g::Fuse::Reactive::DataBinding* temp39 = ::g::Fuse::Reactive::DataBinding::New1(confirmAbandon3_Show_inst, (uObject*)temp17, 3);
    ::g::Fuse::Controls::DockPanel* temp40 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::DockPanel* temp41 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Button* temp42 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Image* temp43 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp44 = ::g::Fuse::Controls::Text::New3();
    temp_eb24 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp18);
    ::g::Fuse::Controls::DockPanel* temp45 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::ScrollView* temp46 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::DockPanel* temp47 = ::g::Fuse::Controls::DockPanel::New4();
    SubPage_appr_inq__Template* temp48 = SubPage_appr_inq__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp49 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp19, 3);
    ::g::Fuse::Controls::DockPanel* temp50 = ::g::Fuse::Controls::DockPanel::New4();
    SubPage_appr_inq__Template1* temp51 = SubPage_appr_inq__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp52 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp20, 3);
    ::g::Fuse::Controls::Rectangle* temp53 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::ScrollView* temp54 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::DockPanel* temp55 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp56 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Triggers::WhileTrue* temp57 = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Controls::Text* temp58 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp59 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp21, 3);
    ::g::Fuse::Controls::Text* temp60 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp61 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp22, 3);
    ::g::Fuse::Controls::Text* temp62 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp63 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp23, 3);
    ::g::Fuse::Controls::Text* temp64 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp65 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp24, 3);
    ::g::Fuse::Controls::Text* temp66 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp67 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp25, 3);
    ::g::Fuse::Controls::Text* temp68 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp69 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp26, 3);
    ::g::Fuse::Controls::Text* temp70 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp71 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp30, 3);
    ::g::Fuse::Drawing::Stroke* temp72 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp73 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9176471f, 0.9215686f, 0.972549f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp74 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::DockPanel* temp75 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::ScrollView* temp76 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp77 = ::g::Fuse::Controls::StackPanel::New4();
    SubPage_appr_inq__Template2* temp78 = SubPage_appr_inq__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp79 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Items_inst, (uObject*)temp31, 3);
    ::g::Fuse::Drawing::Stroke* temp80 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::StackPanel* temp81 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp82 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Button* temp83 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp84 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp85 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp86 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), confirmAbandon1_Show_inst);
    ::g::Fuse::Reactive::DataBinding* temp87 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp32, 3);
    ::g::Fuse::Triggers::WhileTrue* temp88 = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Controls::Rectangle* temp89 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Button* temp90 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp91 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp92 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp93 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), confirmAbandon2_Show_inst);
    ::g::Fuse::Controls::Rectangle* temp94 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Button* temp95 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp96 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp97 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp98 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), confirmAbandon3_Show_inst);
    ::g::Fuse::Reactive::DataBinding* temp99 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Value_inst, (uObject*)temp33, 3);
    ::g::Fuse::Triggers::WhileTrue* temp100 = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Controls::Button* temp101 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp102 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp103 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp104 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), confirmAbandon4_Show_inst);
    ::g::Fuse::Reactive::DataBinding* temp105 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Value_inst, (uObject*)temp34, 3);
    ::g::Fuse::Reactive::JavaScript* temp106 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    Height(::g::Uno::UX::Size__New1(100.0f, 4));
    Padding(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp35->SourceLineNumber(2);
    temp35->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp35->add_Handler(uDelegate::New(::g::Fuse::Triggers::KeyPressHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb20)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb20);
    temp13->SourceLineNumber(2);
    temp13->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    uPtr(confirmAbandon1)->Show(false);
    uPtr(confirmAbandon1)->Text(uString::Const("\352\262\260\354\236\254\355\225\230\354\213\234\352\262\240\354\212\265\353\213\210\352\271\214?"));
    uPtr(confirmAbandon1)->Name(SubPage_appr_inq::__selector3_);
    uPtr(confirmAbandon1)->SourceLineNumber(4);
    uPtr(confirmAbandon1)->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmAbandon1)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    temp36->SourceLineNumber(5);
    temp36->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp36->add_Handler(uDelegate::New(::g::Fuse::UserEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb21)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb21);
    temp14->SourceLineNumber(5);
    temp14->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    uPtr(confirmAbandon2)->Show(false);
    uPtr(confirmAbandon2)->Text(uString::Const("\352\262\260\354\236\254\354\267\250\354\206\214\355\225\230\354\213\234\352\262\240\354\212\265\353\213\210\352\271\214?"));
    uPtr(confirmAbandon2)->Name(SubPage_appr_inq::__selector4_);
    uPtr(confirmAbandon2)->SourceLineNumber(7);
    uPtr(confirmAbandon2)->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmAbandon2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    temp37->SourceLineNumber(8);
    temp37->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp37->add_Handler(uDelegate::New(::g::Fuse::UserEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb22)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb22);
    temp15->SourceLineNumber(8);
    temp15->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    uPtr(confirmAbandon3)->Text(uString::Const("\353\260\230\353\240\244\355\225\230\354\213\234\352\262\240\354\212\265\353\213\210\352\271\214?"));
    uPtr(confirmAbandon3)->Name(SubPage_appr_inq::__selector5_);
    uPtr(confirmAbandon3)->SourceLineNumber(10);
    uPtr(confirmAbandon3)->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmAbandon3)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmAbandon3)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp39);
    temp38->SourceLineNumber(11);
    temp38->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp38->add_Handler(uDelegate::New(::g::Fuse::UserEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb23)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb23);
    temp16->SourceLineNumber(11);
    temp16->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp17->SourceLineNumber(10);
    temp17->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    uPtr(confirmAbandon4)->Show(false);
    uPtr(confirmAbandon4)->Text(uString::Const("\353\260\230\353\240\244\354\267\250\354\206\214\355\225\230\354\213\234\352\262\240\354\212\265\353\213\210\352\271\214?"));
    uPtr(confirmAbandon4)->Name(SubPage_appr_inq::__selector6_);
    uPtr(confirmAbandon4)->SourceLineNumber(13);
    uPtr(confirmAbandon4)->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp40->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp40->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp40->Alignment(0);
    temp40->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp40->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp40->SourceLineNumber(15);
    temp40->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp41->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp41->Alignment(0);
    temp41->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, -15.0f));
    temp41->SourceLineNumber(17);
    temp41->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp41, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    temp42->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp42->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp42->Alignment(9);
    temp42->Margin(::g::Uno::Float4__New2(10.0f, 7.0f, 0.0f, 0.0f));
    temp42->SourceLineNumber(18);
    temp42->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp42, 0);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp42, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb24)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb24);
    temp43->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp43->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp43->Alignment(9);
    temp43->SourceLineNumber(19);
    temp43->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp43->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::backeb15b2d1()));
    temp44->Value(uString::Const("BACK"));
    temp44->TextWrapping(0);
    temp44->FontSize(18.0f);
    temp44->TextAlignment(0);
    temp44->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp44->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp44->Alignment(0);
    temp44->Visibility(2);
    temp44->Margin(::g::Uno::Float4__New2(25.0f, 5.0f, 0.0f, 0.0f));
    temp44->SourceLineNumber(20);
    temp44->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp18->SourceLineNumber(18);
    temp18->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp45->SourceLineNumber(22);
    temp45->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp45, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    temp46->SnapMinTransform(true);
    temp46->SnapMaxTransform(true);
    temp46->AllowedScrollDirections(3);
    temp46->Alignment(0);
    temp46->SourceLineNumber(23);
    temp46->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    temp47->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp47->Alignment(3);
    temp47->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp47->SourceLineNumber(24);
    temp47->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp47, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->SourceLineNumber(25);
    temp->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp49);
    temp19->SourceLineNumber(25);
    temp19->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp50->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp50->SourceLineNumber(53);
    temp50->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp50, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    temp1->SourceLineNumber(54);
    temp1->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp52);
    temp20->SourceLineNumber(54);
    temp20->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp53->Height(::g::Uno::UX::Size__New1(40.0f, 4));
    temp53->Padding(::g::Uno::Float4__New2(7.0f, 7.0f, 7.0f, 7.0f));
    temp53->SourceLineNumber(67);
    temp53->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp53, 2);
    temp53->Background(temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Strokes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    temp54->SnapMinTransform(false);
    temp54->Alignment(0);
    temp54->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp54->SourceLineNumber(68);
    temp54->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp54, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    temp55->Height(::g::Uno::UX::Size__New1(130.0f, 4));
    temp55->Alignment(0);
    temp55->SourceLineNumber(69);
    temp55->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    temp56->Rows(uString::Const("auto, auto, auto, auto, auto, auto"));
    temp56->Columns(uString::Const("80, auto"));
    temp56->ColumnCount(2);
    temp56->CellSpacing(7.0f);
    temp56->Alignment(0);
    temp56->SourceLineNumber(70);
    temp56->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp56, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp57->Value1(false);
    temp57->SourceLineNumber(71);
    temp57->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp58->Value(uString::Const("\353\260\230\353\240\244\354\202\254\354\234\240"));
    temp58->FontSize(13.0f);
    temp58->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp58->Alignment(0);
    temp58->SourceLineNumber(72);
    temp58->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp58, 2);
    temp58->Font(::g::MainView::AGOTHIC14());
    temp2->TextWrapping(1);
    temp2->FontSize(13.0f);
    temp2->TextAlignment(0);
    temp2->TextColor(::g::Uno::Float4__New2(0.7176471f, 0.1568628f, 0.2431373f, 1.0f));
    temp2->Alignment(0);
    temp2->SourceLineNumber(73);
    temp2->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 2);
    temp2->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp59);
    temp21->SourceLineNumber(73);
    temp21->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp60->Value(uString::Const("\352\270\260\354\225\210\354\236\220"));
    temp60->FontSize(13.0f);
    temp60->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp60->Alignment(0);
    temp60->SourceLineNumber(75);
    temp60->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp60, 2);
    temp60->Font(::g::MainView::AGOTHIC14());
    temp3->FontSize(13.0f);
    temp3->TextAlignment(0);
    temp3->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp3->Alignment(0);
    temp3->SourceLineNumber(76);
    temp3->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 2);
    temp3->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp61);
    temp22->SourceLineNumber(76);
    temp22->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp62->Value(uString::Const("\352\270\260\354\225\210\354\235\274\354\213\234"));
    temp62->FontSize(13.0f);
    temp62->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp62->Alignment(0);
    temp62->SourceLineNumber(77);
    temp62->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp62, 2);
    temp62->Font(::g::MainView::AGOTHIC14());
    temp4->FontSize(13.0f);
    temp4->TextAlignment(0);
    temp4->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp4->Alignment(0);
    temp4->SourceLineNumber(78);
    temp4->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 2);
    temp4->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp63);
    temp23->SourceLineNumber(78);
    temp23->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp64->Value(uString::Const("\354\240\234\353\252\251"));
    temp64->FontSize(13.0f);
    temp64->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp64->Alignment(0);
    temp64->SourceLineNumber(79);
    temp64->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp64, 2);
    temp64->Font(::g::MainView::AGOTHIC14());
    temp5->FontSize(13.0f);
    temp5->TextAlignment(0);
    temp5->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp5->Alignment(0);
    temp5->SourceLineNumber(80);
    temp5->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp5, 2);
    temp5->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp65);
    temp24->SourceLineNumber(80);
    temp24->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp66->Value(uString::Const("\353\202\264\354\232\251"));
    temp66->FontSize(13.0f);
    temp66->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp66->Alignment(0);
    temp66->SourceLineNumber(81);
    temp66->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp66, 2);
    temp66->Font(::g::MainView::AGOTHIC14());
    temp6->TextWrapping(1);
    temp6->FontSize(13.0f);
    temp6->TextAlignment(0);
    temp6->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp6->Alignment(0);
    temp6->Layer(2);
    temp6->SourceLineNumber(82);
    temp6->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp6, 4);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp6, 2);
    temp6->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp67);
    temp25->SourceLineNumber(82);
    temp25->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp68->Value(uString::Const("\352\262\254\354\240\201\353\262\210\355\230\270"));
    temp68->FontSize(13.0f);
    temp68->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp68->Alignment(0);
    temp68->SourceLineNumber(83);
    temp68->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp68, 2);
    temp68->Font(::g::MainView::AGOTHIC14());
    temp7->FontSize(13.0f);
    temp7->TextAlignment(0);
    temp7->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp7->Alignment(0);
    temp7->SourceLineNumber(84);
    temp7->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp7, 2);
    temp7->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp69);
    temp26->SourceLineNumber(84);
    temp26->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp70->Value(uString::Const("\354\264\235 \352\262\254\354\240\201\352\270\210\354\225\241"));
    temp70->FontSize(13.0f);
    temp70->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp70->Alignment(0);
    temp70->SourceLineNumber(85);
    temp70->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp70, 2);
    temp70->Font(::g::MainView::AGOTHIC14());
    temp8->FontSize(13.0f);
    temp8->TextAlignment(0);
    temp8->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp8->Alignment(0);
    temp8->SourceLineNumber(86);
    temp8->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp8, 2);
    temp8->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp71);
    temp30->SourceLineNumber(86);
    temp30->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp27->SourceLineNumber(86);
    temp27->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp29->SourceLineNumber(86);
    temp29->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp72->Color(::g::Uno::Float4__New2(0.4666667f, 0.4784314f, 0.6745098f, 1.0f));
    temp72->Width(1.0f);
    temp74->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp74->SourceLineNumber(93);
    temp74->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp74, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Strokes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    temp75->SourceLineNumber(94);
    temp75->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    temp76->SnapMinTransform(false);
    temp76->SnapMaxTransform(false);
    temp76->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp76->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp76->SourceLineNumber(95);
    temp76->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp76, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    temp77->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp77->SourceLineNumber(96);
    temp77->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->SourceLineNumber(98);
    temp9->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp79);
    temp31->SourceLineNumber(98);
    temp31->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp80->Color(::g::Uno::Float4__New2(0.4666667f, 0.4784314f, 0.6745098f, 1.0f));
    temp80->Width(1.0f);
    temp81->Orientation(0);
    temp81->ItemSpacing(5.0f);
    temp81->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp81->Alignment(10);
    temp81->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp81->SourceLineNumber(138);
    temp81->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp81, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp100);
    temp10->SourceLineNumber(139);
    temp10->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp87);
    temp82->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp82->Color(::g::Uno::Float4__New2(0.6627451f, 0.8823529f, 0.6392157f, 1.0f));
    temp82->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp82->Alignment(0);
    temp82->SourceLineNumber(140);
    temp82->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp83);
    temp83->Alignment(0);
    temp83->SourceLineNumber(141);
    temp83->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp83, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp85);
    temp84->Value(uString::Const("\352\262\260 \354\236\254"));
    temp84->Alignment(10);
    temp84->SourceLineNumber(142);
    temp84->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp84->Font(::g::MainView::AGOTHIC14());
    temp85->SourceLineNumber(143);
    temp85->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp86);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp86, uCRef(true));
    temp86->SourceLineNumber(144);
    temp86->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp32->SourceLineNumber(139);
    temp32->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp88->Value1(false);
    temp88->SourceLineNumber(149);
    temp88->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp89);
    temp89->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp89->Color(::g::Uno::Float4__New2(0.9333333f, 0.7607843f, 0.7921569f, 1.0f));
    temp89->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp89->Alignment(0);
    temp89->SourceLineNumber(150);
    temp89->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp89->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp90);
    temp90->Alignment(0);
    temp90->SourceLineNumber(151);
    temp90->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp90, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp92);
    temp91->Value(uString::Const("\352\262\260\354\236\254\354\267\250\354\206\214"));
    temp91->Alignment(10);
    temp91->SourceLineNumber(152);
    temp91->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp91->Font(::g::MainView::AGOTHIC14());
    temp92->SourceLineNumber(153);
    temp92->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp92->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp93);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp93, uCRef(true));
    temp93->SourceLineNumber(154);
    temp93->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp11->SourceLineNumber(160);
    temp11->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp99);
    temp94->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp94->Color(::g::Uno::Float4__New2(0.9333333f, 0.7607843f, 0.7921569f, 1.0f));
    temp94->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp94->Alignment(0);
    temp94->SourceLineNumber(161);
    temp94->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp95);
    temp95->Alignment(0);
    temp95->SourceLineNumber(162);
    temp95->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp95, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp97);
    temp96->Value(uString::Const("\353\260\230 \353\240\244"));
    temp96->Alignment(10);
    temp96->SourceLineNumber(163);
    temp96->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp96->Font(::g::MainView::AGOTHIC14());
    temp97->SourceLineNumber(164);
    temp97->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp97->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp98);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp98, uCRef(true));
    temp98->SourceLineNumber(165);
    temp98->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp33->SourceLineNumber(160);
    temp33->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp100->Value1(false);
    temp100->SourceLineNumber(170);
    temp100->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp101);
    temp101->Alignment(0);
    temp101->SourceLineNumber(171);
    temp101->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp101, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp103);
    temp102->Value(uString::Const("\353\260\230\353\240\244\354\267\250\354\206\214"));
    temp102->SourceLineNumber(172);
    temp102->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp103->SourceLineNumber(173);
    temp103->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp104);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp104, uCRef(true));
    temp104->SourceLineNumber(174);
    temp104->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp12->TextWrapping(0);
    temp12->FontSize(18.0f);
    temp12->TextAlignment(0);
    temp12->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp12->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp12->Alignment(0);
    temp12->Visibility(2);
    temp12->Margin(::g::Uno::Float4__New2(25.0f, 5.0f, 0.0f, 0.0f));
    temp12->SourceLineNumber(180);
    temp12->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp12, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp105);
    temp34->SourceLineNumber(180);
    temp34->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp106->Code(uString::Const("\n"
        "\t\texports.title = this.Parameter.map(function(param) {\n"
        "\t\t\treturn param.title;\n"
        "\t\t});\n"
        "\t"));
    temp106->LineNumber(183);
    temp106->FileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp106->SourceLineNumber(183);
    temp106->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), confirmAbandon1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), confirmAbandon2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), confirmAbandon3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), confirmAbandon4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), confirmAbandon1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), confirmAbandon2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), confirmAbandon3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), confirmAbandon4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp106);
}

// public SubPage_appr_inq New(Fuse.Navigation.Router router) [static]
SubPage_appr_inq* SubPage_appr_inq::New5(::g::Fuse::Navigation::Router* router1)
{
    SubPage_appr_inq* obj1 = (SubPage_appr_inq*)uNew(SubPage_appr_inq_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/SubPage_appr_inq.g.uno
// ------------------------------------------------------------------

// public partial sealed class SubPage_appr_inq.Template
// {
// static Template()
static void SubPage_appr_inq__Template__cctor__fn(uType* __type)
{
    SubPage_appr_inq__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Visibility"*/]);
    SubPage_appr_inq__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void SubPage_appr_inq__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Visibility");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("ok_flag_visible");
    ::STRINGS[3] = uString::Const("ok_flag");
    ::STRINGS[4] = uString::Const("return_flag_visible");
    ::STRINGS[5] = uString::Const("return_flag");
    ::STRINGS[6] = uString::Const("USR_NM");
    ::STRINGS[7] = uString::Const("JIKGUB");
    ::STRINGS[8] = uString::Const("APP_DT");
    ::STRINGS[9] = uString::Const("Pages/Menu_Customer/SubPage_appr_inq.ux");
    ::STRINGS[10] = uString::Const("(\352\262\260\354\236\254)");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::HSMRO_bundle_typeof(),
        ::g::MainView_typeof());
    type->SetFields(2,
        ::g::SubPage_appr_inq_typeof(), offsetof(SubPage_appr_inq__Template, __parent1), uFieldFlagsWeak,
        ::g::SubPage_appr_inq_typeof(), offsetof(SubPage_appr_inq__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(SubPage_appr_inq__Template, temp_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr_inq__Template, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(SubPage_appr_inq__Template, temp2_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr_inq__Template, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template, temp6_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr_inq__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr_inq__Template::__selector1_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* SubPage_appr_inq__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 13;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(SubPage_appr_inq__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("SubPage_appr_inq.Template", options);
    type->fp_build_ = SubPage_appr_inq__Template_build;
    type->fp_cctor_ = SubPage_appr_inq__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))SubPage_appr_inq__Template__New1_fn;
    return type;
}

// public Template(SubPage_appr_inq parent, SubPage_appr_inq parentInstance)
void SubPage_appr_inq__Template__ctor_1_fn(SubPage_appr_inq__Template* __this, ::g::SubPage_appr_inq* parent, ::g::SubPage_appr_inq* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void SubPage_appr_inq__Template__New1_fn(SubPage_appr_inq__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::DockPanel* __self1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    __this->temp_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(temp, SubPage_appr_inq__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"ok_flag_vis...*/]);
    ::g::Fuse::Triggers::WhileTrue* temp1 = ::g::Fuse::Triggers::WhileTrue::New2();
    __this->temp1_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(temp1, SubPage_appr_inq__Template::__selector1_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"ok_flag"*/]);
    ::g::Fuse::Controls::Image* temp2 = ::g::Fuse::Controls::Image::New3();
    __this->temp2_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(temp2, SubPage_appr_inq__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"return_flag...*/]);
    ::g::Fuse::Triggers::WhileTrue* temp3 = ::g::Fuse::Triggers::WhileTrue::New2();
    __this->temp3_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(temp3, SubPage_appr_inq__Template::__selector1_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"return_flag"*/]);
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    __this->temp4_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp4, SubPage_appr_inq__Template::__selector1_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"USR_NM"*/]);
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    __this->temp5_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp5, SubPage_appr_inq__Template::__selector1_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"JIKGUB"*/]);
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    __this->temp6_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp6, SubPage_appr_inq__Template::__selector1_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"APP_DT"*/]);
    ::g::Fuse::Controls::Rectangle* temp14 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp15 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Visibility_inst, (uObject*)temp7, 3);
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp8, 3);
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Visibility_inst, (uObject*)temp9, 3);
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp3_Value_inst, (uObject*)temp10, 3);
    ::g::Fuse::Drawing::Stroke* temp20 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Rectangle* temp21 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp4_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Controls::Rectangle* temp23 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp5_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Controls::Rectangle* temp25 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp6_Value_inst, (uObject*)temp13, 3);
    __self1->Width(::g::Uno::UX::Size__New1(70.0f, 1));
    __self1->MinWidth(::g::Uno::UX::Size__New1(70.0f, 1));
    __self1->MaxWidth(::g::Uno::UX::Size__New1(70.0f, 1));
    __self1->Alignment(0);
    __self1->Margin(::g::Uno::Float4__New2(3.0f, 0.0f, 0.0f, 0.0f));
    __self1->SourceLineNumber(26);
    __self1->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(__self1, 0);
    temp14->Width(::g::Uno::UX::Size__New1(70.0f, 1));
    temp14->MinWidth(::g::Uno::UX::Size__New1(70.0f, 1));
    temp14->MaxWidth(::g::Uno::UX::Size__New1(70.0f, 1));
    temp14->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp14->Padding(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp14->SourceLineNumber(27);
    temp14->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp14, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Strokes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp15->Value(::STRINGS[10/*"(결재)"*/]);
    temp15->FontSize(10.0f);
    temp15->SourceLineNumber(28);
    temp15->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp15->Font(::g::MainView::AGOTHIC14());
    temp1->SourceLineNumber(29);
    temp1->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp->Color(::g::Uno::Float4__New2(0.2745098f, 0.6705883f, 0.09411765f, 1.0f));
    temp->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp->Alignment(0);
    temp->SourceLineNumber(30);
    temp->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 2);
    temp->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::check_appra5f40194()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    temp7->SourceLineNumber(30);
    temp7->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp8->SourceLineNumber(29);
    temp8->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp3->SourceLineNumber(32);
    temp3->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    temp2->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp2->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp2->Alignment(0);
    temp2->SourceLineNumber(33);
    temp2->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 2);
    temp2->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::return4e9a2e44()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    temp9->SourceLineNumber(33);
    temp9->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp10->SourceLineNumber(32);
    temp10->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp20->Color(::g::Uno::Float4__New2(0.003921569f, 0.0f, 0.0f, 0.3568628f));
    temp20->Width(1.0f);
    temp21->Alignment(0);
    temp21->Margin(::g::Uno::Float4__New2(0.0f, 3.0f, 0.0f, 0.0f));
    temp21->SourceLineNumber(37);
    temp21->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp21, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->FontSize(12.0f);
    temp4->TextAlignment(1);
    temp4->SourceLineNumber(38);
    temp4->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp4->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    temp11->SourceLineNumber(38);
    temp11->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp23->Alignment(0);
    temp23->SourceLineNumber(41);
    temp23->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp23, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp5->FontSize(11.0f);
    temp5->TextAlignment(1);
    temp5->SourceLineNumber(42);
    temp5->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp5->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    temp12->SourceLineNumber(42);
    temp12->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp25->Alignment(0);
    temp25->SourceLineNumber(44);
    temp25->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->FontSize(12.0f);
    temp6->TextAlignment(1);
    temp6->SourceLineNumber(45);
    temp6->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp6->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    temp13->SourceLineNumber(45);
    temp13->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    return *__retval = __self1, void();
}

// public Template New(SubPage_appr_inq parent, SubPage_appr_inq parentInstance)
void SubPage_appr_inq__Template__New2_fn(::g::SubPage_appr_inq* parent, ::g::SubPage_appr_inq* parentInstance, SubPage_appr_inq__Template** __retval)
{
    *__retval = SubPage_appr_inq__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector SubPage_appr_inq__Template::__selector0_;
::g::Uno::UX::Selector SubPage_appr_inq__Template::__selector1_;

// public Template(SubPage_appr_inq parent, SubPage_appr_inq parentInstance) [instance]
void SubPage_appr_inq__Template::ctor_1(::g::SubPage_appr_inq* parent, ::g::SubPage_appr_inq* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(SubPage_appr_inq parent, SubPage_appr_inq parentInstance) [static]
SubPage_appr_inq__Template* SubPage_appr_inq__Template::New2(::g::SubPage_appr_inq* parent, ::g::SubPage_appr_inq* parentInstance)
{
    SubPage_appr_inq__Template* obj1 = (SubPage_appr_inq__Template*)uNew(SubPage_appr_inq__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/SubPage_appr_inq.g.uno
// ------------------------------------------------------------------

// public partial sealed class SubPage_appr_inq.Template1
// {
// static Template1()
static void SubPage_appr_inq__Template1__cctor__fn(uType* __type)
{
    SubPage_appr_inq__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void SubPage_appr_inq__Template1_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[6] = uString::Const("USR_NM");
    ::STRINGS[11] = uString::Const(" \354\235\230\352\262\254: ");
    ::STRINGS[12] = uString::Const("APP_REMARK");
    ::STRINGS[9] = uString::Const("Pages/Menu_Customer/SubPage_appr_inq.ux");
    ::STRINGS[13] = uString::Const("auto");
    ::STRINGS[14] = uString::Const("90, auto");
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::MainView_typeof());
    type->SetFields(2,
        ::g::SubPage_appr_inq_typeof(), offsetof(SubPage_appr_inq__Template1, __parent1), uFieldFlagsWeak,
        ::g::SubPage_appr_inq_typeof(), offsetof(SubPage_appr_inq__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template1, temp1_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr_inq__Template1::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* SubPage_appr_inq__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SubPage_appr_inq__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("SubPage_appr_inq.Template1", options);
    type->fp_build_ = SubPage_appr_inq__Template1_build;
    type->fp_cctor_ = SubPage_appr_inq__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))SubPage_appr_inq__Template1__New1_fn;
    return type;
}

// public Template1(SubPage_appr_inq parent, SubPage_appr_inq parentInstance)
void SubPage_appr_inq__Template1__ctor_1_fn(SubPage_appr_inq__Template1* __this, ::g::SubPage_appr_inq* parent, ::g::SubPage_appr_inq* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void SubPage_appr_inq__Template1__New1_fn(SubPage_appr_inq__Template1* __this, uObject** __retval)
{
    ::g::Fuse::Controls::DockPanel* __self1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"USR_NM"*/]);
    uString* temp3 = ::STRINGS[11/*" 의견: "*/];
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(temp3);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp, SubPage_appr_inq__Template1::__selector0_);
    ::g::Fuse::Reactive::Add* temp5 = ::g::Fuse::Reactive::Add::New1(temp2, temp4);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp1, SubPage_appr_inq__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"APP_REMARK"*/]);
    ::g::Fuse::Controls::DockPanel* temp7 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::DockPanel* temp8 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp9 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp5, 3);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp6, 3);
    ::g::Fuse::Controls::Rectangle* temp12 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp13 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8431373f, 0.7529412f, 0.9843137f, 1.0f));
    __self1->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 3.0f));
    __self1->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    __self1->SourceLineNumber(55);
    __self1->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(__self1, 2);
    temp7->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp7->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp7->SourceLineNumber(56);
    temp7->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp7, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp8->Alignment(0);
    temp8->SourceLineNumber(57);
    temp8->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp8, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->Rows(::STRINGS[13/*"auto"*/]);
    temp9->RowCount(1);
    temp9->Columns(::STRINGS[14/*"90, auto"*/]);
    temp9->ColumnCount(2);
    temp9->CellSpacing(3.0f);
    temp9->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp9->SourceLineNumber(58);
    temp9->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp->FontSize(13.0f);
    temp->Color(::g::Uno::Float4__New2(0.4039216f, 0.1058824f, 0.5882353f, 1.0f));
    temp->SourceLineNumber(59);
    temp->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    temp5->SourceLineNumber(59);
    temp5->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp2->SourceLineNumber(59);
    temp2->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp4->SourceLineNumber(59);
    temp4->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp1->TextWrapping(1);
    temp1->FontSize(13.0f);
    temp1->Color(::g::Uno::Float4__New2(0.4039216f, 0.1058824f, 0.5882353f, 1.0f));
    temp1->SourceLineNumber(60);
    temp1->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp1->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp6->SourceLineNumber(60);
    temp6->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp12->Color(::g::Uno::Float4__New2(0.6901961f, 0.6980392f, 0.8431373f, 1.0f));
    temp12->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp12->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp12->SourceLineNumber(64);
    temp12->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp12, 2);
    __self1->Background(temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    return *__retval = __self1, void();
}

// public Template1 New(SubPage_appr_inq parent, SubPage_appr_inq parentInstance)
void SubPage_appr_inq__Template1__New2_fn(::g::SubPage_appr_inq* parent, ::g::SubPage_appr_inq* parentInstance, SubPage_appr_inq__Template1** __retval)
{
    *__retval = SubPage_appr_inq__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector SubPage_appr_inq__Template1::__selector0_;

// public Template1(SubPage_appr_inq parent, SubPage_appr_inq parentInstance) [instance]
void SubPage_appr_inq__Template1::ctor_1(::g::SubPage_appr_inq* parent, ::g::SubPage_appr_inq* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(SubPage_appr_inq parent, SubPage_appr_inq parentInstance) [static]
SubPage_appr_inq__Template1* SubPage_appr_inq__Template1::New2(::g::SubPage_appr_inq* parent, ::g::SubPage_appr_inq* parentInstance)
{
    SubPage_appr_inq__Template1* obj1 = (SubPage_appr_inq__Template1*)uNew(SubPage_appr_inq__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/SubPage_appr_inq.g.uno
// ------------------------------------------------------------------

// public partial sealed class SubPage_appr_inq.Template2
// {
// static Template2()
static void SubPage_appr_inq__Template2__cctor__fn(uType* __type)
{
    SubPage_appr_inq__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void SubPage_appr_inq__Template2_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[15] = uString::Const("ORDER_SEQ");
    ::STRINGS[16] = uString::Const(")");
    ::STRINGS[17] = uString::Const("ITEM_CD");
    ::STRINGS[18] = uString::Const("ITEM_NM");
    ::STRINGS[19] = uString::Const("SPEC");
    ::STRINGS[20] = uString::Const("MAKER");
    ::STRINGS[21] = uString::Const("QTY");
    ::STRINGS[22] = uString::Const("UNIT");
    ::STRINGS[23] = uString::Const("PRICE");
    ::STRINGS[24] = uString::Const("\354\233\220");
    ::STRINGS[25] = uString::Const("AMOUNT");
    ::STRINGS[9] = uString::Const("Pages/Menu_Customer/SubPage_appr_inq.ux");
    ::STRINGS[26] = uString::Const("auto, auto, auto");
    ::STRINGS[13] = uString::Const("auto");
    ::STRINGS[27] = uString::Const("50, 1*, 50, 1*");
    ::STRINGS[28] = uString::Const("\355\222\210\353\252\251\354\275\224\353\223\234");
    ::STRINGS[29] = uString::Const("\355\222\210\353\252\205");
    ::STRINGS[30] = uString::Const("\352\267\234\352\262\251");
    ::STRINGS[31] = uString::Const("\354\240\234\354\241\260\354\202\254");
    ::STRINGS[32] = uString::Const("\352\262\254\354\240\201\354\210\230\353\237\211");
    ::STRINGS[33] = uString::Const("\353\213\250\352\260\200");
    ::STRINGS[34] = uString::Const("");
    ::STRINGS[35] = uString::Const("\352\262\254\354\240\201\352\270\210\354\225\241");
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::MainView_typeof());
    type->SetFields(2,
        ::g::SubPage_appr_inq_typeof(), offsetof(SubPage_appr_inq__Template2, __parent1), uFieldFlagsWeak,
        ::g::SubPage_appr_inq_typeof(), offsetof(SubPage_appr_inq__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template2, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template2, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template2, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template2, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template2, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template2, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template2, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template2, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr_inq__Template2, temp8_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr_inq__Template2::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* SubPage_appr_inq__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 14;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SubPage_appr_inq__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("SubPage_appr_inq.Template2", options);
    type->fp_build_ = SubPage_appr_inq__Template2_build;
    type->fp_cctor_ = SubPage_appr_inq__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))SubPage_appr_inq__Template2__New1_fn;
    return type;
}

// public Template2(SubPage_appr_inq parent, SubPage_appr_inq parentInstance)
void SubPage_appr_inq__Template2__ctor_1_fn(SubPage_appr_inq__Template2* __this, ::g::SubPage_appr_inq* parent, ::g::SubPage_appr_inq* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void SubPage_appr_inq__Template2__New1_fn(SubPage_appr_inq__Template2* __this, uObject** __retval)
{
    ::g::Fuse::Controls::DockPanel* __self1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"ORDER_SEQ"*/]);
    uString* temp10 = ::STRINGS[16/*")"*/];
    ::g::Fuse::Reactive::Constant* temp11 = ::g::Fuse::Reactive::Constant::New1(temp10);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp, SubPage_appr_inq__Template2::__selector0_);
    ::g::Fuse::Reactive::Add* temp12 = ::g::Fuse::Reactive::Add::New1(temp9, temp11);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp1, SubPage_appr_inq__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"ITEM_CD"*/]);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    __this->temp2_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp2, SubPage_appr_inq__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"ITEM_NM"*/]);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    __this->temp3_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp3, SubPage_appr_inq__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"SPEC"*/]);
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    __this->temp4_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp4, SubPage_appr_inq__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"MAKER"*/]);
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    __this->temp5_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp5, SubPage_appr_inq__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"QTY"*/]);
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    __this->temp6_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp6, SubPage_appr_inq__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"UNIT"*/]);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"PRICE"*/]);
    uString* temp20 = ::STRINGS[24/*"원"*/];
    ::g::Fuse::Reactive::Constant* temp21 = ::g::Fuse::Reactive::Constant::New1(temp20);
    ::g::Fuse::Controls::Text* temp7 = ::g::Fuse::Controls::Text::New3();
    __this->temp7_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp7, SubPage_appr_inq__Template2::__selector0_);
    ::g::Fuse::Reactive::Add* temp22 = ::g::Fuse::Reactive::Add::New1(temp19, temp21);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[25/*"AMOUNT"*/]);
    uString* temp24 = ::STRINGS[24/*"원"*/];
    ::g::Fuse::Reactive::Constant* temp25 = ::g::Fuse::Reactive::Constant::New1(temp24);
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New3();
    __this->temp8_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp8, SubPage_appr_inq__Template2::__selector0_);
    ::g::Fuse::Reactive::Add* temp26 = ::g::Fuse::Reactive::Add::New1(temp23, temp25);
    ::g::Fuse::Controls::DockPanel* temp27 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Controls::DockPanel* temp29 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp30 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp31 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp32 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp13, 3);
    ::g::Fuse::Controls::Text* temp33 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Value_inst, (uObject*)temp14, 3);
    ::g::Fuse::Controls::Text* temp35 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp36 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp3_Value_inst, (uObject*)temp15, 3);
    ::g::Fuse::Controls::Text* temp37 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp4_Value_inst, (uObject*)temp16, 3);
    ::g::Fuse::Controls::Text* temp39 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::WrapPanel* temp40 = ::g::Fuse::Controls::WrapPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp41 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp5_Value_inst, (uObject*)temp17, 3);
    ::g::Fuse::Reactive::DataBinding* temp42 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp6_Value_inst, (uObject*)temp18, 3);
    ::g::Fuse::Controls::Text* temp43 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp44 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp7_Value_inst, (uObject*)temp22, 3);
    ::g::Fuse::Controls::Text* temp45 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp46 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp47 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp48 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp8_Value_inst, (uObject*)temp26, 3);
    ::g::Fuse::Controls::Rectangle* temp49 = ::g::Fuse::Controls::Rectangle::New3();
    __self1->SourceLineNumber(99);
    __self1->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp27->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp27->Padding(::g::Uno::Float4__New2(0.0f, 3.0f, 0.0f, 3.0f));
    temp27->SourceLineNumber(100);
    temp27->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp27, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    temp->FontSize(10.0f);
    temp->Width(::g::Uno::UX::Size__New1(15.0f, 1));
    temp->Alignment(5);
    temp->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp->SourceLineNumber(101);
    temp->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    temp12->SourceLineNumber(101);
    temp12->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp9->SourceLineNumber(101);
    temp9->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp11->SourceLineNumber(101);
    temp11->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp29->Alignment(0);
    temp29->SourceLineNumber(102);
    temp29->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp29, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    temp30->Rows(::STRINGS[26/*"auto, auto,...*/]);
    temp30->RowCount(4);
    temp30->DefaultRow(::STRINGS[13/*"auto"*/]);
    temp30->Columns(::STRINGS[27/*"50, 1*, 50,...*/]);
    temp30->ColumnCount(4);
    temp30->CellSpacing(3.0f);
    temp30->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp30->SourceLineNumber(103);
    temp30->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp31->Value(::STRINGS[28/*"품목코드"*/]);
    temp31->FontSize(12.0f);
    temp31->SourceLineNumber(106);
    temp31->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp31->Font(::g::MainView::AGOTHIC14());
    temp1->FontSize(12.0f);
    temp1->SourceLineNumber(107);
    temp1->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp1->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp32);
    temp13->SourceLineNumber(107);
    temp13->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp33->Value(::STRINGS[29/*"품명"*/]);
    temp33->FontSize(12.0f);
    temp33->SourceLineNumber(108);
    temp33->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp33->Font(::g::MainView::AGOTHIC14());
    temp2->TextWrapping(1);
    temp2->FontSize(12.0f);
    temp2->SourceLineNumber(109);
    temp2->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp2->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    temp14->SourceLineNumber(109);
    temp14->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp35->Value(::STRINGS[30/*"규격"*/]);
    temp35->FontSize(12.0f);
    temp35->SourceLineNumber(110);
    temp35->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp35->Font(::g::MainView::AGOTHIC14());
    temp3->FontSize(12.0f);
    temp3->SourceLineNumber(111);
    temp3->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp3->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp36);
    temp15->SourceLineNumber(111);
    temp15->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp37->Value(::STRINGS[31/*"제조사"*/]);
    temp37->FontSize(12.0f);
    temp37->SourceLineNumber(112);
    temp37->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp37->Font(::g::MainView::AGOTHIC14());
    temp4->FontSize(12.0f);
    temp4->SourceLineNumber(113);
    temp4->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp4->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp38);
    temp16->SourceLineNumber(113);
    temp16->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp39->Value(::STRINGS[32/*"견적수량"*/]);
    temp39->FontSize(12.0f);
    temp39->SourceLineNumber(114);
    temp39->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp39->Font(::g::MainView::AGOTHIC14());
    temp40->Orientation(0);
    temp40->SourceLineNumber(115);
    temp40->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp5->FontSize(12.0f);
    temp5->SourceLineNumber(116);
    temp5->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp5->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp41);
    temp17->SourceLineNumber(116);
    temp17->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp6->FontSize(11.0f);
    temp6->Alignment(13);
    temp6->SourceLineNumber(117);
    temp6->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp6->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp42);
    temp18->SourceLineNumber(117);
    temp18->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp43->Value(::STRINGS[33/*"단가"*/]);
    temp43->FontSize(12.0f);
    temp43->SourceLineNumber(119);
    temp43->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp43->Font(::g::MainView::AGOTHIC14());
    temp7->FontSize(12.0f);
    temp7->TextAlignment(2);
    temp7->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 15.0f, 0.0f));
    temp7->SourceLineNumber(120);
    temp7->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp7->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp44);
    temp22->SourceLineNumber(120);
    temp22->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp19->SourceLineNumber(120);
    temp19->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp21->SourceLineNumber(120);
    temp21->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp45->Value(::STRINGS[34/*""*/]);
    temp45->FontSize(12.0f);
    temp45->SourceLineNumber(121);
    temp45->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp45->Font(::g::MainView::AGOTHIC14());
    temp46->Value(::STRINGS[34/*""*/]);
    temp46->FontSize(12.0f);
    temp46->SourceLineNumber(122);
    temp46->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp46->Font(::g::MainView::AGOTHIC14());
    temp47->Value(::STRINGS[35/*"견적금액"*/]);
    temp47->FontSize(12.0f);
    temp47->SourceLineNumber(123);
    temp47->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp47->Font(::g::MainView::AGOTHIC14());
    temp8->FontSize(12.0f);
    temp8->TextAlignment(2);
    temp8->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 15.0f, 0.0f));
    temp8->SourceLineNumber(124);
    temp8->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp8->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp48);
    temp26->SourceLineNumber(124);
    temp26->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp23->SourceLineNumber(124);
    temp23->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp25->SourceLineNumber(124);
    temp25->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    temp49->Color(::g::Uno::Float4__New2(0.6901961f, 0.6980392f, 0.8431373f, 1.0f));
    temp49->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp49->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp49->SourceLineNumber(128);
    temp49->SourceFileName(::STRINGS[9/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp49, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    return *__retval = __self1, void();
}

// public Template2 New(SubPage_appr_inq parent, SubPage_appr_inq parentInstance)
void SubPage_appr_inq__Template2__New2_fn(::g::SubPage_appr_inq* parent, ::g::SubPage_appr_inq* parentInstance, SubPage_appr_inq__Template2** __retval)
{
    *__retval = SubPage_appr_inq__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector SubPage_appr_inq__Template2::__selector0_;

// public Template2(SubPage_appr_inq parent, SubPage_appr_inq parentInstance) [instance]
void SubPage_appr_inq__Template2::ctor_1(::g::SubPage_appr_inq* parent, ::g::SubPage_appr_inq* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(SubPage_appr_inq parent, SubPage_appr_inq parentInstance) [static]
SubPage_appr_inq__Template2* SubPage_appr_inq__Template2::New2(::g::SubPage_appr_inq* parent, ::g::SubPage_appr_inq* parentInstance)
{
    SubPage_appr_inq__Template2* obj1 = (SubPage_appr_inq__Template2*)uNew(SubPage_appr_inq__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
