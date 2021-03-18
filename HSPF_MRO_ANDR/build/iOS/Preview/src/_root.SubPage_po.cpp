// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/SubPage_po.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_bundle.h>
#include <_root.HSMRO_FuseControlsTextControl_Value_Property.h>
#include <_root.MainView.h>
#include <_root.SubPage_po.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
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
static uString* STRINGS[48];
static uType* TYPES[6];

namespace g{

// public partial sealed class SubPage_po
// {
// static SubPage_po()
static void SubPage_po__cctor_4_fn(uType* __type)
{
    SubPage_po::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"temp_eb2"*/]);
    SubPage_po::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void SubPage_po_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb2");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("btnBackClick_po");
    ::STRINGS[3] = uString::Const("po_STATUS");
    ::STRINGS[4] = uString::Const("po_BP_NM");
    ::STRINGS[5] = uString::Const("po_PO_NO");
    ::STRINGS[6] = uString::Const("/");
    ::STRINGS[7] = uString::Const("po_PO_SEQ");
    ::STRINGS[8] = uString::Const("po_PO_DT");
    ::STRINGS[9] = uString::Const("po_DLVY_HOPE_DT");
    ::STRINGS[10] = uString::Const("po_DLVY_AVL_DT");
    ::STRINGS[11] = uString::Const("po_ITEM_CD");
    ::STRINGS[12] = uString::Const("po_ITEM_NM");
    ::STRINGS[13] = uString::Const("po_SPEC");
    ::STRINGS[14] = uString::Const("po_MAKER");
    ::STRINGS[15] = uString::Const("po_QTY");
    ::STRINGS[16] = uString::Const(" ");
    ::STRINGS[17] = uString::Const("po_UNIT");
    ::STRINGS[18] = uString::Const("po_PRC");
    ::STRINGS[19] = uString::Const("po_ORDER_USER_NM");
    ::STRINGS[20] = uString::Const(" / ");
    ::STRINGS[21] = uString::Const("po_ORDER_DEPT_NM");
    ::STRINGS[22] = uString::Const("po_REC_USR_NM");
    ::STRINGS[23] = uString::Const("po_REC_DEPT_NM");
    ::STRINGS[24] = uString::Const("po_CLAIM_NAME");
    ::STRINGS[25] = uString::Const("po_DLVY_USR_NM");
    ::STRINGS[26] = uString::Const("po_REMARK");
    ::STRINGS[27] = uString::Const("Pages/Menu_Supplier/SubPage_po.ux");
    ::STRINGS[28] = uString::Const("BACK");
    ::STRINGS[29] = uString::Const("auto");
    ::STRINGS[30] = uString::Const("100, 1*");
    ::STRINGS[31] = uString::Const("\354\247\204\355\226\211\354\203\201\355\203\234");
    ::STRINGS[32] = uString::Const("\352\263\240\352\260\235\354\202\254\353\252\205");
    ::STRINGS[33] = uString::Const("\353\260\234\354\243\274\353\262\210\355\230\270/\354\210\234\353\262\210");
    ::STRINGS[34] = uString::Const("\353\260\234\354\243\274\354\235\274\354\236\220");
    ::STRINGS[35] = uString::Const("\353\202\251\355\222\210\354\232\224\354\262\255\354\235\274");
    ::STRINGS[36] = uString::Const("\353\202\251\355\222\210\354\230\210\354\240\225\354\235\274");
    ::STRINGS[37] = uString::Const("\355\222\210\353\252\251\354\275\224\353\223\234");
    ::STRINGS[38] = uString::Const("\355\222\210\353\252\205");
    ::STRINGS[39] = uString::Const("\352\267\234\352\262\251");
    ::STRINGS[40] = uString::Const("\354\240\234\354\241\260\354\202\254");
    ::STRINGS[41] = uString::Const("\353\260\234\354\243\274\354\210\230\353\237\211");
    ::STRINGS[42] = uString::Const("\353\213\250\352\260\200");
    ::STRINGS[43] = uString::Const("\353\260\234\354\243\274\354\236\220/\353\266\200\354\204\234");
    ::STRINGS[44] = uString::Const("\354\262\255\352\265\254\354\236\220/\353\266\200\354\204\234");
    ::STRINGS[45] = uString::Const("\354\232\224\354\262\255\354\236\220/\354\235\270\354\210\230\354\236\220");
    ::STRINGS[46] = uString::Const("\353\271\204\352\263\240");
    ::STRINGS[47] = uString::Const("\n"
        "\t\texports.title = this.Parameter.map(function(param) {\n"
        "\t\t\treturn param.title;\n"
        "\t\t});\n"
        "\t");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
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
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(126,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp9_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp11_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp12_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp13_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp14_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage_po, temp15_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage_po, temp_eb2), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(SubPage_po, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&SubPage_po::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage_po::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SubPage_po__New5_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Panel_type* SubPage_po_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 146;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(SubPage_po);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SubPage_po", options);
    type->fp_build_ = SubPage_po_build;
    type->fp_ctor_ = (void*)SubPage_po__New5_fn;
    type->fp_cctor_ = SubPage_po__cctor_4_fn;
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

// public SubPage_po()
void SubPage_po__ctor_8_fn(SubPage_po* __this)
{
    __this->ctor_8();
}

// private void InitializeUX()
void SubPage_po__InitializeUX_fn(SubPage_po* __this)
{
    __this->InitializeUX();
}

// public SubPage_po New()
void SubPage_po__New5_fn(SubPage_po** __retval)
{
    *__retval = SubPage_po::New5();
}

uSStrong<uArray*> SubPage_po::__g_static_nametable1_;
::g::Uno::UX::Selector SubPage_po::__selector0_;

// public SubPage_po() [instance]
void SubPage_po::ctor_8()
{
    uStackFrame __("SubPage_po", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance]
void SubPage_po::InitializeUX()
{
    uStackFrame __("SubPage_po", "InitializeUX()");
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"btnBackClic...*/]);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"po_STATUS"*/]);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp1, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"po_BP_NM"*/]);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"po_PO_NO"*/]);
    uString* temp20 = ::STRINGS[6/*"/"*/];
    ::g::Fuse::Reactive::Constant* temp21 = ::g::Fuse::Reactive::Constant::New1(temp20);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"po_PO_SEQ"*/]);
    ::g::Fuse::Reactive::Add* temp23 = ::g::Fuse::Reactive::Add::New1(temp21, temp22);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp2, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Add* temp24 = ::g::Fuse::Reactive::Add::New1(temp19, temp23);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp3, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"po_PO_DT"*/]);
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    temp4_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp4, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"po_DLVY_HOP...*/]);
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    temp5_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp5, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"po_DLVY_AVL...*/]);
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    temp6_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp6, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"po_ITEM_CD"*/]);
    ::g::Fuse::Controls::Text* temp7 = ::g::Fuse::Controls::Text::New3();
    temp7_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp7, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"po_ITEM_NM"*/]);
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New3();
    temp8_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp8, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"po_SPEC"*/]);
    ::g::Fuse::Controls::Text* temp9 = ::g::Fuse::Controls::Text::New3();
    temp9_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp9, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"po_MAKER"*/]);
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"po_QTY"*/]);
    uString* temp33 = ::STRINGS[16/*" "*/];
    ::g::Fuse::Reactive::Constant* temp34 = ::g::Fuse::Reactive::Constant::New1(temp33);
    ::g::Fuse::Reactive::Data* temp35 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"po_UNIT"*/]);
    ::g::Fuse::Reactive::Add* temp36 = ::g::Fuse::Reactive::Add::New1(temp34, temp35);
    ::g::Fuse::Controls::Text* temp10 = ::g::Fuse::Controls::Text::New3();
    temp10_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp10, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Add* temp37 = ::g::Fuse::Reactive::Add::New1(temp32, temp36);
    ::g::Fuse::Controls::Text* temp11 = ::g::Fuse::Controls::Text::New3();
    temp11_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp11, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Data* temp38 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"po_PRC"*/]);
    ::g::Fuse::Reactive::Data* temp39 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"po_ORDER_US...*/]);
    uString* temp40 = ::STRINGS[20/*" / "*/];
    ::g::Fuse::Reactive::Constant* temp41 = ::g::Fuse::Reactive::Constant::New1(temp40);
    ::g::Fuse::Reactive::Data* temp42 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"po_ORDER_DE...*/]);
    ::g::Fuse::Reactive::Add* temp43 = ::g::Fuse::Reactive::Add::New1(temp41, temp42);
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New3();
    temp12_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp12, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Add* temp44 = ::g::Fuse::Reactive::Add::New1(temp39, temp43);
    ::g::Fuse::Reactive::Data* temp45 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"po_REC_USR_NM"*/]);
    uString* temp46 = ::STRINGS[20/*" / "*/];
    ::g::Fuse::Reactive::Constant* temp47 = ::g::Fuse::Reactive::Constant::New1(temp46);
    ::g::Fuse::Reactive::Data* temp48 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"po_REC_DEPT...*/]);
    ::g::Fuse::Reactive::Add* temp49 = ::g::Fuse::Reactive::Add::New1(temp47, temp48);
    ::g::Fuse::Controls::Text* temp13 = ::g::Fuse::Controls::Text::New3();
    temp13_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp13, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Add* temp50 = ::g::Fuse::Reactive::Add::New1(temp45, temp49);
    ::g::Fuse::Reactive::Data* temp51 = ::g::Fuse::Reactive::Data::New1(::STRINGS[24/*"po_CLAIM_NAME"*/]);
    uString* temp52 = ::STRINGS[20/*" / "*/];
    ::g::Fuse::Reactive::Constant* temp53 = ::g::Fuse::Reactive::Constant::New1(temp52);
    ::g::Fuse::Reactive::Data* temp54 = ::g::Fuse::Reactive::Data::New1(::STRINGS[25/*"po_DLVY_USR...*/]);
    ::g::Fuse::Reactive::Add* temp55 = ::g::Fuse::Reactive::Add::New1(temp53, temp54);
    ::g::Fuse::Controls::Text* temp14 = ::g::Fuse::Controls::Text::New3();
    temp14_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp14, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Add* temp56 = ::g::Fuse::Reactive::Add::New1(temp51, temp55);
    ::g::Fuse::Controls::Text* temp15 = ::g::Fuse::Controls::Text::New3();
    temp15_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp15, SubPage_po::__selector0_);
    ::g::Fuse::Reactive::Data* temp57 = ::g::Fuse::Reactive::Data::New1(::STRINGS[26/*"po_REMARK"*/]);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SubPage_po::__g_static_nametable1_);
    ::g::Fuse::Controls::DockPanel* temp58 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Button* temp59 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Image* temp60 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp61 = ::g::Fuse::Controls::Text::New3();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp16);
    ::g::Fuse::Controls::ScrollView* temp62 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::DockPanel* temp63 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp64 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::DockPanel* temp65 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp66 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp67 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::SolidColor* temp68 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Reactive::DataBinding* temp69 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp17, 3);
    ::g::Fuse::Controls::Text* temp70 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp71 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp18, 3);
    ::g::Fuse::Controls::Text* temp72 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp73 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp24, 3);
    ::g::Fuse::Controls::Text* temp74 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp75 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp25, 3);
    ::g::Fuse::Controls::Text* temp76 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp77 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp26, 3);
    ::g::Fuse::Controls::Text* temp78 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp79 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp27, 3);
    ::g::Fuse::Controls::Rectangle* temp80 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp81 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp82 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp28, 3);
    ::g::Fuse::Controls::Text* temp83 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp84 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp29, 3);
    ::g::Fuse::Controls::Text* temp85 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp86 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp30, 3);
    ::g::Fuse::Controls::Text* temp87 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp88 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp31, 3);
    ::g::Fuse::Controls::Text* temp89 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp90 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp37, 3);
    ::g::Fuse::Controls::Text* temp91 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp92 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Value_inst, (uObject*)temp38, 3);
    ::g::Fuse::Controls::Rectangle* temp93 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp94 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp95 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Value_inst, (uObject*)temp44, 3);
    ::g::Fuse::Controls::Text* temp96 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp97 = ::g::Fuse::Reactive::DataBinding::New1(temp13_Value_inst, (uObject*)temp50, 3);
    ::g::Fuse::Controls::Text* temp98 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp99 = ::g::Fuse::Reactive::DataBinding::New1(temp14_Value_inst, (uObject*)temp56, 3);
    ::g::Fuse::Controls::Text* temp100 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp101 = ::g::Fuse::Reactive::DataBinding::New1(temp15_Value_inst, (uObject*)temp57, 3);
    ::g::Fuse::Drawing::Stroke* temp102 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Rectangle* temp103 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::JavaScript* temp104 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    Height(::g::Uno::UX::Size__New1(100.0f, 4));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp58->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp58->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp58->Alignment(0);
    temp58->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp58->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp58->SourceLineNumber(2);
    temp58->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    temp59->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp59->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp59->Alignment(9);
    temp59->Margin(::g::Uno::Float4__New2(10.0f, 7.0f, 0.0f, 0.0f));
    temp59->SourceLineNumber(3);
    temp59->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp59, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp59, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    temp60->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp60->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp60->Alignment(9);
    temp60->SourceLineNumber(4);
    temp60->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp60->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::backeb15b2d1()));
    temp61->Value(::STRINGS[28/*"BACK"*/]);
    temp61->TextWrapping(0);
    temp61->FontSize(18.0f);
    temp61->TextAlignment(0);
    temp61->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp61->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp61->Alignment(0);
    temp61->Margin(::g::Uno::Float4__New2(25.0f, 5.0f, 0.0f, 0.0f));
    temp61->SourceLineNumber(5);
    temp61->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp61->Font(::g::MainView::AGOTHIC14());
    temp16->SourceLineNumber(3);
    temp16->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp62->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp62->Alignment(0);
    temp62->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 30.0f));
    temp62->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp62->SourceLineNumber(8);
    temp62->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp62, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    temp63->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp63->Alignment(0);
    temp63->SourceLineNumber(9);
    temp63->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp103);
    temp64->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.9843137f));
    temp64->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp64->Padding(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 5.0f));
    temp64->SourceLineNumber(10);
    temp64->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp64, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Strokes()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    temp65->Alignment(0);
    temp65->SourceLineNumber(11);
    temp65->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    temp66->Rows(::STRINGS[29/*"auto"*/]);
    temp66->Columns(::STRINGS[30/*"100, 1*"*/]);
    temp66->ColumnCount(2);
    temp66->CellSpacing(5.0f);
    temp66->SourceLineNumber(12);
    temp66->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp66, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp89);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp93);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp100);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    temp67->Value(::STRINGS[31/*"진행상태"*/]);
    temp67->FontSize(15.0f);
    temp67->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp67->Alignment(0);
    temp67->SourceLineNumber(13);
    temp67->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp67, 2);
    temp67->Font(::g::MainView::AGOTHIC14());
    temp67->Background(temp68);
    temp->TextWrapping(0);
    temp->FontSize(15.0f);
    temp->TextAlignment(2);
    temp->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp->Alignment(0);
    temp->SourceLineNumber(16);
    temp->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 2);
    temp->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp69);
    temp17->SourceLineNumber(16);
    temp17->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp70->Value(::STRINGS[32/*"고객사명"*/]);
    temp70->FontSize(15.0f);
    temp70->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp70->Alignment(0);
    temp70->SourceLineNumber(17);
    temp70->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp70, 2);
    temp70->Font(::g::MainView::AGOTHIC14());
    temp1->TextWrapping(1);
    temp1->FontSize(15.0f);
    temp1->TextAlignment(2);
    temp1->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp1->Alignment(0);
    temp1->SourceLineNumber(18);
    temp1->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 2);
    temp1->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp71);
    temp18->SourceLineNumber(18);
    temp18->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp72->Value(::STRINGS[33/*"발주번호/순번"*/]);
    temp72->FontSize(15.0f);
    temp72->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp72->Alignment(0);
    temp72->SourceLineNumber(19);
    temp72->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp72, 2);
    temp72->Font(::g::MainView::AGOTHIC14());
    temp2->FontSize(15.0f);
    temp2->TextAlignment(2);
    temp2->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp2->Alignment(0);
    temp2->SourceLineNumber(20);
    temp2->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 2);
    temp2->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp73);
    temp24->SourceLineNumber(20);
    temp24->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp19->SourceLineNumber(20);
    temp19->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp23->SourceLineNumber(20);
    temp23->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp21->SourceLineNumber(20);
    temp21->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp22->SourceLineNumber(20);
    temp22->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp74->Value(::STRINGS[34/*"발주일자"*/]);
    temp74->FontSize(15.0f);
    temp74->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp74->Alignment(0);
    temp74->SourceLineNumber(21);
    temp74->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp74, 2);
    temp74->Font(::g::MainView::AGOTHIC14());
    temp3->FontSize(15.0f);
    temp3->TextAlignment(2);
    temp3->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp3->Alignment(0);
    temp3->SourceLineNumber(22);
    temp3->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 2);
    temp3->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp75);
    temp25->SourceLineNumber(22);
    temp25->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp76->Value(::STRINGS[35/*"납품요청일"*/]);
    temp76->FontSize(15.0f);
    temp76->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp76->Alignment(0);
    temp76->SourceLineNumber(23);
    temp76->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp76, 2);
    temp76->Font(::g::MainView::AGOTHIC14());
    temp4->FontSize(15.0f);
    temp4->TextAlignment(2);
    temp4->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp4->Alignment(0);
    temp4->SourceLineNumber(24);
    temp4->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 2);
    temp4->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp77);
    temp26->SourceLineNumber(24);
    temp26->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp78->Value(::STRINGS[36/*"납품예정일"*/]);
    temp78->FontSize(15.0f);
    temp78->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp78->Alignment(0);
    temp78->SourceLineNumber(25);
    temp78->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp78, 2);
    temp78->Font(::g::MainView::AGOTHIC14());
    temp5->FontSize(15.0f);
    temp5->TextAlignment(2);
    temp5->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp5->Alignment(0);
    temp5->SourceLineNumber(26);
    temp5->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp5, 2);
    temp5->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp79);
    temp27->SourceLineNumber(26);
    temp27->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp80->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.254902f));
    temp80->Height(::g::Uno::UX::Size__New1(0.5f, 1));
    temp80->Alignment(4);
    temp80->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp80->SourceLineNumber(31);
    temp80->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp80, 2);
    temp81->Value(::STRINGS[37/*"품목코드"*/]);
    temp81->FontSize(15.0f);
    temp81->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp81->Alignment(0);
    temp81->SourceLineNumber(32);
    temp81->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp81, 2);
    temp81->Font(::g::MainView::AGOTHIC14());
    temp6->FontSize(15.0f);
    temp6->TextAlignment(2);
    temp6->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp6->Alignment(0);
    temp6->SourceLineNumber(33);
    temp6->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp6, 2);
    temp6->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp82);
    temp28->SourceLineNumber(33);
    temp28->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp83->Value(::STRINGS[38/*"품명"*/]);
    temp83->FontSize(15.0f);
    temp83->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp83->Alignment(0);
    temp83->SourceLineNumber(34);
    temp83->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp83, 2);
    temp83->Font(::g::MainView::AGOTHIC14());
    temp7->FontSize(15.0f);
    temp7->TextAlignment(2);
    temp7->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp7->Alignment(0);
    temp7->SourceLineNumber(35);
    temp7->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp7, 2);
    temp7->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp84);
    temp29->SourceLineNumber(35);
    temp29->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp85->Value(::STRINGS[39/*"규격"*/]);
    temp85->FontSize(15.0f);
    temp85->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp85->Alignment(0);
    temp85->SourceLineNumber(36);
    temp85->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp85, 2);
    temp85->Font(::g::MainView::AGOTHIC14());
    temp8->FontSize(15.0f);
    temp8->TextAlignment(2);
    temp8->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp8->Alignment(0);
    temp8->SourceLineNumber(37);
    temp8->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp8, 2);
    temp8->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp86);
    temp30->SourceLineNumber(37);
    temp30->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp87->Value(::STRINGS[40/*"제조사"*/]);
    temp87->FontSize(15.0f);
    temp87->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp87->Alignment(0);
    temp87->SourceLineNumber(38);
    temp87->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp87, 2);
    temp87->Font(::g::MainView::AGOTHIC14());
    temp9->FontSize(15.0f);
    temp9->TextAlignment(2);
    temp9->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp9->Alignment(0);
    temp9->SourceLineNumber(39);
    temp9->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp9, 2);
    temp9->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp88);
    temp31->SourceLineNumber(39);
    temp31->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp89->Value(::STRINGS[41/*"발주수량"*/]);
    temp89->FontSize(15.0f);
    temp89->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp89->Alignment(0);
    temp89->SourceLineNumber(40);
    temp89->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp89, 2);
    temp89->Font(::g::MainView::AGOTHIC14());
    temp10->FontSize(15.0f);
    temp10->TextAlignment(2);
    temp10->TextColor(::g::Uno::Float4__New2(0.7803922f, 0.145098f, 0.282353f, 1.0f));
    temp10->Alignment(0);
    temp10->SourceLineNumber(41);
    temp10->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp10, 2);
    temp10->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp90);
    temp37->SourceLineNumber(41);
    temp37->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp32->SourceLineNumber(41);
    temp32->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp36->SourceLineNumber(41);
    temp36->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp34->SourceLineNumber(41);
    temp34->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp35->SourceLineNumber(41);
    temp35->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp91->Value(::STRINGS[42/*"단가"*/]);
    temp91->FontSize(15.0f);
    temp91->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp91->Alignment(0);
    temp91->SourceLineNumber(42);
    temp91->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp91, 2);
    temp91->Font(::g::MainView::AGOTHIC14());
    temp11->FontSize(15.0f);
    temp11->TextAlignment(2);
    temp11->TextColor(::g::Uno::Float4__New2(0.7803922f, 0.145098f, 0.282353f, 1.0f));
    temp11->Alignment(0);
    temp11->SourceLineNumber(43);
    temp11->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp11, 2);
    temp11->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp92);
    temp38->SourceLineNumber(43);
    temp38->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp93->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.254902f));
    temp93->Height(::g::Uno::UX::Size__New1(0.5f, 1));
    temp93->Alignment(4);
    temp93->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp93->SourceLineNumber(44);
    temp93->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp93, 2);
    temp94->Value(::STRINGS[43/*"발주자/부서"*/]);
    temp94->FontSize(15.0f);
    temp94->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp94->Alignment(0);
    temp94->SourceLineNumber(45);
    temp94->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp94, 2);
    temp94->Font(::g::MainView::AGOTHIC14());
    temp12->FontSize(15.0f);
    temp12->TextAlignment(2);
    temp12->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp12->Alignment(0);
    temp12->SourceLineNumber(46);
    temp12->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp12, 2);
    temp12->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp95);
    temp44->SourceLineNumber(46);
    temp44->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp39->SourceLineNumber(46);
    temp39->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp43->SourceLineNumber(46);
    temp43->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp41->SourceLineNumber(46);
    temp41->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp42->SourceLineNumber(46);
    temp42->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp96->Value(::STRINGS[44/*"청구자/부서"*/]);
    temp96->FontSize(15.0f);
    temp96->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp96->Alignment(0);
    temp96->SourceLineNumber(47);
    temp96->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp96, 2);
    temp96->Font(::g::MainView::AGOTHIC14());
    temp13->FontSize(15.0f);
    temp13->TextAlignment(2);
    temp13->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp13->Alignment(0);
    temp13->SourceLineNumber(48);
    temp13->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp13, 2);
    temp13->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp97);
    temp50->SourceLineNumber(48);
    temp50->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp45->SourceLineNumber(48);
    temp45->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp49->SourceLineNumber(48);
    temp49->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp47->SourceLineNumber(48);
    temp47->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp48->SourceLineNumber(48);
    temp48->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp98->Value(::STRINGS[45/*"요청자/인수자"*/]);
    temp98->FontSize(15.0f);
    temp98->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp98->Alignment(0);
    temp98->SourceLineNumber(49);
    temp98->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp98, 2);
    temp98->Font(::g::MainView::AGOTHIC14());
    temp14->TextWrapping(1);
    temp14->FontSize(15.0f);
    temp14->TextAlignment(2);
    temp14->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp14->Alignment(0);
    temp14->SourceLineNumber(50);
    temp14->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp14, 2);
    temp14->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp99);
    temp56->SourceLineNumber(50);
    temp56->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp51->SourceLineNumber(50);
    temp51->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp55->SourceLineNumber(50);
    temp55->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp53->SourceLineNumber(50);
    temp53->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp54->SourceLineNumber(50);
    temp54->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp100->Value(::STRINGS[46/*"비고"*/]);
    temp100->FontSize(15.0f);
    temp100->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp100->Alignment(0);
    temp100->SourceLineNumber(51);
    temp100->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp100, 2);
    temp100->Font(::g::MainView::AGOTHIC14());
    temp15->TextWrapping(1);
    temp15->FontSize(13.0f);
    temp15->TextAlignment(2);
    temp15->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp15->Alignment(0);
    temp15->SourceLineNumber(52);
    temp15->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp15, 2);
    temp15->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp101);
    temp57->SourceLineNumber(52);
    temp57->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp102->Color(::g::Uno::Float4__New2(0.4431373f, 0.4313726f, 0.4313726f, 0.4705882f));
    temp102->Width(1.0f);
    temp103->Height(::g::Uno::UX::Size__New1(300.0f, 1));
    temp103->Alignment(0);
    temp103->Opacity(1.0f);
    temp103->SourceLineNumber(57);
    temp103->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp103, 2);
    temp104->Code(::STRINGS[47/*"\n\t\texpor...*/]);
    temp104->LineNumber(62);
    temp104->FileName(::STRINGS[27/*"Pages/Menu_...*/]);
    temp104->SourceLineNumber(62);
    temp104->SourceFileName(::STRINGS[27/*"Pages/Menu_...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp104);
}

// public SubPage_po New() [static]
SubPage_po* SubPage_po::New5()
{
    SubPage_po* obj1 = (SubPage_po*)uNew(SubPage_po_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
