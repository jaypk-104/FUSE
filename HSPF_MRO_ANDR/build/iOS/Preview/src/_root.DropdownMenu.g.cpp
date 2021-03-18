// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownMenu.h>
#include <_root.DropdownMenu.Template.h>
#include <_root.DropdownOption.h>
#include <_root.DropdownSelectedItem.h>
#include <_root.HSMRO_accessor_DropdownMenu_BackgroundColor.h>
#include <_root.HSMRO_accessor_DropdownMenu_BorderColor.h>
#include <_root.HSMRO_accessor_DropdownMenu_FontSize.h>
#include <_root.HSMRO_accessor_DropdownMenu_ListItems.h>
#include <_root.HSMRO_accessor_DropdownMenu_TextColor.h>
#include <_root.HSMRO_DropdownMenu_BackgroundColor_Property.h>
#include <_root.HSMRO_DropdownMenu_BorderColor_Property.h>
#include <_root.HSMRO_DropdownMenu_FontSize_Property.h>
#include <_root.HSMRO_DropdownMenu_ListItems_Property.h>
#include <_root.HSMRO_DropdownMenu_Selected_Property.h>
#include <_root.HSMRO_DropdownMenu_TextColor_Property.h>
#include <_root.HSMRO_DropdownOption_BackgroundColor_Property.h>
#include <_root.HSMRO_DropdownOption_BorderColor_Property.h>
#include <_root.HSMRO_DropdownOption_FontSize_Property.h>
#include <_root.HSMRO_DropdownOption_Text_Property.h>
#include <_root.HSMRO_DropdownOption_TextColor_Property.h>
#include <_root.HSMRO_DropdownSelectedItem_BackgroundColor_Property.h>
#include <_root.HSMRO_DropdownSelectedItem_BorderColor_Property.h>
#include <_root.HSMRO_DropdownSelectedItem_FontSize_Property.h>
#include <_root.HSMRO_DropdownSelectedItem_Text_Property.h>
#include <_root.HSMRO_DropdownSelectedItem_TextColor_Property.h>
#include <_root.HSMRO_FuseDrawingStroke_Brush_Property.h>
#include <_root.HSMRO_FuseReactiveEach_Items_Property.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
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
#include <Uno.UX.Size2.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[8];
static uType* TYPES[2];

namespace g{

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/DropdownMenu.g.uno
// ---------------------------------------------------------------------------------

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
    type->SetDependencies(
        ::g::HSMRO_accessor_DropdownMenu_BackgroundColor_typeof(),
        ::g::HSMRO_accessor_DropdownMenu_BorderColor_typeof(),
        ::g::HSMRO_accessor_DropdownMenu_FontSize_typeof(),
        ::g::HSMRO_accessor_DropdownMenu_ListItems_typeof(),
        ::g::HSMRO_accessor_DropdownMenu_TextColor_typeof());
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
    type->SetFields(120,
        uObject_typeof(), offsetof(DropdownMenu, _field_ListItems), 0,
        ::g::Uno::String_typeof(), offsetof(DropdownMenu, _field_Selected), 0,
        ::g::Uno::Float4_typeof(), offsetof(DropdownMenu, _field_TextColor), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(DropdownMenu, _field_BackgroundColor), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(DropdownMenu, _field_BorderColor), 0,
        ::g::Uno::Float_typeof(), offsetof(DropdownMenu, _field_FontSize), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(DropdownMenu, this_Selected_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(DropdownMenu, temp_Brush_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(DropdownMenu, temp1_TextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(DropdownMenu, temp1_FontSize_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(DropdownMenu, temp1_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(DropdownMenu, temp1_BackgroundColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(DropdownMenu, temp1_BorderColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(DropdownMenu, temp2_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(DropdownMenu, this_ListItems_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(DropdownMenu, this_TextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(DropdownMenu, this_BackgroundColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(DropdownMenu, this_BorderColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(DropdownMenu, this_FontSize_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(DropdownMenu, expandDropdown), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(DropdownMenu, __g_nametable1), 0,
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
    type->Reflection.SetFunctions(19,
        new uFunction("get_BackgroundColor", NULL, (void*)DropdownMenu__get_BackgroundColor_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_BackgroundColor", NULL, (void*)DropdownMenu__set_BackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_BorderColor", NULL, (void*)DropdownMenu__get_BorderColor_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_BorderColor", NULL, (void*)DropdownMenu__set_BorderColor_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_FontSize", NULL, (void*)DropdownMenu__get_FontSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_FontSize", NULL, (void*)DropdownMenu__set_FontSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ListItems", NULL, (void*)DropdownMenu__get_ListItems_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_ListItems", NULL, (void*)DropdownMenu__set_ListItems_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)DropdownMenu__New4_fn, 0, true, type, 0),
        new uFunction("get_Selected", NULL, (void*)DropdownMenu__get_Selected_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Selected", NULL, (void*)DropdownMenu__set_Selected_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetBackgroundColor", NULL, (void*)DropdownMenu__SetBackgroundColor_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetBorderColor", NULL, (void*)DropdownMenu__SetBorderColor_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetFontSize", NULL, (void*)DropdownMenu__SetFontSize_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetListItems", NULL, (void*)DropdownMenu__SetListItems_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetSelected", NULL, (void*)DropdownMenu__SetSelected_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTextColor", NULL, (void*)DropdownMenu__SetTextColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_TextColor", NULL, (void*)DropdownMenu__get_TextColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TextColor", NULL, (void*)DropdownMenu__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
}

::g::Fuse::Controls::Panel_type* DropdownMenu_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 153;
    options.InterfaceCount = 19;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(DropdownMenu);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("DropdownMenu", options);
    type->fp_build_ = DropdownMenu_build;
    type->fp_ctor_ = (void*)DropdownMenu__New4_fn;
    type->fp_cctor_ = DropdownMenu__cctor_4_fn;
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

// public DropdownMenu()
void DropdownMenu__ctor_7_fn(DropdownMenu* __this)
{
    __this->ctor_7();
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

// private void InitializeUX()
void DropdownMenu__InitializeUX_fn(DropdownMenu* __this)
{
    __this->InitializeUX();
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

// public DropdownMenu New()
void DropdownMenu__New4_fn(DropdownMenu** __retval)
{
    *__retval = DropdownMenu::New4();
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

// public DropdownMenu() [instance]
void DropdownMenu::ctor_7()
{
    uStackFrame __("DropdownMenu", ".ctor()");
    ctor_6();
    InitializeUX();
}

// public Fuse.Drawing.Brush get_BackgroundColor() [instance]
::g::Fuse::Drawing::Brush* DropdownMenu::BackgroundColor()
{
    return _field_BackgroundColor;
}

// public void set_BackgroundColor(Fuse.Drawing.Brush value) [instance]
void DropdownMenu::BackgroundColor(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("DropdownMenu", "set_BackgroundColor(Fuse.Drawing.Brush)");
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
    uStackFrame __("DropdownMenu", "set_BorderColor(Fuse.Drawing.Brush)");
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
    uStackFrame __("DropdownMenu", "set_FontSize(float)");
    SetFontSize(value, NULL);
}

// private void InitializeUX() [instance]
void DropdownMenu::InitializeUX()
{
    uStackFrame __("DropdownMenu", "InitializeUX()");
    this_ListItems_inst = ::g::HSMRO_DropdownMenu_ListItems_Property::New1(this, DropdownMenu::__selector0_);
    this_Selected_inst = ::g::HSMRO_DropdownMenu_Selected_Property::New1(this, DropdownMenu::__selector1_);
    this_TextColor_inst = ::g::HSMRO_DropdownMenu_TextColor_Property::New1(this, DropdownMenu::__selector2_);
    this_BackgroundColor_inst = ::g::HSMRO_DropdownMenu_BackgroundColor_Property::New1(this, DropdownMenu::__selector3_);
    this_BorderColor_inst = ::g::HSMRO_DropdownMenu_BorderColor_Property::New1(this, DropdownMenu::__selector4_);
    this_FontSize_inst = ::g::HSMRO_DropdownMenu_FontSize_Property::New1(this, DropdownMenu::__selector5_);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, DropdownMenu::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("selected"));
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Drawing::Stroke* temp = ::g::Fuse::Drawing::Stroke::New2();
    temp_Brush_inst = ::g::HSMRO_FuseDrawingStroke_Brush_Property::New1(temp, DropdownMenu::__selector6_);
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::HSMRO_accessor_DropdownMenu_BorderColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp6 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::DropdownSelectedItem* temp1 = ::g::DropdownSelectedItem::New4();
    temp1_TextColor_inst = ::g::HSMRO_DropdownSelectedItem_TextColor_Property::New1(temp1, DropdownMenu::__selector2_);
    ::g::Fuse::Reactive::Property* temp7 = ::g::Fuse::Reactive::Property::New1(temp6, ::g::HSMRO_accessor_DropdownMenu_TextColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(this);
    temp1_FontSize_inst = ::g::HSMRO_DropdownSelectedItem_FontSize_Property::New1(temp1, DropdownMenu::__selector5_);
    ::g::Fuse::Reactive::Property* temp9 = ::g::Fuse::Reactive::Property::New1(temp8, ::g::HSMRO_accessor_DropdownMenu_FontSize::Singleton());
    temp1_Text_inst = ::g::HSMRO_DropdownSelectedItem_Text_Property::New1(temp1, DropdownMenu::__selector7_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(uString::Const("selected"));
    ::g::Fuse::Reactive::Constant* temp11 = ::g::Fuse::Reactive::Constant::New1(this);
    temp1_BackgroundColor_inst = ::g::HSMRO_DropdownSelectedItem_BackgroundColor_Property::New1(temp1, DropdownMenu::__selector3_);
    ::g::Fuse::Reactive::Property* temp12 = ::g::Fuse::Reactive::Property::New1(temp11, ::g::HSMRO_accessor_DropdownMenu_BackgroundColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp13 = ::g::Fuse::Reactive::Constant::New1(this);
    temp1_BorderColor_inst = ::g::HSMRO_DropdownSelectedItem_BorderColor_Property::New1(temp1, DropdownMenu::__selector4_);
    ::g::Fuse::Reactive::Property* temp14 = ::g::Fuse::Reactive::Property::New1(temp13, ::g::HSMRO_accessor_DropdownMenu_BorderColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp15 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::HSMRO_FuseReactiveEach_Items_Property::New1(temp2, DropdownMenu::__selector8_);
    ::g::Fuse::Reactive::Property* temp16 = ::g::Fuse::Reactive::Property::New1(temp15, ::g::HSMRO_accessor_DropdownMenu_ListItems::Singleton());
    ::g::Fuse::Reactive::JavaScript* temp17 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp18 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(this_Selected_inst, (uObject*)temp3, 3);
    ::g::Fuse::Controls::Rectangle* temp20 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(temp_Brush_inst, (uObject*)temp5, 1);
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(temp1_TextColor_inst, (uObject*)temp7, 1);
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(temp1_FontSize_inst, (uObject*)temp9, 1);
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Text_inst, (uObject*)temp10, 3);
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp1_BackgroundColor_inst, (uObject*)temp12, 1);
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp1_BorderColor_inst, (uObject*)temp14, 1);
    ::g::Fuse::Gestures::Clicked* temp27 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp28 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    expandDropdown = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Controls::StackPanel* temp29 = ::g::Fuse::Controls::StackPanel::New4();
    DropdownMenu__Template* temp30 = DropdownMenu__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Items_inst, (uObject*)temp16, 1);
    ::g::Fuse::Drawing::StaticSolidColor* temp32 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9921569f, 0.9921569f, 0.9921569f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp33 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7490196f, 0.7490196f, 0.7490196f, 1.0f));
    TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    FontSize(14.0f);
    Name(DropdownMenu::__selector9_);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp17->Code(uString::Const("\n"
        "\tvar Observable = require('FuseJS/Observable');\n"
        "\n"
        "\tvar selected = Observable();\n"
        "\n"
        "\tfunction onSelected(arg) {\n"
        "\t\tif(arg.data && arg.data.name) {\n"
        "\t\t\tselected.value = arg.data.name;\n"
        "\t\t}\n"
        "\t}\n"
        "\n"
        "\tmodule.exports = {\n"
        "\t\tselected: selected,\n"
        "\t\tonSelected: onSelected\n"
        "\t}\n"
        "\t"));
    temp17->LineNumber(12);
    temp17->FileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp17->SourceLineNumber(12);
    temp17->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp18->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp18->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp18->SourceLineNumber(64);
    temp18->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), expandDropdown);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    temp3->SourceLineNumber(65);
    temp3->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp20->SourceLineNumber(66);
    temp20->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    temp->Width(1.0f);
    temp5->SourceLineNumber(67);
    temp5->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp4->SourceLineNumber(67);
    temp4->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp1->SourceLineNumber(69);
    temp1->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    temp7->SourceLineNumber(69);
    temp7->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp6->SourceLineNumber(69);
    temp6->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp9->SourceLineNumber(69);
    temp9->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp8->SourceLineNumber(69);
    temp8->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp10->SourceLineNumber(69);
    temp10->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp12->SourceLineNumber(69);
    temp12->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp11->SourceLineNumber(69);
    temp11->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp14->SourceLineNumber(69);
    temp14->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp13->SourceLineNumber(69);
    temp13->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp27->SourceLineNumber(70);
    temp27->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp28);
    temp28->SourceLineNumber(71);
    temp28->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp28->Target((uObject*)expandDropdown);
    uPtr(expandDropdown)->Name(DropdownMenu::__selector10_);
    uPtr(expandDropdown)->SourceLineNumber(74);
    uPtr(expandDropdown)->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(expandDropdown)->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp29);
    temp29->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 1), ::g::Uno::UX::Size__New1(40.0f, 1)));
    temp29->SourceLineNumber(75);
    temp29->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    temp2->SourceLineNumber(76);
    temp2->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp31);
    temp16->SourceLineNumber(76);
    temp16->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    temp15->SourceLineNumber(76);
    temp15->SourceFileName(::STRINGS[7/*"Pages/Menu_...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), expandDropdown);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_ListItems_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_Selected_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_TextColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_BackgroundColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_BorderColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_FontSize_inst);
    BackgroundColor(temp32);
    BorderColor(temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp18);
}

// public object get_ListItems() [instance]
uObject* DropdownMenu::ListItems()
{
    return _field_ListItems;
}

// public void set_ListItems(object value) [instance]
void DropdownMenu::ListItems(uObject* value)
{
    uStackFrame __("DropdownMenu", "set_ListItems(object)");
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
    uStackFrame __("DropdownMenu", "set_Selected(string)");
    SetSelected(value, NULL);
}

// public void SetBackgroundColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance]
void DropdownMenu::SetBackgroundColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    uStackFrame __("DropdownMenu", "SetBackgroundColor(Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");

    if (value != _field_BackgroundColor)
    {
        _field_BackgroundColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"BackgroundC...*/]), origin);
    }
}

// public void SetBorderColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance]
void DropdownMenu::SetBorderColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    uStackFrame __("DropdownMenu", "SetBorderColor(Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");

    if (value != _field_BorderColor)
    {
        _field_BorderColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"BorderColor"*/]), origin);
    }
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) [instance]
void DropdownMenu::SetFontSize(float value, uObject* origin)
{
    uStackFrame __("DropdownMenu", "SetFontSize(float,Uno.UX.IPropertyListener)");

    if (value != _field_FontSize)
    {
        _field_FontSize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"FontSize"*/]), origin);
    }
}

// public void SetListItems(object value, Uno.UX.IPropertyListener origin) [instance]
void DropdownMenu::SetListItems(uObject* value, uObject* origin)
{
    uStackFrame __("DropdownMenu", "SetListItems(object,Uno.UX.IPropertyListener)");

    if (value != _field_ListItems)
    {
        _field_ListItems = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("ListItems")), origin);
    }
}

// public void SetSelected(string value, Uno.UX.IPropertyListener origin) [instance]
void DropdownMenu::SetSelected(uString* value, uObject* origin)
{
    uStackFrame __("DropdownMenu", "SetSelected(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Selected))
    {
        _field_Selected = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("Selected")), origin);
    }
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance]
void DropdownMenu::SetTextColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("DropdownMenu", "SetTextColor(float4,Uno.UX.IPropertyListener)");

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
    uStackFrame __("DropdownMenu", "set_TextColor(float4)");
    SetTextColor(value, NULL);
}

// public DropdownMenu New() [static]
DropdownMenu* DropdownMenu::New4()
{
    DropdownMenu* obj1 = (DropdownMenu*)uNew(DropdownMenu_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/DropdownMenu.g.uno
// ---------------------------------------------------------------------------------

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
        ::g::DropdownMenu_typeof(), offsetof(DropdownMenu__Template, __parentInstance1), uFieldFlagsWeak,
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
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DropdownMenu__Template__New2_fn, 0, true, type, 2, ::g::DropdownMenu_typeof(), ::g::DropdownMenu_typeof()));
}

::g::Uno::UX::Template_type* DropdownMenu__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 15;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(DropdownMenu__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("DropdownMenu.Template", options);
    type->fp_build_ = DropdownMenu__Template_build;
    type->fp_cctor_ = DropdownMenu__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))DropdownMenu__Template__New1_fn;
    return type;
}

// public Template(DropdownMenu parent, DropdownMenu parentInstance)
void DropdownMenu__Template__ctor_1_fn(DropdownMenu__Template* __this, ::g::DropdownMenu* parent, ::g::DropdownMenu* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New()
void DropdownMenu__Template__New1_fn(DropdownMenu__Template* __this, uObject** __retval)
{
    uStackFrame __("DropdownMenu.Template", "New()");
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

// public Template New(DropdownMenu parent, DropdownMenu parentInstance)
void DropdownMenu__Template__New2_fn(::g::DropdownMenu* parent, ::g::DropdownMenu* parentInstance, DropdownMenu__Template** __retval)
{
    *__retval = DropdownMenu__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector DropdownMenu__Template::__selector0_;
::g::Uno::UX::Selector DropdownMenu__Template::__selector1_;
::g::Uno::UX::Selector DropdownMenu__Template::__selector2_;
::g::Uno::UX::Selector DropdownMenu__Template::__selector3_;
::g::Uno::UX::Selector DropdownMenu__Template::__selector4_;

// public Template(DropdownMenu parent, DropdownMenu parentInstance) [instance]
void DropdownMenu__Template::ctor_1(::g::DropdownMenu* parent, ::g::DropdownMenu* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(DropdownMenu parent, DropdownMenu parentInstance) [static]
DropdownMenu__Template* DropdownMenu__Template::New2(::g::DropdownMenu* parent, ::g::DropdownMenu* parentInstance)
{
    DropdownMenu__Template* obj1 = (DropdownMenu__Template*)uNew(DropdownMenu__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
