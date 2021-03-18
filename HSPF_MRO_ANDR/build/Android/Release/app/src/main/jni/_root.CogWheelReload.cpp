// This file was generated based on '.uno/ux15/CogWheelReload.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BigCog.h>
#include <_root.CogWheelReload.h>
#include <_root.HSMRO_FuseElementsElement_Height_Property.h>
#include <_root.HSMRO_FuseElementsElement_MinHeight_Property.h>
#include <_root.HSMRO_FuseRotation_Degrees_Property.h>
#include <_root.HSMRO_FuseTranslation_Y_Property.h>
#include <_root.HSMRO_FuseTriggersPullToReload_IsLoading_Property.h>
#include <_root.HSMRO_FuseTriggersWhileBool_Value_Property.h>
#include <_root.SmallCog.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Rotation.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.TimelineAction.h>
#include <Fuse.Triggers.Actions.TimelineActionHow.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Actions.TriggerWhen.h>
#include <Fuse.Triggers.PullToReload.h>
#include <Fuse.Triggers.ScrollingAnimation.h>
#include <Fuse.Triggers.ScrollingAnimationRange.h>
#include <Fuse.Triggers.State.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[26];
static uType* TYPES[8];

namespace g{

// public partial sealed class CogWheelReload
// {
// static CogWheelReload()
static void CogWheelReload__cctor_4_fn(uType* __type)
{
    CogWheelReload::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"MinHeight"*/]);
    CogWheelReload::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Height"*/]);
    CogWheelReload::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Degrees"*/]);
    CogWheelReload::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Y"*/]);
    CogWheelReload::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Value"*/]);
    CogWheelReload::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"IsLoading"*/]);
    CogWheelReload::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"cogPanel"*/]);
    CogWheelReload::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"cog1"*/]);
    CogWheelReload::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"cog1Rotation"*/]);
    CogWheelReload::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"cog2"*/]);
    CogWheelReload::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"cog2Trans"*/]);
    CogWheelReload::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"cog2Rotation"*/]);
    CogWheelReload::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"cog3"*/]);
    CogWheelReload::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"cog3Trans"*/]);
    CogWheelReload::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"cog3Rotation"*/]);
    CogWheelReload::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"cog4"*/]);
    CogWheelReload::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"cog4Trans"*/]);
    CogWheelReload::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"cog4Rotation"*/]);
    CogWheelReload::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"cog5"*/]);
    CogWheelReload::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"cog5Trans"*/]);
    CogWheelReload::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"cog5Rotation"*/]);
    CogWheelReload::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"retainSpace"*/]);
    CogWheelReload::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"moveCogsInt...*/]);
}

static void CogWheelReload_build(uType* type)
{
    ::STRINGS[0] = uString::Const("MinHeight");
    ::STRINGS[1] = uString::Const("Height");
    ::STRINGS[2] = uString::Const("Degrees");
    ::STRINGS[3] = uString::Const("Y");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("IsLoading");
    ::STRINGS[6] = uString::Const("cogPanel");
    ::STRINGS[7] = uString::Const("cog1");
    ::STRINGS[8] = uString::Const("cog1Rotation");
    ::STRINGS[9] = uString::Const("cog2");
    ::STRINGS[10] = uString::Const("cog2Trans");
    ::STRINGS[11] = uString::Const("cog2Rotation");
    ::STRINGS[12] = uString::Const("cog3");
    ::STRINGS[13] = uString::Const("cog3Trans");
    ::STRINGS[14] = uString::Const("cog3Rotation");
    ::STRINGS[15] = uString::Const("cog4");
    ::STRINGS[16] = uString::Const("cog4Trans");
    ::STRINGS[17] = uString::Const("cog4Rotation");
    ::STRINGS[18] = uString::Const("cog5");
    ::STRINGS[19] = uString::Const("cog5Trans");
    ::STRINGS[20] = uString::Const("cog5Rotation");
    ::STRINGS[21] = uString::Const("retainSpace");
    ::STRINGS[22] = uString::Const("moveCogsIntoPlace");
    ::STRINGS[23] = uString::Const("isLoading");
    ::STRINGS[24] = uString::Const("reloadHandler");
    ::STRINGS[25] = uString::Const("Modules/CogWheelReload.ux");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
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
    type->SetFields(116,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(CogWheelReload, cogPanel_MinHeight_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(CogWheelReload, cogPanel_Height_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(CogWheelReload, cog1Rotation_Degrees_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(CogWheelReload, cog2Rotation_Degrees_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(CogWheelReload, cog3Rotation_Degrees_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(CogWheelReload, cog4Rotation_Degrees_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(CogWheelReload, cog5Rotation_Degrees_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(CogWheelReload, cog2Trans_Y_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(CogWheelReload, cog3Trans_Y_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(CogWheelReload, cog4Trans_Y_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(CogWheelReload, cog5Trans_Y_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(CogWheelReload, retainSpace_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(CogWheelReload, temp_IsLoading_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(CogWheelReload, cogPanel), 0,
        ::g::SmallCog_typeof(), offsetof(CogWheelReload, cog1), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(CogWheelReload, cog1Rotation), 0,
        ::g::BigCog_typeof(), offsetof(CogWheelReload, cog2), 0,
        ::g::Fuse::Translation_typeof(), offsetof(CogWheelReload, cog2Trans), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(CogWheelReload, cog2Rotation), 0,
        ::g::BigCog_typeof(), offsetof(CogWheelReload, cog3), 0,
        ::g::Fuse::Translation_typeof(), offsetof(CogWheelReload, cog3Trans), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(CogWheelReload, cog3Rotation), 0,
        ::g::BigCog_typeof(), offsetof(CogWheelReload, cog4), 0,
        ::g::Fuse::Translation_typeof(), offsetof(CogWheelReload, cog4Trans), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(CogWheelReload, cog4Rotation), 0,
        ::g::BigCog_typeof(), offsetof(CogWheelReload, cog5), 0,
        ::g::Fuse::Translation_typeof(), offsetof(CogWheelReload, cog5Trans), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(CogWheelReload, cog5Rotation), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(CogWheelReload, retainSpace), 0,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(CogWheelReload, moveCogsIntoPlace), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(CogWheelReload, temp_eb3), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CogWheelReload::__selector22_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* CogWheelReload_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 170;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CogWheelReload);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("CogWheelReload", options);
    type->fp_build_ = CogWheelReload_build;
    type->fp_ctor_ = (void*)CogWheelReload__New4_fn;
    type->fp_cctor_ = CogWheelReload__cctor_4_fn;
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

// public CogWheelReload()
void CogWheelReload__ctor_7_fn(CogWheelReload* __this)
{
    __this->ctor_7();
}

// private void InitializeUX()
void CogWheelReload__InitializeUX_fn(CogWheelReload* __this)
{
    __this->InitializeUX();
}

// public CogWheelReload New()
void CogWheelReload__New4_fn(CogWheelReload** __retval)
{
    *__retval = CogWheelReload::New4();
}

::g::Uno::UX::Selector CogWheelReload::__selector0_;
::g::Uno::UX::Selector CogWheelReload::__selector1_;
::g::Uno::UX::Selector CogWheelReload::__selector2_;
::g::Uno::UX::Selector CogWheelReload::__selector3_;
::g::Uno::UX::Selector CogWheelReload::__selector4_;
::g::Uno::UX::Selector CogWheelReload::__selector5_;
::g::Uno::UX::Selector CogWheelReload::__selector6_;
::g::Uno::UX::Selector CogWheelReload::__selector7_;
::g::Uno::UX::Selector CogWheelReload::__selector8_;
::g::Uno::UX::Selector CogWheelReload::__selector9_;
::g::Uno::UX::Selector CogWheelReload::__selector10_;
::g::Uno::UX::Selector CogWheelReload::__selector11_;
::g::Uno::UX::Selector CogWheelReload::__selector12_;
::g::Uno::UX::Selector CogWheelReload::__selector13_;
::g::Uno::UX::Selector CogWheelReload::__selector14_;
::g::Uno::UX::Selector CogWheelReload::__selector15_;
::g::Uno::UX::Selector CogWheelReload::__selector16_;
::g::Uno::UX::Selector CogWheelReload::__selector17_;
::g::Uno::UX::Selector CogWheelReload::__selector18_;
::g::Uno::UX::Selector CogWheelReload::__selector19_;
::g::Uno::UX::Selector CogWheelReload::__selector20_;
::g::Uno::UX::Selector CogWheelReload::__selector21_;
::g::Uno::UX::Selector CogWheelReload::__selector22_;

// public CogWheelReload() [instance]
void CogWheelReload::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance]
void CogWheelReload::InitializeUX()
{
    cogPanel = ::g::Fuse::Controls::Panel::New3();
    cogPanel_MinHeight_inst = ::g::HSMRO_FuseElementsElement_MinHeight_Property::New1(cogPanel, CogWheelReload::__selector0_);
    cogPanel_Height_inst = ::g::HSMRO_FuseElementsElement_Height_Property::New1(cogPanel, CogWheelReload::__selector1_);
    cog1Rotation = ::g::Fuse::Rotation::New2();
    cog1Rotation_Degrees_inst = ::g::HSMRO_FuseRotation_Degrees_Property::New1(cog1Rotation, CogWheelReload::__selector2_);
    cog2Rotation = ::g::Fuse::Rotation::New2();
    cog2Rotation_Degrees_inst = ::g::HSMRO_FuseRotation_Degrees_Property::New1(cog2Rotation, CogWheelReload::__selector2_);
    cog3Rotation = ::g::Fuse::Rotation::New2();
    cog3Rotation_Degrees_inst = ::g::HSMRO_FuseRotation_Degrees_Property::New1(cog3Rotation, CogWheelReload::__selector2_);
    cog4Rotation = ::g::Fuse::Rotation::New2();
    cog4Rotation_Degrees_inst = ::g::HSMRO_FuseRotation_Degrees_Property::New1(cog4Rotation, CogWheelReload::__selector2_);
    cog5Rotation = ::g::Fuse::Rotation::New2();
    cog5Rotation_Degrees_inst = ::g::HSMRO_FuseRotation_Degrees_Property::New1(cog5Rotation, CogWheelReload::__selector2_);
    cog2Trans = ::g::Fuse::Translation::New2();
    cog2Trans_Y_inst = ::g::HSMRO_FuseTranslation_Y_Property::New1(cog2Trans, CogWheelReload::__selector3_);
    cog3Trans = ::g::Fuse::Translation::New2();
    cog3Trans_Y_inst = ::g::HSMRO_FuseTranslation_Y_Property::New1(cog3Trans, CogWheelReload::__selector3_);
    cog4Trans = ::g::Fuse::Translation::New2();
    cog4Trans_Y_inst = ::g::HSMRO_FuseTranslation_Y_Property::New1(cog4Trans, CogWheelReload::__selector3_);
    cog5Trans = ::g::Fuse::Translation::New2();
    cog5Trans_Y_inst = ::g::HSMRO_FuseTranslation_Y_Property::New1(cog5Trans, CogWheelReload::__selector3_);
    retainSpace = ::g::Fuse::Triggers::WhileTrue::New2();
    retainSpace_Value_inst = ::g::HSMRO_FuseTriggersWhileBool_Value_Property::New1(retainSpace, CogWheelReload::__selector4_);
    ::g::Fuse::Triggers::PullToReload* temp = ::g::Fuse::Triggers::PullToReload::New3();
    temp_IsLoading_inst = ::g::HSMRO_FuseTriggersPullToReload_IsLoading_Property::New1(temp, CogWheelReload::__selector5_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"isLoading"*/]);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[24/*"reloadHandler"*/]);
    cog1 = ::g::SmallCog::New5();
    cog2 = ::g::BigCog::New5();
    cog3 = ::g::BigCog::New5();
    ::g::Fuse::Rotation* temp3 = ::g::Fuse::Rotation::New2();
    cog4 = ::g::BigCog::New5();
    ::g::Fuse::Rotation* temp4 = ::g::Fuse::Rotation::New2();
    cog5 = ::g::BigCog::New5();
    ::g::Fuse::Rotation* temp5 = ::g::Fuse::Rotation::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp6 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9372549f, 0.9333333f, 0.945098f, 1.0f));
    ::g::Fuse::Animations::Change* temp7 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<Uno.UX.Size>*/], cogPanel_MinHeight_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp8 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<Uno.UX.Size>*/], cogPanel_Height_inst);
    ::g::Fuse::Animations::Change* temp10 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], cog1Rotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp11 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], cog2Rotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp12 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], cog3Rotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp13 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], cog4Rotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp14 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], cog5Rotation_Degrees_inst);
    moveCogsIntoPlace = ::g::Fuse::Triggers::Timeline::New2();
    ::g::Fuse::Animations::Change* temp15 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], cog2Trans_Y_inst);
    ::g::Fuse::Animations::Change* temp16 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], cog3Trans_Y_inst);
    ::g::Fuse::Animations::Change* temp17 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], cog4Trans_Y_inst);
    ::g::Fuse::Animations::Change* temp18 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], cog5Trans_Y_inst);
    ::g::Fuse::Triggers::State* temp19 = ::g::Fuse::Triggers::State::New2();
    ::g::Fuse::Triggers::State* temp20 = ::g::Fuse::Triggers::State::New2();
    ::g::Fuse::Triggers::Actions::TimelineAction* temp21 = ::g::Fuse::Triggers::Actions::TimelineAction::New2();
    ::g::Fuse::Triggers::State* temp22 = ::g::Fuse::Triggers::State::New2();
    ::g::Fuse::Animations::Change* temp23 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<bool>*/], retainSpace_Value_inst);
    ::g::Fuse::Animations::Spin* temp24 = ::g::Fuse::Animations::Spin::New2();
    ::g::Fuse::Animations::Spin* temp25 = ::g::Fuse::Animations::Spin::New2();
    ::g::Fuse::Animations::Spin* temp26 = ::g::Fuse::Animations::Spin::New2();
    ::g::Fuse::Animations::Spin* temp27 = ::g::Fuse::Animations::Spin::New2();
    ::g::Fuse::Animations::Spin* temp28 = ::g::Fuse::Animations::Spin::New2();
    ::g::Fuse::Triggers::Actions::TimelineAction* temp29 = ::g::Fuse::Triggers::Actions::TimelineAction::New2();
    ::g::Fuse::Reactive::DataBinding* temp30 = ::g::Fuse::Reactive::DataBinding::New1(temp_IsLoading_inst, (uObject*)temp1, 3);
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    ClipToBounds(true);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    uPtr(cogPanel)->Height(::g::Uno::UX::Size__New1(0.0f, 1));
    uPtr(cogPanel)->MinHeight(::g::Uno::UX::Size__New1(0.0f, 1));
    uPtr(cogPanel)->Alignment(4);
    uPtr(cogPanel)->Name(CogWheelReload::__selector6_);
    uPtr(cogPanel)->SourceLineNumber(11);
    uPtr(cogPanel)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    uPtr(cogPanel)->Background(temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cogPanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cogPanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cogPanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cogPanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cogPanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog5);
    uPtr(cog1)->Name(CogWheelReload::__selector7_);
    uPtr(cog1)->SourceLineNumber(12);
    uPtr(cog1)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog1)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog1Rotation);
    uPtr(cog1Rotation)->Name(CogWheelReload::__selector8_);
    uPtr(cog1Rotation)->SourceLineNumber(13);
    uPtr(cog1Rotation)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    uPtr(cog2)->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(60.0f, 1), ::g::Uno::UX::Size__New1(-60.0f, 1)));
    uPtr(cog2)->Name(CogWheelReload::__selector9_);
    uPtr(cog2)->SourceLineNumber(15);
    uPtr(cog2)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog2)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog2Trans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog2)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog2Rotation);
    uPtr(cog2Trans)->Y(-100.0f);
    uPtr(cog2Trans)->Name(CogWheelReload::__selector10_);
    uPtr(cog2Trans)->SourceLineNumber(16);
    uPtr(cog2Trans)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    uPtr(cog2Rotation)->Name(CogWheelReload::__selector11_);
    uPtr(cog2Rotation)->SourceLineNumber(17);
    uPtr(cog2Rotation)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    uPtr(cog3)->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(-60.0f, 1), ::g::Uno::UX::Size__New1(60.0f, 1)));
    uPtr(cog3)->Name(CogWheelReload::__selector12_);
    uPtr(cog3)->SourceLineNumber(19);
    uPtr(cog3)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog3)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog3Trans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog3)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog3)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog3Rotation);
    uPtr(cog3Trans)->Y(100.0f);
    uPtr(cog3Trans)->Name(CogWheelReload::__selector13_);
    uPtr(cog3Trans)->SourceLineNumber(20);
    uPtr(cog3Trans)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    temp3->Degrees(10.0f);
    temp3->SourceLineNumber(21);
    temp3->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    uPtr(cog3Rotation)->Name(CogWheelReload::__selector14_);
    uPtr(cog3Rotation)->SourceLineNumber(22);
    uPtr(cog3Rotation)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    uPtr(cog4)->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(130.0f, 1), ::g::Uno::UX::Size__New1(30.0f, 1)));
    uPtr(cog4)->Name(CogWheelReload::__selector15_);
    uPtr(cog4)->SourceLineNumber(24);
    uPtr(cog4)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog4)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog4Trans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog4)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog4)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog4Rotation);
    uPtr(cog4Trans)->Y(100.0f);
    uPtr(cog4Trans)->Name(CogWheelReload::__selector16_);
    uPtr(cog4Trans)->SourceLineNumber(25);
    uPtr(cog4Trans)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    temp4->Degrees(5.0f);
    temp4->SourceLineNumber(26);
    temp4->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    uPtr(cog4Rotation)->Name(CogWheelReload::__selector17_);
    uPtr(cog4Rotation)->SourceLineNumber(27);
    uPtr(cog4Rotation)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    uPtr(cog5)->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(-100.0f, 1), ::g::Uno::UX::Size__New1(-47.0f, 1)));
    uPtr(cog5)->Name(CogWheelReload::__selector18_);
    uPtr(cog5)->SourceLineNumber(29);
    uPtr(cog5)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog5)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog5Trans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog5)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cog5)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cog5Rotation);
    uPtr(cog5Trans)->Y(-100.0f);
    uPtr(cog5Trans)->Name(CogWheelReload::__selector19_);
    uPtr(cog5Trans)->SourceLineNumber(30);
    uPtr(cog5Trans)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    temp5->Degrees(8.0f);
    temp5->SourceLineNumber(31);
    temp5->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    uPtr(cog5Rotation)->Name(CogWheelReload::__selector20_);
    uPtr(cog5Rotation)->SourceLineNumber(32);
    uPtr(cog5Rotation)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    uPtr(retainSpace)->Name(CogWheelReload::__selector21_);
    uPtr(retainSpace)->SourceLineNumber(39);
    uPtr(retainSpace)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(retainSpace)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    ::g::Fuse::Animations::Change__set_Value_fn(temp7, uCRef(::g::Uno::UX::Size__New1(75.0f, 1)));
    temp7->Duration(0.0);
    temp7->DurationBack(0.3);
    temp7->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp8->Range(1);
    temp8->SourceLineNumber(46);
    temp8->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, uCRef(::g::Uno::UX::Size__New1(150.0f, 1)));
    temp9->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp10, uCRef(200.0f));
    temp10->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp11, uCRef(-93.0f));
    temp11->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp12, uCRef(-93.0f));
    temp12->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp13, uCRef(93.0f));
    temp13->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp14, uCRef(93.0f));
    temp14->Duration(1.0);
    uPtr(moveCogsIntoPlace)->Name(CogWheelReload::__selector22_);
    uPtr(moveCogsIntoPlace)->SourceLineNumber(58);
    uPtr(moveCogsIntoPlace)->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveCogsIntoPlace)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveCogsIntoPlace)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveCogsIntoPlace)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moveCogsIntoPlace)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp18);
    ::g::Fuse::Animations::Change__set_Value_fn(temp15, uCRef(0.0f));
    temp15->Duration(0.6);
    temp15->DurationBack(0.2);
    temp15->Easing(::g::Fuse::Animations::Easing::CircularOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp16, uCRef(0.0f));
    temp16->Duration(0.6);
    temp16->DurationBack(0.2);
    temp16->Easing(::g::Fuse::Animations::Easing::CircularOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp17, uCRef(0.0f));
    temp17->Duration(0.6);
    temp17->DurationBack(0.2);
    temp17->Easing(::g::Fuse::Animations::Easing::CircularOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp18, uCRef(0.0f));
    temp18->Duration(0.6);
    temp18->DurationBack(0.2);
    temp18->Easing(::g::Fuse::Animations::Easing::CircularOut());
    temp->SourceLineNumber(67);
    temp->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    temp->add_ReloadHandler(uDelegate::New(::TYPES[5/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    temp->Pulling(temp19);
    temp->PulledPastThreshold(temp20);
    temp->Loading(temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    temp19->SourceLineNumber(68);
    temp19->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    temp20->SourceLineNumber(71);
    temp20->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp21);
    temp21->How(2);
    temp21->Progress(1.0);
    temp21->SourceLineNumber(72);
    temp21->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    temp21->Target(moveCogsIntoPlace);
    temp22->SourceLineNumber(75);
    temp22->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp29);
    ::g::Fuse::Animations::Change__set_Value_fn(temp23, uCRef(true));
    temp23->DurationBack(0.5);
    temp24->Frequency(0.53125);
    temp24->Target(cog1);
    temp25->Frequency(-0.25);
    temp25->Target(cog2);
    temp26->Frequency(-0.25);
    temp26->Target(cog3);
    temp27->Frequency(0.25);
    temp27->Target(cog4);
    temp28->Frequency(0.25);
    temp28->Target(cog5);
    temp29->How(2);
    temp29->Progress(0.0);
    temp29->When(1);
    temp29->SourceLineNumber(82);
    temp29->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    temp29->Target(moveCogsIntoPlace);
    temp1->SourceLineNumber(67);
    temp1->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    temp2->SourceLineNumber(67);
    temp2->SourceFileName(::STRINGS[25/*"Modules/Cog...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), cogPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), retainSpace);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), moveCogsIntoPlace);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
}

// public CogWheelReload New() [static]
CogWheelReload* CogWheelReload::New4()
{
    CogWheelReload* obj1 = (CogWheelReload*)uNew(CogWheelReload_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
