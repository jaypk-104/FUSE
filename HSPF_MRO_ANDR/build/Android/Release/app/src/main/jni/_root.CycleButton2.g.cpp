// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CycleButton2.h>
#include <_root.CycleButton2.Template.h>
#include <_root.HSMRO_accessor_CycleButton2_Types.h>
#include <_root.HSMRO_CycleButton2_CurrentType_Property.h>
#include <_root.HSMRO_CycleButton2_Types_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_Color_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_Value_Property.h>
#include <_root.HSMRO_FuseReactiveEach_Items_Property.h>
#include <_root.HSMRO_TypeIndicator_IsActive_Property.h>
#include <_root.MainView.h>
#include <_root.TypeIndicator.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Equal.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IndexFunction.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
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
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[3];
static uType* TYPES[1];

namespace g{

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/CycleButton2.g.uno
// --------------------------------------------------------------

// public partial sealed class CycleButton2
// {
// static CycleButton2()
static void CycleButton2__cctor_5_fn(uType* __type)
{
    CycleButton2::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 1, uString::Const("temp_eb101"));
    CycleButton2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Types"));
    CycleButton2::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("CurrentType"));
    CycleButton2::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    CycleButton2::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Color"));
    CycleButton2::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
}

static void CycleButton2_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::HSMRO_accessor_CycleButton2_Types_typeof(),
        ::g::MainView_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface18),
        ::g::Fuse::Drawing::IDrawObjectWatcherFeedback_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface19));
    type->SetFields(118,
        uObject_typeof(), offsetof(CycleButton2, _field_Types), 0,
        ::g::Uno::Int_typeof(), offsetof(CycleButton2, _field_CurrentType), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CycleButton2, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(CycleButton2, temp_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(CycleButton2, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(CycleButton2, this_Types_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(CycleButton2, this_CurrentType_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(CycleButton2, temp_eb101), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(CycleButton2, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&CycleButton2::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CycleButton2::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CycleButton2::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CycleButton2::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CycleButton2::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CycleButton2::__selector4_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Shape_type* CycleButton2_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Rectangle_typeof();
    options.FieldCount = 133;
    options.InterfaceCount = 20;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(CycleButton2);
    options.TypeSize = sizeof(::g::Fuse::Controls::Shape_type);
    type = (::g::Fuse::Controls::Shape_type*)uClassType::New("CycleButton2", options);
    type->fp_build_ = CycleButton2_build;
    type->fp_ctor_ = (void*)CycleButton2__New4_fn;
    type->fp_cctor_ = CycleButton2__cctor_5_fn;
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

// public CycleButton2()
void CycleButton2__ctor_8_fn(CycleButton2* __this)
{
    __this->ctor_8();
}

// public int get_CurrentType()
void CycleButton2__get_CurrentType_fn(CycleButton2* __this, int32_t* __retval)
{
    *__retval = __this->CurrentType();
}

// public void set_CurrentType(int value)
void CycleButton2__set_CurrentType_fn(CycleButton2* __this, int32_t* value)
{
    __this->CurrentType(*value);
}

// private void InitializeUX()
void CycleButton2__InitializeUX_fn(CycleButton2* __this)
{
    __this->InitializeUX();
}

// public CycleButton2 New()
void CycleButton2__New4_fn(CycleButton2** __retval)
{
    *__retval = CycleButton2::New4();
}

// public void SetCurrentType(int value, Uno.UX.IPropertyListener origin)
void CycleButton2__SetCurrentType_fn(CycleButton2* __this, int32_t* value, uObject* origin)
{
    __this->SetCurrentType(*value, origin);
}

// public void SetTypes(object value, Uno.UX.IPropertyListener origin)
void CycleButton2__SetTypes_fn(CycleButton2* __this, uObject* value, uObject* origin)
{
    __this->SetTypes(value, origin);
}

// public object get_Types()
void CycleButton2__get_Types_fn(CycleButton2* __this, uObject** __retval)
{
    *__retval = __this->Types();
}

// public void set_Types(object value)
void CycleButton2__set_Types_fn(CycleButton2* __this, uObject* value)
{
    __this->Types(value);
}

uSStrong<uArray*> CycleButton2::__g_static_nametable1_;
::g::Uno::UX::Selector CycleButton2::__selector0_;
::g::Uno::UX::Selector CycleButton2::__selector1_;
::g::Uno::UX::Selector CycleButton2::__selector2_;
::g::Uno::UX::Selector CycleButton2::__selector3_;
::g::Uno::UX::Selector CycleButton2::__selector4_;

// public CycleButton2() [instance]
void CycleButton2::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// public int get_CurrentType() [instance]
int32_t CycleButton2::CurrentType()
{
    return _field_CurrentType;
}

// public void set_CurrentType(int value) [instance]
void CycleButton2::CurrentType(int32_t value)
{
    SetCurrentType(value, NULL);
}

// private void InitializeUX() [instance]
void CycleButton2::InitializeUX()
{
    this_Types_inst = ::g::HSMRO_CycleButton2_Types_Property::New1(this, CycleButton2::__selector0_);
    this_CurrentType_inst = ::g::HSMRO_CycleButton2_CurrentType_Property::New1(this, CycleButton2::__selector1_);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, CycleButton2::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(uString::Const("nextState"));
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp, CycleButton2::__selector2_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("currentTypeLabel"));
    temp_Color_inst = ::g::HSMRO_FuseControlsTextControl_Color_Property::New1(temp, CycleButton2::__selector3_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(uString::Const("textColor"));
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::HSMRO_FuseReactiveEach_Items_Property::New1(temp1, CycleButton2::__selector4_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::HSMRO_accessor_CycleButton2_Types::Singleton());
    ::g::Fuse::Reactive::JavaScript* temp7 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Gestures::Clicked* temp8 = ::g::Fuse::Gestures::Clicked::New2();
    temp_eb101 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    ::g::Fuse::Gestures::WhilePressed* temp9 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp10 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Controls::DockPanel* temp11 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(temp_Color_inst, (uObject*)temp4, 3);
    ::g::Fuse::Controls::Panel* temp14 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp15 = ::g::Fuse::Controls::StackPanel::New4();
    CycleButton2__Template* temp16 = CycleButton2__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp6, 1);
    CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    Color(::g::Fuse::Drawing::Colors::White());
    StrokeColor(::g::Uno::Float4__New2(0.8784314f, 0.8784314f, 0.8784314f, 1.0f));
    StrokeWidth(2.0f);
    Padding(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp7->Code(uString::Const("\n"
        "        var Observable = require(\"FuseJS/Observable\");\n"
        "        var types = this.Types;\n"
        "        var currentType = this.CurrentType;\n"
        "        var textColor = Observable(\"#f58f87\");\n"
        "\n"
        "        var currentTypeLabel = currentType.combineLatest(types, function(idx, list) {\n"
        "            return list[idx].label;\n"
        "        });\n"
        "\n"
        "        function nextState() {\n"
        "            currentType.value = (currentType.value + 1) % types.value.length;\n"
        "\n"
        "            console.log('HERE1:' + (JSON.stringify(types.value) + '').indexOf('\353\213\250\352\260\200\355\225\251\354\235\230\353\214\200\354\203\201')); //097A60E0 56CCB4\n"
        "            console.log('HERE2:' + currentType.value); //097A60E0 56CCB4\n"
        "\n"
        "            if((JSON.stringify(types.value) + '').indexOf('\352\262\260\354\236\254\355\225\240\353\254\270\354\204\234') > -1) {\n"
        "                \n"
        "                console.log('\353\260\234\354\243\274\352\262\260\354\236\254\354\232\251\354\213\270\354\235\264\355\201\264');\n"
        "                console.log(currentType.value)\n"
        "                if(currentType.value == 1-1) {\n"
        "                    textColor.value = \"#efb134\";\n"
        "                } else if(currentType.value == 2-1) {\n"
        "                    textColor.value = \"#efb134\";\n"
        "                } else if(currentType.value == 3-1) {\n"
        "                    textColor.value = \"#F78DB9\";\n"
        "                } else if(currentType.value == 4-1) {\n"
        "                    textColor.value = \"#70B988\";\n"
        "                } else if(currentType.value == 5-1) {\n"
        "                    textColor.value = \"#0000005F\";\n"
        "                } else if(currentType.value == 6-1) {\n"
        "                    textColor.value = \"#70a0e0\";\n"
        "                } else {\n"
        "                    textColor.value = \"#0000005F\";\n"
        "                }\n"
        "            }\n"
        "            else if((JSON.stringify(types.value) + '').indexOf('\352\262\254\354\240\201\354\240\221\354\210\230') > -1) {\n"
        "                \n"
        "                console.log('\352\262\254\354\240\201\352\262\260\354\236\254\354\232\251\354\213\270\354\235\264\355\201\264');\n"
        "                if(currentType.value == 1-1) {\n"
        "                    textColor.value = \"#F78DB9\";\n"
        "                } else if(currentType.value == 2-1) {\n"
        "                    textColor.value = \"#F78DB9\";\n"
        "                } else if(currentType.value == 3-1) {\n"
        "                    textColor.value = \"#70B988\";\n"
        "                } else if(currentType.value == 4-1) {\n"
        "                    textColor.value = \"#efb134\";\n"
        "                } else if(currentType.value == 5-1) {\n"
        "                    textColor.value = \"#0000005F\";\n"
        "                } else if(currentType.value == 6-1) {\n"
        "                    textColor.value = \"#70a0e0\";\n"
        "                } else {\n"
        "                    textColor.value = \"#0000005F\";\n"
        "                }\n"
        "            } else if((JSON.stringify(types.value) + '').indexOf('\353\213\250\352\260\200\355\225\251\354\235\230\353\214\200\354\203\201') > -1) {\n"
        "\n"
        "                 console.log('\352\262\254\354\240\201\353\213\250\352\260\200\355\225\251\354\235\230\354\232\251\354\213\270\354\235\264\355\201\264');\n"
        "                 console.log('@@' + currentType.value);\n"
        "                 \n"
        "                if(currentType.value == 1) {\n"
        "                    textColor.value = \"#70B988\";\n"
        "                } else if(currentType.value == 2) {\n"
        "                    textColor.value = \"#F78DB9\";\n"
        "                } else if(currentType.value == 3) {//84e0a1\n"
        "                    textColor.value = \"#70a0e0\";\n"
        "                } else if(currentType.value == 4) {\n"
        "                    console.log('\354\236\254\352\262\254\354\240\201\354\247\204\355\226\211\354\244\221');\n"
        "                    textColor.value = \"#84e0a1\"; //37b25e\n"
        "                } else if(currentType.value == 5) {\n"
        "                    textColor.value = \"#efcf8f\"; //70a0e0\n"
        "                } else if(currentType.value == 6) {\n"
        "                    textColor.value = \"#efb134\"; //d89308\n"
        "                } else if(currentType.value == 7) {\n"
        "                    textColor.value = \"#37b25e\";\n"
        "                } else if(currentType.value == 8) {\n"
        "                    textColor.value = \"#d89308\";\n"
        "                } else {\n"
        "                     textColor.value = \"#0000005F\";\n"
        "                }\n"
        "\n"
        "            } else {\n"
        "                if(currentType.value == 1) {\n"
        "                    textColor.value = \"#F78DB9\";\n"
        "                } else if(currentType.value == 2) {\n"
        "                    textColor.value = \"#70B988\";\n"
        "                } else if(currentType.value == 3) {\n"
        "                    textColor.value = \"#70a0e0\";\n"
        "                } else if(currentType.value == 4) {\n"
        "                    textColor.value = \"#efb134\";\n"
        "                } else if(currentType.value == 5) {\n"
        "                    textColor.value = \"#0000005F\";\n"
        "                } else {\n"
        "                    textColor.value = \"#f58f87\";\n"
        "                }\n"
        "            }\n"
        "\n"
        "            \n"
        "        }\n"
        "\n"
        "        module.exports = {\n"
        "            nextState: nextState,\n"
        "            currentType: currentType,\n"
        "            currentTypeLabel: currentTypeLabel,\n"
        "            textColor: textColor,\n"
        "        }\n"
        "    "));
    temp7->LineNumber(5);
    temp7->FileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp7->SourceLineNumber(5);
    temp7->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp8->SourceLineNumber(112);
    temp8->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp8->add_Handler(uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb101)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb101);
    temp2->SourceLineNumber(112);
    temp2->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp9->SourceLineNumber(114);
    temp9->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp10);
    temp10->Factor(0.98f);
    temp11->SourceLineNumber(125);
    temp11->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp14);
    temp->Alignment(10);
    temp->SourceLineNumber(126);
    temp->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 4);
    temp->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    temp3->SourceLineNumber(126);
    temp3->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp4->SourceLineNumber(126);
    temp4->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp14->Width(::g::Uno::UX::Size__New1(16.0f, 1));
    temp14->Margin(::g::Uno::Float4__New2(8.0f, 0.0f, 0.0f, 0.0f));
    temp14->SourceLineNumber(127);
    temp14->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp14, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp15);
    temp15->ItemSpacing(2.0f);
    temp15->Alignment(10);
    temp15->SourceLineNumber(128);
    temp15->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    temp1->SourceLineNumber(129);
    temp1->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp6->SourceLineNumber(129);
    temp6->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp5->SourceLineNumber(129);
    temp5->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_Types_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_CurrentType_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
}

// public void SetCurrentType(int value, Uno.UX.IPropertyListener origin) [instance]
void CycleButton2::SetCurrentType(int32_t value, uObject* origin)
{
    if (value != _field_CurrentType)
    {
        _field_CurrentType = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("CurrentType")), origin);
    }
}

// public void SetTypes(object value, Uno.UX.IPropertyListener origin) [instance]
void CycleButton2::SetTypes(uObject* value, uObject* origin)
{
    if (value != _field_Types)
    {
        _field_Types = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("Types")), origin);
    }
}

// public object get_Types() [instance]
uObject* CycleButton2::Types()
{
    return _field_Types;
}

// public void set_Types(object value) [instance]
void CycleButton2::Types(uObject* value)
{
    SetTypes(value, NULL);
}

// public CycleButton2 New() [static]
CycleButton2* CycleButton2::New4()
{
    CycleButton2* obj1 = (CycleButton2*)uNew(CycleButton2_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/CycleButton2.g.uno
// --------------------------------------------------------------

// public partial sealed class CycleButton2.Template
// {
// static Template()
static void CycleButton2__Template__cctor__fn(uType* __type)
{
    CycleButton2__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"IsActive"*/]);
}

static void CycleButton2__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("IsActive");
    ::STRINGS[1] = uString::Const("currentType");
    ::STRINGS[2] = uString::Const("Pages/Menu_Supplier/CycleButton2.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::CycleButton2_typeof(), offsetof(CycleButton2__Template, __parent1), uFieldFlagsWeak,
        ::g::CycleButton2_typeof(), offsetof(CycleButton2__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(CycleButton2__Template, __self_IsActive_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CycleButton2__Template::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* CycleButton2__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(CycleButton2__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("CycleButton2.Template", options);
    type->fp_build_ = CycleButton2__Template_build;
    type->fp_cctor_ = CycleButton2__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))CycleButton2__Template__New1_fn;
    return type;
}

// public Template(CycleButton2 parent, CycleButton2 parentInstance)
void CycleButton2__Template__ctor_1_fn(CycleButton2__Template* __this, ::g::CycleButton2* parent, ::g::CycleButton2* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void CycleButton2__Template__New1_fn(CycleButton2__Template* __this, uObject** __retval)
{
    ::g::TypeIndicator* __self1 = ::g::TypeIndicator::New4();
    ::g::Fuse::Reactive::IndexFunction* temp = ::g::Fuse::Reactive::IndexFunction::New1();
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"currentType"*/]);
    __this->__self_IsActive_inst1 = ::g::HSMRO_TypeIndicator_IsActive_Property::New1(__self1, CycleButton2__Template::__selector0_);
    ::g::Fuse::Reactive::Equal* temp2 = ::g::Fuse::Reactive::Equal::New1(temp, temp1);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_IsActive_inst1, (uObject*)temp2, 3);
    __self1->SourceLineNumber(130);
    __self1->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp2->SourceLineNumber(130);
    temp2->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp->SourceLineNumber(130);
    temp->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp1->SourceLineNumber(130);
    temp1->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    return *__retval = __self1, void();
}

// public Template New(CycleButton2 parent, CycleButton2 parentInstance)
void CycleButton2__Template__New2_fn(::g::CycleButton2* parent, ::g::CycleButton2* parentInstance, CycleButton2__Template** __retval)
{
    *__retval = CycleButton2__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector CycleButton2__Template::__selector0_;

// public Template(CycleButton2 parent, CycleButton2 parentInstance) [instance]
void CycleButton2__Template::ctor_1(::g::CycleButton2* parent, ::g::CycleButton2* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(CycleButton2 parent, CycleButton2 parentInstance) [static]
CycleButton2__Template* CycleButton2__Template::New2(::g::CycleButton2* parent, ::g::CycleButton2* parentInstance)
{
    CycleButton2__Template* obj1 = (CycleButton2__Template*)uNew(CycleButton2__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
