// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/DropdownOption.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownOption.h>
#include <_root.HSMRO_accessor_DropdownOption_BackgroundColor.h>
#include <_root.HSMRO_accessor_DropdownOption_BorderColor.h>
#include <_root.HSMRO_accessor_DropdownOption_FontSize.h>
#include <_root.HSMRO_accessor_DropdownOption_Text.h>
#include <_root.HSMRO_accessor_DropdownOption_TextColor.h>
#include <_root.HSMRO_FuseControlsShape_Fill_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_Color_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_FontSize_Property.h>
#include <_root.HSMRO_FuseControlsTextControl_Value_Property.h>
#include <_root.HSMRO_FuseDrawingStroke_Brush_Property.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layer.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[12];
static uType* TYPES[3];

namespace g{

// public partial sealed class DropdownOption
// {
// static DropdownOption()
static void DropdownOption__cctor_4_fn(uType* __type)
{
    DropdownOption::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Fill"*/]);
    DropdownOption::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Brush"*/]);
    DropdownOption::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Value"*/]);
    DropdownOption::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"FontSize"*/]);
    DropdownOption::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Color"*/]);
    DropdownOption::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"self"*/]);
    DropdownOption::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"bgCol"*/]);
}

static void DropdownOption_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Fill");
    ::STRINGS[1] = uString::Const("Brush");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("FontSize");
    ::STRINGS[4] = uString::Const("Color");
    ::STRINGS[5] = uString::Const("self");
    ::STRINGS[6] = uString::Const("bgCol");
    ::STRINGS[7] = uString::Const("Pages/Menu_Customer/DropdownMenu.ux");
    ::STRINGS[8] = uString::Const("BackgroundColor");
    ::STRINGS[9] = uString::Const("BorderColor");
    ::STRINGS[10] = uString::Const("Text");
    ::STRINGS[11] = uString::Const("TextColor");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::HSMRO_accessor_DropdownOption_BackgroundColor_typeof(),
        ::g::HSMRO_accessor_DropdownOption_BorderColor_typeof(),
        ::g::HSMRO_accessor_DropdownOption_FontSize_typeof(),
        ::g::HSMRO_accessor_DropdownOption_Text_typeof(),
        ::g::HSMRO_accessor_DropdownOption_TextColor_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(120,
        ::g::Uno::String_typeof(), offsetof(DropdownOption, _field_Text), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(DropdownOption, _field_BackgroundColor), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(DropdownOption, _field_BorderColor), 0,
        ::g::Uno::Float_typeof(), offsetof(DropdownOption, _field_FontSize), 0,
        ::g::Uno::Float4_typeof(), offsetof(DropdownOption, _field_TextColor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(DropdownOption, bgCol_Fill_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(DropdownOption, temp_Brush_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(DropdownOption, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(DropdownOption, temp1_FontSize_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(DropdownOption, temp1_Color_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(DropdownOption, bgCol), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownOption::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownOption::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownOption::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownOption::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownOption::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownOption::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownOption::__selector6_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(16,
        new uFunction("get_BackgroundColor", NULL, (void*)DropdownOption__get_BackgroundColor_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_BackgroundColor", NULL, (void*)DropdownOption__set_BackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_BorderColor", NULL, (void*)DropdownOption__get_BorderColor_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_BorderColor", NULL, (void*)DropdownOption__set_BorderColor_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_FontSize", NULL, (void*)DropdownOption__get_FontSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_FontSize", NULL, (void*)DropdownOption__set_FontSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)DropdownOption__New4_fn, 0, true, type, 0),
        new uFunction("SetBackgroundColor", NULL, (void*)DropdownOption__SetBackgroundColor_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetBorderColor", NULL, (void*)DropdownOption__SetBorderColor_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetFontSize", NULL, (void*)DropdownOption__SetFontSize_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetText", NULL, (void*)DropdownOption__SetText_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTextColor", NULL, (void*)DropdownOption__SetTextColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Text", NULL, (void*)DropdownOption__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Text", NULL, (void*)DropdownOption__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_TextColor", NULL, (void*)DropdownOption__get_TextColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TextColor", NULL, (void*)DropdownOption__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
}

::g::Fuse::Controls::Panel_type* DropdownOption_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 138;
    options.InterfaceCount = 19;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(DropdownOption);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("DropdownOption", options);
    type->fp_build_ = DropdownOption_build;
    type->fp_ctor_ = (void*)DropdownOption__New4_fn;
    type->fp_cctor_ = DropdownOption__cctor_4_fn;
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

// public DropdownOption()
void DropdownOption__ctor_7_fn(DropdownOption* __this)
{
    __this->ctor_7();
}

// public Fuse.Drawing.Brush get_BackgroundColor()
void DropdownOption__get_BackgroundColor_fn(DropdownOption* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->BackgroundColor();
}

// public void set_BackgroundColor(Fuse.Drawing.Brush value)
void DropdownOption__set_BackgroundColor_fn(DropdownOption* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->BackgroundColor(value);
}

// public Fuse.Drawing.Brush get_BorderColor()
void DropdownOption__get_BorderColor_fn(DropdownOption* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->BorderColor();
}

// public void set_BorderColor(Fuse.Drawing.Brush value)
void DropdownOption__set_BorderColor_fn(DropdownOption* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->BorderColor(value);
}

// public float get_FontSize()
void DropdownOption__get_FontSize_fn(DropdownOption* __this, float* __retval)
{
    *__retval = __this->FontSize();
}

// public void set_FontSize(float value)
void DropdownOption__set_FontSize_fn(DropdownOption* __this, float* value)
{
    __this->FontSize(*value);
}

// private void InitializeUX()
void DropdownOption__InitializeUX_fn(DropdownOption* __this)
{
    __this->InitializeUX();
}

// public DropdownOption New()
void DropdownOption__New4_fn(DropdownOption** __retval)
{
    *__retval = DropdownOption::New4();
}

// public void SetBackgroundColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin)
void DropdownOption__SetBackgroundColor_fn(DropdownOption* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    __this->SetBackgroundColor(value, origin);
}

// public void SetBorderColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin)
void DropdownOption__SetBorderColor_fn(DropdownOption* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    __this->SetBorderColor(value, origin);
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin)
void DropdownOption__SetFontSize_fn(DropdownOption* __this, float* value, uObject* origin)
{
    __this->SetFontSize(*value, origin);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin)
void DropdownOption__SetText_fn(DropdownOption* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin)
void DropdownOption__SetTextColor_fn(DropdownOption* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetTextColor(*value, origin);
}

// public string get_Text()
void DropdownOption__get_Text_fn(DropdownOption* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value)
void DropdownOption__set_Text_fn(DropdownOption* __this, uString* value)
{
    __this->Text(value);
}

// public float4 get_TextColor()
void DropdownOption__get_TextColor_fn(DropdownOption* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(float4 value)
void DropdownOption__set_TextColor_fn(DropdownOption* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

::g::Uno::UX::Selector DropdownOption::__selector0_;
::g::Uno::UX::Selector DropdownOption::__selector1_;
::g::Uno::UX::Selector DropdownOption::__selector2_;
::g::Uno::UX::Selector DropdownOption::__selector3_;
::g::Uno::UX::Selector DropdownOption::__selector4_;
::g::Uno::UX::Selector DropdownOption::__selector5_;
::g::Uno::UX::Selector DropdownOption::__selector6_;

// public DropdownOption() [instance]
void DropdownOption::ctor_7()
{
    uStackFrame __("DropdownOption", ".ctor()");
    ctor_6();
    InitializeUX();
}

// public Fuse.Drawing.Brush get_BackgroundColor() [instance]
::g::Fuse::Drawing::Brush* DropdownOption::BackgroundColor()
{
    return _field_BackgroundColor;
}

// public void set_BackgroundColor(Fuse.Drawing.Brush value) [instance]
void DropdownOption::BackgroundColor(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("DropdownOption", "set_BackgroundColor(Fuse.Drawing.Brush)");
    SetBackgroundColor(value, NULL);
}

// public Fuse.Drawing.Brush get_BorderColor() [instance]
::g::Fuse::Drawing::Brush* DropdownOption::BorderColor()
{
    return _field_BorderColor;
}

// public void set_BorderColor(Fuse.Drawing.Brush value) [instance]
void DropdownOption::BorderColor(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("DropdownOption", "set_BorderColor(Fuse.Drawing.Brush)");
    SetBorderColor(value, NULL);
}

// public float get_FontSize() [instance]
float DropdownOption::FontSize()
{
    return _field_FontSize;
}

// public void set_FontSize(float value) [instance]
void DropdownOption::FontSize(float value)
{
    uStackFrame __("DropdownOption", "set_FontSize(float)");
    SetFontSize(value, NULL);
}

// private void InitializeUX() [instance]
void DropdownOption::InitializeUX()
{
    uStackFrame __("DropdownOption", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp2 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    bgCol = ::g::Fuse::Controls::Rectangle::New3();
    bgCol_Fill_inst = ::g::HSMRO_FuseControlsShape_Fill_Property::New1(bgCol, DropdownOption::__selector0_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::HSMRO_accessor_DropdownOption_BackgroundColor::Singleton());
    ::g::Fuse::Drawing::Stroke* temp = ::g::Fuse::Drawing::Stroke::New2();
    temp_Brush_inst = ::g::HSMRO_FuseDrawingStroke_Brush_Property::New1(temp, DropdownOption::__selector1_);
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::HSMRO_accessor_DropdownOption_BorderColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp6 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::HSMRO_FuseControlsTextControl_Value_Property::New1(temp1, DropdownOption::__selector2_);
    ::g::Fuse::Reactive::Property* temp7 = ::g::Fuse::Reactive::Property::New1(temp6, ::g::HSMRO_accessor_DropdownOption_Text::Singleton());
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(this);
    temp1_FontSize_inst = ::g::HSMRO_FuseControlsTextControl_FontSize_Property::New1(temp1, DropdownOption::__selector3_);
    ::g::Fuse::Reactive::Property* temp9 = ::g::Fuse::Reactive::Property::New1(temp8, ::g::HSMRO_accessor_DropdownOption_FontSize::Singleton());
    ::g::Fuse::Reactive::Constant* temp10 = ::g::Fuse::Reactive::Constant::New1(this);
    temp1_Color_inst = ::g::HSMRO_FuseControlsTextControl_Color_Property::New1(temp1, DropdownOption::__selector4_);
    ::g::Fuse::Reactive::Property* temp11 = ::g::Fuse::Reactive::Property::New1(temp10, ::g::HSMRO_accessor_DropdownOption_TextColor::Singleton());
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(bgCol_Fill_inst, (uObject*)temp4, 1);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(temp_Brush_inst, (uObject*)temp5, 1);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp7, 1);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(temp1_FontSize_inst, (uObject*)temp9, 1);
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Color_inst, (uObject*)temp11, 1);
    Height(::g::Uno::UX::Size__New1(30.0f, 1));
    Name(DropdownOption::__selector5_);
    SourceLineNumber(32);
    SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    uPtr(bgCol)->Layer(1);
    uPtr(bgCol)->Name(DropdownOption::__selector6_);
    uPtr(bgCol)->SourceLineNumber(38);
    uPtr(bgCol)->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bgCol)->Strokes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bgCol)->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bgCol)->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    temp->Width(1.0f);
    temp5->SourceLineNumber(39);
    temp5->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp2->SourceLineNumber(39);
    temp2->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp4->SourceLineNumber(38);
    temp4->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp3->SourceLineNumber(38);
    temp3->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp1->Alignment(9);
    temp1->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    temp1->SourceLineNumber(41);
    temp1->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    temp7->SourceLineNumber(41);
    temp7->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp6->SourceLineNumber(41);
    temp6->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp9->SourceLineNumber(41);
    temp9->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp8->SourceLineNumber(41);
    temp8->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp11->SourceLineNumber(41);
    temp11->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp10->SourceLineNumber(41);
    temp10->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), bgCol);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
}

// public void SetBackgroundColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance]
void DropdownOption::SetBackgroundColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    uStackFrame __("DropdownOption", "SetBackgroundColor(Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");

    if (value != _field_BackgroundColor)
    {
        _field_BackgroundColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"BackgroundC...*/]), origin);
    }
}

// public void SetBorderColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance]
void DropdownOption::SetBorderColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    uStackFrame __("DropdownOption", "SetBorderColor(Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");

    if (value != _field_BorderColor)
    {
        _field_BorderColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"BorderColor"*/]), origin);
    }
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) [instance]
void DropdownOption::SetFontSize(float value, uObject* origin)
{
    uStackFrame __("DropdownOption", "SetFontSize(float,Uno.UX.IPropertyListener)");

    if (value != _field_FontSize)
    {
        _field_FontSize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"FontSize"*/]), origin);
    }
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance]
void DropdownOption::SetText(uString* value, uObject* origin)
{
    uStackFrame __("DropdownOption", "SetText(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Text"*/]), origin);
    }
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance]
void DropdownOption::SetTextColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("DropdownOption", "SetTextColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_TextColor))
    {
        _field_TextColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"TextColor"*/]), origin);
    }
}

// public string get_Text() [instance]
uString* DropdownOption::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance]
void DropdownOption::Text(uString* value)
{
    uStackFrame __("DropdownOption", "set_Text(string)");
    SetText(value, NULL);
}

// public float4 get_TextColor() [instance]
::g::Uno::Float4 DropdownOption::TextColor()
{
    return _field_TextColor;
}

// public void set_TextColor(float4 value) [instance]
void DropdownOption::TextColor(::g::Uno::Float4 value)
{
    uStackFrame __("DropdownOption", "set_TextColor(float4)");
    SetTextColor(value, NULL);
}

// public DropdownOption New() [static]
DropdownOption* DropdownOption::New4()
{
    DropdownOption* obj1 = (DropdownOption*)uNew(DropdownOption_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
