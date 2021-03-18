// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownMenu.h>
#include <_root.DropdownMenu.Template.h>
#include <_root.DropdownOption.h>
#include <_root.HSMRO_accessor_DropdownMenu_BackgroundColor.h>
#include <_root.HSMRO_accessor_DropdownMenu_BorderColor.h>
#include <_root.HSMRO_accessor_DropdownMenu_FontSize.h>
#include <_root.HSMRO_accessor_DropdownMenu_TextColor.h>
#include <_root.HSMRO_DropdownOption_BackgroundColor_Property.h>
#include <_root.HSMRO_DropdownOption_BorderColor_Property.h>
#include <_root.HSMRO_DropdownOption_FontSize_Property.h>
#include <_root.HSMRO_DropdownOption_Text_Property.h>
#include <_root.HSMRO_DropdownOption_TextColor_Property.h>
#include <Fuse.Binding.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[8];
static uType* TYPES[2];

namespace g{

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/DropdownMenu.g.uno
// --------------------------------------------------------------

// public partial sealed class DropdownMenu
// {
// static DropdownMenu()
static void DropdownMenu__cctor_4_fn(uType* __type)
{
    DropdownMenu::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 1, uString::Const("expandDropdown"));
    DropdownMenu::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("ListItems"));
    DropdownMenu::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Selected"));
    DropdownMenu::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"TextColor"*/]);
    DropdownMenu::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"BackgroundC...*/]);
    DropdownMenu::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"BorderColor"*/]);
    DropdownMenu::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"FontSize"*/]);
    DropdownMenu::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Brush"));
    DropdownMenu::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Text"*/]);
    DropdownMenu::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    DropdownMenu::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("menu"));
    DropdownMenu::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("expandDropdown"));
}

static void DropdownMenu_build(uType* type)
{
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
    type->SetFields(116,
        uObject_typeof(), offsetof(DropdownMenu, _field_ListItems), 0,
        ::g::Uno::String_typeof(), offsetof(DropdownMenu, _field_Selected), 0,
        ::g::Uno::Float4_typeof(), offsetof(DropdownMenu, _field_TextColor), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(DropdownMenu, _field_BackgroundColor), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(DropdownMenu, _field_BorderColor), 0,
        ::g::Uno::Float_typeof(), offsetof(DropdownMenu, _field_FontSize), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&DropdownMenu::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu::__selector10_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* DropdownMenu_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 134;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(DropdownMenu);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("DropdownMenu", options);
    type->fp_build_ = DropdownMenu_build;
    type->fp_cctor_ = DropdownMenu__cctor_4_fn;
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

// public Fuse.Drawing.Brush get_BackgroundColor()
void DropdownMenu__get_BackgroundColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->BackgroundColor();
}

// public void set_BackgroundColor(Fuse.Drawing.Brush value)
void DropdownMenu__set_BackgroundColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->BackgroundColor(value);
}

// public Fuse.Drawing.Brush get_BorderColor()
void DropdownMenu__get_BorderColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->BorderColor();
}

// public void set_BorderColor(Fuse.Drawing.Brush value)
void DropdownMenu__set_BorderColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->BorderColor(value);
}

// public float get_FontSize()
void DropdownMenu__get_FontSize_fn(DropdownMenu* __this, float* __retval)
{
    *__retval = __this->FontSize();
}

// public void set_FontSize(float value)
void DropdownMenu__set_FontSize_fn(DropdownMenu* __this, float* value)
{
    __this->FontSize(*value);
}

// public object get_ListItems()
void DropdownMenu__get_ListItems_fn(DropdownMenu* __this, uObject** __retval)
{
    *__retval = __this->ListItems();
}

// public void set_ListItems(object value)
void DropdownMenu__set_ListItems_fn(DropdownMenu* __this, uObject* value)
{
    __this->ListItems(value);
}

// public string get_Selected()
void DropdownMenu__get_Selected_fn(DropdownMenu* __this, uString** __retval)
{
    *__retval = __this->Selected();
}

// public void set_Selected(string value)
void DropdownMenu__set_Selected_fn(DropdownMenu* __this, uString* value)
{
    __this->Selected(value);
}

// public void SetBackgroundColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin)
void DropdownMenu__SetBackgroundColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    __this->SetBackgroundColor(value, origin);
}

// public void SetBorderColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin)
void DropdownMenu__SetBorderColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    __this->SetBorderColor(value, origin);
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin)
void DropdownMenu__SetFontSize_fn(DropdownMenu* __this, float* value, uObject* origin)
{
    __this->SetFontSize(*value, origin);
}

// public void SetListItems(object value, Uno.UX.IPropertyListener origin)
void DropdownMenu__SetListItems_fn(DropdownMenu* __this, uObject* value, uObject* origin)
{
    __this->SetListItems(value, origin);
}

// public void SetSelected(string value, Uno.UX.IPropertyListener origin)
void DropdownMenu__SetSelected_fn(DropdownMenu* __this, uString* value, uObject* origin)
{
    __this->SetSelected(value, origin);
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin)
void DropdownMenu__SetTextColor_fn(DropdownMenu* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetTextColor(*value, origin);
}

// public float4 get_TextColor()
void DropdownMenu__get_TextColor_fn(DropdownMenu* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(float4 value)
void DropdownMenu__set_TextColor_fn(DropdownMenu* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

uSStrong<uArray*> DropdownMenu::__g_static_nametable1_;
::g::Uno::UX::Selector DropdownMenu::__selector0_;
::g::Uno::UX::Selector DropdownMenu::__selector1_;
::g::Uno::UX::Selector DropdownMenu::__selector2_;
::g::Uno::UX::Selector DropdownMenu::__selector3_;
::g::Uno::UX::Selector DropdownMenu::__selector4_;
::g::Uno::UX::Selector DropdownMenu::__selector5_;
::g::Uno::UX::Selector DropdownMenu::__selector6_;
::g::Uno::UX::Selector DropdownMenu::__selector7_;
::g::Uno::UX::Selector DropdownMenu::__selector8_;
::g::Uno::UX::Selector DropdownMenu::__selector9_;
::g::Uno::UX::Selector DropdownMenu::__selector10_;

// public Fuse.Drawing.Brush get_BackgroundColor() [instance]
::g::Fuse::Drawing::Brush* DropdownMenu::BackgroundColor()
{
    return _field_BackgroundColor;
}

// public void set_BackgroundColor(Fuse.Drawing.Brush value) [instance]
void DropdownMenu::BackgroundColor(::g::Fuse::Drawing::Brush* value)
{
    SetBackgroundColor(value, NULL);
}

// public Fuse.Drawing.Brush get_BorderColor() [instance]
::g::Fuse::Drawing::Brush* DropdownMenu::BorderColor()
{
    return _field_BorderColor;
}

// public void set_BorderColor(Fuse.Drawing.Brush value) [instance]
void DropdownMenu::BorderColor(::g::Fuse::Drawing::Brush* value)
{
    SetBorderColor(value, NULL);
}

// public float get_FontSize() [instance]
float DropdownMenu::FontSize()
{
    return _field_FontSize;
}

// public void set_FontSize(float value) [instance]
void DropdownMenu::FontSize(float value)
{
    SetFontSize(value, NULL);
}

// public object get_ListItems() [instance]
uObject* DropdownMenu::ListItems()
{
    return _field_ListItems;
}

// public void set_ListItems(object value) [instance]
void DropdownMenu::ListItems(uObject* value)
{
    SetListItems(value, NULL);
}

// public string get_Selected() [instance]
uString* DropdownMenu::Selected()
{
    return _field_Selected;
}

// public void set_Selected(string value) [instance]
void DropdownMenu::Selected(uString* value)
{
    SetSelected(value, NULL);
}

// public void SetBackgroundColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance]
void DropdownMenu::SetBackgroundColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    if (value != _field_BackgroundColor)
    {
        _field_BackgroundColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"BackgroundC...*/]), origin);
    }
}

// public void SetBorderColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance]
void DropdownMenu::SetBorderColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    if (value != _field_BorderColor)
    {
        _field_BorderColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"BorderColor"*/]), origin);
    }
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) [instance]
void DropdownMenu::SetFontSize(float value, uObject* origin)
{
    if (value != _field_FontSize)
    {
        _field_FontSize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"FontSize"*/]), origin);
    }
}

// public void SetListItems(object value, Uno.UX.IPropertyListener origin) [instance]
void DropdownMenu::SetListItems(uObject* value, uObject* origin)
{
    if (value != _field_ListItems)
    {
        _field_ListItems = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("ListItems")), origin);
    }
}

// public void SetSelected(string value, Uno.UX.IPropertyListener origin) [instance]
void DropdownMenu::SetSelected(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Selected))
    {
        _field_Selected = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("Selected")), origin);
    }
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance]
void DropdownMenu::SetTextColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_TextColor))
    {
        _field_TextColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"TextColor"*/]), origin);
    }
}

// public float4 get_TextColor() [instance]
::g::Uno::Float4 DropdownMenu::TextColor()
{
    return _field_TextColor;
}

// public void set_TextColor(float4 value) [instance]
void DropdownMenu::TextColor(::g::Uno::Float4 value)
{
    SetTextColor(value, NULL);
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/.uno/ux15/DropdownMenu.g.uno
// --------------------------------------------------------------

// public partial sealed class DropdownMenu.Template
// {
// static Template()
static void DropdownMenu__Template__cctor__fn(uType* __type)
{
    DropdownMenu__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"FontSize"*/]);
    DropdownMenu__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"TextColor"*/]);
    DropdownMenu__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Text"*/]);
    DropdownMenu__Template::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"BackgroundC...*/]);
    DropdownMenu__Template::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"BorderColor"*/]);
}

static void DropdownMenu__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FontSize");
    ::STRINGS[1] = uString::Const("TextColor");
    ::STRINGS[2] = uString::Const("Text");
    ::STRINGS[3] = uString::Const("BackgroundColor");
    ::STRINGS[4] = uString::Const("BorderColor");
    ::STRINGS[5] = uString::Const("name");
    ::STRINGS[6] = uString::Const("onSelected");
    ::STRINGS[7] = uString::Const("Pages/Menu_Customer/DropdownMenu.ux");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::HSMRO_accessor_DropdownMenu_BackgroundColor_typeof(),
        ::g::HSMRO_accessor_DropdownMenu_BorderColor_typeof(),
        ::g::HSMRO_accessor_DropdownMenu_FontSize_typeof(),
        ::g::HSMRO_accessor_DropdownMenu_TextColor_typeof());
    type->SetFields(2,
        ::g::DropdownMenu_typeof(), offsetof(DropdownMenu__Template, __parent1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(DropdownMenu__Template, __self_FontSize_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(DropdownMenu__Template, __self_TextColor_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(DropdownMenu__Template, __self_Text_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(DropdownMenu__Template, __self_BackgroundColor_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(DropdownMenu__Template, __self_BorderColor_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(DropdownMenu__Template, temp_eb9), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu__Template::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu__Template::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DropdownMenu__Template::__selector4_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* DropdownMenu__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 14;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(DropdownMenu__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("DropdownMenu.Template", options);
    type->fp_build_ = DropdownMenu__Template_build;
    type->fp_cctor_ = DropdownMenu__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))DropdownMenu__Template__New1_fn;
    return type;
}

// public override sealed object New()
void DropdownMenu__Template__New1_fn(DropdownMenu__Template* __this, uObject** __retval)
{
    ::g::DropdownOption* __self1 = ::g::DropdownOption::New4();
    ::g::Fuse::Reactive::Constant* temp = ::g::Fuse::Reactive::Constant::New1(__this->__parent1);
    __this->__self_FontSize_inst1 = ::g::HSMRO_DropdownOption_FontSize_Property::New1(__self1, DropdownMenu__Template::__selector0_);
    ::g::Fuse::Reactive::Property* temp1 = ::g::Fuse::Reactive::Property::New1(temp, ::g::HSMRO_accessor_DropdownMenu_FontSize::Singleton());
    ::g::Fuse::Reactive::Constant* temp2 = ::g::Fuse::Reactive::Constant::New1(__this->__parent1);
    __this->__self_TextColor_inst1 = ::g::HSMRO_DropdownOption_TextColor_Property::New1(__self1, DropdownMenu__Template::__selector1_);
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::HSMRO_accessor_DropdownMenu_TextColor::Singleton());
    __this->__self_Text_inst1 = ::g::HSMRO_DropdownOption_Text_Property::New1(__self1, DropdownMenu__Template::__selector2_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"name"*/]);
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(__this->__parent1);
    __this->__self_BackgroundColor_inst1 = ::g::HSMRO_DropdownOption_BackgroundColor_Property::New1(__self1, DropdownMenu__Template::__selector3_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::HSMRO_accessor_DropdownMenu_BackgroundColor::Singleton());
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"onSelected"*/]);
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(__this->__parent1);
    __this->__self_BorderColor_inst1 = ::g::HSMRO_DropdownOption_BorderColor_Property::New1(__self1, DropdownMenu__Template::__selector4_);
    ::g::Fuse::Reactive::Property* temp9 = ::g::Fuse::Reactive::Property::New1(temp8, ::g::HSMRO_accessor_DropdownMenu_BorderColor::Singleton());
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_FontSize_inst1, (uObject*)temp1, 1);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_TextColor_inst1, (uObject*)temp3, 1);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Text_inst1, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_BackgroundColor_inst1, (uObject*)temp6, 1);
    __this->temp_eb9 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_BorderColor_inst1, (uObject*)temp9, 1);
    __self1->SourceLineNumber(77);
    __self1->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb9)));
    temp1->SourceLineNumber(77);
    temp1->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp->SourceLineNumber(77);
    temp->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp3->SourceLineNumber(77);
    temp3->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp2->SourceLineNumber(77);
    temp2->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp4->SourceLineNumber(77);
    temp4->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp6->SourceLineNumber(77);
    temp6->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp5->SourceLineNumber(77);
    temp5->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp7->SourceLineNumber(77);
    temp7->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp9->SourceLineNumber(77);
    temp9->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp8->SourceLineNumber(77);
    temp8->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    return *__retval = __self1, void();
}

::g::Uno::UX::Selector DropdownMenu__Template::__selector0_;
::g::Uno::UX::Selector DropdownMenu__Template::__selector1_;
::g::Uno::UX::Selector DropdownMenu__Template::__selector2_;
::g::Uno::UX::Selector DropdownMenu__Template::__selector3_;
::g::Uno::UX::Selector DropdownMenu__Template::__selector4_;
// }

} // ::g
