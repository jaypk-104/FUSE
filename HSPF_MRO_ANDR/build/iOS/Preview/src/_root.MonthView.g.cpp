// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_bundle.h>
#include <_root.HSMRO_FuseControlsShape_Color_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_Value_Property.h>
#include <_root.HSMRO_FuseElementsElement_Visibility_Property.h>
#include <_root.HSMRO_FuseReactiveEach_Items_Property.h>
#include <_root.HSMRO_FuseTriggersActionsSetstring_Value_Property.h>
#include <_root.MainView.h>
#include <_root.MonthView.h>
#include <_root.MonthView.Template.h>
#include <_root.MonthView.Template1.h>
#include <_root.MonthView.Template2.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.RemoveType.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Activated.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.RouterModify.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.DataFunction.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Fuse.Triggers.PulseTrigger-1.PulseHandler.h>
#include <Fuse.Triggers.Transition.h>
#include <Fuse.Triggers.TransitionDirection.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
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
static uString* STRINGS[7];
static uType* TYPES[6];

namespace g{

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MonthView.g.uno
// ------------------------------------------------------------------------------

// public partial sealed class MonthView
// {
// static MonthView()
static void MonthView__cctor_4_fn(uType* __type)
{
    MonthView::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 4, uString::Const("temp_eb4"), uString::Const("router"), uString::Const("blockView"), uString::Const("here"));
    MonthView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    MonthView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    MonthView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Color"));
    MonthView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Visibility"));
    MonthView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("blockView"));
    MonthView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("here"));
}

static void MonthView_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::HSMRO_bundle_typeof(),
        ::g::MainView_typeof(),
        ::g::Fuse::Controls::Navigator_typeof(),
        ::g::Fuse::TranslationModes_typeof());
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
        ::g::Fuse::Navigation::Router_typeof(), offsetof(MonthView, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MonthView, here_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MonthView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MonthView, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MonthView, temp2_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MonthView, blockView_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MonthView, blockView_Visibility_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MonthView, temp_eb4), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MonthView, blockView), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(MonthView, here), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(MonthView, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&MonthView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MonthView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MonthView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MonthView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MonthView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MonthView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MonthView::__selector5_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MonthView__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* MonthView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 144;
    options.InterfaceCount = 19;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(MonthView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("MonthView", options);
    type->fp_build_ = MonthView_build;
    type->fp_cctor_ = MonthView__cctor_4_fn;
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

// public MonthView(Fuse.Navigation.Router router)
void MonthView__ctor_8_fn(MonthView* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX()
void MonthView__InitializeUX_fn(MonthView* __this)
{
    __this->InitializeUX();
}

// public MonthView New(Fuse.Navigation.Router router)
void MonthView__New5_fn(::g::Fuse::Navigation::Router* router1, MonthView** __retval)
{
    *__retval = MonthView::New5(router1);
}

uSStrong<uArray*> MonthView::__g_static_nametable1_;
::g::Uno::UX::Selector MonthView::__selector0_;
::g::Uno::UX::Selector MonthView::__selector1_;
::g::Uno::UX::Selector MonthView::__selector2_;
::g::Uno::UX::Selector MonthView::__selector3_;
::g::Uno::UX::Selector MonthView::__selector4_;
::g::Uno::UX::Selector MonthView::__selector5_;

// public MonthView(Fuse.Navigation.Router router) [instance]
void MonthView::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("MonthView", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance]
void MonthView::InitializeUX()
{
    uStackFrame __("MonthView", "InitializeUX()");
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("activated"));
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MonthView::__g_static_nametable1_);
    here = ::g::Fuse::Controls::Text::New3();
    here_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(here, MonthView::__selector0_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(uString::Const("temp_ios_date"));
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp, MonthView::__selector0_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"monthLabel"*/]);
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::HSMRO_FuseReactiveEach_Items_Property::New1(temp1, MonthView::__selector1_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(uString::Const("daysOfWeek"));
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::HSMRO_FuseReactiveEach_Items_Property::New1(temp2, MonthView::__selector1_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(uString::Const("days"));
    blockView = ::g::Fuse::Controls::Rectangle::New3();
    blockView_Color_inst = ::g::HSMRO_FuseControlsShape_Color_Property::New1(blockView, MonthView::__selector2_);
    blockView_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(blockView, MonthView::__selector3_);
    ::g::Fuse::Navigation::Activated* temp8 = ::g::Fuse::Navigation::Activated::New2();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Fuse::Reactive::JavaScript* temp9 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp10 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(here_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Controls::Grid* temp12 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp13 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp14 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp15 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::RouterModify* temp16 = ::g::Fuse::Navigation::RouterModify::New2();
    ::g::Fuse::Controls::Panel* temp17 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp5, 3);
    ::g::Fuse::Controls::Panel* temp19 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp20 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp21 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::RouterModify* temp22 = ::g::Fuse::Navigation::RouterModify::New2();
    ::g::Fuse::Controls::Grid* temp23 = ::g::Fuse::Controls::Grid::New4();
    MonthView__Template* temp24 = MonthView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp6, 3);
    MonthView__Template1* fill = MonthView__Template1::New2(this, this);
    MonthView__Template2* day = MonthView__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Items_inst, (uObject*)temp7, 3);
    ::g::Fuse::Triggers::Transition* temp27 = ::g::Fuse::Triggers::Transition::New2();
    ::g::Fuse::Animations::Move* temp28 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::Transition* temp29 = ::g::Fuse::Triggers::Transition::New2();
    ::g::Fuse::Animations::Move* temp30 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::Transition* temp31 = ::g::Fuse::Triggers::Transition::New2();
    ::g::Fuse::Animations::Move* temp32 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::Transition* temp33 = ::g::Fuse::Triggers::Transition::New2();
    ::g::Fuse::Animations::Move* temp34 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::Transition* temp35 = ::g::Fuse::Triggers::Transition::New2();
    ::g::Fuse::Animations::Change* temp36 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), blockView_Color_inst);
    ::g::Fuse::Animations::Change* temp37 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), blockView_Visibility_inst);
    ::g::Fuse::Triggers::Transition* temp38 = ::g::Fuse::Triggers::Transition::New2();
    ::g::Fuse::Animations::Move* temp39 = ::g::Fuse::Animations::Move::New2();
    SourceLineNumber(1);
    SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Fuse::Controls::Navigator::SetRemove(this, 1);
    temp8->SourceLineNumber(3);
    temp8->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp8->add_Handler(uDelegate::New(::g::Fuse::Triggers::PulseTrigger__PulseHandler_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    temp3->SourceLineNumber(3);
    temp3->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp9->LineNumber(6);
    temp9->FileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp9->SourceLineNumber(6);
    temp9->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp9->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::MonthViewee452b74()));
    uPtr(blockView)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f));
    uPtr(blockView)->Visibility(2);
    uPtr(blockView)->Name(MonthView::__selector4_);
    uPtr(blockView)->SourceLineNumber(8);
    uPtr(blockView)->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp10->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp10->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp10->SourceLineNumber(10);
    temp10->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), here);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    uPtr(here)->Visibility(2);
    uPtr(here)->Name(MonthView::__selector5_);
    uPtr(here)->SourceLineNumber(11);
    uPtr(here)->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(here, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(here)->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp4->SourceLineNumber(11);
    temp4->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp12->Columns(uString::Const("auto,1*,auto"));
    temp12->CellSpacing(5.0f);
    temp12->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp12->SourceLineNumber(13);
    temp12->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp12, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp13->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp13->Width(::g::Uno::UX::Size__New1(35.0f, 1));
    temp13->Height(::g::Uno::UX::Size__New1(35.0f, 1));
    temp13->SourceLineNumber(14);
    temp13->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    temp14->Color(::g::Uno::Float4__New2(0.3607843f, 0.2784314f, 0.7450981f, 1.0f));
    temp14->SourceLineNumber(15);
    temp14->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp14->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::arrowleft787f0541()));
    temp15->SourceLineNumber(16);
    temp15->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp16);
    temp16->Bookmark(uString::Const("prevMonth"));
    temp16->Style(uString::Const("fromLeft"));
    temp16->SourceLineNumber(17);
    temp16->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp17->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp17->SourceLineNumber(20);
    temp17->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->FontSize(20.0f);
    temp->TextAlignment(1);
    temp->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.8666667f));
    temp->Alignment(8);
    temp->SourceLineNumber(21);
    temp->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    temp5->SourceLineNumber(21);
    temp5->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp19->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp19->Width(::g::Uno::UX::Size__New1(35.0f, 1));
    temp19->Height(::g::Uno::UX::Size__New1(35.0f, 1));
    temp19->SourceLineNumber(23);
    temp19->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp20->Color(::g::Uno::Float4__New2(0.3607843f, 0.2784314f, 0.7450981f, 1.0f));
    temp20->SourceLineNumber(24);
    temp20->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp20->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::arrowright4a24e9ce()));
    temp21->SourceLineNumber(25);
    temp21->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp22);
    temp22->Bookmark(uString::Const("nextMonth"));
    temp22->Style(uString::Const("fromRight"));
    temp22->SourceLineNumber(26);
    temp22->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp23->Rows(uString::Const("auto"));
    temp23->DefaultRow(uString::Const("1*"));
    temp23->ColumnCount(7);
    temp23->CellSpacing(3.0f);
    temp23->SourceLineNumber(31);
    temp23->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp1->SourceLineNumber(32);
    temp1->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp6->SourceLineNumber(32);
    temp6->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp2->MatchKey(uString::Const("type"));
    temp2->SourceLineNumber(37);
    temp2->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), fill);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), day);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    temp7->SourceLineNumber(37);
    temp7->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp27->Direction(3);
    temp27->Style(uString::Const("fromLeft"));
    temp27->SourceLineNumber(50);
    temp27->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp28);
    temp28->X(-1.0f);
    temp28->Duration(0.4);
    temp28->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp28->Easing(::g::Fuse::Animations::Easing::SinusoidalInOut());
    temp29->Direction(3);
    temp29->Style(uString::Const("fromRight"));
    temp29->SourceLineNumber(53);
    temp29->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp30);
    temp30->X(1.0f);
    temp30->Duration(0.4);
    temp30->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp30->Easing(::g::Fuse::Animations::Easing::SinusoidalInOut());
    temp31->Direction(4);
    temp31->Style(uString::Const("fromRight"));
    temp31->SourceLineNumber(57);
    temp31->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp32);
    temp32->X(-1.0f);
    temp32->Duration(0.4);
    temp32->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp32->Easing(::g::Fuse::Animations::Easing::SinusoidalInOut());
    temp33->Direction(4);
    temp33->Style(uString::Const("fromLeft"));
    temp33->SourceLineNumber(60);
    temp33->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp34);
    temp34->X(1.0f);
    temp34->Duration(0.4);
    temp34->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp34->Easing(::g::Fuse::Animations::Easing::SinusoidalInOut());
    temp35->To(::STRINGS[3/*"day"*/]);
    temp35->SourceLineNumber(64);
    temp35->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp37);
    ::g::Fuse::Animations::Change__set_Value_fn(temp36, uCRef(::g::Uno::Float4__New2(0.2666667f, 0.2666667f, 0.2666667f, 0.5333334f)));
    temp36->Duration(0.4);
    ::g::Fuse::Animations::Change__set_Value_fn(temp37, uCRef<int32_t>(0));
    temp38->SourceLineNumber(69);
    temp38->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp39);
    temp39->Y(1.0f);
    temp39->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), blockView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), here);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), blockView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
}

// public MonthView New(Fuse.Navigation.Router router) [static]
MonthView* MonthView::New5(::g::Fuse::Navigation::Router* router1)
{
    MonthView* obj1 = (MonthView*)uNew(MonthView_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MonthView.g.uno
// ------------------------------------------------------------------------------

// public partial sealed class MonthView.Template
// {
// static Template()
static void MonthView__Template__cctor__fn(uType* __type)
{
    MonthView__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void MonthView__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Modules/CalendarView/MonthView.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::MainView_typeof());
    type->SetFields(2,
        ::g::MonthView_typeof(), offsetof(MonthView__Template, __parent1), uFieldFlagsWeak,
        ::g::MonthView_typeof(), offsetof(MonthView__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MonthView__Template, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MonthView__Template::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MonthView__Template__New2_fn, 0, true, type, 2, ::g::MonthView_typeof(), ::g::MonthView_typeof()));
}

::g::Uno::UX::Template_type* MonthView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MonthView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MonthView.Template", options);
    type->fp_build_ = MonthView__Template_build;
    type->fp_cctor_ = MonthView__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MonthView__Template__New1_fn;
    return type;
}

// public Template(MonthView parent, MonthView parentInstance)
void MonthView__Template__ctor_1_fn(MonthView__Template* __this, ::g::MonthView* parent, ::g::MonthView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void MonthView__Template__New1_fn(MonthView__Template* __this, uObject** __retval)
{
    uStackFrame __("MonthView.Template", "New()");
    ::g::Fuse::Controls::Panel* __self1 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp, MonthView__Template::__selector0_);
    ::g::Fuse::Reactive::DataFunction* temp1 = ::g::Fuse::Reactive::DataFunction::New1();
    ::g::Fuse::Reactive::DataBinding* temp2 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp1, 3);
    __self1->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    __self1->SourceLineNumber(33);
    __self1->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp->FontSize(15.0f);
    temp->TextAlignment(1);
    temp->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.5333334f));
    temp->SourceLineNumber(34);
    temp->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    temp1->SourceLineNumber(34);
    temp1->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    return *__retval = __self1, void();
}

// public Template New(MonthView parent, MonthView parentInstance)
void MonthView__Template__New2_fn(::g::MonthView* parent, ::g::MonthView* parentInstance, MonthView__Template** __retval)
{
    *__retval = MonthView__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MonthView__Template::__selector0_;

// public Template(MonthView parent, MonthView parentInstance) [instance]
void MonthView__Template::ctor_1(::g::MonthView* parent, ::g::MonthView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(MonthView parent, MonthView parentInstance) [static]
MonthView__Template* MonthView__Template::New2(::g::MonthView* parent, ::g::MonthView* parentInstance)
{
    MonthView__Template* obj1 = (MonthView__Template*)uNew(MonthView__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MonthView.g.uno
// ------------------------------------------------------------------------------

// public partial sealed class MonthView.Template1
// {
// static Template1()
static void MonthView__Template1__cctor__fn(uType* __type)
{
    MonthView__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"fill"*/]);
}

static void MonthView__Template1_build(uType* type)
{
    ::STRINGS[2] = uString::Const("fill");
    ::STRINGS[1] = uString::Const("Modules/CalendarView/MonthView.ux");
    type->SetFields(2,
        ::g::MonthView_typeof(), offsetof(MonthView__Template1, __parent1), uFieldFlagsWeak,
        ::g::MonthView_typeof(), offsetof(MonthView__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MonthView__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MonthView__Template1__New2_fn, 0, true, type, 2, ::g::MonthView_typeof(), ::g::MonthView_typeof()));
}

::g::Uno::UX::Template_type* MonthView__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MonthView__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MonthView.Template1", options);
    type->fp_build_ = MonthView__Template1_build;
    type->fp_cctor_ = MonthView__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MonthView__Template1__New1_fn;
    return type;
}

// public Template1(MonthView parent, MonthView parentInstance)
void MonthView__Template1__ctor_1_fn(MonthView__Template1* __this, ::g::MonthView* parent, ::g::MonthView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void MonthView__Template1__New1_fn(MonthView__Template1* __this, uObject** __retval)
{
    uStackFrame __("MonthView.Template1", "New()");
    ::g::Fuse::Controls::Rectangle* __self1 = ::g::Fuse::Controls::Rectangle::New3();
    __self1->Color(::g::Uno::Float4__New2(0.9098039f, 0.9176471f, 0.9647059f, 1.0f));
    __self1->Name(MonthView__Template1::__selector0_);
    __self1->SourceLineNumber(38);
    __self1->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    return *__retval = __self1, void();
}

// public Template1 New(MonthView parent, MonthView parentInstance)
void MonthView__Template1__New2_fn(::g::MonthView* parent, ::g::MonthView* parentInstance, MonthView__Template1** __retval)
{
    *__retval = MonthView__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MonthView__Template1::__selector0_;

// public Template1(MonthView parent, MonthView parentInstance) [instance]
void MonthView__Template1::ctor_1(::g::MonthView* parent, ::g::MonthView* parentInstance)
{
    ctor_(::STRINGS[2/*"fill"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(MonthView parent, MonthView parentInstance) [static]
MonthView__Template1* MonthView__Template1::New2(::g::MonthView* parent, ::g::MonthView* parentInstance)
{
    MonthView__Template1* obj1 = (MonthView__Template1*)uNew(MonthView__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/MonthView.g.uno
// ------------------------------------------------------------------------------

// public partial sealed class MonthView.Template2
// {
// static Template2()
static void MonthView__Template2__cctor__fn(uType* __type)
{
    MonthView__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    MonthView__Template2::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"day"*/]);
}

static void MonthView__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("day");
    ::STRINGS[4] = uString::Const("dayOfMonth");
    ::STRINGS[5] = uString::Const("monthLabel");
    ::STRINGS[6] = uString::Const("openDay");
    ::STRINGS[1] = uString::Const("Modules/CalendarView/MonthView.ux");
    ::TYPES[2] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::MainView_typeof());
    type->SetFields(2,
        ::g::MonthView_typeof(), offsetof(MonthView__Template2, __parent1), uFieldFlagsWeak,
        ::g::MonthView_typeof(), offsetof(MonthView__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MonthView__Template2, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MonthView__Template2, here_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MonthView__Template2, temp1_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MonthView__Template2, temp_eb5), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MonthView__Template2::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MonthView__Template2::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MonthView__Template2__New2_fn, 0, true, type, 2, ::g::MonthView_typeof(), ::g::MonthView_typeof()));
}

::g::Uno::UX::Template_type* MonthView__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MonthView__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MonthView.Template2", options);
    type->fp_build_ = MonthView__Template2_build;
    type->fp_cctor_ = MonthView__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MonthView__Template2__New1_fn;
    return type;
}

// public Template2(MonthView parent, MonthView parentInstance)
void MonthView__Template2__ctor_1_fn(MonthView__Template2* __this, ::g::MonthView* parent, ::g::MonthView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void MonthView__Template2__New1_fn(MonthView__Template2* __this, uObject** __retval)
{
    uStackFrame __("MonthView.Template2", "New()");
    ::g::Fuse::Controls::Rectangle* __self1 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp, MonthView__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"dayOfMonth"*/]);
    __this->here_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(uPtr(__this->__parent1)->here, MonthView__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"monthLabel"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"dayOfMonth"*/]);
    ::g::Fuse::Triggers::Actions::Set* temp1 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[2/*Fuse.Triggers.Actions.Set<string>*/], __this->here_Value_inst);
    __this->temp1_Value_inst = ::g::HSMRO_FuseTriggersActionsSetstring_Value_Property::New1(temp1, MonthView__Template2::__selector0_);
    ::g::Fuse::Reactive::Add* temp5 = ::g::Fuse::Reactive::Add::New1(temp3, temp4);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"openDay"*/]);
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp2, 3);
    ::g::Fuse::Drawing::Stroke* temp8 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Gestures::Clicked* temp9 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp5, 3);
    __this->temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6);
    __self1->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    __self1->Name(MonthView__Template2::__selector1_);
    __self1->SourceLineNumber(39);
    __self1->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb5)));
    temp->FontSize(16.0f);
    temp->Color(::g::Uno::Float4__New2(0.1333333f, 0.1333333f, 0.1333333f, 1.0f));
    temp->Alignment(5);
    temp->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp->SourceLineNumber(40);
    temp->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    temp2->SourceLineNumber(40);
    temp2->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp8->Color(::g::Uno::Float4__New2(0.4745098f, 0.5254902f, 0.7960784f, 0.5333334f));
    temp8->Width(1.0f);
    temp9->SourceLineNumber(42);
    temp9->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    temp1->SourceLineNumber(43);
    temp1->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp5->SourceLineNumber(43);
    temp5->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp3->SourceLineNumber(43);
    temp3->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp4->SourceLineNumber(43);
    temp4->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    temp6->SourceLineNumber(39);
    temp6->SourceFileName(::STRINGS[1/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Strokes()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb5);
    return *__retval = __self1, void();
}

// public Template2 New(MonthView parent, MonthView parentInstance)
void MonthView__Template2__New2_fn(::g::MonthView* parent, ::g::MonthView* parentInstance, MonthView__Template2** __retval)
{
    *__retval = MonthView__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MonthView__Template2::__selector0_;
::g::Uno::UX::Selector MonthView__Template2::__selector1_;

// public Template2(MonthView parent, MonthView parentInstance) [instance]
void MonthView__Template2::ctor_1(::g::MonthView* parent, ::g::MonthView* parentInstance)
{
    ctor_(::STRINGS[3/*"day"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(MonthView parent, MonthView parentInstance) [static]
MonthView__Template2* MonthView__Template2::New2(::g::MonthView* parent, ::g::MonthView* parentInstance)
{
    MonthView__Template2* obj1 = (MonthView__Template2*)uNew(MonthView__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
