// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Nothing.h>
#include <Fuse.Animations.PlayerFeedbackFlags.h>
#include <Fuse.Animations.PlayMode.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Animations.TriggerAnimation.h>
#include <Fuse.Animations.TriggerAnimationState.h>
#include <Fuse.Animations.TriggerAnimationState.SeekFlags.h>
#include <Fuse.Controls.ITextEditControl.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.NavigationControlTransition.h>
#include <Fuse.Controls.NavigationSwitchedHandler.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.NavigatorSwitchedArgs.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollPositionChangedHandler.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.TextInputActionArgs.h>
#include <Fuse.Controls.TextInputActionHandler.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.PreplacementArgs.h>
#include <Fuse.Elements.PreplacementHandler.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformRelative.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Marshal.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.NavigationArgs.h>
#include <Fuse.Navigation.NavigationGotoMode.h>
#include <Fuse.Navigation.NavigationHandler.h>
#include <Fuse.Navigation.NavigationMode.h>
#include <Fuse.Navigation.NavigationPageState.h>
#include <Fuse.Navigation.RoutingOperation.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroupBase.ConstructFlags.h>
#include <Fuse.PendingRemoveVisual.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.CapsObject.h>
#include <Fuse.Reactive.WindowCaps.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scaling.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod1-1.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Actions.TriggerWhen.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.Android.h>
#include <Fuse.Triggers.Busy.h>
#include <Fuse.Triggers.BusyOn.h>
#include <Fuse.Triggers.BusyTask.h>
#include <Fuse.Triggers.BusyTask.Type.h>
#include <Fuse.Triggers.BusyTaskActivity.h>
#include <Fuse.Triggers.BusyTaskMatch.h>
#include <Fuse.Triggers.BusyTaskModule.ConstructorClosure.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.Completed.h>
#include <Fuse.Triggers.CompletedActivation.h>
#include <Fuse.Triggers.CompletedEventArgs.h>
#include <Fuse.Triggers.ContainingText.h>
#include <Fuse.Triggers.IBusyHandler.h>
#include <Fuse.Triggers.IMediaPlayback.h>
#include <Fuse.Triggers.InteractionCompleted.h>
#include <Fuse.Triggers.iOS.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.ContentSizeLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.IScrolledLengths.PixelsLength.h>
#include <Fuse.Triggers.IScrolledLengths.PointsLength.h>
#include <Fuse.Triggers.IScrolledLengths.ScrollViewSizeLength.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.IVisibility.h>
#include <Fuse.Triggers.KeyPressHandler.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutAnimationType.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.LayoutTransition.PositionChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.ResizeChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.ScaleChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h>
#include <Fuse.Triggers.LayoutTransitioned.h>
#include <Fuse.Triggers.LayoutTransitionedArgs.h>
#include <Fuse.Triggers.LayoutTransitionedHandler.h>
#include <Fuse.Triggers.OnBackButton.h>
#include <Fuse.Triggers.OnKeyPress.h>
#include <Fuse.Triggers.OnUserEvent.h>
#include <Fuse.Triggers.OnUserEventFilter.h>
#include <Fuse.Triggers.PageBeginLoading.h>
#include <Fuse.Triggers.PageLoaded.h>
#include <Fuse.Triggers.ProgressAnimation.h>
#include <Fuse.Triggers.PullToReload.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Fuse.Triggers.PulseTrigger-1.PulseHandler.h>
#include <Fuse.Triggers.RangeAnimation.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.Scrolled.h>
#include <Fuse.Triggers.ScrolledArgs.h>
#include <Fuse.Triggers.ScrolledWhere.h>
#include <Fuse.Triggers.ScrollingAnimation.h>
#include <Fuse.Triggers.ScrollingAnimationRange.h>
#include <Fuse.Triggers.ScrollRegion.h>
#include <Fuse.Triggers.State.h>
#include <Fuse.Triggers.StateGroup.GotoImpl.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.StateTransition.h>
#include <Fuse.Triggers.TextInputActionTriggered.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.Triggers.Timeline.State.h>
#include <Fuse.Triggers.Transition.h>
#include <Fuse.Triggers.TransitionDirection.h>
#include <Fuse.Triggers.TransitionGroup.h>
#include <Fuse.Triggers.TransitionMode.h>
#include <Fuse.Triggers.Trigger.DeferredItem.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.TriggerBypassMode.h>
#include <Fuse.Triggers.TriggerPlayState.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileBusy.h>
#include <Fuse.Triggers.WhileCompleted.h>
#include <Fuse.Triggers.WhileContainsText.h>
#include <Fuse.Triggers.WhileDisabled.h>
#include <Fuse.Triggers.WhileEnabled.h>
#include <Fuse.Triggers.WhileEnabledDisabledTrigger.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileFloat.h>
#include <Fuse.Triggers.WhileFloat.Range.h>
#include <Fuse.Triggers.WhileFocused.h>
#include <Fuse.Triggers.WhileFocusWithin.h>
#include <Fuse.Triggers.WhileInteracting.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode.h>
#include <Fuse.Triggers.WhileLoading.h>
#include <Fuse.Triggers.WhileNotFocused.h>
#include <Fuse.Triggers.WhilePageLoading.h>
#include <Fuse.Triggers.WhilePaused.h>
#include <Fuse.Triggers.WhilePlaying.h>
#include <Fuse.Triggers.WhileScrollable.h>
#include <Fuse.Triggers.WhileScrolled.h>
#include <Fuse.Triggers.WhileString.h>
#include <Fuse.Triggers.WhileStringTest.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Fuse.Triggers.WhileValueStatic.h>
#include <Fuse.Triggers.WhileVisible.h>
#include <Fuse.Triggers.WhileVisibleInScrollView.h>
#include <Fuse.Triggers.WhileVisibleInScrollViewMode.h>
#include <Fuse.Triggers.WhileWindowAspect.h>
#include <Fuse.Triggers.WhileWindowLandscape.h>
#include <Fuse.Triggers.WhileWindowPortrait.h>
#include <Fuse.Triggers.WhileWindowSize.h>
#include <Fuse.Triggers.WindowSizeTrigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEvent.h>
#include <Fuse.UserEventArgs.h>
#include <Fuse.UserEventDispatch.h>
#include <Fuse.UserEventHandler.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Fuse.VisualEventArgs.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[57];
static uType* TYPES[67];

namespace g{
namespace Fuse{
namespace Triggers{

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/AddingAnimation.uno
// ----------------------------------------------------------------------

// public sealed class AddingAnimation
// {
static void AddingAnimation_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        ::g::Uno::Bool_typeof(), offsetof(AddingAnimation, _delayFrame), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_DelayFrame", NULL, (void*)AddingAnimation__get_DelayFrame_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_DelayFrame", NULL, (void*)AddingAnimation__set_DelayFrame_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)AddingAnimation__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* AddingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(AddingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.AddingAnimation", options);
    type->fp_build_ = AddingAnimation_build;
    type->fp_ctor_ = (void*)AddingAnimation__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))AddingAnimation__OnRooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated AddingAnimation()
void AddingAnimation__ctor_5_fn(AddingAnimation* __this)
{
    __this->ctor_5();
}

// public bool get_DelayFrame()
void AddingAnimation__get_DelayFrame_fn(AddingAnimation* __this, bool* __retval)
{
    *__retval = __this->DelayFrame();
}

// public void set_DelayFrame(bool value)
void AddingAnimation__set_DelayFrame_fn(AddingAnimation* __this, bool* value)
{
    __this->DelayFrame(*value);
}

// public generated AddingAnimation New()
void AddingAnimation__New2_fn(AddingAnimation** __retval)
{
    *__retval = AddingAnimation::New2();
}

// protected override sealed void OnRooted()
void AddingAnimation__OnRooted_fn(AddingAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.AddingAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->BypassActivate();

    if (__this->DelayFrame())
        ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Triggers::Trigger__DirectDeactivate_fn, __this), 0, 1);
    else
        __this->DirectDeactivate();
}

// public generated AddingAnimation() [instance]
void AddingAnimation::ctor_5()
{
    _delayFrame = true;
    ctor_4();
}

// public bool get_DelayFrame() [instance]
bool AddingAnimation::DelayFrame()
{
    return _delayFrame;
}

// public void set_DelayFrame(bool value) [instance]
void AddingAnimation::DelayFrame(bool value)
{
    _delayFrame = value;
}

// public generated AddingAnimation New() [static]
AddingAnimation* AddingAnimation::New2()
{
    AddingAnimation* obj1 = (AddingAnimation*)uNew(AddingAnimation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Platforms.uno
// ----------------------------------------------------------------

// public sealed class Android
// {
static void Android_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Android__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* Android_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 39;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Android);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.Android", options);
    type->fp_build_ = Android_build;
    type->fp_ctor_ = (void*)Android__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Android__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Android__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated Android()
void Android__ctor_5_fn(Android* __this)
{
    __this->ctor_5();
}

// public generated Android New()
void Android__New2_fn(Android** __retval)
{
    *__retval = Android::New2();
}

// protected override sealed void OnRooted()
void Android__OnRooted_fn(Android* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
}

// protected override sealed void OnUnrooted()
void Android__OnUnrooted_fn(Android* __this)
{
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Android() [instance]
void Android::ctor_5()
{
    ctor_4();
}

// public generated Android New() [static]
Android* Android::New2()
{
    Android* obj1 = (Android*)uNew(Android_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Busy.uno
// -----------------------------------------------------------

// public partial sealed class Busy
// {
// static Busy()
static void Busy__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[2/*Fuse.Scripting.ScriptMember[]*/], 2, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::TYPES[3/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Busy>*/], ::STRINGS[0/*"activate"*/], uDelegate::New(::TYPES[4/*Uno.Action<Fuse.Triggers.Busy>*/], (void*)Busy__activate_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::TYPES[3/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Busy>*/], ::STRINGS[1/*"deactivate"*/], uDelegate::New(::TYPES[4/*Uno.Action<Fuse.Triggers.Busy>*/], (void*)Busy__deactivate_fn))));
}

static void Busy_build(uType* type)
{
    ::STRINGS[0] = uString::Const("activate");
    ::STRINGS[1] = uString::Const("deactivate");
    ::STRINGS[2] = uString::Const("");
    ::STRINGS[3] = uString::Const("On='ParameterChanged' requires a Visual parent");
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Busy.uno");
    ::STRINGS[5] = uString::Const("UpdateState");
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[3] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(type, NULL);
    ::TYPES[5] = ::g::Fuse::Visual_typeof();
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Triggers::BusyTask_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(18,
        ::g::Uno::Bool_typeof(), offsetof(Busy, _isActive), 0,
        ::g::Fuse::Triggers::BusyTaskActivity_typeof(), offsetof(Busy, _activity), 0,
        ::g::Fuse::Triggers::BusyOn_typeof(), offsetof(Busy, _on), 0,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(Busy, _busyTask), 0,
        ::g::Fuse::Triggers::BusyOn_typeof(), offsetof(Busy, _rootOn), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Activity", NULL, (void*)Busy__get_Activity_fn, 0, false, ::g::Fuse::Triggers::BusyTaskActivity_typeof(), 0),
        new uFunction("set_Activity", NULL, (void*)Busy__set_Activity_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::BusyTaskActivity_typeof()),
        new uFunction("get_IsActive", NULL, (void*)Busy__get_IsActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsActive", NULL, (void*)Busy__set_IsActive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Busy__New2_fn, 0, true, type, 0),
        new uFunction("get_On", NULL, (void*)Busy__get_On_fn, 0, false, ::g::Fuse::Triggers::BusyOn_typeof(), 0),
        new uFunction("set_On", NULL, (void*)Busy__set_On_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::BusyOn_typeof()));
}

::g::Fuse::Node_type* Busy_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 23;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Busy);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Triggers.Busy", options);
    type->fp_build_ = Busy_build;
    type->fp_ctor_ = (void*)Busy__New2_fn;
    type->fp_cctor_ = Busy__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Busy__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Busy__OnUnrooted_fn;
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

// public generated Busy()
void Busy__ctor_3_fn(Busy* __this)
{
    __this->ctor_3();
}

// private static void activate(Fuse.Triggers.Busy b)
void Busy__activate_fn(Busy* b)
{
    Busy::activate(b);
}

// public Fuse.Triggers.BusyTaskActivity get_Activity()
void Busy__get_Activity_fn(Busy* __this, int32_t* __retval)
{
    *__retval = __this->Activity();
}

// public void set_Activity(Fuse.Triggers.BusyTaskActivity value)
void Busy__set_Activity_fn(Busy* __this, int32_t* value)
{
    __this->Activity(*value);
}

// private static void deactivate(Fuse.Triggers.Busy b)
void Busy__deactivate_fn(Busy* b)
{
    Busy::deactivate(b);
}

// public bool get_IsActive()
void Busy__get_IsActive_fn(Busy* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value)
void Busy__set_IsActive_fn(Busy* __this, bool* value)
{
    __this->IsActive(*value);
}

// public generated Busy New()
void Busy__New2_fn(Busy** __retval)
{
    *__retval = Busy::New2();
}

// public Fuse.Triggers.BusyOn get_On()
void Busy__get_On_fn(Busy* __this, int32_t* __retval)
{
    *__retval = __this->On();
}

// public void set_On(Fuse.Triggers.BusyOn value)
void Busy__set_On_fn(Busy* __this, int32_t* value)
{
    __this->On(*value);
}

// private void OnParameterChanged(object s, Uno.EventArgs args)
void Busy__OnParameterChanged_fn(Busy* __this, uObject* s, ::g::Uno::EventArgs* args)
{
    __this->OnParameterChanged(s, args);
}

// protected override sealed void OnRooted()
void Busy__OnRooted_fn(Busy* __this)
{
    uStackFrame __("Fuse.Triggers.Busy", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);

    if ((__this->_rootOn & 1) == 1)
        uPtr(uAs< ::g::Fuse::Visual*>(__this->Parent(), ::TYPES[5/*Fuse.Visual*/]))->remove_ParameterChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)Busy__OnParameterChanged_fn, __this));

    __this->UpdateState();
}

// protected override sealed void OnUnrooted()
void Busy__OnUnrooted_fn(Busy* __this)
{
    uStackFrame __("Fuse.Triggers.Busy", "OnUnrooted()");
    ::g::Fuse::Triggers::BusyTask::SetBusy(__this->Parent(), &__this->_busyTask, 0, ::STRINGS[2/*""*/]);
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void UpdateState()
void Busy__UpdateState_fn(Busy* __this)
{
    __this->UpdateState();
}

// public generated Busy() [instance]
void Busy::ctor_3()
{
    _isActive = true;
    _activity = 4;
    ctor_2();
}

// public Fuse.Triggers.BusyTaskActivity get_Activity() [instance]
int32_t Busy::Activity()
{
    return _activity;
}

// public void set_Activity(Fuse.Triggers.BusyTaskActivity value) [instance]
void Busy::Activity(int32_t value)
{
    uStackFrame __("Fuse.Triggers.Busy", "set_Activity(Fuse.Triggers.BusyTaskActivity)");

    if (value == _activity)
        return;

    _activity = value;
    UpdateState();
}

// public bool get_IsActive() [instance]
bool Busy::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance]
void Busy::IsActive(bool value)
{
    uStackFrame __("Fuse.Triggers.Busy", "set_IsActive(bool)");

    if (value == _isActive)
        return;

    _isActive = value;
    UpdateState();
}

// public Fuse.Triggers.BusyOn get_On() [instance]
int32_t Busy::On()
{
    return _on;
}

// public void set_On(Fuse.Triggers.BusyOn value) [instance]
void Busy::On(int32_t value)
{
    _on = value;
}

// private void OnParameterChanged(object s, Uno.EventArgs args) [instance]
void Busy::OnParameterChanged(uObject* s, ::g::Uno::EventArgs* args)
{
    IsActive(true);
}

// private void UpdateState() [instance]
void Busy::UpdateState()
{
    uStackFrame __("Fuse.Triggers.Busy", "UpdateState()");

    if (!IsRootingStarted())
        return;

    ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, IsActive() ? Activity() : 0, ::STRINGS[2/*""*/]);
    _rootOn = _on;

    if ((_rootOn & 1) == 1)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(Parent(), ::TYPES[5/*Fuse.Visual*/]);

        if (v == NULL)
        {
            _rootOn = (_rootOn & -2);
            ::g::Fuse::Diagnostics::UserError(::STRINGS[3/*"On='Paramet...*/], this, ::STRINGS[4/*"/usr/local/...*/], 132, ::STRINGS[5/*"UpdateState"*/], NULL);
        }
        else
            uPtr(v)->add_ParameterChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)Busy__OnParameterChanged_fn, this));
    }
}

// private static void activate(Fuse.Triggers.Busy b) [static]
void Busy::activate(Busy* b)
{
    uStackFrame __("Fuse.Triggers.Busy", "activate(Fuse.Triggers.Busy)");
    Busy_typeof()->Init();
    uPtr(b)->IsActive(true);
}

// private static void deactivate(Fuse.Triggers.Busy b) [static]
void Busy::deactivate(Busy* b)
{
    uStackFrame __("Fuse.Triggers.Busy", "deactivate(Fuse.Triggers.Busy)");
    Busy_typeof()->Init();
    uPtr(b)->IsActive(false);
}

// public generated Busy New() [static]
Busy* Busy::New2()
{
    Busy* obj1 = (Busy*)uNew(Busy_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Busy.uno
// -----------------------------------------------------------

// public enum BusyOn
uEnumType* BusyOn_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.BusyOn", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "ParameterChanged", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/BusyTask.uno
// ---------------------------------------------------------------

// public sealed class BusyTask
// {
// static BusyTask()
static void BusyTask__cctor__fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    BusyTask::_tasks_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(__type, NULL)));
    BusyTask::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[9/*Fuse.Node*/], ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[0/*Uno.Action*/], NULL), NULL)));
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[2/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("done"), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(__type, NULL), (void*)BusyTask__done_fn))));
}

static void BusyTask_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(BusyTask, _node), 0,
        BusyTask__Type_typeof(), offsetof(BusyTask, _type), 0,
        ::g::Fuse::Triggers::BusyTaskActivity_typeof(), offsetof(BusyTask, _activity), 0,
        ::g::Uno::String_typeof(), offsetof(BusyTask, _message), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(type, NULL), (uintptr_t)&BusyTask::_tasks_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL), NULL), (uintptr_t)&BusyTask::_listeners_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("GetBusyActivity", NULL, (void*)BusyTask__GetBusyActivity_fn, 0, true, ::g::Fuse::Triggers::BusyTaskActivity_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Triggers::BusyTaskMatch_typeof()),
        new uFunction("IsBusy", NULL, (void*)BusyTask__IsBusy_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Triggers::BusyTaskMatch_typeof()),
        new uFunction("SetBusy", NULL, (void*)BusyTask__SetBusy_fn, 0, true, uVoid_typeof(), 4, ::g::Fuse::Node_typeof(), type->ByRef(), ::g::Fuse::Triggers::BusyTaskActivity_typeof(), ::g::Uno::String_typeof()));
}

uType* BusyTask_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(BusyTask);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.BusyTask", options);
    type->fp_build_ = BusyTask_build;
    type->fp_cctor_ = BusyTask__cctor__fn;
    return type;
}

// internal BusyTask(Fuse.Node n, [Fuse.Triggers.BusyTask.Type type], [Fuse.Triggers.BusyTaskActivity act], [string message])
void BusyTask__ctor__fn(BusyTask* __this, ::g::Fuse::Node* n, int32_t* type, int32_t* act, uString* message)
{
    __this->ctor_(n, *type, *act, message);
}

// internal static void AddListener(Fuse.Node n, Uno.Action handler)
void BusyTask__AddListener_fn(::g::Fuse::Node* n, uDelegate* handler)
{
    BusyTask::AddListener(n, handler);
}

// private static void done(Fuse.Triggers.BusyTask bt)
void BusyTask__done_fn(BusyTask* bt)
{
    BusyTask::done(bt);
}

// internal void Done()
void BusyTask__Done_fn(BusyTask* __this)
{
    __this->Done();
}

// public static Fuse.Triggers.BusyTaskActivity GetBusyActivity(Fuse.Node n, [Fuse.Triggers.BusyTaskMatch match])
void BusyTask__GetBusyActivity_fn(::g::Fuse::Node* n, int32_t* match, int32_t* __retval)
{
    *__retval = BusyTask::GetBusyActivity(n, *match);
}

// public static bool IsBusy(Fuse.Node n, [Fuse.Triggers.BusyTaskMatch match])
void BusyTask__IsBusy_fn(::g::Fuse::Node* n, int32_t* match, bool* __retval)
{
    *__retval = BusyTask::IsBusy(n, *match);
}

// private static bool IsBusyHandled(Fuse.Node n, Fuse.Triggers.BusyTaskActivity activity)
void BusyTask__IsBusyHandled_fn(::g::Fuse::Node* n, int32_t* activity, bool* __retval)
{
    *__retval = BusyTask::IsBusyHandled(n, *activity);
}

// internal BusyTask New(Fuse.Node n, [Fuse.Triggers.BusyTask.Type type], [Fuse.Triggers.BusyTaskActivity act], [string message])
void BusyTask__New1_fn(::g::Fuse::Node* n, int32_t* type, int32_t* act, uString* message, BusyTask** __retval)
{
    *__retval = BusyTask::New1(n, *type, *act, message);
}

// private static void OnBusyChanged(Fuse.Node n)
void BusyTask__OnBusyChanged_fn(::g::Fuse::Node* n)
{
    BusyTask::OnBusyChanged(n);
}

// private void OnRooted()
void BusyTask__OnRooted_fn(BusyTask* __this)
{
    __this->OnRooted();
}

// private void OnUnrooted()
void BusyTask__OnUnrooted_fn(BusyTask* __this)
{
    __this->OnUnrooted();
}

// internal static void RemoveListener(Fuse.Node n, Uno.Action handler)
void BusyTask__RemoveListener_fn(::g::Fuse::Node* n, uDelegate* handler)
{
    BusyTask::RemoveListener(n, handler);
}

// public static void SetBusy(Fuse.Node n, Fuse.Triggers.BusyTask& bt, Fuse.Triggers.BusyTaskActivity act, [string message])
void BusyTask__SetBusy_fn(::g::Fuse::Node* n, BusyTask** bt, int32_t* act, uString* message)
{
    BusyTask::SetBusy(n, bt, *act, message);
}

// internal void SetNodeActivity(Fuse.Node n, Fuse.Triggers.BusyTaskActivity act, string message)
void BusyTask__SetNodeActivity_fn(BusyTask* __this, ::g::Fuse::Node* n, int32_t* act, uString* message)
{
    __this->SetNodeActivity(n, *act, message);
}

uSStrong< ::g::Uno::Collections::List*> BusyTask::_tasks_;
uSStrong< ::g::Uno::Collections::Dictionary*> BusyTask::_listeners_;

// internal BusyTask(Fuse.Node n, [Fuse.Triggers.BusyTask.Type type], [Fuse.Triggers.BusyTaskActivity act], [string message]) [instance]
void BusyTask::ctor_(::g::Fuse::Node* n, int32_t type, int32_t act, uString* message)
{
    uStackFrame __("Fuse.Triggers.BusyTask", ".ctor(Fuse.Node,[Fuse.Triggers.BusyTask.Type],[Fuse.Triggers.BusyTaskActivity],[string])");
    _type = type;
    _node = n;
    _activity = act;
    _message = message;
    ::g::Uno::Collections::List__Add_fn(uPtr(BusyTask::_tasks_), this);
    uPtr(_node)->add_Unrooted(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)BusyTask__OnUnrooted_fn, this));
    uPtr(_node)->add_RootingCompleted(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)BusyTask__OnRooted_fn, this));

    if (uPtr(_node)->IsRootingStarted())
        BusyTask::OnBusyChanged(n);
}

// internal void Done() [instance]
void BusyTask::Done()
{
    uStackFrame __("Fuse.Triggers.BusyTask", "Done()");
    bool ret4;
    bool ret5;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(BusyTask::_tasks_), this, &ret4), ret4))
    {
        uPtr(_node)->remove_Unrooted(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)BusyTask__OnUnrooted_fn, this));
        uPtr(_node)->remove_RootingCompleted(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)BusyTask__OnRooted_fn, this));
        ::g::Uno::Collections::List__Remove_fn(uPtr(BusyTask::_tasks_), this, &ret5);
        BusyTask::OnBusyChanged(_node);
    }
}

// private void OnRooted() [instance]
void BusyTask::OnRooted()
{
    uStackFrame __("Fuse.Triggers.BusyTask", "OnRooted()");
    BusyTask::OnBusyChanged(_node);
}

// private void OnUnrooted() [instance]
void BusyTask::OnUnrooted()
{
    uStackFrame __("Fuse.Triggers.BusyTask", "OnUnrooted()");

    if (_type == 1)
        Done();

    BusyTask::OnBusyChanged(_node);
}

// internal void SetNodeActivity(Fuse.Node n, Fuse.Triggers.BusyTaskActivity act, string message) [instance]
void BusyTask::SetNodeActivity(::g::Fuse::Node* n, int32_t act, uString* message)
{
    uStackFrame __("Fuse.Triggers.BusyTask", "SetNodeActivity(Fuse.Node,Fuse.Triggers.BusyTaskActivity,string)");
    _node = n;
    _activity = act;
    _message = message;

    if (uPtr(_node)->IsRootingStarted())
        BusyTask::OnBusyChanged(_node);
}

// internal static void AddListener(Fuse.Node n, Uno.Action handler) [static]
void BusyTask::AddListener(::g::Fuse::Node* n, uDelegate* handler)
{
    uStackFrame __("Fuse.Triggers.BusyTask", "AddListener(Fuse.Node,Uno.Action)");
    BusyTask_typeof()->Init();
    bool ret2;
    ::g::Uno::Collections::List* ret3;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(BusyTask::_listeners_), n, &ret2), ret2))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BusyTask::_listeners_), n, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::TYPES[0/*Uno.Action*/], NULL)));

    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BusyTask::_listeners_), n, &ret3), ret3)), handler);
}

// private static void done(Fuse.Triggers.BusyTask bt) [static]
void BusyTask::done(BusyTask* bt)
{
    uStackFrame __("Fuse.Triggers.BusyTask", "done(Fuse.Triggers.BusyTask)");
    BusyTask_typeof()->Init();
    uPtr(bt)->Done();
}

// public static Fuse.Triggers.BusyTaskActivity GetBusyActivity(Fuse.Node n, [Fuse.Triggers.BusyTaskMatch match]) [static]
int32_t BusyTask::GetBusyActivity(::g::Fuse::Node* n, int32_t match)
{
    uStackFrame __("Fuse.Triggers.BusyTask", "GetBusyActivity(Fuse.Node,[Fuse.Triggers.BusyTaskMatch])");
    BusyTask_typeof()->Init();
    BusyTask* ret6;
    int32_t act = 0;

    for (int32_t i = 0; i < uPtr(BusyTask::_tasks_)->Count(); i++)
    {
        BusyTask* task = (::g::Uno::Collections::List__get_Item_fn(uPtr(BusyTask::_tasks_), uCRef<int32_t>(i), &ret6), ret6);
        ::g::Fuse::Node* tnode = uPtr(task)->_node;

        if (!uPtr(tnode)->IsRootingStarted())
            continue;

        while (tnode != NULL)
        {
            if (match == 1)
            {
                if (uPtr(tnode)->ContextParent() == n)
                {
                    act = act | uPtr(task)->_activity;
                    break;
                }
            }
            else if (tnode == n)
            {
                act = act | uPtr(task)->_activity;
                break;
            }

            if (match == 2)
                break;

            if (BusyTask::IsBusyHandled(tnode, uPtr(task)->_activity))
                break;

            tnode = uPtr(tnode)->ContextParent();
        }
    }

    return act;
}

// public static bool IsBusy(Fuse.Node n, [Fuse.Triggers.BusyTaskMatch match]) [static]
bool BusyTask::IsBusy(::g::Fuse::Node* n, int32_t match)
{
    uStackFrame __("Fuse.Triggers.BusyTask", "IsBusy(Fuse.Node,[Fuse.Triggers.BusyTaskMatch])");
    BusyTask_typeof()->Init();
    return BusyTask::GetBusyActivity(n, 0) != 0;
}

// private static bool IsBusyHandled(Fuse.Node n, Fuse.Triggers.BusyTaskActivity activity) [static]
bool BusyTask::IsBusyHandled(::g::Fuse::Node* n, int32_t activity)
{
    uStackFrame __("Fuse.Triggers.BusyTask", "IsBusyHandled(Fuse.Node,Fuse.Triggers.BusyTaskActivity)");
    BusyTask_typeof()->Init();
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[5/*Fuse.Visual*/]);

    if (v == NULL)
        return false;

    for (::g::Fuse::Node* x = (::g::Fuse::Node*)uPtr(v)->FirstChild(::TYPES[5/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::TYPES[9/*Fuse.Node*/], NULL)); x != NULL; x = (::g::Fuse::Node*)uPtr(x)->NextSibling(::TYPES[9/*Fuse.Node*/]->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::TYPES[9/*Fuse.Node*/], NULL)))
    {
        uObject* handler = uAs<uObject*>(x, ::g::Fuse::Triggers::IBusyHandler_typeof());
        int32_t vact = (handler == NULL) ? 0 : ::g::Fuse::Triggers::IBusyHandler::BusyActivityHandled(uInterface(uPtr(handler), ::g::Fuse::Triggers::IBusyHandler_typeof()));
        activity = activity & ~vact;
    }

    return activity == 0;
}

// internal BusyTask New(Fuse.Node n, [Fuse.Triggers.BusyTask.Type type], [Fuse.Triggers.BusyTaskActivity act], [string message]) [static]
BusyTask* BusyTask::New1(::g::Fuse::Node* n, int32_t type, int32_t act, uString* message)
{
    BusyTask* obj1 = (BusyTask*)uNew(BusyTask_typeof());
    obj1->ctor_(n, type, act, message);
    return obj1;
}

// private static void OnBusyChanged(Fuse.Node n) [static]
void BusyTask::OnBusyChanged(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.BusyTask", "OnBusyChanged(Fuse.Node)");
    BusyTask_typeof()->Init();
    bool ret7;
    ::g::Uno::Collections::List* ret8;
    uDelegate* ret9;

    if (uPtr(n)->IsUnrooted())
        return;

    while (n != NULL)
    {
        if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(BusyTask::_listeners_), n, &ret7), ret7))
        {
            ::g::Uno::Collections::List* listeners = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BusyTask::_listeners_), n, &ret8), ret8);

            for (int32_t i = 0; i < uPtr(listeners)->Count(); i++)
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(listeners), uCRef<int32_t>(i), &ret9), ret9))->InvokeVoid();
        }

        n = uPtr(n)->Parent();
    }
}

// internal static void RemoveListener(Fuse.Node n, Uno.Action handler) [static]
void BusyTask::RemoveListener(::g::Fuse::Node* n, uDelegate* handler)
{
    uStackFrame __("Fuse.Triggers.BusyTask", "RemoveListener(Fuse.Node,Uno.Action)");
    BusyTask_typeof()->Init();
    bool ret10;
    ::g::Uno::Collections::List* ret11;
    ::g::Uno::Collections::List* ret12;
    bool ret13;
    ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BusyTask::_listeners_), n, &ret11), ret11)), handler, &ret10);

    if (uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BusyTask::_listeners_), n, &ret12), ret12))->Count() == 0)
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(BusyTask::_listeners_), n, &ret13);
}

// public static void SetBusy(Fuse.Node n, Fuse.Triggers.BusyTask& bt, Fuse.Triggers.BusyTaskActivity act, [string message]) [static]
void BusyTask::SetBusy(::g::Fuse::Node* n, BusyTask** bt, int32_t act, uString* message)
{
    uStackFrame __("Fuse.Triggers.BusyTask", "SetBusy(Fuse.Node,Fuse.Triggers.BusyTask&,Fuse.Triggers.BusyTaskActivity,[string])");
    BusyTask_typeof()->Init();

    if (act != 0)
    {
        if (*bt == NULL)
            *bt = BusyTask::New1(n, 0, act, message);
        else
            uPtr(*bt)->SetNodeActivity(n, act, message);
    }
    else
    {
        if (*bt != NULL)
        {
            uPtr(*bt)->Done();
            *bt = NULL;
        }
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/BusyTask.uno
// ---------------------------------------------------------------

// public enum BusyTaskActivity
uEnumType* BusyTaskActivity_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.BusyTaskActivity", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "None", 0LL,
        "Loading", 1LL,
        "Deferring", 2LL,
        "Processing", 4LL,
        "Preparing", 8LL,
        "Failed", 16LL,
        "Short", 10LL,
        "Long", 5LL,
        "Common", 15LL,
        "Any", 31LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/BusyTask.uno
// ---------------------------------------------------------------

// public enum BusyTaskMatch
uEnumType* BusyTaskMatch_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.BusyTaskMatch", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Descendents", 0LL,
        "OnlyDescendents", 1LL,
        "Parent", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/BusyTaskModule.uno
// ---------------------------------------------------------------------

// public sealed class BusyTaskModule
// {
static void BusyTaskModule_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&BusyTaskModule::_module_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BusyTaskModule__New2_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* BusyTaskModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(BusyTaskModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Triggers.BusyTaskModule", options);
    type->fp_build_ = BusyTaskModule_build;
    type->fp_ctor_ = (void*)BusyTaskModule__New2_fn;
    type->fp_CreateExportsObject = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, uObject**))BusyTaskModule__CreateExportsObject_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public BusyTaskModule()
void BusyTaskModule__ctor_2_fn(BusyTaskModule* __this)
{
    __this->ctor_2();
}

// private override sealed object CreateExportsObject(Fuse.Scripting.Context c)
void BusyTaskModule__CreateExportsObject_fn(BusyTaskModule* __this, ::g::Fuse::Scripting::Context* c, uObject** __retval)
{
    return *__retval = uDelegate::New(::g::Fuse::Scripting::Callback_typeof(), (void*)BusyTaskModule__ConstructorClosure__Construct_fn, BusyTaskModule__ConstructorClosure::New1(c)), void();
}

// public BusyTaskModule New()
void BusyTaskModule__New2_fn(BusyTaskModule** __retval)
{
    *__retval = BusyTaskModule::New2();
}

uSStrong<BusyTaskModule*> BusyTaskModule::_module_;

// public BusyTaskModule() [instance]
void BusyTaskModule::ctor_2()
{
    uStackFrame __("Fuse.Triggers.BusyTaskModule", ".ctor()");
    ctor_1();

    if (BusyTaskModule::_module_ == NULL)
    {
        BusyTaskModule::_module_ = this;
        ::g::Uno::UX::Resource::SetGlobalKey(this, uString::Const("FuseJS/BusyTask"));
    }
}

// public BusyTaskModule New() [static]
BusyTaskModule* BusyTaskModule::New2()
{
    BusyTaskModule* obj1 = (BusyTaskModule*)uNew(BusyTaskModule_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Completed.uno
// ----------------------------------------------------------------

// public partial sealed class Completed
// {
// static Completed()
static void Completed__cctor_2_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[2/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::TYPES[7/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Completed>*/], ::STRINGS[6/*"reset"*/], uDelegate::New(::TYPES[8/*Uno.Action<Fuse.Triggers.Completed>*/], (void*)Completed__reset_fn))));
}

static void Completed_build(uType* type)
{
    ::STRINGS[6] = uString::Const("reset");
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[7] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(type, NULL);
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetBase(::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Fuse::Triggers::CompletedEventArgs_typeof(), NULL));
    type->SetDependencies(
        ::g::Fuse::Triggers::BusyTask_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40,
        ::g::Uno::Bool_typeof(), offsetof(Completed, _pulsed), 0,
        ::g::Uno::Bool_typeof(), offsetof(Completed, _listening), 0,
        ::g::Fuse::Triggers::CompletedActivation_typeof(), offsetof(Completed, _activation), 0,
        ::g::Fuse::Triggers::BusyTaskActivity_typeof(), offsetof(Completed, _activity), 0,
        ::g::Fuse::Triggers::BusyTaskMatch_typeof(), offsetof(Completed, _match), 0,
        ::g::Uno::Bool_typeof(), offsetof(Completed, _repeat), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Activation", NULL, (void*)Completed__get_Activation_fn, 0, false, ::g::Fuse::Triggers::CompletedActivation_typeof(), 0),
        new uFunction("set_Activation", NULL, (void*)Completed__set_Activation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::CompletedActivation_typeof()),
        new uFunction("get_Activity", NULL, (void*)Completed__get_Activity_fn, 0, false, ::g::Fuse::Triggers::BusyTaskActivity_typeof(), 0),
        new uFunction("set_Activity", NULL, (void*)Completed__set_Activity_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::BusyTaskActivity_typeof()),
        new uFunction("get_Match", NULL, (void*)Completed__get_Match_fn, 0, false, ::g::Fuse::Triggers::BusyTaskMatch_typeof(), 0),
        new uFunction("set_Match", NULL, (void*)Completed__set_Match_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::BusyTaskMatch_typeof()),
        new uFunction(".ctor", NULL, (void*)Completed__New2_fn, 0, true, type, 0),
        new uFunction("get_Repeat", NULL, (void*)Completed__get_Repeat_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Repeat", NULL, (void*)Completed__set_Repeat_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Reset", NULL, (void*)Completed__Reset_fn, 0, false, uVoid_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* Completed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::PulseTrigger_typeof();
    options.FieldCount = 46;
    options.InterfaceCount = 9;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Completed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.Completed", options);
    type->fp_build_ = Completed_build;
    type->fp_ctor_ = (void*)Completed__New2_fn;
    type->fp_cctor_ = Completed__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Completed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Completed__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated Completed()
void Completed__ctor_6_fn(Completed* __this)
{
    __this->ctor_6();
}

// public Fuse.Triggers.CompletedActivation get_Activation()
void Completed__get_Activation_fn(Completed* __this, int32_t* __retval)
{
    *__retval = __this->Activation();
}

// public void set_Activation(Fuse.Triggers.CompletedActivation value)
void Completed__set_Activation_fn(Completed* __this, int32_t* value)
{
    __this->Activation(*value);
}

// public Fuse.Triggers.BusyTaskActivity get_Activity()
void Completed__get_Activity_fn(Completed* __this, int32_t* __retval)
{
    *__retval = __this->Activity();
}

// public void set_Activity(Fuse.Triggers.BusyTaskActivity value)
void Completed__set_Activity_fn(Completed* __this, int32_t* value)
{
    __this->Activity(*value);
}

// private void Cleanup(bool unroot)
void Completed__Cleanup_fn(Completed* __this, bool* unroot)
{
    __this->Cleanup(*unroot);
}

// private void DoPulse()
void Completed__DoPulse_fn(Completed* __this)
{
    __this->DoPulse();
}

// private bool get_IsBusy()
void Completed__get_IsBusy_fn(Completed* __this, bool* __retval)
{
    *__retval = __this->IsBusy();
}

// public Fuse.Triggers.BusyTaskMatch get_Match()
void Completed__get_Match_fn(Completed* __this, int32_t* __retval)
{
    *__retval = __this->Match();
}

// public void set_Match(Fuse.Triggers.BusyTaskMatch value)
void Completed__set_Match_fn(Completed* __this, int32_t* value)
{
    __this->Match(*value);
}

// public generated Completed New()
void Completed__New2_fn(Completed** __retval)
{
    *__retval = Completed::New2();
}

// protected override sealed void OnRooted()
void Completed__OnRooted_fn(Completed* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Reset();
}

// protected override sealed void OnUnrooted()
void Completed__OnUnrooted_fn(Completed* __this)
{
    uStackFrame __("Fuse.Triggers.Completed", "OnUnrooted()");
    __this->Cleanup(true);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public bool get_Repeat()
void Completed__get_Repeat_fn(Completed* __this, bool* __retval)
{
    *__retval = __this->Repeat();
}

// public void set_Repeat(bool value)
void Completed__set_Repeat_fn(Completed* __this, bool* value)
{
    __this->Repeat(*value);
}

// private static void reset(Fuse.Triggers.Completed cp)
void Completed__reset_fn(Completed* cp)
{
    Completed::reset(cp);
}

// public void Reset()
void Completed__Reset_fn(Completed* __this)
{
    __this->Reset();
}

// private void Setup()
void Completed__Setup_fn(Completed* __this)
{
    __this->Setup();
}

// private void Update()
void Completed__Update_fn(Completed* __this)
{
    __this->Update();
}

// public generated Completed() [instance]
void Completed::ctor_6()
{
    _activation = 1;
    _activity = 15;
    ctor_5();
}

// public Fuse.Triggers.CompletedActivation get_Activation() [instance]
int32_t Completed::Activation()
{
    return _activation;
}

// public void set_Activation(Fuse.Triggers.CompletedActivation value) [instance]
void Completed::Activation(int32_t value)
{
    _activation = value;
}

// public Fuse.Triggers.BusyTaskActivity get_Activity() [instance]
int32_t Completed::Activity()
{
    return _activity;
}

// public void set_Activity(Fuse.Triggers.BusyTaskActivity value) [instance]
void Completed::Activity(int32_t value)
{
    uStackFrame __("Fuse.Triggers.Completed", "set_Activity(Fuse.Triggers.BusyTaskActivity)");
    _activity = value;

    if (IsRootingCompleted())
        Update();
}

// private void Cleanup(bool unroot) [instance]
void Completed::Cleanup(bool unroot)
{
    uStackFrame __("Fuse.Triggers.Completed", "Cleanup(bool)");

    if (Repeat() && !unroot)
    {
        _pulsed = false;
        return;
    }

    if (_listening)
    {
        ::g::Fuse::Triggers::BusyTask::RemoveListener(Parent(), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Completed__Update_fn, this));
        _listening = false;
    }
}

// private void DoPulse() [instance]
void Completed::DoPulse()
{
    uStackFrame __("Fuse.Triggers.Completed", "DoPulse()");

    if (!IsBusy() && !_pulsed)
    {
        _pulsed = true;
        Cleanup(false);
        Pulse1(::g::Fuse::Triggers::CompletedEventArgs::New2());
    }
}

// private bool get_IsBusy() [instance]
bool Completed::IsBusy()
{
    uStackFrame __("Fuse.Triggers.Completed", "get_IsBusy()");
    int32_t act = ::g::Fuse::Triggers::BusyTask::GetBusyActivity(Parent(), Match());
    bool busy = (act & Activity()) != 0;
    return busy;
}

// public Fuse.Triggers.BusyTaskMatch get_Match() [instance]
int32_t Completed::Match()
{
    return _match;
}

// public void set_Match(Fuse.Triggers.BusyTaskMatch value) [instance]
void Completed::Match(int32_t value)
{
    uStackFrame __("Fuse.Triggers.Completed", "set_Match(Fuse.Triggers.BusyTaskMatch)");
    _match = value;

    if (IsRootingCompleted())
        Update();
}

// public bool get_Repeat() [instance]
bool Completed::Repeat()
{
    return _repeat;
}

// public void set_Repeat(bool value) [instance]
void Completed::Repeat(bool value)
{
    _repeat = value;
}

// public void Reset() [instance]
void Completed::Reset()
{
    _pulsed = false;
    Setup();
}

// private void Setup() [instance]
void Completed::Setup()
{
    uStackFrame __("Fuse.Triggers.Completed", "Setup()");

    if (!_listening)
    {
        ::g::Fuse::Triggers::BusyTask::AddListener(Parent(), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Completed__Update_fn, this));
        _listening = true;
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Completed__Update_fn, this), -1, 2);
    }
}

// private void Update() [instance]
void Completed::Update()
{
    uStackFrame __("Fuse.Triggers.Completed", "Update()");

    if (!IsBusy() && !_pulsed)
    {
        if (Activation() == 1)
            ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Completed__DoPulse_fn, this), 0, 1);
        else
            DoPulse();
    }
}

// public generated Completed New() [static]
Completed* Completed::New2()
{
    Completed* obj1 = (Completed*)uNew(Completed_typeof());
    obj1->ctor_6();
    return obj1;
}

// private static void reset(Fuse.Triggers.Completed cp) [static]
void Completed::reset(Completed* cp)
{
    uStackFrame __("Fuse.Triggers.Completed", "reset(Fuse.Triggers.Completed)");
    Completed_typeof()->Init();
    uPtr(cp)->Reset();
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Completed.uno
// ----------------------------------------------------------------

// public enum CompletedActivation
uEnumType* CompletedActivation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.CompletedActivation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "SameFrame", 0LL,
        "NextFrame", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Completed.uno
// ----------------------------------------------------------------

// public sealed class CompletedEventArgs
// {
static void CompletedEventArgs_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CompletedEventArgs__New2_fn, 0, true, type, 0));
}

uType* CompletedEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.ObjectSize = sizeof(CompletedEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.CompletedEventArgs", options);
    type->fp_build_ = CompletedEventArgs_build;
    type->fp_ctor_ = (void*)CompletedEventArgs__New2_fn;
    return type;
}

// public generated CompletedEventArgs()
void CompletedEventArgs__ctor_1_fn(CompletedEventArgs* __this)
{
    __this->ctor_1();
}

// public generated CompletedEventArgs New()
void CompletedEventArgs__New2_fn(CompletedEventArgs** __retval)
{
    *__retval = CompletedEventArgs::New2();
}

// public generated CompletedEventArgs() [instance]
void CompletedEventArgs::ctor_1()
{
    ctor_();
}

// public generated CompletedEventArgs New() [static]
CompletedEventArgs* CompletedEventArgs::New2()
{
    CompletedEventArgs* obj1 = (CompletedEventArgs*)uNew(CompletedEventArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/BusyTaskModule.uno
// ---------------------------------------------------------------------

// private sealed class BusyTaskModule.ConstructorClosure
// {
static void BusyTaskModule__ConstructorClosure_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Use the `Busy` behavior instead of FuseJS/BusyTask");
    ::STRINGS[8] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/BusyTaskModule.uno");
    ::STRINGS[9] = uString::Const("Construct");
    ::STRINGS[10] = uString::Const("new BusyTask() - must provide 1 or 2 arguments");
    ::STRINGS[11] = uString::Const("new BusyTask() - argument must be an UX node");
    ::STRINGS[2] = uString::Const("");
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[10] = ::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<Fuse.Triggers.BusyTaskActivity>*/, ::g::Fuse::Triggers::BusyTaskActivity_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(BusyTaskModule__ConstructorClosure, _c), 0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&BusyTaskModule__ConstructorClosure::_warning_, uFieldFlagsStatic);
}

uType* BusyTaskModule__ConstructorClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(BusyTaskModule__ConstructorClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.BusyTaskModule.ConstructorClosure", options);
    type->fp_build_ = BusyTaskModule__ConstructorClosure_build;
    return type;
}

// public ConstructorClosure(Fuse.Scripting.Context c)
void BusyTaskModule__ConstructorClosure__ctor__fn(BusyTaskModule__ConstructorClosure* __this, ::g::Fuse::Scripting::Context* c)
{
    __this->ctor_(c);
}

// public object Construct(Fuse.Scripting.Context context, object[] args)
void BusyTaskModule__ConstructorClosure__Construct_fn(BusyTaskModule__ConstructorClosure* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Construct(context, args);
}

// public ConstructorClosure New(Fuse.Scripting.Context c)
void BusyTaskModule__ConstructorClosure__New1_fn(::g::Fuse::Scripting::Context* c, BusyTaskModule__ConstructorClosure** __retval)
{
    *__retval = BusyTaskModule__ConstructorClosure::New1(c);
}

bool BusyTaskModule__ConstructorClosure::_warning_;

// public ConstructorClosure(Fuse.Scripting.Context c) [instance]
void BusyTaskModule__ConstructorClosure::ctor_(::g::Fuse::Scripting::Context* c)
{
    _c = c;
}

// public object Construct(Fuse.Scripting.Context context, object[] args) [instance]
uObject* BusyTaskModule__ConstructorClosure::Construct(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Triggers.BusyTaskModule.ConstructorClosure", "Construct(Fuse.Scripting.Context,object[])");
    int32_t ret2;

    if (!BusyTaskModule__ConstructorClosure::_warning_)
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[7/*"Use the `Bu...*/], this, ::STRINGS[8/*"/usr/local/...*/], 40, ::STRINGS[9/*"Construct"*/]);
        BusyTaskModule__ConstructorClosure::_warning_ = true;
    }

    if ((uPtr(args)->Length() == 0) || (uPtr(args)->Length() > 2))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[10/*"new BusyTas...*/]));

    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(uPtr(_c)->Wrap(uPtr(args)->Strong<uObject*>(0)), ::TYPES[9/*Fuse.Node*/]);

    if (n == NULL)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[11/*"new BusyTas...*/]));

    int32_t act = 4;

    if (args->Length() == 2)
        act = (::g::Fuse::Marshal__ToType_fn(::TYPES[10/*Fuse.Marshal.ToType<Fuse.Triggers.BusyTaskActivity>*/], uPtr(args)->Strong<uObject*>(1), &ret2), ret2);

    return uPtr(_c)->Unwrap(::g::Fuse::Triggers::BusyTask::New1(n, 1, act, ::STRINGS[2/*""*/]));
}

// public ConstructorClosure New(Fuse.Scripting.Context c) [static]
BusyTaskModule__ConstructorClosure* BusyTaskModule__ConstructorClosure::New1(::g::Fuse::Scripting::Context* c)
{
    BusyTaskModule__ConstructorClosure* obj1 = (BusyTaskModule__ConstructorClosure*)uNew(BusyTaskModule__ConstructorClosure_typeof());
    obj1->ctor_(c);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.12.0/Triggers/ContainsText.uno
// ---------------------------------------------------------------------------------------

// public sealed class ContainingText
// {
static void ContainingText_build(uType* type)
{
    ::STRINGS[12] = uString::Const("Use the trigger WhileContainsText instead");
    ::STRINGS[13] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.12.0/Triggers/ContainsText.uno");
    ::STRINGS[14] = uString::Const(".ctor");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(42);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ContainingText__New3_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* ContainingText_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileContainsText_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(ContainingText);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.ContainingText", options);
    type->fp_build_ = ContainingText_build;
    type->fp_ctor_ = (void*)ContainingText__New3_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public ContainingText()
void ContainingText__ctor_7_fn(ContainingText* __this)
{
    __this->ctor_7();
}

// public ContainingText New()
void ContainingText__New3_fn(ContainingText** __retval)
{
    *__retval = ContainingText::New3();
}

// public ContainingText() [instance]
void ContainingText::ctor_7()
{
    ctor_6();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[12/*"Use the tri...*/], this, ::STRINGS[13/*"/usr/local/...*/], 77, ::STRINGS[14/*".ctor"*/]);
}

// public ContainingText New() [static]
ContainingText* ContainingText::New3()
{
    ContainingText* obj1 = (ContainingText*)uNew(ContainingText_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/ScrollRegion.uno
// ---------------------------------------------------------------------------------------

// private sealed class IScrolledLengths.ContentSizeLength
// {
static void IScrolledLengths__ContentSizeLength_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Triggers::IScrolledLength_typeof(), offsetof(IScrolledLengths__ContentSizeLength_type, interface0));
}

IScrolledLengths__ContentSizeLength_type* IScrolledLengths__ContentSizeLength_typeof()
{
    static uSStrong<IScrolledLengths__ContentSizeLength_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IScrolledLengths__ContentSizeLength);
    options.TypeSize = sizeof(IScrolledLengths__ContentSizeLength_type);
    type = (IScrolledLengths__ContentSizeLength_type*)uClassType::New("Fuse.Triggers.IScrolledLengths.ContentSizeLength", options);
    type->fp_build_ = IScrolledLengths__ContentSizeLength_build;
    type->fp_ctor_ = (void*)IScrolledLengths__ContentSizeLength__New1_fn;
    type->interface0.fp_GetPoints = (void(*)(uObject*, float*, ::g::Fuse::Controls::ScrollViewBase*, ::g::Uno::Float2*))IScrolledLengths__ContentSizeLength__GetPoints_fn;
    return type;
}

// public generated ContentSizeLength()
void IScrolledLengths__ContentSizeLength__ctor__fn(IScrolledLengths__ContentSizeLength* __this)
{
    __this->ctor_();
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable)
void IScrolledLengths__ContentSizeLength__GetPoints_fn(IScrolledLengths__ContentSizeLength* __this, float* value, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPoints(*value, scrollable);
}

// public generated ContentSizeLength New()
void IScrolledLengths__ContentSizeLength__New1_fn(IScrolledLengths__ContentSizeLength** __retval)
{
    *__retval = IScrolledLengths__ContentSizeLength::New1();
}

// public generated ContentSizeLength() [instance]
void IScrolledLengths__ContentSizeLength::ctor_()
{
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable) [instance]
::g::Uno::Float2 IScrolledLengths__ContentSizeLength::GetPoints(float value, ::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    uStackFrame __("Fuse.Triggers.IScrolledLengths.ContentSizeLength", "GetPoints(float,Fuse.Controls.ScrollViewBase)");
    return ::g::Uno::Float2__op_Multiply(value, ::g::Uno::Float2__op_Subtraction2(uPtr(scrollable)->MaxScroll(), uPtr(scrollable)->MinScroll()));
}

// public generated ContentSizeLength New() [static]
IScrolledLengths__ContentSizeLength* IScrolledLengths__ContentSizeLength::New1()
{
    IScrolledLengths__ContentSizeLength* obj1 = (IScrolledLengths__ContentSizeLength*)uNew(IScrolledLengths__ContentSizeLength_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Trigger.uno
// --------------------------------------------------------------

// private sealed class Trigger.DeferredItem
// {
static void Trigger__DeferredItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Triggers::Actions::TriggerAction_typeof(), offsetof(Trigger__DeferredItem, Action), 0,
        ::g::Fuse::Node_typeof(), offsetof(Trigger__DeferredItem, Node), 0);
}

uType* Trigger__DeferredItem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Trigger__DeferredItem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.Trigger.DeferredItem", options);
    type->fp_build_ = Trigger__DeferredItem_build;
    type->fp_ctor_ = (void*)Trigger__DeferredItem__New1_fn;
    return type;
}

// public generated DeferredItem()
void Trigger__DeferredItem__ctor__fn(Trigger__DeferredItem* __this)
{
    __this->ctor_();
}

// public generated DeferredItem New()
void Trigger__DeferredItem__New1_fn(Trigger__DeferredItem** __retval)
{
    *__retval = Trigger__DeferredItem::New1();
}

// public void Perform()
void Trigger__DeferredItem__Perform_fn(Trigger__DeferredItem* __this)
{
    __this->Perform();
}

// public generated DeferredItem() [instance]
void Trigger__DeferredItem::ctor_()
{
}

// public void Perform() [instance]
void Trigger__DeferredItem::Perform()
{
    uStackFrame __("Fuse.Triggers.Trigger.DeferredItem", "Perform()");
    uPtr(Action)->PerformFromNode(Node);
}

// public generated DeferredItem New() [static]
Trigger__DeferredItem* Trigger__DeferredItem::New1()
{
    Trigger__DeferredItem* obj1 = (Trigger__DeferredItem*)uNew(Trigger__DeferredItem_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/StateGroup.uno
// -----------------------------------------------------------------

// private sealed class StateGroup.GotoImpl
// {
static void StateGroup__GotoImpl_build(uType* type)
{
    ::TYPES[11] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Triggers::State_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[13] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::State_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(StateGroup__GotoImpl, Next), 0,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(StateGroup__GotoImpl, Group), 0);
}

uType* StateGroup__GotoImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StateGroup__GotoImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.StateGroup.GotoImpl", options);
    type->fp_build_ = StateGroup__GotoImpl_build;
    type->fp_ctor_ = (void*)StateGroup__GotoImpl__New1_fn;
    return type;
}

// public generated GotoImpl()
void StateGroup__GotoImpl__ctor__fn(StateGroup__GotoImpl* __this)
{
    __this->ctor_();
}

// public void Go()
void StateGroup__GotoImpl__Go_fn(StateGroup__GotoImpl* __this)
{
    __this->Go();
}

// public generated GotoImpl New()
void StateGroup__GotoImpl__New1_fn(StateGroup__GotoImpl** __retval)
{
    *__retval = StateGroup__GotoImpl::New1();
}

// public generated GotoImpl() [instance]
void StateGroup__GotoImpl::ctor_()
{
}

// public void Go() [instance]
void StateGroup__GotoImpl::Go()
{
    uStackFrame __("Fuse.Triggers.StateGroup.GotoImpl", "Go()");
    ::g::Fuse::Triggers::State* ret4;
    ::g::Fuse::Triggers::State* ret5;

    switch (uPtr(Group)->Transition())
    {
        case 0:
        {
            uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(Group)->_states), ::TYPES[11/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/]));

            {
                try
                {
                    {
                        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[12/*Uno.Collections.IEnumerator*/])))
                        {
                            ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[13/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret4), ret4);
                            uPtr(state)->On(state == Next);
                        }
                    }
                }

                catch (const uThrowable& __t)
                {
                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[14/*Uno.IDisposable*/]));
                    }
                                        throw __t;
                    goto __after_finally_0;
                }

                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[14/*Uno.IDisposable*/]));
                }
                __after_finally_0:;
            }

            break;
        }
        case 1:
        {
            uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(Group)->_states), ::TYPES[11/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/]));

            {
                try
                {
                    {
                        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[12/*Uno.Collections.IEnumerator*/])))
                        {
                            ::g::Fuse::Triggers::State* state1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[13/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret5), ret5);
                            uPtr(state1)->On(false);
                        }
                    }
                }

                catch (const uThrowable& __t)
                {
                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[14/*Uno.IDisposable*/]));
                    }
                                        throw __t;
                    goto __after_finally_1;
                }

                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[14/*Uno.IDisposable*/]));
                }
                __after_finally_1:;
            }

            uPtr(Group)->CheckAllDone();
            break;
        }
    }
}

// public generated GotoImpl New() [static]
StateGroup__GotoImpl* StateGroup__GotoImpl::New1()
{
    StateGroup__GotoImpl* obj3 = (StateGroup__GotoImpl*)uNew(StateGroup__GotoImpl_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/BusyTask.uno
// ---------------------------------------------------------------

// public abstract interface IBusyHandler
// {
uInterfaceType* IBusyHandler_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IBusyHandler", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_BusyActivityHandled", NULL, NULL, offsetof(IBusyHandler, fp_get_BusyActivityHandled), false, ::g::Fuse::Triggers::BusyTaskActivity_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Playback.uno
// -----------------------------------------------------------------------

// public abstract interface IMediaPlayback
// {
uInterfaceType* IMediaPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IMediaPlayback", 0, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Duration", NULL, NULL, offsetof(IMediaPlayback, fp_get_Duration), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Position", NULL, NULL, offsetof(IMediaPlayback, fp_get_Position), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Position", NULL, NULL, offsetof(IMediaPlayback, fp_set_Position), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Volume", NULL, NULL, offsetof(IMediaPlayback, fp_get_Volume), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Volume", NULL, NULL, offsetof(IMediaPlayback, fp_set_Volume), false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/1.12.0/Triggers/WhileInteracting.uno
// --------------------------------------------------------------------------------

// public sealed class InteractionCompleted
// {
static void InteractionCompleted_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        ::g::Fuse::Visual_typeof(), offsetof(InteractionCompleted, _source), 0,
        ::g::Fuse::Visual_typeof(), offsetof(InteractionCompleted, _visual), 0,
        ::g::Uno::Bool_typeof(), offsetof(InteractionCompleted, _on), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)InteractionCompleted__New2_fn, 0, true, type, 0),
        new uFunction("get_Source", NULL, (void*)InteractionCompleted__get_Source_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)InteractionCompleted__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Triggers::Trigger_type* InteractionCompleted_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(InteractionCompleted);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.InteractionCompleted", options);
    type->fp_build_ = InteractionCompleted_build;
    type->fp_ctor_ = (void*)InteractionCompleted__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))InteractionCompleted__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))InteractionCompleted__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated InteractionCompleted()
void InteractionCompleted__ctor_5_fn(InteractionCompleted* __this)
{
    __this->ctor_5();
}

// public generated InteractionCompleted New()
void InteractionCompleted__New2_fn(InteractionCompleted** __retval)
{
    *__retval = InteractionCompleted::New2();
}

// private void OnInteractingChanged(object s, object a)
void InteractionCompleted__OnInteractingChanged_fn(InteractionCompleted* __this, uObject* s, uObject* a)
{
    __this->OnInteractingChanged(s, a);
}

// protected override sealed void OnRooted()
void InteractionCompleted__OnRooted_fn(InteractionCompleted* __this)
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", "OnRooted()");
    ::g::Fuse::Visual* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_visual = (ind1 = __this->_source, ((ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)__this->Parent()));
    uPtr(__this->_visual)->add_IsInteractingChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)InteractionCompleted__OnInteractingChanged_fn, __this));
    __this->_on = uPtr(__this->_visual)->IsInteracting();
}

// protected override sealed void OnUnrooted()
void InteractionCompleted__OnUnrooted_fn(InteractionCompleted* __this)
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", "OnUnrooted()");
    uPtr(__this->_visual)->remove_IsInteractingChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)InteractionCompleted__OnInteractingChanged_fn, __this));
    __this->_visual = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Visual get_Source()
void InteractionCompleted__get_Source_fn(InteractionCompleted* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Visual value)
void InteractionCompleted__set_Source_fn(InteractionCompleted* __this, ::g::Fuse::Visual* value)
{
    __this->Source(value);
}

// public generated InteractionCompleted() [instance]
void InteractionCompleted::ctor_5()
{
    ctor_4();
}

// private void OnInteractingChanged(object s, object a) [instance]
void InteractionCompleted::OnInteractingChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.InteractionCompleted", "OnInteractingChanged(object,object)");
    bool n = uPtr(_visual)->IsInteracting();

    if (n == _on)
        return;

    _on = n;

    if (!n)
        Pulse();
}

// public Fuse.Visual get_Source() [instance]
::g::Fuse::Visual* InteractionCompleted::Source()
{
    return _source;
}

// public void set_Source(Fuse.Visual value) [instance]
void InteractionCompleted::Source(::g::Fuse::Visual* value)
{
    _source = value;
}

// public generated InteractionCompleted New() [static]
InteractionCompleted* InteractionCompleted::New2()
{
    InteractionCompleted* obj2 = (InteractionCompleted*)uNew(InteractionCompleted_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Platforms.uno
// ----------------------------------------------------------------

// public sealed class iOS
// {
static void iOS_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)iOS__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* iOS_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 39;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(iOS);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.iOS", options);
    type->fp_build_ = iOS_build;
    type->fp_ctor_ = (void*)iOS__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))iOS__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))iOS__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated iOS()
void iOS__ctor_5_fn(iOS* __this)
{
    __this->ctor_5();
}

// public generated iOS New()
void iOS__New2_fn(iOS** __retval)
{
    *__retval = iOS::New2();
}

// protected override sealed void OnRooted()
void iOS__OnRooted_fn(iOS* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Activate(NULL);
}

// protected override sealed void OnUnrooted()
void iOS__OnUnrooted_fn(iOS* __this)
{
    __this->Deactivate();
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated iOS() [instance]
void iOS::ctor_5()
{
    ctor_4();
}

// public generated iOS New() [static]
iOS* iOS::New2()
{
    iOS* obj1 = (iOS*)uNew(iOS_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Playback.uno
// -----------------------------------------------------------------------

// public abstract interface IPlayback
// {
uInterfaceType* IPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IPlayback", 0, 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_CanPause", NULL, NULL, offsetof(IPlayback, fp_get_CanPause), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanPlayTo", NULL, NULL, offsetof(IPlayback, fp_get_CanPlayTo), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanResume", NULL, NULL, offsetof(IPlayback, fp_get_CanResume), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanStop", NULL, NULL, offsetof(IPlayback, fp_get_CanStop), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Pause", NULL, NULL, offsetof(IPlayback, fp_Pause), false, uVoid_typeof(), 0),
        new uFunction("PlayTo", NULL, NULL, offsetof(IPlayback, fp_PlayTo), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Progress", NULL, NULL, offsetof(IPlayback, fp_get_Progress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, NULL, offsetof(IPlayback, fp_set_Progress), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Resume", NULL, NULL, offsetof(IPlayback, fp_Resume), false, uVoid_typeof(), 0),
        new uFunction("Stop", NULL, NULL, offsetof(IPlayback, fp_Stop), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/ProgressAnimation.uno
// ------------------------------------------------------------------------

// public abstract interface IProgress
// {
uInterfaceType* IProgress_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IProgress", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Progress", NULL, NULL, offsetof(IProgress, fp_get_Progress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_ProgressChanged", NULL, NULL, offsetof(IProgress, fp_add_ProgressChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL)),
        new uFunction("remove_ProgressChanged", NULL, NULL, offsetof(IProgress, fp_remove_ProgressChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL)));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Timeline.uno
// ---------------------------------------------------------------

// public abstract interface IPulseTrigger
// {
uInterfaceType* IPulseTrigger_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IPulseTrigger", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Pulse", NULL, NULL, offsetof(IPulseTrigger, fp_Pulse), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/ScrollRegion.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IScrolledLength
// {
uInterfaceType* IScrolledLength_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IScrolledLength", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetPoints", NULL, NULL, offsetof(IScrolledLength, fp_GetPoints), false, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Fuse::Controls::ScrollViewBase_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/ScrollRegion.uno
// ---------------------------------------------------------------------------------------

// public static class IScrolledLengths
// {
// static generated IScrolledLengths()
static void IScrolledLengths__cctor__fn(uType* __type)
{
    IScrolledLengths::Points_ = (uObject*)IScrolledLengths__PointsLength::New1();
    IScrolledLengths::Pixels_ = (uObject*)IScrolledLengths__PixelsLength::New1();
    IScrolledLengths::ContentSize_ = (uObject*)IScrolledLengths__ContentSizeLength::New1();
    IScrolledLengths::ScrollViewSize_ = (uObject*)IScrolledLengths__ScrollViewSizeLength::New1();
}

static void IScrolledLengths_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Triggers::IScrolledLength_typeof(), (uintptr_t)&IScrolledLengths::Points_, uFieldFlagsStatic,
        ::g::Fuse::Triggers::IScrolledLength_typeof(), (uintptr_t)&IScrolledLengths::Pixels_, uFieldFlagsStatic,
        ::g::Fuse::Triggers::IScrolledLength_typeof(), (uintptr_t)&IScrolledLengths::ContentSize_, uFieldFlagsStatic,
        ::g::Fuse::Triggers::IScrolledLength_typeof(), (uintptr_t)&IScrolledLengths::ScrollViewSize_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("ContentSize", 2),
        new uField("Pixels", 1),
        new uField("Points", 0),
        new uField("ScrollViewSize", 3));
}

uClassType* IScrolledLengths_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Triggers.IScrolledLengths", options);
    type->fp_build_ = IScrolledLengths_build;
    type->fp_cctor_ = IScrolledLengths__cctor__fn;
    return type;
}

uSStrong<uObject*> IScrolledLengths::Points_;
uSStrong<uObject*> IScrolledLengths::Pixels_;
uSStrong<uObject*> IScrolledLengths::ContentSize_;
uSStrong<uObject*> IScrolledLengths::ScrollViewSize_;
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/IValue.uno
// -------------------------------------------------------------

// public abstract interface IValue<T>
// {
uInterfaceType* IValue_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IValue`1", 1, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Value", NULL, NULL, offsetof(IValue, fp_get_Value), false, type->T(0), 0),
        new uFunction("set_Value", NULL, NULL, offsetof(IValue, fp_set_Value), false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("add_ValueChanged", NULL, NULL, offsetof(IValue, fp_add_ValueChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("remove_ValueChanged", NULL, NULL, offsetof(IValue, fp_remove_ValueChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0), NULL)));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/AddingAnimation.uno
// ----------------------------------------------------------------------

// internal abstract interface IVisibility
// {
uInterfaceType* IVisibility_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IVisibility", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/OnKeyPress.uno
// -----------------------------------------------------------------

// public delegate void KeyPressHandler(object sender, Fuse.Input.KeyEventArgs args)
uDelegateType* KeyPressHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.KeyPressHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::KeyEventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno
// -------------------------------------------------------------------------------

// public sealed class LayoutAnimation
// {
static void LayoutAnimation_build(uType* type)
{
    ::STRINGS[15] = uString::Const("LayoutAnimation can only be used on an Element");
    ::STRINGS[16] = uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno");
    ::STRINGS[17] = uString::Const("OnRooted");
    ::TYPES[15] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[16] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Elements::PreplacementHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Triggers::LayoutTransitionedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Triggers::LayoutTransition_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        ::g::Fuse::Triggers::LayoutAnimationType_typeof(), offsetof(LayoutAnimation, _type), 0,
        ::TYPES[15/*Fuse.Elements.Element*/], offsetof(LayoutAnimation, _element), 0,
        ::g::Uno::Int_typeof(), offsetof(LayoutAnimation, _hasOld), 0,
        ::g::Uno::Int_typeof(), offsetof(LayoutAnimation, _frameTrans), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(LayoutAnimation, _oldWorld), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(LayoutAnimation, _oldLocal), 0,
        ::g::Uno::Float2_typeof(), offsetof(LayoutAnimation, _oldPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(LayoutAnimation, _oldSize), 0,
        ::g::Fuse::Visual_typeof(), offsetof(LayoutAnimation, _oldParent), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)LayoutAnimation__New2_fn, 0, true, type, 0),
        new uFunction("get_Type", NULL, (void*)LayoutAnimation__get_Type_fn, 0, false, ::g::Fuse::Triggers::LayoutAnimationType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)LayoutAnimation__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::LayoutAnimationType_typeof()));
}

::g::Fuse::Triggers::Trigger_type* LayoutAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 48;
    options.InterfaceCount = 9;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(LayoutAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.LayoutAnimation", options);
    type->fp_build_ = LayoutAnimation_build;
    type->fp_ctor_ = (void*)LayoutAnimation__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))LayoutAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))LayoutAnimation__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated LayoutAnimation()
void LayoutAnimation__ctor_5_fn(LayoutAnimation* __this)
{
    __this->ctor_5();
}

// public generated LayoutAnimation New()
void LayoutAnimation__New2_fn(LayoutAnimation** __retval)
{
    *__retval = LayoutAnimation::New2();
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args)
void LayoutAnimation__OnPlaced_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->OnPlaced(sender, args);
}

// private void OnPreplacement(object sender, Fuse.Elements.PreplacementArgs args)
void LayoutAnimation__OnPreplacement_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::Elements::PreplacementArgs* args)
{
    __this->OnPreplacement(sender, args);
}

// protected override sealed void OnRooted()
void LayoutAnimation__OnRooted_fn(LayoutAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_element = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[15/*Fuse.Elements.Element*/]);

    if (__this->_element == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[15/*"LayoutAnima...*/], __this, ::STRINGS[16/*"/usr/local/...*/], 227, ::STRINGS[17/*"OnRooted"*/], NULL);
        return;
    }

    uPtr(__this->_element)->add_Placed(uDelegate::New(::TYPES[16/*Fuse.PlacedHandler*/], (void*)LayoutAnimation__OnPlaced_fn, __this));
    uPtr(__this->_element)->add_Preplacement(uDelegate::New(::TYPES[17/*Fuse.Elements.PreplacementHandler*/], (void*)LayoutAnimation__OnPreplacement_fn, __this));
    uPtr(__this->_element)->ignoreTempArrange = true;
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned()), __this->_element, uDelegate::New(::TYPES[18/*Fuse.Triggers.LayoutTransitionedHandler*/], (void*)LayoutAnimation__OnTransitioned_fn, __this));
}

// private void OnTransitioned(object sender, Fuse.Triggers.LayoutTransitionedArgs args)
void LayoutAnimation__OnTransitioned_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    __this->OnTransitioned(sender, args);
}

// protected override sealed void OnUnrooted()
void LayoutAnimation__OnUnrooted_fn(LayoutAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnUnrooted()");

    if (__this->_element != NULL)
    {
        uPtr(__this->_element)->ignoreTempArrange = false;
        uPtr(__this->_element)->remove_Placed(uDelegate::New(::TYPES[16/*Fuse.PlacedHandler*/], (void*)LayoutAnimation__OnPlaced_fn, __this));
        uPtr(__this->_element)->remove_Preplacement(uDelegate::New(::TYPES[17/*Fuse.Elements.PreplacementHandler*/], (void*)LayoutAnimation__OnPreplacement_fn, __this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned()), __this->_element, uDelegate::New(::TYPES[18/*Fuse.Triggers.LayoutTransitionedHandler*/], (void*)LayoutAnimation__OnTransitioned_fn, __this));
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Triggers.LayoutAnimationType get_Type()
void LayoutAnimation__get_Type_fn(LayoutAnimation* __this, int32_t* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Triggers.LayoutAnimationType value)
void LayoutAnimation__set_Type_fn(LayoutAnimation* __this, int32_t* value)
{
    __this->Type(*value);
}

// public generated LayoutAnimation() [instance]
void LayoutAnimation::ctor_5()
{
    _type = 3;
    ctor_4();
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) [instance]
void LayoutAnimation::OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnPlaced(object,Fuse.PlacedArgs)");
    ::g::Uno::Float4x4 ind1;

    if (!((Type() & 1) == 1))
        return;

    if (_hasOld != ::g::Fuse::UpdateManager::FrameIndex())
        return;

    if (_frameTrans == ::g::Fuse::UpdateManager::FrameIndex())
        return;

    ind1 = _oldLocal;
    ::g::Uno::Float2 oldPosition = ::g::Uno::Float2__New2(ind1.M41, ind1.M42);
    ::g::Uno::Float2 oldSize = _oldSize;
    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(_oldWorld, uPtr(uPtr(_element)->Parent())->WorldTransformInverse());
    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New2(m.M41, m.M42, m.M43), ::g::Uno::Float3__New4(uPtr(_element)->IntendedPosition(), 0.0f));
    ::g::Fuse::Triggers::LayoutTransition::SetWorldPositionChange(_element, worldChange);
    ::g::Fuse::Triggers::LayoutTransition::SetPositionChange(_element, oldPosition, uPtr(_element)->IntendedPosition());
    ::g::Fuse::Triggers::LayoutTransition::SetSizeChange(_element, oldSize, uPtr(_element)->IntendedSize());
    BypassActivate();
    Deactivate();
}

// private void OnPreplacement(object sender, Fuse.Elements.PreplacementArgs args) [instance]
void LayoutAnimation::OnPreplacement(uObject* sender, ::g::Fuse::Elements::PreplacementArgs* args)
{
    uStackFrame __("Fuse.Triggers.LayoutAnimation", "OnPreplacement(object,Fuse.Elements.PreplacementArgs)");

    if (!((Type() & 1) == 1))
        return;

    if (_hasOld == ::g::Fuse::UpdateManager::FrameIndex())
        return;

    if (!uPtr(args)->HasPrev())
        return;

    _hasOld = ::g::Fuse::UpdateManager::FrameIndex();
    _oldWorld = uPtr(_element)->WorldTransform();
    _oldPosition = uPtr(_element)->ActualPosition();
    _oldSize = uPtr(_element)->ActualSize();
    _oldParent = uPtr(_element)->Parent();
    _oldLocal = uPtr(_element)->LocalTransform();
}

// private void OnTransitioned(object sender, Fuse.Triggers.LayoutTransitionedArgs args) [instance]
void LayoutAnimation::OnTransitioned(uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    if (!((Type() & 2) == 2))
        return;

    _frameTrans = ::g::Fuse::UpdateManager::FrameIndex();
    BypassActivate();
    Deactivate();
}

// public Fuse.Triggers.LayoutAnimationType get_Type() [instance]
int32_t LayoutAnimation::Type()
{
    return _type;
}

// public void set_Type(Fuse.Triggers.LayoutAnimationType value) [instance]
void LayoutAnimation::Type(int32_t value)
{
    _type = value;
}

// public generated LayoutAnimation New() [static]
LayoutAnimation* LayoutAnimation::New2()
{
    LayoutAnimation* obj2 = (LayoutAnimation*)uNew(LayoutAnimation_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno
// -------------------------------------------------------------------------------

// public enum LayoutAnimationType
uEnumType* LayoutAnimationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.LayoutAnimationType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Implicit", 1LL,
        "Explicit", 2LL,
        "Both", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno
// -------------------------------------------------------------------------------

// public static class LayoutTransition
// {
// static generated LayoutTransition()
static void LayoutTransition__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    LayoutTransition::_transitioned_ = ::g::Fuse::Triggers::LayoutTransitioned::New1();
    LayoutTransition::PositionLayoutChange_ = (uObject*)LayoutTransition__WorldPositionChangeMode::New1();
    LayoutTransition::WorldPositionChange_ = (uObject*)LayoutTransition__WorldPositionChangeMode::New1();
    LayoutTransition::_worldPositionChange_ = ::g::Fuse::PropertyHandle::New1();
    LayoutTransition::PositionChange_ = (uObject*)LayoutTransition__PositionChangeMode::New1();
    LayoutTransition::_positionChange_ = ::g::Fuse::PropertyHandle::New1();
    LayoutTransition::SizeLayoutChange_ = (uObject*)LayoutTransition__ResizeChangeMode::New1();
    LayoutTransition::ResizeSizeChange_ = (uObject*)LayoutTransition__ResizeChangeMode::New1();
    LayoutTransition::ScalingSizeChange_ = (uObject*)LayoutTransition__ScaleChangeMode::New1();
    LayoutTransition::_sizeChange_ = ::g::Fuse::Properties::CreateHandle();
}

static void LayoutTransition_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Triggers::LayoutTransitioned_typeof(), (uintptr_t)&LayoutTransition::_transitioned_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&LayoutTransition::PositionLayoutChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&LayoutTransition::WorldPositionChange_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&LayoutTransition::_worldPositionChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&LayoutTransition::PositionChange_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&LayoutTransition::_positionChange_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&LayoutTransition::SizeLayoutChange_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&LayoutTransition::ResizeSizeChange_, uFieldFlagsStatic,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&LayoutTransition::ScalingSizeChange_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&LayoutTransition::_sizeChange_, uFieldFlagsStatic);
    type->Reflection.SetFields(6,
        new uField("PositionChange", 4),
        new uField("PositionLayoutChange", 1),
        new uField("ResizeSizeChange", 7),
        new uField("ScalingSizeChange", 8),
        new uField("SizeLayoutChange", 6),
        new uField("WorldPositionChange", 2));
    type->Reflection.SetFunctions(1,
        new uFunction("get_Transitioned", NULL, (void*)LayoutTransition__get_Transitioned_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof(), NULL), 0));
}

uClassType* LayoutTransition_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Triggers.LayoutTransition", options);
    type->fp_build_ = LayoutTransition_build;
    type->fp_cctor_ = LayoutTransition__cctor__fn;
    return type;
}

// internal static bool GetPositionChange(Fuse.Node n, float2& oldPos, float2& newPos)
void LayoutTransition__GetPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos, bool* __retval)
{
    *__retval = LayoutTransition::GetPositionChange(n, oldPos, newPos);
}

// internal static bool GetSizeChange(Fuse.Node n, float2& oldSize, float2& newSize)
void LayoutTransition__GetSizeChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize, bool* __retval)
{
    *__retval = LayoutTransition::GetSizeChange(n, oldSize, newSize);
}

// internal static float3 GetWorldPositionChange(Fuse.Node n)
void LayoutTransition__GetWorldPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float3* __retval)
{
    *__retval = LayoutTransition::GetWorldPositionChange(n);
}

// internal static void SetPositionChange(Fuse.Visual n, float2 oldPos, float2 newPos)
void LayoutTransition__SetPositionChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos)
{
    LayoutTransition::SetPositionChange(n, *oldPos, *newPos);
}

// internal static void SetSizeChange(Fuse.Node n, float2 oldSize, float2 newSize)
void LayoutTransition__SetSizeChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize)
{
    LayoutTransition::SetSizeChange(n, *oldSize, *newSize);
}

// internal static void SetWorldPositionChange(Fuse.Node n, float3 change)
void LayoutTransition__SetWorldPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float3* change)
{
    LayoutTransition::SetWorldPositionChange(n, *change);
}

// public static Fuse.VisualEvent<Fuse.Triggers.LayoutTransitionedHandler, Fuse.Triggers.LayoutTransitionedArgs> get_Transitioned()
void LayoutTransition__get_Transitioned_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = LayoutTransition::Transitioned();
}

uSStrong< ::g::Fuse::Triggers::LayoutTransitioned*> LayoutTransition::_transitioned_;
uSStrong<uObject*> LayoutTransition::PositionLayoutChange_;
uSStrong<uObject*> LayoutTransition::WorldPositionChange_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_worldPositionChange_;
uSStrong<uObject*> LayoutTransition::PositionChange_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_positionChange_;
uSStrong<uObject*> LayoutTransition::SizeLayoutChange_;
uSStrong<uObject*> LayoutTransition::ResizeSizeChange_;
uSStrong<uObject*> LayoutTransition::ScalingSizeChange_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_sizeChange_;

// internal static bool GetPositionChange(Fuse.Node n, float2& oldPos, float2& newPos) [static]
bool LayoutTransition::GetPositionChange(::g::Fuse::Node* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "GetPositionChange(Fuse.Node,float2&,float2&)");
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_positionChange_);
    ::g::Uno::Float4 f = (v == NULL) ? ::g::Uno::Float4__New1(0.0f) : uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v);
    *oldPos = ::g::Uno::Float2__New2(f.X, f.Y);
    *newPos = ::g::Uno::Float2__New2(f.Z, f.W);
    return v != NULL;
}

// internal static bool GetSizeChange(Fuse.Node n, float2& oldSize, float2& newSize) [static]
bool LayoutTransition::GetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "GetSizeChange(Fuse.Node,float2&,float2&)");
    LayoutTransition_typeof()->Init();
    uObject* res = NULL;

    if ((n != NULL) && uPtr(uPtr(n)->Properties())->TryGet(LayoutTransition::_sizeChange_, &res))
    {
        ::g::Uno::Float4 f = uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), res);
        *oldSize = ::g::Uno::Float2__New2(f.X, f.Y);
        *newSize = ::g::Uno::Float2__New2(f.Z, f.W);
        return true;
    }
    else
    {
        *oldSize = ::g::Uno::Float2__New1(0.0f);
        *newSize = ::g::Uno::Float2__New1(0.0f);
        return false;
    }
}

// internal static float3 GetWorldPositionChange(Fuse.Node n) [static]
::g::Uno::Float3 LayoutTransition::GetWorldPositionChange(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "GetWorldPositionChange(Fuse.Node)");
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_worldPositionChange_);

    if (v != NULL)
        return uUnbox< ::g::Uno::Float3>(::g::Uno::Float3_typeof(), v);
    else
        return ::g::Uno::Float3__New1(0.0f);
}

// internal static void SetPositionChange(Fuse.Visual n, float2 oldPos, float2 newPos) [static]
void LayoutTransition::SetPositionChange(::g::Fuse::Visual* n, ::g::Uno::Float2 oldPos, ::g::Uno::Float2 newPos)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "SetPositionChange(Fuse.Visual,float2,float2)");
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_positionChange_, uBox(::g::Uno::Float4_typeof(), ::g::Uno::Float4__New7(oldPos, newPos)));
}

// internal static void SetSizeChange(Fuse.Node n, float2 oldSize, float2 newSize) [static]
void LayoutTransition::SetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2 oldSize, ::g::Uno::Float2 newSize)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "SetSizeChange(Fuse.Node,float2,float2)");
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_sizeChange_, uBox(::g::Uno::Float4_typeof(), ::g::Uno::Float4__New7(oldSize, newSize)));
}

// internal static void SetWorldPositionChange(Fuse.Node n, float3 change) [static]
void LayoutTransition::SetWorldPositionChange(::g::Fuse::Node* n, ::g::Uno::Float3 change)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition", "SetWorldPositionChange(Fuse.Node,float3)");
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_worldPositionChange_, uBox(::g::Uno::Float3_typeof(), change));
}

// public static Fuse.VisualEvent<Fuse.Triggers.LayoutTransitionedHandler, Fuse.Triggers.LayoutTransitionedArgs> get_Transitioned() [static]
::g::Fuse::VisualEvent* LayoutTransition::Transitioned()
{
    LayoutTransition_typeof()->Init();
    return LayoutTransition::_transitioned_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno
// -------------------------------------------------------------------------------

// internal sealed class LayoutTransitioned
// {
static void LayoutTransitioned_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof(), NULL));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* LayoutTransitioned_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LayoutTransitioned);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Triggers.LayoutTransitioned", options);
    type->fp_build_ = LayoutTransitioned_build;
    type->fp_ctor_ = (void*)LayoutTransitioned__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))LayoutTransitioned__Invoke_fn;
    return type;
}

// public generated LayoutTransitioned()
void LayoutTransitioned__ctor_1_fn(LayoutTransitioned* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Triggers.LayoutTransitionedHandler handler, object sender, Fuse.Triggers.LayoutTransitionedArgs args)
void LayoutTransitioned__Invoke_fn(LayoutTransitioned* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    uStackFrame __("Fuse.Triggers.LayoutTransitioned", "Invoke(Fuse.Triggers.LayoutTransitionedHandler,object,Fuse.Triggers.LayoutTransitionedArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated LayoutTransitioned New()
void LayoutTransitioned__New1_fn(LayoutTransitioned** __retval)
{
    *__retval = LayoutTransitioned::New1();
}

// public generated LayoutTransitioned() [instance]
void LayoutTransitioned::ctor_1()
{
    ctor_();
}

// public generated LayoutTransitioned New() [static]
LayoutTransitioned* LayoutTransitioned::New1()
{
    LayoutTransitioned* obj1 = (LayoutTransitioned*)uNew(LayoutTransitioned_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno
// -------------------------------------------------------------------------------

// public sealed class LayoutTransitionedArgs
// {
static void LayoutTransitionedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LayoutTransitionedArgs__New3_fn, 0, true, type, 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* LayoutTransitionedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LayoutTransitionedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Triggers.LayoutTransitionedArgs", options);
    type->fp_build_ = LayoutTransitionedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public LayoutTransitionedArgs(Fuse.Visual node)
void LayoutTransitionedArgs__ctor_2_fn(LayoutTransitionedArgs* __this, ::g::Fuse::Visual* node)
{
    __this->ctor_2(node);
}

// public LayoutTransitionedArgs New(Fuse.Visual node)
void LayoutTransitionedArgs__New3_fn(::g::Fuse::Visual* node, LayoutTransitionedArgs** __retval)
{
    *__retval = LayoutTransitionedArgs::New3(node);
}

// public LayoutTransitionedArgs(Fuse.Visual node) [instance]
void LayoutTransitionedArgs::ctor_2(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Triggers.LayoutTransitionedArgs", ".ctor(Fuse.Visual)");
    ctor_1(node);
}

// public LayoutTransitionedArgs New(Fuse.Visual node) [static]
LayoutTransitionedArgs* LayoutTransitionedArgs::New3(::g::Fuse::Visual* node)
{
    LayoutTransitionedArgs* obj1 = (LayoutTransitionedArgs*)uNew(LayoutTransitionedArgs_typeof());
    obj1->ctor_2(node);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno
// -------------------------------------------------------------------------------

// public delegate void LayoutTransitionedHandler(object sender, Fuse.Triggers.LayoutTransitionedArgs args)
uDelegateType* LayoutTransitionedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.LayoutTransitionedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/OnKeyPress.uno
// -----------------------------------------------------------------

// public sealed class OnBackButton
// {
static void OnBackButton_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(41);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OnBackButton__New3_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* OnBackButton_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::OnKeyPress_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(OnBackButton);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.OnBackButton", options);
    type->fp_build_ = OnBackButton_build;
    type->fp_ctor_ = (void*)OnBackButton__New3_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))OnBackButton__OnRooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated OnBackButton()
void OnBackButton__ctor_6_fn(OnBackButton* __this)
{
    __this->ctor_6();
}

// public generated OnBackButton New()
void OnBackButton__New3_fn(OnBackButton** __retval)
{
    *__retval = OnBackButton::New3();
}

// protected override sealed void OnRooted()
void OnBackButton__OnRooted_fn(OnBackButton* __this)
{
    uStackFrame __("Fuse.Triggers.OnBackButton", "OnRooted()");
    ::g::Fuse::Triggers::OnKeyPress__OnRooted_fn(__this);
    __this->Key(201);
}

// public generated OnBackButton() [instance]
void OnBackButton::ctor_6()
{
    ctor_5();
}

// public generated OnBackButton New() [static]
OnBackButton* OnBackButton::New3()
{
    OnBackButton* obj1 = (OnBackButton*)uNew(OnBackButton_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/OnKeyPress.uno
// -----------------------------------------------------------------

// public class OnKeyPress
// {
static void OnKeyPress_build(uType* type)
{
    ::TYPES[19] = ::g::Fuse::Input::KeyPressedHandler_typeof();
    ::TYPES[20] = ::g::Fuse::Triggers::KeyPressHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Keyboard_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        ::g::Uno::Platform::Key_typeof(), offsetof(OnKeyPress, _Key), 0,
        ::TYPES[20/*Fuse.Triggers.KeyPressHandler*/], offsetof(OnKeyPress, Handler1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("add_Handler", NULL, (void*)OnKeyPress__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[20/*Fuse.Triggers.KeyPressHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)OnKeyPress__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[20/*Fuse.Triggers.KeyPressHandler*/]),
        new uFunction("get_Key", NULL, (void*)OnKeyPress__get_Key_fn, 0, false, ::g::Uno::Platform::Key_typeof(), 0),
        new uFunction("set_Key", NULL, (void*)OnKeyPress__set_Key_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::Key_typeof()),
        new uFunction(".ctor", NULL, (void*)OnKeyPress__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* OnKeyPress_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(OnKeyPress);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.OnKeyPress", options);
    type->fp_build_ = OnKeyPress_build;
    type->fp_ctor_ = (void*)OnKeyPress__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))OnKeyPress__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))OnKeyPress__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated OnKeyPress()
void OnKeyPress__ctor_5_fn(OnKeyPress* __this)
{
    __this->ctor_5();
}

// public generated void add_Handler(Fuse.Triggers.KeyPressHandler value)
void OnKeyPress__add_Handler_fn(OnKeyPress* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Triggers.KeyPressHandler value)
void OnKeyPress__remove_Handler_fn(OnKeyPress* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Uno.Platform.Key get_Key()
void OnKeyPress__get_Key_fn(OnKeyPress* __this, int32_t* __retval)
{
    *__retval = __this->Key();
}

// public generated void set_Key(Uno.Platform.Key value)
void OnKeyPress__set_Key_fn(OnKeyPress* __this, int32_t* value)
{
    __this->Key(*value);
}

// public generated OnKeyPress New()
void OnKeyPress__New2_fn(OnKeyPress** __retval)
{
    *__retval = OnKeyPress::New2();
}

// internal void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args)
void OnKeyPress__OnKeyPressed_fn(OnKeyPress* __this, uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    __this->OnKeyPressed(sender, args);
}

// protected override void OnRooted()
void OnKeyPress__OnRooted_fn(OnKeyPress* __this)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::TYPES[19/*Fuse.Input.KeyPressedHandler*/], (void*)OnKeyPress__OnKeyPressed_fn, __this));
}

// protected override sealed void OnUnrooted()
void OnKeyPress__OnUnrooted_fn(OnKeyPress* __this)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::TYPES[19/*Fuse.Input.KeyPressedHandler*/], (void*)OnKeyPress__OnKeyPressed_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated OnKeyPress() [instance]
void OnKeyPress::ctor_5()
{
    ctor_4();
}

// public generated void add_Handler(Fuse.Triggers.KeyPressHandler value) [instance]
void OnKeyPress::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "add_Handler(Fuse.Triggers.KeyPressHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[20/*Fuse.Triggers.KeyPressHandler*/]);
}

// public generated void remove_Handler(Fuse.Triggers.KeyPressHandler value) [instance]
void OnKeyPress::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "remove_Handler(Fuse.Triggers.KeyPressHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[20/*Fuse.Triggers.KeyPressHandler*/]);
}

// public generated Uno.Platform.Key get_Key() [instance]
int32_t OnKeyPress::Key()
{
    return _Key;
}

// public generated void set_Key(Uno.Platform.Key value) [instance]
void OnKeyPress::Key(int32_t value)
{
    _Key = value;
}

// internal void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) [instance]
void OnKeyPress::OnKeyPressed(uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    uStackFrame __("Fuse.Triggers.OnKeyPress", "OnKeyPressed(object,Fuse.Input.KeyEventArgs)");

    if (uPtr(args)->Key() == Key())
    {
        Pulse();

        if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
            uPtr(Handler1)->Invoke(2, this, args);
    }
}

// public generated OnKeyPress New() [static]
OnKeyPress* OnKeyPress::New2()
{
    OnKeyPress* obj1 = (OnKeyPress*)uNew(OnKeyPress_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/1.12.0/OnUserEvent.uno
// --------------------------------------------------------------------

// public class OnUserEvent
// {
static void OnUserEvent_build(uType* type)
{
    ::STRINGS[18] = uString::Const("OnUserEvent requires a `EventName`");
    ::STRINGS[19] = uString::Const("/usr/local/share/uno/Packages/Fuse.UserEvents/1.12.0/OnUserEvent.uno");
    ::STRINGS[17] = uString::Const("OnRooted");
    ::TYPES[21] = ::g::Fuse::UserEventHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::UserEvent_typeof(),
        ::g::Fuse::UserEventDispatch_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        ::g::Fuse::Triggers::OnUserEventFilter_typeof(), offsetof(OnUserEvent, _filter), 0,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(OnUserEvent, _rootedEvent), 0,
        ::g::Fuse::Visual_typeof(), offsetof(OnUserEvent, _scope), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(OnUserEvent, _EventName), 0,
        ::TYPES[21/*Fuse.UserEventHandler*/], offsetof(OnUserEvent, Handler1), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_EventName", NULL, (void*)OnUserEvent__get_EventName_fn, 0, false, ::g::Uno::UX::Selector_typeof(), 0),
        new uFunction("set_EventName", NULL, (void*)OnUserEvent__set_EventName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Selector_typeof()),
        new uFunction("get_Filter", NULL, (void*)OnUserEvent__get_Filter_fn, 0, false, ::g::Fuse::Triggers::OnUserEventFilter_typeof(), 0),
        new uFunction("set_Filter", NULL, (void*)OnUserEvent__set_Filter_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::OnUserEventFilter_typeof()),
        new uFunction("add_Handler", NULL, (void*)OnUserEvent__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[21/*Fuse.UserEventHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)OnUserEvent__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[21/*Fuse.UserEventHandler*/]),
        new uFunction(".ctor", NULL, (void*)OnUserEvent__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* OnUserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 9;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(OnUserEvent);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.OnUserEvent", options);
    type->fp_build_ = OnUserEvent_build;
    type->fp_ctor_ = (void*)OnUserEvent__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))OnUserEvent__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))OnUserEvent__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated OnUserEvent()
void OnUserEvent__ctor_5_fn(OnUserEvent* __this)
{
    __this->ctor_5();
}

// public generated Uno.UX.Selector get_EventName()
void OnUserEvent__get_EventName_fn(OnUserEvent* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->EventName();
}

// public generated void set_EventName(Uno.UX.Selector value)
void OnUserEvent__set_EventName_fn(OnUserEvent* __this, ::g::Uno::UX::Selector* value)
{
    __this->EventName(*value);
}

// public Fuse.Triggers.OnUserEventFilter get_Filter()
void OnUserEvent__get_Filter_fn(OnUserEvent* __this, int32_t* __retval)
{
    *__retval = __this->Filter();
}

// public void set_Filter(Fuse.Triggers.OnUserEventFilter value)
void OnUserEvent__set_Filter_fn(OnUserEvent* __this, int32_t* value)
{
    __this->Filter(*value);
}

// public generated void add_Handler(Fuse.UserEventHandler value)
void OnUserEvent__add_Handler_fn(OnUserEvent* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.UserEventHandler value)
void OnUserEvent__remove_Handler_fn(OnUserEvent* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated OnUserEvent New()
void OnUserEvent__New2_fn(OnUserEvent** __retval)
{
    *__retval = OnUserEvent::New2();
}

// private void OnRaised(object s, Fuse.UserEventArgs args)
void OnUserEvent__OnRaised_fn(OnUserEvent* __this, uObject* s, ::g::Fuse::UserEventArgs* args)
{
    __this->OnRaised(s, args);
}

// protected override sealed void OnRooted()
void OnUserEvent__OnRooted_fn(OnUserEvent* __this)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (::g::Uno::String::op_Equality(::g::Uno::UX::Selector__op_Implicit1(__this->EventName()), NULL))
        ::g::Fuse::Diagnostics::UserError(::STRINGS[18/*"OnUserEvent...*/], __this, ::STRINGS[19/*"/usr/local/...*/], 97, ::STRINGS[17/*"OnRooted"*/], NULL);
    else
    {
        __this->_rootedEvent = ::g::Fuse::UserEventDispatch::GetByName(__this->EventName());
        uPtr(__this->_rootedEvent)->add_Raised(uDelegate::New(::TYPES[21/*Fuse.UserEventHandler*/], (void*)OnUserEvent__OnRaised_fn, __this));
    }

    __this->_scope = NULL;
}

// protected override sealed void OnUnrooted()
void OnUserEvent__OnUnrooted_fn(OnUserEvent* __this)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "OnUnrooted()");

    if (__this->_rootedEvent != NULL)
    {
        uPtr(__this->_rootedEvent)->remove_Raised(uDelegate::New(::TYPES[21/*Fuse.UserEventHandler*/], (void*)OnUserEvent__OnRaised_fn, __this));
        __this->_rootedEvent = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated OnUserEvent() [instance]
void OnUserEvent::ctor_5()
{
    ctor_4();
}

// public generated Uno.UX.Selector get_EventName() [instance]
::g::Uno::UX::Selector OnUserEvent::EventName()
{
    return _EventName;
}

// public generated void set_EventName(Uno.UX.Selector value) [instance]
void OnUserEvent::EventName(::g::Uno::UX::Selector value)
{
    _EventName = value;
}

// public Fuse.Triggers.OnUserEventFilter get_Filter() [instance]
int32_t OnUserEvent::Filter()
{
    return _filter;
}

// public void set_Filter(Fuse.Triggers.OnUserEventFilter value) [instance]
void OnUserEvent::Filter(int32_t value)
{
    _filter = value;
}

// public generated void add_Handler(Fuse.UserEventHandler value) [instance]
void OnUserEvent::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "add_Handler(Fuse.UserEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[21/*Fuse.UserEventHandler*/]);
}

// public generated void remove_Handler(Fuse.UserEventHandler value) [instance]
void OnUserEvent::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "remove_Handler(Fuse.UserEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[21/*Fuse.UserEventHandler*/]);
}

// private void OnRaised(object s, Fuse.UserEventArgs args) [instance]
void OnUserEvent::OnRaised(uObject* s, ::g::Fuse::UserEventArgs* args)
{
    uStackFrame __("Fuse.Triggers.OnUserEvent", "OnRaised(object,Fuse.UserEventArgs)");

    if (Filter() == 0)
    {
        if (_scope == NULL)
        {
            ::g::Fuse::Visual* n;
            ::g::Fuse::UserEvent::ScanTree(Parent(), EventName(), &n);
            _scope = n;
        }

        if (_scope != uPtr(args)->Source())
            return;
    }

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, args);

    Pulse();
}

// public generated OnUserEvent New() [static]
OnUserEvent* OnUserEvent::New2()
{
    OnUserEvent* obj1 = (OnUserEvent*)uNew(OnUserEvent_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/1.12.0/OnUserEvent.uno
// --------------------------------------------------------------------

// public enum OnUserEventFilter
uEnumType* OnUserEventFilter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.OnUserEventFilter", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Local", 0LL,
        "Global", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/PageBeginLoading.uno
// -------------------------------------------------------------------------------

// public sealed class PageBeginLoading
// {
static void PageBeginLoading_build(uType* type)
{
    ::STRINGS[20] = uString::Const("WebView");
    ::STRINGS[21] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/PageBeginLoading.uno");
    ::STRINGS[17] = uString::Const("OnRooted");
    ::TYPES[22] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        ::TYPES[22/*Fuse.Controls.IWebView*/], offsetof(PageBeginLoading, _webView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PageBeginLoading__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* PageBeginLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(PageBeginLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.PageBeginLoading", options);
    type->fp_build_ = PageBeginLoading_build;
    type->fp_ctor_ = (void*)PageBeginLoading__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PageBeginLoading__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PageBeginLoading__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated PageBeginLoading()
void PageBeginLoading__ctor_5_fn(PageBeginLoading* __this)
{
    __this->ctor_5();
}

// public generated PageBeginLoading New()
void PageBeginLoading__New2_fn(PageBeginLoading** __retval)
{
    *__retval = PageBeginLoading::New2();
}

// private void OnPageBeginLoading(object s, object a)
void PageBeginLoading__OnPageBeginLoading_fn(PageBeginLoading* __this, uObject* s, uObject* a)
{
    __this->OnPageBeginLoading(s, a);
}

// protected override sealed void OnRooted()
void PageBeginLoading__OnRooted_fn(PageBeginLoading* __this)
{
    uStackFrame __("Fuse.Triggers.PageBeginLoading", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (uIs((::g::Fuse::Visual*)__this->Parent(), ::TYPES[22/*Fuse.Controls.IWebView*/]))
    {
        __this->_webView = uAs<uObject*>(__this->Parent(), ::TYPES[22/*Fuse.Controls.IWebView*/]);
        ::g::Fuse::Controls::IWebView::add_BeginLoading(uInterface(uPtr(__this->_webView), ::TYPES[22/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)PageBeginLoading__OnPageBeginLoading_fn, __this));
    }
    else
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[20/*"WebView"*/], __this->Parent(), __this, ::STRINGS[21/*"/usr/local/...*/], 36, ::STRINGS[17/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted()
void PageBeginLoading__OnUnrooted_fn(PageBeginLoading* __this)
{
    uStackFrame __("Fuse.Triggers.PageBeginLoading", "OnUnrooted()");

    if (__this->_webView != NULL)
    {
        ::g::Fuse::Controls::IWebView::remove_BeginLoading(uInterface(uPtr(__this->_webView), ::TYPES[22/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)PageBeginLoading__OnPageBeginLoading_fn, __this));
        __this->_webView = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated PageBeginLoading() [instance]
void PageBeginLoading::ctor_5()
{
    ctor_4();
}

// private void OnPageBeginLoading(object s, object a) [instance]
void PageBeginLoading::OnPageBeginLoading(uObject* s, uObject* a)
{
    Pulse();
}

// public generated PageBeginLoading New() [static]
PageBeginLoading* PageBeginLoading::New2()
{
    PageBeginLoading* obj1 = (PageBeginLoading*)uNew(PageBeginLoading_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/PageLoaded.uno
// -------------------------------------------------------------------------

// public sealed class PageLoaded
// {
static void PageLoaded_build(uType* type)
{
    ::STRINGS[20] = uString::Const("WebView");
    ::STRINGS[22] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/PageLoaded.uno");
    ::STRINGS[17] = uString::Const("OnRooted");
    ::TYPES[22] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        ::TYPES[22/*Fuse.Controls.IWebView*/], offsetof(PageLoaded, _webView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PageLoaded__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* PageLoaded_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(PageLoaded);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.PageLoaded", options);
    type->fp_build_ = PageLoaded_build;
    type->fp_ctor_ = (void*)PageLoaded__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PageLoaded__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PageLoaded__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated PageLoaded()
void PageLoaded__ctor_5_fn(PageLoaded* __this)
{
    __this->ctor_5();
}

// public generated PageLoaded New()
void PageLoaded__New2_fn(PageLoaded** __retval)
{
    *__retval = PageLoaded::New2();
}

// private void OnPageLoaded(object s, object a)
void PageLoaded__OnPageLoaded_fn(PageLoaded* __this, uObject* s, uObject* a)
{
    __this->OnPageLoaded(s, a);
}

// protected override sealed void OnRooted()
void PageLoaded__OnRooted_fn(PageLoaded* __this)
{
    uStackFrame __("Fuse.Triggers.PageLoaded", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (uIs((::g::Fuse::Visual*)__this->Parent(), ::TYPES[22/*Fuse.Controls.IWebView*/]))
    {
        __this->_webView = uAs<uObject*>(__this->Parent(), ::TYPES[22/*Fuse.Controls.IWebView*/]);
        ::g::Fuse::Controls::IWebView::add_PageLoaded(uInterface(uPtr(__this->_webView), ::TYPES[22/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)PageLoaded__OnPageLoaded_fn, __this));
    }
    else
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[20/*"WebView"*/], __this->Parent(), __this, ::STRINGS[22/*"/usr/local/...*/], 36, ::STRINGS[17/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted()
void PageLoaded__OnUnrooted_fn(PageLoaded* __this)
{
    uStackFrame __("Fuse.Triggers.PageLoaded", "OnUnrooted()");

    if (__this->_webView != NULL)
    {
        ::g::Fuse::Controls::IWebView::remove_PageLoaded(uInterface(uPtr(__this->_webView), ::TYPES[22/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)PageLoaded__OnPageLoaded_fn, __this));
        __this->_webView = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated PageLoaded() [instance]
void PageLoaded::ctor_5()
{
    ctor_4();
}

// private void OnPageLoaded(object s, object a) [instance]
void PageLoaded::OnPageLoaded(uObject* s, uObject* a)
{
    Pulse();
}

// public generated PageLoaded New() [static]
PageLoaded* PageLoaded::New2()
{
    PageLoaded* obj1 = (PageLoaded*)uNew(PageLoaded_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/ScrollRegion.uno
// ---------------------------------------------------------------------------------------

// private sealed class IScrolledLengths.PixelsLength
// {
static void IScrolledLengths__PixelsLength_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Triggers::IScrolledLength_typeof(), offsetof(IScrolledLengths__PixelsLength_type, interface0));
}

IScrolledLengths__PixelsLength_type* IScrolledLengths__PixelsLength_typeof()
{
    static uSStrong<IScrolledLengths__PixelsLength_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IScrolledLengths__PixelsLength);
    options.TypeSize = sizeof(IScrolledLengths__PixelsLength_type);
    type = (IScrolledLengths__PixelsLength_type*)uClassType::New("Fuse.Triggers.IScrolledLengths.PixelsLength", options);
    type->fp_build_ = IScrolledLengths__PixelsLength_build;
    type->fp_ctor_ = (void*)IScrolledLengths__PixelsLength__New1_fn;
    type->interface0.fp_GetPoints = (void(*)(uObject*, float*, ::g::Fuse::Controls::ScrollViewBase*, ::g::Uno::Float2*))IScrolledLengths__PixelsLength__GetPoints_fn;
    return type;
}

// public generated PixelsLength()
void IScrolledLengths__PixelsLength__ctor__fn(IScrolledLengths__PixelsLength* __this)
{
    __this->ctor_();
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable)
void IScrolledLengths__PixelsLength__GetPoints_fn(IScrolledLengths__PixelsLength* __this, float* value, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPoints(*value, scrollable);
}

// public generated PixelsLength New()
void IScrolledLengths__PixelsLength__New1_fn(IScrolledLengths__PixelsLength** __retval)
{
    *__retval = IScrolledLengths__PixelsLength::New1();
}

// public generated PixelsLength() [instance]
void IScrolledLengths__PixelsLength::ctor_()
{
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable) [instance]
::g::Uno::Float2 IScrolledLengths__PixelsLength::GetPoints(float value, ::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    uStackFrame __("Fuse.Triggers.IScrolledLengths.PixelsLength", "GetPoints(float,Fuse.Controls.ScrollViewBase)");
    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New1(value), uPtr(scrollable)->AbsoluteZoom());
}

// public generated PixelsLength New() [static]
IScrolledLengths__PixelsLength* IScrolledLengths__PixelsLength::New1()
{
    IScrolledLengths__PixelsLength* obj1 = (IScrolledLengths__PixelsLength*)uNew(IScrolledLengths__PixelsLength_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/ScrollRegion.uno
// ---------------------------------------------------------------------------------------

// private sealed class IScrolledLengths.PointsLength
// {
static void IScrolledLengths__PointsLength_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Triggers::IScrolledLength_typeof(), offsetof(IScrolledLengths__PointsLength_type, interface0));
}

IScrolledLengths__PointsLength_type* IScrolledLengths__PointsLength_typeof()
{
    static uSStrong<IScrolledLengths__PointsLength_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IScrolledLengths__PointsLength);
    options.TypeSize = sizeof(IScrolledLengths__PointsLength_type);
    type = (IScrolledLengths__PointsLength_type*)uClassType::New("Fuse.Triggers.IScrolledLengths.PointsLength", options);
    type->fp_build_ = IScrolledLengths__PointsLength_build;
    type->fp_ctor_ = (void*)IScrolledLengths__PointsLength__New1_fn;
    type->interface0.fp_GetPoints = (void(*)(uObject*, float*, ::g::Fuse::Controls::ScrollViewBase*, ::g::Uno::Float2*))IScrolledLengths__PointsLength__GetPoints_fn;
    return type;
}

// public generated PointsLength()
void IScrolledLengths__PointsLength__ctor__fn(IScrolledLengths__PointsLength* __this)
{
    __this->ctor_();
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable)
void IScrolledLengths__PointsLength__GetPoints_fn(IScrolledLengths__PointsLength* __this, float* value, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPoints(*value, scrollable);
}

// public generated PointsLength New()
void IScrolledLengths__PointsLength__New1_fn(IScrolledLengths__PointsLength** __retval)
{
    *__retval = IScrolledLengths__PointsLength::New1();
}

// public generated PointsLength() [instance]
void IScrolledLengths__PointsLength::ctor_()
{
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable) [instance]
::g::Uno::Float2 IScrolledLengths__PointsLength::GetPoints(float value, ::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    return ::g::Uno::Float2__New1(value);
}

// public generated PointsLength New() [static]
IScrolledLengths__PointsLength* IScrolledLengths__PointsLength::New1()
{
    IScrolledLengths__PointsLength* obj1 = (IScrolledLengths__PointsLength*)uNew(IScrolledLengths__PointsLength_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno
// -------------------------------------------------------------------------------

// private sealed class LayoutTransition.PositionChangeMode
// {
static void LayoutTransition__PositionChangeMode_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Triggers::LayoutTransition_typeof());
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(LayoutTransition__PositionChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__PositionChangeMode_type, interface1));
}

LayoutTransition__PositionChangeMode_type* LayoutTransition__PositionChangeMode_typeof()
{
    static uSStrong<LayoutTransition__PositionChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(LayoutTransition__PositionChangeMode);
    options.TypeSize = sizeof(LayoutTransition__PositionChangeMode_type);
    type = (LayoutTransition__PositionChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.PositionChangeMode", options);
    type->fp_build_ = LayoutTransition__PositionChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__PositionChangeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))LayoutTransition__PositionChangeMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))LayoutTransition__PositionChangeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))LayoutTransition__PositionChangeMode__Unsubscribe_fn;
    return type;
}

// public generated PositionChangeMode()
void LayoutTransition__PositionChangeMode__ctor__fn(LayoutTransition__PositionChangeMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t)
void LayoutTransition__PositionChangeMode__GetAbsVector_fn(LayoutTransition__PositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated PositionChangeMode New()
void LayoutTransition__PositionChangeMode__New1_fn(LayoutTransition__PositionChangeMode** __retval)
{
    *__retval = LayoutTransition__PositionChangeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform)
void LayoutTransition__PositionChangeMode__Subscribe_fn(LayoutTransition__PositionChangeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub)
void LayoutTransition__PositionChangeMode__Unsubscribe_fn(LayoutTransition__PositionChangeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated PositionChangeMode() [instance]
void LayoutTransition__PositionChangeMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance]
::g::Uno::Float3 LayoutTransition__PositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.PositionChangeMode", "GetAbsVector(Fuse.Translation)");
    ::g::Uno::Float2 oldPos, newPos;

    if (!::g::Fuse::Triggers::LayoutTransition::GetPositionChange(uPtr(t)->RelativeNode(), &oldPos, &newPos))
        return ::g::Uno::Float3__New1(0.0f);

    return ::g::Uno::Float3__op_Multiply2(::g::Uno::Float3__New4(::g::Uno::Float2__op_Subtraction2(oldPos, newPos), 0.0f), uPtr(t)->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance]
uObject* LayoutTransition__PositionChangeMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance]
void LayoutTransition__PositionChangeMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated PositionChangeMode New() [static]
LayoutTransition__PositionChangeMode* LayoutTransition__PositionChangeMode::New1()
{
    LayoutTransition__PositionChangeMode* obj1 = (LayoutTransition__PositionChangeMode*)uNew(LayoutTransition__PositionChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/ProgressAnimation.uno
// ------------------------------------------------------------------------

// public sealed class ProgressAnimation
// {
static void ProgressAnimation_build(uType* type)
{
    ::TYPES[23] = ::g::Fuse::Triggers::IProgress_typeof();
    ::TYPES[24] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        ::TYPES[23/*Fuse.Triggers.IProgress*/], offsetof(ProgressAnimation, _source), 0,
        ::TYPES[23/*Fuse.Triggers.IProgress*/], offsetof(ProgressAnimation, _progress), 0,
        ::g::Uno::Double_typeof(), offsetof(ProgressAnimation, _prevValue), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ProgressAnimation__New2_fn, 0, true, type, 0),
        new uFunction("get_Source", NULL, (void*)ProgressAnimation__get_Source_fn, 0, false, ::TYPES[23/*Fuse.Triggers.IProgress*/], 0),
        new uFunction("set_Source", NULL, (void*)ProgressAnimation__set_Source_fn, 0, false, uVoid_typeof(), 1, ::TYPES[23/*Fuse.Triggers.IProgress*/]));
}

::g::Fuse::Triggers::Trigger_type* ProgressAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(ProgressAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.ProgressAnimation", options);
    type->fp_build_ = ProgressAnimation_build;
    type->fp_ctor_ = (void*)ProgressAnimation__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ProgressAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ProgressAnimation__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated ProgressAnimation()
void ProgressAnimation__ctor_5_fn(ProgressAnimation* __this)
{
    __this->ctor_5();
}

// private void DeinitProgress()
void ProgressAnimation__DeinitProgress_fn(ProgressAnimation* __this)
{
    __this->DeinitProgress();
}

// private Fuse.Triggers.IProgress FindIProgress()
void ProgressAnimation__FindIProgress_fn(ProgressAnimation* __this, uObject** __retval)
{
    *__retval = __this->FindIProgress();
}

// private void InitProgress()
void ProgressAnimation__InitProgress_fn(ProgressAnimation* __this)
{
    __this->InitProgress();
}

// public generated ProgressAnimation New()
void ProgressAnimation__New2_fn(ProgressAnimation** __retval)
{
    *__retval = ProgressAnimation::New2();
}

// private void OnChanged(object s, object a)
void ProgressAnimation__OnChanged_fn(ProgressAnimation* __this, uObject* s, uObject* a)
{
    __this->OnChanged(s, a);
}

// protected override sealed void OnRooted()
void ProgressAnimation__OnRooted_fn(ProgressAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->InitProgress();
}

// protected override sealed void OnUnrooted()
void ProgressAnimation__OnUnrooted_fn(ProgressAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "OnUnrooted()");
    __this->DeinitProgress();
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Triggers.IProgress get_Source()
void ProgressAnimation__get_Source_fn(ProgressAnimation* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Triggers.IProgress value)
void ProgressAnimation__set_Source_fn(ProgressAnimation* __this, uObject* value)
{
    __this->Source(value);
}

// public generated ProgressAnimation() [instance]
void ProgressAnimation::ctor_5()
{
    ctor_4();
}

// private void DeinitProgress() [instance]
void ProgressAnimation::DeinitProgress()
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "DeinitProgress()");

    if (_progress != NULL)
    {
        ::g::Fuse::Triggers::IProgress::remove_ProgressChanged(uInterface(uPtr(_progress), ::TYPES[23/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[24/*Uno.UX.ValueChangedHandler<double>*/], (void*)ProgressAnimation__OnChanged_fn, this));
        _progress = NULL;
    }
}

// private Fuse.Triggers.IProgress FindIProgress() [instance]
uObject* ProgressAnimation::FindIProgress()
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "FindIProgress()");
    ::g::Fuse::Visual* p = Parent();

    while ((p != NULL) && !uIs(p, ::TYPES[23/*Fuse.Triggers.IProgress*/]))
        p = uPtr(p)->Parent();

    return uAs<uObject*>(p, ::TYPES[23/*Fuse.Triggers.IProgress*/]);
}

// private void InitProgress() [instance]
void ProgressAnimation::InitProgress()
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "InitProgress()");
    uObject* ind1;
    _progress = (ind1 = Source(), ((ind1 != NULL) ? ind1 : (uObject*)FindIProgress()));

    if (_progress != NULL)
    {
        ::g::Fuse::Triggers::IProgress::add_ProgressChanged(uInterface(uPtr(_progress), ::TYPES[23/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[24/*Uno.UX.ValueChangedHandler<double>*/], (void*)ProgressAnimation__OnChanged_fn, this));
        _prevValue = ::g::Fuse::Triggers::IProgress::Progress(uInterface(uPtr(_progress), ::TYPES[23/*Fuse.Triggers.IProgress*/]));
        BypassSeek(_prevValue, 0);
    }
}

// private void OnChanged(object s, object a) [instance]
void ProgressAnimation::OnChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "OnChanged(object,object)");
    double p = ::g::Fuse::Triggers::IProgress::Progress(uInterface(uPtr(_progress), ::TYPES[23/*Fuse.Triggers.IProgress*/]));
    double diff = p - _prevValue;
    _prevValue = p;
    Seek(p, (diff >= 0.0) ? 0 : 1);
}

// public Fuse.Triggers.IProgress get_Source() [instance]
uObject* ProgressAnimation::Source()
{
    return _source;
}

// public void set_Source(Fuse.Triggers.IProgress value) [instance]
void ProgressAnimation::Source(uObject* value)
{
    uStackFrame __("Fuse.Triggers.ProgressAnimation", "set_Source(Fuse.Triggers.IProgress)");
    DeinitProgress();
    _source = value;
    InitProgress();
}

// public generated ProgressAnimation New() [static]
ProgressAnimation* ProgressAnimation::New2()
{
    ProgressAnimation* obj2 = (ProgressAnimation*)uNew(ProgressAnimation_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/PullToReload.uno
// ---------------------------------------------------------------------------------------

// public partial sealed class PullToReload
// {
// static PullToReload()
static void PullToReload__cctor_3_fn(uType* __type)
{
}

static void PullToReload_build(uType* type)
{
    ::STRINGS[23] = uString::Const("Triggers/PullToReload.ux");
    ::TYPES[25] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::State_typeof(), NULL);
    ::TYPES[26] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[27] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[29] = ::g::Fuse::VisualEventHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface8),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation_type, interface9));
    type->SetFields(49,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(PullToReload, StateGroup), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(PullToReload, _rest), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(PullToReload, _pulling), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(PullToReload, _pulledPastThreshold), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(PullToReload, _loading), 0,
        ::g::Uno::Bool_typeof(), offsetof(PullToReload, _isLoading), 0,
        ::g::Uno::Bool_typeof(), offsetof(PullToReload, _internLoading), 0,
        ::g::Uno::Bool_typeof(), offsetof(PullToReload, threshold), 0,
        ::TYPES[29/*Fuse.VisualEventHandler*/], offsetof(PullToReload, ReloadHandler1), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_IsLoading", NULL, (void*)PullToReload__get_IsLoading_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsLoading", NULL, (void*)PullToReload__set_IsLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Loading", NULL, (void*)PullToReload__get_Loading_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Loading", NULL, (void*)PullToReload__set_Loading_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction(".ctor", NULL, (void*)PullToReload__New3_fn, 0, true, type, 0),
        new uFunction("get_PulledPastThreshold", NULL, (void*)PullToReload__get_PulledPastThreshold_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_PulledPastThreshold", NULL, (void*)PullToReload__set_PulledPastThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("get_Pulling", NULL, (void*)PullToReload__get_Pulling_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Pulling", NULL, (void*)PullToReload__set_Pulling_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("add_ReloadHandler", NULL, (void*)PullToReload__add_ReloadHandler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[29/*Fuse.VisualEventHandler*/]),
        new uFunction("remove_ReloadHandler", NULL, (void*)PullToReload__remove_ReloadHandler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[29/*Fuse.VisualEventHandler*/]),
        new uFunction("get_Rest", NULL, (void*)PullToReload__get_Rest_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Rest", NULL, (void*)PullToReload__set_Rest_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()));
}

::g::Fuse::Triggers::ScrollingAnimation_type* PullToReload_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::ScrollingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::ScrollingAnimation_typeof();
    options.FieldCount = 58;
    options.InterfaceCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PullToReload);
    options.TypeSize = sizeof(::g::Fuse::Triggers::ScrollingAnimation_type);
    type = (::g::Fuse::Triggers::ScrollingAnimation_type*)uClassType::New("Fuse.Triggers.PullToReload", options);
    type->fp_build_ = PullToReload_build;
    type->fp_ctor_ = (void*)PullToReload__New3_fn;
    type->fp_cctor_ = PullToReload__cctor_3_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PullToReload__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PullToReload__OnUnrooted_fn;
    type->interface9.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Triggers::ScrollingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public PullToReload()
void PullToReload__ctor_6_fn(PullToReload* __this)
{
    __this->ctor_6();
}

// private void Ensure(Fuse.Triggers.State s)
void PullToReload__Ensure_fn(PullToReload* __this, ::g::Fuse::Triggers::State* s)
{
    __this->Ensure(s);
}

// private void EnsureStates()
void PullToReload__EnsureStates_fn(PullToReload* __this)
{
    __this->EnsureStates();
}

// private void InitializeUX()
void PullToReload__InitializeUX_fn(PullToReload* __this)
{
    __this->InitializeUX();
}

// public bool get_IsLoading()
void PullToReload__get_IsLoading_fn(PullToReload* __this, bool* __retval)
{
    *__retval = __this->IsLoading();
}

// public void set_IsLoading(bool value)
void PullToReload__set_IsLoading_fn(PullToReload* __this, bool* value)
{
    __this->IsLoading(*value);
}

// private bool IsState(Fuse.Triggers.State s)
void PullToReload__IsState_fn(PullToReload* __this, ::g::Fuse::Triggers::State* s, bool* __retval)
{
    *__retval = __this->IsState(s);
}

// public Fuse.Triggers.State get_Loading()
void PullToReload__get_Loading_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Loading();
}

// public void set_Loading(Fuse.Triggers.State value)
void PullToReload__set_Loading_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Loading(value);
}

// public PullToReload New()
void PullToReload__New3_fn(PullToReload** __retval)
{
    *__retval = PullToReload::New3();
}

// protected override sealed void OnRooted()
void PullToReload__OnRooted_fn(PullToReload* __this)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "OnRooted()");
    ::g::Fuse::Triggers::State* ind1;
    ::g::Fuse::Triggers::State* ind2;
    ::g::Fuse::Triggers::State* ind3;
    ::g::Fuse::Triggers::ScrollingAnimation__OnRooted_fn(__this);

    if (__this->_rest == NULL)
        __this->Rest(::g::Fuse::Triggers::State::New2());

    if (__this->_pulling == NULL)
        __this->Pulling((ind1 = __this->Rest(), (ind1 != NULL) ? ind1 : (::g::Fuse::Triggers::State*)::g::Fuse::Triggers::State::New2()));

    if (__this->_pulledPastThreshold == NULL)
        __this->PulledPastThreshold((ind2 = __this->Pulling(), (ind2 != NULL) ? ind2 : (::g::Fuse::Triggers::State*)::g::Fuse::Triggers::State::New2()));

    if (__this->_loading == NULL)
        __this->Loading((ind3 = __this->Rest(), (ind3 != NULL) ? ind3 : (::g::Fuse::Triggers::State*)::g::Fuse::Triggers::State::New2()));

    uPtr(__this->StateGroup)->Active(__this->Rest());
    ::g::Fuse::Node::Relate(__this->Parent(), __this->StateGroup);
}

// protected override sealed void OnUnrooted()
void PullToReload__OnUnrooted_fn(PullToReload* __this)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "OnUnrooted()");
    ::g::Fuse::Node::Unrelate(__this->Parent(), __this->StateGroup);
    ::g::Fuse::Triggers::ScrollingAnimation__OnUnrooted_fn(__this);
}

// public Fuse.Triggers.State get_PulledPastThreshold()
void PullToReload__get_PulledPastThreshold_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->PulledPastThreshold();
}

// public void set_PulledPastThreshold(Fuse.Triggers.State value)
void PullToReload__set_PulledPastThreshold_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->PulledPastThreshold(value);
}

// public Fuse.Triggers.State get_Pulling()
void PullToReload__get_Pulling_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Pulling();
}

// public void set_Pulling(Fuse.Triggers.State value)
void PullToReload__set_Pulling_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Pulling(value);
}

// private void ReachThreshold()
void PullToReload__ReachThreshold_fn(PullToReload* __this)
{
    __this->ReachThreshold();
}

// private void ReleasePull()
void PullToReload__ReleasePull_fn(PullToReload* __this)
{
    __this->ReleasePull();
}

// public generated void add_ReloadHandler(Fuse.VisualEventHandler value)
void PullToReload__add_ReloadHandler_fn(PullToReload* __this, uDelegate* value)
{
    __this->add_ReloadHandler(value);
}

// public generated void remove_ReloadHandler(Fuse.VisualEventHandler value)
void PullToReload__remove_ReloadHandler_fn(PullToReload* __this, uDelegate* value)
{
    __this->remove_ReloadHandler(value);
}

// public Fuse.Triggers.State get_Rest()
void PullToReload__get_Rest_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Rest();
}

// public void set_Rest(Fuse.Triggers.State value)
void PullToReload__set_Rest_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Rest(value);
}

// private void StartPull()
void PullToReload__StartPull_fn(PullToReload* __this)
{
    __this->StartPull();
}

// public PullToReload() [instance]
void PullToReload::ctor_6()
{
    uStackFrame __("Fuse.Triggers.PullToReload", ".ctor()");
    StateGroup = ::g::Fuse::Triggers::StateGroup::New2();
    ctor_5();
    InitializeUX();
}

// private void Ensure(Fuse.Triggers.State s) [instance]
void PullToReload::Ensure(::g::Fuse::Triggers::State* s)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "Ensure(Fuse.Triggers.State)");
    bool ret5;

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(uPtr(StateGroup)->States()), ::TYPES[25/*Uno.Collections.ICollection<Fuse.Triggers.State>*/]), s, &ret5), ret5))
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(StateGroup)->States()), ::TYPES[25/*Uno.Collections.ICollection<Fuse.Triggers.State>*/]), s);
}

// private void EnsureStates() [instance]
void PullToReload::EnsureStates()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "EnsureStates()");
    ::g::Fuse::Triggers::State* ret6;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(StateGroup)->States()), ::TYPES[25/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])); i++)
        if (!IsState((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(StateGroup)->States()), ::TYPES[26/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int32_t>(i), &ret6), ret6)))
            ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(uPtr(StateGroup)->States()), ::TYPES[26/*Uno.Collections.IList<Fuse.Triggers.State>*/]), i--);

    Ensure(Rest());
    Ensure(Pulling());
    Ensure(PulledPastThreshold());
    Ensure(Loading());
}

// private void InitializeUX() [instance]
void PullToReload::InitializeUX()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "InitializeUX()");
    ::g::Fuse::Triggers::Actions::Callback* temp = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp1 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp2 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Animations::Nothing* temp3 = ::g::Fuse::Animations::Nothing::New2();
    Range(1);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[23/*"Triggers/Pu...*/]);
    temp->When(0);
    temp->SourceLineNumber(2);
    temp->SourceFileName(::STRINGS[23/*"Triggers/Pu...*/]);
    temp->Action(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)PullToReload__StartPull_fn, this));
    temp1->When(1);
    temp1->SourceLineNumber(3);
    temp1->SourceFileName(::STRINGS[23/*"Triggers/Pu...*/]);
    temp1->Action(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)PullToReload__ReleasePull_fn, this));
    temp2->Delay(0.5f);
    temp2->SourceLineNumber(4);
    temp2->SourceFileName(::STRINGS[23/*"Triggers/Pu...*/]);
    temp2->Action(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)PullToReload__ReachThreshold_fn, this));
    temp3->Duration(1.0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::TYPES[28/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::TYPES[28/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::TYPES[28/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp2);
}

// public bool get_IsLoading() [instance]
bool PullToReload::IsLoading()
{
    return _isLoading;
}

// public void set_IsLoading(bool value) [instance]
void PullToReload::IsLoading(bool value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_IsLoading(bool)");
    _isLoading = value;
    _internLoading = value;

    if (_isLoading)
        uPtr(StateGroup)->Active(Loading());
    else
        uPtr(StateGroup)->Active(Rest());
}

// private bool IsState(Fuse.Triggers.State s) [instance]
bool PullToReload::IsState(::g::Fuse::Triggers::State* s)
{
    return (((s == Rest()) || (s == Pulling())) || (s == PulledPastThreshold())) || (s == Loading());
}

// public Fuse.Triggers.State get_Loading() [instance]
::g::Fuse::Triggers::State* PullToReload::Loading()
{
    return _loading;
}

// public void set_Loading(Fuse.Triggers.State value) [instance]
void PullToReload::Loading(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_Loading(Fuse.Triggers.State)");
    _loading = value;
    EnsureStates();
}

// public Fuse.Triggers.State get_PulledPastThreshold() [instance]
::g::Fuse::Triggers::State* PullToReload::PulledPastThreshold()
{
    return _pulledPastThreshold;
}

// public void set_PulledPastThreshold(Fuse.Triggers.State value) [instance]
void PullToReload::PulledPastThreshold(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_PulledPastThreshold(Fuse.Triggers.State)");
    _pulledPastThreshold = value;
    EnsureStates();
}

// public Fuse.Triggers.State get_Pulling() [instance]
::g::Fuse::Triggers::State* PullToReload::Pulling()
{
    return _pulling;
}

// public void set_Pulling(Fuse.Triggers.State value) [instance]
void PullToReload::Pulling(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_Pulling(Fuse.Triggers.State)");
    _pulling = value;
    EnsureStates();
}

// private void ReachThreshold() [instance]
void PullToReload::ReachThreshold()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "ReachThreshold()");

    if (IsLoading() || _internLoading)
        return;

    threshold = true;
    uPtr(StateGroup)->Active(PulledPastThreshold());
}

// private void ReleasePull() [instance]
void PullToReload::ReleasePull()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "ReleasePull()");

    if (IsLoading() || _internLoading)
        return;

    if (threshold)
    {
        _internLoading = true;
        uPtr(StateGroup)->Active(Loading());

        if (::g::Uno::Delegate::op_Inequality(ReloadHandler1, NULL))
            uPtr(ReloadHandler1)->Invoke(2, this, (::g::Fuse::VisualEventArgs*)::g::Fuse::VisualEventArgs::New2(Parent()));
    }
    else
        uPtr(StateGroup)->Active(Rest());
}

// public generated void add_ReloadHandler(Fuse.VisualEventHandler value) [instance]
void PullToReload::add_ReloadHandler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "add_ReloadHandler(Fuse.VisualEventHandler)");
    ReloadHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ReloadHandler1, value), ::TYPES[29/*Fuse.VisualEventHandler*/]);
}

// public generated void remove_ReloadHandler(Fuse.VisualEventHandler value) [instance]
void PullToReload::remove_ReloadHandler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "remove_ReloadHandler(Fuse.VisualEventHandler)");
    ReloadHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ReloadHandler1, value), ::TYPES[29/*Fuse.VisualEventHandler*/]);
}

// public Fuse.Triggers.State get_Rest() [instance]
::g::Fuse::Triggers::State* PullToReload::Rest()
{
    return _rest;
}

// public void set_Rest(Fuse.Triggers.State value) [instance]
void PullToReload::Rest(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.PullToReload", "set_Rest(Fuse.Triggers.State)");
    _rest = value;
    EnsureStates();
}

// private void StartPull() [instance]
void PullToReload::StartPull()
{
    uStackFrame __("Fuse.Triggers.PullToReload", "StartPull()");

    if (IsLoading() || _internLoading)
        return;

    threshold = false;
    uPtr(StateGroup)->Active(Pulling());
}

// public PullToReload New() [static]
PullToReload* PullToReload::New3()
{
    PullToReload* obj4 = (PullToReload*)uNew(PullToReload_typeof());
    obj4->ctor_6();
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/PulseTrigger.uno
// -------------------------------------------------------------------

// public delegate void PulseTrigger<ArgsT>.PulseHandler(object sender, ArgsT args)
uDelegateType* PulseTrigger__PulseHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.PulseTrigger`1.PulseHandler", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/PulseTrigger.uno
// -------------------------------------------------------------------

// public abstract class PulseTrigger<ArgsT>
// {
static void PulseTrigger_build(uType* type)
{
    type->SetPrecalc(
        PulseTrigger__PulseHandler_typeof()->MakeType(type->T(0), NULL));
    type->MethodTypes[0]->SetPrecalc(
        ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<T>*/, type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<T>*/, type->MethodTypes[1]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        PulseTrigger__PulseHandler_typeof()->MakeType(type->T(0), NULL), offsetof(PulseTrigger, Handler1), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("add_Handler", NULL, (void*)PulseTrigger__add_Handler_fn, 0, false, uVoid_typeof(), 1, PulseTrigger__PulseHandler_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("remove_Handler", NULL, (void*)PulseTrigger__remove_Handler_fn, 0, false, uVoid_typeof(), 1, PulseTrigger__PulseHandler_typeof()->MakeType(type->T(0), NULL)));
}

::g::Fuse::Triggers::Trigger_type* PulseTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 40;
    options.GenericCount = 1;
    options.InterfaceCount = 9;
    options.MethodTypeCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(PulseTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.PulseTrigger`1", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->MethodTypes[1] = type->NewMethodType(1, 1,0);
    type->fp_build_ = PulseTrigger_build;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// protected generated PulseTrigger()
void PulseTrigger__ctor_5_fn(PulseTrigger* __this)
{
    __this->ctor_5();
}

// internal static void AddHandlerImpl<T>(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler handler)
void PulseTrigger__AddHandlerImpl_fn(uType* __type, ::g::Fuse::Visual* visual, uDelegate* handler)
{
    PulseTrigger::AddHandlerImpl(__type, visual, handler);
}

// public generated void add_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler value)
void PulseTrigger__add_Handler_fn(PulseTrigger* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler value)
void PulseTrigger__remove_Handler_fn(PulseTrigger* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// protected void Pulse(ArgsT args)
void PulseTrigger__Pulse1_fn(PulseTrigger* __this, ::g::Uno::EventArgs* args)
{
    __this->Pulse1(args);
}

// internal static void RemoveHandlerImpl<T>(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler handler)
void PulseTrigger__RemoveHandlerImpl_fn(uType* __type, ::g::Fuse::Visual* visual, uDelegate* handler)
{
    PulseTrigger::RemoveHandlerImpl(__type, visual, handler);
}

// protected generated PulseTrigger() [instance]
void PulseTrigger::ctor_5()
{
    ctor_4();
}

// public generated void add_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler value) [instance]
void PulseTrigger::add_Handler(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(PulseTrigger_typeof())->Precalced(0/*Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler*/),
    };
    uStackFrame __("Fuse.Triggers.PulseTrigger`1", "add_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), __types[0]);
}

// public generated void remove_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler value) [instance]
void PulseTrigger::remove_Handler(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(PulseTrigger_typeof())->Precalced(0/*Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler*/),
    };
    uStackFrame __("Fuse.Triggers.PulseTrigger`1", "remove_Handler(Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), __types[0]);
}

// protected void Pulse(ArgsT args) [instance]
void PulseTrigger::Pulse1(::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.PulseTrigger`1", "Pulse(ArgsT)");
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, args);
}

// internal static void AddHandlerImpl<T>(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler handler) [static]
void PulseTrigger::AddHandlerImpl(uType* __type, ::g::Fuse::Visual* visual, uDelegate* handler)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Visual.FirstChild<T>*/),
    };
    uStackFrame __("Fuse.Triggers.PulseTrigger`1", "AddHandlerImpl`1(Fuse.Visual,Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler)");
    PulseTrigger* r = (PulseTrigger*)uPtr(visual)->FirstChild(__types[0]);

    if (r == NULL)
    {
        r = (PulseTrigger*)__type->U(0)->New();
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[47/*Uno.Collections.ICollection<Fuse.Node>*/]), r);
    }

    uPtr(r)->add_Handler(handler);
}

// internal static void RemoveHandlerImpl<T>(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler handler) [static]
void PulseTrigger::RemoveHandlerImpl(uType* __type, ::g::Fuse::Visual* visual, uDelegate* handler)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Visual.FirstChild<T>*/),
    };
    uStackFrame __("Fuse.Triggers.PulseTrigger`1", "RemoveHandlerImpl`1(Fuse.Visual,Fuse.Triggers.PulseTrigger<ArgsT>.PulseHandler)");
    PulseTrigger* r = (PulseTrigger*)uPtr(visual)->FirstChild(__types[0]);

    if (r != NULL)
        uPtr(r)->remove_Handler(handler);
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileFloat.uno
// -----------------------------------------------------------------

// private enum WhileFloat.Range
uEnumType* WhileFloat__Range_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.WhileFloat.Range", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Open", 0LL,
        "Exclusive", 1LL,
        "Inclusive", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/RangeAnimation.uno
// ---------------------------------------------------------------------

// public sealed class RangeAnimation
// {
static void RangeAnimation_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        ::g::Uno::Double_typeof(), offsetof(RangeAnimation, _value), 0,
        ::g::Uno::Float_typeof(), offsetof(RangeAnimation, _minimum), 0,
        ::g::Uno::Float_typeof(), offsetof(RangeAnimation, _maximum), 0,
        ::g::Uno::Double_typeof(), offsetof(RangeAnimation, _prevValue), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Maximum", NULL, (void*)RangeAnimation__get_Maximum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)RangeAnimation__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Minimum", NULL, (void*)RangeAnimation__get_Minimum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)RangeAnimation__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)RangeAnimation__New2_fn, 0, true, type, 0),
        new uFunction("get_Value", NULL, (void*)RangeAnimation__get_Value_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)RangeAnimation__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Triggers::Trigger_type* RangeAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RangeAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.RangeAnimation", options);
    type->fp_build_ = RangeAnimation_build;
    type->fp_ctor_ = (void*)RangeAnimation__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))RangeAnimation__OnRooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated RangeAnimation()
void RangeAnimation__ctor_5_fn(RangeAnimation* __this)
{
    __this->ctor_5();
}

// public float get_Maximum()
void RangeAnimation__get_Maximum_fn(RangeAnimation* __this, float* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(float value)
void RangeAnimation__set_Maximum_fn(RangeAnimation* __this, float* value)
{
    __this->Maximum(*value);
}

// public float get_Minimum()
void RangeAnimation__get_Minimum_fn(RangeAnimation* __this, float* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(float value)
void RangeAnimation__set_Minimum_fn(RangeAnimation* __this, float* value)
{
    __this->Minimum(*value);
}

// public generated RangeAnimation New()
void RangeAnimation__New2_fn(RangeAnimation** __retval)
{
    *__retval = RangeAnimation::New2();
}

// protected override sealed void OnRooted()
void RangeAnimation__OnRooted_fn(RangeAnimation* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_prevValue = (double)__this->Value();
    __this->BypassSeek(__this->_prevValue, 0);
}

// private void Update()
void RangeAnimation__Update_fn(RangeAnimation* __this)
{
    __this->Update();
}

// public float get_Value()
void RangeAnimation__get_Value_fn(RangeAnimation* __this, float* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(float value)
void RangeAnimation__set_Value_fn(RangeAnimation* __this, float* value)
{
    __this->Value(*value);
}

// public generated RangeAnimation() [instance]
void RangeAnimation::ctor_5()
{
    _minimum = 0.0f;
    _maximum = 1.0f;
    ctor_4();
}

// public float get_Maximum() [instance]
float RangeAnimation::Maximum()
{
    return _maximum;
}

// public void set_Maximum(float value) [instance]
void RangeAnimation::Maximum(float value)
{
    _maximum = value;
}

// public float get_Minimum() [instance]
float RangeAnimation::Minimum()
{
    return _minimum;
}

// public void set_Minimum(float value) [instance]
void RangeAnimation::Minimum(float value)
{
    _minimum = value;
}

// private void Update() [instance]
void RangeAnimation::Update()
{
    float p = Value();
    double diff = (double)p - _prevValue;
    _prevValue = (double)p;
    float relative = ::g::Uno::Math::Clamp1((p - Minimum()) / (Maximum() - Minimum()), 0.0f, 1.0f);
    Seek((double)relative, (diff >= 0.0) ? 0 : 1);
}

// public float get_Value() [instance]
float RangeAnimation::Value()
{
    return (float)_value;
}

// public void set_Value(float value) [instance]
void RangeAnimation::Value(float value)
{
    _value = (double)value;

    if (IsRootingCompleted())
        Update();
}

// public generated RangeAnimation New() [static]
RangeAnimation* RangeAnimation::New2()
{
    RangeAnimation* obj1 = (RangeAnimation*)uNew(RangeAnimation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.12.0/WhileKeyboardVisible.uno
// ----------------------------------------------------------------------------------

// private sealed class WhileKeyboardVisible.RelativeToKeyboardMode
// {
static void WhileKeyboardVisible__RelativeToKeyboardMode_build(uType* type)
{
    ::STRINGS[24] = uString::Const("`Keyboard` RelativeTo has been deprecated. Use `window()` margins instead");
    ::STRINGS[25] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Panels/1.12.0/WhileKeyboardVisible.uno");
    ::STRINGS[26] = uString::Const("GetAbsVector");
    type->SetDependencies(
        ::g::Fuse::Platform::SystemUI_typeof());
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(WhileKeyboardVisible__RelativeToKeyboardMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(WhileKeyboardVisible__RelativeToKeyboardMode_type, interface1));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(WhileKeyboardVisible__RelativeToKeyboardMode, _notice), 0);
}

WhileKeyboardVisible__RelativeToKeyboardMode_type* WhileKeyboardVisible__RelativeToKeyboardMode_typeof()
{
    static uSStrong<WhileKeyboardVisible__RelativeToKeyboardMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileKeyboardVisible__RelativeToKeyboardMode);
    options.TypeSize = sizeof(WhileKeyboardVisible__RelativeToKeyboardMode_type);
    type = (WhileKeyboardVisible__RelativeToKeyboardMode_type*)uClassType::New("Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode", options);
    type->fp_build_ = WhileKeyboardVisible__RelativeToKeyboardMode_build;
    type->fp_ctor_ = (void*)WhileKeyboardVisible__RelativeToKeyboardMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))WhileKeyboardVisible__RelativeToKeyboardMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))WhileKeyboardVisible__RelativeToKeyboardMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))WhileKeyboardVisible__RelativeToKeyboardMode__Unsubscribe_fn;
    return type;
}

// public generated RelativeToKeyboardMode()
void WhileKeyboardVisible__RelativeToKeyboardMode__ctor__fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t)
void WhileKeyboardVisible__RelativeToKeyboardMode__GetAbsVector_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated RelativeToKeyboardMode New()
void WhileKeyboardVisible__RelativeToKeyboardMode__New1_fn(WhileKeyboardVisible__RelativeToKeyboardMode** __retval)
{
    *__retval = WhileKeyboardVisible__RelativeToKeyboardMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform)
void WhileKeyboardVisible__RelativeToKeyboardMode__Subscribe_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub)
void WhileKeyboardVisible__RelativeToKeyboardMode__Unsubscribe_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated RelativeToKeyboardMode() [instance]
void WhileKeyboardVisible__RelativeToKeyboardMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance]
::g::Uno::Float3 WhileKeyboardVisible__RelativeToKeyboardMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode", "GetAbsVector(Fuse.Translation)");

    if (!_notice)
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[24/*"`Keyboard` ...*/], this, ::STRINGS[25/*"/usr/local/...*/], 70, ::STRINGS[26/*"GetAbsVector"*/]);
        _notice = true;
    }

    float height = ::g::Fuse::Platform::SystemUI::SafeMargins().W - ::g::Fuse::Platform::SystemUI::StaticMargins().W;
    return ::g::Uno::Float3__op_Multiply2(uPtr(t)->Vector(), ::g::Uno::Float3__New2(0.0f, height, 0.0f));
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance]
uObject* WhileKeyboardVisible__RelativeToKeyboardMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance]
void WhileKeyboardVisible__RelativeToKeyboardMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated RelativeToKeyboardMode New() [static]
WhileKeyboardVisible__RelativeToKeyboardMode* WhileKeyboardVisible__RelativeToKeyboardMode::New1()
{
    WhileKeyboardVisible__RelativeToKeyboardMode* obj1 = (WhileKeyboardVisible__RelativeToKeyboardMode*)uNew(WhileKeyboardVisible__RelativeToKeyboardMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/RemovingAnimation.uno
// ------------------------------------------------------------------------

// public class RemovingAnimation
// {
static void RemovingAnimation_build(uType* type)
{
    ::STRINGS[27] = uString::Const("Double removal of Visual");
    ::STRINGS[28] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/RemovingAnimation.uno");
    ::STRINGS[29] = uString::Const("Fuse.IBeginRemoveVisualListener.OnBeginRemoveVisual");
    ::STRINGS[30] = uString::Const("Unexpected done");
    ::STRINGS[31] = uString::Const("OnDone");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RemovingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RemovingAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(RemovingAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(RemovingAnimation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(RemovingAnimation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RemovingAnimation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RemovingAnimation_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(RemovingAnimation_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(RemovingAnimation_type, interface8),
        ::g::Fuse::IBeginRemoveVisualListener_typeof(), offsetof(RemovingAnimation_type, interface9));
    type->SetFields(39,
        ::g::Fuse::PendingRemoveVisual_typeof(), offsetof(RemovingAnimation, _args), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RemovingAnimation__New2_fn, 0, true, type, 0));
}

RemovingAnimation_type* RemovingAnimation_typeof()
{
    static uSStrong<RemovingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(RemovingAnimation);
    options.TypeSize = sizeof(RemovingAnimation_type);
    type = (RemovingAnimation_type*)uClassType::New("Fuse.Triggers.RemovingAnimation", options);
    type->fp_build_ = RemovingAnimation_build;
    type->fp_ctor_ = (void*)RemovingAnimation__New2_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RemovingAnimation__OnUnrooted_fn;
    type->interface9.fp_OnBeginRemoveVisual = (void(*)(uObject*, ::g::Fuse::PendingRemoveVisual*))RemovingAnimation__FuseIBeginRemoveVisualListenerOnBeginRemoveVisual_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated RemovingAnimation()
void RemovingAnimation__ctor_5_fn(RemovingAnimation* __this)
{
    __this->ctor_5();
}

// private void Fuse.IBeginRemoveVisualListener.OnBeginRemoveVisual(Fuse.PendingRemoveVisual pr)
void RemovingAnimation__FuseIBeginRemoveVisualListenerOnBeginRemoveVisual_fn(RemovingAnimation* __this, ::g::Fuse::PendingRemoveVisual* pr)
{
    uStackFrame __("Fuse.Triggers.RemovingAnimation", "Fuse.IBeginRemoveVisualListener.OnBeginRemoveVisual(Fuse.PendingRemoveVisual)");

    if (__this->_args != NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[27/*"Double remo...*/], __this, ::STRINGS[28/*"/usr/local/...*/], 49, ::STRINGS[29/*"Fuse.IBegin...*/]);
        return;
    }

    __this->_args = pr;
    uPtr(__this->_args)->AddSubscriber();
    __this->Activate(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)RemovingAnimation__OnDone_fn, __this));
}

// public generated RemovingAnimation New()
void RemovingAnimation__New2_fn(RemovingAnimation** __retval)
{
    *__retval = RemovingAnimation::New2();
}

// private void OnDone()
void RemovingAnimation__OnDone_fn(RemovingAnimation* __this)
{
    __this->OnDone();
}

// protected override sealed void OnUnrooted()
void RemovingAnimation__OnUnrooted_fn(RemovingAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.RemovingAnimation", "OnUnrooted()");
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);

    if (__this->_args != NULL)
    {
        uPtr(__this->_args)->RemoveSubscriber();
        __this->_args = NULL;
    }
}

// public generated RemovingAnimation() [instance]
void RemovingAnimation::ctor_5()
{
    ctor_4();
}

// private void OnDone() [instance]
void RemovingAnimation::OnDone()
{
    uStackFrame __("Fuse.Triggers.RemovingAnimation", "OnDone()");

    if (_args == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[30/*"Unexpected ...*/], this, ::STRINGS[28/*"/usr/local/...*/], 62, ::STRINGS[31/*"OnDone"*/]);
        return;
    }

    uPtr(_args)->RemoveSubscriber();
    _args = NULL;
}

// public generated RemovingAnimation New() [static]
RemovingAnimation* RemovingAnimation::New2()
{
    RemovingAnimation* obj1 = (RemovingAnimation*)uNew(RemovingAnimation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno
// -------------------------------------------------------------------------------

// private sealed class LayoutTransition.ResizeChangeMode
// {
static void LayoutTransition__ResizeChangeMode_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Triggers::LayoutTransition_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(LayoutTransition__ResizeChangeMode_type, interface0));
}

LayoutTransition__ResizeChangeMode_type* LayoutTransition__ResizeChangeMode_typeof()
{
    static uSStrong<LayoutTransition__ResizeChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(LayoutTransition__ResizeChangeMode);
    options.TypeSize = sizeof(LayoutTransition__ResizeChangeMode_type);
    type = (LayoutTransition__ResizeChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.ResizeChangeMode", options);
    type->fp_build_ = LayoutTransition__ResizeChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__ResizeChangeMode__New1_fn;
    type->interface0.fp_GetSizeChange = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Uno::Float2*, bool*))LayoutTransition__ResizeChangeMode__GetSizeChange_fn;
    return type;
}

// public generated ResizeChangeMode()
void LayoutTransition__ResizeChangeMode__ctor__fn(LayoutTransition__ResizeChangeMode* __this)
{
    __this->ctor_();
}

// public bool GetSizeChange(Fuse.Visual n, Fuse.Visual relative, float2& baseSize, float2& deltaSize)
void LayoutTransition__ResizeChangeMode__GetSizeChange_fn(LayoutTransition__ResizeChangeMode* __this, ::g::Fuse::Visual* n, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize, bool* __retval)
{
    *__retval = __this->GetSizeChange(n, relative, baseSize, deltaSize);
}

// public generated ResizeChangeMode New()
void LayoutTransition__ResizeChangeMode__New1_fn(LayoutTransition__ResizeChangeMode** __retval)
{
    *__retval = LayoutTransition__ResizeChangeMode::New1();
}

// public generated ResizeChangeMode() [instance]
void LayoutTransition__ResizeChangeMode::ctor_()
{
}

// public bool GetSizeChange(Fuse.Visual n, Fuse.Visual relative, float2& baseSize, float2& deltaSize) [instance]
bool LayoutTransition__ResizeChangeMode::GetSizeChange(::g::Fuse::Visual* n, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.ResizeChangeMode", "GetSizeChange(Fuse.Visual,Fuse.Visual,float2&,float2&)");
    ::g::Uno::Float2 oldSize, newSize;
    bool b = ::g::Fuse::Triggers::LayoutTransition::GetSizeChange(n, &oldSize, &newSize);
    *deltaSize = ::g::Uno::Float2__op_Subtraction2(oldSize, newSize);
    *baseSize = newSize;
    return b;
}

// public generated ResizeChangeMode New() [static]
LayoutTransition__ResizeChangeMode* LayoutTransition__ResizeChangeMode::New1()
{
    LayoutTransition__ResizeChangeMode* obj1 = (LayoutTransition__ResizeChangeMode*)uNew(LayoutTransition__ResizeChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno
// -------------------------------------------------------------------------------

// private sealed class LayoutTransition.ScaleChangeMode
// {
static void LayoutTransition__ScaleChangeMode_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Triggers::LayoutTransition_typeof());
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(LayoutTransition__ScaleChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__ScaleChangeMode_type, interface1));
}

LayoutTransition__ScaleChangeMode_type* LayoutTransition__ScaleChangeMode_typeof()
{
    static uSStrong<LayoutTransition__ScaleChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(LayoutTransition__ScaleChangeMode);
    options.TypeSize = sizeof(LayoutTransition__ScaleChangeMode_type);
    type = (LayoutTransition__ScaleChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.ScaleChangeMode", options);
    type->fp_build_ = LayoutTransition__ScaleChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__ScaleChangeMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))LayoutTransition__ScaleChangeMode__GetScaleVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))LayoutTransition__ScaleChangeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))LayoutTransition__ScaleChangeMode__Unsubscribe_fn;
    return type;
}

// public generated ScaleChangeMode()
void LayoutTransition__ScaleChangeMode__ctor__fn(LayoutTransition__ScaleChangeMode* __this)
{
    __this->ctor_();
}

// public float3 GetScaleVector(Fuse.Scaling v)
void LayoutTransition__ScaleChangeMode__GetScaleVector_fn(LayoutTransition__ScaleChangeMode* __this, ::g::Fuse::Scaling* v, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(v);
}

// public generated ScaleChangeMode New()
void LayoutTransition__ScaleChangeMode__New1_fn(LayoutTransition__ScaleChangeMode** __retval)
{
    *__retval = LayoutTransition__ScaleChangeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform)
void LayoutTransition__ScaleChangeMode__Subscribe_fn(LayoutTransition__ScaleChangeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub)
void LayoutTransition__ScaleChangeMode__Unsubscribe_fn(LayoutTransition__ScaleChangeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated ScaleChangeMode() [instance]
void LayoutTransition__ScaleChangeMode::ctor_()
{
}

// public float3 GetScaleVector(Fuse.Scaling v) [instance]
::g::Uno::Float3 LayoutTransition__ScaleChangeMode::GetScaleVector(::g::Fuse::Scaling* v)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.ScaleChangeMode", "GetScaleVector(Fuse.Scaling)");
    ::g::Uno::Float2 oldSize, newSize;
    bool b = ::g::Fuse::Triggers::LayoutTransition::GetSizeChange(uPtr(v)->RelativeNode(), &oldSize, &newSize);
    float zeroTolerance = 1e-05f;

    if ((!b || (newSize.Y < 1e-05f)) || (newSize.X < 1e-05f))
        return uPtr(v)->Vector();

    ::g::Uno::Float2 n = ::g::Uno::Float2__op_Division2(oldSize, newSize);
    return ::g::Uno::Float3__op_Multiply2(::g::Uno::Float3__New4(n, 1.0f), v->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance]
uObject* LayoutTransition__ScaleChangeMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance]
void LayoutTransition__ScaleChangeMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated ScaleChangeMode New() [static]
LayoutTransition__ScaleChangeMode* LayoutTransition__ScaleChangeMode::New1()
{
    LayoutTransition__ScaleChangeMode* obj1 = (LayoutTransition__ScaleChangeMode*)uNew(LayoutTransition__ScaleChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/Scrolled.ScriptClass.uno
// -----------------------------------------------------------------------------------------------

// public partial sealed class Scrolled
// {
// static Scrolled()
static void Scrolled__cctor_2_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[2/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::TYPES[30/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.Scrolled>*/], ::STRINGS[32/*"check"*/], uDelegate::New(::TYPES[31/*Uno.Action<Fuse.Triggers.Scrolled>*/], (void*)Scrolled__check_fn))));
}

static void Scrolled_build(uType* type)
{
    ::STRINGS[32] = uString::Const("check");
    ::STRINGS[33] = uString::Const("Scrolled could not find a Scrollable control.");
    ::STRINGS[34] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/Scrolled.uno");
    ::STRINGS[17] = uString::Const("OnRooted");
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[30] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[31] = ::g::Uno::Action1_typeof()->MakeType(type, NULL);
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[32] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Controls.ScrollViewBase>*/, ::g::Fuse::Controls::ScrollViewBase_typeof(), NULL);
    ::TYPES[33] = ::g::Fuse::Controls::ScrollPositionChangedHandler_typeof();
    type->SetBase(::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Fuse::Triggers::ScrolledArgs_typeof(), NULL));
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40,
        ::g::Uno::Bool_typeof(), offsetof(Scrolled, _inZone), 0,
        ::g::Fuse::Controls::ScrollViewBase_typeof(), offsetof(Scrolled, _scrollable), 0,
        ::g::Fuse::Triggers::ScrollRegion_typeof(), offsetof(Scrolled, _region), 0);
    type->Reflection.SetFunctions(7,
        new uFunction(".ctor", NULL, (void*)Scrolled__New2_fn, 0, true, type, 0),
        new uFunction("get_RelativeTo", NULL, (void*)Scrolled__get_RelativeTo_fn, 0, false, ::g::Fuse::Triggers::IScrolledLength_typeof(), 0),
        new uFunction("set_RelativeTo", NULL, (void*)Scrolled__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IScrolledLength_typeof()),
        new uFunction("get_To", NULL, (void*)Scrolled__get_To_fn, 0, false, ::g::Fuse::Triggers::ScrolledWhere_typeof(), 0),
        new uFunction("set_To", NULL, (void*)Scrolled__set_To_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::ScrolledWhere_typeof()),
        new uFunction("get_Within", NULL, (void*)Scrolled__get_Within_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Within", NULL, (void*)Scrolled__set_Within_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Triggers::Trigger_type* Scrolled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::PulseTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Scrolled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.Scrolled", options);
    type->fp_build_ = Scrolled_build;
    type->fp_ctor_ = (void*)Scrolled__New2_fn;
    type->fp_cctor_ = Scrolled__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Scrolled__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Scrolled__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated Scrolled()
void Scrolled__ctor_6_fn(Scrolled* __this)
{
    __this->ctor_6();
}

// private static void check(Fuse.Triggers.Scrolled s)
void Scrolled__check_fn(Scrolled* s)
{
    Scrolled::check(s);
}

// private void Check()
void Scrolled__Check_fn(Scrolled* __this)
{
    __this->Check();
}

// public generated Scrolled New()
void Scrolled__New2_fn(Scrolled** __retval)
{
    *__retval = Scrolled::New2();
}

// protected override sealed void OnRooted()
void Scrolled__OnRooted_fn(Scrolled* __this)
{
    uStackFrame __("Fuse.Triggers.Scrolled", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_scrollable = ((::g::Fuse::Controls::ScrollViewBase*)uPtr(__this->Parent())->FindByType(::TYPES[32/*Fuse.Node.FindByType<Fuse.Controls.ScrollViewBase>*/]));

    if (__this->_scrollable == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[33/*"Scrolled co...*/], __this, ::STRINGS[34/*"/usr/local/...*/], 35, ::STRINGS[17/*"OnRooted"*/], NULL);
        return;
    }

    uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::TYPES[33/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)Scrolled__OnScrollPositionChanged_fn, __this));
    __this->_inZone = uPtr(__this->_region)->IsInZone(__this->_scrollable);
}

// private void OnScrollPositionChanged(object s, object args)
void Scrolled__OnScrollPositionChanged_fn(Scrolled* __this, uObject* s, uObject* args)
{
    __this->OnScrollPositionChanged(s, args);
}

// protected override sealed void OnUnrooted()
void Scrolled__OnUnrooted_fn(Scrolled* __this)
{
    uStackFrame __("Fuse.Triggers.Scrolled", "OnUnrooted()");

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::TYPES[33/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)Scrolled__OnScrollPositionChanged_fn, __this));
        __this->_scrollable = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Triggers.IScrolledLength get_RelativeTo()
void Scrolled__get_RelativeTo_fn(Scrolled* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.Triggers.IScrolledLength value)
void Scrolled__set_RelativeTo_fn(Scrolled* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// public Fuse.Triggers.ScrolledWhere get_To()
void Scrolled__get_To_fn(Scrolled* __this, int32_t* __retval)
{
    *__retval = __this->To();
}

// public void set_To(Fuse.Triggers.ScrolledWhere value)
void Scrolled__set_To_fn(Scrolled* __this, int32_t* value)
{
    __this->To(*value);
}

// private void Update()
void Scrolled__Update_fn(Scrolled* __this)
{
    __this->Update();
}

// public float get_Within()
void Scrolled__get_Within_fn(Scrolled* __this, float* __retval)
{
    *__retval = __this->Within();
}

// public void set_Within(float value)
void Scrolled__set_Within_fn(Scrolled* __this, float* value)
{
    __this->Within(*value);
}

// public generated Scrolled() [instance]
void Scrolled::ctor_6()
{
    _region = ::g::Fuse::Triggers::ScrollRegion::New1();
    ctor_5();
}

// private void Check() [instance]
void Scrolled::Check()
{
    uStackFrame __("Fuse.Triggers.Scrolled", "Check()");

    if ((_scrollable != NULL) && uPtr(_region)->IsInZone(_scrollable))
        Pulse1(::g::Fuse::Triggers::ScrolledArgs::New2());
}

// private void OnScrollPositionChanged(object s, object args) [instance]
void Scrolled::OnScrollPositionChanged(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Triggers.Scrolled", "OnScrollPositionChanged(object,object)");
    bool inz = uPtr(_region)->IsInZone(_scrollable);

    if (inz == _inZone)
        return;

    _inZone = inz;

    if (_inZone)
        Pulse1(::g::Fuse::Triggers::ScrolledArgs::New2());
}

// public Fuse.Triggers.IScrolledLength get_RelativeTo() [instance]
uObject* Scrolled::RelativeTo()
{
    uStackFrame __("Fuse.Triggers.Scrolled", "get_RelativeTo()");
    return uPtr(_region)->RelativeTo;
}

// public void set_RelativeTo(Fuse.Triggers.IScrolledLength value) [instance]
void Scrolled::RelativeTo(uObject* value)
{
    uStackFrame __("Fuse.Triggers.Scrolled", "set_RelativeTo(Fuse.Triggers.IScrolledLength)");

    if (uPtr(_region)->SetRelativeTo(value))
        Update();
}

// public Fuse.Triggers.ScrolledWhere get_To() [instance]
int32_t Scrolled::To()
{
    uStackFrame __("Fuse.Triggers.Scrolled", "get_To()");
    return uPtr(_region)->To;
}

// public void set_To(Fuse.Triggers.ScrolledWhere value) [instance]
void Scrolled::To(int32_t value)
{
    uStackFrame __("Fuse.Triggers.Scrolled", "set_To(Fuse.Triggers.ScrolledWhere)");

    if (uPtr(_region)->SetTo(value))
        Update();
}

// private void Update() [instance]
void Scrolled::Update()
{
    uStackFrame __("Fuse.Triggers.Scrolled", "Update()");

    if (_scrollable != NULL)
        _inZone = uPtr(_region)->IsInZone(_scrollable);
}

// public float get_Within() [instance]
float Scrolled::Within()
{
    uStackFrame __("Fuse.Triggers.Scrolled", "get_Within()");
    return uPtr(_region)->Within;
}

// public void set_Within(float value) [instance]
void Scrolled::Within(float value)
{
    uStackFrame __("Fuse.Triggers.Scrolled", "set_Within(float)");

    if (uPtr(_region)->SetWithin(value))
        Update();
}

// private static void check(Fuse.Triggers.Scrolled s) [static]
void Scrolled::check(Scrolled* s)
{
    uStackFrame __("Fuse.Triggers.Scrolled", "check(Fuse.Triggers.Scrolled)");
    Scrolled_typeof()->Init();
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Scrolled__Check_fn, uPtr(s)), 1, 5);
}

// public generated Scrolled New() [static]
Scrolled* Scrolled::New2()
{
    Scrolled* obj1 = (Scrolled*)uNew(Scrolled_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/Scrolled.uno
// -----------------------------------------------------------------------------------

// public sealed class ScrolledArgs
// {
static void ScrolledArgs_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrolledArgs__New2_fn, 0, true, type, 0));
}

uType* ScrolledArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.ObjectSize = sizeof(ScrolledArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.ScrolledArgs", options);
    type->fp_build_ = ScrolledArgs_build;
    type->fp_ctor_ = (void*)ScrolledArgs__New2_fn;
    return type;
}

// public generated ScrolledArgs()
void ScrolledArgs__ctor_1_fn(ScrolledArgs* __this)
{
    __this->ctor_1();
}

// public generated ScrolledArgs New()
void ScrolledArgs__New2_fn(ScrolledArgs** __retval)
{
    *__retval = ScrolledArgs::New2();
}

// public generated ScrolledArgs() [instance]
void ScrolledArgs::ctor_1()
{
    ctor_();
}

// public generated ScrolledArgs New() [static]
ScrolledArgs* ScrolledArgs::New2()
{
    ScrolledArgs* obj1 = (ScrolledArgs*)uNew(ScrolledArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/ScrollRegion.uno
// ---------------------------------------------------------------------------------------

// public enum ScrolledWhere
uEnumType* ScrolledWhere_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.ScrolledWhere", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Start", 1LL,
        "End", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/ScrollingAnimation.uno
// ---------------------------------------------------------------------------------------------

// public class ScrollingAnimation
// {
// static generated ScrollingAnimation()
static void ScrollingAnimation__cctor_2_fn(uType* __type)
{
    ScrollingAnimation::_scrollPositionName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[35/*"ScrollPosit...*/]);
}

static void ScrollingAnimation_build(uType* type)
{
    ::STRINGS[35] = uString::Const("ScrollPosition");
    ::TYPES[34] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Controls.ScrollView>*/, ::g::Fuse::Controls::ScrollView_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ScrollingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(ScrollingAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(ScrollingAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(ScrollingAnimation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(ScrollingAnimation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ScrollingAnimation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ScrollingAnimation_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(ScrollingAnimation_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(ScrollingAnimation_type, interface8),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(ScrollingAnimation_type, interface9));
    type->SetFields(39,
        ::g::Uno::Bool_typeof(), offsetof(ScrollingAnimation, _hasScrollDirections), 0,
        ::g::Fuse::Controls::ScrollDirections_typeof(), offsetof(ScrollingAnimation, _scrollDirections), 0,
        ::g::Uno::Bool_typeof(), offsetof(ScrollingAnimation, _hasRange), 0,
        ::g::Fuse::Triggers::ScrollingAnimationRange_typeof(), offsetof(ScrollingAnimation, _range), 0,
        ::g::Uno::Float_typeof(), offsetof(ScrollingAnimation, _from), 0,
        ::g::Uno::Float_typeof(), offsetof(ScrollingAnimation, _to), 0,
        ::g::Uno::Bool_typeof(), offsetof(ScrollingAnimation, _hasFrom), 0,
        ::g::Uno::Bool_typeof(), offsetof(ScrollingAnimation, _hasTo), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(ScrollingAnimation, _scrollable), 0,
        ::g::Uno::Bool_typeof(), offsetof(ScrollingAnimation, _Inverse), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ScrollingAnimation::_scrollPositionName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(11,
        new uFunction("get_From", NULL, (void*)ScrollingAnimation__get_From_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_From", NULL, (void*)ScrollingAnimation__set_From_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Inverse", NULL, (void*)ScrollingAnimation__get_Inverse_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Inverse", NULL, (void*)ScrollingAnimation__set_Inverse_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollingAnimation__New2_fn, 0, true, type, 0),
        new uFunction("get_Range", NULL, (void*)ScrollingAnimation__get_Range_fn, 0, false, ::g::Fuse::Triggers::ScrollingAnimationRange_typeof(), 0),
        new uFunction("set_Range", NULL, (void*)ScrollingAnimation__set_Range_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::ScrollingAnimationRange_typeof()),
        new uFunction("get_ScrollDirections", NULL, (void*)ScrollingAnimation__get_ScrollDirections_fn, 0, false, ::g::Fuse::Controls::ScrollDirections_typeof(), 0),
        new uFunction("set_ScrollDirections", NULL, (void*)ScrollingAnimation__set_ScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollDirections_typeof()),
        new uFunction("get_To", NULL, (void*)ScrollingAnimation__get_To_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_To", NULL, (void*)ScrollingAnimation__set_To_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

ScrollingAnimation_type* ScrollingAnimation_typeof()
{
    static uSStrong<ScrollingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 50;
    options.InterfaceCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ScrollingAnimation);
    options.TypeSize = sizeof(ScrollingAnimation_type);
    type = (ScrollingAnimation_type*)uClassType::New("Fuse.Triggers.ScrollingAnimation", options);
    type->fp_build_ = ScrollingAnimation_build;
    type->fp_ctor_ = (void*)ScrollingAnimation__New2_fn;
    type->fp_cctor_ = ScrollingAnimation__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ScrollingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ScrollingAnimation__OnUnrooted_fn;
    type->interface9.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))ScrollingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated ScrollingAnimation()
void ScrollingAnimation__ctor_5_fn(ScrollingAnimation* __this)
{
    __this->ctor_5();
}

// public float get_From()
void ScrollingAnimation__get_From_fn(ScrollingAnimation* __this, float* __retval)
{
    *__retval = __this->From();
}

// public void set_From(float value)
void ScrollingAnimation__set_From_fn(ScrollingAnimation* __this, float* value)
{
    __this->From(*value);
}

// public generated bool get_Inverse()
void ScrollingAnimation__get_Inverse_fn(ScrollingAnimation* __this, bool* __retval)
{
    *__retval = __this->Inverse();
}

// public generated void set_Inverse(bool value)
void ScrollingAnimation__set_Inverse_fn(ScrollingAnimation* __this, bool* value)
{
    __this->Inverse(*value);
}

// public generated ScrollingAnimation New()
void ScrollingAnimation__New2_fn(ScrollingAnimation** __retval)
{
    *__retval = ScrollingAnimation::New2();
}

// private double get_OffsetScrollProgress()
void ScrollingAnimation__get_OffsetScrollProgress_fn(ScrollingAnimation* __this, double* __retval)
{
    *__retval = __this->OffsetScrollProgress();
}

// protected override void OnRooted()
void ScrollingAnimation__OnRooted_fn(ScrollingAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_scrollable = ((::g::Fuse::Controls::ScrollView*)uPtr(__this->Parent())->FindByType(::TYPES[34/*Fuse.Node.FindByType<Fuse.Controls.ScrollView>*/]));

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->AddPropertyListener((uObject*)__this);
        __this->BypassSeek(__this->OffsetScrollProgress(), 0);
    }
}

// protected override void OnUnrooted()
void ScrollingAnimation__OnUnrooted_fn(ScrollingAnimation* __this)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "OnUnrooted()");

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->RemovePropertyListener((uObject*)__this);
        __this->_scrollable = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Triggers.ScrollingAnimationRange get_Range()
void ScrollingAnimation__get_Range_fn(ScrollingAnimation* __this, int32_t* __retval)
{
    *__retval = __this->Range();
}

// public void set_Range(Fuse.Triggers.ScrollingAnimationRange value)
void ScrollingAnimation__set_Range_fn(ScrollingAnimation* __this, int32_t* value)
{
    __this->Range(*value);
}

// public Fuse.Controls.ScrollDirections get_ScrollDirections()
void ScrollingAnimation__get_ScrollDirections_fn(ScrollingAnimation* __this, int32_t* __retval)
{
    *__retval = __this->ScrollDirections();
}

// public void set_ScrollDirections(Fuse.Controls.ScrollDirections value)
void ScrollingAnimation__set_ScrollDirections_fn(ScrollingAnimation* __this, int32_t* value)
{
    __this->ScrollDirections(*value);
}

// public float get_To()
void ScrollingAnimation__get_To_fn(ScrollingAnimation* __this, float* __retval)
{
    *__retval = __this->To();
}

// public void set_To(float value)
void ScrollingAnimation__set_To_fn(ScrollingAnimation* __this, float* value)
{
    __this->To(*value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop)
void ScrollingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn(ScrollingAnimation* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((obj == __this->_scrollable) && ::g::Uno::UX::Selector__op_Equality(prop_, ScrollingAnimation::_scrollPositionName_))
        __this->Seek(__this->OffsetScrollProgress(), 0);
}

::g::Uno::UX::Selector ScrollingAnimation::_scrollPositionName_;

// public generated ScrollingAnimation() [instance]
void ScrollingAnimation::ctor_5()
{
    _scrollDirections = 12;
    ctor_4();
}

// public float get_From() [instance]
float ScrollingAnimation::From()
{
    return _from;
}

// public void set_From(float value) [instance]
void ScrollingAnimation::From(float value)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "set_From(float)");
    _from = value;
    _hasFrom = true;

    if (!_hasRange)
        _range = 3;

    if (_scrollable != NULL)
        BypassSeek(OffsetScrollProgress(), 0);
}

// public generated bool get_Inverse() [instance]
bool ScrollingAnimation::Inverse()
{
    return _Inverse;
}

// public generated void set_Inverse(bool value) [instance]
void ScrollingAnimation::Inverse(bool value)
{
    _Inverse = value;
}

// private double get_OffsetScrollProgress() [instance]
double ScrollingAnimation::OffsetScrollProgress()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_OffsetScrollProgress()");
    ::g::Uno::Float2 from, to;

    if (Range() == 1)
    {
        from = uPtr(_scrollable)->MinScroll();
        to = uPtr(_scrollable)->MinOverflow();
    }
    else if (Range() == 2)
    {
        from = uPtr(_scrollable)->MaxScroll();
        to = uPtr(_scrollable)->MaxOverflow();
    }
    else
    {
        from = _hasFrom ? ::g::Uno::Float2__New1(From()) : uPtr(_scrollable)->MinScroll();
        to = _hasTo ? ::g::Uno::Float2__New1(To()) : uPtr(_scrollable)->MaxScroll();
    }

    ::g::Uno::Float2 range2 = ::g::Uno::Float2__op_Subtraction2(to, from);
    float at = uPtr(_scrollable)->ToScalarPosition(::g::Uno::Float2__op_Subtraction2(uPtr(_scrollable)->ScrollPosition(), from));
    float range = uPtr(_scrollable)->ToScalarPosition(range2);
    float zeroTolerance = 1e-05f;

    if (::g::Uno::Math::Abs1(range) < 1e-05f)
        return 0.0;

    float p = ::g::Uno::Math::Clamp1(at / range, 0.0f, 1.0f);
    return (double)(Inverse() ? 1.0f - p : p);
}

// public Fuse.Triggers.ScrollingAnimationRange get_Range() [instance]
int32_t ScrollingAnimation::Range()
{
    return _range;
}

// public void set_Range(Fuse.Triggers.ScrollingAnimationRange value) [instance]
void ScrollingAnimation::Range(int32_t value)
{
    _range = value;
    _hasRange = true;
}

// public Fuse.Controls.ScrollDirections get_ScrollDirections() [instance]
int32_t ScrollingAnimation::ScrollDirections()
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "get_ScrollDirections()");

    if (_hasScrollDirections || (_scrollable == NULL))
        return _scrollDirections;

    int32_t d = uPtr(_scrollable)->AllowedScrollDirections();

    if (d == 3)
        return 3;

    return 12;
}

// public void set_ScrollDirections(Fuse.Controls.ScrollDirections value) [instance]
void ScrollingAnimation::ScrollDirections(int32_t value)
{
    _hasScrollDirections = true;
    _scrollDirections = value;
}

// public float get_To() [instance]
float ScrollingAnimation::To()
{
    return _to;
}

// public void set_To(float value) [instance]
void ScrollingAnimation::To(float value)
{
    uStackFrame __("Fuse.Triggers.ScrollingAnimation", "set_To(float)");
    _to = value;
    _hasTo = true;

    if (!_hasRange)
        _range = 3;

    if (_scrollable != NULL)
        BypassSeek(OffsetScrollProgress(), 0);
}

// public generated ScrollingAnimation New() [static]
ScrollingAnimation* ScrollingAnimation::New2()
{
    ScrollingAnimation* obj1 = (ScrollingAnimation*)uNew(ScrollingAnimation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/ScrollingAnimation.uno
// ---------------------------------------------------------------------------------------------

// public enum ScrollingAnimationRange
uEnumType* ScrollingAnimationRange_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.ScrollingAnimationRange", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Standard", 0LL,
        "SnapStart", 1LL,
        "SnapEnd", 2LL,
        "Explicit", 3LL,
        "SnapMin", 1LL,
        "SnapMax", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/ScrollRegion.uno
// ---------------------------------------------------------------------------------------

// internal sealed class ScrollRegion
// {
static void ScrollRegion_build(uType* type)
{
    ::TYPES[35] = ::g::Fuse::Triggers::IScrolledLength_typeof();
    type->SetDependencies(
        ::g::Fuse::Triggers::IScrolledLengths_typeof());
    type->SetFields(0,
        ::g::Fuse::Triggers::ScrolledWhere_typeof(), offsetof(ScrollRegion, To), 0,
        ::g::Uno::Float_typeof(), offsetof(ScrollRegion, Within), 0,
        ::TYPES[35/*Fuse.Triggers.IScrolledLength*/], offsetof(ScrollRegion, RelativeTo), 0);
}

uType* ScrollRegion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ScrollRegion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.ScrollRegion", options);
    type->fp_build_ = ScrollRegion_build;
    type->fp_ctor_ = (void*)ScrollRegion__New1_fn;
    return type;
}

// public generated ScrollRegion()
void ScrollRegion__ctor__fn(ScrollRegion* __this)
{
    __this->ctor_();
}

// private float2 CalcWithin(Fuse.Controls.ScrollViewBase scrollable)
void ScrollRegion__CalcWithin_fn(ScrollRegion* __this, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcWithin(scrollable);
}

// public bool IsInZone(Fuse.Controls.ScrollViewBase scrollable)
void ScrollRegion__IsInZone_fn(ScrollRegion* __this, ::g::Fuse::Controls::ScrollViewBase* scrollable, bool* __retval)
{
    *__retval = __this->IsInZone(scrollable);
}

// public generated ScrollRegion New()
void ScrollRegion__New1_fn(ScrollRegion** __retval)
{
    *__retval = ScrollRegion::New1();
}

// public bool SetRelativeTo(Fuse.Triggers.IScrolledLength value)
void ScrollRegion__SetRelativeTo_fn(ScrollRegion* __this, uObject* value, bool* __retval)
{
    *__retval = __this->SetRelativeTo(value);
}

// public bool SetTo(Fuse.Triggers.ScrolledWhere value)
void ScrollRegion__SetTo_fn(ScrollRegion* __this, int32_t* value, bool* __retval)
{
    *__retval = __this->SetTo(*value);
}

// public bool SetWithin(float value)
void ScrollRegion__SetWithin_fn(ScrollRegion* __this, float* value, bool* __retval)
{
    *__retval = __this->SetWithin(*value);
}

// public generated ScrollRegion() [instance]
void ScrollRegion::ctor_()
{
    RelativeTo = ::g::Fuse::Triggers::IScrolledLengths::Points();
}

// private float2 CalcWithin(Fuse.Controls.ScrollViewBase scrollable) [instance]
::g::Uno::Float2 ScrollRegion::CalcWithin(::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    uStackFrame __("Fuse.Triggers.ScrollRegion", "CalcWithin(Fuse.Controls.ScrollViewBase)");
    return ::g::Fuse::Triggers::IScrolledLength::GetPoints(uInterface(uPtr(RelativeTo), ::TYPES[35/*Fuse.Triggers.IScrolledLength*/]), Within, scrollable);
}

// public bool IsInZone(Fuse.Controls.ScrollViewBase scrollable) [instance]
bool ScrollRegion::IsInZone(::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    uStackFrame __("Fuse.Triggers.ScrollRegion", "IsInZone(Fuse.Controls.ScrollViewBase)");
    ::g::Uno::Float2 w = CalcWithin(scrollable);
    float sw = uPtr(scrollable)->ToScalarPosition(w);
    float sp = scrollable->ToScalarPosition(scrollable->ScrollPosition());

    switch (To)
    {
        case 0:
            return false;
        case 1:
        {
            float smin = uPtr(scrollable)->ToScalarPosition(uPtr(scrollable)->MinScroll());
            return sp <= (smin + sw);
        }
        case 2:
        {
            float smax = uPtr(scrollable)->ToScalarPosition(uPtr(scrollable)->MaxScroll());
            return sp >= (smax - sw);
        }
    }

    return false;
}

// public bool SetRelativeTo(Fuse.Triggers.IScrolledLength value) [instance]
bool ScrollRegion::SetRelativeTo(uObject* value)
{
    if (RelativeTo == value)
        return false;

    RelativeTo = value;
    return true;
}

// public bool SetTo(Fuse.Triggers.ScrolledWhere value) [instance]
bool ScrollRegion::SetTo(int32_t value)
{
    if (To == value)
        return false;

    To = value;
    return true;
}

// public bool SetWithin(float value) [instance]
bool ScrollRegion::SetWithin(float value)
{
    if (Within == value)
        return false;

    Within = value;
    return true;
}

// public generated ScrollRegion New() [static]
ScrollRegion* ScrollRegion::New1()
{
    ScrollRegion* obj1 = (ScrollRegion*)uNew(ScrollRegion_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/ScrollRegion.uno
// ---------------------------------------------------------------------------------------

// private sealed class IScrolledLengths.ScrollViewSizeLength
// {
static void IScrolledLengths__ScrollViewSizeLength_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Triggers::IScrolledLength_typeof(), offsetof(IScrolledLengths__ScrollViewSizeLength_type, interface0));
}

IScrolledLengths__ScrollViewSizeLength_type* IScrolledLengths__ScrollViewSizeLength_typeof()
{
    static uSStrong<IScrolledLengths__ScrollViewSizeLength_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IScrolledLengths__ScrollViewSizeLength);
    options.TypeSize = sizeof(IScrolledLengths__ScrollViewSizeLength_type);
    type = (IScrolledLengths__ScrollViewSizeLength_type*)uClassType::New("Fuse.Triggers.IScrolledLengths.ScrollViewSizeLength", options);
    type->fp_build_ = IScrolledLengths__ScrollViewSizeLength_build;
    type->fp_ctor_ = (void*)IScrolledLengths__ScrollViewSizeLength__New1_fn;
    type->interface0.fp_GetPoints = (void(*)(uObject*, float*, ::g::Fuse::Controls::ScrollViewBase*, ::g::Uno::Float2*))IScrolledLengths__ScrollViewSizeLength__GetPoints_fn;
    return type;
}

// public generated ScrollViewSizeLength()
void IScrolledLengths__ScrollViewSizeLength__ctor__fn(IScrolledLengths__ScrollViewSizeLength* __this)
{
    __this->ctor_();
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable)
void IScrolledLengths__ScrollViewSizeLength__GetPoints_fn(IScrolledLengths__ScrollViewSizeLength* __this, float* value, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPoints(*value, scrollable);
}

// public generated ScrollViewSizeLength New()
void IScrolledLengths__ScrollViewSizeLength__New1_fn(IScrolledLengths__ScrollViewSizeLength** __retval)
{
    *__retval = IScrolledLengths__ScrollViewSizeLength::New1();
}

// public generated ScrollViewSizeLength() [instance]
void IScrolledLengths__ScrollViewSizeLength::ctor_()
{
}

// public float2 GetPoints(float value, Fuse.Controls.ScrollViewBase scrollable) [instance]
::g::Uno::Float2 IScrolledLengths__ScrollViewSizeLength::GetPoints(float value, ::g::Fuse::Controls::ScrollViewBase* scrollable)
{
    uStackFrame __("Fuse.Triggers.IScrolledLengths.ScrollViewSizeLength", "GetPoints(float,Fuse.Controls.ScrollViewBase)");
    return ::g::Uno::Float2__op_Multiply(value, uPtr(scrollable)->ActualSize());
}

// public generated ScrollViewSizeLength New() [static]
IScrolledLengths__ScrollViewSizeLength* IScrolledLengths__ScrollViewSizeLength::New1()
{
    IScrolledLengths__ScrollViewSizeLength* obj1 = (IScrolledLengths__ScrollViewSizeLength*)uNew(IScrolledLengths__ScrollViewSizeLength_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Timeline.uno
// ---------------------------------------------------------------

// private enum Timeline.State
uEnumType* Timeline__State_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Timeline.State", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Play", 0LL,
        "Stop", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/State.ScriptClass.uno
// ------------------------------------------------------------------------

// public partial sealed class State
// {
// static State()
static void State__cctor_2_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[2/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::TYPES[36/*Fuse.Scripting.ScriptMethod<Fuse.Triggers.State>*/], ::STRINGS[36/*"goto"*/], uDelegate::New(::TYPES[37/*Uno.Action<Fuse.Triggers.State>*/], (void*)State__goto__fn))));
}

static void State_build(uType* type)
{
    ::STRINGS[36] = uString::Const("goto");
    ::STRINGS[37] = uString::Const("Cannot call `Goto` on an unrooted `State`");
    ::STRINGS[38] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/State.uno");
    ::STRINGS[39] = uString::Const("Goto");
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[36] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[37] = ::g::Uno::Action1_typeof()->MakeType(type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        ::g::Uno::Bool_typeof(), offsetof(State, _on), 0,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(State, _stateGroup), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Goto", NULL, (void*)State__Goto_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)State__New2_fn, 0, true, type, 0),
        new uFunction("get_Progress", NULL, (void*)State__get_Progress1_fn, 0, false, ::g::Uno::Double_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* State_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(State);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.State", options);
    type->fp_build_ = State_build;
    type->fp_ctor_ = (void*)State__New2_fn;
    type->fp_cctor_ = State__cctor_2_fn;
    type->fp_OnPlayStateChanged = (void(*)(::g::Fuse::Triggers::Trigger*, int32_t*))State__OnPlayStateChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))State__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))State__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated State()
void State__ctor_5_fn(State* __this)
{
    __this->ctor_5();
}

// public void Goto()
void State__Goto_fn(State* __this)
{
    __this->Goto();
}

// private static void goto_(Fuse.Triggers.State n)
void State__goto__fn(State* n)
{
    State::goto_(n);
}

// public generated State New()
void State__New2_fn(State** __retval)
{
    *__retval = State::New2();
}

// internal bool get_On()
void State__get_On_fn(State* __this, bool* __retval)
{
    *__retval = __this->On();
}

// internal void set_On(bool value)
void State__set_On_fn(State* __this, bool* value)
{
    __this->On(*value);
}

// protected override sealed void OnPlayStateChanged(Fuse.Triggers.TriggerPlayState state)
void State__OnPlayStateChanged_fn(State* __this, int32_t* state)
{
    uStackFrame __("Fuse.Triggers.State", "OnPlayStateChanged(Fuse.Triggers.TriggerPlayState)");
    int32_t state_ = *state;

    if ((__this->_stateGroup != NULL) && (state_ == 0))
        uPtr(__this->_stateGroup)->StateStopped();
}

// protected override sealed void OnRooted()
void State__OnRooted_fn(State* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (__this->_on)
        __this->Activate(NULL);
}

// protected override sealed void OnUnrooted()
void State__OnUnrooted_fn(State* __this)
{
    if (__this->OverrideContextParent == __this->_stateGroup)
        __this->OverrideContextParent = NULL;

    __this->_stateGroup = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public new double get_Progress()
void State__get_Progress1_fn(State* __this, double* __retval)
{
    *__retval = __this->Progress1();
}

// internal void RootStateGroup(Fuse.Triggers.StateGroup stateGroup)
void State__RootStateGroup_fn(State* __this, ::g::Fuse::Triggers::StateGroup* stateGroup)
{
    __this->RootStateGroup(stateGroup);
}

// public generated State() [instance]
void State::ctor_5()
{
    ctor_4();
}

// public void Goto() [instance]
void State::Goto()
{
    uStackFrame __("Fuse.Triggers.State", "Goto()");

    if (_stateGroup == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[37/*"Cannot call...*/], NULL, ::STRINGS[38/*"/usr/local/...*/], 62, ::STRINGS[39/*"Goto"*/]);
        return;
    }

    uPtr(_stateGroup)->Goto(this);
}

// internal bool get_On() [instance]
bool State::On()
{
    return _on;
}

// internal void set_On(bool value) [instance]
void State::On(bool value)
{
    if (_on == value)
        return;

    _on = value;

    if (Parent() != NULL)
    {
        if (_on)
            Activate(NULL);
        else
            Deactivate();
    }
}

// public new double get_Progress() [instance]
double State::Progress1()
{
    uStackFrame __("Fuse.Triggers.State", "get_Progress()");
    return Progress();
}

// internal void RootStateGroup(Fuse.Triggers.StateGroup stateGroup) [instance]
void State::RootStateGroup(::g::Fuse::Triggers::StateGroup* stateGroup)
{
    ::g::Fuse::Node* ind1;
    OverrideContextParent = (ind1 = OverrideContextParent, ((ind1 != NULL) ? ind1 : stateGroup));
    _stateGroup = stateGroup;
}

// private static void goto_(Fuse.Triggers.State n) [static]
void State::goto_(State* n)
{
    uStackFrame __("Fuse.Triggers.State", "goto_(Fuse.Triggers.State)");
    State_typeof()->Init();
    uPtr(n)->Goto();
}

// public generated State New() [static]
State* State::New2()
{
    State* obj2 = (State*)uNew(State_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/StateGroup.ScriptClass.uno
// -----------------------------------------------------------------------------

// public partial sealed class StateGroup
// {
// static StateGroup()
static void StateGroup__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[2/*Fuse.Scripting.ScriptMember[]*/], 2, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), ::STRINGS[36/*"goto"*/], uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, uObject_typeof()->Array(), NULL), (void*)StateGroup__goto__fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("gotoNext"), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(__type, NULL), (void*)StateGroup__gotoNext_fn))));
}

static void StateGroup_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(18,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof(), NULL), offsetof(StateGroup, _states), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(StateGroup, _active), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(StateGroup, _rest), 0,
        ::g::Fuse::Triggers::StateTransition_typeof(), offsetof(StateGroup, _transition), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Active", NULL, (void*)StateGroup__get_Active_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Active", NULL, (void*)StateGroup__set_Active_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("FindObjectByName", NULL, (void*)StateGroup__FindObjectByName_fn, 0, false, uObject_typeof(), 2, ::g::Uno::UX::Selector_typeof(), ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL)),
        new uFunction("GotoNextState", NULL, (void*)StateGroup__GotoNextState_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)StateGroup__New2_fn, 0, true, type, 0),
        new uFunction("get_Rest", NULL, (void*)StateGroup__get_Rest_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Rest", NULL, (void*)StateGroup__set_Rest_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("get_States", NULL, (void*)StateGroup__get_States_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof(), NULL), 0),
        new uFunction("get_Transition", NULL, (void*)StateGroup__get_Transition_fn, 0, false, ::g::Fuse::Triggers::StateTransition_typeof(), 0),
        new uFunction("set_Transition", NULL, (void*)StateGroup__set_Transition_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::StateTransition_typeof()));
}

::g::Fuse::Node_type* StateGroup_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(StateGroup);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Triggers.StateGroup", options);
    type->fp_build_ = StateGroup_build;
    type->fp_ctor_ = (void*)StateGroup__New2_fn;
    type->fp_cctor_ = StateGroup__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))StateGroup__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))StateGroup__OnUnrooted_fn;
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

// public generated StateGroup()
void StateGroup__ctor_3_fn(StateGroup* __this)
{
    __this->ctor_3();
}

// public Fuse.Triggers.State get_Active()
void StateGroup__get_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Active();
}

// public void set_Active(Fuse.Triggers.State value)
void StateGroup__set_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Active(value);
}

// private int get_ActiveIndex()
void StateGroup__get_ActiveIndex_fn(StateGroup* __this, int32_t* __retval)
{
    *__retval = __this->ActiveIndex();
}

// private void set_ActiveIndex(int value)
void StateGroup__set_ActiveIndex_fn(StateGroup* __this, int32_t* value)
{
    __this->ActiveIndex(*value);
}

// private void CheckAllDone()
void StateGroup__CheckAllDone_fn(StateGroup* __this)
{
    __this->CheckAllDone();
}

// public object FindObjectByName(Uno.UX.Selector name, Uno.Predicate<object> acceptor)
void StateGroup__FindObjectByName_fn(StateGroup* __this, ::g::Uno::UX::Selector* name, uDelegate* acceptor, uObject** __retval)
{
    *__retval = __this->FindObjectByName(*name, acceptor);
}

// internal void Goto(Fuse.Triggers.State next)
void StateGroup__Goto_fn(StateGroup* __this, ::g::Fuse::Triggers::State* next)
{
    __this->Goto(next);
}

// private static void goto_(Fuse.Triggers.StateGroup n, object[] args)
void StateGroup__goto__fn(StateGroup* n, uArray* args)
{
    StateGroup::goto_(n, args);
}

// private static void gotoName(Fuse.Triggers.StateGroup n, string name)
void StateGroup__gotoName_fn(StateGroup* n, uString* name)
{
    StateGroup::gotoName(n, name);
}

// private static void gotoNext(Fuse.Triggers.StateGroup n)
void StateGroup__gotoNext_fn(StateGroup* n)
{
    StateGroup::gotoNext(n);
}

// public void GotoNextState()
void StateGroup__GotoNextState_fn(StateGroup* __this)
{
    __this->GotoNextState();
}

// public generated StateGroup New()
void StateGroup__New2_fn(StateGroup** __retval)
{
    *__retval = StateGroup::New2();
}

// protected override sealed void OnRooted()
void StateGroup__OnRooted_fn(StateGroup* __this)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "OnRooted()");
    ::g::Fuse::Triggers::State* ret10;
    ::g::Fuse::Triggers::State* ret11;
    ::g::Fuse::Node__OnRooted_fn(__this);

    if ((__this->_active == NULL) && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->_states), ::TYPES[25/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])) > 0))
        __this->_active = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->_states), ::TYPES[26/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int32_t>(0), &ret10), ret10);

    uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::TYPES[11/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[12/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[13/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret11), ret11);
                    uPtr(state)->On(state == __this->_active);
                    state->RootStateGroup(__this);
                    uPtr(__this->Parent())->Add1(state);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum3), ::TYPES[14/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum3), ::TYPES[14/*Uno.IDisposable*/]));
        }
        __after_finally_2:;
    }
}

// protected override sealed void OnUnrooted()
void StateGroup__OnUnrooted_fn(StateGroup* __this)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "OnUnrooted()");
    ::g::Fuse::Triggers::State* ret12;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
    uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::TYPES[11/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[12/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[13/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret12), ret12);
                    uPtr(__this->Parent())->Remove1(state);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[14/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_3;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[14/*Uno.IDisposable*/]));
        }
        __after_finally_3:;
    }
}

// public Fuse.Triggers.State get_Rest()
void StateGroup__get_Rest_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Rest();
}

// public void set_Rest(Fuse.Triggers.State value)
void StateGroup__set_Rest_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Rest(value);
}

// private static bool StateAcceptor(object o)
void StateGroup__StateAcceptor_fn(uObject* o, bool* __retval)
{
    *__retval = StateGroup::StateAcceptor(o);
}

// public Uno.Collections.IList<Fuse.Triggers.State> get_States()
void StateGroup__get_States_fn(StateGroup* __this, uObject** __retval)
{
    *__retval = __this->States();
}

// internal void StateStopped()
void StateGroup__StateStopped_fn(StateGroup* __this)
{
    __this->StateStopped();
}

// public Fuse.Triggers.StateTransition get_Transition()
void StateGroup__get_Transition_fn(StateGroup* __this, int32_t* __retval)
{
    *__retval = __this->Transition();
}

// public void set_Transition(Fuse.Triggers.StateTransition value)
void StateGroup__set_Transition_fn(StateGroup* __this, int32_t* value)
{
    __this->Transition(*value);
}

// public generated StateGroup() [instance]
void StateGroup::ctor_3()
{
    uStackFrame __("Fuse.Triggers.StateGroup", ".ctor()");
    _states = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::State_typeof(), NULL)));
    ctor_2();
}

// public Fuse.Triggers.State get_Active() [instance]
::g::Fuse::Triggers::State* StateGroup::Active()
{
    return _active;
}

// public void set_Active(Fuse.Triggers.State value) [instance]
void StateGroup::Active(::g::Fuse::Triggers::State* value)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "set_Active(Fuse.Triggers.State)");

    if (value != _active)
        Goto(value);
}

// private int get_ActiveIndex() [instance]
int32_t StateGroup::ActiveIndex()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "get_ActiveIndex()");
    ::g::Fuse::Triggers::State* ret13;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(States()), ::TYPES[25/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])); ++i)
        if (_active == (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(States()), ::TYPES[26/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int32_t>(i), &ret13), ret13))
            return i;

    return -1;
}

// private void set_ActiveIndex(int value) [instance]
void StateGroup::ActiveIndex(int32_t value)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "set_ActiveIndex(int)");
    ::g::Fuse::Triggers::State* ret14;
    Active((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_states), ::TYPES[26/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int32_t>(value), &ret14), ret14));
}

// private void CheckAllDone() [instance]
void StateGroup::CheckAllDone()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "CheckAllDone()");
    ::g::Fuse::Triggers::State* ret7;
    bool all = true;
    uObject* enum5 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::TYPES[11/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::TYPES[12/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[13/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret7), ret7);

                    if (uPtr(state)->Progress1() > 0.0)
                        all = false;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum5), ::TYPES[14/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_4;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum5), ::TYPES[14/*Uno.IDisposable*/]));
        }
        __after_finally_4:;
    }

    if (all && (_active != NULL))
        uPtr(_active)->On(true);
}

// public object FindObjectByName(Uno.UX.Selector name, Uno.Predicate<object> acceptor) [instance]
uObject* StateGroup::FindObjectByName(::g::Uno::UX::Selector name, uDelegate* acceptor)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "FindObjectByName(Uno.UX.Selector,Uno.Predicate<object>)");
    ::g::Fuse::Triggers::State* ret8;
    bool ret9;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(States()), ::TYPES[11/*Uno.Collections.IEnumerable<Fuse.Triggers.State>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[12/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Fuse::Triggers::State* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[13/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret8), ret8);

                    if (::g::Uno::UX::Selector__op_Equality(uPtr(s)->Name(), name) && (uPtr(acceptor)->Invoke(&ret9, 1, s), ret9))
                    {
                        uObject* __uno_retval = s;
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[14/*Uno.IDisposable*/]));
                        return __uno_retval;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[14/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_5;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[14/*Uno.IDisposable*/]));
        }
        __after_finally_5:;
    }

    return NULL;
}

// internal void Goto(Fuse.Triggers.State next) [instance]
void StateGroup::Goto(::g::Fuse::Triggers::State* next)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "Goto(Fuse.Triggers.State)");
    StateGroup__GotoImpl* collection4;
    _active = next;
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)StateGroup__GotoImpl__Go_fn, uPtr((collection4 = StateGroup__GotoImpl::New1(), uPtr(collection4)->Next = next, uPtr(collection4)->Group = this, collection4))), -1, 2);
}

// public void GotoNextState() [instance]
void StateGroup::GotoNextState()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "GotoNextState()");
    ActiveIndex((ActiveIndex() + 1) % ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_states), ::TYPES[25/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])));
}

// public Fuse.Triggers.State get_Rest() [instance]
::g::Fuse::Triggers::State* StateGroup::Rest()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "get_Rest()");
    ::g::Fuse::Triggers::State* ret15;

    if (_rest != NULL)
        return _rest;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_states), ::TYPES[25/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])) > 0)
        return (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_states), ::TYPES[26/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int32_t>(0), &ret15), ret15);

    return NULL;
}

// public void set_Rest(Fuse.Triggers.State value) [instance]
void StateGroup::Rest(::g::Fuse::Triggers::State* value)
{
    _rest = value;
}

// public Uno.Collections.IList<Fuse.Triggers.State> get_States() [instance]
uObject* StateGroup::States()
{
    return _states;
}

// internal void StateStopped() [instance]
void StateGroup::StateStopped()
{
    uStackFrame __("Fuse.Triggers.StateGroup", "StateStopped()");

    if (Transition() == 1)
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)StateGroup__CheckAllDone_fn, this), -1, 2);
}

// public Fuse.Triggers.StateTransition get_Transition() [instance]
int32_t StateGroup::Transition()
{
    return _transition;
}

// public void set_Transition(Fuse.Triggers.StateTransition value) [instance]
void StateGroup::Transition(int32_t value)
{
    _transition = value;
}

// private static void goto_(Fuse.Triggers.StateGroup n, object[] args) [static]
void StateGroup::goto_(StateGroup* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "goto_(Fuse.Triggers.StateGroup,object[])");
    StateGroup_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("StateGroup.goto requires 1 argument"), n, uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/StateGroup.ScriptClass.uno"), 48, uString::Const("goto_"), NULL);
        return;
    }

    if (uIs((uObject*)uPtr(args)->Strong<uObject*>(0), ::g::Uno::String_typeof()))
        StateGroup::gotoName(n, uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::g::Uno::String_typeof()));
    else
        uPtr(n)->Goto(uAs< ::g::Fuse::Triggers::State*>(uPtr(args)->Strong<uObject*>(0), ::g::Fuse::Triggers::State_typeof()));
}

// private static void gotoName(Fuse.Triggers.StateGroup n, string name) [static]
void StateGroup::gotoName(StateGroup* n, uString* name)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "gotoName(Fuse.Triggers.StateGroup,string)");
    StateGroup_typeof()->Init();
    ::g::Fuse::Triggers::State* state = uAs< ::g::Fuse::Triggers::State*>(uPtr(n)->FindObjectByName(::g::Uno::UX::Selector__op_Implicit(name), uDelegate::New(::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL), (void*)StateGroup__StateAcceptor_fn)), ::g::Fuse::Triggers::State_typeof());

    if (state == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(uString::Const("Unable to find State with Name: "), name), n, uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/StateGroup.ScriptClass.uno"), 28, uString::Const("gotoName"), NULL);
        return;
    }

    n->Goto(state);
}

// private static void gotoNext(Fuse.Triggers.StateGroup n) [static]
void StateGroup::gotoNext(StateGroup* n)
{
    uStackFrame __("Fuse.Triggers.StateGroup", "gotoNext(Fuse.Triggers.StateGroup)");
    StateGroup_typeof()->Init();
    uPtr(n)->GotoNextState();
}

// public generated StateGroup New() [static]
StateGroup* StateGroup::New2()
{
    StateGroup* obj6 = (StateGroup*)uNew(StateGroup_typeof());
    obj6->ctor_3();
    return obj6;
}

// private static bool StateAcceptor(object o) [static]
bool StateGroup::StateAcceptor(uObject* o)
{
    StateGroup_typeof()->Init();
    return uIs(o, ::g::Fuse::Triggers::State_typeof());
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/StateGroup.uno
// -----------------------------------------------------------------

// public enum StateTransition
uEnumType* StateTransition_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.StateTransition", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Parallel", 0LL,
        "Exclusive", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.12.0/Triggers/TextInputActionTriggered.uno
// ---------------------------------------------------------------------------------------------------

// public sealed class TextInputActionTriggered
// {
static void TextInputActionTriggered_build(uType* type)
{
    ::STRINGS[40] = uString::Const("TextInputActionTriggered must be a child of an ITextEdit");
    ::STRINGS[41] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.12.0/Triggers/TextInputActionTriggered.uno");
    ::STRINGS[17] = uString::Const("OnRooted");
    ::TYPES[38] = ::g::Fuse::Controls::ITextEditControl_typeof();
    ::TYPES[39] = ::g::Fuse::Controls::TextInputActionHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        ::g::Fuse::Controls::TextInputActionType_typeof(), offsetof(TextInputActionTriggered, _type), 0,
        ::TYPES[38/*Fuse.Controls.ITextEditControl*/], offsetof(TextInputActionTriggered, _textEdit), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)TextInputActionTriggered__New2_fn, 0, true, type, 0),
        new uFunction("get_Type", NULL, (void*)TextInputActionTriggered__get_Type_fn, 0, false, ::g::Fuse::Controls::TextInputActionType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)TextInputActionTriggered__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputActionType_typeof()));
}

::g::Fuse::Triggers::Trigger_type* TextInputActionTriggered_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(TextInputActionTriggered);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.TextInputActionTriggered", options);
    type->fp_build_ = TextInputActionTriggered_build;
    type->fp_ctor_ = (void*)TextInputActionTriggered__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))TextInputActionTriggered__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))TextInputActionTriggered__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated TextInputActionTriggered()
void TextInputActionTriggered__ctor_5_fn(TextInputActionTriggered* __this)
{
    __this->ctor_5();
}

// public generated TextInputActionTriggered New()
void TextInputActionTriggered__New2_fn(TextInputActionTriggered** __retval)
{
    *__retval = TextInputActionTriggered::New2();
}

// private void OnActionTriggered(object s, Fuse.Controls.TextInputActionArgs args)
void TextInputActionTriggered__OnActionTriggered_fn(TextInputActionTriggered* __this, uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args)
{
    __this->OnActionTriggered(s, args);
}

// protected override sealed void OnRooted()
void TextInputActionTriggered__OnRooted_fn(TextInputActionTriggered* __this)
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_textEdit = uAs<uObject*>(__this->Parent(), ::TYPES[38/*Fuse.Controls.ITextEditControl*/]);

    if (__this->_textEdit == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[40/*"TextInputAc...*/], __this, ::STRINGS[41/*"/usr/local/...*/], 39, ::STRINGS[17/*"OnRooted"*/], NULL);
    else
        ::g::Fuse::Controls::ITextEditControl::add_ActionTriggered(uInterface(uPtr(__this->_textEdit), ::TYPES[38/*Fuse.Controls.ITextEditControl*/]), uDelegate::New(::TYPES[39/*Fuse.Controls.TextInputActionHandler*/], (void*)TextInputActionTriggered__OnActionTriggered_fn, __this));
}

// protected override sealed void OnUnrooted()
void TextInputActionTriggered__OnUnrooted_fn(TextInputActionTriggered* __this)
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", "OnUnrooted()");

    if (__this->_textEdit != NULL)
    {
        ::g::Fuse::Controls::ITextEditControl::remove_ActionTriggered(uInterface(uPtr(__this->_textEdit), ::TYPES[38/*Fuse.Controls.ITextEditControl*/]), uDelegate::New(::TYPES[39/*Fuse.Controls.TextInputActionHandler*/], (void*)TextInputActionTriggered__OnActionTriggered_fn, __this));
        __this->_textEdit = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Controls.TextInputActionType get_Type()
void TextInputActionTriggered__get_Type_fn(TextInputActionTriggered* __this, int32_t* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Controls.TextInputActionType value)
void TextInputActionTriggered__set_Type_fn(TextInputActionTriggered* __this, int32_t* value)
{
    __this->Type(*value);
}

// public generated TextInputActionTriggered() [instance]
void TextInputActionTriggered::ctor_5()
{
    ctor_4();
}

// private void OnActionTriggered(object s, Fuse.Controls.TextInputActionArgs args) [instance]
void TextInputActionTriggered::OnActionTriggered(uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args)
{
    uStackFrame __("Fuse.Triggers.TextInputActionTriggered", "OnActionTriggered(object,Fuse.Controls.TextInputActionArgs)");

    if (uPtr(args)->Type() != Type())
        return;

    Pulse();
}

// public Fuse.Controls.TextInputActionType get_Type() [instance]
int32_t TextInputActionTriggered::Type()
{
    return _type;
}

// public void set_Type(Fuse.Controls.TextInputActionType value) [instance]
void TextInputActionTriggered::Type(int32_t value)
{
    _type = value;
}

// public generated TextInputActionTriggered New() [static]
TextInputActionTriggered* TextInputActionTriggered::New2()
{
    TextInputActionTriggered* obj1 = (TextInputActionTriggered*)uNew(TextInputActionTriggered_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Timeline.uno
// ---------------------------------------------------------------

// public partial sealed class Timeline
// {
// static Timeline()
static void Timeline__cctor_2_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    Timeline::_progressName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Progress"));
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[2/*Fuse.Scripting.ScriptMember[]*/], 9, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("pause"), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(__type, NULL), (void*)Timeline__pause_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("pulse"), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(__type, NULL), (void*)Timeline__pulse_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("pulseBackward"), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(__type, NULL), (void*)Timeline__pulseBackward_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("pulseForward"), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(__type, NULL), (void*)Timeline__pulseForward_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("play"), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(__type, NULL), (void*)Timeline__resume_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("playTo"), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, uObject_typeof()->Array(), NULL), (void*)Timeline__playTo_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("resume"), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(__type, NULL), (void*)Timeline__resume_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("seek"), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, uObject_typeof()->Array(), NULL), (void*)Timeline__seek_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("stop"), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(__type, NULL), (void*)Timeline__stop_fn))));
}

static void Timeline_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Timeline_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Timeline_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Timeline_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Timeline_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Timeline_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Timeline_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Timeline_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(Timeline_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(Timeline_type, interface8),
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(Timeline_type, interface9),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(Timeline_type, interface10),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(Timeline_type, interface11));
    type->SetFields(39,
        Timeline__State_typeof(), offsetof(Timeline, _state), 0,
        ::g::Uno::Bool_typeof(), offsetof(Timeline, _hasInitialProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(Timeline, _initialProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(Timeline, _hasTargetProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(Timeline, _targetProgress), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(Timeline, _lastPlay), 0,
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Timeline, _progressOrigin), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(Timeline, ProgressChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Timeline::_progressName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(22,
        new uFunction("get_InitialProgress", NULL, (void*)Timeline__get_InitialProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_InitialProgress", NULL, (void*)Timeline__set_InitialProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction(".ctor", NULL, (void*)Timeline__New2_fn, 0, true, type, 0),
        new uFunction("get_OnAtZero", NULL, (void*)Timeline__get_OnAtZero_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_OnAtZero", NULL, (void*)Timeline__set_OnAtZero_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Pause", NULL, (void*)Timeline__Pause_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_PlayMode", NULL, (void*)Timeline__get_PlayMode_fn, 0, false, ::g::Fuse::Animations::PlayMode_typeof(), 0),
        new uFunction("set_PlayMode", NULL, (void*)Timeline__set_PlayMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::PlayMode_typeof()),
        new uFunction("PlayTo", NULL, (void*)Timeline__PlayTo1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Progress", NULL, (void*)Timeline__get_Progress1_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, (void*)Timeline__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("add_ProgressChanged", NULL, (void*)Timeline__add_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL)),
        new uFunction("remove_ProgressChanged", NULL, (void*)Timeline__remove_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL)),
        new uFunction("Pulse", NULL, (void*)Timeline__Pulse1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PulseBackward", NULL, (void*)Timeline__PulseBackward1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PulseForward", NULL, (void*)Timeline__PulseForward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Resume", NULL, (void*)Timeline__Resume_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("SetProgress", NULL, (void*)Timeline__SetProgress_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("Stop", NULL, (void*)Timeline__Stop1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_TargetProgress", NULL, (void*)Timeline__get_TargetProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TargetProgress", NULL, (void*)Timeline__set_TargetProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("TimelinePlayTo", NULL, (void*)Timeline__TimelinePlayTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Timeline_type* Timeline_typeof()
{
    static uSStrong<Timeline_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 48;
    options.InterfaceCount = 12;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Timeline);
    options.TypeSize = sizeof(Timeline_type);
    type = (Timeline_type*)uClassType::New("Fuse.Triggers.Timeline", options);
    type->fp_build_ = Timeline_build;
    type->fp_ctor_ = (void*)Timeline__New2_fn;
    type->fp_cctor_ = Timeline__cctor_2_fn;
    type->fp_OnProgressChanged = (void(*)(::g::Fuse::Triggers::Trigger*))Timeline__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Timeline__OnRooted_fn;
    type->interface9.fp_Stop = (void(*)(uObject*))Timeline__FuseTriggersIPlaybackStop_fn;
    type->interface9.fp_Pause = (void(*)(uObject*))Timeline__FuseTriggersIPlaybackPause_fn;
    type->interface9.fp_Resume = (void(*)(uObject*))Timeline__FuseTriggersIPlaybackResume_fn;
    type->interface9.fp_PlayTo = (void(*)(uObject*, double*))Timeline__FuseTriggersIPlaybackPlayTo_fn;
    type->interface9.fp_get_CanPlayTo = (void(*)(uObject*, bool*))Timeline__FuseTriggersIPlaybackget_CanPlayTo_fn;
    type->interface9.fp_get_CanStop = (void(*)(uObject*, bool*))Timeline__FuseTriggersIPlaybackget_CanStop_fn;
    type->interface9.fp_get_CanPause = (void(*)(uObject*, bool*))Timeline__FuseTriggersIPlaybackget_CanPause_fn;
    type->interface9.fp_get_CanResume = (void(*)(uObject*, bool*))Timeline__FuseTriggersIPlaybackget_CanResume_fn;
    type->interface9.fp_get_Progress = (void(*)(uObject*, double*))Timeline__get_Progress1_fn;
    type->interface9.fp_set_Progress = (void(*)(uObject*, double*))Timeline__set_Progress_fn;
    type->interface10.fp_Pulse = (void(*)(uObject*))Timeline__Pulse1_fn;
    type->interface11.fp_get_Progress = (void(*)(uObject*, double*))Timeline__get_Progress1_fn;
    type->interface11.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))Timeline__add_ProgressChanged_fn;
    type->interface11.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))Timeline__remove_ProgressChanged_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public Timeline()
void Timeline__ctor_5_fn(Timeline* __this)
{
    __this->ctor_5();
}

// private void BypassOff()
void Timeline__BypassOff_fn(Timeline* __this)
{
    __this->BypassOff();
}

// public bool Fuse.Triggers.IPlayback.get_CanPause()
void Timeline__FuseTriggersIPlaybackget_CanPause_fn(Timeline* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public bool Fuse.Triggers.IPlayback.get_CanPlayTo()
void Timeline__FuseTriggersIPlaybackget_CanPlayTo_fn(Timeline* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public bool Fuse.Triggers.IPlayback.get_CanResume()
void Timeline__FuseTriggersIPlaybackget_CanResume_fn(Timeline* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public bool Fuse.Triggers.IPlayback.get_CanStop()
void Timeline__FuseTriggersIPlaybackget_CanStop_fn(Timeline* __this, bool* __retval)
{
    return *__retval = true, void();
}

// private void Fuse.Triggers.IPlayback.Pause()
void Timeline__FuseTriggersIPlaybackPause_fn(Timeline* __this)
{
    __this->Pause();
}

// private void Fuse.Triggers.IPlayback.PlayTo(double progress)
void Timeline__FuseTriggersIPlaybackPlayTo_fn(Timeline* __this, double* progress)
{
    double progress_ = *progress;
    __this->PlayTo1(progress_);
}

// private void Fuse.Triggers.IPlayback.Resume()
void Timeline__FuseTriggersIPlaybackResume_fn(Timeline* __this)
{
    if (__this->IsRootingCompleted())
        __this->Play((double)((__this->_lastPlay == 0) ? 1 : 0));
}

// private void Fuse.Triggers.IPlayback.Stop()
void Timeline__FuseTriggersIPlaybackStop_fn(Timeline* __this)
{
    if (__this->IsRootingCompleted())
    {
        __this->Seek(0.0, 0);
        __this->_targetProgress = 0.0;
        __this->_state = 1;
    }
}

// public double get_InitialProgress()
void Timeline__get_InitialProgress_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->InitialProgress();
}

// public void set_InitialProgress(double value)
void Timeline__set_InitialProgress_fn(Timeline* __this, double* value)
{
    __this->InitialProgress(*value);
}

// public Timeline New()
void Timeline__New2_fn(Timeline** __retval)
{
    *__retval = Timeline::New2();
}

// public bool get_OnAtZero()
void Timeline__get_OnAtZero_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->OnAtZero();
}

// public void set_OnAtZero(bool value)
void Timeline__set_OnAtZero_fn(Timeline* __this, bool* value)
{
    __this->OnAtZero(*value);
}

// protected override sealed void OnProgressChanged()
void Timeline__OnProgressChanged_fn(Timeline* __this)
{
    uStackFrame __("Fuse.Triggers.Timeline", "OnProgressChanged()");
    uObject* ind1;
    ::g::Uno::UX::ValueChangedArgs* ret3;
    ind1 = __this->_progressOrigin;
    uObject* sender = (ind1 != NULL) ? ind1 : uAs<uObject*>(__this, ::g::Uno::UX::IPropertyListener_typeof());
    __this->OnPropertyChanged1(Timeline::_progressName_, sender);

    if (::g::Uno::Delegate::op_Inequality(__this->ProgressChanged1, NULL))
        uPtr(__this->ProgressChanged1)->Invoke(2, sender, (::g::Uno::UX::ValueChangedArgs__New2_fn(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), uCRef(__this->Progress1()), &ret3), ret3));
}

// protected override sealed void OnRooted()
void Timeline__OnRooted_fn(Timeline* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (!__this->IsPreservedRootFrame())
    {
        __this->BypassSeek(__this->_initialProgress, 0);

        if ((__this->Bypass() == 0) && !__this->_hasInitialProgress)
            __this->BypassSeek(__this->TargetProgress(), 0);

        if (__this->_state == 0)
            __this->Play(__this->TargetProgress());
    }
}

// private static void pause(Fuse.Triggers.Timeline n)
void Timeline__pause_fn(Timeline* n)
{
    Timeline::pause(n);
}

// public void Pause()
void Timeline__Pause_fn(Timeline* __this)
{
    __this->Pause();
}

// private void Play(double progress)
void Timeline__Play_fn(Timeline* __this, double* progress)
{
    __this->Play(*progress);
}

// public Fuse.Animations.PlayMode get_PlayMode()
void Timeline__get_PlayMode_fn(Timeline* __this, int32_t* __retval)
{
    *__retval = __this->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value)
void Timeline__set_PlayMode_fn(Timeline* __this, int32_t* value)
{
    __this->PlayMode(*value);
}

// private static void playTo(Fuse.Triggers.Timeline n, object[] args)
void Timeline__playTo_fn(Timeline* n, uArray* args)
{
    Timeline::playTo(n, args);
}

// public void PlayTo(double progress)
void Timeline__PlayTo1_fn(Timeline* __this, double* progress)
{
    __this->PlayTo1(*progress);
}

// public new double get_Progress()
void Timeline__get_Progress1_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->Progress1();
}

// public new void set_Progress(double value)
void Timeline__set_Progress_fn(Timeline* __this, double* value)
{
    __this->Progress1(*value);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value)
void Timeline__add_ProgressChanged_fn(Timeline* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value)
void Timeline__remove_ProgressChanged_fn(Timeline* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// private static void pulse(Fuse.Triggers.Timeline n)
void Timeline__pulse_fn(Timeline* n)
{
    Timeline::pulse(n);
}

// public new void Pulse()
void Timeline__Pulse1_fn(Timeline* __this)
{
    __this->Pulse1();
}

// private static void pulseBackward(Fuse.Triggers.Timeline n)
void Timeline__pulseBackward_fn(Timeline* n)
{
    Timeline::pulseBackward(n);
}

// public new void PulseBackward()
void Timeline__PulseBackward1_fn(Timeline* __this)
{
    __this->PulseBackward1();
}

// private static void pulseForward(Fuse.Triggers.Timeline n)
void Timeline__pulseForward_fn(Timeline* n)
{
    Timeline::pulseForward(n);
}

// public void PulseForward()
void Timeline__PulseForward_fn(Timeline* __this)
{
    __this->PulseForward();
}

// private static void resume(Fuse.Triggers.Timeline n)
void Timeline__resume_fn(Timeline* n)
{
    Timeline::resume(n);
}

// public void Resume()
void Timeline__Resume_fn(Timeline* __this)
{
    __this->Resume();
}

// private static void seek(Fuse.Triggers.Timeline n, object[] args)
void Timeline__seek_fn(Timeline* n, uArray* args)
{
    Timeline::seek(n, args);
}

// public void SetProgress(double value, Uno.UX.IPropertyListener origin)
void Timeline__SetProgress_fn(Timeline* __this, double* value, uObject* origin)
{
    __this->SetProgress(*value, origin);
}

// private static void stop(Fuse.Triggers.Timeline n)
void Timeline__stop_fn(Timeline* n)
{
    Timeline::stop(n);
}

// public void Stop()
void Timeline__Stop1_fn(Timeline* __this)
{
    __this->Stop1();
}

// public double get_TargetProgress()
void Timeline__get_TargetProgress_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->TargetProgress();
}

// public void set_TargetProgress(double value)
void Timeline__set_TargetProgress_fn(Timeline* __this, double* value)
{
    __this->TargetProgress(*value);
}

// public void TimelinePlayTo(double progress)
void Timeline__TimelinePlayTo_fn(Timeline* __this, double* progress)
{
    __this->TimelinePlayTo(*progress);
}

::g::Uno::UX::Selector Timeline::_progressName_;

// public Timeline() [instance]
void Timeline::ctor_5()
{
    _initialProgress = 0.0;
    _targetProgress = 0.0;
    ctor_4();
    _suppressPropertyChangedProgress = true;
}

// private void BypassOff() [instance]
void Timeline::BypassOff()
{
    _targetProgress = 0.0;
    BypassDeactivate();
}

// public double get_InitialProgress() [instance]
double Timeline::InitialProgress()
{
    return _initialProgress;
}

// public void set_InitialProgress(double value) [instance]
void Timeline::InitialProgress(double value)
{
    _hasInitialProgress = true;
    _initialProgress = value;
}

// public bool get_OnAtZero() [instance]
bool Timeline::OnAtZero()
{
    return _startAtZero;
}

// public void set_OnAtZero(bool value) [instance]
void Timeline::OnAtZero(bool value)
{
    _startAtZero = value;
}

// public void Pause() [instance]
void Timeline::Pause()
{
    if (IsRootingCompleted())
    {
        _state = 1;
        Seek(Progress1(), 0);
    }
}

// private void Play(double progress) [instance]
void Timeline::Play(double progress)
{
    uStackFrame __("Fuse.Triggers.Timeline", "Play(double)");
    _state = 0;
    _lastPlay = ((progress >= Progress1()) ? 0 : 1);
    PlayTo(progress, _lastPlay);
    _targetProgress = progress;
}

// public Fuse.Animations.PlayMode get_PlayMode() [instance]
int32_t Timeline::PlayMode()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_PlayMode()");
    return uPtr(Animation())->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) [instance]
void Timeline::PlayMode(int32_t value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "set_PlayMode(Fuse.Animations.PlayMode)");
    uPtr(Animation())->PlayMode(value);

    if (uPtr(Animation())->PlayMode() == 1)
    {
        if (!_hasTargetProgress)
            TargetProgress(1.0);

        if (!_hasInitialProgress)
            InitialProgress(0.0);
    }
}

// public void PlayTo(double progress) [instance]
void Timeline::PlayTo1(double progress)
{
    TimelinePlayTo(progress);
}

// public new double get_Progress() [instance]
double Timeline::Progress1()
{
    uStackFrame __("Fuse.Triggers.Timeline", "get_Progress()");
    return Progress();
}

// public new void set_Progress(double value) [instance]
void Timeline::Progress1(double value)
{
    Seek(value, 0);
    _targetProgress = value;
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance]
void Timeline::add_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "add_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[24/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance]
void Timeline::remove_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Timeline", "remove_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[24/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public new void Pulse() [instance]
void Timeline::Pulse1()
{
    Pulse();
}

// public new void PulseBackward() [instance]
void Timeline::PulseBackward1()
{
    BypassActivate();
    _targetProgress = 0.0;
    DirectDeactivate();
}

// public void PulseForward() [instance]
void Timeline::PulseForward()
{
    _targetProgress = 1.0;
    DirectActivate(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Timeline__BypassOff_fn, this));
}

// public void Resume() [instance]
void Timeline::Resume()
{
    uStackFrame __("Fuse.Triggers.Timeline", "Resume()");

    if (IsRootingCompleted())
    {
        _state = 0;
        PlayTo(_targetProgress, 0);
    }
}

// public void SetProgress(double value, Uno.UX.IPropertyListener origin) [instance]
void Timeline::SetProgress(double value, uObject* origin)
{
    if (origin != this)
    {
        _progressOrigin = origin;

        if (IsRootingCompleted())
            Seek(value, 0);
        else if (!_hasInitialProgress)
            _initialProgress = value;

        _progressOrigin = NULL;
    }
}

// public void Stop() [instance]
void Timeline::Stop1()
{
    if (IsRootingCompleted())
    {
        Seek(Progress1(), 0);
        _targetProgress = Progress1();
        _state = 1;
    }
}

// public double get_TargetProgress() [instance]
double Timeline::TargetProgress()
{
    return _targetProgress;
}

// public void set_TargetProgress(double value) [instance]
void Timeline::TargetProgress(double value)
{
    _targetProgress = value;
    _hasTargetProgress = true;

    if (IsRootingCompleted() && (_state == 0))
        PlayTo1(_targetProgress);
}

// public void TimelinePlayTo(double progress) [instance]
void Timeline::TimelinePlayTo(double progress)
{
    uStackFrame __("Fuse.Triggers.Timeline", "TimelinePlayTo(double)");

    if (IsRootingCompleted())
        Play(progress);
}

// public Timeline New() [static]
Timeline* Timeline::New2()
{
    Timeline* obj2 = (Timeline*)uNew(Timeline_typeof());
    obj2->ctor_5();
    return obj2;
}

// private static void pause(Fuse.Triggers.Timeline n) [static]
void Timeline::pause(Timeline* n)
{
    uStackFrame __("Fuse.Triggers.Timeline", "pause(Fuse.Triggers.Timeline)");
    Timeline_typeof()->Init();
    uPtr(n)->Pause();
}

// private static void playTo(Fuse.Triggers.Timeline n, object[] args) [static]
void Timeline::playTo(Timeline* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.Timeline", "playTo(Fuse.Triggers.Timeline,object[])");
    Timeline_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Timeline.playTo requires 1 argument"), n, uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Timeline.ScriptClass.uno"), 67, uString::Const("playTo"), NULL);
        return;
    }

    uPtr(n)->PlayTo1(::g::Fuse::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)));
}

// private static void pulse(Fuse.Triggers.Timeline n) [static]
void Timeline::pulse(Timeline* n)
{
    uStackFrame __("Fuse.Triggers.Timeline", "pulse(Fuse.Triggers.Timeline)");
    Timeline_typeof()->Init();
    uPtr(n)->Pulse1();
}

// private static void pulseBackward(Fuse.Triggers.Timeline n) [static]
void Timeline::pulseBackward(Timeline* n)
{
    uStackFrame __("Fuse.Triggers.Timeline", "pulseBackward(Fuse.Triggers.Timeline)");
    Timeline_typeof()->Init();
    uPtr(n)->PulseBackward1();
}

// private static void pulseForward(Fuse.Triggers.Timeline n) [static]
void Timeline::pulseForward(Timeline* n)
{
    uStackFrame __("Fuse.Triggers.Timeline", "pulseForward(Fuse.Triggers.Timeline)");
    Timeline_typeof()->Init();
    uPtr(n)->PulseForward();
}

// private static void resume(Fuse.Triggers.Timeline n) [static]
void Timeline::resume(Timeline* n)
{
    uStackFrame __("Fuse.Triggers.Timeline", "resume(Fuse.Triggers.Timeline)");
    Timeline_typeof()->Init();
    uPtr(n)->Resume();
}

// private static void seek(Fuse.Triggers.Timeline n, object[] args) [static]
void Timeline::seek(Timeline* n, uArray* args)
{
    uStackFrame __("Fuse.Triggers.Timeline", "seek(Fuse.Triggers.Timeline,object[])");
    Timeline_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Timeline.seek requires 1 argument"), n, uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Timeline.ScriptClass.uno"), 116, uString::Const("seek"), NULL);
        return;
    }

    uPtr(n)->Progress1(::g::Fuse::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)));
}

// private static void stop(Fuse.Triggers.Timeline n) [static]
void Timeline::stop(Timeline* n)
{
    uStackFrame __("Fuse.Triggers.Timeline", "stop(Fuse.Triggers.Timeline)");
    Timeline_typeof()->Init();
    uPtr(n)->Stop1();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.12.0/Transition.uno
// ----------------------------------------------------------------------------

// public class Transition
// {
static void Transition_build(uType* type)
{
    ::STRINGS[2] = uString::Const("");
    ::STRINGS[42] = uString::Const(",");
    ::TYPES[27] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[40] = ::g::Fuse::Internal::MiniList_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[41] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[42] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[43] = ::g::Uno::Char_typeof()->Array();
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Uno::Math_typeof(),
        ::g::Fuse::Triggers::TransitionGroup_typeof(),
        ::g::Fuse::TranslationModes_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        ::TYPES[40/*Fuse.Internal.MiniList<string>*/], offsetof(Transition, _to), 0,
        ::TYPES[40/*Fuse.Internal.MiniList<string>*/], offsetof(Transition, _from), 0,
        ::g::Fuse::Triggers::TransitionDirection_typeof(), offsetof(Transition, _direction), 0,
        ::g::Uno::Bool_typeof(), offsetof(Transition, _autoRelease), 0,
        ::g::Fuse::Triggers::TransitionMode_typeof(), offsetof(Transition, _mode), 0,
        ::g::Uno::String_typeof(), offsetof(Transition, _style), 0,
        ::g::Fuse::Controls::NavigationControlTransition_typeof(), offsetof(Transition, _useTransition), 0,
        ::g::Fuse::Triggers::TransitionGroup_typeof(), offsetof(Transition, _group), 0,
        ::g::Fuse::Animations::Animator_typeof(), offsetof(Transition, _useAnimator), 0,
        ::g::Uno::Bool_typeof(), offsetof(Transition, IsSelected), 0);
    type->Reflection.SetFunctions(15,
        new uFunction("get_AutoRelease", NULL, (void*)Transition__get_AutoRelease_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AutoRelease", NULL, (void*)Transition__set_AutoRelease_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Direction", NULL, (void*)Transition__get_Direction_fn, 0, false, ::g::Fuse::Triggers::TransitionDirection_typeof(), 0),
        new uFunction("set_Direction", NULL, (void*)Transition__set_Direction_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::TransitionDirection_typeof()),
        new uFunction("get_From", NULL, (void*)Transition__get_From_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_From", NULL, (void*)Transition__set_From_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Mode", NULL, (void*)Transition__get_Mode_fn, 0, false, ::g::Fuse::Triggers::TransitionMode_typeof(), 0),
        new uFunction("set_Mode", NULL, (void*)Transition__set_Mode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::TransitionMode_typeof()),
        new uFunction(".ctor", NULL, (void*)Transition__New2_fn, 0, true, type, 0),
        new uFunction("get_Style", NULL, (void*)Transition__get_Style_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)Transition__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_To", NULL, (void*)Transition__get_To_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_To", NULL, (void*)Transition__set_To_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_UseTransition", NULL, (void*)Transition__get_UseTransition_fn, 0, false, ::g::Fuse::Controls::NavigationControlTransition_typeof(), 0),
        new uFunction("set_UseTransition", NULL, (void*)Transition__set_UseTransition_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::NavigationControlTransition_typeof()));
}

::g::Fuse::Triggers::Trigger_type* Transition_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 49;
    options.InterfaceCount = 9;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(Transition);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.Transition", options);
    type->fp_build_ = Transition_build;
    type->fp_ctor_ = (void*)Transition__New2_fn;
    type->fp_OnPlayStateChanged = (void(*)(::g::Fuse::Triggers::Trigger*, int32_t*))Transition__OnPlayStateChanged_fn;
    type->fp_OnProgressChanged = (void(*)(::g::Fuse::Triggers::Trigger*))Transition__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Transition__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Transition__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated Transition()
void Transition__ctor_5_fn(Transition* __this)
{
    __this->ctor_5();
}

// private void AddUseTransition()
void Transition__AddUseTransition_fn(Transition* __this)
{
    __this->AddUseTransition();
}

// public bool get_AutoRelease()
void Transition__get_AutoRelease_fn(Transition* __this, bool* __retval)
{
    *__retval = __this->AutoRelease();
}

// public void set_AutoRelease(bool value)
void Transition__set_AutoRelease_fn(Transition* __this, bool* value)
{
    __this->AutoRelease(*value);
}

// public Fuse.Triggers.TransitionDirection get_Direction()
void Transition__get_Direction_fn(Transition* __this, int32_t* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Triggers.TransitionDirection value)
void Transition__set_Direction_fn(Transition* __this, int32_t* value)
{
    __this->Direction(*value);
}

// public string get_From()
void Transition__get_From_fn(Transition* __this, uString** __retval)
{
    *__retval = __this->From();
}

// public void set_From(string value)
void Transition__set_From_fn(Transition* __this, uString* value)
{
    __this->From(value);
}

// private static string Join(Fuse.Internal.MiniList<string>& list)
void Transition__Join_fn(::g::Fuse::Internal::MiniList* list, uString** __retval)
{
    *__retval = Transition::Join(list);
}

// public Fuse.Triggers.TransitionMode get_Mode()
void Transition__get_Mode_fn(Transition* __this, int32_t* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Triggers.TransitionMode value)
void Transition__set_Mode_fn(Transition* __this, int32_t* value)
{
    __this->Mode(*value);
}

// public generated Transition New()
void Transition__New2_fn(Transition** __retval)
{
    *__retval = Transition::New2();
}

// private void OnPageProgressChanged(object sender, Fuse.Navigation.NavigationArgs args)
void Transition__OnPageProgressChanged_fn(Transition* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* args)
{
    __this->OnPageProgressChanged(sender, args);
}

// protected override sealed void OnPlayStateChanged(Fuse.Triggers.TriggerPlayState state)
void Transition__OnPlayStateChanged_fn(Transition* __this, int32_t* state)
{
    uStackFrame __("Fuse.Triggers.Transition", "OnPlayStateChanged(Fuse.Triggers.TriggerPlayState)");
    int32_t state_ = *state;

    if (__this->_group == NULL)
        return;

    uPtr(uPtr(__this->_group)->Navigator())->SetTransitionState(__this, state_ != 0);
}

// protected override sealed void OnProgressChanged()
void Transition__OnProgressChanged_fn(Transition* __this)
{
    uStackFrame __("Fuse.Triggers.Transition", "OnProgressChanged()");
    ::g::Fuse::Triggers::Trigger__OnProgressChanged_fn(__this);

    if ((((__this->_group != NULL) && (__this->Progress() >= 1.0)) && (__this->PlayState() == 2)) && __this->AutoRelease())
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Triggers::TransitionGroup__ReleasePage_fn, uPtr(__this->_group)), -1, 2);
}

// protected override sealed void OnRooted()
void Transition__OnRooted_fn(Transition* __this)
{
    uStackFrame __("Fuse.Triggers.Transition", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_group = ::g::Fuse::Triggers::TransitionGroup::Root(__this);

    if (__this->_group != NULL)
    {
        __this->AddUseTransition();
        uPtr(uPtr(__this->_group)->Navigator())->SetTransitionState(__this, false);
        uPtr(uPtr(__this->_group)->Navigator())->add_PageProgressChanged(uDelegate::New(::TYPES[42/*Fuse.Navigation.NavigationHandler*/], (void*)Transition__OnPageProgressChanged_fn, __this));
    }
}

// protected override sealed void OnUnrooted()
void Transition__OnUnrooted_fn(Transition* __this)
{
    uStackFrame __("Fuse.Triggers.Transition", "OnUnrooted()");
    bool ret2;

    if (__this->_useAnimator != NULL)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(__this->Animators()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), __this->_useAnimator, &ret2);

    if (__this->_group != NULL)
    {
        uPtr(uPtr(__this->_group)->Navigator())->remove_PageProgressChanged(uDelegate::New(::TYPES[42/*Fuse.Navigation.NavigationHandler*/], (void*)Transition__OnPageProgressChanged_fn, __this));
        uPtr(uPtr(__this->_group)->Navigator())->SetTransitionState(__this, false);
        uPtr(__this->_group)->Unroot(__this);
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private static void Parse(Fuse.Internal.MiniList<string>& list, string src)
void Transition__Parse_fn(::g::Fuse::Internal::MiniList* list, uString* src)
{
    Transition::Parse(list, src);
}

// internal int Priority(bool isActive, bool isBackward, string newPath, string oldPath, Fuse.Navigation.NavigationGotoMode mode, string operationStyle)
void Transition__Priority_fn(Transition* __this, bool* isActive, bool* isBackward, uString* newPath, uString* oldPath, int32_t* mode, uString* operationStyle, int32_t* __retval)
{
    *__retval = __this->Priority(*isActive, *isBackward, newPath, oldPath, *mode, operationStyle);
}

// internal void QuickDeactivate()
void Transition__QuickDeactivate_fn(Transition* __this)
{
    __this->QuickDeactivate();
}

// public string get_Style()
void Transition__get_Style_fn(Transition* __this, uString** __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(string value)
void Transition__set_Style_fn(Transition* __this, uString* value)
{
    __this->Style(value);
}

// public string get_To()
void Transition__get_To_fn(Transition* __this, uString** __retval)
{
    *__retval = __this->To();
}

// public void set_To(string value)
void Transition__set_To_fn(Transition* __this, uString* value)
{
    __this->To(value);
}

// public Fuse.Controls.NavigationControlTransition get_UseTransition()
void Transition__get_UseTransition_fn(Transition* __this, int32_t* __retval)
{
    *__retval = __this->UseTransition();
}

// public void set_UseTransition(Fuse.Controls.NavigationControlTransition value)
void Transition__set_UseTransition_fn(Transition* __this, int32_t* value)
{
    __this->UseTransition(*value);
}

// public generated Transition() [instance]
void Transition::ctor_5()
{
    _autoRelease = true;
    _useTransition = 1;
    ctor_4();
}

// private void AddUseTransition() [instance]
void Transition::AddUseTransition()
{
    uStackFrame __("Fuse.Triggers.Transition", "AddUseTransition()");
    int32_t use = UseTransition();

    if (use == 0)
        use = uPtr(uPtr(_group)->Navigator())->Transition();

    switch (use)
    {
        case 0:
        case 1:
            break;
        case 2:
        {
            ::g::Fuse::Animations::Move* move = ::g::Fuse::Animations::Move::New2();
            move->X((float)((Direction() == 1) ? 1 : -1));
            move->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
            move->Duration(0.3);
            move->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
            _useAnimator = move;
            break;
        }
    }

    if (_useAnimator != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), _useAnimator);
}

// public bool get_AutoRelease() [instance]
bool Transition::AutoRelease()
{
    return _autoRelease;
}

// public void set_AutoRelease(bool value) [instance]
void Transition::AutoRelease(bool value)
{
    _autoRelease = value;
}

// public Fuse.Triggers.TransitionDirection get_Direction() [instance]
int32_t Transition::Direction()
{
    return _direction;
}

// public void set_Direction(Fuse.Triggers.TransitionDirection value) [instance]
void Transition::Direction(int32_t value)
{
    _direction = value;
}

// public string get_From() [instance]
uString* Transition::From()
{
    uStackFrame __("Fuse.Triggers.Transition", "get_From()");
    return Transition::Join(&_from);
}

// public void set_From(string value) [instance]
void Transition::From(uString* value)
{
    uStackFrame __("Fuse.Triggers.Transition", "set_From(string)");
    Transition::Parse(&_from, value);
}

// public Fuse.Triggers.TransitionMode get_Mode() [instance]
int32_t Transition::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Triggers.TransitionMode value) [instance]
void Transition::Mode(int32_t value)
{
    _mode = value;
}

// private void OnPageProgressChanged(object sender, Fuse.Navigation.NavigationArgs args) [instance]
void Transition::OnPageProgressChanged(uObject* sender, ::g::Fuse::Navigation::NavigationArgs* args)
{
    uStackFrame __("Fuse.Triggers.Transition", "OnPageProgressChanged(object,Fuse.Navigation.NavigationArgs)");

    if (!IsSelected || (_group == NULL))
    {
        if (uPtr(args)->Mode() == 1)
            BypassDeactivate();
        else
            QuickDeactivate();

        return;
    }

    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(uAs<uObject*>(uPtr(_group)->Navigator(), ::TYPES[41/*Fuse.Navigation.INavigation*/])), ::TYPES[41/*Fuse.Navigation.INavigation*/]), uPtr(_group)->Page());
    int32_t d = (::g::Uno::Math::Abs1(ps.PreviousProgress) < ::g::Uno::Math::Abs1(ps.Progress)) ? 0 : 1;
    float p = ::g::Uno::Math::Abs1(ps.Progress);

    if (uPtr(args)->Mode() == 0)
        PlayTo((double)p, d);
    else if (uPtr(args)->Mode() == 2)
        DirectSeek((double)p, d);
    else
        BypassSeek((double)p, d);
}

// internal int Priority(bool isActive, bool isBackward, string newPath, string oldPath, Fuse.Navigation.NavigationGotoMode mode, string operationStyle) [instance]
int32_t Transition::Priority(bool isActive, bool isBackward, uString* newPath, uString* oldPath, int32_t mode, uString* operationStyle)
{
    uStackFrame __("Fuse.Triggers.Transition", "Priority(bool,bool,string,string,Fuse.Navigation.NavigationGotoMode,string)");
    bool normActive = isActive != isBackward;
    uString* toPath = isBackward ? oldPath : newPath;
    uString* fromPath = isBackward ? newPath : oldPath;
    int32_t priority = 0;

    if (Direction() != 0)
    {
        bool exclude = false;

        switch (Direction())
        {
            case 1:
            {
                priority = 1;
                exclude = isActive == isBackward;
                break;
            }
            case 2:
            {
                priority = 1;
                exclude = isActive != isBackward;
                break;
            }
            case 3:
            {
                priority = 2;
                exclude = !isActive;
                break;
            }
            case 4:
            {
                priority = 2;
                exclude = isActive;
                break;
            }
            case 5:
            {
                priority = 3;
                exclude = isBackward || isActive;
                break;
            }
            case 7:
            {
                priority = 3;
                exclude = !isBackward || isActive;
                break;
            }
            case 6:
            {
                priority = 3;
                exclude = !isBackward || !isActive;
                break;
            }
            case 8:
            {
                priority = 3;
                exclude = isBackward || !isActive;
                break;
            }
        }

        if (exclude)
            return -1;
    }

    if (::g::Uno::String::op_Inequality(Style(), NULL))
    {
        priority = priority + 1000;

        if (::g::Uno::String::op_Inequality(Style(), operationStyle))
            return -1;
    }

    if (Mode() != 0)
    {
        priority = priority + 100;

        if ((Mode() == 2) && (mode != 2))
            return -1;

        if ((Mode() == 1) && (mode == 2))
            return -1;
    }

    if (_to.Count(::TYPES[40/*Fuse.Internal.MiniList<string>*/]) > 0)
    {
        if (!normActive && _to.Contains(::TYPES[40/*Fuse.Internal.MiniList<string>*/], toPath))
            return priority + 20;

        return -1;
    }

    if (_from.Count(::TYPES[40/*Fuse.Internal.MiniList<string>*/]) > 0)
    {
        if (normActive && _from.Contains(::TYPES[40/*Fuse.Internal.MiniList<string>*/], fromPath))
            return priority + 10;

        return -1;
    }

    return priority;
}

// internal void QuickDeactivate() [instance]
void Transition::QuickDeactivate()
{
    uStackFrame __("Fuse.Triggers.Transition", "QuickDeactivate()");

    if (Progress() < 1.0)
        Deactivate();
    else
        BypassDeactivate();
}

// public string get_Style() [instance]
uString* Transition::Style()
{
    return _style;
}

// public void set_Style(string value) [instance]
void Transition::Style(uString* value)
{
    _style = value;
}

// public string get_To() [instance]
uString* Transition::To()
{
    uStackFrame __("Fuse.Triggers.Transition", "get_To()");
    return Transition::Join(&_to);
}

// public void set_To(string value) [instance]
void Transition::To(uString* value)
{
    uStackFrame __("Fuse.Triggers.Transition", "set_To(string)");
    Transition::Parse(&_to, value);
}

// public Fuse.Controls.NavigationControlTransition get_UseTransition() [instance]
int32_t Transition::UseTransition()
{
    return _useTransition;
}

// public void set_UseTransition(Fuse.Controls.NavigationControlTransition value) [instance]
void Transition::UseTransition(int32_t value)
{
    _useTransition = value;
}

// private static string Join(Fuse.Internal.MiniList<string>& list) [static]
uString* Transition::Join(::g::Fuse::Internal::MiniList* list)
{
    uStackFrame __("Fuse.Triggers.Transition", "Join(Fuse.Internal.MiniList<string>&)");
    uString* o = ::STRINGS[2/*""*/];

    for (int32_t i = 0; i < (*list).Count(::TYPES[40/*Fuse.Internal.MiniList<string>*/]); ++i)
    {
        if (i != 0)
            o = ::g::Uno::String::op_Addition2(o, ::STRINGS[42/*","*/]);

        o = ::g::Uno::String::op_Addition2(o, (uString*)(*list).Item(::TYPES[40/*Fuse.Internal.MiniList<string>*/], i));
    }

    return o;
}

// public generated Transition New() [static]
Transition* Transition::New2()
{
    Transition* obj1 = (Transition*)uNew(Transition_typeof());
    obj1->ctor_5();
    return obj1;
}

// private static void Parse(Fuse.Internal.MiniList<string>& list, string src) [static]
void Transition::Parse(::g::Fuse::Internal::MiniList* list, uString* src)
{
    uStackFrame __("Fuse.Triggers.Transition", "Parse(Fuse.Internal.MiniList<string>&,string)");
    (*list).Clear(::TYPES[40/*Fuse.Internal.MiniList<string>*/]);
    uArray* s = ::g::Uno::String::Split(uPtr(src), uArray::Init<int32_t>(::TYPES[43/*char[]*/], 1, ','));

    for (int32_t i = 0; i < uPtr(s)->Length(); ++i)
        (*list).Add(::TYPES[40/*Fuse.Internal.MiniList<string>*/], ::g::Uno::String::Trim(uPtr(uPtr(s)->Strong<uString*>(i))));
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.12.0/Transition.uno
// ----------------------------------------------------------------------------

// public enum TransitionDirection
uEnumType* TransitionDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.TransitionDirection", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "Any", 0LL,
        "InFront", 1LL,
        "Behind", 2LL,
        "ToActive", 3LL,
        "ToInactive", 4LL,
        "ToBack", 5LL,
        "FromBack", 6LL,
        "ToFront", 7LL,
        "FromFront", 8LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.12.0/Transition.uno
// ----------------------------------------------------------------------------

// internal sealed class TransitionGroup
// {
// static generated TransitionGroup()
static void TransitionGroup__cctor__fn(uType* __type)
{
    TransitionGroup::_groupMap_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[44/*Uno.Collections.Dictionary<Fuse.Node, Fuse.Triggers.TransitionGroup>*/]));
}

static void TransitionGroup_build(uType* type)
{
    ::STRINGS[43] = uString::Const("Transition must have a Navigator ancestor");
    ::STRINGS[44] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.12.0/Transition.uno");
    ::STRINGS[45] = uString::Const("Root");
    ::STRINGS[46] = uString::Const("Transition must have a Visual parent");
    ::TYPES[44] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), type, NULL);
    ::TYPES[45] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Transition_typeof(), NULL);
    ::TYPES[46] = ::g::Fuse::Controls::NavigationSwitchedHandler_typeof();
    ::TYPES[47] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[48] = ::g::Fuse::Controls::Navigator_typeof();
    ::TYPES[5] = ::g::Fuse::Visual_typeof();
    type->SetFields(0,
        ::TYPES[48/*Fuse.Controls.Navigator*/], offsetof(TransitionGroup, _navigator), 0,
        ::TYPES[5/*Fuse.Visual*/], offsetof(TransitionGroup, _parent), 0,
        ::TYPES[45/*Uno.Collections.List<Fuse.Triggers.Transition>*/], offsetof(TransitionGroup, _states), 0,
        ::g::Fuse::Triggers::Transition_typeof(), offsetof(TransitionGroup, _selected), 0,
        ::TYPES[44/*Uno.Collections.Dictionary<Fuse.Node, Fuse.Triggers.TransitionGroup>*/], (uintptr_t)&TransitionGroup::_groupMap_, uFieldFlagsStatic);
}

uType* TransitionGroup_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(TransitionGroup);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.TransitionGroup", options);
    type->fp_build_ = TransitionGroup_build;
    type->fp_cctor_ = TransitionGroup__cctor__fn;
    return type;
}

// public TransitionGroup(Fuse.Controls.Navigator navigator, Fuse.Visual parent)
void TransitionGroup__ctor__fn(TransitionGroup* __this, ::g::Fuse::Controls::Navigator* navigator, ::g::Fuse::Visual* parent)
{
    __this->ctor_(navigator, parent);
}

// public void Add(Fuse.Triggers.Transition t)
void TransitionGroup__Add_fn(TransitionGroup* __this, ::g::Fuse::Triggers::Transition* t)
{
    __this->Add(t);
}

// private void Cleanup()
void TransitionGroup__Cleanup_fn(TransitionGroup* __this)
{
    __this->Cleanup();
}

// public Fuse.Controls.Navigator get_Navigator()
void TransitionGroup__get_Navigator_fn(TransitionGroup* __this, ::g::Fuse::Controls::Navigator** __retval)
{
    *__retval = __this->Navigator();
}

// public TransitionGroup New(Fuse.Controls.Navigator navigator, Fuse.Visual parent)
void TransitionGroup__New1_fn(::g::Fuse::Controls::Navigator* navigator, ::g::Fuse::Visual* parent, TransitionGroup** __retval)
{
    *__retval = TransitionGroup::New1(navigator, parent);
}

// private void OnSwitched(object sender, Fuse.Controls.NavigatorSwitchedArgs args)
void TransitionGroup__OnSwitched_fn(TransitionGroup* __this, uObject* sender, ::g::Fuse::Controls::NavigatorSwitchedArgs* args)
{
    __this->OnSwitched(sender, args);
}

// public Fuse.Visual get_Page()
void TransitionGroup__get_Page_fn(TransitionGroup* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Page();
}

// public void ReleasePage()
void TransitionGroup__ReleasePage_fn(TransitionGroup* __this)
{
    __this->ReleasePage();
}

// public static Fuse.Triggers.TransitionGroup Root(Fuse.Triggers.Transition t)
void TransitionGroup__Root_fn(::g::Fuse::Triggers::Transition* t, TransitionGroup** __retval)
{
    *__retval = TransitionGroup::Root(t);
}

// private void SelectTransition(Fuse.Triggers.Transition which)
void TransitionGroup__SelectTransition_fn(TransitionGroup* __this, ::g::Fuse::Triggers::Transition* which)
{
    __this->SelectTransition(which);
}

// public void Unroot(Fuse.Triggers.Transition t)
void TransitionGroup__Unroot_fn(TransitionGroup* __this, ::g::Fuse::Triggers::Transition* t)
{
    __this->Unroot(t);
}

uSStrong< ::g::Uno::Collections::Dictionary*> TransitionGroup::_groupMap_;

// public TransitionGroup(Fuse.Controls.Navigator navigator, Fuse.Visual parent) [instance]
void TransitionGroup::ctor_(::g::Fuse::Controls::Navigator* navigator, ::g::Fuse::Visual* parent)
{
    uStackFrame __("Fuse.Triggers.TransitionGroup", ".ctor(Fuse.Controls.Navigator,Fuse.Visual)");
    _states = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[45/*Uno.Collections.List<Fuse.Triggers.Transition>*/]));
    _parent = parent;
    _navigator = navigator;
    uPtr(_navigator)->add_Switched(uDelegate::New(::TYPES[46/*Fuse.Controls.NavigationSwitchedHandler*/], (void*)TransitionGroup__OnSwitched_fn, this));
}

// public void Add(Fuse.Triggers.Transition t) [instance]
void TransitionGroup::Add(::g::Fuse::Triggers::Transition* t)
{
    uStackFrame __("Fuse.Triggers.TransitionGroup", "Add(Fuse.Triggers.Transition)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_states), t);
}

// private void Cleanup() [instance]
void TransitionGroup::Cleanup()
{
    uStackFrame __("Fuse.Triggers.TransitionGroup", "Cleanup()");
    uPtr(_navigator)->remove_Switched(uDelegate::New(::TYPES[46/*Fuse.Controls.NavigationSwitchedHandler*/], (void*)TransitionGroup__OnSwitched_fn, this));
}

// public Fuse.Controls.Navigator get_Navigator() [instance]
::g::Fuse::Controls::Navigator* TransitionGroup::Navigator()
{
    return _navigator;
}

// private void OnSwitched(object sender, Fuse.Controls.NavigatorSwitchedArgs args) [instance]
void TransitionGroup::OnSwitched(uObject* sender, ::g::Fuse::Controls::NavigatorSwitchedArgs* args)
{
    uStackFrame __("Fuse.Triggers.TransitionGroup", "OnSwitched(object,Fuse.Controls.NavigatorSwitchedArgs)");
    ::g::Fuse::Triggers::Transition* ret2;
    ::g::Fuse::Triggers::Transition* ret3;
    int32_t activeDirection = (uPtr(args)->OldVisual == _parent) ? -1 : (uPtr(args)->NewVisual == _parent) ? 1 : 0;

    if ((activeDirection == 0) && (_selected != NULL))
    {
        SelectTransition(_selected);
        return;
    }

    bool thisActive = activeDirection == 1;
    bool isBackward = args->Operation == 3;
    ::g::Fuse::Triggers::Transition* selectTrans = NULL;
    int32_t prio = -1;

    for (int32_t i = 0; i < uPtr(_states)->Count(); ++i)
    {
        int32_t p = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_states), uCRef<int32_t>(i), &ret2), ret2))->Priority(thisActive, isBackward, uPtr(args)->NewPath, uPtr(args)->OldPath, uPtr(args)->Mode, uPtr(args)->OperationStyle);

        if (p > prio)
        {
            selectTrans = (::g::Uno::Collections::List__get_Item_fn(uPtr(_states), uCRef<int32_t>(i), &ret3), ret3);
            prio = p;
        }
    }

    if ((selectTrans == NULL) && (uPtr(_navigator)->Transition() != 1))
    {
        bool forward = thisActive != isBackward;
        ::g::Fuse::Triggers::Transition* trans = ::g::Fuse::Triggers::Transition::New2();
        trans->UseTransition(0);
        trans->Direction(forward ? 1 : 2);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_parent)->Children()), ::TYPES[47/*Uno.Collections.ICollection<Fuse.Node>*/]), trans);
        selectTrans = trans;
    }

    SelectTransition(selectTrans);
}

// public Fuse.Visual get_Page() [instance]
::g::Fuse::Visual* TransitionGroup::Page()
{
    return _parent;
}

// public void ReleasePage() [instance]
void TransitionGroup::ReleasePage()
{
    uStackFrame __("Fuse.Triggers.TransitionGroup", "ReleasePage()");
    uPtr(_navigator)->ReleasePage(_parent);
}

// private void SelectTransition(Fuse.Triggers.Transition which) [instance]
void TransitionGroup::SelectTransition(::g::Fuse::Triggers::Transition* which)
{
    uStackFrame __("Fuse.Triggers.TransitionGroup", "SelectTransition(Fuse.Triggers.Transition)");
    ::g::Fuse::Triggers::Transition* ret5;
    ::g::Fuse::Triggers::Transition* ret6;

    for (int32_t i = 0; i < uPtr(_states)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_states), uCRef<int32_t>(i), &ret5), ret5))->IsSelected = ((::g::Uno::Collections::List__get_Item_fn(uPtr(_states), uCRef<int32_t>(i), &ret6), ret6) == which);

    _selected = which;
}

// public void Unroot(Fuse.Triggers.Transition t) [instance]
void TransitionGroup::Unroot(::g::Fuse::Triggers::Transition* t)
{
    uStackFrame __("Fuse.Triggers.TransitionGroup", "Unroot(Fuse.Triggers.Transition)");
    bool ret7;
    bool ret8;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_states), t, &ret7);

    if (uPtr(_states)->Count() == 0)
    {
        Cleanup();
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(TransitionGroup::_groupMap_), _parent, &ret8);
    }
}

// public TransitionGroup New(Fuse.Controls.Navigator navigator, Fuse.Visual parent) [static]
TransitionGroup* TransitionGroup::New1(::g::Fuse::Controls::Navigator* navigator, ::g::Fuse::Visual* parent)
{
    TransitionGroup* obj1 = (TransitionGroup*)uNew(TransitionGroup_typeof());
    obj1->ctor_(navigator, parent);
    return obj1;
}

// public static Fuse.Triggers.TransitionGroup Root(Fuse.Triggers.Transition t) [static]
TransitionGroup* TransitionGroup::Root(::g::Fuse::Triggers::Transition* t)
{
    uStackFrame __("Fuse.Triggers.TransitionGroup", "Root(Fuse.Triggers.Transition)");
    TransitionGroup_typeof()->Init();
    bool ret4;
    ::g::Fuse::Node* q = uPtr(t)->ContextParent();
    ::g::Fuse::Controls::Navigator* nav = NULL;

    while ((q != NULL) && (nav == NULL))
    {
        nav = uAs< ::g::Fuse::Controls::Navigator*>(q, ::TYPES[48/*Fuse.Controls.Navigator*/]);
        q = uPtr(q)->ContextParent();
    }

    if (nav == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[43/*"Transition ...*/], t, ::STRINGS[44/*"/usr/local/...*/], 26, ::STRINGS[45/*"Root"*/], NULL);
        return NULL;
    }

    ::g::Fuse::Visual* vis = uAs< ::g::Fuse::Visual*>(t->Parent(), ::TYPES[5/*Fuse.Visual*/]);

    if (vis == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[46/*"Transition ...*/], t, ::STRINGS[44/*"/usr/local/...*/], 33, ::STRINGS[45/*"Root"*/], NULL);
        return NULL;
    }

    TransitionGroup* tg;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(TransitionGroup::_groupMap_), t->Parent(), (void**)(&tg), &ret4), ret4))
    {
        tg = TransitionGroup::New1(nav, vis);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(TransitionGroup::_groupMap_), uPtr(t)->Parent(), tg);
    }

    uPtr(tg)->Add(t);
    return tg;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.12.0/Transition.uno
// ----------------------------------------------------------------------------

// public enum TransitionMode
uEnumType* TransitionMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.TransitionMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Any", 0LL,
        "NonPrepare", 1LL,
        "Prepare", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Trigger.uno
// --------------------------------------------------------------

// public abstract class Trigger
// {
// static generated Trigger()
static void Trigger__cctor_1_fn(uType* __type)
{
    Trigger::ProgressName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Progress"));
}

static void Trigger_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof(),
        ::g::Fuse::Node_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(Trigger_type, interface8));
    type->SetFields(25,
        ::g::Uno::Bool_typeof(), offsetof(Trigger, _isStarted), 0,
        ::g::Uno::Action_typeof(), offsetof(Trigger, _doneAction), 0,
        ::g::Uno::Bool_typeof(), offsetof(Trigger, _doneOn), 0,
        ::g::Fuse::Animations::TriggerAnimationState_typeof(), offsetof(Trigger, _animState), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(Trigger, _animation), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL), offsetof(Trigger, _actions), 0,
        ::g::Fuse::Triggers::TriggerPlayState_typeof(), offsetof(Trigger, _lastPlayState), 0,
        ::g::Uno::Bool_typeof(), offsetof(Trigger, _startAtZero), 0,
        ::g::Fuse::Triggers::TriggerBypassMode_typeof(), offsetof(Trigger, _bypass), 0,
        ::g::Uno::Int_typeof(), offsetof(Trigger, _noLayoutFrame), 0,
        ::g::Uno::Bool_typeof(), offsetof(Trigger, _suppressPropertyChangedProgress), 0,
        ::g::Uno::Int_typeof(), offsetof(Trigger, _rootCaptureIndex1), 0,
        ::g::Uno::Double_typeof(), offsetof(Trigger, _rootProgress), 0,
        ::g::Fuse::Triggers::TriggerPlayState_typeof(), offsetof(Trigger, _rootPlayState), 0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&Trigger::_warnBypass_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Trigger::ProgressName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(18,
        new uFunction("get_Actions", NULL, (void*)Trigger__get_Actions_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL), 0),
        new uFunction("get_Animation", NULL, (void*)Trigger__get_Animation_fn, 0, false, ::g::Fuse::Animations::TriggerAnimation_typeof(), 0),
        new uFunction("set_Animation", NULL, (void*)Trigger__set_Animation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::TriggerAnimation_typeof()),
        new uFunction("get_Animators", NULL, (void*)Trigger__get_Animators_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL), 0),
        new uFunction("get_BackwardAnimation", NULL, (void*)Trigger__get_BackwardAnimation_fn, 0, false, ::g::Fuse::Animations::TriggerAnimation_typeof(), 0),
        new uFunction("set_BackwardAnimation", NULL, (void*)Trigger__set_BackwardAnimation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::TriggerAnimation_typeof()),
        new uFunction("get_Bypass", NULL, (void*)Trigger__get_Bypass_fn, 0, false, ::g::Fuse::Triggers::TriggerBypassMode_typeof(), 0),
        new uFunction("set_Bypass", NULL, (void*)Trigger__set_Bypass_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::TriggerBypassMode_typeof()),
        new uFunction("get_CrossFadeDuration", NULL, (void*)Trigger__get_CrossFadeDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_CrossFadeDuration", NULL, (void*)Trigger__set_CrossFadeDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_HasActions", NULL, (void*)Trigger__get_HasActions_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasAnimators", NULL, (void*)Trigger__get_HasAnimators_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasBackwardAnimation", NULL, (void*)Trigger__get_HasBackwardAnimation_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Progress", NULL, (void*)Trigger__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_StretchDuration", NULL, (void*)Trigger__get_StretchDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_StretchDuration", NULL, (void*)Trigger__set_StretchDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_TimeMultiplier", NULL, (void*)Trigger__get_TimeMultiplier_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TimeMultiplier", NULL, (void*)Trigger__set_TimeMultiplier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Trigger_type* Trigger_typeof()
{
    static uSStrong<Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::NodeGroupBase_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(Trigger);
    options.TypeSize = sizeof(Trigger_type);
    type = (Trigger_type*)uClassType::New("Fuse.Triggers.Trigger", options);
    type->fp_build_ = Trigger_build;
    type->fp_cctor_ = Trigger__cctor_1_fn;
    type->fp_OnPlayStateChanged = Trigger__OnPlayStateChanged_fn;
    type->fp_OnPreserveRootFrame = (void(*)(::g::Fuse::Node*))Trigger__OnPreserveRootFrame_fn;
    type->fp_OnProgressChanged = Trigger__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Trigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Trigger__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// protected generated Trigger()
void Trigger__ctor_4_fn(Trigger* __this)
{
    __this->ctor_4();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction> get_Actions()
void Trigger__get_Actions_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Actions();
}

// protected void Activate([Uno.Action done])
void Trigger__Activate_fn(Trigger* __this, uDelegate* done)
{
    __this->Activate(done);
}

// private void AddDeferredAction(Fuse.Triggers.Actions.TriggerAction i)
void Trigger__AddDeferredAction_fn(Trigger* __this, ::g::Fuse::Triggers::Actions::TriggerAction* i)
{
    __this->AddDeferredAction(i);
}

// public Fuse.Animations.TriggerAnimation get_Animation()
void Trigger__get_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// public void set_Animation(Fuse.Animations.TriggerAnimation value)
void Trigger__set_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators()
void Trigger__get_Animators_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Animators();
}

// public Fuse.Animations.TriggerAnimation get_BackwardAnimation()
void Trigger__get_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->BackwardAnimation();
}

// public void set_BackwardAnimation(Fuse.Animations.TriggerAnimation value)
void Trigger__set_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->BackwardAnimation(value);
}

// public Fuse.Triggers.TriggerBypassMode get_Bypass()
void Trigger__get_Bypass_fn(Trigger* __this, int32_t* __retval)
{
    *__retval = __this->Bypass();
}

// public void set_Bypass(Fuse.Triggers.TriggerBypassMode value)
void Trigger__set_Bypass_fn(Trigger* __this, int32_t* value)
{
    __this->Bypass(*value);
}

// protected void BypassActivate()
void Trigger__BypassActivate_fn(Trigger* __this)
{
    __this->BypassActivate();
}

// protected void BypassDeactivate()
void Trigger__BypassDeactivate_fn(Trigger* __this)
{
    __this->BypassDeactivate();
}

// protected void BypassSeek(double progress, [Fuse.Animations.AnimationVariant direction])
void Trigger__BypassSeek_fn(Trigger* __this, double* progress, int32_t* direction)
{
    __this->BypassSeek(*progress, *direction);
}

// private void CleanupStableState()
void Trigger__CleanupStableState_fn(Trigger* __this)
{
    __this->CleanupStableState();
}

// private void CleanupState()
void Trigger__CleanupState_fn(Trigger* __this)
{
    __this->CleanupState();
}

// private void CreateState()
void Trigger__CreateState_fn(Trigger* __this)
{
    __this->CreateState();
}

// public double get_CrossFadeDuration()
void Trigger__get_CrossFadeDuration_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->CrossFadeDuration();
}

// public void set_CrossFadeDuration(double value)
void Trigger__set_CrossFadeDuration_fn(Trigger* __this, double* value)
{
    __this->CrossFadeDuration(*value);
}

// protected void Deactivate()
void Trigger__Deactivate_fn(Trigger* __this)
{
    __this->Deactivate();
}

// protected void DirectActivate([Uno.Action done])
void Trigger__DirectActivate_fn(Trigger* __this, uDelegate* done)
{
    __this->DirectActivate(done);
}

// protected void DirectDeactivate()
void Trigger__DirectDeactivate_fn(Trigger* __this)
{
    __this->DirectDeactivate();
}

// protected void DirectSeek(double progress, [Fuse.Animations.AnimationVariant direction])
void Trigger__DirectSeek_fn(Trigger* __this, double* progress, int32_t* direction)
{
    __this->DirectSeek(*progress, *direction);
}

// private void EnsureAnimationLength()
void Trigger__EnsureAnimationLength_fn(Trigger* __this)
{
    __this->EnsureAnimationLength();
}

// private bool EnsureState(double progress)
void Trigger__EnsureState_fn(Trigger* __this, double* progress, bool* __retval)
{
    *__retval = __this->EnsureState(*progress);
}

// private void Fuse.Animations.IBasePlayerFeedback.OnPlaybackDone(object s)
void Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn(Trigger* __this, uObject* s)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Fuse.Animations.IBasePlayerFeedback.OnPlaybackDone(object)");
    __this->SetPlayState(0);

    if (__this->_animState == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Trigger.OnPlaybackdone called with _animState == null"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Trigger.uno"), 303, uString::Const("Fuse.Animations.IBasePlayerFeedback.OnPlaybackDone"));
        return;
    }

    uDelegate* perform = NULL;

    if (::g::Uno::Delegate::op_Inequality(__this->_doneAction, NULL))
    {
        if ((__this->_doneOn && uPtr(__this->_animState)->ProgressFullOn()) || (!__this->_doneOn && uPtr(__this->_animState)->ProgressFullOff()))
            perform = __this->_doneAction;

        __this->_doneAction = NULL;
    }

    __this->CleanupStableState();

    if (::g::Uno::Delegate::op_Inequality(perform, NULL))
        uPtr(perform)->InvokeVoid();
}

// private void Fuse.Animations.IBasePlayerFeedback.OnStable(object s)
void Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn(Trigger* __this, uObject* s)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Fuse.Animations.IBasePlayerFeedback.OnStable(object)");
    __this->CleanupStableState();
}

// private void Fuse.Animations.IUnwrappedPlayerFeedback.OnProgressUpdated(object s, double prev, double cur, Fuse.Animations.PlayerFeedbackFlags flags)
void Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn(Trigger* __this, uObject* s, double* prev, double* cur, int32_t* flags)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Fuse.Animations.IUnwrappedPlayerFeedback.OnProgressUpdated(object,double,double,Fuse.Animations.PlayerFeedbackFlags)");
    double cur_ = *cur;
    double prev_ = *prev;
    int32_t flags_ = *flags;
    ::g::Fuse::Triggers::Actions::TriggerAction* ret3;
    double diff = cur_ - prev_;
    __this->SetPlayState(__this->WhatDirection(diff, (flags_ & 2) == 2));
    __this->OnProgressChanged();

    if (!__this->_suppressPropertyChangedProgress)
        __this->OnPropertyChanged(Trigger::ProgressName_);

    if (__this->_actions == NULL)
        return;

    int32_t dir = (diff > 0.0) ? 0 : 1;

    for (int32_t i = 0; i < uPtr(__this->_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_actions), uCRef<int32_t>(i), &ret3), ret3);

        if (!uPtr(action)->IsProgressTriggered())
            continue;

        float tp = uPtr(action)->ProgressWhen((float)uPtr(__this->_animState)->CurrentAnimatorsDuration());
        bool call = (dir == 0) ? (((double)tp >= prev_) && ((double)tp < cur_)) || ((tp == 1.0f) && (cur_ == 1.0)) : (((double)tp <= prev_) && ((double)tp > cur_)) || ((tp == 0.0f) && (cur_ == 0.0));

        if (call && ((action->When() == 2) || (action->When() == dir)))
            __this->AddDeferredAction(action);
    }
}

// public bool get_HasActions()
void Trigger__get_HasActions_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasActions();
}

// public bool get_HasAnimators()
void Trigger__get_HasAnimators_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasAnimators();
}

// public bool get_HasBackwardAnimation()
void Trigger__get_HasBackwardAnimation_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasBackwardAnimation();
}

// protected void InversePulse()
void Trigger__InversePulse_fn(Trigger* __this)
{
    __this->InversePulse();
}

// private bool IsForward(Fuse.Triggers.TriggerPlayState ps)
void Trigger__IsForward_fn(Trigger* __this, int32_t* ps, bool* __retval)
{
    *__retval = __this->IsForward(*ps);
}

// protected virtual void OnPlayStateChanged(Fuse.Triggers.TriggerPlayState state)
void Trigger__OnPlayStateChanged_fn(Trigger* __this, int32_t* state)
{
}

// internal override sealed void OnPreserveRootFrame()
void Trigger__OnPreserveRootFrame_fn(Trigger* __this)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnPreserveRootFrame()");
    ::g::Fuse::Node__OnPreserveRootFrame_fn(__this);
    __this->_rootProgress = __this->Progress();
    __this->_rootPlayState = __this->_lastPlayState;
}

// protected virtual void OnProgressChanged()
void Trigger__OnProgressChanged_fn(Trigger* __this)
{
}

// protected override void OnRooted()
void Trigger__OnRooted_fn(Trigger* __this)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnRooted()");
    ::g::Fuse::NodeGroupBase__OnRooted_fn(__this);
    __this->_rootCaptureIndex1 = ::g::Fuse::Node::RootCaptureIndex();

    if (__this->IsPreservedRootFrame())
    {
        __this->BypassSeek(__this->_rootProgress, 0);

        if (__this->_rootPlayState != 0)
            __this->PlayEnd((__this->_rootPlayState == 2) ? true : false, __this->_doneAction);
    }
    else
    {
        __this->_lastPlayState = 0;
        __this->_doneAction = NULL;
        __this->_doneOn = false;

        if (__this->_startAtZero)
        {
            __this->Start();
            __this->EnsureState(0.0);
        }
    }
}

// protected override void OnUnrooted()
void Trigger__OnUnrooted_fn(Trigger* __this)
{
    uStackFrame __("Fuse.Triggers.Trigger", "OnUnrooted()");
    __this->Stop(true);
    __this->CleanupState();
    __this->UnrootActions();
    ::g::Fuse::NodeGroupBase__OnUnrooted_fn(__this);
}

// private void PlayActions(Fuse.Triggers.Actions.TriggerWhen when)
void Trigger__PlayActions_fn(Trigger* __this, int32_t* when)
{
    __this->PlayActions(*when);
}

// protected void PlayEnd(bool on, [Uno.Action done])
void Trigger__PlayEnd_fn(Trigger* __this, bool* on, uDelegate* done)
{
    __this->PlayEnd(*on, done);
}

// private void PlayOn()
void Trigger__PlayOn_fn(Trigger* __this)
{
    __this->PlayOn();
}

// protected internal Fuse.Triggers.TriggerPlayState get_PlayState()
void Trigger__get_PlayState_fn(Trigger* __this, int32_t* __retval)
{
    *__retval = __this->PlayState();
}

// protected void PlayTo(double progress, [Fuse.Animations.AnimationVariant variant])
void Trigger__PlayTo_fn(Trigger* __this, double* progress, int32_t* variant)
{
    __this->PlayTo(*progress, *variant);
}

// public double get_Progress()
void Trigger__get_Progress_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// protected void Pulse()
void Trigger__Pulse_fn(Trigger* __this)
{
    __this->Pulse();
}

// protected void RequireLayout(Fuse.Visual visual)
void Trigger__RequireLayout_fn(Trigger* __this, ::g::Fuse::Visual* visual)
{
    __this->RequireLayout(visual);
}

// protected void Seek(double progress, [Fuse.Animations.AnimationVariant direction])
void Trigger__Seek_fn(Trigger* __this, double* progress, int32_t* direction)
{
    __this->Seek(*progress, *direction);
}

// private void SeekImpl(double progress, Fuse.Animations.AnimationVariant direction, Fuse.Animations.TriggerAnimationState.SeekFlags flags)
void Trigger__SeekImpl_fn(Trigger* __this, double* progress, int32_t* direction, int32_t* flags)
{
    __this->SeekImpl(*progress, *direction, *flags);
}

// private void SetDone(Uno.Action done, bool on)
void Trigger__SetDone_fn(Trigger* __this, uDelegate* done, bool* on)
{
    __this->SetDone(done, *on);
}

// private void SetPlayState(Fuse.Triggers.TriggerPlayState next)
void Trigger__SetPlayState_fn(Trigger* __this, int32_t* next)
{
    __this->SetPlayState(*next);
}

// private bool get_ShouldBypass()
void Trigger__get_ShouldBypass_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->ShouldBypass();
}

// private bool get_ShouldIgnore()
void Trigger__get_ShouldIgnore_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->ShouldIgnore();
}

// protected void Start()
void Trigger__Start_fn(Trigger* __this)
{
    __this->Start();
}

// protected void Stop([bool force])
void Trigger__Stop_fn(Trigger* __this, bool* force)
{
    __this->Stop(*force);
}

// private void StopAction()
void Trigger__StopAction_fn(Trigger* __this)
{
    __this->StopAction();
}

// public double get_StretchDuration()
void Trigger__get_StretchDuration_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->StretchDuration();
}

// public void set_StretchDuration(double value)
void Trigger__set_StretchDuration_fn(Trigger* __this, double* value)
{
    __this->StretchDuration(*value);
}

// public double get_TimeMultiplier()
void Trigger__get_TimeMultiplier_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void set_TimeMultiplier(double value)
void Trigger__set_TimeMultiplier_fn(Trigger* __this, double* value)
{
    __this->TimeMultiplier(*value);
}

// private void UnrootActions()
void Trigger__UnrootActions_fn(Trigger* __this)
{
    __this->UnrootActions();
}

// private Fuse.Triggers.TriggerPlayState WhatDirection(double diff, bool animating)
void Trigger__WhatDirection_fn(Trigger* __this, double* diff, bool* animating, int32_t* __retval)
{
    *__retval = __this->WhatDirection(*diff, *animating);
}

bool Trigger::_warnBypass_;
::g::Uno::UX::Selector Trigger::ProgressName_;

// protected generated Trigger() [instance]
void Trigger::ctor_4()
{
    _noLayoutFrame = -1;
    ctor_3(0);
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction> get_Actions() [instance]
uObject* Trigger::Actions()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Actions()");

    if (_actions == NULL)
        _actions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)));

    return (uObject*)_actions;
}

// protected void Activate([Uno.Action done]) [instance]
void Trigger::Activate(uDelegate* done)
{
    if (ShouldIgnore())
        return;

    if (ShouldBypass())
        BypassActivate();
    else
        DirectActivate(done);
}

// private void AddDeferredAction(Fuse.Triggers.Actions.TriggerAction i) [instance]
void Trigger::AddDeferredAction(::g::Fuse::Triggers::Actions::TriggerAction* i)
{
    uStackFrame __("Fuse.Triggers.Trigger", "AddDeferredAction(Fuse.Triggers.Actions.TriggerAction)");
    Trigger__DeferredItem* collection1;
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Trigger__DeferredItem__Perform_fn, uPtr((collection1 = Trigger__DeferredItem::New1(), uPtr(collection1)->Action = i, uPtr(collection1)->Node = this, collection1))), -1, 2);
}

// public Fuse.Animations.TriggerAnimation get_Animation() [instance]
::g::Fuse::Animations::TriggerAnimation* Trigger::Animation()
{
    if (_animation == NULL)
        _animation = ::g::Fuse::Animations::TriggerAnimation::New1();

    return _animation;
}

// public void set_Animation(Fuse.Animations.TriggerAnimation value) [instance]
void Trigger::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    _animation = value;
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() [instance]
uObject* Trigger::Animators()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Animators()");
    return uPtr(Animation())->Animators();
}

// public Fuse.Animations.TriggerAnimation get_BackwardAnimation() [instance]
::g::Fuse::Animations::TriggerAnimation* Trigger::BackwardAnimation()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_BackwardAnimation()");
    return uPtr(Animation())->Backward();
}

// public void set_BackwardAnimation(Fuse.Animations.TriggerAnimation value) [instance]
void Trigger::BackwardAnimation(::g::Fuse::Animations::TriggerAnimation* value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_BackwardAnimation(Fuse.Animations.TriggerAnimation)");
    uPtr(Animation())->Backward(value);
}

// public Fuse.Triggers.TriggerBypassMode get_Bypass() [instance]
int32_t Trigger::Bypass()
{
    return _bypass;
}

// public void set_Bypass(Fuse.Triggers.TriggerBypassMode value) [instance]
void Trigger::Bypass(int32_t value)
{
    _bypass = value;

    if ((value == 3) && !Trigger::_warnBypass_)
    {
        ::g::Fuse::Diagnostics::Deprecated(uString::Const("ExceptLayout mode indicates a problem in trigger expecations and should no tbe used"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Trigger.uno"), 110, uString::Const("set_Bypass"));
        Trigger::_warnBypass_ = true;
    }
}

// protected void BypassActivate() [instance]
void Trigger::BypassActivate()
{
    BypassSeek(1.0, 0);
    PlayOn();
}

// protected void BypassDeactivate() [instance]
void Trigger::BypassDeactivate()
{
    BypassSeek(0.0, 0);
    DirectDeactivate();
}

// protected void BypassSeek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance]
void Trigger::BypassSeek(double progress, int32_t direction)
{
    uStackFrame __("Fuse.Triggers.Trigger", "BypassSeek(double,[Fuse.Animations.AnimationVariant])");
    SeekImpl(progress, direction, 3);
}

// private void CleanupStableState() [instance]
void Trigger::CleanupStableState()
{
    uStackFrame __("Fuse.Triggers.Trigger", "CleanupStableState()");

    if ((_animState == NULL) || !uPtr(_animState)->IsStable())
        return;

    if (uPtr(_animState)->ProgressFullOff() && !_startAtZero)
        CleanupState();
}

// private void CleanupState() [instance]
void Trigger::CleanupState()
{
    uStackFrame __("Fuse.Triggers.Trigger", "CleanupState()");

    if (_animState != NULL)
    {
        uPtr(_animState)->Dispose();
        _animState = NULL;
    }
}

// private void CreateState() [instance]
void Trigger::CreateState()
{
    uStackFrame __("Fuse.Triggers.Trigger", "CreateState()");
    CleanupState();
    EnsureAnimationLength();
    _animState = uPtr(Animation())->CreateState(Parent());
    uPtr(_animState)->Feedback = (uObject*)this;
}

// public double get_CrossFadeDuration() [instance]
double Trigger::CrossFadeDuration()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_CrossFadeDuration()");
    return uPtr(Animation())->CrossFadeDuration();
}

// public void set_CrossFadeDuration(double value) [instance]
void Trigger::CrossFadeDuration(double value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_CrossFadeDuration(double)");
    uPtr(Animation())->CrossFadeDuration(value);
}

// protected void Deactivate() [instance]
void Trigger::Deactivate()
{
    if (ShouldIgnore())
        return;

    if (ShouldBypass())
        BypassDeactivate();
    else
        DirectDeactivate();
}

// protected void DirectActivate([Uno.Action done]) [instance]
void Trigger::DirectActivate(uDelegate* done)
{
    uStackFrame __("Fuse.Triggers.Trigger", "DirectActivate([Uno.Action])");
    PlayEnd(true, done);
}

// protected void DirectDeactivate() [instance]
void Trigger::DirectDeactivate()
{
    uStackFrame __("Fuse.Triggers.Trigger", "DirectDeactivate()");
    PlayEnd(false, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Trigger__StopAction_fn, this));
}

// protected void DirectSeek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance]
void Trigger::DirectSeek(double progress, int32_t direction)
{
    uStackFrame __("Fuse.Triggers.Trigger", "DirectSeek(double,[Fuse.Animations.AnimationVariant])");
    SeekImpl(progress, direction, 1);
}

// private void EnsureAnimationLength() [instance]
void Trigger::EnsureAnimationLength()
{
    uStackFrame __("Fuse.Triggers.Trigger", "EnsureAnimationLength()");
    ::g::Fuse::Triggers::Actions::TriggerAction* ret2;

    if (!HasActions())
        return;

    double animFore = uPtr(Animation())->GetAnimatorsDuration(0);
    double animBack = uPtr(Animation())->GetAnimatorsDuration(1);
    double actFore = 0.0;
    double actBack = 0.0;

    for (int32_t i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int32_t>(i), &ret2), ret2);
        float when = uPtr(action)->Delay();

        if ((action->When() == 0) || (action->When() == 2))
            actFore = ::g::Uno::Math::Max((double)when, actFore);

        if ((action->When() == 1) || (action->When() == 2))
            actBack = ::g::Uno::Math::Max((double)when, actBack);
    }

    if ((actFore <= animFore) && (actBack <= animBack))
        return;

    ::g::Fuse::Animations::Nothing* n = ::g::Fuse::Animations::Nothing::New2();
    n->Delay(actFore);
    n->DelayBack(actBack);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), n);

    if (HasBackwardAnimation())
    {
        n = ::g::Fuse::Animations::Nothing::New2();
        n->Delay(actBack);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(BackwardAnimation())->Animators()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), n);
    }
}

// private bool EnsureState(double progress) [instance]
bool Trigger::EnsureState(double progress)
{
    uStackFrame __("Fuse.Triggers.Trigger", "EnsureState(double)");

    if ((progress > 0.0) || _startAtZero)
    {
        if (_animState == NULL)
            CreateState();
    }

    return _animState != NULL;
}

// public bool get_HasActions() [instance]
bool Trigger::HasActions()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_HasActions()");
    return (_actions != NULL) && (uPtr(_actions)->Count() > 0);
}

// public bool get_HasAnimators() [instance]
bool Trigger::HasAnimators()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_HasAnimators()");
    return (_animation != NULL) && uPtr(_animation)->HasAnimators();
}

// public bool get_HasBackwardAnimation() [instance]
bool Trigger::HasBackwardAnimation()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_HasBackwardAnimation()");
    return uPtr(Animation())->HasBackward();
}

// protected void InversePulse() [instance]
void Trigger::InversePulse()
{
    uStackFrame __("Fuse.Triggers.Trigger", "InversePulse()");
    PlayEnd(false, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Trigger__PlayOn_fn, this));
}

// private bool IsForward(Fuse.Triggers.TriggerPlayState ps) [instance]
bool Trigger::IsForward(int32_t ps)
{
    return (ps == 2) || (ps == 4);
}

// private void PlayActions(Fuse.Triggers.Actions.TriggerWhen when) [instance]
void Trigger::PlayActions(int32_t when)
{
    uStackFrame __("Fuse.Triggers.Trigger", "PlayActions(Fuse.Triggers.Actions.TriggerWhen)");
    ::g::Fuse::Triggers::Actions::TriggerAction* ret4;

    if (_actions != NULL)

        for (int32_t i = 0; i < uPtr(_actions)->Count(); ++i)
        {
            ::g::Fuse::Triggers::Actions::TriggerAction* act = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int32_t>(i), &ret4), ret4);

            if (uPtr(act)->When() == when)
                uPtr(act)->PerformFromNode(this);
        }
}

// protected void PlayEnd(bool on, [Uno.Action done]) [instance]
void Trigger::PlayEnd(bool on, uDelegate* done)
{
    uStackFrame __("Fuse.Triggers.Trigger", "PlayEnd(bool,[Uno.Action])");

    if (on)
        Start();

    SetDone(done, on);

    if (((on && (Progress() < 1.0)) || (!on && (Progress() > 0.0))) || (_lastPlayState != 0))
        SetPlayState(on ? 2 : 1);

    if ((!on && (Progress() <= 0.0)) && (_animState == NULL))
    {
        if (::g::Uno::Delegate::op_Inequality(done, NULL))
            uPtr(done)->InvokeVoid();

        _doneAction = NULL;
    }
    else if (EnsureState((double)(on ? 1 : 0)))
        uPtr(_animState)->PlayEnd(on);
}

// private void PlayOn() [instance]
void Trigger::PlayOn()
{
    uStackFrame __("Fuse.Triggers.Trigger", "PlayOn()");
    PlayEnd(true, NULL);
}

// protected internal Fuse.Triggers.TriggerPlayState get_PlayState() [instance]
int32_t Trigger::PlayState()
{
    return _lastPlayState;
}

// protected void PlayTo(double progress, [Fuse.Animations.AnimationVariant variant]) [instance]
void Trigger::PlayTo(double progress, int32_t variant)
{
    uStackFrame __("Fuse.Triggers.Trigger", "PlayTo(double,[Fuse.Animations.AnimationVariant])");

    if (progress > Progress())
        SetPlayState(2);
    else if (progress < Progress())
        SetPlayState(1);

    if (EnsureState(progress))
        uPtr(_animState)->PlayToProgress(progress, variant, 1);
}

// public double get_Progress() [instance]
double Trigger::Progress()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_Progress()");

    if (_animState != NULL)
        return uPtr(_animState)->Progress();

    return 0.0;
}

// protected void Pulse() [instance]
void Trigger::Pulse()
{
    uStackFrame __("Fuse.Triggers.Trigger", "Pulse()");

    if (ShouldIgnore())
        return;

    SetPlayState(0);
    DirectActivate(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Trigger__DirectDeactivate_fn, this));
}

// protected void RequireLayout(Fuse.Visual visual) [instance]
void Trigger::RequireLayout(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Triggers.Trigger", "RequireLayout(Fuse.Visual)");

    if ((visual == NULL) || !uPtr(visual)->HasMarginBox())
        _noLayoutFrame = ::g::Fuse::UpdateManager::FrameIndex();
}

// protected void Seek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance]
void Trigger::Seek(double progress, int32_t direction)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Seek(double,[Fuse.Animations.AnimationVariant])");

    if (ShouldIgnore())
        return;

    if (ShouldBypass())
        BypassSeek(progress, direction);
    else
        DirectSeek(progress, direction);
}

// private void SeekImpl(double progress, Fuse.Animations.AnimationVariant direction, Fuse.Animations.TriggerAnimationState.SeekFlags flags) [instance]
void Trigger::SeekImpl(double progress, int32_t direction, int32_t flags)
{
    uStackFrame __("Fuse.Triggers.Trigger", "SeekImpl(double,Fuse.Animations.AnimationVariant,Fuse.Animations.TriggerAnimationState.SeekFlags)");

    if (progress > 0.0)
        Start();
    else
        Stop(false);

    if (EnsureState(progress))
        uPtr(_animState)->SeekProgress(progress, direction, flags);
}

// private void SetDone(Uno.Action done, bool on) [instance]
void Trigger::SetDone(uDelegate* done, bool on)
{
    _doneOn = on;
    _doneAction = done;
}

// private void SetPlayState(Fuse.Triggers.TriggerPlayState next) [instance]
void Trigger::SetPlayState(int32_t next)
{
    uStackFrame __("Fuse.Triggers.Trigger", "SetPlayState(Fuse.Triggers.TriggerPlayState)");
    ::g::Fuse::Triggers::Actions::TriggerAction* ret5;

    if (next == _lastPlayState)
        return;

    _lastPlayState = next;
    OnPlayStateChanged(next);

    if ((next == 0) || (_actions == NULL))
        return;

    int32_t dir = IsForward(next) ? 0 : 1;

    for (int32_t i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int32_t>(i), &ret5), ret5);

        if (uPtr(action)->IsProgressTriggered())
            continue;

        if ((uPtr(action)->When() == dir) || (uPtr(action)->When() == 2))
            AddDeferredAction(action);
    }
}

// private bool get_ShouldBypass() [instance]
bool Trigger::ShouldBypass()
{
    if (Bypass() == 1)
        return false;

    if (IsPreservedRootFrame() && (Bypass() != 2))
        return false;

    if ((_noLayoutFrame == ::g::Fuse::UpdateManager::FrameIndex()) && (Bypass() != 3))
        return true;

    if (::g::Fuse::Node::IsRootCapture(_rootCaptureIndex1))
        return true;
    else
        _rootCaptureIndex1 = 0;

    return !IsRootingCompleted();
}

// private bool get_ShouldIgnore() [instance]
bool Trigger::ShouldIgnore()
{
    return !IsRootingStarted();
}

// protected void Start() [instance]
void Trigger::Start()
{
    uStackFrame __("Fuse.Triggers.Trigger", "Start()");

    if (!_isStarted)
    {
        if (!IsRootingStarted())
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(uString::Const("Trigger started prior to being rooted: "), this)));

        _isStarted = true;
        UseContent(true);
        PlayActions(3);
    }
}

// protected void Stop([bool force]) [instance]
void Trigger::Stop(bool force)
{
    uStackFrame __("Fuse.Triggers.Trigger", "Stop([bool])");

    if (_startAtZero && !force)
        return;

    if (_isStarted)
    {
        PlayActions(4);
        UseContent(false);
        _isStarted = false;
    }
}

// private void StopAction() [instance]
void Trigger::StopAction()
{
    uStackFrame __("Fuse.Triggers.Trigger", "StopAction()");
    Stop(false);
}

// public double get_StretchDuration() [instance]
double Trigger::StretchDuration()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_StretchDuration()");
    return uPtr(Animation())->StretchDuration();
}

// public void set_StretchDuration(double value) [instance]
void Trigger::StretchDuration(double value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_StretchDuration(double)");
    uPtr(Animation())->StretchDuration(value);
}

// public double get_TimeMultiplier() [instance]
double Trigger::TimeMultiplier()
{
    uStackFrame __("Fuse.Triggers.Trigger", "get_TimeMultiplier()");
    return uPtr(Animation())->TimeMultiplier();
}

// public void set_TimeMultiplier(double value) [instance]
void Trigger::TimeMultiplier(double value)
{
    uStackFrame __("Fuse.Triggers.Trigger", "set_TimeMultiplier(double)");
    uPtr(Animation())->TimeMultiplier(value);
}

// private void UnrootActions() [instance]
void Trigger::UnrootActions()
{
    uStackFrame __("Fuse.Triggers.Trigger", "UnrootActions()");
    ::g::Fuse::Triggers::Actions::TriggerAction* ret6;

    if (_actions == NULL)
        return;

    for (int32_t i = 0; i < uPtr(_actions)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int32_t>(i), &ret6), ret6))->Unroot();
}

// private Fuse.Triggers.TriggerPlayState WhatDirection(double diff, bool animating) [instance]
int32_t Trigger::WhatDirection(double diff, bool animating)
{
    if (animating)
        return (diff > 0.0) ? 2 : (diff < 0.0) ? 1 : 0;

    return (diff > 0.0) ? 4 : (diff < 0.0) ? 3 : 0;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Trigger.uno
// --------------------------------------------------------------

// public enum TriggerBypassMode
uEnumType* TriggerBypassMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.TriggerBypassMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Standard", 0LL,
        "Never", 1LL,
        "Rooting", 2LL,
        "ExceptLayout", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Trigger.uno
// --------------------------------------------------------------

// public enum TriggerPlayState
uEnumType* TriggerPlayState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.TriggerPlayState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Stopped", 0LL,
        "Backward", 1LL,
        "Forward", 2LL,
        "SeekBackward", 3LL,
        "SeekForward", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/BusyTask.uno
// ---------------------------------------------------------------

// internal enum BusyTask.Type
uEnumType* BusyTask__Type_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.BusyTask.Type", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "RootingPersistent", 0LL,
        "UnrootingDone", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileBool.uno
// ----------------------------------------------------------------

// public abstract class WhileBool
// {
static void WhileBool_build(uType* type)
{
    type->SetBase(::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileBool_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileBool_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileBool_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileBool_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WhileBool_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileBool_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileBool_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileBool_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileBool_type, interface8),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(WhileBool_type, interface9),
        ::g::Fuse::Triggers::Actions::IToggleable_typeof(), offsetof(WhileBool_type, interface10));
    type->SetFields(45);
    type->Reflection.SetFunctions(3,
        new uFunction("Toggle", NULL, (void*)WhileBool__Toggle_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Value", NULL, (void*)WhileBool__get_Value1_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)WhileBool__set_Value1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

WhileBool_type* WhileBool_typeof()
{
    static uSStrong<WhileBool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileValue_typeof();
    options.FieldCount = 45;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(WhileBool);
    options.TypeSize = sizeof(WhileBool_type);
    type = (WhileBool_type*)uClassType::New("Fuse.Triggers.WhileBool", options);
    type->fp_build_ = WhileBool_build;
    type->interface10.fp_Toggle = (void(*)(uObject*))WhileBool__Toggle_fn;
    type->interface9.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// protected generated WhileBool()
void WhileBool__ctor_7_fn(WhileBool* __this)
{
    __this->ctor_7();
}

// public void Toggle()
void WhileBool__Toggle_fn(WhileBool* __this)
{
    __this->Toggle();
}

// public new bool get_Value()
void WhileBool__get_Value1_fn(WhileBool* __this, bool* __retval)
{
    *__retval = __this->Value1();
}

// public new void set_Value(bool value)
void WhileBool__set_Value1_fn(WhileBool* __this, bool* value)
{
    __this->Value1(*value);
}

// protected generated WhileBool() [instance]
void WhileBool::ctor_7()
{
    ctor_6();
}

// public void Toggle() [instance]
void WhileBool::Toggle()
{
    Value1(!Value1());
}

// public new bool get_Value() [instance]
bool WhileBool::Value1()
{
    uStackFrame __("Fuse.Triggers.WhileBool", "get_Value()");
    bool ret1;
    return (::g::Fuse::Triggers::WhileValue__get_Value_fn(this, &ret1), ret1);
}

// public new void set_Value(bool value) [instance]
void WhileBool::Value1(bool value)
{
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(this, uCRef(value));
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileBusy.uno
// ----------------------------------------------------------------

// public class WhileBusy
// {
static void WhileBusy_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Triggers::BusyTask_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileBusy_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileBusy_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileBusy_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileBusy_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WhileBusy_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileBusy_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileBusy_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileBusy_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileBusy_type, interface8),
        ::g::Fuse::Triggers::IBusyHandler_typeof(), offsetof(WhileBusy_type, interface9));
    type->SetFields(40,
        ::g::Fuse::Triggers::BusyTaskActivity_typeof(), offsetof(WhileBusy, _activity), 0,
        ::g::Fuse::Triggers::BusyTaskMatch_typeof(), offsetof(WhileBusy, _match), 0,
        ::g::Uno::Bool_typeof(), offsetof(WhileBusy, _IsHandled), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Activity", NULL, (void*)WhileBusy__get_Activity_fn, 0, false, ::g::Fuse::Triggers::BusyTaskActivity_typeof(), 0),
        new uFunction("set_Activity", NULL, (void*)WhileBusy__set_Activity_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::BusyTaskActivity_typeof()),
        new uFunction("get_IsHandled", NULL, (void*)WhileBusy__get_IsHandled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsHandled", NULL, (void*)WhileBusy__set_IsHandled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Match", NULL, (void*)WhileBusy__get_Match_fn, 0, false, ::g::Fuse::Triggers::BusyTaskMatch_typeof(), 0),
        new uFunction("set_Match", NULL, (void*)WhileBusy__set_Match_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::BusyTaskMatch_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileBusy__New2_fn, 0, true, type, 0));
}

WhileBusy_type* WhileBusy_typeof()
{
    static uSStrong<WhileBusy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileBusy);
    options.TypeSize = sizeof(WhileBusy_type);
    type = (WhileBusy_type*)uClassType::New("Fuse.Triggers.WhileBusy", options);
    type->fp_build_ = WhileBusy_build;
    type->fp_ctor_ = (void*)WhileBusy__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileBusy__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileBusy__OnUnrooted_fn;
    type->interface9.fp_get_BusyActivityHandled = (void(*)(uObject*, int32_t*))WhileBusy__FuseTriggersIBusyHandlerget_BusyActivityHandled_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileBusy()
void WhileBusy__ctor_6_fn(WhileBusy* __this)
{
    __this->ctor_6();
}

// public Fuse.Triggers.BusyTaskActivity get_Activity()
void WhileBusy__get_Activity_fn(WhileBusy* __this, int32_t* __retval)
{
    *__retval = __this->Activity();
}

// public void set_Activity(Fuse.Triggers.BusyTaskActivity value)
void WhileBusy__set_Activity_fn(WhileBusy* __this, int32_t* value)
{
    __this->Activity(*value);
}

// private Fuse.Triggers.BusyTaskActivity Fuse.Triggers.IBusyHandler.get_BusyActivityHandled()
void WhileBusy__FuseTriggersIBusyHandlerget_BusyActivityHandled_fn(WhileBusy* __this, int32_t* __retval)
{
    return *__retval = __this->IsHandled() ? __this->Activity() : 0, void();
}

// public generated bool get_IsHandled()
void WhileBusy__get_IsHandled_fn(WhileBusy* __this, bool* __retval)
{
    *__retval = __this->IsHandled();
}

// public generated void set_IsHandled(bool value)
void WhileBusy__set_IsHandled_fn(WhileBusy* __this, bool* value)
{
    __this->IsHandled(*value);
}

// public Fuse.Triggers.BusyTaskMatch get_Match()
void WhileBusy__get_Match_fn(WhileBusy* __this, int32_t* __retval)
{
    *__retval = __this->Match();
}

// public void set_Match(Fuse.Triggers.BusyTaskMatch value)
void WhileBusy__set_Match_fn(WhileBusy* __this, int32_t* value)
{
    __this->Match(*value);
}

// public generated WhileBusy New()
void WhileBusy__New2_fn(WhileBusy** __retval)
{
    *__retval = WhileBusy::New2();
}

// protected override sealed void OnRooted()
void WhileBusy__OnRooted_fn(WhileBusy* __this)
{
    uStackFrame __("Fuse.Triggers.WhileBusy", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::Triggers::BusyTask::AddListener(__this->Parent(), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WhileBusy__Update_fn, __this));
    __this->Update();
}

// protected override sealed void OnUnrooted()
void WhileBusy__OnUnrooted_fn(WhileBusy* __this)
{
    uStackFrame __("Fuse.Triggers.WhileBusy", "OnUnrooted()");
    ::g::Fuse::Triggers::BusyTask::RemoveListener(__this->Parent(), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WhileBusy__Update_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void Update()
void WhileBusy__Update_fn(WhileBusy* __this)
{
    __this->Update();
}

// public generated WhileBusy() [instance]
void WhileBusy::ctor_6()
{
    _activity = 15;
    ctor_5();
}

// public Fuse.Triggers.BusyTaskActivity get_Activity() [instance]
int32_t WhileBusy::Activity()
{
    return _activity;
}

// public void set_Activity(Fuse.Triggers.BusyTaskActivity value) [instance]
void WhileBusy::Activity(int32_t value)
{
    uStackFrame __("Fuse.Triggers.WhileBusy", "set_Activity(Fuse.Triggers.BusyTaskActivity)");
    _activity = value;

    if (IsRootingCompleted())
        Update();
}

// public generated bool get_IsHandled() [instance]
bool WhileBusy::IsHandled()
{
    return _IsHandled;
}

// public generated void set_IsHandled(bool value) [instance]
void WhileBusy::IsHandled(bool value)
{
    _IsHandled = value;
}

// public Fuse.Triggers.BusyTaskMatch get_Match() [instance]
int32_t WhileBusy::Match()
{
    return _match;
}

// public void set_Match(Fuse.Triggers.BusyTaskMatch value) [instance]
void WhileBusy::Match(int32_t value)
{
    uStackFrame __("Fuse.Triggers.WhileBusy", "set_Match(Fuse.Triggers.BusyTaskMatch)");
    _match = value;

    if (IsRootingCompleted())
        Update();
}

// private void Update() [instance]
void WhileBusy::Update()
{
    uStackFrame __("Fuse.Triggers.WhileBusy", "Update()");

    if (Activity() == 0)
        return;

    int32_t act = ::g::Fuse::Triggers::BusyTask::GetBusyActivity(Parent(), Match());
    SetActive((act & Activity()) != 0);
}

// public generated WhileBusy New() [static]
WhileBusy* WhileBusy::New2()
{
    WhileBusy* obj1 = (WhileBusy*)uNew(WhileBusy_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhilePlaying.uno
// -------------------------------------------------------------------

// public sealed class WhileCompleted
// {
// static generated WhileCompleted()
static void WhileCompleted__cctor_2_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    WhileCompleted::_whileCompletedProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhileCompleted_build(uType* type)
{
    ::TYPES[49] = ::g::Uno::Bool_typeof();
    ::TYPES[50] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Triggers.WhileCompleted>*/, type, NULL);
    ::TYPES[51] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Triggers.WhileCompleted>*/, type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&WhileCompleted::_whileCompletedProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileCompleted__New2_fn, 0, true, type, 0),
        new uFunction("SetState", NULL, (void*)WhileCompleted__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::TYPES[49/*bool*/]));
}

::g::Fuse::Triggers::Trigger_type* WhileCompleted_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileCompleted);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileCompleted", options);
    type->fp_build_ = WhileCompleted_build;
    type->fp_ctor_ = (void*)WhileCompleted__New2_fn;
    type->fp_cctor_ = WhileCompleted__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileCompleted__OnRooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileCompleted()
void WhileCompleted__ctor_6_fn(WhileCompleted* __this)
{
    __this->ctor_6();
}

// private static bool IsCompleted(Fuse.Visual n)
void WhileCompleted__IsCompleted_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhileCompleted::IsCompleted(n);
}

// public generated WhileCompleted New()
void WhileCompleted__New2_fn(WhileCompleted** __retval)
{
    *__retval = WhileCompleted::New2();
}

// protected override sealed void OnRooted()
void WhileCompleted__OnRooted_fn(WhileCompleted* __this)
{
    uStackFrame __("Fuse.Triggers.WhileCompleted", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhileCompleted::IsCompleted(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool paused)
void WhileCompleted__SetState_fn(::g::Fuse::Visual* n, bool* paused)
{
    WhileCompleted::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileCompleted::_whileCompletedProp_;

// public generated WhileCompleted() [instance]
void WhileCompleted::ctor_6()
{
    ctor_5();
}

// private static bool IsCompleted(Fuse.Visual n) [static]
bool WhileCompleted::IsCompleted(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Triggers.WhileCompleted", "IsCompleted(Fuse.Visual)");
    WhileCompleted_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileCompleted::_whileCompletedProp_);

    if (!uIs(v, ::TYPES[49/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[49/*bool*/], v);
}

// public generated WhileCompleted New() [static]
WhileCompleted* WhileCompleted::New2()
{
    WhileCompleted* obj1 = (WhileCompleted*)uNew(WhileCompleted_typeof());
    obj1->ctor_6();
    return obj1;
}

// public static void SetState(Fuse.Visual n, bool paused) [static]
void WhileCompleted::SetState(::g::Fuse::Visual* n, bool paused)
{
    uStackFrame __("Fuse.Triggers.WhileCompleted", "SetState(Fuse.Visual,bool)");
    WhileCompleted_typeof()->Init();
    bool v = WhileCompleted::IsCompleted(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileCompleted::_whileCompletedProp_, uBox(::TYPES[49/*bool*/], paused));

        for (WhileCompleted* wl = (WhileCompleted*)n->FirstChild(::TYPES[50/*Fuse.Visual.FirstChild<Fuse.Triggers.WhileCompleted>*/]); wl != NULL; wl = (WhileCompleted*)uPtr(wl)->NextSibling(::TYPES[51/*Fuse.Node.NextSibling<Fuse.Triggers.WhileCompleted>*/]))
            if (uPtr(wl)->IsRootingCompleted())
                uPtr(wl)->SetActive(paused);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.12.0/Triggers/ContainsText.uno
// ---------------------------------------------------------------------------------------

// public class WhileContainsText
// {
static void WhileContainsText_build(uType* type)
{
    ::STRINGS[47] = uString::Const("No TextInput or Source found for string");
    ::STRINGS[13] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.12.0/Triggers/ContainsText.uno");
    ::STRINGS[17] = uString::Const("OnRooted");
    ::TYPES[52] = ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[53] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40,
        ::TYPES[52/*Fuse.Triggers.IValue<string>*/], offsetof(WhileContainsText, _source), 0,
        ::TYPES[52/*Fuse.Triggers.IValue<string>*/], offsetof(WhileContainsText, _value), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)WhileContainsText__New2_fn, 0, true, type, 0),
        new uFunction("get_Source", NULL, (void*)WhileContainsText__get_Source_fn, 0, false, ::TYPES[52/*Fuse.Triggers.IValue<string>*/], 0),
        new uFunction("set_Source", NULL, (void*)WhileContainsText__set_Source_fn, 0, false, uVoid_typeof(), 1, ::TYPES[52/*Fuse.Triggers.IValue<string>*/]));
}

::g::Fuse::Triggers::Trigger_type* WhileContainsText_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileContainsText);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileContainsText", options);
    type->fp_build_ = WhileContainsText_build;
    type->fp_ctor_ = (void*)WhileContainsText__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileContainsText__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileContainsText__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileContainsText()
void WhileContainsText__ctor_6_fn(WhileContainsText* __this)
{
    __this->ctor_6();
}

// public generated WhileContainsText New()
void WhileContainsText__New2_fn(WhileContainsText** __retval)
{
    *__retval = WhileContainsText::New2();
}

// protected override sealed void OnRooted()
void WhileContainsText__OnRooted_fn(WhileContainsText* __this)
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", "OnRooted()");
    uString* ret2;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (__this->Source() != NULL)
        __this->_value = __this->Source();
    else
        __this->_value = uAs<uObject*>(__this->Parent(), ::TYPES[52/*Fuse.Triggers.IValue<string>*/]);

    if (__this->_value != NULL)
    {
        ::g::Fuse::Triggers::IValue::add_ValueChanged(uInterface(uPtr(__this->_value), ::TYPES[52/*Fuse.Triggers.IValue<string>*/]), uDelegate::New(::TYPES[53/*Uno.UX.ValueChangedHandler<string>*/], (void*)WhileContainsText__OnValueChanged_fn, __this));
        __this->SetActive(!::g::Uno::String::IsNullOrEmpty((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(__this->_value), ::TYPES[52/*Fuse.Triggers.IValue<string>*/]), &ret2), ret2)));
    }
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[47/*"No TextInpu...*/], __this, ::STRINGS[13/*"/usr/local/...*/], 49, ::STRINGS[17/*"OnRooted"*/], NULL);
}

// protected override sealed void OnUnrooted()
void WhileContainsText__OnUnrooted_fn(WhileContainsText* __this)
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", "OnUnrooted()");

    if (__this->_value != NULL)
    {
        ::g::Fuse::Triggers::IValue::remove_ValueChanged(uInterface(uPtr(__this->_value), ::TYPES[52/*Fuse.Triggers.IValue<string>*/]), uDelegate::New(::TYPES[53/*Uno.UX.ValueChangedHandler<string>*/], (void*)WhileContainsText__OnValueChanged_fn, __this));
        __this->_value = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args)
void WhileContainsText__OnValueChanged_fn(WhileContainsText* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// public Fuse.Triggers.IValue<string> get_Source()
void WhileContainsText__get_Source_fn(WhileContainsText* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Triggers.IValue<string> value)
void WhileContainsText__set_Source_fn(WhileContainsText* __this, uObject* value)
{
    __this->Source(value);
}

// public generated WhileContainsText() [instance]
void WhileContainsText::ctor_6()
{
    ctor_5();
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance]
void WhileContainsText::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileContainsText", "OnValueChanged(object,Uno.UX.ValueChangedArgs<string>)");
    uString* ret3;
    SetActive(!::g::Uno::String::IsNullOrEmpty((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(_value), ::TYPES[52/*Fuse.Triggers.IValue<string>*/]), &ret3), ret3)));
}

// public Fuse.Triggers.IValue<string> get_Source() [instance]
uObject* WhileContainsText::Source()
{
    return _source;
}

// public void set_Source(Fuse.Triggers.IValue<string> value) [instance]
void WhileContainsText::Source(uObject* value)
{
    _source = value;
}

// public generated WhileContainsText New() [static]
WhileContainsText* WhileContainsText::New2()
{
    WhileContainsText* obj1 = (WhileContainsText*)uNew(WhileContainsText_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Disabled.uno
// ---------------------------------------------------------------

// public sealed class WhileDisabled
// {
static void WhileDisabled_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface8));
    type->SetFields(40);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileDisabled__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileDisabled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileDisabled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type);
    type = (::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileDisabled", options);
    type->fp_build_ = WhileDisabled_build;
    type->fp_ctor_ = (void*)WhileDisabled__New2_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WhileEnabledDisabledTrigger*, bool*))WhileDisabled__get_IsActive_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileDisabled()
void WhileDisabled__ctor_7_fn(WhileDisabled* __this)
{
    __this->ctor_7();
}

// protected override sealed bool get_IsActive()
void WhileDisabled__get_IsActive_fn(WhileDisabled* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileDisabled", "get_IsActive()");
    return *__retval = (__this->Parent() != NULL) ? !uPtr(__this->Parent())->IsContextEnabled() : false, void();
}

// public generated WhileDisabled New()
void WhileDisabled__New2_fn(WhileDisabled** __retval)
{
    *__retval = WhileDisabled::New2();
}

// public generated WhileDisabled() [instance]
void WhileDisabled::ctor_7()
{
    ctor_6();
}

// public generated WhileDisabled New() [static]
WhileDisabled* WhileDisabled::New2()
{
    WhileDisabled* obj1 = (WhileDisabled*)uNew(WhileDisabled_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Disabled.uno
// ---------------------------------------------------------------

// public sealed class WhileEnabled
// {
static void WhileEnabled_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type, interface8));
    type->SetFields(40);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileEnabled__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileEnabled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileEnabled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type);
    type = (::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileEnabled", options);
    type->fp_build_ = WhileEnabled_build;
    type->fp_ctor_ = (void*)WhileEnabled__New2_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WhileEnabledDisabledTrigger*, bool*))WhileEnabled__get_IsActive_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileEnabled()
void WhileEnabled__ctor_7_fn(WhileEnabled* __this)
{
    __this->ctor_7();
}

// protected override sealed bool get_IsActive()
void WhileEnabled__get_IsActive_fn(WhileEnabled* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileEnabled", "get_IsActive()");
    return *__retval = (__this->Parent() != NULL) ? uPtr(__this->Parent())->IsContextEnabled() : true, void();
}

// public generated WhileEnabled New()
void WhileEnabled__New2_fn(WhileEnabled** __retval)
{
    *__retval = WhileEnabled::New2();
}

// public generated WhileEnabled() [instance]
void WhileEnabled::ctor_7()
{
    ctor_6();
}

// public generated WhileEnabled New() [static]
WhileEnabled* WhileEnabled::New2()
{
    WhileEnabled* obj1 = (WhileEnabled*)uNew(WhileEnabled_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Disabled.uno
// ---------------------------------------------------------------

// public abstract class WhileEnabledDisabledTrigger
// {
static void WhileEnabledDisabledTrigger_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileEnabledDisabledTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileEnabledDisabledTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileEnabledDisabledTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileEnabledDisabledTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WhileEnabledDisabledTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileEnabledDisabledTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileEnabledDisabledTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileEnabledDisabledTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileEnabledDisabledTrigger_type, interface8));
    type->SetFields(40);
}

WhileEnabledDisabledTrigger_type* WhileEnabledDisabledTrigger_typeof()
{
    static uSStrong<WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileEnabledDisabledTrigger);
    options.TypeSize = sizeof(WhileEnabledDisabledTrigger_type);
    type = (WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileEnabledDisabledTrigger", options);
    type->fp_build_ = WhileEnabledDisabledTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileEnabledDisabledTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileEnabledDisabledTrigger__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// internal WhileEnabledDisabledTrigger()
void WhileEnabledDisabledTrigger__ctor_6_fn(WhileEnabledDisabledTrigger* __this)
{
    __this->ctor_6();
}

// private void OnIsContextEnabledChanged(object sender, Uno.EventArgs args)
void WhileEnabledDisabledTrigger__OnIsContextEnabledChanged_fn(WhileEnabledDisabledTrigger* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnIsContextEnabledChanged(sender, args);
}

// protected override sealed void OnRooted()
void WhileEnabledDisabledTrigger__OnRooted_fn(WhileEnabledDisabledTrigger* __this)
{
    uStackFrame __("Fuse.Triggers.WhileEnabledDisabledTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    uPtr(__this->Parent())->add_IsContextEnabledChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)WhileEnabledDisabledTrigger__OnIsContextEnabledChanged_fn, __this));
    __this->SetActive(__this->IsActive());
}

// protected override sealed void OnUnrooted()
void WhileEnabledDisabledTrigger__OnUnrooted_fn(WhileEnabledDisabledTrigger* __this)
{
    uStackFrame __("Fuse.Triggers.WhileEnabledDisabledTrigger", "OnUnrooted()");
    uPtr(__this->Parent())->remove_IsContextEnabledChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)WhileEnabledDisabledTrigger__OnIsContextEnabledChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// internal WhileEnabledDisabledTrigger() [instance]
void WhileEnabledDisabledTrigger::ctor_6()
{
    ctor_5();
}

// private void OnIsContextEnabledChanged(object sender, Uno.EventArgs args) [instance]
void WhileEnabledDisabledTrigger::OnIsContextEnabledChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(IsActive());
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileFailed.uno
// ------------------------------------------------------------------

// public sealed class WhileFailed
// {
static void WhileFailed_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface8),
        ::g::Fuse::Triggers::IBusyHandler_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface9));
    type->SetFields(43);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileFailed__New3_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::WhileBusy_type* WhileFailed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileBusy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileBusy_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(WhileFailed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileBusy_type);
    type = (::g::Fuse::Triggers::WhileBusy_type*)uClassType::New("Fuse.Triggers.WhileFailed", options);
    type->fp_build_ = WhileFailed_build;
    type->fp_ctor_ = (void*)WhileFailed__New3_fn;
    type->interface9.fp_get_BusyActivityHandled = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::WhileBusy__FuseTriggersIBusyHandlerget_BusyActivityHandled_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public WhileFailed()
void WhileFailed__ctor_7_fn(WhileFailed* __this)
{
    __this->ctor_7();
}

// public WhileFailed New()
void WhileFailed__New3_fn(WhileFailed** __retval)
{
    *__retval = WhileFailed::New3();
}

// public WhileFailed() [instance]
void WhileFailed::ctor_7()
{
    uStackFrame __("Fuse.Triggers.WhileFailed", ".ctor()");
    ctor_6();
    Activity(16);
    IsHandled(true);
}

// public WhileFailed New() [static]
WhileFailed* WhileFailed::New3()
{
    WhileFailed* obj1 = (WhileFailed*)uNew(WhileFailed_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileBool.uno
// ----------------------------------------------------------------

// public sealed class WhileFalse
// {
static void WhileFalse_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBool_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBool_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBool_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface8),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface9),
        ::g::Fuse::Triggers::Actions::IToggleable_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface10));
    type->SetFields(45);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileFalse__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::WhileBool_type* WhileFalse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileBool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileBool_typeof();
    options.FieldCount = 45;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(WhileFalse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileBool_type);
    type = (::g::Fuse::Triggers::WhileBool_type*)uClassType::New("Fuse.Triggers.WhileFalse", options);
    type->fp_build_ = WhileFalse_build;
    type->fp_ctor_ = (void*)WhileFalse__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileFalse__get_IsOn_fn;
    type->interface10.fp_Toggle = (void(*)(uObject*))::g::Fuse::Triggers::WhileBool__Toggle_fn;
    type->interface9.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileFalse()
void WhileFalse__ctor_8_fn(WhileFalse* __this)
{
    __this->ctor_8();
}

// protected override sealed bool get_IsOn()
void WhileFalse__get_IsOn_fn(WhileFalse* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileFalse", "get_IsOn()");
    return *__retval = !__this->Value1(), void();
}

// public generated WhileFalse New()
void WhileFalse__New2_fn(WhileFalse** __retval)
{
    *__retval = WhileFalse::New2();
}

// public generated WhileFalse() [instance]
void WhileFalse::ctor_8()
{
    ctor_7();
}

// public generated WhileFalse New() [static]
WhileFalse* WhileFalse::New2()
{
    WhileFalse* obj1 = (WhileFalse*)uNew(WhileFalse_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileFloat.uno
// -----------------------------------------------------------------

// public sealed class WhileFloat
// {
static void WhileFloat_build(uType* type)
{
    type->SetBase(::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileValue_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileValue_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface8),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface9));
    type->SetFields(45,
        ::g::Uno::Float2_typeof(), offsetof(WhileFloat, _compare), 0,
        WhileFloat__Range_typeof(), offsetof(WhileFloat, _low), 0,
        WhileFloat__Range_typeof(), offsetof(WhileFloat, _high), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_GreaterThan", NULL, (void*)WhileFloat__get_GreaterThan_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileFloat__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_GreaterThanEqual", NULL, (void*)WhileFloat__get_GreaterThanEqual_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GreaterThanEqual", NULL, (void*)WhileFloat__set_GreaterThanEqual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileFloat__get_LessThan_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileFloat__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LessThanEqual", NULL, (void*)WhileFloat__get_LessThanEqual_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LessThanEqual", NULL, (void*)WhileFloat__set_LessThanEqual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileFloat__New2_fn, 0, true, type, 0),
        new uFunction("get_Value", NULL, (void*)WhileFloat__get_Value1_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)WhileFloat__set_Value1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Triggers::WhileValue_type* WhileFloat_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileValue_typeof();
    options.FieldCount = 48;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(WhileFloat);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileFloat", options);
    type->fp_build_ = WhileFloat_build;
    type->fp_ctor_ = (void*)WhileFloat__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileFloat__get_IsOn_fn;
    type->interface9.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileFloat()
void WhileFloat__ctor_7_fn(WhileFloat* __this)
{
    __this->ctor_7();
}

// public float get_GreaterThan()
void WhileFloat__get_GreaterThan_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->GreaterThan();
}

// public void set_GreaterThan(float value)
void WhileFloat__set_GreaterThan_fn(WhileFloat* __this, float* value)
{
    __this->GreaterThan(*value);
}

// public float get_GreaterThanEqual()
void WhileFloat__get_GreaterThanEqual_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->GreaterThanEqual();
}

// public void set_GreaterThanEqual(float value)
void WhileFloat__set_GreaterThanEqual_fn(WhileFloat* __this, float* value)
{
    __this->GreaterThanEqual(*value);
}

// protected override sealed bool get_IsOn()
void WhileFloat__get_IsOn_fn(WhileFloat* __this, bool* __retval)
{
    if ((__this->_low == 1) && (__this->Value1() <= __this->_compare.X))
        return *__retval = false, void();

    if ((__this->_low == 2) && (__this->Value1() < __this->_compare.X))
        return *__retval = false, void();

    if ((__this->_high == 1) && (__this->Value1() >= __this->_compare.Y))
        return *__retval = false, void();

    if ((__this->_high == 2) && (__this->Value1() > __this->_compare.Y))
        return *__retval = false, void();

    return *__retval = true, void();
}

// public float get_LessThan()
void WhileFloat__get_LessThan_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->LessThan();
}

// public void set_LessThan(float value)
void WhileFloat__set_LessThan_fn(WhileFloat* __this, float* value)
{
    __this->LessThan(*value);
}

// public float get_LessThanEqual()
void WhileFloat__get_LessThanEqual_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->LessThanEqual();
}

// public void set_LessThanEqual(float value)
void WhileFloat__set_LessThanEqual_fn(WhileFloat* __this, float* value)
{
    __this->LessThanEqual(*value);
}

// public generated WhileFloat New()
void WhileFloat__New2_fn(WhileFloat** __retval)
{
    *__retval = WhileFloat::New2();
}

// public new float get_Value()
void WhileFloat__get_Value1_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->Value1();
}

// public new void set_Value(float value)
void WhileFloat__set_Value1_fn(WhileFloat* __this, float* value)
{
    __this->Value1(*value);
}

// public generated WhileFloat() [instance]
void WhileFloat::ctor_7()
{
    ctor_6();
}

// public float get_GreaterThan() [instance]
float WhileFloat::GreaterThan()
{
    return _compare.X;
}

// public void set_GreaterThan(float value) [instance]
void WhileFloat::GreaterThan(float value)
{
    _compare.X = value;
    _low = 1;
    UpdateState();
}

// public float get_GreaterThanEqual() [instance]
float WhileFloat::GreaterThanEqual()
{
    return _compare.X;
}

// public void set_GreaterThanEqual(float value) [instance]
void WhileFloat::GreaterThanEqual(float value)
{
    _compare.X = value;
    _low = 2;
    UpdateState();
}

// public float get_LessThan() [instance]
float WhileFloat::LessThan()
{
    return _compare.Y;
}

// public void set_LessThan(float value) [instance]
void WhileFloat::LessThan(float value)
{
    _compare.Y = value;
    _high = 1;
    UpdateState();
}

// public float get_LessThanEqual() [instance]
float WhileFloat::LessThanEqual()
{
    return _compare.Y;
}

// public void set_LessThanEqual(float value) [instance]
void WhileFloat::LessThanEqual(float value)
{
    _compare.Y = value;
    _high = 2;
    UpdateState();
}

// public new float get_Value() [instance]
float WhileFloat::Value1()
{
    uStackFrame __("Fuse.Triggers.WhileFloat", "get_Value()");
    float ret2;
    return (::g::Fuse::Triggers::WhileValue__get_Value_fn(this, &ret2), ret2);
}

// public new void set_Value(float value) [instance]
void WhileFloat::Value1(float value)
{
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(this, uCRef(value));
}

// public generated WhileFloat New() [static]
WhileFloat* WhileFloat::New2()
{
    WhileFloat* obj1 = (WhileFloat*)uNew(WhileFloat_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileFocused.uno
// -------------------------------------------------------------------

// public sealed class WhileFocused
// {
static void WhileFocused_build(uType* type)
{
    ::TYPES[54] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[55] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileFocused__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* WhileFocused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileFocused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileFocused", options);
    type->fp_build_ = WhileFocused_build;
    type->fp_ctor_ = (void*)WhileFocused__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileFocused__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileFocused__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileFocused()
void WhileFocused__ctor_6_fn(WhileFocused* __this)
{
    __this->ctor_6();
}

// public generated WhileFocused New()
void WhileFocused__New2_fn(WhileFocused** __retval)
{
    *__retval = WhileFocused::New2();
}

// private void OnGotFocus(object sender, Uno.EventArgs args)
void WhileFocused__OnGotFocus_fn(WhileFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnGotFocus(sender, args);
}

// private void OnLostFocus(object sender, Uno.EventArgs args)
void WhileFocused__OnLostFocus_fn(WhileFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLostFocus(sender, args);
}

// protected override sealed void OnRooted()
void WhileFocused__OnRooted_fn(WhileFocused* __this)
{
    uStackFrame __("Fuse.Triggers.WhileFocused", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[54/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocused__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[55/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocused__OnLostFocus_fn, __this));
    __this->SetActive(::g::Fuse::Input::Focus::FocusedVisual() == __this->Parent());
}

// protected override sealed void OnUnrooted()
void WhileFocused__OnUnrooted_fn(WhileFocused* __this)
{
    uStackFrame __("Fuse.Triggers.WhileFocused", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[54/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocused__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[55/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocused__OnLostFocus_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileFocused() [instance]
void WhileFocused::ctor_6()
{
    ctor_5();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) [instance]
void WhileFocused::OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(true);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) [instance]
void WhileFocused::OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(false);
}

// public generated WhileFocused New() [static]
WhileFocused* WhileFocused::New2()
{
    WhileFocused* obj1 = (WhileFocused*)uNew(WhileFocused_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileFocusWithin.uno
// -----------------------------------------------------------------------

// public sealed class WhileFocusWithin
// {
static void WhileFocusWithin_build(uType* type)
{
    ::TYPES[54] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[55] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileFocusWithin__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* WhileFocusWithin_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileFocusWithin);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileFocusWithin", options);
    type->fp_build_ = WhileFocusWithin_build;
    type->fp_ctor_ = (void*)WhileFocusWithin__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileFocusWithin__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileFocusWithin__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileFocusWithin()
void WhileFocusWithin__ctor_6_fn(WhileFocusWithin* __this)
{
    __this->ctor_6();
}

// private bool get_IsOn()
void WhileFocusWithin__get_IsOn_fn(WhileFocusWithin* __this, bool* __retval)
{
    *__retval = __this->IsOn();
}

// public generated WhileFocusWithin New()
void WhileFocusWithin__New2_fn(WhileFocusWithin** __retval)
{
    *__retval = WhileFocusWithin::New2();
}

// private void OnFocusChange(object sender, Uno.EventArgs args)
void WhileFocusWithin__OnFocusChange_fn(WhileFocusWithin* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnFocusChange(sender, args);
}

// protected override sealed void OnRooted()
void WhileFocusWithin__OnRooted_fn(WhileFocusWithin* __this)
{
    uStackFrame __("Fuse.Triggers.WhileFocusWithin", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[54/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[55/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    __this->SetActive(__this->IsOn());
}

// protected override sealed void OnUnrooted()
void WhileFocusWithin__OnUnrooted_fn(WhileFocusWithin* __this)
{
    uStackFrame __("Fuse.Triggers.WhileFocusWithin", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[54/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[55/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileFocusWithin() [instance]
void WhileFocusWithin::ctor_6()
{
    ctor_5();
}

// private bool get_IsOn() [instance]
bool WhileFocusWithin::IsOn()
{
    uStackFrame __("Fuse.Triggers.WhileFocusWithin", "get_IsOn()");
    return ::g::Fuse::Input::Focus::IsWithin(Parent());
}

// private void OnFocusChange(object sender, Uno.EventArgs args) [instance]
void WhileFocusWithin::OnFocusChange(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(IsOn());
}

// public generated WhileFocusWithin New() [static]
WhileFocusWithin* WhileFocusWithin::New2()
{
    WhileFocusWithin* obj1 = (WhileFocusWithin*)uNew(WhileFocusWithin_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/1.12.0/Triggers/WhileInteracting.uno
// --------------------------------------------------------------------------------

// public sealed class WhileInteracting
// {
static void WhileInteracting_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40,
        ::g::Fuse::Visual_typeof(), offsetof(WhileInteracting, _source), 0,
        ::g::Fuse::Visual_typeof(), offsetof(WhileInteracting, _visual), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)WhileInteracting__New2_fn, 0, true, type, 0),
        new uFunction("get_Source", NULL, (void*)WhileInteracting__get_Source_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)WhileInteracting__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhileInteracting_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileInteracting);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileInteracting", options);
    type->fp_build_ = WhileInteracting_build;
    type->fp_ctor_ = (void*)WhileInteracting__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileInteracting__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileInteracting__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileInteracting()
void WhileInteracting__ctor_6_fn(WhileInteracting* __this)
{
    __this->ctor_6();
}

// public generated WhileInteracting New()
void WhileInteracting__New2_fn(WhileInteracting** __retval)
{
    *__retval = WhileInteracting::New2();
}

// private void OnInteractingChanged(object s, object a)
void WhileInteracting__OnInteractingChanged_fn(WhileInteracting* __this, uObject* s, uObject* a)
{
    __this->OnInteractingChanged(s, a);
}

// protected override sealed void OnRooted()
void WhileInteracting__OnRooted_fn(WhileInteracting* __this)
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", "OnRooted()");
    ::g::Fuse::Visual* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_visual = (ind1 = __this->_source, ((ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)__this->Parent()));
    uPtr(__this->_visual)->add_IsInteractingChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)WhileInteracting__OnInteractingChanged_fn, __this));
    __this->SetActive(uPtr(__this->_visual)->IsInteracting());
}

// protected override sealed void OnUnrooted()
void WhileInteracting__OnUnrooted_fn(WhileInteracting* __this)
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", "OnUnrooted()");
    uPtr(__this->_visual)->remove_IsInteractingChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)WhileInteracting__OnInteractingChanged_fn, __this));
    __this->_visual = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Visual get_Source()
void WhileInteracting__get_Source_fn(WhileInteracting* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Visual value)
void WhileInteracting__set_Source_fn(WhileInteracting* __this, ::g::Fuse::Visual* value)
{
    __this->Source(value);
}

// public generated WhileInteracting() [instance]
void WhileInteracting::ctor_6()
{
    ctor_5();
}

// private void OnInteractingChanged(object s, object a) [instance]
void WhileInteracting::OnInteractingChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.WhileInteracting", "OnInteractingChanged(object,object)");
    SetActive(uPtr(_visual)->IsInteracting());
}

// public Fuse.Visual get_Source() [instance]
::g::Fuse::Visual* WhileInteracting::Source()
{
    return _source;
}

// public void set_Source(Fuse.Visual value) [instance]
void WhileInteracting::Source(::g::Fuse::Visual* value)
{
    _source = value;
}

// public generated WhileInteracting New() [static]
WhileInteracting* WhileInteracting::New2()
{
    WhileInteracting* obj2 = (WhileInteracting*)uNew(WhileInteracting_typeof());
    obj2->ctor_6();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.12.0/WhileKeyboardVisible.uno
// ----------------------------------------------------------------------------------

// public sealed class WhileKeyboardVisible
// {
// static generated WhileKeyboardVisible()
static void WhileKeyboardVisible__cctor_2_fn(uType* __type)
{
    WhileKeyboardVisible::Keyboard_ = (uObject*)WhileKeyboardVisible__RelativeToKeyboardMode::New1();
}

static void WhileKeyboardVisible_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Reactive::WindowCaps_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileKeyboardVisible_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileKeyboardVisible_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileKeyboardVisible_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileKeyboardVisible_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WhileKeyboardVisible_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileKeyboardVisible_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileKeyboardVisible_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileKeyboardVisible_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileKeyboardVisible_type, interface8),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(WhileKeyboardVisible_type, interface9));
    type->SetFields(40,
        ::g::Fuse::Reactive::WindowCaps_typeof(), offsetof(WhileKeyboardVisible, _caps), 0,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&WhileKeyboardVisible::Keyboard_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Keyboard", 41));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileKeyboardVisible__New2_fn, 0, true, type, 0),
        new uFunction("get_Threshold", NULL, (void*)WhileKeyboardVisible__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0));
}

WhileKeyboardVisible_type* WhileKeyboardVisible_typeof()
{
    static uSStrong<WhileKeyboardVisible_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileKeyboardVisible);
    options.TypeSize = sizeof(WhileKeyboardVisible_type);
    type = (WhileKeyboardVisible_type*)uClassType::New("Fuse.Triggers.WhileKeyboardVisible", options);
    type->fp_build_ = WhileKeyboardVisible_build;
    type->fp_ctor_ = (void*)WhileKeyboardVisible__New2_fn;
    type->fp_cctor_ = WhileKeyboardVisible__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileKeyboardVisible__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileKeyboardVisible__OnUnrooted_fn;
    type->interface9.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))WhileKeyboardVisible__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileKeyboardVisible()
void WhileKeyboardVisible__ctor_6_fn(WhileKeyboardVisible* __this)
{
    __this->ctor_6();
}

// private void CheckActivation()
void WhileKeyboardVisible__CheckActivation_fn(WhileKeyboardVisible* __this)
{
    __this->CheckActivation();
}

// public generated WhileKeyboardVisible New()
void WhileKeyboardVisible__New2_fn(WhileKeyboardVisible** __retval)
{
    *__retval = WhileKeyboardVisible::New2();
}

// protected override sealed void OnRooted()
void WhileKeyboardVisible__OnRooted_fn(WhileKeyboardVisible* __this)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_caps = ::g::Fuse::Reactive::WindowCaps::AttachFrom(__this);
    uPtr(__this->_caps)->AddPropertyListener((uObject*)__this);
    __this->CheckActivation();
}

// protected override sealed void OnUnrooted()
void WhileKeyboardVisible__OnUnrooted_fn(WhileKeyboardVisible* __this)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "OnUnrooted()");
    uPtr(__this->_caps)->RemovePropertyListener((uObject*)__this);
    uPtr(__this->_caps)->Detach();
    __this->_caps = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public float get_Threshold()
void WhileKeyboardVisible__get_Threshold_fn(WhileKeyboardVisible* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector name)
void WhileKeyboardVisible__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileKeyboardVisible* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* name)
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector name_ = *name;

    if ((sender == __this->_caps) && (::g::Uno::UX::Selector__op_Equality(name_, ::g::Fuse::Reactive::WindowCaps::NameSafeMargins()) || ::g::Uno::UX::Selector__op_Equality(name_, ::g::Fuse::Reactive::WindowCaps::NameStaticMargins())))
        __this->CheckActivation();
}

uSStrong<uObject*> WhileKeyboardVisible::Keyboard_;

// public generated WhileKeyboardVisible() [instance]
void WhileKeyboardVisible::ctor_6()
{
    ctor_5();
}

// private void CheckActivation() [instance]
void WhileKeyboardVisible::CheckActivation()
{
    uStackFrame __("Fuse.Triggers.WhileKeyboardVisible", "CheckActivation()");
    bool ret2;
    bool ret3;
    ::g::Uno::Float4 safe = ::g::Uno::Float4__New1(0.0f);
    ::g::Uno::Float4 stat = ::g::Uno::Float4__New1(0.0f);

    if (!(::g::Fuse::Marshal__TryToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float4>*/, ::g::Uno::Float4_typeof(), NULL), uPtr(_caps)->Item(::g::Uno::UX::Selector__op_Implicit1(::g::Fuse::Reactive::WindowCaps::NameSafeMargins())), &safe, &ret2), ret2) || !(::g::Fuse::Marshal__TryToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float4>*/, ::g::Uno::Float4_typeof(), NULL), uPtr(_caps)->Item(::g::Uno::UX::Selector__op_Implicit1(::g::Fuse::Reactive::WindowCaps::NameStaticMargins())), &stat, &ret3), ret3))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Invalid margin values"), this, ::STRINGS[25/*"/usr/local/...*/], 54, uString::Const("CheckActivation"));
        Deactivate();
        return;
    }

    SetActive(safe.W > stat.W);
}

// public float get_Threshold() [instance]
float WhileKeyboardVisible::Threshold()
{
    return 150.0f;
}

// public generated WhileKeyboardVisible New() [static]
WhileKeyboardVisible* WhileKeyboardVisible::New2()
{
    WhileKeyboardVisible* obj1 = (WhileKeyboardVisible*)uNew(WhileKeyboardVisible_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileLoading.uno
// -------------------------------------------------------------------

// public sealed class WhileLoading
// {
static void WhileLoading_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface8),
        ::g::Fuse::Triggers::IBusyHandler_typeof(), offsetof(::g::Fuse::Triggers::WhileBusy_type, interface9));
    type->SetFields(43);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileLoading__New3_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::WhileBusy_type* WhileLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileBusy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileBusy_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(WhileLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileBusy_type);
    type = (::g::Fuse::Triggers::WhileBusy_type*)uClassType::New("Fuse.Triggers.WhileLoading", options);
    type->fp_build_ = WhileLoading_build;
    type->fp_ctor_ = (void*)WhileLoading__New3_fn;
    type->interface9.fp_get_BusyActivityHandled = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::WhileBusy__FuseTriggersIBusyHandlerget_BusyActivityHandled_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public WhileLoading()
void WhileLoading__ctor_7_fn(WhileLoading* __this)
{
    __this->ctor_7();
}

// public WhileLoading New()
void WhileLoading__New3_fn(WhileLoading** __retval)
{
    *__retval = WhileLoading::New3();
}

// public WhileLoading() [instance]
void WhileLoading::ctor_7()
{
    uStackFrame __("Fuse.Triggers.WhileLoading", ".ctor()");
    ctor_6();
    Activity(1);
}

// public WhileLoading New() [static]
WhileLoading* WhileLoading::New3()
{
    WhileLoading* obj1 = (WhileLoading*)uNew(WhileLoading_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileFocused.uno
// -------------------------------------------------------------------

// public sealed class WhileNotFocused
// {
static void WhileNotFocused_build(uType* type)
{
    ::TYPES[54] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[55] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileNotFocused__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* WhileNotFocused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileNotFocused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileNotFocused", options);
    type->fp_build_ = WhileNotFocused_build;
    type->fp_ctor_ = (void*)WhileNotFocused__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileNotFocused__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileNotFocused__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileNotFocused()
void WhileNotFocused__ctor_6_fn(WhileNotFocused* __this)
{
    __this->ctor_6();
}

// public generated WhileNotFocused New()
void WhileNotFocused__New2_fn(WhileNotFocused** __retval)
{
    *__retval = WhileNotFocused::New2();
}

// private void OnGotFocus(object sender, Uno.EventArgs args)
void WhileNotFocused__OnGotFocus_fn(WhileNotFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnGotFocus(sender, args);
}

// private void OnLostFocus(object sender, Uno.EventArgs args)
void WhileNotFocused__OnLostFocus_fn(WhileNotFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLostFocus(sender, args);
}

// protected override sealed void OnRooted()
void WhileNotFocused__OnRooted_fn(WhileNotFocused* __this)
{
    uStackFrame __("Fuse.Triggers.WhileNotFocused", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[54/*Fuse.Input.FocusGainedHandler*/], (void*)WhileNotFocused__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[55/*Fuse.Input.FocusLostHandler*/], (void*)WhileNotFocused__OnLostFocus_fn, __this));
    __this->SetActive(::g::Fuse::Input::Focus::FocusedVisual() != __this->Parent());
}

// protected override sealed void OnUnrooted()
void WhileNotFocused__OnUnrooted_fn(WhileNotFocused* __this)
{
    uStackFrame __("Fuse.Triggers.WhileNotFocused", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[54/*Fuse.Input.FocusGainedHandler*/], (void*)WhileNotFocused__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[55/*Fuse.Input.FocusLostHandler*/], (void*)WhileNotFocused__OnLostFocus_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileNotFocused() [instance]
void WhileNotFocused::ctor_6()
{
    ctor_5();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) [instance]
void WhileNotFocused::OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(false);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) [instance]
void WhileNotFocused::OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(true);
}

// public generated WhileNotFocused New() [static]
WhileNotFocused* WhileNotFocused::New2()
{
    WhileNotFocused* obj1 = (WhileNotFocused*)uNew(WhileNotFocused_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/WhilePageLoading.uno
// -------------------------------------------------------------------------------

// public sealed class WhilePageLoading
// {
static void WhilePageLoading_build(uType* type)
{
    ::STRINGS[20] = uString::Const("WebView");
    ::STRINGS[48] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/WhilePageLoading.uno");
    ::STRINGS[17] = uString::Const("OnRooted");
    ::TYPES[22] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[56] = ::g::Fuse::Controls::WebView_typeof();
    ::TYPES[24] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40,
        ::TYPES[56/*Fuse.Controls.WebView*/], offsetof(WhilePageLoading, _webView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhilePageLoading__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* WhilePageLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhilePageLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePageLoading", options);
    type->fp_build_ = WhilePageLoading_build;
    type->fp_ctor_ = (void*)WhilePageLoading__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePageLoading__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhilePageLoading__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhilePageLoading()
void WhilePageLoading__ctor_6_fn(WhilePageLoading* __this)
{
    __this->ctor_6();
}

// public generated WhilePageLoading New()
void WhilePageLoading__New2_fn(WhilePageLoading** __retval)
{
    *__retval = WhilePageLoading::New2();
}

// private void OnProgressChanged(object s, object a)
void WhilePageLoading__OnProgressChanged1_fn(WhilePageLoading* __this, uObject* s, uObject* a)
{
    __this->OnProgressChanged1(s, a);
}

// protected override sealed void OnRooted()
void WhilePageLoading__OnRooted_fn(WhilePageLoading* __this)
{
    uStackFrame __("Fuse.Triggers.WhilePageLoading", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (uIs((::g::Fuse::Visual*)__this->Parent(), ::TYPES[22/*Fuse.Controls.IWebView*/]))
    {
        __this->_webView = uAs< ::g::Fuse::Controls::WebView*>(__this->Parent(), ::TYPES[56/*Fuse.Controls.WebView*/]);
        uPtr(__this->_webView)->add_ProgressChanged(uDelegate::New(::TYPES[24/*Uno.UX.ValueChangedHandler<double>*/], (void*)WhilePageLoading__OnProgressChanged1_fn, __this));
        __this->SetActive(uPtr(__this->_webView)->Progress() != 1.0);
    }
    else
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[20/*"WebView"*/], __this->Parent(), __this, ::STRINGS[48/*"/usr/local/...*/], 39, ::STRINGS[17/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted()
void WhilePageLoading__OnUnrooted_fn(WhilePageLoading* __this)
{
    uStackFrame __("Fuse.Triggers.WhilePageLoading", "OnUnrooted()");

    if (__this->_webView != NULL)
    {
        uPtr(__this->_webView)->remove_ProgressChanged(uDelegate::New(::TYPES[24/*Uno.UX.ValueChangedHandler<double>*/], (void*)WhilePageLoading__OnProgressChanged1_fn, __this));
        __this->_webView = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhilePageLoading() [instance]
void WhilePageLoading::ctor_6()
{
    ctor_5();
}

// private void OnProgressChanged(object s, object a) [instance]
void WhilePageLoading::OnProgressChanged1(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Triggers.WhilePageLoading", "OnProgressChanged(object,object)");
    SetActive(uPtr(_webView)->Progress() < 1.0);
}

// public generated WhilePageLoading New() [static]
WhilePageLoading* WhilePageLoading::New2()
{
    WhilePageLoading* obj1 = (WhilePageLoading*)uNew(WhilePageLoading_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhilePlaying.uno
// -------------------------------------------------------------------

// public sealed class WhilePaused
// {
// static generated WhilePaused()
static void WhilePaused__cctor_2_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    WhilePaused::_whilePausedProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhilePaused_build(uType* type)
{
    ::TYPES[49] = ::g::Uno::Bool_typeof();
    ::TYPES[57] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Triggers.WhilePaused>*/, type, NULL);
    ::TYPES[58] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Triggers.WhilePaused>*/, type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&WhilePaused::_whilePausedProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhilePaused__New2_fn, 0, true, type, 0),
        new uFunction("SetState", NULL, (void*)WhilePaused__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::TYPES[49/*bool*/]));
}

::g::Fuse::Triggers::Trigger_type* WhilePaused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhilePaused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePaused", options);
    type->fp_build_ = WhilePaused_build;
    type->fp_ctor_ = (void*)WhilePaused__New2_fn;
    type->fp_cctor_ = WhilePaused__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePaused__OnRooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhilePaused()
void WhilePaused__ctor_6_fn(WhilePaused* __this)
{
    __this->ctor_6();
}

// private static bool IsPaused(Fuse.Visual n)
void WhilePaused__IsPaused_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhilePaused::IsPaused(n);
}

// public generated WhilePaused New()
void WhilePaused__New2_fn(WhilePaused** __retval)
{
    *__retval = WhilePaused::New2();
}

// protected override sealed void OnRooted()
void WhilePaused__OnRooted_fn(WhilePaused* __this)
{
    uStackFrame __("Fuse.Triggers.WhilePaused", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhilePaused::IsPaused(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool paused)
void WhilePaused__SetState_fn(::g::Fuse::Visual* n, bool* paused)
{
    WhilePaused::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePaused::_whilePausedProp_;

// public generated WhilePaused() [instance]
void WhilePaused::ctor_6()
{
    ctor_5();
}

// private static bool IsPaused(Fuse.Visual n) [static]
bool WhilePaused::IsPaused(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Triggers.WhilePaused", "IsPaused(Fuse.Visual)");
    WhilePaused_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePaused::_whilePausedProp_);

    if (!uIs(v, ::TYPES[49/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[49/*bool*/], v);
}

// public generated WhilePaused New() [static]
WhilePaused* WhilePaused::New2()
{
    WhilePaused* obj1 = (WhilePaused*)uNew(WhilePaused_typeof());
    obj1->ctor_6();
    return obj1;
}

// public static void SetState(Fuse.Visual n, bool paused) [static]
void WhilePaused::SetState(::g::Fuse::Visual* n, bool paused)
{
    uStackFrame __("Fuse.Triggers.WhilePaused", "SetState(Fuse.Visual,bool)");
    WhilePaused_typeof()->Init();
    bool v = WhilePaused::IsPaused(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePaused::_whilePausedProp_, uBox(::TYPES[49/*bool*/], paused));

        for (WhilePaused* wl = (WhilePaused*)n->FirstChild(::TYPES[57/*Fuse.Visual.FirstChild<Fuse.Triggers.WhilePaused>*/]); wl != NULL; wl = (WhilePaused*)uPtr(wl)->NextSibling(::TYPES[58/*Fuse.Node.NextSibling<Fuse.Triggers.WhilePaused>*/]))
            uPtr(wl)->SetActive(paused);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhilePlaying.uno
// -------------------------------------------------------------------

// public sealed class WhilePlaying
// {
// static generated WhilePlaying()
static void WhilePlaying__cctor_2_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    WhilePlaying::_whilePlayingProp_ = ::g::Fuse::Properties::CreateHandle();
}

static void WhilePlaying_build(uType* type)
{
    ::TYPES[49] = ::g::Uno::Bool_typeof();
    ::TYPES[59] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Triggers.WhilePlaying>*/, type, NULL);
    ::TYPES[60] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Triggers.WhilePlaying>*/, type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&WhilePlaying::_whilePlayingProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhilePlaying__New2_fn, 0, true, type, 0),
        new uFunction("SetState", NULL, (void*)WhilePlaying__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::TYPES[49/*bool*/]));
}

::g::Fuse::Triggers::Trigger_type* WhilePlaying_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhilePlaying);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePlaying", options);
    type->fp_build_ = WhilePlaying_build;
    type->fp_ctor_ = (void*)WhilePlaying__New2_fn;
    type->fp_cctor_ = WhilePlaying__cctor_2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePlaying__OnRooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhilePlaying()
void WhilePlaying__ctor_6_fn(WhilePlaying* __this)
{
    __this->ctor_6();
}

// private static bool IsPlaying(Fuse.Visual n)
void WhilePlaying__IsPlaying_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = WhilePlaying::IsPlaying(n);
}

// public generated WhilePlaying New()
void WhilePlaying__New2_fn(WhilePlaying** __retval)
{
    *__retval = WhilePlaying::New2();
}

// protected override sealed void OnRooted()
void WhilePlaying__OnRooted_fn(WhilePlaying* __this)
{
    uStackFrame __("Fuse.Triggers.WhilePlaying", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->SetActive(WhilePlaying::IsPlaying(__this->Parent()));
}

// public static void SetState(Fuse.Visual n, bool playing)
void WhilePlaying__SetState_fn(::g::Fuse::Visual* n, bool* playing)
{
    WhilePlaying::SetState(n, *playing);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePlaying::_whilePlayingProp_;

// public generated WhilePlaying() [instance]
void WhilePlaying::ctor_6()
{
    ctor_5();
}

// private static bool IsPlaying(Fuse.Visual n) [static]
bool WhilePlaying::IsPlaying(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Triggers.WhilePlaying", "IsPlaying(Fuse.Visual)");
    WhilePlaying_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePlaying::_whilePlayingProp_);

    if (!uIs(v, ::TYPES[49/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[49/*bool*/], v);
}

// public generated WhilePlaying New() [static]
WhilePlaying* WhilePlaying::New2()
{
    WhilePlaying* obj1 = (WhilePlaying*)uNew(WhilePlaying_typeof());
    obj1->ctor_6();
    return obj1;
}

// public static void SetState(Fuse.Visual n, bool playing) [static]
void WhilePlaying::SetState(::g::Fuse::Visual* n, bool playing)
{
    uStackFrame __("Fuse.Triggers.WhilePlaying", "SetState(Fuse.Visual,bool)");
    WhilePlaying_typeof()->Init();
    bool v = WhilePlaying::IsPlaying(n);

    if (v != playing)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePlaying::_whilePlayingProp_, uBox(::TYPES[49/*bool*/], playing));

        for (WhilePlaying* wl = (WhilePlaying*)n->FirstChild(::TYPES[59/*Fuse.Visual.FirstChild<Fuse.Triggers.WhilePlaying>*/]); wl != NULL; wl = (WhilePlaying*)uPtr(wl)->NextSibling(::TYPES[60/*Fuse.Node.NextSibling<Fuse.Triggers.WhilePlaying>*/]))
            uPtr(wl)->SetActive(playing);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/ScrollingAnimation.uno
// ---------------------------------------------------------------------------------------------

// public sealed class WhileScrollable
// {
static void WhileScrollable_build(uType* type)
{
    ::TYPES[61] = ::g::Fuse::Controls::ScrollView_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileScrollable_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileScrollable_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileScrollable_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileScrollable_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WhileScrollable_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileScrollable_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileScrollable_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileScrollable_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileScrollable_type, interface8),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(WhileScrollable_type, interface9));
    type->SetFields(40,
        ::TYPES[61/*Fuse.Controls.ScrollView*/], offsetof(WhileScrollable, _scrollable), 0,
        ::TYPES[61/*Fuse.Controls.ScrollView*/], offsetof(WhileScrollable, _source), 0,
        ::g::Fuse::Controls::ScrollDirections_typeof(), offsetof(WhileScrollable, _ScrollDirections), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)WhileScrollable__New2_fn, 0, true, type, 0),
        new uFunction("get_ScrollDirections", NULL, (void*)WhileScrollable__get_ScrollDirections_fn, 0, false, ::g::Fuse::Controls::ScrollDirections_typeof(), 0),
        new uFunction("set_ScrollDirections", NULL, (void*)WhileScrollable__set_ScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollDirections_typeof()),
        new uFunction("get_ScrollView", NULL, (void*)WhileScrollable__get_ScrollView_fn, 0, false, ::TYPES[61/*Fuse.Controls.ScrollView*/], 0),
        new uFunction("set_ScrollView", NULL, (void*)WhileScrollable__set_ScrollView_fn, 0, false, uVoid_typeof(), 1, ::TYPES[61/*Fuse.Controls.ScrollView*/]));
}

WhileScrollable_type* WhileScrollable_typeof()
{
    static uSStrong<WhileScrollable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(WhileScrollable);
    options.TypeSize = sizeof(WhileScrollable_type);
    type = (WhileScrollable_type*)uClassType::New("Fuse.Triggers.WhileScrollable", options);
    type->fp_build_ = WhileScrollable_build;
    type->fp_ctor_ = (void*)WhileScrollable__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileScrollable__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileScrollable__OnUnrooted_fn;
    type->interface9.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))WhileScrollable__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileScrollable()
void WhileScrollable__ctor_6_fn(WhileScrollable* __this)
{
    __this->ctor_6();
}

// private bool get_IsOn()
void WhileScrollable__get_IsOn_fn(WhileScrollable* __this, bool* __retval)
{
    *__retval = __this->IsOn();
}

// public generated WhileScrollable New()
void WhileScrollable__New2_fn(WhileScrollable** __retval)
{
    *__retval = WhileScrollable::New2();
}

// protected override sealed void OnRooted()
void WhileScrollable__OnRooted_fn(WhileScrollable* __this)
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_scrollable = __this->ScrollView();

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->AddPropertyListener((uObject*)__this);
        __this->SetActive(__this->IsOn());
    }
}

// protected override sealed void OnUnrooted()
void WhileScrollable__OnUnrooted_fn(WhileScrollable* __this)
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "OnUnrooted()");

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->RemovePropertyListener((uObject*)__this);
        __this->_scrollable = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Controls.ScrollDirections get_ScrollDirections()
void WhileScrollable__get_ScrollDirections_fn(WhileScrollable* __this, int32_t* __retval)
{
    *__retval = __this->ScrollDirections();
}

// public generated void set_ScrollDirections(Fuse.Controls.ScrollDirections value)
void WhileScrollable__set_ScrollDirections_fn(WhileScrollable* __this, int32_t* value)
{
    __this->ScrollDirections(*value);
}

// public Fuse.Controls.ScrollView get_ScrollView()
void WhileScrollable__get_ScrollView_fn(WhileScrollable* __this, ::g::Fuse::Controls::ScrollView** __retval)
{
    *__retval = __this->ScrollView();
}

// public void set_ScrollView(Fuse.Controls.ScrollView value)
void WhileScrollable__set_ScrollView_fn(WhileScrollable* __this, ::g::Fuse::Controls::ScrollView* value)
{
    __this->ScrollView(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop)
void WhileScrollable__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileScrollable* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");

    if (obj == __this->_scrollable)
        __this->SetActive(__this->IsOn());
}

// public generated WhileScrollable() [instance]
void WhileScrollable::ctor_6()
{
    ctor_5();
}

// private bool get_IsOn() [instance]
bool WhileScrollable::IsOn()
{
    uStackFrame __("Fuse.Triggers.WhileScrollable", "get_IsOn()");
    ::g::Uno::Float2 p = uPtr(_scrollable)->ScrollPosition();
    ::g::Uno::Float2 mx = uPtr(_scrollable)->MaxScroll();
    ::g::Uno::Float2 mn = uPtr(_scrollable)->MinScroll();
    float zeroTolerance = 1e-05f;
    bool isOn = (((((ScrollDirections() & 1) == 1) && ((p.X - 1e-05f) > mn.X)) || (((ScrollDirections() & 2) == 2) && ((p.X + 1e-05f) < mx.X))) || (((ScrollDirections() & 4) == 4) && ((p.Y - 1e-05f) > mn.Y))) || (((ScrollDirections() & 8) == 8) && ((p.Y + 1e-05f) < mx.Y));
    return isOn;
}

// public generated Fuse.Controls.ScrollDirections get_ScrollDirections() [instance]
int32_t WhileScrollable::ScrollDirections()
{
    return _ScrollDirections;
}

// public generated void set_ScrollDirections(Fuse.Controls.ScrollDirections value) [instance]
void WhileScrollable::ScrollDirections(int32_t value)
{
    _ScrollDirections = value;
}

// public Fuse.Controls.ScrollView get_ScrollView() [instance]
::g::Fuse::Controls::ScrollView* WhileScrollable::ScrollView()
{
    ::g::Fuse::Controls::ScrollView* ind1;
    ind1 = _source;
    return (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Controls::ScrollView*>(Parent(), ::TYPES[61/*Fuse.Controls.ScrollView*/]);
}

// public void set_ScrollView(Fuse.Controls.ScrollView value) [instance]
void WhileScrollable::ScrollView(::g::Fuse::Controls::ScrollView* value)
{
    _source = value;
}

// public generated WhileScrollable New() [static]
WhileScrollable* WhileScrollable::New2()
{
    WhileScrollable* obj2 = (WhileScrollable*)uNew(WhileScrollable_typeof());
    obj2->ctor_6();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/WhileScrolled.uno
// ----------------------------------------------------------------------------------------

// public sealed class WhileScrolled
// {
static void WhileScrolled_build(uType* type)
{
    ::STRINGS[33] = uString::Const("Scrolled could not find a Scrollable control.");
    ::STRINGS[49] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/WhileScrolled.uno");
    ::STRINGS[17] = uString::Const("OnRooted");
    ::TYPES[32] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Controls.ScrollViewBase>*/, ::g::Fuse::Controls::ScrollViewBase_typeof(), NULL);
    ::TYPES[33] = ::g::Fuse::Controls::ScrollPositionChangedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40,
        ::g::Fuse::Controls::ScrollViewBase_typeof(), offsetof(WhileScrolled, _scrollable), 0,
        ::g::Fuse::Triggers::ScrollRegion_typeof(), offsetof(WhileScrolled, _region), 0);
    type->Reflection.SetFunctions(7,
        new uFunction(".ctor", NULL, (void*)WhileScrolled__New2_fn, 0, true, type, 0),
        new uFunction("get_RelativeTo", NULL, (void*)WhileScrolled__get_RelativeTo_fn, 0, false, ::g::Fuse::Triggers::IScrolledLength_typeof(), 0),
        new uFunction("set_RelativeTo", NULL, (void*)WhileScrolled__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IScrolledLength_typeof()),
        new uFunction("get_To", NULL, (void*)WhileScrolled__get_To_fn, 0, false, ::g::Fuse::Triggers::ScrolledWhere_typeof(), 0),
        new uFunction("set_To", NULL, (void*)WhileScrolled__set_To_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::ScrolledWhere_typeof()),
        new uFunction("get_Within", NULL, (void*)WhileScrolled__get_Within_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Within", NULL, (void*)WhileScrolled__set_Within_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhileScrolled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileScrolled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileScrolled", options);
    type->fp_build_ = WhileScrolled_build;
    type->fp_ctor_ = (void*)WhileScrolled__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileScrolled__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileScrolled__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileScrolled()
void WhileScrolled__ctor_6_fn(WhileScrolled* __this)
{
    __this->ctor_6();
}

// public generated WhileScrolled New()
void WhileScrolled__New2_fn(WhileScrolled** __retval)
{
    *__retval = WhileScrolled::New2();
}

// protected override sealed void OnRooted()
void WhileScrolled__OnRooted_fn(WhileScrolled* __this)
{
    uStackFrame __("Fuse.Triggers.WhileScrolled", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_scrollable = ((::g::Fuse::Controls::ScrollViewBase*)uPtr(__this->Parent())->FindByType(::TYPES[32/*Fuse.Node.FindByType<Fuse.Controls.ScrollViewBase>*/]));

    if (__this->_scrollable == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[33/*"Scrolled co...*/], __this, ::STRINGS[49/*"/usr/local/...*/], 23, ::STRINGS[17/*"OnRooted"*/], NULL);
        return;
    }

    uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::TYPES[33/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)WhileScrolled__OnScrollPositionChanged_fn, __this));
    __this->Update();
}

// private void OnScrollPositionChanged(object s, object args)
void WhileScrolled__OnScrollPositionChanged_fn(WhileScrolled* __this, uObject* s, uObject* args)
{
    __this->OnScrollPositionChanged(s, args);
}

// protected override sealed void OnUnrooted()
void WhileScrolled__OnUnrooted_fn(WhileScrolled* __this)
{
    uStackFrame __("Fuse.Triggers.WhileScrolled", "OnUnrooted()");

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::TYPES[33/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)WhileScrolled__OnScrollPositionChanged_fn, __this));
        __this->_scrollable = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Triggers.IScrolledLength get_RelativeTo()
void WhileScrolled__get_RelativeTo_fn(WhileScrolled* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.Triggers.IScrolledLength value)
void WhileScrolled__set_RelativeTo_fn(WhileScrolled* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// public Fuse.Triggers.ScrolledWhere get_To()
void WhileScrolled__get_To_fn(WhileScrolled* __this, int32_t* __retval)
{
    *__retval = __this->To();
}

// public void set_To(Fuse.Triggers.ScrolledWhere value)
void WhileScrolled__set_To_fn(WhileScrolled* __this, int32_t* value)
{
    __this->To(*value);
}

// private void Update()
void WhileScrolled__Update_fn(WhileScrolled* __this)
{
    __this->Update();
}

// public float get_Within()
void WhileScrolled__get_Within_fn(WhileScrolled* __this, float* __retval)
{
    *__retval = __this->Within();
}

// public void set_Within(float value)
void WhileScrolled__set_Within_fn(WhileScrolled* __this, float* value)
{
    __this->Within(*value);
}

// public generated WhileScrolled() [instance]
void WhileScrolled::ctor_6()
{
    _region = ::g::Fuse::Triggers::ScrollRegion::New1();
    ctor_5();
}

// private void OnScrollPositionChanged(object s, object args) [instance]
void WhileScrolled::OnScrollPositionChanged(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Triggers.WhileScrolled", "OnScrollPositionChanged(object,object)");
    Update();
}

// public Fuse.Triggers.IScrolledLength get_RelativeTo() [instance]
uObject* WhileScrolled::RelativeTo()
{
    uStackFrame __("Fuse.Triggers.WhileScrolled", "get_RelativeTo()");
    return uPtr(_region)->RelativeTo;
}

// public void set_RelativeTo(Fuse.Triggers.IScrolledLength value) [instance]
void WhileScrolled::RelativeTo(uObject* value)
{
    uStackFrame __("Fuse.Triggers.WhileScrolled", "set_RelativeTo(Fuse.Triggers.IScrolledLength)");

    if (uPtr(_region)->SetRelativeTo(value))
        Update();
}

// public Fuse.Triggers.ScrolledWhere get_To() [instance]
int32_t WhileScrolled::To()
{
    uStackFrame __("Fuse.Triggers.WhileScrolled", "get_To()");
    return uPtr(_region)->To;
}

// public void set_To(Fuse.Triggers.ScrolledWhere value) [instance]
void WhileScrolled::To(int32_t value)
{
    uStackFrame __("Fuse.Triggers.WhileScrolled", "set_To(Fuse.Triggers.ScrolledWhere)");

    if (uPtr(_region)->SetTo(value))
        Update();
}

// private void Update() [instance]
void WhileScrolled::Update()
{
    uStackFrame __("Fuse.Triggers.WhileScrolled", "Update()");

    if (_scrollable != NULL)
        SetActive(uPtr(_region)->IsInZone(_scrollable));
}

// public float get_Within() [instance]
float WhileScrolled::Within()
{
    uStackFrame __("Fuse.Triggers.WhileScrolled", "get_Within()");
    return uPtr(_region)->Within;
}

// public void set_Within(float value) [instance]
void WhileScrolled::Within(float value)
{
    uStackFrame __("Fuse.Triggers.WhileScrolled", "set_Within(float)");

    if (uPtr(_region)->SetWithin(value))
        Update();
}

// public generated WhileScrolled New() [static]
WhileScrolled* WhileScrolled::New2()
{
    WhileScrolled* obj1 = (WhileScrolled*)uNew(WhileScrolled_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileString.uno
// ------------------------------------------------------------------

// public sealed class WhileString
// {
static void WhileString_build(uType* type)
{
    ::STRINGS[2] = uString::Const("");
    type->SetBase(::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileValue_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileValue_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface8),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileValue_type, interface9));
    type->SetFields(45,
        ::g::Fuse::Triggers::WhileStringTest_typeof(), offsetof(WhileString, _test), 0,
        ::g::Uno::String_typeof(), offsetof(WhileString, _compare), 0,
        ::g::Uno::Bool_typeof(), offsetof(WhileString, _caseSensitive), 0,
        ::g::Uno::Int_typeof(), offsetof(WhileString, _minLength), 0,
        ::g::Uno::Int_typeof(), offsetof(WhileString, _maxLength), 0,
        ::g::Uno::Bool_typeof(), offsetof(WhileString, _hasMinLength), 0,
        ::g::Uno::Bool_typeof(), offsetof(WhileString, _hasMaxLength), 0);
    type->Reflection.SetFunctions(15,
        new uFunction("get_CaseSensitive", NULL, (void*)WhileString__get_CaseSensitive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_CaseSensitive", NULL, (void*)WhileString__set_CaseSensitive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Compare", NULL, (void*)WhileString__get_Compare_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Compare", NULL, (void*)WhileString__set_Compare_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Contains", NULL, (void*)WhileString__get_Contains_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Contains", NULL, (void*)WhileString__set_Contains_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Equals", NULL, (void*)WhileString__get_Equals_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Equals", NULL, (void*)WhileString__set_Equals_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_MaxLength", NULL, (void*)WhileString__get_MaxLength_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_MaxLength", NULL, (void*)WhileString__set_MaxLength_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_MinLength", NULL, (void*)WhileString__get_MinLength_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_MinLength", NULL, (void*)WhileString__set_MinLength_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileString__New2_fn, 0, true, type, 0),
        new uFunction("get_Test", NULL, (void*)WhileString__get_Test_fn, 0, false, ::g::Fuse::Triggers::WhileStringTest_typeof(), 0),
        new uFunction("set_Test", NULL, (void*)WhileString__set_Test_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::WhileStringTest_typeof()));
}

::g::Fuse::Triggers::WhileValue_type* WhileString_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileValue_typeof();
    options.FieldCount = 52;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(WhileString);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileString", options);
    type->fp_build_ = WhileString_build;
    type->fp_ctor_ = (void*)WhileString__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileString__get_IsOn_fn;
    type->interface9.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileString()
void WhileString__ctor_7_fn(WhileString* __this)
{
    __this->ctor_7();
}

// public bool get_CaseSensitive()
void WhileString__get_CaseSensitive_fn(WhileString* __this, bool* __retval)
{
    *__retval = __this->CaseSensitive();
}

// public void set_CaseSensitive(bool value)
void WhileString__set_CaseSensitive_fn(WhileString* __this, bool* value)
{
    __this->CaseSensitive(*value);
}

// public string get_Compare()
void WhileString__get_Compare_fn(WhileString* __this, uString** __retval)
{
    *__retval = __this->Compare();
}

// public void set_Compare(string value)
void WhileString__set_Compare_fn(WhileString* __this, uString* value)
{
    __this->Compare(value);
}

// public string get_Contains()
void WhileString__get_Contains_fn(WhileString* __this, uString** __retval)
{
    *__retval = __this->Contains1();
}

// public void set_Contains(string value)
void WhileString__set_Contains_fn(WhileString* __this, uString* value)
{
    __this->Contains1(value);
}

// public new string get_Equals()
void WhileString__get_Equals_fn(WhileString* __this, uString** __retval)
{
    *__retval = __this->Equals2();
}

// public new void set_Equals(string value)
void WhileString__set_Equals_fn(WhileString* __this, uString* value)
{
    __this->Equals2(value);
}

// protected override sealed bool get_IsOn()
void WhileString__get_IsOn_fn(WhileString* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileString", "get_IsOn()");
    uString* ind1;
    uString* ind2;
    uString* ret4;
    ind1 = (::g::Fuse::Triggers::WhileValue__get_Value_fn(__this, &ret4), ret4);
    uString* value = (ind1 != NULL) ? ind1 : ::STRINGS[2/*""*/];
    ind2 = __this->Compare();
    uString* compare = (ind2 != NULL) ? ind2 : ::STRINGS[2/*""*/];

    if (__this->_hasMaxLength && (uPtr(value)->Length() > __this->MaxLength()))
        return *__retval = false, void();

    if (__this->_hasMinLength && (uPtr(value)->Length() < __this->MinLength()))
        return *__retval = false, void();

    if (!__this->CaseSensitive())
    {
        value = ::g::Uno::String::ToLower(uPtr(value));
        compare = ::g::Uno::String::ToLower(uPtr(compare));
    }

    bool c = true;

    switch (__this->Test())
    {
        case 0:
        {
            c = true;
            break;
        }
        case 1:
        {
            c = uPtr(value)->Length() == 0;
            break;
        }
        case 2:
        {
            c = uPtr(value)->Length() > 0;
            break;
        }
        case 3:
        {
            c = ::g::Uno::String::op_Equality(value, compare);
            break;
        }
        case 4:
        {
            c = ::g::Uno::String::IndexOf3(uPtr(value), compare, 0) != -1;
            break;
        }
    }

    if (!c)
        return *__retval = false, void();

    return *__retval = true, void();
}

// public int get_MaxLength()
void WhileString__get_MaxLength_fn(WhileString* __this, int32_t* __retval)
{
    *__retval = __this->MaxLength();
}

// public void set_MaxLength(int value)
void WhileString__set_MaxLength_fn(WhileString* __this, int32_t* value)
{
    __this->MaxLength(*value);
}

// public int get_MinLength()
void WhileString__get_MinLength_fn(WhileString* __this, int32_t* __retval)
{
    *__retval = __this->MinLength();
}

// public void set_MinLength(int value)
void WhileString__set_MinLength_fn(WhileString* __this, int32_t* value)
{
    __this->MinLength(*value);
}

// public generated WhileString New()
void WhileString__New2_fn(WhileString** __retval)
{
    *__retval = WhileString::New2();
}

// public Fuse.Triggers.WhileStringTest get_Test()
void WhileString__get_Test_fn(WhileString* __this, int32_t* __retval)
{
    *__retval = __this->Test();
}

// public void set_Test(Fuse.Triggers.WhileStringTest value)
void WhileString__set_Test_fn(WhileString* __this, int32_t* value)
{
    __this->Test(*value);
}

// public generated WhileString() [instance]
void WhileString::ctor_7()
{
    _caseSensitive = true;
    ctor_6();
}

// public bool get_CaseSensitive() [instance]
bool WhileString::CaseSensitive()
{
    return _caseSensitive;
}

// public void set_CaseSensitive(bool value) [instance]
void WhileString::CaseSensitive(bool value)
{
    if (value != _caseSensitive)
    {
        _caseSensitive = value;
        UpdateState();
    }
}

// public string get_Compare() [instance]
uString* WhileString::Compare()
{
    return _compare;
}

// public void set_Compare(string value) [instance]
void WhileString::Compare(uString* value)
{
    if (::g::Uno::String::op_Inequality(_compare, value))
    {
        _compare = value;
        UpdateState();
    }
}

// public string get_Contains() [instance]
uString* WhileString::Contains1()
{
    return Compare();
}

// public void set_Contains(string value) [instance]
void WhileString::Contains1(uString* value)
{
    Compare(value);
    Test(4);
}

// public new string get_Equals() [instance]
uString* WhileString::Equals2()
{
    return Compare();
}

// public new void set_Equals(string value) [instance]
void WhileString::Equals2(uString* value)
{
    Compare(value);
    Test(3);
}

// public int get_MaxLength() [instance]
int32_t WhileString::MaxLength()
{
    return _maxLength;
}

// public void set_MaxLength(int value) [instance]
void WhileString::MaxLength(int32_t value)
{
    if (!_hasMaxLength || (value != _maxLength))
    {
        _hasMaxLength = true;
        _maxLength = value;
        UpdateState();
    }
}

// public int get_MinLength() [instance]
int32_t WhileString::MinLength()
{
    return _minLength;
}

// public void set_MinLength(int value) [instance]
void WhileString::MinLength(int32_t value)
{
    if (!_hasMinLength || (value != _minLength))
    {
        _hasMinLength = true;
        _minLength = value;
        UpdateState();
    }
}

// public Fuse.Triggers.WhileStringTest get_Test() [instance]
int32_t WhileString::Test()
{
    return _test;
}

// public void set_Test(Fuse.Triggers.WhileStringTest value) [instance]
void WhileString::Test(int32_t value)
{
    if (_test != value)
    {
        _test = value;
        UpdateState();
    }
}

// public generated WhileString New() [static]
WhileString* WhileString::New2()
{
    WhileString* obj3 = (WhileString*)uNew(WhileString_typeof());
    obj3->ctor_7();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileString.uno
// ------------------------------------------------------------------

// public enum WhileStringTest
uEnumType* WhileStringTest_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.WhileStringTest", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "None", 0LL,
        "IsEmpty", 1LL,
        "IsNotEmpty", 2LL,
        "Equals", 3LL,
        "Contains", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileTrigger.uno
// -------------------------------------------------------------------

// public abstract class WhileTrigger
// {
static void WhileTrigger_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39,
        ::g::Uno::Bool_typeof(), offsetof(WhileTrigger, _Invert), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Invert", NULL, (void*)WhileTrigger__get_Invert_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Invert", NULL, (void*)WhileTrigger__set_Invert_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhileTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileTrigger", options);
    type->fp_build_ = WhileTrigger_build;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// protected generated WhileTrigger()
void WhileTrigger__ctor_5_fn(WhileTrigger* __this)
{
    __this->ctor_5();
}

// protected void BypassSetActive(bool on)
void WhileTrigger__BypassSetActive_fn(WhileTrigger* __this, bool* on)
{
    __this->BypassSetActive(*on);
}

// public generated bool get_Invert()
void WhileTrigger__get_Invert_fn(WhileTrigger* __this, bool* __retval)
{
    *__retval = __this->Invert();
}

// public generated void set_Invert(bool value)
void WhileTrigger__set_Invert_fn(WhileTrigger* __this, bool* value)
{
    __this->Invert(*value);
}

// protected void SetActive(bool on)
void WhileTrigger__SetActive_fn(WhileTrigger* __this, bool* on)
{
    __this->SetActive(*on);
}

// protected generated WhileTrigger() [instance]
void WhileTrigger::ctor_5()
{
    ctor_4();
}

// protected void BypassSetActive(bool on) [instance]
void WhileTrigger::BypassSetActive(bool on)
{
    if (on != Invert())
        BypassActivate();
    else
        BypassDeactivate();
}

// public generated bool get_Invert() [instance]
bool WhileTrigger::Invert()
{
    return _Invert;
}

// public generated void set_Invert(bool value) [instance]
void WhileTrigger::Invert(bool value)
{
    _Invert = value;
}

// protected void SetActive(bool on) [instance]
void WhileTrigger::SetActive(bool on)
{
    if (on != Invert())
        Activate(NULL);
    else
        Deactivate();
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileBool.uno
// ----------------------------------------------------------------

// public class WhileTrue
// {
static void WhileTrue_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBool_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBool_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WhileBool_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface8),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface9),
        ::g::Fuse::Triggers::Actions::IToggleable_typeof(), offsetof(::g::Fuse::Triggers::WhileBool_type, interface10));
    type->SetFields(45);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileTrue__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::WhileBool_type* WhileTrue_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileBool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileBool_typeof();
    options.FieldCount = 45;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(WhileTrue);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileBool_type);
    type = (::g::Fuse::Triggers::WhileBool_type*)uClassType::New("Fuse.Triggers.WhileTrue", options);
    type->fp_build_ = WhileTrue_build;
    type->fp_ctor_ = (void*)WhileTrue__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileTrue__get_IsOn_fn;
    type->interface10.fp_Toggle = (void(*)(uObject*))::g::Fuse::Triggers::WhileBool__Toggle_fn;
    type->interface9.fp_Pulse = (void(*)(uObject*))::g::Fuse::Triggers::WhileValue__Pulse1_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileTrue()
void WhileTrue__ctor_8_fn(WhileTrue* __this)
{
    __this->ctor_8();
}

// protected override sealed bool get_IsOn()
void WhileTrue__get_IsOn_fn(WhileTrue* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileTrue", "get_IsOn()");
    return *__retval = __this->Value1(), void();
}

// public generated WhileTrue New()
void WhileTrue__New2_fn(WhileTrue** __retval)
{
    *__retval = WhileTrue::New2();
}

// public generated WhileTrue() [instance]
void WhileTrue::ctor_8()
{
    ctor_7();
}

// public generated WhileTrue New() [static]
WhileTrue* WhileTrue::New2()
{
    WhileTrue* obj1 = (WhileTrue*)uNew(WhileTrue_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileValue.uno
// -----------------------------------------------------------------

// public abstract class WhileValue<T>
// {
static void WhileValue_build(uType* type)
{
    ::STRINGS[50] = uString::Const("`Pulse` on a `WhileValue` will be removed, create a `Timeline` instead.");
    ::STRINGS[51] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileValue.uno");
    ::STRINGS[52] = uString::Const("Pulse");
    ::TYPES[62] = ::g::Fuse::Triggers::IValue_typeof();
    ::TYPES[63] = ::g::Uno::UX::ValueChangedHandler_typeof();
    type->SetPrecalc(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileValue_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileValue_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileValue_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileValue_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WhileValue_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileValue_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileValue_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileValue_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileValue_type, interface8),
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(WhileValue_type, interface9));
    type->SetFields(40,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(WhileValue, _hasValue), 0,
        ::TYPES[62/*Fuse.Triggers.IValue`1*/]->MakeType(type->T(0), NULL), offsetof(WhileValue, _source), 0,
        ::TYPES[62/*Fuse.Triggers.IValue`1*/]->MakeType(type->T(0), NULL), offsetof(WhileValue, _obj), 0,
        ::TYPES[63/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0), NULL), offsetof(WhileValue, ValueChanged1), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("Pulse", NULL, (void*)WhileValue__Pulse1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WhileValue__get_Source_fn, 0, false, ::TYPES[62/*Fuse.Triggers.IValue`1*/]->MakeType(type->T(0), NULL), 0),
        new uFunction("set_Source", NULL, (void*)WhileValue__set_Source_fn, 0, false, uVoid_typeof(), 1, ::TYPES[62/*Fuse.Triggers.IValue`1*/]->MakeType(type->T(0), NULL)),
        new uFunction("get_Value", NULL, (void*)WhileValue__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)WhileValue__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("add_ValueChanged", NULL, (void*)WhileValue__add_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[63/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0), NULL)),
        new uFunction("remove_ValueChanged", NULL, (void*)WhileValue__remove_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[63/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0), NULL)));
}

WhileValue_type* WhileValue_typeof()
{
    static uSStrong<WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 45;
    options.GenericCount = 1;
    options.InterfaceCount = 10;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WhileValue);
    options.TypeSize = sizeof(WhileValue_type);
    type = (WhileValue_type*)uClassType::New("Fuse.Triggers.WhileValue`1", options);
    type->fp_build_ = WhileValue_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileValue__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileValue__OnUnrooted_fn;
    type->interface9.fp_Pulse = (void(*)(uObject*))WhileValue__Pulse1_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// protected generated WhileValue()
void WhileValue__ctor_6_fn(WhileValue* __this)
{
    __this->ctor_6();
}

// private static Fuse.Triggers.IValue<T> FindValueNode(Fuse.Node n)
void WhileValue__FindValueNode_fn(uType* __type, ::g::Fuse::Node* n, uObject** __retval)
{
    *__retval = WhileValue::FindValueNode(__type, n);
}

// protected override sealed void OnRooted()
void WhileValue__OnRooted_fn(WhileValue* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "OnRooted()");
    uObject* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_obj = (ind1 = __this->Source(), ((ind1 != NULL) ? ind1 : (uObject*)WhileValue::FindValueNode(__this->__type->GetBase(WhileValue_typeof()), __this->Parent())));

    if (__this->_obj != NULL)
        ::g::Fuse::Triggers::IValue::add_ValueChanged(uInterface(uPtr(__this->_obj), __types[0]), uDelegate::New(__types[1], (void*)WhileValue__OnValueChanged_fn, __this));

    __this->SetActive(__this->IsOn());
}

// protected override sealed void OnUnrooted()
void WhileValue__OnUnrooted_fn(WhileValue* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "OnUnrooted()");

    if (__this->_obj != NULL)
    {
        ::g::Fuse::Triggers::IValue::remove_ValueChanged(uInterface(uPtr(__this->_obj), __types[0]), uDelegate::New(__types[1], (void*)WhileValue__OnValueChanged_fn, __this));
        __this->_obj = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> a)
void WhileValue__OnValueChanged_fn(WhileValue* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* a)
{
    __this->OnValueChanged(s, a);
}

// public new void Pulse()
void WhileValue__Pulse1_fn(WhileValue* __this)
{
    __this->Pulse1();
}

// public Fuse.Triggers.IValue<T> get_Source()
void WhileValue__get_Source_fn(WhileValue* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Triggers.IValue<T> value)
void WhileValue__set_Source_fn(WhileValue* __this, uObject* value)
{
    __this->Source(value);
}

// protected void UpdateState()
void WhileValue__UpdateState_fn(WhileValue* __this)
{
    __this->UpdateState();
}

// public T get_Value()
void WhileValue__get_Value_fn(WhileValue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "get_Value()");
    uT ret2(__this->__type->GetBase(WhileValue_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(WhileValue_typeof())->T(0)->ValueSize));

    if (__this->_hasValue)
        return __retval.Store(__this->_value()), void();

    if (__this->_obj != NULL)
        return __retval.Store((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(__this->_obj), __types[0]), &ret2), ret2)), void();

    return __retval.Store(__this->_value()), void();
}

// public void set_Value(T value)
void WhileValue__set_Value_fn(WhileValue* __this, void* value)
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", "set_Value(T)");

    if (!__this->_hasValue || !::g::Uno::Object::Equals1(uBoxPtr(__this->__type->GetBase(WhileValue_typeof())->T(0), __this->_value()), uBoxPtr(__this->__type->GetBase(WhileValue_typeof())->T(0), value)))
    {
        __this->_hasValue = true;
        __this->_value() = value;
        __this->SetActive(__this->IsOn());
    }
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value)
void WhileValue__add_ValueChanged_fn(WhileValue* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value)
void WhileValue__remove_ValueChanged_fn(WhileValue* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// protected generated WhileValue() [instance]
void WhileValue::ctor_6()
{
    ctor_5();
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> a) [instance]
void WhileValue::OnValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* a)
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", "OnValueChanged(object,Uno.UX.ValueChangedArgs<T>)");
    SetActive(IsOn());

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, a);
}

// public new void Pulse() [instance]
void WhileValue::Pulse1()
{
    uStackFrame __("Fuse.Triggers.WhileValue`1", "Pulse()");

    if (!::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote_)
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[50/*"`Pulse` on ...*/], this, ::STRINGS[51/*"/usr/local/...*/], 47, ::STRINGS[52/*"Pulse"*/]);
        ::g::Fuse::Triggers::WhileValueStatic::_deprecatedNote_ = true;
    }

    if (IsOn() != Invert())
        InversePulse();
    else
        Pulse();
}

// public Fuse.Triggers.IValue<T> get_Source() [instance]
uObject* WhileValue::Source()
{
    return _source;
}

// public void set_Source(Fuse.Triggers.IValue<T> value) [instance]
void WhileValue::Source(uObject* value)
{
    _source = value;
}

// protected void UpdateState() [instance]
void WhileValue::UpdateState()
{
    if (!IsRootingCompleted())
        return;

    SetActive(IsOn());
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance]
void WhileValue::add_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "add_ValueChanged(Uno.UX.ValueChangedHandler<T>)");
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), __types[0]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance]
void WhileValue::remove_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "remove_ValueChanged(Uno.UX.ValueChangedHandler<T>)");
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), __types[0]);
}

// private static Fuse.Triggers.IValue<T> FindValueNode(Fuse.Node n) [static]
uObject* WhileValue::FindValueNode(uType* __type, ::g::Fuse::Node* n)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Triggers.IValue<T>*/),
    };
    uStackFrame __("Fuse.Triggers.WhileValue`1", "FindValueNode(Fuse.Node)");

    if (uIs(n, __types[0]))
        return (uObject*)n;

    if (uPtr(n)->ContextParent() != NULL)
        return WhileValue::FindValueNode(__type, uPtr(n)->ContextParent());

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileValue.uno
// -----------------------------------------------------------------

// internal static class WhileValueStatic
// {
static void WhileValueStatic_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&WhileValueStatic::_deprecatedNote_, uFieldFlagsStatic);
}

uClassType* WhileValueStatic_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Triggers.WhileValueStatic", options);
    type->fp_build_ = WhileValueStatic_build;
    return type;
}

bool WhileValueStatic::_deprecatedNote_;
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileVisible.uno
// -------------------------------------------------------------------

// public sealed class WhileVisible
// {
static void WhileVisible_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileVisible__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* WhileVisible_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileVisible);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileVisible", options);
    type->fp_build_ = WhileVisible_build;
    type->fp_ctor_ = (void*)WhileVisible__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileVisible__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileVisible__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileVisible()
void WhileVisible__ctor_6_fn(WhileVisible* __this)
{
    __this->ctor_6();
}

// public generated WhileVisible New()
void WhileVisible__New2_fn(WhileVisible** __retval)
{
    *__retval = WhileVisible::New2();
}

// private void OnIsVisibleChanged(object sender, Uno.EventArgs args)
void WhileVisible__OnIsVisibleChanged_fn(WhileVisible* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnIsVisibleChanged(sender, args);
}

// protected override sealed void OnRooted()
void WhileVisible__OnRooted_fn(WhileVisible* __this)
{
    uStackFrame __("Fuse.Triggers.WhileVisible", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    uPtr(__this->Parent())->add_IsVisibleChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)WhileVisible__OnIsVisibleChanged_fn, __this));
    __this->SetActive(uPtr(__this->Parent())->IsVisible());
}

// protected override sealed void OnUnrooted()
void WhileVisible__OnUnrooted_fn(WhileVisible* __this)
{
    uStackFrame __("Fuse.Triggers.WhileVisible", "OnUnrooted()");
    uPtr(__this->Parent())->remove_IsVisibleChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)WhileVisible__OnIsVisibleChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileVisible() [instance]
void WhileVisible::ctor_6()
{
    ctor_5();
}

// private void OnIsVisibleChanged(object sender, Uno.EventArgs args) [instance]
void WhileVisible::OnIsVisibleChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Triggers.WhileVisible", "OnIsVisibleChanged(object,Uno.EventArgs)");
    SetActive(uPtr(Parent())->IsVisible());
}

// public generated WhileVisible New() [static]
WhileVisible* WhileVisible::New2()
{
    WhileVisible* obj1 = (WhileVisible*)uNew(WhileVisible_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/WhileVisibleInScrollView.uno
// ---------------------------------------------------------------------------------------------------

// public sealed class WhileVisibleInScrollView
// {
static void WhileVisibleInScrollView_build(uType* type)
{
    ::STRINGS[53] = uString::Const("Could not find a ScrollView control.");
    ::STRINGS[54] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/WhileVisibleInScrollView.uno");
    ::STRINGS[17] = uString::Const("OnRooted");
    ::STRINGS[55] = uString::Const("Parent must be an Element");
    ::STRINGS[56] = uString::Const("Must have an Element path to the ScrollView");
    ::TYPES[32] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Controls.ScrollViewBase>*/, ::g::Fuse::Controls::ScrollViewBase_typeof(), NULL);
    ::TYPES[15] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[33] = ::g::Fuse::Controls::ScrollPositionChangedHandler_typeof();
    ::TYPES[16] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[35] = ::g::Fuse::Triggers::IScrolledLength_typeof();
    type->SetDependencies(
        ::g::Fuse::Triggers::IScrolledLengths_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40,
        ::g::Fuse::Controls::ScrollViewBase_typeof(), offsetof(WhileVisibleInScrollView, _scrollable), 0,
        ::TYPES[15/*Fuse.Elements.Element*/], offsetof(WhileVisibleInScrollView, _element), 0,
        ::g::Uno::Float_typeof(), offsetof(WhileVisibleInScrollView, _distance), 0,
        ::TYPES[35/*Fuse.Triggers.IScrolledLength*/], offsetof(WhileVisibleInScrollView, _relativeTo), 0,
        ::g::Fuse::Triggers::WhileVisibleInScrollViewMode_typeof(), offsetof(WhileVisibleInScrollView, _mode), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Distance", NULL, (void*)WhileVisibleInScrollView__get_Distance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Distance", NULL, (void*)WhileVisibleInScrollView__set_Distance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Mode", NULL, (void*)WhileVisibleInScrollView__get_Mode_fn, 0, false, ::g::Fuse::Triggers::WhileVisibleInScrollViewMode_typeof(), 0),
        new uFunction("set_Mode", NULL, (void*)WhileVisibleInScrollView__set_Mode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::WhileVisibleInScrollViewMode_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileVisibleInScrollView__New2_fn, 0, true, type, 0),
        new uFunction("get_RelativeTo", NULL, (void*)WhileVisibleInScrollView__get_RelativeTo_fn, 0, false, ::TYPES[35/*Fuse.Triggers.IScrolledLength*/], 0),
        new uFunction("set_RelativeTo", NULL, (void*)WhileVisibleInScrollView__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::TYPES[35/*Fuse.Triggers.IScrolledLength*/]));
}

::g::Fuse::Triggers::Trigger_type* WhileVisibleInScrollView_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 45;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileVisibleInScrollView);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileVisibleInScrollView", options);
    type->fp_build_ = WhileVisibleInScrollView_build;
    type->fp_ctor_ = (void*)WhileVisibleInScrollView__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileVisibleInScrollView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileVisibleInScrollView__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileVisibleInScrollView()
void WhileVisibleInScrollView__ctor_6_fn(WhileVisibleInScrollView* __this)
{
    __this->ctor_6();
}

// public float get_Distance()
void WhileVisibleInScrollView__get_Distance_fn(WhileVisibleInScrollView* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// public void set_Distance(float value)
void WhileVisibleInScrollView__set_Distance_fn(WhileVisibleInScrollView* __this, float* value)
{
    __this->Distance(*value);
}

// public Fuse.Triggers.WhileVisibleInScrollViewMode get_Mode()
void WhileVisibleInScrollView__get_Mode_fn(WhileVisibleInScrollView* __this, int32_t* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Triggers.WhileVisibleInScrollViewMode value)
void WhileVisibleInScrollView__set_Mode_fn(WhileVisibleInScrollView* __this, int32_t* value)
{
    __this->Mode(*value);
}

// public generated WhileVisibleInScrollView New()
void WhileVisibleInScrollView__New2_fn(WhileVisibleInScrollView** __retval)
{
    *__retval = WhileVisibleInScrollView::New2();
}

// private void OnElementPlaced(object s, object args)
void WhileVisibleInScrollView__OnElementPlaced_fn(WhileVisibleInScrollView* __this, uObject* s, uObject* args)
{
    __this->OnElementPlaced(s, args);
}

// protected override sealed void OnRooted()
void WhileVisibleInScrollView__OnRooted_fn(WhileVisibleInScrollView* __this)
{
    uStackFrame __("Fuse.Triggers.WhileVisibleInScrollView", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_scrollable = ((::g::Fuse::Controls::ScrollViewBase*)uPtr(__this->Parent())->FindByType(::TYPES[32/*Fuse.Node.FindByType<Fuse.Controls.ScrollViewBase>*/]));

    if (__this->_scrollable == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[53/*"Could not f...*/], __this, ::STRINGS[54/*"/usr/local/...*/], 63, ::STRINGS[17/*"OnRooted"*/], NULL);
        return;
    }

    __this->_element = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[15/*Fuse.Elements.Element*/]);

    if (__this->_element == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[55/*"Parent must...*/], __this, ::STRINGS[54/*"/usr/local/...*/], 70, ::STRINGS[17/*"OnRooted"*/], NULL);
        return;
    }

    if (!uPtr(__this->_element)->HasLayoutIn(__this->_scrollable))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[56/*"Must have a...*/], __this, ::STRINGS[54/*"/usr/local/...*/], 76, ::STRINGS[17/*"OnRooted"*/], NULL);
        return;
    }

    uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::TYPES[33/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)WhileVisibleInScrollView__OnScrollPositionChanged_fn, __this));
    uPtr(__this->_element)->add_Placed(uDelegate::New(::TYPES[16/*Fuse.PlacedHandler*/], (void*)WhileVisibleInScrollView__OnElementPlaced_fn, __this));
    __this->RequireLayout(__this->_element);
    __this->Update();
}

// private void OnScrollPositionChanged(object s, object args)
void WhileVisibleInScrollView__OnScrollPositionChanged_fn(WhileVisibleInScrollView* __this, uObject* s, uObject* args)
{
    __this->OnScrollPositionChanged(s, args);
}

// protected override sealed void OnUnrooted()
void WhileVisibleInScrollView__OnUnrooted_fn(WhileVisibleInScrollView* __this)
{
    uStackFrame __("Fuse.Triggers.WhileVisibleInScrollView", "OnUnrooted()");

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_element)->remove_Placed(uDelegate::New(::TYPES[16/*Fuse.PlacedHandler*/], (void*)WhileVisibleInScrollView__OnElementPlaced_fn, __this));
        uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::TYPES[33/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)WhileVisibleInScrollView__OnScrollPositionChanged_fn, __this));
        __this->_scrollable = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Triggers.IScrolledLength get_RelativeTo()
void WhileVisibleInScrollView__get_RelativeTo_fn(WhileVisibleInScrollView* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.Triggers.IScrolledLength value)
void WhileVisibleInScrollView__set_RelativeTo_fn(WhileVisibleInScrollView* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// private void Update()
void WhileVisibleInScrollView__Update_fn(WhileVisibleInScrollView* __this)
{
    __this->Update();
}

// public generated WhileVisibleInScrollView() [instance]
void WhileVisibleInScrollView::ctor_6()
{
    _distance = 0.0f;
    _relativeTo = ::g::Fuse::Triggers::IScrolledLengths::Points();
    ctor_5();
}

// public float get_Distance() [instance]
float WhileVisibleInScrollView::Distance()
{
    return _distance;
}

// public void set_Distance(float value) [instance]
void WhileVisibleInScrollView::Distance(float value)
{
    uStackFrame __("Fuse.Triggers.WhileVisibleInScrollView", "set_Distance(float)");
    _distance = value;
    Update();
}

// public Fuse.Triggers.WhileVisibleInScrollViewMode get_Mode() [instance]
int32_t WhileVisibleInScrollView::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Triggers.WhileVisibleInScrollViewMode value) [instance]
void WhileVisibleInScrollView::Mode(int32_t value)
{
    uStackFrame __("Fuse.Triggers.WhileVisibleInScrollView", "set_Mode(Fuse.Triggers.WhileVisibleInScrollViewMode)");
    _mode = value;
    Update();
}

// private void OnElementPlaced(object s, object args) [instance]
void WhileVisibleInScrollView::OnElementPlaced(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Triggers.WhileVisibleInScrollView", "OnElementPlaced(object,object)");
    Update();
}

// private void OnScrollPositionChanged(object s, object args) [instance]
void WhileVisibleInScrollView::OnScrollPositionChanged(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Triggers.WhileVisibleInScrollView", "OnScrollPositionChanged(object,object)");
    Update();
}

// public Fuse.Triggers.IScrolledLength get_RelativeTo() [instance]
uObject* WhileVisibleInScrollView::RelativeTo()
{
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.Triggers.IScrolledLength value) [instance]
void WhileVisibleInScrollView::RelativeTo(uObject* value)
{
    uStackFrame __("Fuse.Triggers.WhileVisibleInScrollView", "set_RelativeTo(Fuse.Triggers.IScrolledLength)");
    _relativeTo = value;
    Update();
}

// private void Update() [instance]
void WhileVisibleInScrollView::Update()
{
    uStackFrame __("Fuse.Triggers.WhileVisibleInScrollView", "Update()");

    if (((_element == NULL) || (_scrollable == NULL)) || !uPtr(_element)->HasMarginBox())
        return;

    float zeroTolerance = 1e-05f;
    ::g::Uno::Float2 min = uPtr(_element)->GetLayoutPositionIn(_scrollable);
    ::g::Uno::Float2 max = ::g::Uno::Float2__op_Addition2(min, uPtr(_element)->ActualSize());
    float maxDist = uPtr(_scrollable)->ToScalarPosition(::g::Fuse::Triggers::IScrolledLength::GetPoints(uInterface(uPtr(RelativeTo()), ::TYPES[35/*Fuse.Triggers.IScrolledLength*/]), Distance(), _scrollable));
    bool isInView = false;

    switch (_mode)
    {
        case 1:
        {
            ::g::Uno::Float4 dist = uPtr(_scrollable)->DistanceToView(min, max);
            float distStart = uPtr(_scrollable)->ToScalarPosition(::g::Uno::Float2__New2(dist.X, dist.Y));
            float distEnd = uPtr(_scrollable)->ToScalarPosition(::g::Uno::Float2__New2(dist.Z, dist.W));
            isInView = (distStart > (maxDist - 1e-05f)) && (distEnd > (maxDist - 1e-05f));
            break;
        }
        case 0:
        {
            ::g::Uno::Float4 dist1 = uPtr(_scrollable)->DistanceToView(max, min);
            float distStart1 = uPtr(_scrollable)->ToScalarPosition(::g::Uno::Float2__New2(dist1.X, dist1.Y));
            float distEnd1 = uPtr(_scrollable)->ToScalarPosition(::g::Uno::Float2__New2(dist1.Z, dist1.W));
            isInView = (distStart1 > ((-1.0f * maxDist) - 1e-05f)) && (distEnd1 > ((-1.0f * maxDist) - 1e-05f));
            break;
        }
    }

    SetActive(isInView);
}

// public generated WhileVisibleInScrollView New() [static]
WhileVisibleInScrollView* WhileVisibleInScrollView::New2()
{
    WhileVisibleInScrollView* obj1 = (WhileVisibleInScrollView*)uNew(WhileVisibleInScrollView_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Triggers/WhileVisibleInScrollView.uno
// ---------------------------------------------------------------------------------------------------

// public enum WhileVisibleInScrollViewMode
uEnumType* WhileVisibleInScrollViewMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.WhileVisibleInScrollViewMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Partial", 0LL,
        "Full", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileWindowAspect.uno
// ------------------------------------------------------------------------

// public abstract class WhileWindowAspect
// {
static void WhileWindowAspect_build(uType* type)
{
    ::TYPES[64] = ::g::Fuse::ICommonViewport_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface8));
    type->SetFields(41);
}

::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowAspect_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WindowSizeTrigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileWindowAspect);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowAspect", options);
    type->fp_build_ = WhileWindowAspect_build;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// protected generated WhileWindowAspect()
void WhileWindowAspect__ctor_7_fn(WhileWindowAspect* __this)
{
    __this->ctor_7();
}

// protected float get_Aspect()
void WhileWindowAspect__get_Aspect_fn(WhileWindowAspect* __this, float* __retval)
{
    *__retval = __this->Aspect();
}

// protected generated WhileWindowAspect() [instance]
void WhileWindowAspect::ctor_7()
{
    ctor_6();
}

// protected float get_Aspect() [instance]
float WhileWindowAspect::Aspect()
{
    uStackFrame __("Fuse.Triggers.WhileWindowAspect", "get_Aspect()");

    if (Viewport() == NULL)
        return 0.5f;

    ::g::Uno::Float2 sz = ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(Viewport()), ::TYPES[64/*Fuse.ICommonViewport*/]));
    return sz.X / sz.Y;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileWindowAspect.uno
// ------------------------------------------------------------------------

// public sealed class WhileWindowLandscape
// {
static void WhileWindowLandscape_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface8));
    type->SetFields(41);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileWindowLandscape__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowLandscape_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileWindowAspect_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileWindowLandscape);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowLandscape", options);
    type->fp_build_ = WhileWindowLandscape_build;
    type->fp_ctor_ = (void*)WhileWindowLandscape__New2_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*))WhileWindowLandscape__get_IsActive_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileWindowLandscape()
void WhileWindowLandscape__ctor_8_fn(WhileWindowLandscape* __this)
{
    __this->ctor_8();
}

// protected override sealed bool get_IsActive()
void WhileWindowLandscape__get_IsActive_fn(WhileWindowLandscape* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileWindowLandscape", "get_IsActive()");
    return *__retval = __this->Aspect() > 1.0f, void();
}

// public generated WhileWindowLandscape New()
void WhileWindowLandscape__New2_fn(WhileWindowLandscape** __retval)
{
    *__retval = WhileWindowLandscape::New2();
}

// public generated WhileWindowLandscape() [instance]
void WhileWindowLandscape::ctor_8()
{
    ctor_7();
}

// public generated WhileWindowLandscape New() [static]
WhileWindowLandscape* WhileWindowLandscape::New2()
{
    WhileWindowLandscape* obj1 = (WhileWindowLandscape*)uNew(WhileWindowLandscape_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileWindowAspect.uno
// ------------------------------------------------------------------------

// public sealed class WhileWindowPortrait
// {
static void WhileWindowPortrait_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface8));
    type->SetFields(41);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileWindowPortrait__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowPortrait_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileWindowAspect_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileWindowPortrait);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowPortrait", options);
    type->fp_build_ = WhileWindowPortrait_build;
    type->fp_ctor_ = (void*)WhileWindowPortrait__New2_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*))WhileWindowPortrait__get_IsActive_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileWindowPortrait()
void WhileWindowPortrait__ctor_8_fn(WhileWindowPortrait* __this)
{
    __this->ctor_8();
}

// protected override sealed bool get_IsActive()
void WhileWindowPortrait__get_IsActive_fn(WhileWindowPortrait* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileWindowPortrait", "get_IsActive()");
    return *__retval = __this->Aspect() <= 1.0f, void();
}

// public generated WhileWindowPortrait New()
void WhileWindowPortrait__New2_fn(WhileWindowPortrait** __retval)
{
    *__retval = WhileWindowPortrait::New2();
}

// public generated WhileWindowPortrait() [instance]
void WhileWindowPortrait::ctor_8()
{
    ctor_7();
}

// public generated WhileWindowPortrait New() [static]
WhileWindowPortrait* WhileWindowPortrait::New2()
{
    WhileWindowPortrait* obj1 = (WhileWindowPortrait*)uNew(WhileWindowPortrait_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileWindowAspect.uno
// ------------------------------------------------------------------------

// public sealed class WhileWindowSize
// {
static void WhileWindowSize_build(uType* type)
{
    ::TYPES[64] = ::g::Fuse::ICommonViewport_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger_type, interface8));
    type->SetFields(41,
        ::g::Uno::Float2_typeof(), offsetof(WhileWindowSize, _EqualTo), 0,
        ::g::Uno::Float2_typeof(), offsetof(WhileWindowSize, _GreaterThan), 0,
        ::g::Uno::Float2_typeof(), offsetof(WhileWindowSize, _LessThan), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_EqualTo", NULL, (void*)WhileWindowSize__get_EqualTo_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_EqualTo", NULL, (void*)WhileWindowSize__set_EqualTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_GreaterThan", NULL, (void*)WhileWindowSize__get_GreaterThan_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileWindowSize__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileWindowSize__get_LessThan_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileWindowSize__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileWindowSize__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowSize_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WindowSizeTrigger_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileWindowSize);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowSize", options);
    type->fp_build_ = WhileWindowSize_build;
    type->fp_ctor_ = (void*)WhileWindowSize__New2_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*))WhileWindowSize__get_IsActive_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileWindowSize()
void WhileWindowSize__ctor_7_fn(WhileWindowSize* __this)
{
    __this->ctor_7();
}

// public generated float2 get_EqualTo()
void WhileWindowSize__get_EqualTo_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->EqualTo();
}

// public generated void set_EqualTo(float2 value)
void WhileWindowSize__set_EqualTo_fn(WhileWindowSize* __this, ::g::Uno::Float2* value)
{
    __this->EqualTo(*value);
}

// public generated float2 get_GreaterThan()
void WhileWindowSize__get_GreaterThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GreaterThan();
}

// public generated void set_GreaterThan(float2 value)
void WhileWindowSize__set_GreaterThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* value)
{
    __this->GreaterThan(*value);
}

// protected override sealed bool get_IsActive()
void WhileWindowSize__get_IsActive_fn(WhileWindowSize* __this, bool* __retval)
{
    uStackFrame __("Fuse.Triggers.WhileWindowSize", "get_IsActive()");

    if (__this->Viewport() == NULL)
        return *__retval = false, void();

    ::g::Uno::Float2 sz = ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(__this->Viewport()), ::TYPES[64/*Fuse.ICommonViewport*/]));

    if ((__this->GreaterThan().X > 0.0f) && (__this->GreaterThan().Y > 0.0f))
    {
        if ((sz.X < __this->GreaterThan().X) || (sz.Y < __this->GreaterThan().Y))
            return *__retval = false, void();
    }

    if ((__this->LessThan().X > 0.0f) && (__this->LessThan().Y > 0.0f))
    {
        if ((sz.X > __this->LessThan().X) || (sz.Y > __this->LessThan().Y))
            return *__retval = false, void();
    }

    if ((__this->EqualTo().X > 0.0f) && (__this->EqualTo().Y > 0.0f))
    {
        if ((sz.X != __this->EqualTo().X) || (sz.Y != __this->EqualTo().Y))
            return *__retval = false, void();
    }

    return *__retval = true, void();
}

// public generated float2 get_LessThan()
void WhileWindowSize__get_LessThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LessThan();
}

// public generated void set_LessThan(float2 value)
void WhileWindowSize__set_LessThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* value)
{
    __this->LessThan(*value);
}

// public generated WhileWindowSize New()
void WhileWindowSize__New2_fn(WhileWindowSize** __retval)
{
    *__retval = WhileWindowSize::New2();
}

// public generated WhileWindowSize() [instance]
void WhileWindowSize::ctor_7()
{
    ctor_6();
}

// public generated float2 get_EqualTo() [instance]
::g::Uno::Float2 WhileWindowSize::EqualTo()
{
    return _EqualTo;
}

// public generated void set_EqualTo(float2 value) [instance]
void WhileWindowSize::EqualTo(::g::Uno::Float2 value)
{
    _EqualTo = value;
}

// public generated float2 get_GreaterThan() [instance]
::g::Uno::Float2 WhileWindowSize::GreaterThan()
{
    return _GreaterThan;
}

// public generated void set_GreaterThan(float2 value) [instance]
void WhileWindowSize::GreaterThan(::g::Uno::Float2 value)
{
    _GreaterThan = value;
}

// public generated float2 get_LessThan() [instance]
::g::Uno::Float2 WhileWindowSize::LessThan()
{
    return _LessThan;
}

// public generated void set_LessThan(float2 value) [instance]
void WhileWindowSize::LessThan(::g::Uno::Float2 value)
{
    _LessThan = value;
}

// public generated WhileWindowSize New() [static]
WhileWindowSize* WhileWindowSize::New2()
{
    WhileWindowSize* obj1 = (WhileWindowSize*)uNew(WhileWindowSize_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/WhileWindowAspect.uno
// ------------------------------------------------------------------------

// public abstract class WindowSizeTrigger
// {
static void WindowSizeTrigger_build(uType* type)
{
    ::TYPES[65] = ::g::Fuse::IViewport_typeof();
    ::TYPES[66] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.RootViewport>*/, ::g::Fuse::RootViewport_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Platform::SystemUI_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WindowSizeTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WindowSizeTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WindowSizeTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WindowSizeTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WindowSizeTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WindowSizeTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WindowSizeTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WindowSizeTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WindowSizeTrigger_type, interface8));
    type->SetFields(40,
        ::TYPES[65/*Fuse.IViewport*/], offsetof(WindowSizeTrigger, _Viewport), 0);
}

WindowSizeTrigger_type* WindowSizeTrigger_typeof()
{
    static uSStrong<WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WindowSizeTrigger);
    options.TypeSize = sizeof(WindowSizeTrigger_type);
    type = (WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WindowSizeTrigger", options);
    type->fp_build_ = WindowSizeTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WindowSizeTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WindowSizeTrigger__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// protected generated WindowSizeTrigger()
void WindowSizeTrigger__ctor_6_fn(WindowSizeTrigger* __this)
{
    __this->ctor_6();
}

// private void OnResize(object sender, Uno.EventArgs args)
void WindowSizeTrigger__OnResize_fn(WindowSizeTrigger* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnResize(sender, args);
}

// protected override sealed void OnRooted()
void WindowSizeTrigger__OnRooted_fn(WindowSizeTrigger* __this)
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", "OnRooted()");
    uObject* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Viewport((ind1 = uAs<uObject*>((::g::Fuse::RootViewport*)uPtr(__this->Parent())->FindByType(::TYPES[66/*Fuse.Node.FindByType<Fuse.RootViewport>*/]), ::TYPES[65/*Fuse.IViewport*/]), (ind1 != NULL) ? ind1 : (uObject*)uPtr(__this->Parent())->Viewport()));
    ::g::Fuse::Platform::SystemUI::add_FrameChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)WindowSizeTrigger__OnResize_fn, __this));
    __this->SetActive(__this->IsActive());
}

// protected override sealed void OnUnrooted()
void WindowSizeTrigger__OnUnrooted_fn(WindowSizeTrigger* __this)
{
    uStackFrame __("Fuse.Triggers.WindowSizeTrigger", "OnUnrooted()");
    __this->Viewport(NULL);
    ::g::Fuse::Platform::SystemUI::remove_FrameChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)WindowSizeTrigger__OnResize_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected generated Fuse.IViewport get_Viewport()
void WindowSizeTrigger__get_Viewport_fn(WindowSizeTrigger* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// private generated void set_Viewport(Fuse.IViewport value)
void WindowSizeTrigger__set_Viewport_fn(WindowSizeTrigger* __this, uObject* value)
{
    __this->Viewport(value);
}

// protected generated WindowSizeTrigger() [instance]
void WindowSizeTrigger::ctor_6()
{
    ctor_5();
}

// private void OnResize(object sender, Uno.EventArgs args) [instance]
void WindowSizeTrigger::OnResize(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (Viewport() != NULL)
        SetActive(IsActive());
}

// protected generated Fuse.IViewport get_Viewport() [instance]
uObject* WindowSizeTrigger::Viewport()
{
    return _Viewport;
}

// private generated void set_Viewport(Fuse.IViewport value) [instance]
void WindowSizeTrigger::Viewport(uObject* value)
{
    _Viewport = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno
// -------------------------------------------------------------------------------

// private sealed class LayoutTransition.WorldPositionChangeMode
// {
static void LayoutTransition__WorldPositionChangeMode_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Triggers::LayoutTransition_typeof());
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(LayoutTransition__WorldPositionChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__WorldPositionChangeMode_type, interface1));
}

LayoutTransition__WorldPositionChangeMode_type* LayoutTransition__WorldPositionChangeMode_typeof()
{
    static uSStrong<LayoutTransition__WorldPositionChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(LayoutTransition__WorldPositionChangeMode);
    options.TypeSize = sizeof(LayoutTransition__WorldPositionChangeMode_type);
    type = (LayoutTransition__WorldPositionChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.WorldPositionChangeMode", options);
    type->fp_build_ = LayoutTransition__WorldPositionChangeMode_build;
    type->fp_ctor_ = (void*)LayoutTransition__WorldPositionChangeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))LayoutTransition__WorldPositionChangeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))LayoutTransition__WorldPositionChangeMode__Unsubscribe_fn;
    return type;
}

// public generated WorldPositionChangeMode()
void LayoutTransition__WorldPositionChangeMode__ctor__fn(LayoutTransition__WorldPositionChangeMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t)
void LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn(LayoutTransition__WorldPositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated WorldPositionChangeMode New()
void LayoutTransition__WorldPositionChangeMode__New1_fn(LayoutTransition__WorldPositionChangeMode** __retval)
{
    *__retval = LayoutTransition__WorldPositionChangeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform)
void LayoutTransition__WorldPositionChangeMode__Subscribe_fn(LayoutTransition__WorldPositionChangeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub)
void LayoutTransition__WorldPositionChangeMode__Unsubscribe_fn(LayoutTransition__WorldPositionChangeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated WorldPositionChangeMode() [instance]
void LayoutTransition__WorldPositionChangeMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance]
::g::Uno::Float3 LayoutTransition__WorldPositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.Triggers.LayoutTransition.WorldPositionChangeMode", "GetAbsVector(Fuse.Translation)");
    return ::g::Uno::Float3__op_Multiply2(::g::Fuse::Triggers::LayoutTransition::GetWorldPositionChange(uPtr(t)->RelativeNode()), uPtr(t)->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance]
uObject* LayoutTransition__WorldPositionChangeMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance]
void LayoutTransition__WorldPositionChangeMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated WorldPositionChangeMode New() [static]
LayoutTransition__WorldPositionChangeMode* LayoutTransition__WorldPositionChangeMode::New1()
{
    LayoutTransition__WorldPositionChangeMode* obj1 = (LayoutTransition__WorldPositionChangeMode*)uNew(LayoutTransition__WorldPositionChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Triggers
