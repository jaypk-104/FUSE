// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/c_menu.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.c_menu.h>
#include <_root.HSMRO_bundle.h>
#include <_root.HSMRO_FuseControlsTextControl_Value_Property.h>
#include <_root.HSMRO_FuseElementsElement_Visibility_Property.h>
#include <_root.MainView.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Controls.WrapPanel.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Triggers.KeyPressHandler.h>
#include <Fuse.Triggers.OnBackButton.h>
#include <Fuse.Triggers.OnKeyPress.h>
#include <HS.MenuButton.h>
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
#include <Uno.UX.Unit.h>
static uString* STRINGS[34];
static uType* TYPES[8];

namespace g{

// public partial sealed class c_menu
// {
// static c_menu()
static void c_menu__cctor_4_fn(uType* __type)
{
    c_menu::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[0/*"temp_eb63"*/], ::STRINGS[1/*"router"*/], ::STRINGS[2/*"temp_eb64"*/], ::STRINGS[3/*"temp_eb65"*/], ::STRINGS[4/*"temp_eb66"*/], ::STRINGS[5/*"temp_eb67"*/], ::STRINGS[6/*"temp_eb68"*/]);
    c_menu::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Value"*/]);
    c_menu::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Visibility"*/]);
    c_menu::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"c_menu"*/]);
}

static void c_menu_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb63");
    ::STRINGS[1] = uString::Const("router");
    ::STRINGS[2] = uString::Const("temp_eb64");
    ::STRINGS[3] = uString::Const("temp_eb65");
    ::STRINGS[4] = uString::Const("temp_eb66");
    ::STRINGS[5] = uString::Const("temp_eb67");
    ::STRINGS[6] = uString::Const("temp_eb68");
    ::STRINGS[7] = uString::Const("Value");
    ::STRINGS[8] = uString::Const("Visibility");
    ::STRINGS[9] = uString::Const("c_menu");
    ::STRINGS[10] = uString::Const("backBtn");
    ::STRINGS[11] = uString::Const("g_DATE_DD");
    ::STRINGS[12] = uString::Const("g_DATE_YM");
    ::STRINGS[13] = uString::Const("g_DATE_DAY");
    ::STRINGS[14] = uString::Const("g_BP_NM_obs");
    ::STRINGS[15] = uString::Const("g_USR_NM_obs");
    ::STRINGS[16] = uString::Const("btnInq");
    ::STRINGS[17] = uString::Const("btnGr");
    ::STRINGS[18] = uString::Const("menu_visible");
    ::STRINGS[19] = uString::Const("btnAppr");
    ::STRINGS[20] = uString::Const("menu_visible_210129");
    ::STRINGS[21] = uString::Const("btnPo");
    ::STRINGS[22] = uString::Const("device");
    ::STRINGS[23] = uString::Const("Pages/Menu_Customer/c_menu.ux");
    ::STRINGS[24] = uString::Const("40,1*, auto");
    ::STRINGS[25] = uString::Const("auto, 40");
    ::STRINGS[26] = uString::Const("\354\213\240\352\267\234\354\203\201\355\222\210\352\262\254\354\240\201");
    ::STRINGS[27] = uString::Const("c_gr");
    ::STRINGS[28] = uString::Const("\354\236\205\352\263\240\352\264\200\353\246\254");
    ::STRINGS[29] = uString::Const("c_appr");
    ::STRINGS[30] = uString::Const("\352\262\260\354\236\254\352\264\200\353\246\254");
    ::STRINGS[31] = uString::Const("c_po");
    ::STRINGS[32] = uString::Const("\353\260\234\354\243\274\352\264\200\353\246\254");
    ::STRINGS[33] = uString::Const("BACK");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Triggers::KeyPressHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Brushes_typeof(),
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::HSMRO_bundle_typeof(),
        ::g::MainView_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(126,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(c_menu, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(c_menu, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(c_menu, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(c_menu, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(c_menu, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(c_menu, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(c_menu, temp5_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(c_menu, temp6_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(c_menu, temp7_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(c_menu, temp8_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(c_menu, temp9_Visibility_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(c_menu, temp_eb63), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(c_menu, temp_eb64), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(c_menu, temp_eb65), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(c_menu, temp_eb66), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(c_menu, temp_eb67), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(c_menu, temp_eb68), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(c_menu, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&c_menu::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&c_menu::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&c_menu::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&c_menu::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)c_menu__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* c_menu_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 148;
    options.InterfaceCount = 19;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(c_menu);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("c_menu", options);
    type->fp_build_ = c_menu_build;
    type->fp_cctor_ = c_menu__cctor_4_fn;
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

// public c_menu(Fuse.Navigation.Router router)
void c_menu__ctor_8_fn(c_menu* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX()
void c_menu__InitializeUX_fn(c_menu* __this)
{
    __this->InitializeUX();
}

// public c_menu New(Fuse.Navigation.Router router)
void c_menu__New5_fn(::g::Fuse::Navigation::Router* router1, c_menu** __retval)
{
    *__retval = c_menu::New5(router1);
}

uSStrong<uArray*> c_menu::__g_static_nametable1_;
::g::Uno::UX::Selector c_menu::__selector0_;
::g::Uno::UX::Selector c_menu::__selector1_;
::g::Uno::UX::Selector c_menu::__selector2_;

// public c_menu(Fuse.Navigation.Router router) [instance]
void c_menu::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("c_menu", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance]
void c_menu::InitializeUX()
{
    uStackFrame __("c_menu", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, c_menu::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"backBtn"*/]);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp, c_menu::__selector0_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"g_DATE_DD"*/]);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp1, c_menu::__selector0_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"g_DATE_YM"*/]);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp2, c_menu::__selector0_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"g_DATE_DAY"*/]);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp3, c_menu::__selector0_);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"g_BP_NM_obs"*/]);
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    temp4_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp4, c_menu::__selector0_);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"g_USR_NM_obs"*/]);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"btnInq"*/]);
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"btnGr"*/]);
    ::g::Fuse::Controls::Rectangle* temp5 = ::g::Fuse::Controls::Rectangle::New3();
    temp5_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(temp5, c_menu::__selector1_);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"menu_visible"*/]);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"btnAppr"*/]);
    ::g::Fuse::Controls::DockPanel* temp6 = ::g::Fuse::Controls::DockPanel::New4();
    temp6_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(temp6, c_menu::__selector1_);
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"menu_visible"*/]);
    ::g::Fuse::Controls::Rectangle* temp7 = ::g::Fuse::Controls::Rectangle::New3();
    temp7_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(temp7, c_menu::__selector1_);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"menu_visibl...*/]);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"btnPo"*/]);
    ::g::Fuse::Controls::DockPanel* temp8 = ::g::Fuse::Controls::DockPanel::New4();
    temp8_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(temp8, c_menu::__selector1_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"menu_visibl...*/]);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"backBtn"*/]);
    ::g::Fuse::Controls::Button* temp9 = ::g::Fuse::Controls::Button::New5();
    temp9_Visibility_inst = ::g::HSMRO_FuseElementsElement_Visibility_Property::New1(temp9, c_menu::__selector1_);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"device"*/]);
    ::g::Fuse::Reactive::JavaScript* temp26 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Triggers::OnBackButton* temp27 = ::g::Fuse::Triggers::OnBackButton::New3();
    temp_eb63 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp10);
    ::g::Fuse::Controls::Panel* temp28 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::DockPanel* temp29 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp30 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp31 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp32 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Controls::WrapPanel* temp34 = ::g::Fuse::Controls::WrapPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp35 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Reactive::DataBinding* temp36 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp13, 3);
    ::g::Fuse::Controls::Grid* temp37 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::WrapPanel* temp38 = ::g::Fuse::Controls::WrapPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp39 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp14, 3);
    ::g::Fuse::Reactive::DataBinding* temp40 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp15, 3);
    ::g::Fuse::Controls::Image* temp41 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::LinearGradient* temp42 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp43 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp44 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Controls::DockPanel* temp45 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::HS::MenuButton* temp46 = ::g::HS::MenuButton::New4();
    ::g::Fuse::Controls::DockPanel* temp47 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp48 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp49 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp50 = ::g::Fuse::Controls::Image::New3();
    temp_eb64 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp16);
    ::g::Fuse::Controls::Rectangle* temp51 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::DockPanel* temp52 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::HS::MenuButton* temp53 = ::g::HS::MenuButton::New4();
    ::g::Fuse::Controls::DockPanel* temp54 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp55 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp56 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp57 = ::g::Fuse::Controls::Image::New3();
    temp_eb65 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp17);
    ::g::Fuse::Reactive::DataBinding* temp58 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Visibility_inst, (uObject*)temp18, 3);
    ::g::HS::MenuButton* temp59 = ::g::HS::MenuButton::New4();
    ::g::Fuse::Controls::DockPanel* temp60 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp61 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp62 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp63 = ::g::Fuse::Controls::Image::New3();
    temp_eb66 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp19);
    ::g::Fuse::Reactive::DataBinding* temp64 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Visibility_inst, (uObject*)temp20, 3);
    ::g::Fuse::Reactive::DataBinding* temp65 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Visibility_inst, (uObject*)temp21, 3);
    ::g::HS::MenuButton* temp66 = ::g::HS::MenuButton::New4();
    ::g::Fuse::Controls::DockPanel* temp67 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp68 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp69 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp70 = ::g::Fuse::Controls::Image::New3();
    temp_eb67 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp22);
    ::g::Fuse::Reactive::DataBinding* temp71 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Visibility_inst, (uObject*)temp23, 3);
    ::g::Fuse::Controls::Rectangle* temp72 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp73 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp74 = ::g::Fuse::Controls::Text::New3();
    temp_eb68 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp24);
    ::g::Fuse::Reactive::DataBinding* temp75 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Visibility_inst, (uObject*)temp25, 3);
    Width(::g::Uno::UX::Size__New1(100.0f, 4));
    Height(::g::Uno::UX::Size__New1(100.0f, 4));
    Name(c_menu::__selector2_);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp26->LineNumber(2);
    temp26->FileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp26->SourceLineNumber(2);
    temp26->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp26->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::c_menu921d7000()));
    temp27->SourceLineNumber(3);
    temp27->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp27->add_Handler(uDelegate::New(::TYPES[1/*Fuse.Triggers.KeyPressHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb63)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb63);
    temp10->SourceLineNumber(3);
    temp10->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp28->SourceLineNumber(5);
    temp28->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    temp29->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp29->Alignment(0);
    temp29->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp29->SourceLineNumber(6);
    temp29->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp30->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp30->Alignment(0);
    temp30->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp30->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp30->Opacity(1.0f);
    temp30->SourceLineNumber(7);
    temp30->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp30, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Fills()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    temp31->RowCount(1);
    temp31->Columns(::STRINGS[24/*"40,1*, auto"*/]);
    temp31->ColumnCount(3);
    temp31->CellSpacing(1.0f);
    temp31->Width(::g::Uno::UX::Size__New1(160.0f, 1));
    temp31->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp31->MinWidth(::g::Uno::UX::Size__New1(160.0f, 1));
    temp31->Alignment(1);
    temp31->Padding(::g::Uno::Float4__New2(10.0f, 5.0f, 5.0f, 5.0f));
    temp31->SourceLineNumber(8);
    temp31->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp31, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    temp32->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp32->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp32->Alignment(10);
    temp32->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp32->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp32->SourceLineNumber(9);
    temp32->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp32, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp32, 0);
    temp32->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::calendar64701504()));
    temp->FontSize(40.0f);
    temp->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Alignment(10);
    temp->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp->SourceLineNumber(10);
    temp->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    temp11->SourceLineNumber(10);
    temp11->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp34->Orientation(1);
    temp34->Alignment(10);
    temp34->SourceLineNumber(11);
    temp34->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp1->FontSize(15.0f);
    temp1->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->Alignment(9);
    temp1->SourceLineNumber(12);
    temp1->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp1->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp35);
    temp12->SourceLineNumber(12);
    temp12->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp2->FontSize(13.0f);
    temp2->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->Alignment(9);
    temp2->SourceLineNumber(13);
    temp2->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp2->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp36);
    temp13->SourceLineNumber(13);
    temp13->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp37->Columns(::STRINGS[25/*"auto, 40"*/]);
    temp37->ColumnCount(2);
    temp37->CellSpacing(7.0f);
    temp37->Width(::g::Uno::UX::Size__New1(160.0f, 1));
    temp37->MinWidth(::g::Uno::UX::Size__New1(160.0f, 1));
    temp37->Alignment(3);
    temp37->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 5.0f, 0.0f));
    temp37->Padding(::g::Uno::Float4__New2(10.0f, 5.0f, 5.0f, 5.0f));
    temp37->SourceLineNumber(16);
    temp37->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp37, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp38->Orientation(1);
    temp38->Alignment(10);
    temp38->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp38->SourceLineNumber(17);
    temp38->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp3->FontSize(13.0f);
    temp3->TextAlignment(2);
    temp3->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Alignment(3);
    temp3->SourceLineNumber(18);
    temp3->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp3->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp39);
    temp14->SourceLineNumber(18);
    temp14->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp4->FontSize(13.0f);
    temp4->TextAlignment(2);
    temp4->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp4->Alignment(3);
    temp4->SourceLineNumber(19);
    temp4->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp4->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp40);
    temp15->SourceLineNumber(19);
    temp15->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp41->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp41->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp41->Alignment(0);
    temp41->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp41->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp41->SourceLineNumber(21);
    temp41->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp41->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::user08b5d607()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Stops()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Stops()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp44);
    temp43->Offset(0.0f);
    temp43->Color(::g::Uno::Float4__New2(0.2784314f, 0.2509804f, 0.7058824f, 1.0f));
    temp44->Offset(1.0f);
    temp44->Color(::g::Uno::Float4__New2(0.5490196f, 0.4509804f, 0.7607843f, 1.0f));
    temp45->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp45->Height(::g::Uno::UX::Size__New1(15.0f, 4));
    temp45->Alignment(0);
    temp45->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp45->SourceLineNumber(29);
    temp45->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp45, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    temp46->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp46->SourceLineNumber(30);
    temp46->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp46, 4);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp46, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb64)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb64);
    temp47->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp47->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp47->SourceLineNumber(31);
    temp47->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    temp48->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp48->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp48->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp48->SourceLineNumber(32);
    temp48->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp48, 0);
    temp48->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::quoteeb128a24()));
    temp49->Value(::STRINGS[26/*"신규상품견적"*/]);
    temp49->FontSize(40.0f);
    temp49->Color(::g::Fuse::Drawing::Colors::Black());
    temp49->Alignment(10);
    temp49->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp49->SourceLineNumber(33);
    temp49->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp49, 0);
    temp49->Font(::g::MainView::AGOTHIC14());
    temp50->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp50->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp50->SourceLineNumber(34);
    temp50->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp50, 1);
    temp50->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::arrow_right81d12504()));
    temp16->SourceLineNumber(30);
    temp16->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp51->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2156863f));
    temp51->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp51->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp51->Alignment(0);
    temp51->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp51->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp51->SourceLineNumber(38);
    temp51->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp51, 2);
    temp52->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp52->Height(::g::Uno::UX::Size__New1(15.0f, 4));
    temp52->Alignment(0);
    temp52->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp52->SourceLineNumber(39);
    temp52->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp52, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    temp53->Value(::STRINGS[27/*"c_gr"*/]);
    temp53->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp53->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp53->SourceLineNumber(40);
    temp53->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp53, 4);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp53, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb65)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb65);
    temp54->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp54->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp54->SourceLineNumber(41);
    temp54->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    temp55->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp55->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp55->SourceLineNumber(42);
    temp55->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp55, 0);
    temp55->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::inboundee750c3f()));
    temp56->Value(::STRINGS[28/*"입고관리"*/]);
    temp56->FontSize(40.0f);
    temp56->Color(::g::Fuse::Drawing::Colors::Black());
    temp56->Alignment(10);
    temp56->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp56->SourceLineNumber(43);
    temp56->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp56, 0);
    temp56->Font(::g::MainView::AGOTHIC14());
    temp57->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp57->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp57->SourceLineNumber(44);
    temp57->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp57, 1);
    temp57->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::arrow_right81d12504()));
    temp17->SourceLineNumber(40);
    temp17->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp5->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2156863f));
    temp5->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp5->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp5->Alignment(0);
    temp5->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp5->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp5->SourceLineNumber(48);
    temp5->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp5, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp58);
    temp18->SourceLineNumber(48);
    temp18->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp6->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp6->Height(::g::Uno::UX::Size__New1(15.0f, 4));
    temp6->Alignment(0);
    temp6->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp6->SourceLineNumber(49);
    temp6->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp6, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp64);
    temp59->Value(::STRINGS[29/*"c_appr"*/]);
    temp59->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp59->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp59->SourceLineNumber(50);
    temp59->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp59, 4);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp59, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb66)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb66);
    temp60->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp60->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp60->SourceLineNumber(51);
    temp60->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    temp61->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp61->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp61->SourceLineNumber(52);
    temp61->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp61, 0);
    temp61->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::approval5f980219()));
    temp62->Value(::STRINGS[30/*"결재관리"*/]);
    temp62->FontSize(40.0f);
    temp62->Color(::g::Fuse::Drawing::Colors::Black());
    temp62->Alignment(10);
    temp62->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp62->SourceLineNumber(53);
    temp62->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp62, 0);
    temp62->Font(::g::MainView::AGOTHIC14());
    temp63->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp63->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp63->SourceLineNumber(54);
    temp63->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp63, 1);
    temp63->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::arrow_right81d12504()));
    temp19->SourceLineNumber(50);
    temp19->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp20->SourceLineNumber(49);
    temp20->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp7->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2156863f));
    temp7->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp7->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp7->Alignment(0);
    temp7->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp7->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp7->SourceLineNumber(58);
    temp7->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp7, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp65);
    temp21->SourceLineNumber(58);
    temp21->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp8->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp8->Height(::g::Uno::UX::Size__New1(15.0f, 4));
    temp8->Alignment(0);
    temp8->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp8->SourceLineNumber(59);
    temp8->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp8, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp71);
    temp66->Value(::STRINGS[31/*"c_po"*/]);
    temp66->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp66->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp66->SourceLineNumber(60);
    temp66->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp66, 4);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp66, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb67)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb67);
    temp67->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp67->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp67->SourceLineNumber(61);
    temp67->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    temp68->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp68->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp68->SourceLineNumber(62);
    temp68->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp68, 0);
    temp68->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::order4cc6043c()));
    temp69->Value(::STRINGS[32/*"발주관리"*/]);
    temp69->FontSize(40.0f);
    temp69->Color(::g::Fuse::Drawing::Colors::Black());
    temp69->Alignment(10);
    temp69->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp69->SourceLineNumber(63);
    temp69->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp69, 0);
    temp69->Font(::g::MainView::AGOTHIC14());
    temp70->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp70->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp70->SourceLineNumber(64);
    temp70->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp70, 1);
    temp70->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::arrow_right81d12504()));
    temp22->SourceLineNumber(60);
    temp22->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp23->SourceLineNumber(59);
    temp23->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp72->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2156863f));
    temp72->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp72->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp72->Alignment(0);
    temp72->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp72->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp72->SourceLineNumber(68);
    temp72->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp72, 2);
    temp9->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp9->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp9->Alignment(3);
    temp9->Margin(::g::Uno::Float4__New2(10.0f, 7.0f, -10.0f, 10.0f));
    temp9->SourceLineNumber(69);
    temp9->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp9, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp9, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb68)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp75);
    temp73->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp73->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp73->Alignment(9);
    temp73->SourceLineNumber(70);
    temp73->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp73->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::backeb15b2d1()));
    temp74->Value(::STRINGS[33/*"BACK"*/]);
    temp74->TextWrapping(0);
    temp74->FontSize(18.0f);
    temp74->TextAlignment(0);
    temp74->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp74->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp74->Alignment(0);
    temp74->Margin(::g::Uno::Float4__New2(18.0f, 3.0f, 0.0f, 0.0f));
    temp74->SourceLineNumber(71);
    temp74->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp24->SourceLineNumber(69);
    temp24->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    temp25->SourceLineNumber(69);
    temp25->SourceFileName(::STRINGS[23/*"Pages/Menu_...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb68);
    Background(::g::Fuse::Drawing::Brushes::White());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
}

// public c_menu New(Fuse.Navigation.Router router) [static]
c_menu* c_menu::New5(::g::Fuse::Navigation::Router* router1)
{
    c_menu* obj1 = (c_menu*)uNew(c_menu_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
