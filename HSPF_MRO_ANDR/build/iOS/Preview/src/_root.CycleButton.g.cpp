// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CycleButton.h>
#include <_root.CycleButton.Template.h>
#include <_root.HSMRO_accessor_CycleButton_Modes.h>
#include <_root.HSMRO_CycleButton_CurrentMode_Property.h>
#include <_root.HSMRO_CycleButton_Modes_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_Value_Property.h>
#include <_root.HSMRO_FuseReactiveEach_Items_Property.h>
#include <_root.HSMRO_ModeIndicator_IsActive_Property.h>
#include <_root.MainView.h>
#include <_root.ModeIndicator.h>
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
#include <Uno.Float4.h>
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

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/CycleButton.g.uno
// --------------------------------------------------------------------------------

// public partial sealed class CycleButton
// {
// static CycleButton()
static void CycleButton__cctor_5_fn(uType* __type)
{
    CycleButton::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 1, uString::Const("temp_eb100"));
    CycleButton::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Modes"));
    CycleButton::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("CurrentMode"));
    CycleButton::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    CycleButton::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
}

static void CycleButton_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::HSMRO_accessor_CycleButton_Modes_typeof(),
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
    type->SetFields(122,
        uObject_typeof(), offsetof(CycleButton, _field_Modes), 0,
        ::g::Uno::Int_typeof(), offsetof(CycleButton, _field_CurrentMode), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CycleButton, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(CycleButton, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(CycleButton, this_Modes_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(CycleButton, this_CurrentMode_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(CycleButton, temp_eb100), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(CycleButton, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&CycleButton::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CycleButton::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CycleButton::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CycleButton::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CycleButton::__selector3_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_CurrentMode", NULL, (void*)CycleButton__get_CurrentMode_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_CurrentMode", NULL, (void*)CycleButton__set_CurrentMode_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Modes", NULL, (void*)CycleButton__get_Modes_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Modes", NULL, (void*)CycleButton__set_Modes_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)CycleButton__New4_fn, 0, true, type, 0),
        new uFunction("SetCurrentMode", NULL, (void*)CycleButton__SetCurrentMode_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetModes", NULL, (void*)CycleButton__SetModes_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

::g::Fuse::Controls::Shape_type* CycleButton_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Rectangle_typeof();
    options.FieldCount = 135;
    options.InterfaceCount = 20;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(CycleButton);
    options.TypeSize = sizeof(::g::Fuse::Controls::Shape_type);
    type = (::g::Fuse::Controls::Shape_type*)uClassType::New("CycleButton", options);
    type->fp_build_ = CycleButton_build;
    type->fp_ctor_ = (void*)CycleButton__New4_fn;
    type->fp_cctor_ = CycleButton__cctor_5_fn;
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

// public CycleButton()
void CycleButton__ctor_8_fn(CycleButton* __this)
{
    __this->ctor_8();
}

// public int get_CurrentMode()
void CycleButton__get_CurrentMode_fn(CycleButton* __this, int32_t* __retval)
{
    *__retval = __this->CurrentMode();
}

// public void set_CurrentMode(int value)
void CycleButton__set_CurrentMode_fn(CycleButton* __this, int32_t* value)
{
    __this->CurrentMode(*value);
}

// private void InitializeUX()
void CycleButton__InitializeUX_fn(CycleButton* __this)
{
    __this->InitializeUX();
}

// public object get_Modes()
void CycleButton__get_Modes_fn(CycleButton* __this, uObject** __retval)
{
    *__retval = __this->Modes();
}

// public void set_Modes(object value)
void CycleButton__set_Modes_fn(CycleButton* __this, uObject* value)
{
    __this->Modes(value);
}

// public CycleButton New()
void CycleButton__New4_fn(CycleButton** __retval)
{
    *__retval = CycleButton::New4();
}

// public void SetCurrentMode(int value, Uno.UX.IPropertyListener origin)
void CycleButton__SetCurrentMode_fn(CycleButton* __this, int32_t* value, uObject* origin)
{
    __this->SetCurrentMode(*value, origin);
}

// public void SetModes(object value, Uno.UX.IPropertyListener origin)
void CycleButton__SetModes_fn(CycleButton* __this, uObject* value, uObject* origin)
{
    __this->SetModes(value, origin);
}

uSStrong<uArray*> CycleButton::__g_static_nametable1_;
::g::Uno::UX::Selector CycleButton::__selector0_;
::g::Uno::UX::Selector CycleButton::__selector1_;
::g::Uno::UX::Selector CycleButton::__selector2_;
::g::Uno::UX::Selector CycleButton::__selector3_;

// public CycleButton() [instance]
void CycleButton::ctor_8()
{
    uStackFrame __("CycleButton", ".ctor()");
    ctor_7();
    InitializeUX();
}

// public int get_CurrentMode() [instance]
int32_t CycleButton::CurrentMode()
{
    return _field_CurrentMode;
}

// public void set_CurrentMode(int value) [instance]
void CycleButton::CurrentMode(int32_t value)
{
    uStackFrame __("CycleButton", "set_CurrentMode(int)");
    SetCurrentMode(value, NULL);
}

// private void InitializeUX() [instance]
void CycleButton::InitializeUX()
{
    uStackFrame __("CycleButton", "InitializeUX()");
    this_Modes_inst = ::g::HSMRO_CycleButton_Modes_Property::New1(this, CycleButton::__selector0_);
    this_CurrentMode_inst = ::g::HSMRO_CycleButton_CurrentMode_Property::New1(this, CycleButton::__selector1_);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, CycleButton::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(uString::Const("nextState"));
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp, CycleButton::__selector2_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("currentModeLabel"));
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::HSMRO_FuseReactiveEach_Items_Property::New1(temp1, CycleButton::__selector3_);
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::HSMRO_accessor_CycleButton_Modes::Singleton());
    ::g::Fuse::Reactive::JavaScript* temp6 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Gestures::Clicked* temp7 = ::g::Fuse::Gestures::Clicked::New2();
    temp_eb100 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    ::g::Fuse::Gestures::WhilePressed* temp8 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp9 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Controls::DockPanel* temp10 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Controls::Panel* temp12 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp13 = ::g::Fuse::Controls::StackPanel::New4();
    CycleButton__Template* temp14 = CycleButton__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp5, 1);
    CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    Color(::g::Fuse::Drawing::Colors::White());
    StrokeColor(::g::Uno::Float4__New2(0.8784314f, 0.8784314f, 0.8784314f, 1.0f));
    StrokeWidth(2.0f);
    Padding(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp6->Code(uString::Const("\n"
        "        var modes = this.Modes;\n"
        "        var currentMode = this.CurrentMode;\n"
        "\n"
        "        var currentModeLabel = currentMode.combineLatest(modes, function(idx, list) {\n"
        "            return list[idx].label;\n"
        "        });\n"
        "\n"
        "        function nextState() {\n"
        "            currentMode.value = (currentMode.value + 1) % modes.value.length;\n"
        "        }\n"
        "\n"
        "        module.exports = {\n"
        "            nextState: nextState,\n"
        "            currentMode: currentMode,\n"
        "            currentModeLabel: currentModeLabel\n"
        "        }\n"
        "    "));
    temp6->LineNumber(5);
    temp6->FileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp6->SourceLineNumber(5);
    temp6->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp7->SourceLineNumber(24);
    temp7->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp7->add_Handler(uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb100)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb100);
    temp2->SourceLineNumber(24);
    temp2->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp8->SourceLineNumber(26);
    temp8->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp9);
    temp9->Factor(0.98f);
    temp10->SourceLineNumber(37);
    temp10->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp12);
    temp->Color(::g::Uno::Float4__New2(0.3372549f, 0.8f, 0.7058824f, 1.0f));
    temp->Alignment(10);
    temp->SourceLineNumber(38);
    temp->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 4);
    temp->Font(::g::MainView::AGOTHIC14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp3->SourceLineNumber(38);
    temp3->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp12->Width(::g::Uno::UX::Size__New1(16.0f, 1));
    temp12->Margin(::g::Uno::Float4__New2(8.0f, 0.0f, 0.0f, 0.0f));
    temp12->SourceLineNumber(39);
    temp12->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp12, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp13);
    temp13->ItemSpacing(2.0f);
    temp13->Alignment(10);
    temp13->SourceLineNumber(40);
    temp13->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    temp1->SourceLineNumber(41);
    temp1->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp5->SourceLineNumber(41);
    temp5->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp4->SourceLineNumber(41);
    temp4->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb100);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_Modes_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_CurrentMode_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
}

// public object get_Modes() [instance]
uObject* CycleButton::Modes()
{
    return _field_Modes;
}

// public void set_Modes(object value) [instance]
void CycleButton::Modes(uObject* value)
{
    uStackFrame __("CycleButton", "set_Modes(object)");
    SetModes(value, NULL);
}

// public void SetCurrentMode(int value, Uno.UX.IPropertyListener origin) [instance]
void CycleButton::SetCurrentMode(int32_t value, uObject* origin)
{
    uStackFrame __("CycleButton", "SetCurrentMode(int,Uno.UX.IPropertyListener)");

    if (value != _field_CurrentMode)
    {
        _field_CurrentMode = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("CurrentMode")), origin);
    }
}

// public void SetModes(object value, Uno.UX.IPropertyListener origin) [instance]
void CycleButton::SetModes(uObject* value, uObject* origin)
{
    uStackFrame __("CycleButton", "SetModes(object,Uno.UX.IPropertyListener)");

    if (value != _field_Modes)
    {
        _field_Modes = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("Modes")), origin);
    }
}

// public CycleButton New() [static]
CycleButton* CycleButton::New4()
{
    CycleButton* obj1 = (CycleButton*)uNew(CycleButton_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/CycleButton.g.uno
// --------------------------------------------------------------------------------

// public partial sealed class CycleButton.Template
// {
// static Template()
static void CycleButton__Template__cctor__fn(uType* __type)
{
    CycleButton__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"IsActive"*/]);
}

static void CycleButton__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("IsActive");
    ::STRINGS[1] = uString::Const("currentMode");
    ::STRINGS[2] = uString::Const("Pages/Menu_Supplier/CycleButton.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::CycleButton_typeof(), offsetof(CycleButton__Template, __parent1), uFieldFlagsWeak,
        ::g::CycleButton_typeof(), offsetof(CycleButton__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(CycleButton__Template, __self_IsActive_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CycleButton__Template::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CycleButton__Template__New2_fn, 0, true, type, 2, ::g::CycleButton_typeof(), ::g::CycleButton_typeof()));
}

::g::Uno::UX::Template_type* CycleButton__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(CycleButton__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("CycleButton.Template", options);
    type->fp_build_ = CycleButton__Template_build;
    type->fp_cctor_ = CycleButton__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))CycleButton__Template__New1_fn;
    return type;
}

// public Template(CycleButton parent, CycleButton parentInstance)
void CycleButton__Template__ctor_1_fn(CycleButton__Template* __this, ::g::CycleButton* parent, ::g::CycleButton* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void CycleButton__Template__New1_fn(CycleButton__Template* __this, uObject** __retval)
{
    uStackFrame __("CycleButton.Template", "New()");
    ::g::ModeIndicator* __self1 = ::g::ModeIndicator::New4();
    ::g::Fuse::Reactive::IndexFunction* temp = ::g::Fuse::Reactive::IndexFunction::New1();
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"currentMode"*/]);
    __this->__self_IsActive_inst1 = ::g::HSMRO_ModeIndicator_IsActive_Property::New1(__self1, CycleButton__Template::__selector0_);
    ::g::Fuse::Reactive::Equal* temp2 = ::g::Fuse::Reactive::Equal::New1(temp, temp1);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_IsActive_inst1, (uObject*)temp2, 3);
    __self1->SourceLineNumber(42);
    __self1->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp2->SourceLineNumber(42);
    temp2->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp->SourceLineNumber(42);
    temp->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    temp1->SourceLineNumber(42);
    temp1->SourceFileName(::STRINGS[2/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    return *__retval = __self1, void();
}

// public Template New(CycleButton parent, CycleButton parentInstance)
void CycleButton__Template__New2_fn(::g::CycleButton* parent, ::g::CycleButton* parentInstance, CycleButton__Template** __retval)
{
    *__retval = CycleButton__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector CycleButton__Template::__selector0_;

// public Template(CycleButton parent, CycleButton parentInstance) [instance]
void CycleButton__Template::ctor_1(::g::CycleButton* parent, ::g::CycleButton* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(CycleButton parent, CycleButton parentInstance) [static]
CycleButton__Template* CycleButton__Template::New2(::g::CycleButton* parent, ::g::CycleButton* parentInstance)
{
    CycleButton__Template* obj1 = (CycleButton__Template*)uNew(CycleButton__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
