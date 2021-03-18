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
#include <_root.HSMRO_ListType_USR_ID_Property.h>
#include <_root.HSMRO_ListType_USR_NM_Property.h>
#include <_root.ListType.h>
#include <_root.MainView.h>
#include <_root.SubPage_appr.h>
#include <_root.SubPage_appr.Template.h>
#include <_root.SubPage_appr.Template1.h>
#include <_root.SubPage_appr.Template2.h>
#include <_root.SubPage_appr.Template3.h>
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
#include <Fuse.Reactive.NotEqual.h>
#include <Fuse.Selection.Selection.h>
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
static uString* STRINGS[42];
static uType* TYPES[3];

namespace g{

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/SubPage_appr.g.uno
// ---------------------------------------------------------------------------------

// public partial sealed class SubPage_appr
// {
// static SubPage_appr()
static void SubPage_appr__cctor_4_fn(uType* __type)
{
    SubPage_appr::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 18, uString::Const("temp_eb10"), uString::Const("router"), uString::Const("confirmAbandon1"), uString::Const("temp_eb11"), uString::Const("confirmAbandon2"), uString::Const("temp_eb12"), uString::Const("confirmAbandon3"), uString::Const("temp_eb13"), uString::Const("confirmAbandon4"), uString::Const("line_pop"), uString::Const("pizzaSel"), uString::Const("temp_eb14"), uString::Const("temp_eb15"), uString::Const("FILE_FLAG"), uString::Const("temp_eb16"), uString::Const("temp_eb17"), uString::Const("temp_eb18"), uString::Const("temp_eb19"));
    SubPage_appr::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Show"));
    SubPage_appr::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    SubPage_appr::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Visibility"*/]);
    SubPage_appr::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Value"*/]);
    SubPage_appr::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("confirmAbandon1"));
    SubPage_appr::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("confirmAbandon2"));
    SubPage_appr::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("confirmAbandon3"));
    SubPage_appr::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("confirmAbandon4"));
    SubPage_appr::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("line_pop"));
    SubPage_appr::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("pizzaSel"));
    SubPage_appr::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("FILE_FLAG"));
}

static void SubPage_appr_build(uType* type)
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
    type->SetFields(126,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(SubPage_appr, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr, confirmAbandon3_Show_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(SubPage_appr, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(SubPage_appr, line_pop_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(SubPage_appr, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(SubPage_appr, temp2_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp9_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp11_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp12_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp13_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp14_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp15_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr, FILE_FLAG_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(SubPage_appr, temp16_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(SubPage_appr, temp17_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr, temp18_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr, confirmAbandon1_Show_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr, temp19_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr, confirmAbandon2_Show_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr, temp20_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr, confirmAbandon4_Show_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr, temp21_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr, temp_eb10), 0,
        ::g::Confirm_msg_typeof(), offsetof(SubPage_appr, confirmAbandon1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr, temp_eb11), 0,
        ::g::Confirm_typeof(), offsetof(SubPage_appr, confirmAbandon2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr, temp_eb12), 0,
        ::g::Confirm_return_typeof(), offsetof(SubPage_appr, confirmAbandon3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr, temp_eb13), 0,
        ::g::Confirm_typeof(), offsetof(SubPage_appr, confirmAbandon4), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(SubPage_appr, line_pop), 0,
        ::g::Fuse::Selection::Selection_typeof(), offsetof(SubPage_appr, pizzaSel), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr, temp_eb14), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr, temp_eb15), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(SubPage_appr, FILE_FLAG), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr, temp_eb16), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr, temp_eb17), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr, temp_eb18), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_appr, temp_eb19), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(SubPage_appr, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&SubPage_appr::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr::__selector10_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SubPage_appr__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* SubPage_appr_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 185;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(SubPage_appr);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SubPage_appr", options);
    type->fp_build_ = SubPage_appr_build;
    type->fp_cctor_ = SubPage_appr__cctor_4_fn;
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

// public SubPage_appr(Fuse.Navigation.Router router)
void SubPage_appr__ctor_8_fn(SubPage_appr* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX()
void SubPage_appr__InitializeUX_fn(SubPage_appr* __this)
{
    __this->InitializeUX();
}

// public SubPage_appr New(Fuse.Navigation.Router router)
void SubPage_appr__New5_fn(::g::Fuse::Navigation::Router* router1, SubPage_appr** __retval)
{
    *__retval = SubPage_appr::New5(router1);
}

uSStrong<uArray*> SubPage_appr::__g_static_nametable1_;
::g::Uno::UX::Selector SubPage_appr::__selector0_;
::g::Uno::UX::Selector SubPage_appr::__selector1_;
::g::Uno::UX::Selector SubPage_appr::__selector2_;
::g::Uno::UX::Selector SubPage_appr::__selector3_;
::g::Uno::UX::Selector SubPage_appr::__selector4_;
::g::Uno::UX::Selector SubPage_appr::__selector5_;
::g::Uno::UX::Selector SubPage_appr::__selector6_;
::g::Uno::UX::Selector SubPage_appr::__selector7_;
::g::Uno::UX::Selector SubPage_appr::__selector8_;
::g::Uno::UX::Selector SubPage_appr::__selector9_;
::g::Uno::UX::Selector SubPage_appr::__selector10_;

// public SubPage_appr(Fuse.Navigation.Router router) [instance]
void SubPage_appr::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("SubPage_appr", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance]
void SubPage_appr::InitializeUX()
{
    uStackFrame __("SubPage_appr", "InitializeUX()");
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(uString::Const("sub_appr_back"));
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(uString::Const("abdBtn1Click"));
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("abdBtn2Click"));
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(uString::Const("abdBtn3Click"));
    confirmAbandon3 = ::g::Confirm_return::New4();
    confirmAbandon3_Show_inst = ::g::HSMRO_Confirm_return_Show_Property::New1(confirmAbandon3, SubPage_appr::__selector0_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(uString::Const("root_show"));
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::HSMRO_FuseReactiveEach_Items_Property::New1(temp, SubPage_appr::__selector1_);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(uString::Const("line_list"));
    line_pop = ::g::Fuse::Controls::Rectangle::New3();
    line_pop_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(line_pop, SubPage_appr::__selector2_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(uString::Const("line_ok_btn"));
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(uString::Const("btnBackClick_appr"));
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::HSMRO_FuseReactiveEach_Items_Property::New1(temp1, SubPage_appr::__selector1_);
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(uString::Const("items_appr_line"));
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::HSMRO_FuseReactiveEach_Items_Property::New1(temp2, SubPage_appr::__selector1_);
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(uString::Const("remark_list"));
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp3, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(uString::Const("RETURN_REMARK"));
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    temp4_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp4, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp33 = ::g::Fuse::Reactive::Data::New1(::STRINGS[0/*"USR_NM"*/]);
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    temp5_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp5, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(uString::Const("APP_DT_H"));
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    temp6_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp6, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp35 = ::g::Fuse::Reactive::Data::New1(uString::Const("APP_TITLE"));
    ::g::Fuse::Controls::Text* temp7 = ::g::Fuse::Controls::Text::New3();
    temp7_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp7, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp36 = ::g::Fuse::Reactive::Data::New1(uString::Const("APP_TEXT"));
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New3();
    temp8_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp8, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp37 = ::g::Fuse::Reactive::Data::New1(uString::Const("APP_PO_NO"));
    ::g::Fuse::Reactive::Data* temp38 = ::g::Fuse::Reactive::Data::New1(uString::Const("APP_PO_AMT"));
    uString* temp39 = uString::Const(" \354\233\220");
    ::g::Fuse::Reactive::Constant* temp40 = ::g::Fuse::Reactive::Constant::New1(temp39);
    ::g::Fuse::Controls::Text* temp9 = ::g::Fuse::Controls::Text::New3();
    temp9_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp9, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Add* temp41 = ::g::Fuse::Reactive::Add::New1(temp38, temp40);
    ::g::Fuse::Controls::Text* temp10 = ::g::Fuse::Controls::Text::New3();
    temp10_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp10, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp42 = ::g::Fuse::Reactive::Data::New1(uString::Const("FILE_NM1"));
    ::g::Fuse::Reactive::Data* temp43 = ::g::Fuse::Reactive::Data::New1(uString::Const("open_file1"));
    ::g::Fuse::Controls::Text* temp11 = ::g::Fuse::Controls::Text::New3();
    temp11_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp11, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp44 = ::g::Fuse::Reactive::Data::New1(uString::Const("FILE_NM2"));
    ::g::Fuse::Reactive::Data* temp45 = ::g::Fuse::Reactive::Data::New1(uString::Const("open_file2"));
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New3();
    temp12_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp12, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp46 = ::g::Fuse::Reactive::Data::New1(uString::Const("FILE_NM3"));
    ::g::Fuse::Reactive::Data* temp47 = ::g::Fuse::Reactive::Data::New1(uString::Const("open_file3"));
    ::g::Fuse::Controls::Text* temp13 = ::g::Fuse::Controls::Text::New3();
    temp13_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp13, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp48 = ::g::Fuse::Reactive::Data::New1(uString::Const("FILE_PC1"));
    ::g::Fuse::Controls::Text* temp14 = ::g::Fuse::Controls::Text::New3();
    temp14_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp14, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp49 = ::g::Fuse::Reactive::Data::New1(uString::Const("FILE_PC2"));
    ::g::Fuse::Controls::Text* temp15 = ::g::Fuse::Controls::Text::New3();
    temp15_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp15, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp50 = ::g::Fuse::Reactive::Data::New1(uString::Const("FILE_PC3"));
    ::g::Fuse::Reactive::Data* temp51 = ::g::Fuse::Reactive::Data::New1(uString::Const("FILE_NM1"));
    uString* temp52 = uString::Const("null");
    ::g::Fuse::Reactive::Constant* temp53 = ::g::Fuse::Reactive::Constant::New1(temp52);
    FILE_FLAG = ::g::Fuse::Triggers::WhileTrue::New2();
    FILE_FLAG_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(FILE_FLAG, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::NotEqual* temp54 = ::g::Fuse::Reactive::NotEqual::New1(temp51, temp53);
    ::g::Fuse::Reactive::Each* temp16 = ::g::Fuse::Reactive::Each::New4();
    temp16_Items_inst = ::g::HSMRO_FuseReactiveEach_Items_Property::New1(temp16, SubPage_appr::__selector1_);
    ::g::Fuse::Reactive::Data* temp55 = ::g::Fuse::Reactive::Data::New1(uString::Const("items_dtl"));
    ::g::Fuse::Reactive::Data* temp56 = ::g::Fuse::Reactive::Data::New1(uString::Const("line_add_btn"));
    ::g::Fuse::Controls::Rectangle* temp17 = ::g::Fuse::Controls::Rectangle::New3();
    temp17_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(temp17, SubPage_appr::__selector2_);
    ::g::Fuse::Reactive::Data* temp57 = ::g::Fuse::Reactive::Data::New1(::STRINGS[29/*"chk_bp_cd"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp18 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp18_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(temp18, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp58 = ::g::Fuse::Reactive::Data::New1(uString::Const("apprBtn1flag"));
    confirmAbandon1 = ::g::Confirm_msg::New4();
    confirmAbandon1_Show_inst = ::g::HSMRO_Confirm_msg_Show_Property::New1(confirmAbandon1, SubPage_appr::__selector0_);
    ::g::Fuse::Triggers::WhileTrue* temp19 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp19_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(temp19, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp59 = ::g::Fuse::Reactive::Data::New1(uString::Const("apprBtn1flag"));
    confirmAbandon2 = ::g::Confirm::New4();
    confirmAbandon2_Show_inst = ::g::HSMRO_Confirm_Show_Property::New1(confirmAbandon2, SubPage_appr::__selector0_);
    ::g::Fuse::Triggers::WhileTrue* temp20 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp20_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(temp20, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp60 = ::g::Fuse::Reactive::Data::New1(uString::Const("apprBtn3flag"));
    confirmAbandon4 = ::g::Confirm::New4();
    confirmAbandon4_Show_inst = ::g::HSMRO_Confirm_Show_Property::New1(confirmAbandon4, SubPage_appr::__selector0_);
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New3();
    temp21_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp21, SubPage_appr::__selector3_);
    ::g::Fuse::Reactive::Data* temp61 = ::g::Fuse::Reactive::Data::New1(uString::Const("APP_NO"));
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SubPage_appr::__g_static_nametable1_);
    ::g::Fuse::Triggers::OnBackButton* temp62 = ::g::Fuse::Triggers::OnBackButton::New3();
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp22);
    ::g::Handler* temp63 = ::g::Handler::New3();
    temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp23);
    ::g::Handler* temp64 = ::g::Handler::New3();
    temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp24);
    ::g::Handler_return* temp65 = ::g::Handler_return::New3();
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp25);
    ::g::Fuse::Reactive::DataBinding* temp66 = ::g::Fuse::Reactive::DataBinding::New1(confirmAbandon3_Show_inst, (uObject*)temp26, 3);
    ::g::Fuse::Controls::DockPanel* temp67 = ::g::Fuse::Controls::DockPanel::New4();
    pizzaSel = ::g::Fuse::Selection::Selection::New2();
    ::g::Fuse::Controls::DockPanel* temp68 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::ScrollView* temp69 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp70 = ::g::Fuse::Controls::StackPanel::New4();
    SubPage_appr__Template* temp71 = SubPage_appr__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp72 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp27, 3);
    ::g::Fuse::Controls::DockPanel* temp73 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp74 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Button* temp75 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp76 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp77 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp78 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), line_pop_Visibility_inst);
    temp_eb14 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp28);
    ::g::Fuse::Controls::Rectangle* temp79 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Button* temp80 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp81 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp82 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp83 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), line_pop_Visibility_inst);
    ::g::Fuse::Controls::DockPanel* temp84 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Button* temp85 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Image* temp86 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp87 = ::g::Fuse::Controls::Text::New3();
    temp_eb15 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp29);
    ::g::Fuse::Controls::DockPanel* temp88 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::ScrollView* temp89 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::DockPanel* temp90 = ::g::Fuse::Controls::DockPanel::New4();
    SubPage_appr__Template1* temp91 = SubPage_appr__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp92 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp30, 3);
    ::g::Fuse::Controls::DockPanel* temp93 = ::g::Fuse::Controls::DockPanel::New4();
    SubPage_appr__Template2* temp94 = SubPage_appr__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp95 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Items_inst, (uObject*)temp31, 3);
    ::g::Fuse::Controls::Rectangle* temp96 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::DockPanel* temp97 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::ScrollView* temp98 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::DockPanel* temp99 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp100 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Triggers::WhileTrue* temp101 = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Controls::Text* temp102 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp103 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp32, 3);
    ::g::Fuse::Controls::Text* temp104 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp105 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp33, 3);
    ::g::Fuse::Controls::Text* temp106 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp107 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp34, 3);
    ::g::Fuse::Controls::Text* temp108 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp109 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp35, 3);
    ::g::Fuse::Controls::Text* temp110 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp111 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp36, 3);
    ::g::Fuse::Controls::Text* temp112 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp113 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp37, 3);
    ::g::Fuse::Controls::Text* temp114 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp115 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp41, 3);
    ::g::Fuse::Controls::Text* temp116 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp117 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp42, 3);
    temp_eb16 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp43);
    ::g::Fuse::Controls::Text* temp118 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp119 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Value_inst, (uObject*)temp44, 3);
    temp_eb17 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp45);
    ::g::Fuse::Controls::Text* temp120 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp121 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Value_inst, (uObject*)temp46, 3);
    temp_eb18 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp47);
    ::g::Fuse::Reactive::DataBinding* temp122 = ::g::Fuse::Reactive::DataBinding::New1(temp13_Value_inst, (uObject*)temp48, 3);
    ::g::Fuse::Reactive::DataBinding* temp123 = ::g::Fuse::Reactive::DataBinding::New1(temp14_Value_inst, (uObject*)temp49, 3);
    ::g::Fuse::Reactive::DataBinding* temp124 = ::g::Fuse::Reactive::DataBinding::New1(temp15_Value_inst, (uObject*)temp50, 3);
    ::g::Fuse::Reactive::DataBinding* temp125 = ::g::Fuse::Reactive::DataBinding::New1(FILE_FLAG_Value_inst, (uObject*)temp54, 3);
    ::g::Fuse::Drawing::Stroke* temp126 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp127 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9176471f, 0.9215686f, 0.972549f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp128 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::DockPanel* temp129 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::ScrollView* temp130 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp131 = ::g::Fuse::Controls::StackPanel::New4();
    SubPage_appr__Template3* temp132 = SubPage_appr__Template3::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp133 = ::g::Fuse::Reactive::DataBinding::New1(temp16_Items_inst, (uObject*)temp55, 3);
    ::g::Fuse::Drawing::Stroke* temp134 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::StackPanel* temp135 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Button* temp136 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp137 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp138 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp139 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), line_pop_Visibility_inst);
    temp_eb19 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp56);
    ::g::Fuse::Reactive::DataBinding* temp140 = ::g::Fuse::Reactive::DataBinding::New1(temp17_Visibility_inst, (uObject*)temp57, 3);
    ::g::Fuse::Reactive::DataBinding* temp141 = ::g::Fuse::Reactive::DataBinding::New1(temp18_Value_inst, (uObject*)temp58, 3);
    ::g::Fuse::Controls::Rectangle* temp142 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Button* temp143 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp144 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp145 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp146 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), confirmAbandon1_Show_inst);
    ::g::Fuse::Reactive::DataBinding* temp147 = ::g::Fuse::Reactive::DataBinding::New1(temp19_Value_inst, (uObject*)temp59, 3);
    ::g::Fuse::Triggers::WhileTrue* temp148 = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Controls::Rectangle* temp149 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Button* temp150 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp151 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp152 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp153 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), confirmAbandon2_Show_inst);
    ::g::Fuse::Controls::Rectangle* temp154 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Button* temp155 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp156 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp157 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp158 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), confirmAbandon3_Show_inst);
    ::g::Fuse::Reactive::DataBinding* temp159 = ::g::Fuse::Reactive::DataBinding::New1(temp20_Value_inst, (uObject*)temp60, 3);
    ::g::Fuse::Triggers::WhileTrue* temp160 = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Controls::Button* temp161 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp162 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp163 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp164 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), confirmAbandon4_Show_inst);
    ::g::Fuse::Reactive::DataBinding* temp165 = ::g::Fuse::Reactive::DataBinding::New1(temp21_Value_inst, (uObject*)temp61, 3);
    ::g::Fuse::Reactive::JavaScript* temp166 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    Height(::g::Uno::UX::Size__New1(100.0f, 4));
    Padding(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp62->SourceLineNumber(2);
    temp62->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp62->add_Handler(uDelegate::New(::g::Fuse::Triggers::KeyPressHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb10);
    temp22->SourceLineNumber(2);
    temp22->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    uPtr(confirmAbandon1)->Show(false);
    uPtr(confirmAbandon1)->Text(uString::Const("\352\262\260\354\236\254\355\225\230\354\213\234\352\262\240\354\212\265\353\213\210\352\271\214?"));
    uPtr(confirmAbandon1)->Name(SubPage_appr::__selector4_);
    uPtr(confirmAbandon1)->SourceLineNumber(4);
    uPtr(confirmAbandon1)->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmAbandon1)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    temp63->SourceLineNumber(5);
    temp63->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp63->add_Handler(uDelegate::New(::g::Fuse::UserEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb11)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb11);
    temp23->SourceLineNumber(5);
    temp23->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    uPtr(confirmAbandon2)->Show(false);
    uPtr(confirmAbandon2)->Text(uString::Const("\352\262\260\354\236\254\354\267\250\354\206\214\355\225\230\354\213\234\352\262\240\354\212\265\353\213\210\352\271\214?"));
    uPtr(confirmAbandon2)->Name(SubPage_appr::__selector5_);
    uPtr(confirmAbandon2)->SourceLineNumber(7);
    uPtr(confirmAbandon2)->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmAbandon2)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    temp64->SourceLineNumber(8);
    temp64->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp64->add_Handler(uDelegate::New(::g::Fuse::UserEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb12)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb12);
    temp24->SourceLineNumber(8);
    temp24->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    uPtr(confirmAbandon3)->Text(uString::Const("\353\260\230\353\240\244\355\225\230\354\213\234\352\262\240\354\212\265\353\213\210\352\271\214?"));
    uPtr(confirmAbandon3)->Name(SubPage_appr::__selector6_);
    uPtr(confirmAbandon3)->SourceLineNumber(10);
    uPtr(confirmAbandon3)->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmAbandon3)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmAbandon3)->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp66);
    temp65->SourceLineNumber(11);
    temp65->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp65->add_Handler(uDelegate::New(::g::Fuse::UserEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb13);
    temp25->SourceLineNumber(11);
    temp25->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp26->SourceLineNumber(10);
    temp26->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    uPtr(confirmAbandon4)->Show(false);
    uPtr(confirmAbandon4)->Text(uString::Const("\353\260\230\353\240\244\354\267\250\354\206\214\355\225\230\354\213\234\352\262\240\354\212\265\353\213\210\352\271\214?"));
    uPtr(confirmAbandon4)->Name(SubPage_appr::__selector7_);
    uPtr(confirmAbandon4)->SourceLineNumber(13);
    uPtr(confirmAbandon4)->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp67->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp67->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp67->Alignment(0);
    temp67->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp67->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp67->SourceLineNumber(15);
    temp67->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), line_pop);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp93);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp135);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    uPtr(line_pop)->Color(::g::Uno::Float4__New2(0.8431373f, 0.8431373f, 0.8431373f, 0.9921569f));
    uPtr(line_pop)->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(line_pop)->Height(::g::Uno::UX::Size__New1(55.0f, 4));
    uPtr(line_pop)->Alignment(0);
    uPtr(line_pop)->Visibility(2);
    uPtr(line_pop)->Layer(2);
    uPtr(line_pop)->Name(SubPage_appr::__selector8_);
    uPtr(line_pop)->SourceLineNumber(17);
    uPtr(line_pop)->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(line_pop, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(line_pop)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), pizzaSel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(line_pop)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    uPtr(pizzaSel)->MinCount(1);
    uPtr(pizzaSel)->MaxCount(1);
    uPtr(pizzaSel)->Name(SubPage_appr::__selector9_);
    uPtr(pizzaSel)->SourceLineNumber(42);
    uPtr(pizzaSel)->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp68->SourceLineNumber(44);
    temp68->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    temp69->Alignment(0);
    temp69->SourceLineNumber(45);
    temp69->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp69, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    temp70->ItemSpacing(5.0f);
    temp70->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp70->SourceLineNumber(46);
    temp70->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->SourceLineNumber(47);
    temp->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp72);
    temp27->SourceLineNumber(47);
    temp27->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp73->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp73->Alignment(10);
    temp73->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp73->SourceLineNumber(52);
    temp73->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp73, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp73->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp73->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp79);
    temp74->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp74->Color(::g::Uno::Float4__New2(0.6666667f, 1.0f, 0.6666667f, 1.0f));
    temp74->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp74->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp74->Alignment(0);
    temp74->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 5.0f, 0.0f));
    temp74->SourceLineNumber(53);
    temp74->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp74, 0);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp74, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb14)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb14);
    temp75->Alignment(0);
    temp75->SourceLineNumber(54);
    temp75->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp75, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    temp76->Value(uString::Const("\354\266\224 \352\260\200"));
    temp76->Alignment(10);
    temp76->SourceLineNumber(55);
    temp76->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp76->Font(::g::MainView::AGOTHIC14());
    temp77->SourceLineNumber(56);
    temp77->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp78);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp78, uCRef<int32_t>(2));
    temp78->SourceLineNumber(57);
    temp78->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp28->SourceLineNumber(53);
    temp28->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp79->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp79->Color(::g::Uno::Float4__New2(0.945098f, 0.9411765f, 0.9411765f, 1.0f));
    temp79->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp79->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp79->Alignment(0);
    temp79->SourceLineNumber(61);
    temp79->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp79, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    temp80->Alignment(0);
    temp80->SourceLineNumber(62);
    temp80->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp80, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp82);
    temp81->Value(uString::Const("\353\213\253 \352\270\260"));
    temp81->Alignment(10);
    temp81->SourceLineNumber(63);
    temp81->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp81->Font(::g::MainView::AGOTHIC14());
    temp82->SourceLineNumber(64);
    temp82->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp83);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp83, uCRef<int32_t>(2));
    temp83->SourceLineNumber(65);
    temp83->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp84->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp84->Alignment(0);
    temp84->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, -15.0f));
    temp84->SourceLineNumber(73);
    temp84->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp84, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp88);
    temp85->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp85->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp85->Alignment(9);
    temp85->Margin(::g::Uno::Float4__New2(10.0f, 7.0f, 0.0f, 0.0f));
    temp85->SourceLineNumber(74);
    temp85->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp85, 0);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp85, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb15)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb15);
    temp86->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp86->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp86->Alignment(9);
    temp86->SourceLineNumber(75);
    temp86->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp86->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::backeb15b2d1()));
    temp87->Value(uString::Const("BACK"));
    temp87->TextWrapping(0);
    temp87->FontSize(18.0f);
    temp87->TextAlignment(0);
    temp87->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp87->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp87->Alignment(0);
    temp87->Visibility(2);
    temp87->Margin(::g::Uno::Float4__New2(25.0f, 5.0f, 0.0f, 0.0f));
    temp87->SourceLineNumber(76);
    temp87->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp29->SourceLineNumber(74);
    temp29->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp88->SourceLineNumber(78);
    temp88->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp88, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp89);
    temp89->SnapMinTransform(true);
    temp89->SnapMaxTransform(true);
    temp89->AllowedScrollDirections(3);
    temp89->Alignment(0);
    temp89->SourceLineNumber(82);
    temp89->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp89->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp90);
    temp90->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp90->Alignment(3);
    temp90->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp90->SourceLineNumber(83);
    temp90->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp90, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp1->SourceLineNumber(84);
    temp1->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp92);
    temp30->SourceLineNumber(84);
    temp30->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp93->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp93->SourceLineNumber(112);
    temp93->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp93, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp128);
    temp2->SourceLineNumber(113);
    temp2->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp95);
    temp31->SourceLineNumber(113);
    temp31->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp96->Height(::g::Uno::UX::Size__New1(40.0f, 4));
    temp96->Padding(::g::Uno::Float4__New2(7.0f, 7.0f, 7.0f, 7.0f));
    temp96->SourceLineNumber(126);
    temp96->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp96, 2);
    temp96->Background(temp127);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Strokes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp126);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp97);
    temp97->Alignment(0);
    temp97->SourceLineNumber(127);
    temp97->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp97->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp98);
    temp98->SnapMinTransform(false);
    temp98->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp98->Alignment(0);
    temp98->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp98->SourceLineNumber(128);
    temp98->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp98, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp99);
    temp99->Height(::g::Uno::UX::Size__New1(200.0f, 4));
    temp99->Alignment(0);
    temp99->SourceLineNumber(129);
    temp99->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp99->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp100);
    temp100->Rows(uString::Const("auto, auto, auto, auto, auto, auto"));
    temp100->Columns(uString::Const("80, auto"));
    temp100->ColumnCount(2);
    temp100->CellSpacing(7.0f);
    temp100->Alignment(0);
    temp100->SourceLineNumber(130);
    temp100->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp100, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp106);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp108);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp112);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp114);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), FILE_FLAG);
    temp101->Value1(false);
    temp101->SourceLineNumber(131);
    temp101->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp102->Value(uString::Const("\353\260\230\353\240\244\354\202\254\354\234\240"));
    temp102->FontSize(13.0f);
    temp102->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp102->Alignment(0);
    temp102->SourceLineNumber(132);
    temp102->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp102, 2);
    temp102->Font(::g::MainView::AGOTHIC14());
    temp3->TextWrapping(1);
    temp3->FontSize(13.0f);
    temp3->TextAlignment(0);
    temp3->TextColor(::g::Uno::Float4__New2(0.7176471f, 0.1568628f, 0.2431373f, 1.0f));
    temp3->Alignment(0);
    temp3->SourceLineNumber(133);
    temp3->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 2);
    temp3->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp103);
    temp32->SourceLineNumber(133);
    temp32->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp104->Value(uString::Const("\352\270\260\354\225\210\354\236\220"));
    temp104->FontSize(13.0f);
    temp104->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp104->Alignment(0);
    temp104->SourceLineNumber(136);
    temp104->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp104, 2);
    temp104->Font(::g::MainView::AGOTHIC14());
    temp4->FontSize(13.0f);
    temp4->TextAlignment(0);
    temp4->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp4->Alignment(0);
    temp4->SourceLineNumber(137);
    temp4->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 2);
    temp4->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp105);
    temp33->SourceLineNumber(137);
    temp33->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp106->Value(uString::Const("\352\270\260\354\225\210\354\235\274\354\213\234"));
    temp106->FontSize(13.0f);
    temp106->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp106->Alignment(0);
    temp106->SourceLineNumber(138);
    temp106->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp106, 2);
    temp106->Font(::g::MainView::AGOTHIC14());
    temp5->FontSize(13.0f);
    temp5->TextAlignment(0);
    temp5->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp5->Alignment(0);
    temp5->SourceLineNumber(139);
    temp5->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp5, 2);
    temp5->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp107);
    temp34->SourceLineNumber(139);
    temp34->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp108->Value(uString::Const("\354\240\234\353\252\251"));
    temp108->FontSize(13.0f);
    temp108->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp108->Alignment(0);
    temp108->SourceLineNumber(140);
    temp108->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp108, 2);
    temp108->Font(::g::MainView::AGOTHIC14());
    temp6->FontSize(13.0f);
    temp6->TextAlignment(0);
    temp6->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp6->Alignment(0);
    temp6->SourceLineNumber(141);
    temp6->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp6, 2);
    temp6->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp109);
    temp35->SourceLineNumber(141);
    temp35->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp110->Value(uString::Const("\353\202\264\354\232\251"));
    temp110->FontSize(13.0f);
    temp110->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp110->Alignment(0);
    temp110->SourceLineNumber(142);
    temp110->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp110, 2);
    temp110->Font(::g::MainView::AGOTHIC14());
    temp7->TextWrapping(1);
    temp7->FontSize(13.0f);
    temp7->TextAlignment(0);
    temp7->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp7->Alignment(0);
    temp7->Layer(2);
    temp7->SourceLineNumber(143);
    temp7->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp7, 4);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp7, 2);
    temp7->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp111);
    temp36->SourceLineNumber(143);
    temp36->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp112->Value(uString::Const("\353\260\234\354\243\274\353\262\210\355\230\270"));
    temp112->FontSize(13.0f);
    temp112->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp112->Alignment(0);
    temp112->SourceLineNumber(144);
    temp112->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp112, 2);
    temp112->Font(::g::MainView::AGOTHIC14());
    temp8->FontSize(13.0f);
    temp8->TextAlignment(0);
    temp8->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp8->Alignment(0);
    temp8->SourceLineNumber(145);
    temp8->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp8, 2);
    temp8->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp113);
    temp37->SourceLineNumber(145);
    temp37->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp114->Value(uString::Const("\354\264\235 \353\260\234\354\243\274\352\270\210\354\225\241"));
    temp114->FontSize(13.0f);
    temp114->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp114->Alignment(0);
    temp114->SourceLineNumber(146);
    temp114->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp114, 2);
    temp114->Font(::g::MainView::AGOTHIC14());
    temp9->FontSize(13.0f);
    temp9->TextAlignment(0);
    temp9->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp9->Alignment(0);
    temp9->SourceLineNumber(147);
    temp9->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp9, 2);
    temp9->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp115);
    temp41->SourceLineNumber(147);
    temp41->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp38->SourceLineNumber(147);
    temp38->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp40->SourceLineNumber(147);
    temp40->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    uPtr(FILE_FLAG)->Name(SubPage_appr::__selector10_);
    uPtr(FILE_FLAG)->SourceLineNumber(152);
    uPtr(FILE_FLAG)->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(FILE_FLAG)->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp116);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(FILE_FLAG)->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(FILE_FLAG)->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(FILE_FLAG)->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(FILE_FLAG)->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp120);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(FILE_FLAG)->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(FILE_FLAG)->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(FILE_FLAG)->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(FILE_FLAG)->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(FILE_FLAG)->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp125);
    temp116->Value(uString::Const("\354\262\250\353\266\200\355\214\214\354\235\2741"));
    temp116->FontSize(11.0f);
    temp116->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp116->Alignment(0);
    temp116->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    temp116->SourceLineNumber(153);
    temp116->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp116, 2);
    temp116->Font(::g::MainView::AGOTHIC14());
    temp10->FontSize(11.0f);
    temp10->TextAlignment(0);
    temp10->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp10->Alignment(0);
    temp10->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    temp10->SourceLineNumber(154);
    temp10->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp10, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp10, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb16)));
    temp10->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp117);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb16);
    temp42->SourceLineNumber(154);
    temp42->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp43->SourceLineNumber(154);
    temp43->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp118->Value(uString::Const("\354\262\250\353\266\200\355\214\214\354\235\2742"));
    temp118->FontSize(11.0f);
    temp118->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp118->Alignment(0);
    temp118->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    temp118->SourceLineNumber(155);
    temp118->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp118, 2);
    temp118->Font(::g::MainView::AGOTHIC14());
    temp11->FontSize(11.0f);
    temp11->TextAlignment(0);
    temp11->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp11->Alignment(0);
    temp11->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    temp11->SourceLineNumber(156);
    temp11->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp11, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp11, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb17)));
    temp11->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp119);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb17);
    temp44->SourceLineNumber(156);
    temp44->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp45->SourceLineNumber(156);
    temp45->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp120->Value(uString::Const("\354\262\250\353\266\200\355\214\214\354\235\2743"));
    temp120->FontSize(11.0f);
    temp120->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp120->Alignment(0);
    temp120->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    temp120->SourceLineNumber(157);
    temp120->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp120, 2);
    temp120->Font(::g::MainView::AGOTHIC14());
    temp12->FontSize(11.0f);
    temp12->TextAlignment(0);
    temp12->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp12->Alignment(0);
    temp12->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    temp12->SourceLineNumber(158);
    temp12->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp12, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp12, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb18)));
    temp12->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb18);
    temp46->SourceLineNumber(158);
    temp46->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp47->SourceLineNumber(158);
    temp47->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp13->FontSize(13.0f);
    temp13->TextAlignment(0);
    temp13->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp13->Alignment(0);
    temp13->Visibility(2);
    temp13->SourceLineNumber(160);
    temp13->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp13, 2);
    temp13->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp122);
    temp48->SourceLineNumber(160);
    temp48->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp14->FontSize(13.0f);
    temp14->TextAlignment(0);
    temp14->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp14->Alignment(0);
    temp14->Visibility(2);
    temp14->SourceLineNumber(161);
    temp14->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp14, 2);
    temp14->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp123);
    temp49->SourceLineNumber(161);
    temp49->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp15->FontSize(13.0f);
    temp15->TextAlignment(0);
    temp15->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp15->Alignment(0);
    temp15->Visibility(2);
    temp15->SourceLineNumber(162);
    temp15->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp15, 2);
    temp15->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp124);
    temp50->SourceLineNumber(162);
    temp50->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp54->SourceLineNumber(152);
    temp54->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp51->SourceLineNumber(152);
    temp51->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp53->SourceLineNumber(152);
    temp53->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp126->Color(::g::Uno::Float4__New2(0.4666667f, 0.4784314f, 0.6745098f, 1.0f));
    temp126->Width(1.0f);
    temp128->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp128->SourceLineNumber(176);
    temp128->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp128, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Strokes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp134);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp129);
    temp129->SourceLineNumber(177);
    temp129->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp129->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp130);
    temp130->SnapMinTransform(false);
    temp130->SnapMaxTransform(false);
    temp130->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp130->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp130->SourceLineNumber(178);
    temp130->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp130, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp130->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp131);
    temp131->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp131->SourceLineNumber(179);
    temp131->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp16->SourceLineNumber(193);
    temp16->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp132);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp133);
    temp55->SourceLineNumber(193);
    temp55->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp134->Color(::g::Uno::Float4__New2(0.4666667f, 0.4784314f, 0.6745098f, 1.0f));
    temp134->Width(1.0f);
    temp135->Orientation(0);
    temp135->ItemSpacing(5.0f);
    temp135->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp135->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp135->Alignment(0);
    temp135->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp135->SourceLineNumber(230);
    temp135->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp135, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp148);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp160);
    temp18->SourceLineNumber(231);
    temp18->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp141);
    temp17->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp17->Color(::g::Uno::Float4__New2(0.7058824f, 0.827451f, 0.9843137f, 1.0f));
    temp17->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp17->Alignment(0);
    temp17->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 60.0f, 0.0f));
    temp17->SourceLineNumber(232);
    temp17->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp17, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb19)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp136);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp140);
    temp136->Alignment(0);
    temp136->SourceLineNumber(233);
    temp136->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp136, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp137);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp138);
    temp137->Value(uString::Const("\352\262\260\354\236\254\354\266\224\352\260\200"));
    temp137->Alignment(10);
    temp137->SourceLineNumber(234);
    temp137->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp137->Font(::g::MainView::AGOTHIC14());
    temp138->SourceLineNumber(235);
    temp138->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp138->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp139);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp139, uCRef<int32_t>(0));
    temp139->SourceLineNumber(236);
    temp139->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp56->SourceLineNumber(232);
    temp56->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp57->SourceLineNumber(232);
    temp57->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp58->SourceLineNumber(231);
    temp58->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp19->SourceLineNumber(241);
    temp19->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp142);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp147);
    temp142->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp142->Color(::g::Uno::Float4__New2(0.6627451f, 0.8823529f, 0.6392157f, 1.0f));
    temp142->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp142->Alignment(0);
    temp142->SourceLineNumber(242);
    temp142->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp142->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp143);
    temp143->Alignment(0);
    temp143->SourceLineNumber(243);
    temp143->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp143, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp144);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp145);
    temp144->Value(uString::Const("\352\262\260 \354\236\254"));
    temp144->Alignment(10);
    temp144->SourceLineNumber(244);
    temp144->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp144->Font(::g::MainView::AGOTHIC14());
    temp145->SourceLineNumber(245);
    temp145->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp145->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp146);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp146, uCRef(true));
    temp146->SourceLineNumber(246);
    temp146->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp59->SourceLineNumber(241);
    temp59->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp148->Value1(false);
    temp148->SourceLineNumber(251);
    temp148->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp148->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp149);
    temp149->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp149->Color(::g::Uno::Float4__New2(0.9333333f, 0.7607843f, 0.7921569f, 1.0f));
    temp149->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp149->Alignment(0);
    temp149->SourceLineNumber(252);
    temp149->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp150);
    temp150->Alignment(0);
    temp150->SourceLineNumber(253);
    temp150->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp150, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp151);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp152);
    temp151->Value(uString::Const("\352\262\260\354\236\254\354\267\250\354\206\214"));
    temp151->Alignment(10);
    temp151->SourceLineNumber(254);
    temp151->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp151->Font(::g::MainView::AGOTHIC14());
    temp152->SourceLineNumber(255);
    temp152->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp152->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp153);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp153, uCRef(true));
    temp153->SourceLineNumber(256);
    temp153->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp20->SourceLineNumber(262);
    temp20->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp154);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp159);
    temp154->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp154->Color(::g::Uno::Float4__New2(0.9333333f, 0.7607843f, 0.7921569f, 1.0f));
    temp154->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp154->Alignment(0);
    temp154->SourceLineNumber(263);
    temp154->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp155);
    temp155->Alignment(0);
    temp155->SourceLineNumber(264);
    temp155->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp155, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp155->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp156);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp155->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp157);
    temp156->Value(uString::Const("\353\260\230 \353\240\244"));
    temp156->Alignment(10);
    temp156->SourceLineNumber(265);
    temp156->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp156->Font(::g::MainView::AGOTHIC14());
    temp157->SourceLineNumber(266);
    temp157->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp158);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp158, uCRef(true));
    temp158->SourceLineNumber(267);
    temp158->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp60->SourceLineNumber(262);
    temp60->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp160->Value1(false);
    temp160->SourceLineNumber(272);
    temp160->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp160->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp161);
    temp161->Alignment(0);
    temp161->SourceLineNumber(273);
    temp161->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp161, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp161->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp162);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp161->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp163);
    temp162->Value(uString::Const("\353\260\230\353\240\244\354\267\250\354\206\214"));
    temp162->SourceLineNumber(274);
    temp162->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp163->SourceLineNumber(275);
    temp163->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp163->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp164);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp164, uCRef(true));
    temp164->SourceLineNumber(276);
    temp164->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp21->TextWrapping(0);
    temp21->FontSize(18.0f);
    temp21->TextAlignment(0);
    temp21->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp21->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp21->Alignment(0);
    temp21->Visibility(2);
    temp21->Margin(::g::Uno::Float4__New2(25.0f, 5.0f, 0.0f, 0.0f));
    temp21->SourceLineNumber(282);
    temp21->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp21, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp165);
    temp61->SourceLineNumber(282);
    temp61->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp166->Code(uString::Const("\n"
        "\t\texports.title = this.Parameter.map(function(param) {\n"
        "\t\t\treturn param.title;\n"
        "\t\t});\n"
        "\t"));
    temp166->LineNumber(285);
    temp166->FileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp166->SourceLineNumber(285);
    temp166->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), confirmAbandon1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), confirmAbandon2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), confirmAbandon3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), confirmAbandon4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), line_pop);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), pizzaSel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), FILE_FLAG);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), confirmAbandon1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), confirmAbandon2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), confirmAbandon3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), confirmAbandon4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp166);
}

// public SubPage_appr New(Fuse.Navigation.Router router) [static]
SubPage_appr* SubPage_appr::New5(::g::Fuse::Navigation::Router* router1)
{
    SubPage_appr* obj1 = (SubPage_appr*)uNew(SubPage_appr_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/SubPage_appr.g.uno
// ---------------------------------------------------------------------------------

// public partial sealed class SubPage_appr.Template
// {
// static Template()
static void SubPage_appr__Template__cctor__fn(uType* __type)
{
    SubPage_appr__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"USR_NM"*/]);
    SubPage_appr__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"USR_ID"*/]);
}

static void SubPage_appr__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("USR_NM");
    ::STRINGS[1] = uString::Const("USR_ID");
    ::STRINGS[2] = uString::Const("line_nm");
    ::STRINGS[3] = uString::Const("line_id");
    ::STRINGS[4] = uString::Const("Pages/Menu_Customer/SubPage_appr.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::SubPage_appr_typeof(), offsetof(SubPage_appr__Template, __parent1), uFieldFlagsWeak,
        ::g::SubPage_appr_typeof(), offsetof(SubPage_appr__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template, __self_USR_NM_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template, __self_USR_ID_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr__Template::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SubPage_appr__Template__New2_fn, 0, true, type, 2, ::g::SubPage_appr_typeof(), ::g::SubPage_appr_typeof()));
}

::g::Uno::UX::Template_type* SubPage_appr__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(SubPage_appr__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("SubPage_appr.Template", options);
    type->fp_build_ = SubPage_appr__Template_build;
    type->fp_cctor_ = SubPage_appr__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))SubPage_appr__Template__New1_fn;
    return type;
}

// public Template(SubPage_appr parent, SubPage_appr parentInstance)
void SubPage_appr__Template__ctor_1_fn(SubPage_appr__Template* __this, ::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void SubPage_appr__Template__New1_fn(SubPage_appr__Template* __this, uObject** __retval)
{
    uStackFrame __("SubPage_appr.Template", "New()");
    ::g::ListType* __self1 = ::g::ListType::New5();
    __this->__self_USR_NM_inst1 = ::g::HSMRO_ListType_USR_NM_Property::New1(__self1, SubPage_appr__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"line_nm"*/]);
    __this->__self_USR_ID_inst1 = ::g::HSMRO_ListType_USR_ID_Property::New1(__self1, SubPage_appr__Template::__selector1_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"line_id"*/]);
    ::g::Fuse::Reactive::DataBinding* temp2 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_USR_NM_inst1, (uObject*)temp, 3);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_USR_ID_inst1, (uObject*)temp1, 3);
    __self1->SourceLineNumber(48);
    __self1->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp->SourceLineNumber(48);
    temp->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp1->SourceLineNumber(48);
    temp1->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    return *__retval = __self1, void();
}

// public Template New(SubPage_appr parent, SubPage_appr parentInstance)
void SubPage_appr__Template__New2_fn(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance, SubPage_appr__Template** __retval)
{
    *__retval = SubPage_appr__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector SubPage_appr__Template::__selector0_;
::g::Uno::UX::Selector SubPage_appr__Template::__selector1_;

// public Template(SubPage_appr parent, SubPage_appr parentInstance) [instance]
void SubPage_appr__Template::ctor_1(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(SubPage_appr parent, SubPage_appr parentInstance) [static]
SubPage_appr__Template* SubPage_appr__Template::New2(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance)
{
    SubPage_appr__Template* obj1 = (SubPage_appr__Template*)uNew(SubPage_appr__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/SubPage_appr.g.uno
// ---------------------------------------------------------------------------------

// public partial sealed class SubPage_appr.Template1
// {
// static Template1()
static void SubPage_appr__Template1__cctor__fn(uType* __type)
{
    SubPage_appr__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Value"*/]);
    SubPage_appr__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Visibility"*/]);
}

static void SubPage_appr__Template1_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Value");
    ::STRINGS[6] = uString::Const("Visibility");
    ::STRINGS[7] = uString::Const("APP_USR_TYPE");
    ::STRINGS[8] = uString::Const("ok_flag_visible");
    ::STRINGS[9] = uString::Const("ok_flag");
    ::STRINGS[10] = uString::Const("return_flag_visible");
    ::STRINGS[11] = uString::Const("return_flag");
    ::STRINGS[0] = uString::Const("USR_NM");
    ::STRINGS[12] = uString::Const("JIKGUB");
    ::STRINGS[13] = uString::Const("APP_DT");
    ::STRINGS[4] = uString::Const("Pages/Menu_Customer/SubPage_appr.ux");
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::HSMRO_bundle_typeof(),
        ::g::MainView_typeof());
    type->SetFields(2,
        ::g::SubPage_appr_typeof(), offsetof(SubPage_appr__Template1, __parent1), uFieldFlagsWeak,
        ::g::SubPage_appr_typeof(), offsetof(SubPage_appr__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(SubPage_appr__Template1, temp1_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr__Template1, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(SubPage_appr__Template1, temp3_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SubPage_appr__Template1, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template1, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template1, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template1, temp7_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr__Template1::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SubPage_appr__Template1__New2_fn, 0, true, type, 2, ::g::SubPage_appr_typeof(), ::g::SubPage_appr_typeof()));
}

::g::Uno::UX::Template_type* SubPage_appr__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 14;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(SubPage_appr__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("SubPage_appr.Template1", options);
    type->fp_build_ = SubPage_appr__Template1_build;
    type->fp_cctor_ = SubPage_appr__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))SubPage_appr__Template1__New1_fn;
    return type;
}

// public Template1(SubPage_appr parent, SubPage_appr parentInstance)
void SubPage_appr__Template1__ctor_1_fn(SubPage_appr__Template1* __this, ::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void SubPage_appr__Template1__New1_fn(SubPage_appr__Template1* __this, uObject** __retval)
{
    uStackFrame __("SubPage_appr.Template1", "New()");
    ::g::Fuse::Controls::DockPanel* __self1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp, SubPage_appr__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"APP_USR_TYPE"*/]);
    ::g::Fuse::Controls::Image* temp1 = ::g::Fuse::Controls::Image::New3();
    __this->temp1_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(temp1, SubPage_appr__Template1::__selector1_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"ok_flag_vis...*/]);
    ::g::Fuse::Triggers::WhileTrue* temp2 = ::g::Fuse::Triggers::WhileTrue::New2();
    __this->temp2_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(temp2, SubPage_appr__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"ok_flag"*/]);
    ::g::Fuse::Controls::Image* temp3 = ::g::Fuse::Controls::Image::New3();
    __this->temp3_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(temp3, SubPage_appr__Template1::__selector1_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"return_flag...*/]);
    ::g::Fuse::Triggers::WhileTrue* temp4 = ::g::Fuse::Triggers::WhileTrue::New2();
    __this->temp4_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(temp4, SubPage_appr__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"return_flag"*/]);
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    __this->temp5_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp5, SubPage_appr__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[0/*"USR_NM"*/]);
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    __this->temp6_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp6, SubPage_appr__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"JIKGUB"*/]);
    ::g::Fuse::Controls::Text* temp7 = ::g::Fuse::Controls::Text::New3();
    __this->temp7_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp7, SubPage_appr__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"APP_DT"*/]);
    ::g::Fuse::Controls::Rectangle* temp16 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp8, 3);
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Visibility_inst, (uObject*)temp9, 3);
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Value_inst, (uObject*)temp10, 3);
    ::g::Fuse::Reactive::DataBinding* temp20 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp3_Visibility_inst, (uObject*)temp11, 3);
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp4_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Drawing::Stroke* temp22 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Rectangle* temp23 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp5_Value_inst, (uObject*)temp13, 3);
    ::g::Fuse::Controls::Rectangle* temp25 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp6_Value_inst, (uObject*)temp14, 3);
    ::g::Fuse::Controls::Rectangle* temp27 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp7_Value_inst, (uObject*)temp15, 3);
    __self1->Width(::g::Uno::UX::Size__New1(70.0f, 1));
    __self1->MinWidth(::g::Uno::UX::Size__New1(70.0f, 1));
    __self1->MaxWidth(::g::Uno::UX::Size__New1(70.0f, 1));
    __self1->Alignment(0);
    __self1->Margin(::g::Uno::Float4__New2(3.0f, 0.0f, 0.0f, 0.0f));
    __self1->SourceLineNumber(85);
    __self1->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(__self1, 0);
    temp16->Width(::g::Uno::UX::Size__New1(70.0f, 1));
    temp16->MinWidth(::g::Uno::UX::Size__New1(70.0f, 1));
    temp16->MaxWidth(::g::Uno::UX::Size__New1(70.0f, 1));
    temp16->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp16->Padding(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp16->SourceLineNumber(86);
    temp16->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp16, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Strokes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp->FontSize(10.0f);
    temp->SourceLineNumber(87);
    temp->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp8->SourceLineNumber(87);
    temp8->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp2->SourceLineNumber(88);
    temp2->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    temp1->Color(::g::Uno::Float4__New2(0.2745098f, 0.6705883f, 0.09411765f, 1.0f));
    temp1->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp1->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp1->Alignment(0);
    temp1->SourceLineNumber(89);
    temp1->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 2);
    temp1->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::check_appra5f40194()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    temp9->SourceLineNumber(89);
    temp9->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp10->SourceLineNumber(88);
    temp10->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp4->SourceLineNumber(91);
    temp4->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    temp3->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp3->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp3->Alignment(0);
    temp3->SourceLineNumber(92);
    temp3->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 2);
    temp3->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::return4e9a2e44()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp20);
    temp11->SourceLineNumber(92);
    temp11->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp12->SourceLineNumber(91);
    temp12->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp22->Color(::g::Uno::Float4__New2(0.003921569f, 0.0f, 0.0f, 0.3568628f));
    temp22->Width(1.0f);
    temp23->Alignment(0);
    temp23->Margin(::g::Uno::Float4__New2(0.0f, 3.0f, 0.0f, 0.0f));
    temp23->SourceLineNumber(96);
    temp23->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp23, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp5->FontSize(12.0f);
    temp5->TextAlignment(1);
    temp5->SourceLineNumber(97);
    temp5->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp5->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    temp13->SourceLineNumber(97);
    temp13->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp25->Alignment(0);
    temp25->SourceLineNumber(100);
    temp25->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp25, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->FontSize(11.0f);
    temp6->TextAlignment(1);
    temp6->SourceLineNumber(101);
    temp6->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp6->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    temp14->SourceLineNumber(101);
    temp14->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp27->Alignment(0);
    temp27->SourceLineNumber(103);
    temp27->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp7->FontSize(12.0f);
    temp7->TextAlignment(1);
    temp7->SourceLineNumber(104);
    temp7->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp7->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    temp15->SourceLineNumber(104);
    temp15->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    return *__retval = __self1, void();
}

// public Template1 New(SubPage_appr parent, SubPage_appr parentInstance)
void SubPage_appr__Template1__New2_fn(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance, SubPage_appr__Template1** __retval)
{
    *__retval = SubPage_appr__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector SubPage_appr__Template1::__selector0_;
::g::Uno::UX::Selector SubPage_appr__Template1::__selector1_;

// public Template1(SubPage_appr parent, SubPage_appr parentInstance) [instance]
void SubPage_appr__Template1::ctor_1(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(SubPage_appr parent, SubPage_appr parentInstance) [static]
SubPage_appr__Template1* SubPage_appr__Template1::New2(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance)
{
    SubPage_appr__Template1* obj1 = (SubPage_appr__Template1*)uNew(SubPage_appr__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/SubPage_appr.g.uno
// ---------------------------------------------------------------------------------

// public partial sealed class SubPage_appr.Template2
// {
// static Template2()
static void SubPage_appr__Template2__cctor__fn(uType* __type)
{
    SubPage_appr__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Value"*/]);
}

static void SubPage_appr__Template2_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Value");
    ::STRINGS[0] = uString::Const("USR_NM");
    ::STRINGS[14] = uString::Const(" ");
    ::STRINGS[12] = uString::Const("JIKGUB");
    ::STRINGS[15] = uString::Const(" \354\235\230\352\262\254: ");
    ::STRINGS[16] = uString::Const("APP_REMARK");
    ::STRINGS[4] = uString::Const("Pages/Menu_Customer/SubPage_appr.ux");
    ::STRINGS[17] = uString::Const("auto");
    ::STRINGS[18] = uString::Const("auto, auto");
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::MainView_typeof());
    type->SetFields(2,
        ::g::SubPage_appr_typeof(), offsetof(SubPage_appr__Template2, __parent1), uFieldFlagsWeak,
        ::g::SubPage_appr_typeof(), offsetof(SubPage_appr__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template2, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template2, temp1_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr__Template2::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SubPage_appr__Template2__New2_fn, 0, true, type, 2, ::g::SubPage_appr_typeof(), ::g::SubPage_appr_typeof()));
}

::g::Uno::UX::Template_type* SubPage_appr__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SubPage_appr__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("SubPage_appr.Template2", options);
    type->fp_build_ = SubPage_appr__Template2_build;
    type->fp_cctor_ = SubPage_appr__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))SubPage_appr__Template2__New1_fn;
    return type;
}

// public Template2(SubPage_appr parent, SubPage_appr parentInstance)
void SubPage_appr__Template2__ctor_1_fn(SubPage_appr__Template2* __this, ::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void SubPage_appr__Template2__New1_fn(SubPage_appr__Template2* __this, uObject** __retval)
{
    uStackFrame __("SubPage_appr.Template2", "New()");
    ::g::Fuse::Controls::DockPanel* __self1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[0/*"USR_NM"*/]);
    uString* temp3 = ::STRINGS[14/*" "*/];
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(temp3);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"JIKGUB"*/]);
    uString* temp6 = ::STRINGS[15/*" 의견: "*/];
    ::g::Fuse::Reactive::Constant* temp7 = ::g::Fuse::Reactive::Constant::New1(temp6);
    ::g::Fuse::Reactive::Add* temp8 = ::g::Fuse::Reactive::Add::New1(temp5, temp7);
    ::g::Fuse::Reactive::Add* temp9 = ::g::Fuse::Reactive::Add::New1(temp4, temp8);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp, SubPage_appr__Template2::__selector0_);
    ::g::Fuse::Reactive::Add* temp10 = ::g::Fuse::Reactive::Add::New1(temp2, temp9);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp1, SubPage_appr__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"APP_REMARK"*/]);
    ::g::Fuse::Controls::DockPanel* temp12 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::DockPanel* temp13 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp14 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp10, 3);
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Controls::Rectangle* temp17 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp18 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8431373f, 0.7529412f, 0.9843137f, 1.0f));
    __self1->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 3.0f));
    __self1->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    __self1->SourceLineNumber(114);
    __self1->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(__self1, 2);
    temp12->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp12->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp12->SourceLineNumber(115);
    temp12->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp12, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->Alignment(0);
    temp13->SourceLineNumber(116);
    temp13->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp13, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp14->Rows(::STRINGS[17/*"auto"*/]);
    temp14->RowCount(1);
    temp14->Columns(::STRINGS[18/*"auto, auto"*/]);
    temp14->ColumnCount(2);
    temp14->CellSpacing(3.0f);
    temp14->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp14->SourceLineNumber(117);
    temp14->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp->FontSize(13.0f);
    temp->Color(::g::Uno::Float4__New2(0.4039216f, 0.1058824f, 0.5882353f, 1.0f));
    temp->SourceLineNumber(118);
    temp->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp10->SourceLineNumber(118);
    temp10->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp2->SourceLineNumber(118);
    temp2->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp9->SourceLineNumber(118);
    temp9->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp4->SourceLineNumber(118);
    temp4->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp8->SourceLineNumber(118);
    temp8->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp5->SourceLineNumber(118);
    temp5->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp7->SourceLineNumber(118);
    temp7->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp1->TextWrapping(1);
    temp1->FontSize(13.0f);
    temp1->Color(::g::Uno::Float4__New2(0.4039216f, 0.1058824f, 0.5882353f, 1.0f));
    temp1->SourceLineNumber(119);
    temp1->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp1->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    temp11->SourceLineNumber(119);
    temp11->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp17->Color(::g::Uno::Float4__New2(0.6901961f, 0.6980392f, 0.8431373f, 1.0f));
    temp17->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp17->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp17->SourceLineNumber(123);
    temp17->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 2);
    __self1->Background(temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    return *__retval = __self1, void();
}

// public Template2 New(SubPage_appr parent, SubPage_appr parentInstance)
void SubPage_appr__Template2__New2_fn(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance, SubPage_appr__Template2** __retval)
{
    *__retval = SubPage_appr__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector SubPage_appr__Template2::__selector0_;

// public Template2(SubPage_appr parent, SubPage_appr parentInstance) [instance]
void SubPage_appr__Template2::ctor_1(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(SubPage_appr parent, SubPage_appr parentInstance) [static]
SubPage_appr__Template2* SubPage_appr__Template2::New2(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance)
{
    SubPage_appr__Template2* obj1 = (SubPage_appr__Template2*)uNew(SubPage_appr__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/SubPage_appr.g.uno
// ---------------------------------------------------------------------------------

// public partial sealed class SubPage_appr.Template3
// {
// static Template3()
static void SubPage_appr__Template3__cctor__fn(uType* __type)
{
    SubPage_appr__Template3::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Value"*/]);
    SubPage_appr__Template3::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Visibility"*/]);
}

static void SubPage_appr__Template3_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Value");
    ::STRINGS[6] = uString::Const("Visibility");
    ::STRINGS[19] = uString::Const("ORDER_SEQ");
    ::STRINGS[20] = uString::Const(")");
    ::STRINGS[21] = uString::Const("ITEM_CD");
    ::STRINGS[22] = uString::Const("ITEM_NM");
    ::STRINGS[23] = uString::Const("SPEC");
    ::STRINGS[24] = uString::Const("MAKER");
    ::STRINGS[25] = uString::Const("QTY");
    ::STRINGS[26] = uString::Const("UNIT");
    ::STRINGS[27] = uString::Const("PRICE");
    ::STRINGS[28] = uString::Const("\354\233\220");
    ::STRINGS[29] = uString::Const("chk_bp_cd");
    ::STRINGS[30] = uString::Const("ITEM_DT");
    ::STRINGS[31] = uString::Const("AMOUNT");
    ::STRINGS[4] = uString::Const("Pages/Menu_Customer/SubPage_appr.ux");
    ::STRINGS[32] = uString::Const("auto, auto, auto, auto");
    ::STRINGS[17] = uString::Const("auto");
    ::STRINGS[33] = uString::Const("60, 1*, 50, 1*");
    ::STRINGS[34] = uString::Const("\355\222\210\353\252\251\354\275\224\353\223\234");
    ::STRINGS[35] = uString::Const("\355\222\210\353\252\205");
    ::STRINGS[36] = uString::Const("\352\267\234\352\262\251");
    ::STRINGS[37] = uString::Const("\354\240\234\354\241\260\354\202\254");
    ::STRINGS[38] = uString::Const("\353\260\234\354\243\274\354\210\230\353\237\211");
    ::STRINGS[39] = uString::Const("\353\213\250\352\260\200");
    ::STRINGS[40] = uString::Const("\354\203\201\355\222\210\353\223\261\353\241\235\354\235\274");
    ::STRINGS[41] = uString::Const("\353\260\234\354\243\274\352\270\210\354\225\241");
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::MainView_typeof());
    type->SetFields(2,
        ::g::SubPage_appr_typeof(), offsetof(SubPage_appr__Template3, __parent1), uFieldFlagsWeak,
        ::g::SubPage_appr_typeof(), offsetof(SubPage_appr__Template3, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template3, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template3, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template3, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template3, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template3, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template3, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template3, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template3, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(SubPage_appr__Template3, temp8_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template3, temp9_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(SubPage_appr__Template3, temp9_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_appr__Template3, temp10_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr__Template3::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_appr__Template3::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SubPage_appr__Template3__New2_fn, 0, true, type, 2, ::g::SubPage_appr_typeof(), ::g::SubPage_appr_typeof()));
}

::g::Uno::UX::Template_type* SubPage_appr__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 18;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SubPage_appr__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("SubPage_appr.Template3", options);
    type->fp_build_ = SubPage_appr__Template3_build;
    type->fp_cctor_ = SubPage_appr__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))SubPage_appr__Template3__New1_fn;
    return type;
}

// public Template3(SubPage_appr parent, SubPage_appr parentInstance)
void SubPage_appr__Template3__ctor_1_fn(SubPage_appr__Template3* __this, ::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void SubPage_appr__Template3__New1_fn(SubPage_appr__Template3* __this, uObject** __retval)
{
    uStackFrame __("SubPage_appr.Template3", "New()");
    ::g::Fuse::Controls::DockPanel* __self1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"ORDER_SEQ"*/]);
    uString* temp12 = ::STRINGS[20/*")"*/];
    ::g::Fuse::Reactive::Constant* temp13 = ::g::Fuse::Reactive::Constant::New1(temp12);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp, SubPage_appr__Template3::__selector0_);
    ::g::Fuse::Reactive::Add* temp14 = ::g::Fuse::Reactive::Add::New1(temp11, temp13);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp1, SubPage_appr__Template3::__selector0_);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"ITEM_CD"*/]);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    __this->temp2_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp2, SubPage_appr__Template3::__selector0_);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"ITEM_NM"*/]);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    __this->temp3_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp3, SubPage_appr__Template3::__selector0_);
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"SPEC"*/]);
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    __this->temp4_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp4, SubPage_appr__Template3::__selector0_);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[24/*"MAKER"*/]);
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    __this->temp5_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp5, SubPage_appr__Template3::__selector0_);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[25/*"QTY"*/]);
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    __this->temp6_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp6, SubPage_appr__Template3::__selector0_);
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(::STRINGS[26/*"UNIT"*/]);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[27/*"PRICE"*/]);
    uString* temp22 = ::STRINGS[28/*"원"*/];
    ::g::Fuse::Reactive::Constant* temp23 = ::g::Fuse::Reactive::Constant::New1(temp22);
    ::g::Fuse::Controls::Text* temp7 = ::g::Fuse::Controls::Text::New3();
    __this->temp7_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp7, SubPage_appr__Template3::__selector0_);
    ::g::Fuse::Reactive::Add* temp24 = ::g::Fuse::Reactive::Add::New1(temp21, temp23);
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New3();
    __this->temp8_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(temp8, SubPage_appr__Template3::__selector1_);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[29/*"chk_bp_cd"*/]);
    ::g::Fuse::Controls::Text* temp9 = ::g::Fuse::Controls::Text::New3();
    __this->temp9_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp9, SubPage_appr__Template3::__selector0_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[30/*"ITEM_DT"*/]);
    __this->temp9_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(temp9, SubPage_appr__Template3::__selector1_);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[29/*"chk_bp_cd"*/]);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(::STRINGS[31/*"AMOUNT"*/]);
    uString* temp29 = ::STRINGS[28/*"원"*/];
    ::g::Fuse::Reactive::Constant* temp30 = ::g::Fuse::Reactive::Constant::New1(temp29);
    ::g::Fuse::Controls::Text* temp10 = ::g::Fuse::Controls::Text::New3();
    __this->temp10_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp10, SubPage_appr__Template3::__selector0_);
    ::g::Fuse::Reactive::Add* temp31 = ::g::Fuse::Reactive::Add::New1(temp28, temp30);
    ::g::Fuse::Controls::DockPanel* temp32 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp14, 3);
    ::g::Fuse::Controls::DockPanel* temp34 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp35 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp36 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp37 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp15, 3);
    ::g::Fuse::Controls::Text* temp38 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp39 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Value_inst, (uObject*)temp16, 3);
    ::g::Fuse::Controls::Text* temp40 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp41 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp3_Value_inst, (uObject*)temp17, 3);
    ::g::Fuse::Controls::Text* temp42 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp43 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp4_Value_inst, (uObject*)temp18, 3);
    ::g::Fuse::Controls::Text* temp44 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::WrapPanel* temp45 = ::g::Fuse::Controls::WrapPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp46 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp5_Value_inst, (uObject*)temp19, 3);
    ::g::Fuse::Reactive::DataBinding* temp47 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp6_Value_inst, (uObject*)temp20, 3);
    ::g::Fuse::Controls::Text* temp48 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp49 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp7_Value_inst, (uObject*)temp24, 3);
    ::g::Fuse::Reactive::DataBinding* temp50 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp8_Visibility_inst, (uObject*)temp25, 3);
    ::g::Fuse::Reactive::DataBinding* temp51 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp9_Value_inst, (uObject*)temp26, 3);
    ::g::Fuse::Reactive::DataBinding* temp52 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp9_Visibility_inst, (uObject*)temp27, 3);
    ::g::Fuse::Controls::Text* temp53 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp54 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp10_Value_inst, (uObject*)temp31, 3);
    ::g::Fuse::Controls::Rectangle* temp55 = ::g::Fuse::Controls::Rectangle::New3();
    __self1->SourceLineNumber(194);
    __self1->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp32->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp32->Padding(::g::Uno::Float4__New2(0.0f, 3.0f, 0.0f, 3.0f));
    temp32->SourceLineNumber(195);
    temp32->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp32, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    temp->FontSize(10.0f);
    temp->Width(::g::Uno::UX::Size__New1(15.0f, 1));
    temp->Alignment(5);
    temp->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp->SourceLineNumber(196);
    temp->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 0);
    temp->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    temp14->SourceLineNumber(196);
    temp14->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp11->SourceLineNumber(196);
    temp11->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp13->SourceLineNumber(196);
    temp13->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp34->Alignment(0);
    temp34->SourceLineNumber(197);
    temp34->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp34, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    temp35->Rows(::STRINGS[32/*"auto, auto,...*/]);
    temp35->RowCount(4);
    temp35->DefaultRow(::STRINGS[17/*"auto"*/]);
    temp35->Columns(::STRINGS[33/*"60, 1*, 50,...*/]);
    temp35->ColumnCount(4);
    temp35->CellSpacing(3.0f);
    temp35->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp35->SourceLineNumber(198);
    temp35->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp36->Value(::STRINGS[34/*"품목코드"*/]);
    temp36->FontSize(12.0f);
    temp36->SourceLineNumber(199);
    temp36->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp36->Font(::g::MainView::AGOTHIC14());
    temp1->FontSize(12.0f);
    temp1->SourceLineNumber(200);
    temp1->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp1->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    temp15->SourceLineNumber(200);
    temp15->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp38->Value(::STRINGS[35/*"품명"*/]);
    temp38->FontSize(12.0f);
    temp38->SourceLineNumber(201);
    temp38->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp38->Font(::g::MainView::AGOTHIC14());
    temp2->TextWrapping(1);
    temp2->FontSize(12.0f);
    temp2->SourceLineNumber(202);
    temp2->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp2->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp39);
    temp16->SourceLineNumber(202);
    temp16->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp40->Value(::STRINGS[36/*"규격"*/]);
    temp40->FontSize(12.0f);
    temp40->SourceLineNumber(203);
    temp40->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp40->Font(::g::MainView::AGOTHIC14());
    temp3->FontSize(12.0f);
    temp3->SourceLineNumber(204);
    temp3->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp3->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp41);
    temp17->SourceLineNumber(204);
    temp17->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp42->Value(::STRINGS[37/*"제조사"*/]);
    temp42->FontSize(12.0f);
    temp42->SourceLineNumber(205);
    temp42->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp42->Font(::g::MainView::AGOTHIC14());
    temp4->FontSize(12.0f);
    temp4->SourceLineNumber(206);
    temp4->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp4->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp43);
    temp18->SourceLineNumber(206);
    temp18->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp44->Value(::STRINGS[38/*"발주수량"*/]);
    temp44->FontSize(12.0f);
    temp44->SourceLineNumber(207);
    temp44->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp44->Font(::g::MainView::AGOTHIC14());
    temp45->Orientation(0);
    temp45->SourceLineNumber(208);
    temp45->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp5->FontSize(12.0f);
    temp5->SourceLineNumber(209);
    temp5->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp5->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp46);
    temp19->SourceLineNumber(209);
    temp19->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp6->FontSize(11.0f);
    temp6->Alignment(13);
    temp6->SourceLineNumber(210);
    temp6->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp6->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp47);
    temp20->SourceLineNumber(210);
    temp20->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp48->Value(::STRINGS[39/*"단가"*/]);
    temp48->FontSize(12.0f);
    temp48->SourceLineNumber(212);
    temp48->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp48->Font(::g::MainView::AGOTHIC14());
    temp7->FontSize(12.0f);
    temp7->TextAlignment(2);
    temp7->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 15.0f, 0.0f));
    temp7->SourceLineNumber(213);
    temp7->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp7->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp49);
    temp24->SourceLineNumber(213);
    temp24->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp21->SourceLineNumber(213);
    temp21->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp23->SourceLineNumber(213);
    temp23->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp8->Value(::STRINGS[40/*"상품등록일"*/]);
    temp8->FontSize(12.0f);
    temp8->SourceLineNumber(214);
    temp8->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp8->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp50);
    temp25->SourceLineNumber(214);
    temp25->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp9->FontSize(12.0f);
    temp9->SourceLineNumber(215);
    temp9->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp9->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp52);
    temp26->SourceLineNumber(215);
    temp26->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp27->SourceLineNumber(215);
    temp27->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp53->Value(::STRINGS[41/*"발주금액"*/]);
    temp53->FontSize(12.0f);
    temp53->SourceLineNumber(216);
    temp53->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp53->Font(::g::MainView::AGOTHIC14());
    temp10->FontSize(12.0f);
    temp10->TextAlignment(2);
    temp10->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 15.0f, 0.0f));
    temp10->SourceLineNumber(217);
    temp10->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp10->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp54);
    temp31->SourceLineNumber(217);
    temp31->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp28->SourceLineNumber(217);
    temp28->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp30->SourceLineNumber(217);
    temp30->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    temp55->Color(::g::Uno::Float4__New2(0.6901961f, 0.6980392f, 0.8431373f, 1.0f));
    temp55->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp55->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp55->SourceLineNumber(221);
    temp55->SourceFileName(::STRINGS[4/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp55, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    return *__retval = __self1, void();
}

// public Template3 New(SubPage_appr parent, SubPage_appr parentInstance)
void SubPage_appr__Template3__New2_fn(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance, SubPage_appr__Template3** __retval)
{
    *__retval = SubPage_appr__Template3::New2(parent, parentInstance);
}

::g::Uno::UX::Selector SubPage_appr__Template3::__selector0_;
::g::Uno::UX::Selector SubPage_appr__Template3::__selector1_;

// public Template3(SubPage_appr parent, SubPage_appr parentInstance) [instance]
void SubPage_appr__Template3::ctor_1(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template3 New(SubPage_appr parent, SubPage_appr parentInstance) [static]
SubPage_appr__Template3* SubPage_appr__Template3::New2(::g::SubPage_appr* parent, ::g::SubPage_appr* parentInstance)
{
    SubPage_appr__Template3* obj1 = (SubPage_appr__Template3*)uNew(SubPage_appr__Template3_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
