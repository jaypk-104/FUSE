// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/SubPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_bundle.h>
#include <_root.HSMRO_FuseControlsTextControl_TextColor_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_Value_Property.h>
#include <_root.MainView.h>
#include <_root.SubPage.h>
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
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutRole.h>
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
static uString* STRINGS[50];
static uType* TYPES[6];

namespace g{

// public partial sealed class SubPage
// {
// static SubPage()
static void SubPage__cctor_4_fn(uType* __type)
{
    SubPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"temp_eb0"*/], ::STRINGS[1/*"temp_eb1"*/]);
    SubPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"TextColor"*/]);
    SubPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Value"*/]);
}

static void SubPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb0");
    ::STRINGS[1] = uString::Const("temp_eb1");
    ::STRINGS[2] = uString::Const("TextColor");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("btnBackClick");
    ::STRINGS[5] = uString::Const("dtl_STATUS");
    ::STRINGS[6] = uString::Const("dtl_BP_NM");
    ::STRINGS[7] = uString::Const("dtl_INQ_NO");
    ::STRINGS[8] = uString::Const("dtl_INQ_SEQ");
    ::STRINGS[9] = uString::Const("dtl_END_INQ_DT");
    ::STRINGS[10] = uString::Const("dtl_SUPP_INQ_DT");
    ::STRINGS[11] = uString::Const("dtl_ITEM_CD");
    ::STRINGS[12] = uString::Const("dtl_ITEM_NM");
    ::STRINGS[13] = uString::Const("dtl_SPEC");
    ::STRINGS[14] = uString::Const("dtl_MAKER");
    ::STRINGS[15] = uString::Const("dtl_INQ_QTY");
    ::STRINGS[16] = uString::Const(" ");
    ::STRINGS[17] = uString::Const("dtl_UNIT");
    ::STRINGS[18] = uString::Const("dtl_INQ_PRC");
    ::STRINGS[19] = uString::Const("dtl_INQ_AMT");
    ::STRINGS[20] = uString::Const("dtl_INQ_USR_NM");
    ::STRINGS[21] = uString::Const("dtl_REMARK");
    ::STRINGS[22] = uString::Const("dtl_RMARK_SUPPAD");
    ::STRINGS[23] = uString::Const("dtl_IMG_FILE_NM");
    ::STRINGS[24] = uString::Const("dtl_imgClick");
    ::STRINGS[25] = uString::Const("dtl_IMG_FILE_PC");
    ::STRINGS[26] = uString::Const("Pages/Menu_Supplier/SubPage.ux");
    ::STRINGS[27] = uString::Const("BACK");
    ::STRINGS[28] = uString::Const("auto");
    ::STRINGS[29] = uString::Const("120, 1*");
    ::STRINGS[30] = uString::Const("\354\247\204\355\226\211\354\203\201\355\203\234");
    ::STRINGS[31] = uString::Const("\352\263\240\352\260\235\354\202\254\353\252\205");
    ::STRINGS[32] = uString::Const("\352\262\254\354\240\201\353\262\210\355\230\270");
    ::STRINGS[33] = uString::Const("\352\262\254\354\240\201\354\260\250\354\210\230");
    ::STRINGS[34] = uString::Const("\352\262\254\354\240\201\353\247\210\352\260\220\354\235\274");
    ::STRINGS[35] = uString::Const("\352\262\254\354\240\201\354\240\234\354\266\234\354\235\274");
    ::STRINGS[36] = uString::Const("\355\222\210\353\252\251\354\275\224\353\223\234");
    ::STRINGS[37] = uString::Const("\355\222\210\353\252\205");
    ::STRINGS[38] = uString::Const("\352\267\234\352\262\251");
    ::STRINGS[39] = uString::Const("\354\240\234\354\241\260\354\202\254");
    ::STRINGS[40] = uString::Const("\352\262\254\354\240\201\354\210\230\353\237\211");
    ::STRINGS[41] = uString::Const("\352\262\254\354\240\201\353\213\250\352\260\200");
    ::STRINGS[42] = uString::Const("\352\262\254\354\240\201\352\270\210\354\225\241");
    ::STRINGS[43] = uString::Const("20, auto, auto, 20, 20");
    ::STRINGS[44] = uString::Const("110, 1*");
    ::STRINGS[45] = uString::Const("\354\235\230\353\242\260\354\236\220\353\252\205");
    ::STRINGS[46] = uString::Const("\353\271\204\352\263\240(from\352\264\200\353\246\254\354\236\220)");
    ::STRINGS[47] = uString::Const("\353\271\204\352\263\240(to\352\264\200\353\246\254\354\236\220)");
    ::STRINGS[48] = uString::Const("\354\262\250\353\266\200\354\235\264\353\257\270\354\247\200");
    ::STRINGS[49] = uString::Const("\n"
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
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(SubPage, temp_TextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp9_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp11_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp12_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp13_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp14_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp15_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp16_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SubPage, temp17_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SubPage, temp_eb1), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(SubPage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&SubPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SubPage::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SubPage__New5_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Panel_type* SubPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 151;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(SubPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SubPage", options);
    type->fp_build_ = SubPage_build;
    type->fp_ctor_ = (void*)SubPage__New5_fn;
    type->fp_cctor_ = SubPage__cctor_4_fn;
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

// public SubPage()
void SubPage__ctor_8_fn(SubPage* __this)
{
    __this->ctor_8();
}

// private void InitializeUX()
void SubPage__InitializeUX_fn(SubPage* __this)
{
    __this->InitializeUX();
}

// public SubPage New()
void SubPage__New5_fn(SubPage** __retval)
{
    *__retval = SubPage::New5();
}

uSStrong<uArray*> SubPage::__g_static_nametable1_;
::g::Uno::UX::Selector SubPage::__selector0_;
::g::Uno::UX::Selector SubPage::__selector1_;

// public SubPage() [instance]
void SubPage::ctor_8()
{
    uStackFrame __("SubPage", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance]
void SubPage::InitializeUX()
{
    uStackFrame __("SubPage", "InitializeUX()");
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"btnBackClick"*/]);
    ::g::Uno::Float4 temp19 = ::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_TextColor_inst = ::g::HSMRO_FuseControlsTextControl_TextColor_Property::New1(temp, SubPage::__selector0_);
    ::g::Fuse::Reactive::Constant* temp20 = ::g::Fuse::Reactive::Constant::New1(uBox(::g::Uno::Float4_typeof(), temp19));
    temp_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"dtl_STATUS"*/]);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp1, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"dtl_BP_NM"*/]);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp2, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"dtl_INQ_NO"*/]);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp3, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"dtl_INQ_SEQ"*/]);
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    temp4_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp4, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"dtl_END_INQ...*/]);
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    temp5_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp5, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"dtl_SUPP_IN...*/]);
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    temp6_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp6, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"dtl_ITEM_CD"*/]);
    ::g::Fuse::Controls::Text* temp7 = ::g::Fuse::Controls::Text::New3();
    temp7_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp7, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"dtl_ITEM_NM"*/]);
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New3();
    temp8_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp8, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"dtl_SPEC"*/]);
    ::g::Fuse::Controls::Text* temp9 = ::g::Fuse::Controls::Text::New3();
    temp9_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp9, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"dtl_MAKER"*/]);
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"dtl_INQ_QTY"*/]);
    uString* temp32 = ::STRINGS[16/*" "*/];
    ::g::Fuse::Reactive::Constant* temp33 = ::g::Fuse::Reactive::Constant::New1(temp32);
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"dtl_UNIT"*/]);
    ::g::Fuse::Reactive::Add* temp35 = ::g::Fuse::Reactive::Add::New1(temp33, temp34);
    ::g::Fuse::Controls::Text* temp10 = ::g::Fuse::Controls::Text::New3();
    temp10_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp10, SubPage::__selector1_);
    ::g::Fuse::Reactive::Add* temp36 = ::g::Fuse::Reactive::Add::New1(temp31, temp35);
    ::g::Fuse::Controls::Text* temp11 = ::g::Fuse::Controls::Text::New3();
    temp11_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp11, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp37 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"dtl_INQ_PRC"*/]);
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New3();
    temp12_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp12, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp38 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"dtl_INQ_AMT"*/]);
    ::g::Fuse::Controls::Text* temp13 = ::g::Fuse::Controls::Text::New3();
    temp13_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp13, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp39 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"dtl_INQ_USR...*/]);
    ::g::Fuse::Controls::Text* temp14 = ::g::Fuse::Controls::Text::New3();
    temp14_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp14, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp40 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"dtl_REMARK"*/]);
    ::g::Fuse::Controls::Text* temp15 = ::g::Fuse::Controls::Text::New3();
    temp15_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp15, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp41 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"dtl_RMARK_S...*/]);
    ::g::Fuse::Controls::Text* temp16 = ::g::Fuse::Controls::Text::New3();
    temp16_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp16, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp42 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"dtl_IMG_FIL...*/]);
    ::g::Fuse::Reactive::Data* temp43 = ::g::Fuse::Reactive::Data::New1(::STRINGS[24/*"dtl_imgClick"*/]);
    ::g::Fuse::Controls::Text* temp17 = ::g::Fuse::Controls::Text::New3();
    temp17_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp17, SubPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp44 = ::g::Fuse::Reactive::Data::New1(::STRINGS[25/*"dtl_IMG_FIL...*/]);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SubPage::__g_static_nametable1_);
    ::g::Fuse::Controls::DockPanel* temp45 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Button* temp46 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Image* temp47 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp48 = ::g::Fuse::Controls::Text::New3();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp18);
    ::g::Fuse::Controls::ScrollView* temp49 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::DockPanel* temp50 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp51 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp52 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::DockPanel* temp53 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp54 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp55 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::SolidColor* temp56 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Reactive::DataBinding* temp57 = ::g::Fuse::Reactive::DataBinding::New1(temp_TextColor_inst, (uObject*)temp20, 3);
    ::g::Fuse::Reactive::DataBinding* temp58 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp21, 3);
    ::g::Fuse::Controls::Text* temp59 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp60 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp22, 3);
    ::g::Fuse::Controls::Text* temp61 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp62 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp23, 3);
    ::g::Fuse::Controls::Text* temp63 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp64 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp24, 3);
    ::g::Fuse::Controls::Text* temp65 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp66 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp25, 3);
    ::g::Fuse::Controls::Text* temp67 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp68 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp26, 3);
    ::g::Fuse::Controls::Rectangle* temp69 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp70 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp71 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp27, 3);
    ::g::Fuse::Controls::Text* temp72 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp73 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp28, 3);
    ::g::Fuse::Controls::Text* temp74 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp75 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp29, 3);
    ::g::Fuse::Controls::Text* temp76 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp77 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp30, 3);
    ::g::Fuse::Controls::Text* temp78 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp79 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp36, 3);
    ::g::Fuse::Controls::Text* temp80 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp81 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Value_inst, (uObject*)temp37, 3);
    ::g::Fuse::Controls::Text* temp82 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp83 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Value_inst, (uObject*)temp38, 3);
    ::g::Fuse::Controls::Rectangle* temp84 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp85 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp86 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp87 = ::g::Fuse::Reactive::DataBinding::New1(temp13_Value_inst, (uObject*)temp39, 3);
    ::g::Fuse::Controls::Text* temp88 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp89 = ::g::Fuse::Reactive::DataBinding::New1(temp14_Value_inst, (uObject*)temp40, 3);
    ::g::Fuse::Controls::Text* temp90 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp91 = ::g::Fuse::Reactive::DataBinding::New1(temp15_Value_inst, (uObject*)temp41, 3);
    ::g::Fuse::Controls::Text* temp92 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp93 = ::g::Fuse::Reactive::DataBinding::New1(temp16_Value_inst, (uObject*)temp42, 3);
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp43);
    ::g::Fuse::Reactive::DataBinding* temp94 = ::g::Fuse::Reactive::DataBinding::New1(temp17_Value_inst, (uObject*)temp44, 3);
    ::g::Fuse::Controls::Rectangle* temp95 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::JavaScript* temp96 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    Height(::g::Uno::UX::Size__New1(100.0f, 4));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp45->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp45->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp45->Alignment(0);
    temp45->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp45->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp45->SourceLineNumber(2);
    temp45->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    temp46->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp46->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp46->Alignment(9);
    temp46->Margin(::g::Uno::Float4__New2(10.0f, 7.0f, 0.0f, 0.0f));
    temp46->SourceLineNumber(3);
    temp46->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp46, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp46, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp47->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp47->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp47->Alignment(9);
    temp47->SourceLineNumber(4);
    temp47->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp47->File(::g::Uno::UX::BundleFileSource::New1(::g::HSMRO_bundle::backeb15b2d1()));
    temp48->Value(::STRINGS[27/*"BACK"*/]);
    temp48->TextWrapping(0);
    temp48->FontSize(18.0f);
    temp48->TextAlignment(0);
    temp48->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp48->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp48->Alignment(0);
    temp48->Margin(::g::Uno::Float4__New2(25.0f, 5.0f, 0.0f, 0.0f));
    temp48->SourceLineNumber(5);
    temp48->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp18->SourceLineNumber(3);
    temp18->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp49->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp49->Alignment(0);
    temp49->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 30.0f));
    temp49->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp49->SourceLineNumber(8);
    temp49->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp49, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    temp50->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp50->Alignment(0);
    temp50->SourceLineNumber(9);
    temp50->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp95);
    temp51->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.9843137f));
    temp51->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp51->Padding(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 5.0f));
    temp51->SourceLineNumber(10);
    temp51->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp51, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Strokes()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    temp52->Color(::g::Uno::Float4__New2(0.4431373f, 0.4313726f, 0.4313726f, 0.4705882f));
    temp52->Width(1.0f);
    temp53->SourceLineNumber(12);
    temp53->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp85);
    temp54->Rows(::STRINGS[28/*"auto"*/]);
    temp54->Columns(::STRINGS[29/*"120, 1*"*/]);
    temp54->ColumnCount(2);
    temp54->CellSpacing(7.0f);
    temp54->SourceLineNumber(13);
    temp54->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp54, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp55->Value(::STRINGS[30/*"진행상태"*/]);
    temp55->FontSize(15.0f);
    temp55->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp55->Alignment(0);
    temp55->SourceLineNumber(14);
    temp55->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp55, 2);
    temp55->Font(::g::MainView::AGOTHIC14());
    temp55->Background(temp56);
    temp->FontSize(15.0f);
    temp->TextAlignment(2);
    temp->Alignment(0);
    temp->SourceLineNumber(17);
    temp->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 2);
    temp->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp58);
    temp20->SourceLineNumber(17);
    temp20->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp21->SourceLineNumber(17);
    temp21->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp59->Value(::STRINGS[31/*"고객사명"*/]);
    temp59->FontSize(15.0f);
    temp59->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp59->Alignment(0);
    temp59->SourceLineNumber(18);
    temp59->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp59, 2);
    temp59->Font(::g::MainView::AGOTHIC14());
    temp1->FontSize(15.0f);
    temp1->TextAlignment(2);
    temp1->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp1->Alignment(0);
    temp1->SourceLineNumber(19);
    temp1->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 2);
    temp1->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp60);
    temp22->SourceLineNumber(19);
    temp22->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp61->Value(::STRINGS[32/*"견적번호"*/]);
    temp61->FontSize(15.0f);
    temp61->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp61->Alignment(0);
    temp61->SourceLineNumber(20);
    temp61->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp61, 2);
    temp61->Font(::g::MainView::AGOTHIC14());
    temp2->FontSize(15.0f);
    temp2->TextAlignment(2);
    temp2->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp2->Alignment(0);
    temp2->SourceLineNumber(21);
    temp2->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 2);
    temp2->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp62);
    temp23->SourceLineNumber(21);
    temp23->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp63->Value(::STRINGS[33/*"견적차수"*/]);
    temp63->FontSize(15.0f);
    temp63->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp63->Alignment(0);
    temp63->SourceLineNumber(22);
    temp63->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp63, 2);
    temp63->Font(::g::MainView::AGOTHIC14());
    temp3->FontSize(15.0f);
    temp3->TextAlignment(2);
    temp3->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp3->Alignment(0);
    temp3->SourceLineNumber(23);
    temp3->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 2);
    temp3->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp64);
    temp24->SourceLineNumber(23);
    temp24->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp65->Value(::STRINGS[34/*"견적마감일"*/]);
    temp65->FontSize(15.0f);
    temp65->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp65->Alignment(0);
    temp65->SourceLineNumber(24);
    temp65->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp65, 2);
    temp65->Font(::g::MainView::AGOTHIC14());
    temp4->FontSize(15.0f);
    temp4->TextAlignment(2);
    temp4->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp4->Alignment(0);
    temp4->SourceLineNumber(25);
    temp4->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 2);
    temp4->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp66);
    temp25->SourceLineNumber(25);
    temp25->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp67->Value(::STRINGS[35/*"견적제출일"*/]);
    temp67->FontSize(15.0f);
    temp67->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp67->Alignment(0);
    temp67->SourceLineNumber(26);
    temp67->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp67, 2);
    temp67->Font(::g::MainView::AGOTHIC14());
    temp5->FontSize(15.0f);
    temp5->TextAlignment(2);
    temp5->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp5->Alignment(0);
    temp5->SourceLineNumber(27);
    temp5->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp5, 2);
    temp5->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp68);
    temp26->SourceLineNumber(27);
    temp26->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp69->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.254902f));
    temp69->Height(::g::Uno::UX::Size__New1(0.5f, 1));
    temp69->Alignment(4);
    temp69->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp69->SourceLineNumber(28);
    temp69->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp69, 2);
    temp70->Value(::STRINGS[36/*"품목코드"*/]);
    temp70->FontSize(15.0f);
    temp70->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp70->Alignment(0);
    temp70->SourceLineNumber(29);
    temp70->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp70, 2);
    temp70->Font(::g::MainView::AGOTHIC14());
    temp6->FontSize(15.0f);
    temp6->TextAlignment(2);
    temp6->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp6->Alignment(0);
    temp6->SourceLineNumber(30);
    temp6->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp6, 2);
    temp6->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp71);
    temp27->SourceLineNumber(30);
    temp27->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp72->Value(::STRINGS[37/*"품명"*/]);
    temp72->FontSize(15.0f);
    temp72->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp72->Alignment(0);
    temp72->SourceLineNumber(31);
    temp72->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp72, 2);
    temp72->Font(::g::MainView::AGOTHIC14());
    temp7->TextWrapping(1);
    temp7->FontSize(15.0f);
    temp7->TextAlignment(2);
    temp7->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp7->Alignment(0);
    temp7->SourceLineNumber(32);
    temp7->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp7, 2);
    temp7->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp73);
    temp28->SourceLineNumber(32);
    temp28->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp74->Value(::STRINGS[38/*"규격"*/]);
    temp74->FontSize(15.0f);
    temp74->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp74->Alignment(0);
    temp74->SourceLineNumber(33);
    temp74->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp74, 2);
    temp74->Font(::g::MainView::AGOTHIC14());
    temp8->TextWrapping(1);
    temp8->FontSize(15.0f);
    temp8->TextAlignment(2);
    temp8->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp8->Alignment(0);
    temp8->SourceLineNumber(34);
    temp8->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp8, 2);
    temp8->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp75);
    temp29->SourceLineNumber(34);
    temp29->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp76->Value(::STRINGS[39/*"제조사"*/]);
    temp76->FontSize(15.0f);
    temp76->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp76->Alignment(0);
    temp76->SourceLineNumber(35);
    temp76->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp76, 2);
    temp76->Font(::g::MainView::AGOTHIC14());
    temp9->TextWrapping(1);
    temp9->FontSize(15.0f);
    temp9->TextAlignment(2);
    temp9->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp9->Alignment(0);
    temp9->SourceLineNumber(36);
    temp9->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp9, 2);
    temp9->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp77);
    temp30->SourceLineNumber(36);
    temp30->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp78->Value(::STRINGS[40/*"견적수량"*/]);
    temp78->FontSize(15.0f);
    temp78->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp78->Alignment(0);
    temp78->SourceLineNumber(37);
    temp78->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp78, 2);
    temp78->Font(::g::MainView::AGOTHIC14());
    temp10->FontSize(15.0f);
    temp10->TextAlignment(2);
    temp10->TextColor(::g::Uno::Float4__New2(0.7803922f, 0.145098f, 0.282353f, 1.0f));
    temp10->Alignment(0);
    temp10->SourceLineNumber(38);
    temp10->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp10, 2);
    temp10->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp79);
    temp36->SourceLineNumber(38);
    temp36->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp31->SourceLineNumber(38);
    temp31->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp35->SourceLineNumber(38);
    temp35->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp33->SourceLineNumber(38);
    temp33->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp34->SourceLineNumber(38);
    temp34->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp80->Value(::STRINGS[41/*"견적단가"*/]);
    temp80->FontSize(15.0f);
    temp80->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp80->Alignment(0);
    temp80->SourceLineNumber(39);
    temp80->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp80, 2);
    temp80->Font(::g::MainView::AGOTHIC14());
    temp11->FontSize(15.0f);
    temp11->TextAlignment(2);
    temp11->TextColor(::g::Uno::Float4__New2(0.7803922f, 0.145098f, 0.282353f, 1.0f));
    temp11->Alignment(0);
    temp11->SourceLineNumber(40);
    temp11->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp11, 2);
    temp11->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp81);
    temp37->SourceLineNumber(40);
    temp37->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp82->Value(::STRINGS[42/*"견적금액"*/]);
    temp82->FontSize(15.0f);
    temp82->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp82->Alignment(0);
    temp82->SourceLineNumber(41);
    temp82->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp82, 2);
    temp82->Font(::g::MainView::AGOTHIC14());
    temp12->FontSize(15.0f);
    temp12->TextAlignment(2);
    temp12->TextColor(::g::Uno::Float4__New2(0.7803922f, 0.145098f, 0.282353f, 1.0f));
    temp12->Alignment(0);
    temp12->SourceLineNumber(42);
    temp12->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp12, 2);
    temp12->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp83);
    temp38->SourceLineNumber(42);
    temp38->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp84->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.254902f));
    temp84->Height(::g::Uno::UX::Size__New1(0.5f, 1));
    temp84->Alignment(4);
    temp84->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp84->SourceLineNumber(44);
    temp84->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp84, 2);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp84, 2);
    temp85->Rows(::STRINGS[43/*"20, auto, a...*/]);
    temp85->RowCount(5);
    temp85->Columns(::STRINGS[44/*"110, 1*"*/]);
    temp85->ColumnCount(2);
    temp85->CellSpacing(7.0f);
    temp85->SourceLineNumber(45);
    temp85->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp85, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp90);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp92);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp86->Value(::STRINGS[45/*"의뢰자명"*/]);
    temp86->FontSize(15.0f);
    temp86->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp86->Alignment(0);
    temp86->SourceLineNumber(46);
    temp86->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp86, 2);
    temp86->Font(::g::MainView::AGOTHIC14());
    temp13->FontSize(15.0f);
    temp13->TextAlignment(2);
    temp13->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp13->Alignment(0);
    temp13->SourceLineNumber(47);
    temp13->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp13, 2);
    temp13->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp87);
    temp39->SourceLineNumber(47);
    temp39->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp88->Value(::STRINGS[46/*"비고(from관리자)"*/]);
    temp88->TextWrapping(0);
    temp88->FontSize(15.0f);
    temp88->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp88->Alignment(0);
    temp88->SourceLineNumber(48);
    temp88->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp88, 2);
    temp88->Font(::g::MainView::AGOTHIC14());
    temp14->TextWrapping(1);
    temp14->FontSize(13.0f);
    temp14->TextAlignment(2);
    temp14->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp14->Alignment(0);
    temp14->Layer(2);
    temp14->LayoutRole(0);
    temp14->SourceLineNumber(49);
    temp14->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp14, 2);
    temp14->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp89);
    temp40->SourceLineNumber(49);
    temp40->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp90->Value(::STRINGS[47/*"비고(to관리자)"*/]);
    temp90->FontSize(15.0f);
    temp90->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp90->Alignment(0);
    temp90->SourceLineNumber(50);
    temp90->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp90, 2);
    temp90->Font(::g::MainView::AGOTHIC14());
    temp15->TextWrapping(1);
    temp15->FontSize(13.0f);
    temp15->TextAlignment(2);
    temp15->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp15->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp15->Alignment(0);
    temp15->SourceLineNumber(51);
    temp15->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp15, 2);
    temp15->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp91);
    temp41->SourceLineNumber(51);
    temp41->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp92->Value(::STRINGS[48/*"첨부이미지"*/]);
    temp92->FontSize(15.0f);
    temp92->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp92->Alignment(0);
    temp92->SourceLineNumber(52);
    temp92->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp92, 2);
    temp92->Font(::g::MainView::AGOTHIC14());
    temp16->FontSize(13.0f);
    temp16->TextAlignment(2);
    temp16->TextColor(::g::Uno::Float4__New2(0.2352941f, 0.2745098f, 0.3882353f, 1.0f));
    temp16->Alignment(0);
    temp16->SourceLineNumber(53);
    temp16->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp16, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp16, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    temp16->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp93);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp42->SourceLineNumber(53);
    temp42->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp43->SourceLineNumber(53);
    temp43->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp17->FontSize(11.0f);
    temp17->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp17->Alignment(9);
    temp17->Visibility(2);
    temp17->SourceLineNumber(54);
    temp17->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp94);
    temp44->SourceLineNumber(54);
    temp44->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp95->Height(::g::Uno::UX::Size__New1(300.0f, 1));
    temp95->Alignment(0);
    temp95->Opacity(1.0f);
    temp95->SourceLineNumber(59);
    temp95->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp95, 2);
    temp96->Code(::STRINGS[49/*"\n\t\texpor...*/]);
    temp96->LineNumber(64);
    temp96->FileName(::STRINGS[26/*"Pages/Menu_...*/]);
    temp96->SourceLineNumber(64);
    temp96->SourceFileName(::STRINGS[26/*"Pages/Menu_...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp96);
}

// public SubPage New() [static]
SubPage* SubPage::New5()
{
    SubPage* obj1 = (SubPage*)uNew(SubPage_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
