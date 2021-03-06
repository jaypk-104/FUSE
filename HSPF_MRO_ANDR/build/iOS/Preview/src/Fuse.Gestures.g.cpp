// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.Controls.RangeControl2D.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollPositionChangedArgs.h>
#include <Fuse.Controls.ScrollPositionChangedHandler.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.InteractiveTransform.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.Gestures.CircularRangeBehavior.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedArgs.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.Clicker.h>
#include <Fuse.Gestures.ClickerEventHandler.h>
#include <Fuse.Gestures.ClickerPointerIndex.h>
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.double2.h>
#include <Fuse.Gestures.DoubleClicked.h>
#include <Fuse.Gestures.DoubleTapped.h>
#include <Fuse.Gestures.DoubleTappedArgs.h>
#include <Fuse.Gestures.DoubleTappedHandler.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.EdgeSwipeAnimation.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.Gestures.Internal.Swiper.h>
#include <Fuse.Gestures.Internal.SwipeRegion.h>
#include <Fuse.Gestures.Internal.SwipeRegionArea.h>
#include <Fuse.Gestures.Internal.TwoFinger.h>
#include <Fuse.Gestures.Internal.TwoFingerEventHandler.h>
#include <Fuse.Gestures.Internal.TwoFingerRotateHandler.h>
#include <Fuse.Gestures.Internal.TwoFingerTranslateHandler.h>
#include <Fuse.Gestures.Internal.TwoFingerZoomHandler.h>
#include <Fuse.Gestures.ISizeConstraint.h>
#include <Fuse.Gestures.KeepFocusInView.h>
#include <Fuse.Gestures.KeepInView.h>
#include <Fuse.Gestures.KeepInViewCommon.h>
#include <Fuse.Gestures.LinearRangeBehavior.h>
#include <Fuse.Gestures.LongPressed.h>
#include <Fuse.Gestures.LongPressedArgs.h>
#include <Fuse.Gestures.LongPressedHandler.h>
#include <Fuse.Gestures.PanGesture.h>
#include <Fuse.Gestures.PointerCapture.h>
#include <Fuse.Gestures.PointerCaptureOn.h>
#include <Fuse.Gestures.Pressed.h>
#include <Fuse.Gestures.Released.h>
#include <Fuse.Gestures.RotateGesture.h>
#include <Fuse.Gestures.ScrollableGoto.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.Scroller.MoveUserFlags.h>
#include <Fuse.Gestures.ScrollTo.h>
#include <Fuse.Gestures.ScrollToHow.h>
#include <Fuse.Gestures.SetSwipeActive.h>
#include <Fuse.Gestures.Swiped.h>
#include <Fuse.Gestures.SwipedHow.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.SwipingAnimation.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Gestures.TappedArgs.h>
#include <Fuse.Gestures.TappedHandler.h>
#include <Fuse.Gestures.ToggleSwipeActive.h>
#include <Fuse.Gestures.TransformGesture.h>
#include <Fuse.Gestures.WhileClickerTrigger.h>
#include <Fuse.Gestures.WhileHovering.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Gestures.WhileSwipeActive.h>
#include <Fuse.Gestures.WhileSwiping.h>
#include <Fuse.Gestures.ZoomGesture.h>
#include <Fuse.Input.CaptureType.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Gesture.h>
#include <Fuse.Input.GesturePriority.h>
#include <Fuse.Input.GesturePriorityConfig.h>
#include <Fuse.Input.GestureRequest.h>
#include <Fuse.Input.Gestures.h>
#include <Fuse.Input.GestureType.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.Simulation.BasicBoundedRegion2D.h>
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.PointerVelocity-1.h>
#include <Fuse.Motion.Simulation.SampleFlags.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.RequestBringIntoViewHandler.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno.Vector.h>
static uString* STRINGS[17];
static uType* TYPES[36];

namespace g{
namespace Fuse{
namespace Gestures{

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.12.0/RangeControls/CircularRangeBehavior.uno
// -----------------------------------------------------------------------------------------------------

// public sealed class CircularRangeBehavior
// {
// static generated CircularRangeBehavior()
static void CircularRangeBehavior__cctor_1_fn(uType* __type)
{
    CircularRangeBehavior::_valueName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    CircularRangeBehavior::_degreesValueName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"DegreesValue"*/]);
}

static void CircularRangeBehavior_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("DegreesValue");
    ::STRINGS[2] = uString::Const("RangeControl or BinaryRangeControl");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.12.0/RangeControls/CircularRangeBehavior.uno");
    ::STRINGS[4] = uString::Const("OnRooted");
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::RangeControl2D_typeof();
    ::TYPES[3] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof(),
        ::g::Fuse::Input::Gestures_typeof(),
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(CircularRangeBehavior_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(CircularRangeBehavior_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(CircularRangeBehavior_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(CircularRangeBehavior_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(CircularRangeBehavior_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(CircularRangeBehavior_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(CircularRangeBehavior_type, interface6),
        ::g::Fuse::Input::IGesture_typeof(), offsetof(CircularRangeBehavior_type, interface7));
    type->SetFields(18,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(CircularRangeBehavior, _control), 0,
        ::TYPES[1/*Fuse.Controls.RangeControl*/], offsetof(CircularRangeBehavior, _rangeControl), 0,
        ::TYPES[2/*Fuse.Controls.RangeControl2D*/], offsetof(CircularRangeBehavior, _binaryRangeControl), 0,
        ::g::Uno::Float_typeof(), offsetof(CircularRangeBehavior, _startAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(CircularRangeBehavior, _endAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(CircularRangeBehavior, _minimumRadius), 0,
        ::g::Uno::Float_typeof(), offsetof(CircularRangeBehavior, _maximumRadius), 0,
        ::g::Uno::Bool_typeof(), offsetof(CircularRangeBehavior, _wrap), 0,
        ::g::Fuse::Input::Gesture_typeof(), offsetof(CircularRangeBehavior, _gesture), 0,
        ::g::Fuse::Input::GesturePriority_typeof(), offsetof(CircularRangeBehavior, _gesturePriority), 0,
        ::g::Fuse::Gestures::double2_typeof(), offsetof(CircularRangeBehavior, _initialValue), 0,
        ::g::Uno::Double_typeof(), offsetof(CircularRangeBehavior, _initialAngle), 0,
        ::g::Uno::Double_typeof(), offsetof(CircularRangeBehavior, _initialRadius), 0,
        ::g::Uno::Float2_typeof(), offsetof(CircularRangeBehavior, _initialCoord), 0,
        ::g::Uno::Float2_typeof(), offsetof(CircularRangeBehavior, _currentCoord), 0,
        ::g::Uno::Int_typeof(), offsetof(CircularRangeBehavior, _down), 0,
        ::TYPES[6/*Uno.UX.ValueChangedHandler<float>*/], offsetof(CircularRangeBehavior, DegreesValueChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CircularRangeBehavior::_valueName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CircularRangeBehavior::_degreesValueName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(18,
        new uFunction("get_DegreesValue", NULL, (void*)CircularRangeBehavior__get_DegreesValue_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesValue", NULL, (void*)CircularRangeBehavior__set_DegreesValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("add_DegreesValueChanged", NULL, (void*)CircularRangeBehavior__add_DegreesValueChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[6/*Uno.UX.ValueChangedHandler<float>*/]),
        new uFunction("remove_DegreesValueChanged", NULL, (void*)CircularRangeBehavior__remove_DegreesValueChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[6/*Uno.UX.ValueChangedHandler<float>*/]),
        new uFunction("get_EndAngleDegrees", NULL, (void*)CircularRangeBehavior__get_EndAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EndAngleDegrees", NULL, (void*)CircularRangeBehavior__set_EndAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_GesturePriority", NULL, (void*)CircularRangeBehavior__get_GesturePriority_fn, 0, false, ::g::Fuse::Input::GesturePriority_typeof(), 0),
        new uFunction("set_GesturePriority", NULL, (void*)CircularRangeBehavior__set_GesturePriority_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::GesturePriority_typeof()),
        new uFunction("get_IsWrapping", NULL, (void*)CircularRangeBehavior__get_IsWrapping_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsWrapping", NULL, (void*)CircularRangeBehavior__set_IsWrapping_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_MaximumRadius", NULL, (void*)CircularRangeBehavior__get_MaximumRadius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MaximumRadius", NULL, (void*)CircularRangeBehavior__set_MaximumRadius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_MinimumRadius", NULL, (void*)CircularRangeBehavior__get_MinimumRadius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MinimumRadius", NULL, (void*)CircularRangeBehavior__set_MinimumRadius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)CircularRangeBehavior__New2_fn, 0, true, type, 0),
        new uFunction("SetDegreesValue", NULL, (void*)CircularRangeBehavior__SetDegreesValue_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_StartAngleDegrees", NULL, (void*)CircularRangeBehavior__get_StartAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StartAngleDegrees", NULL, (void*)CircularRangeBehavior__set_StartAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

CircularRangeBehavior_type* CircularRangeBehavior_typeof()
{
    static uSStrong<CircularRangeBehavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 37;
    options.InterfaceCount = 8;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(CircularRangeBehavior);
    options.TypeSize = sizeof(CircularRangeBehavior_type);
    type = (CircularRangeBehavior_type*)uClassType::New("Fuse.Gestures.CircularRangeBehavior", options);
    type->fp_build_ = CircularRangeBehavior_build;
    type->fp_ctor_ = (void*)CircularRangeBehavior__New2_fn;
    type->fp_cctor_ = CircularRangeBehavior__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))CircularRangeBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))CircularRangeBehavior__OnUnrooted_fn;
    type->interface7.fp_OnLostCapture = (void(*)(uObject*, bool*))CircularRangeBehavior__FuseInputIGestureOnLostCapture_fn;
    type->interface7.fp_OnCaptureChanged = (void(*)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int32_t*, int32_t*))CircularRangeBehavior__FuseInputIGestureOnCaptureChanged_fn;
    type->interface7.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int32_t*))CircularRangeBehavior__FuseInputIGestureOnPointerPressed_fn;
    type->interface7.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int32_t*))CircularRangeBehavior__FuseInputIGestureOnPointerMoved_fn;
    type->interface7.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int32_t*))CircularRangeBehavior__FuseInputIGestureOnPointerReleased_fn;
    type->interface7.fp_get_Priority = (void(*)(uObject*, ::g::Fuse::Input::GesturePriorityConfig*))CircularRangeBehavior__FuseInputIGestureget_Priority_fn;
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

// public generated CircularRangeBehavior()
void CircularRangeBehavior__ctor_3_fn(CircularRangeBehavior* __this)
{
    __this->ctor_3();
}

// private double Angle(Fuse.Input.PointerEventArgs args)
void CircularRangeBehavior__Angle_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, double* __retval)
{
    *__retval = __this->Angle(args);
}

// private float2 get_AngleRange()
void CircularRangeBehavior__get_AngleRange_fn(CircularRangeBehavior* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->AngleRange();
}

// private Fuse.Gestures.double2 get_ControlRelativeValue()
void CircularRangeBehavior__get_ControlRelativeValue_fn(CircularRangeBehavior* __this, ::g::Fuse::Gestures::double2* __retval)
{
    *__retval = __this->ControlRelativeValue();
}

// private void set_ControlRelativeValue(Fuse.Gestures.double2 value)
void CircularRangeBehavior__set_ControlRelativeValue_fn(CircularRangeBehavior* __this, ::g::Fuse::Gestures::double2* value)
{
    __this->ControlRelativeValue(*value);
}

// private double get_CurrentRadius()
void CircularRangeBehavior__get_CurrentRadius_fn(CircularRangeBehavior* __this, double* __retval)
{
    *__retval = __this->CurrentRadius();
}

// public float get_DegreesValue()
void CircularRangeBehavior__get_DegreesValue_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->DegreesValue();
}

// public void set_DegreesValue(float value)
void CircularRangeBehavior__set_DegreesValue_fn(CircularRangeBehavior* __this, float* value)
{
    __this->DegreesValue(*value);
}

// public generated void add_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value)
void CircularRangeBehavior__add_DegreesValueChanged_fn(CircularRangeBehavior* __this, uDelegate* value)
{
    __this->add_DegreesValueChanged(value);
}

// public generated void remove_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value)
void CircularRangeBehavior__remove_DegreesValueChanged_fn(CircularRangeBehavior* __this, uDelegate* value)
{
    __this->remove_DegreesValueChanged(value);
}

// public float get_EndAngleDegrees()
void CircularRangeBehavior__get_EndAngleDegrees_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->EndAngleDegrees();
}

// public void set_EndAngleDegrees(float value)
void CircularRangeBehavior__set_EndAngleDegrees_fn(CircularRangeBehavior* __this, float* value)
{
    __this->EndAngleDegrees(*value);
}

// private void Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType how, Fuse.Input.CaptureType prev)
void CircularRangeBehavior__FuseInputIGestureOnCaptureChanged_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* how, int32_t* prev)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs,Fuse.Input.CaptureType,Fuse.Input.CaptureType)");

    if (uPtr(__this->_gesture)->IsHardCapture())
        ::g::Fuse::Input::Focus::GiveTo(__this->_control);
}

// private void Fuse.Input.IGesture.OnLostCapture(bool forced)
void CircularRangeBehavior__FuseInputIGestureOnLostCapture_fn(CircularRangeBehavior* __this, bool* forced)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "Fuse.Input.IGesture.OnLostCapture(bool)");
    bool forced_ = *forced;

    if (forced_)
    {
        if (__this->_rangeControl != NULL)
            uPtr(__this->_rangeControl)->Value(__this->_initialValue.X);
        else
            uPtr(__this->_binaryRangeControl)->Value(__this->_initialValue.AsFloat2());
    }
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs args)
void CircularRangeBehavior__FuseInputIGestureOnPointerMoved_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerMovedArgs* args, int32_t* __retval)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs)");
    __this->_currentCoord = uPtr(args)->WindowPoint();
    double radius = __this->Radius(args);
    double angle = __this->Angle(args);

    if (uPtr(__this->_gesture)->IsHardCapture())
        __this->UpdateValue(angle, radius);

    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs args)
void CircularRangeBehavior__FuseInputIGestureOnPointerPressed_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerPressedArgs* args, int32_t* __retval)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs)");

    if (__this->_rangeControl != NULL)
        __this->_initialValue = ::g::Fuse::Gestures::double2__New1(uPtr(__this->_rangeControl)->Value(), 0.0);
    else
        __this->_initialValue = ::g::Fuse::Gestures::double2__New2(uPtr(__this->_binaryRangeControl)->Value());

    __this->_initialCoord = (__this->_currentCoord = uPtr(args)->WindowPoint());
    __this->_initialAngle = __this->Angle(args);
    __this->_initialRadius = __this->Radius(args);
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs args)
void CircularRangeBehavior__FuseInputIGestureOnPointerReleased_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int32_t* __retval)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs)");
    __this->UpdateValue(__this->Angle(args), __this->Radius(args));
    return *__retval = 2, void();
}

// private Fuse.Input.GesturePriorityConfig Fuse.Input.IGesture.get_Priority()
void CircularRangeBehavior__FuseInputIGestureget_Priority_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval)
{
    return *__retval = ::g::Fuse::Input::GesturePriorityConfig__New1(__this->_gesturePriority, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(__this->_currentCoord, __this->_initialCoord)), 0), void();
}

// public Fuse.Input.GesturePriority get_GesturePriority()
void CircularRangeBehavior__get_GesturePriority_fn(CircularRangeBehavior* __this, int32_t* __retval)
{
    *__retval = __this->GesturePriority();
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value)
void CircularRangeBehavior__set_GesturePriority_fn(CircularRangeBehavior* __this, int32_t* value)
{
    __this->GesturePriority(*value);
}

// public bool get_IsWrapping()
void CircularRangeBehavior__get_IsWrapping_fn(CircularRangeBehavior* __this, bool* __retval)
{
    *__retval = __this->IsWrapping();
}

// public void set_IsWrapping(bool value)
void CircularRangeBehavior__set_IsWrapping_fn(CircularRangeBehavior* __this, bool* value)
{
    __this->IsWrapping(*value);
}

// private float2 LocalVector(Fuse.Input.PointerEventArgs args)
void CircularRangeBehavior__LocalVector_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LocalVector(args);
}

// public float get_MaximumRadius()
void CircularRangeBehavior__get_MaximumRadius_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->MaximumRadius();
}

// public void set_MaximumRadius(float value)
void CircularRangeBehavior__set_MaximumRadius_fn(CircularRangeBehavior* __this, float* value)
{
    __this->MaximumRadius(*value);
}

// public float get_MinimumRadius()
void CircularRangeBehavior__get_MinimumRadius_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->MinimumRadius();
}

// public void set_MinimumRadius(float value)
void CircularRangeBehavior__set_MinimumRadius_fn(CircularRangeBehavior* __this, float* value)
{
    __this->MinimumRadius(*value);
}

// public generated CircularRangeBehavior New()
void CircularRangeBehavior__New2_fn(CircularRangeBehavior** __retval)
{
    *__retval = CircularRangeBehavior::New2();
}

// protected override sealed void OnRooted()
void CircularRangeBehavior__OnRooted_fn(CircularRangeBehavior* __this)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_control = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[0/*Fuse.Elements.Element*/]);
    __this->_rangeControl = uAs< ::g::Fuse::Controls::RangeControl*>(__this->Parent(), ::TYPES[1/*Fuse.Controls.RangeControl*/]);
    __this->_binaryRangeControl = uAs< ::g::Fuse::Controls::RangeControl2D*>(__this->Parent(), ::TYPES[2/*Fuse.Controls.RangeControl2D*/]);

    if ((__this->_rangeControl == NULL) && (__this->_binaryRangeControl == NULL))
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[2/*"RangeContro...*/], __this->Parent(), __this, ::STRINGS[3/*"/usr/local/...*/], 137, ::STRINGS[4/*"OnRooted"*/]);
    else
    {
        __this->_gesture = ::g::Fuse::Input::Gestures::Add((uObject*)__this, __this->_control, 1);

        if (__this->_rangeControl != NULL)
            uPtr(__this->_rangeControl)->add_ValueChanged(uDelegate::New(::TYPES[3/*Uno.UX.ValueChangedHandler<double>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));
        else
            uPtr(__this->_binaryRangeControl)->add_ValueChanged(uDelegate::New(::TYPES[4/*Uno.UX.ValueChangedHandler<float2>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));
    }
}

// protected override sealed void OnUnrooted()
void CircularRangeBehavior__OnUnrooted_fn(CircularRangeBehavior* __this)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnUnrooted()");

    if (__this->_gesture != NULL)
    {
        uPtr(__this->_gesture)->Dispose();
        __this->_gesture = NULL;
    }

    if (__this->_rangeControl != NULL)
        uPtr(__this->_rangeControl)->remove_ValueChanged(uDelegate::New(::TYPES[3/*Uno.UX.ValueChangedHandler<double>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));

    if (__this->_binaryRangeControl != NULL)
        uPtr(__this->_binaryRangeControl)->remove_ValueChanged(uDelegate::New(::TYPES[4/*Uno.UX.ValueChangedHandler<float2>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));

    __this->_control = NULL;
    __this->_rangeControl = NULL;
    __this->_binaryRangeControl = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnValueChanged(object s, object args)
void CircularRangeBehavior__OnValueChanged_fn(CircularRangeBehavior* __this, uObject* s, uObject* args)
{
    __this->OnValueChanged(s, args);
}

// private double Radius(Fuse.Input.PointerEventArgs args)
void CircularRangeBehavior__Radius_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, double* __retval)
{
    *__retval = __this->Radius(args);
}

// public void SetDegreesValue(float value, Uno.UX.IPropertyListener origin)
void CircularRangeBehavior__SetDegreesValue_fn(CircularRangeBehavior* __this, float* value, uObject* origin)
{
    __this->SetDegreesValue(*value, origin);
}

// public float get_StartAngleDegrees()
void CircularRangeBehavior__get_StartAngleDegrees_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->StartAngleDegrees();
}

// public void set_StartAngleDegrees(float value)
void CircularRangeBehavior__set_StartAngleDegrees_fn(CircularRangeBehavior* __this, float* value)
{
    __this->StartAngleDegrees(*value);
}

// private void UpdateValue(double angle, double radius)
void CircularRangeBehavior__UpdateValue_fn(CircularRangeBehavior* __this, double* angle, double* radius)
{
    __this->UpdateValue(*angle, *radius);
}

::g::Uno::UX::Selector CircularRangeBehavior::_valueName_;
::g::Uno::UX::Selector CircularRangeBehavior::_degreesValueName_;

// public generated CircularRangeBehavior() [instance]
void CircularRangeBehavior::ctor_3()
{
    _startAngle = 0.0f;
    _endAngle = 6.28318548f;
    _minimumRadius = 0.0f;
    _maximumRadius = 1.0f;
    _gesturePriority = 2;
    _down = -1;
    ctor_2();
}

// private double Angle(Fuse.Input.PointerEventArgs args) [instance]
double CircularRangeBehavior::Angle(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "Angle(Fuse.Input.PointerEventArgs)");
    ::g::Uno::Float2 o = LocalVector(args);
    float a = ::g::Uno::Math::Atan22(o.Y, o.X);

    if (a < 0.0f)
        a = a + 6.28318548f;

    return (double)a;
}

// private float2 get_AngleRange() [instance]
::g::Uno::Float2 CircularRangeBehavior::AngleRange()
{
    float s = _startAngle;
    float e = _endAngle;
    bool low = s < e;
    s = ::g::Uno::Math::Mod1(s, 6.28318548f);
    e = ::g::Uno::Math::Mod1(e, 6.28318548f);

    if (low && (s > (e - 1e-05f)))
        s = s - 6.28318548f;
    else if (!low && (s < (e + 1e-05f)))
        s = s + 6.28318548f;

    return ::g::Uno::Float2__New2(s, e);
}

// private Fuse.Gestures.double2 get_ControlRelativeValue() [instance]
::g::Fuse::Gestures::double2 CircularRangeBehavior::ControlRelativeValue()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_ControlRelativeValue()");

    if (_rangeControl != NULL)
        return ::g::Fuse::Gestures::double2__New1(uPtr(_rangeControl)->RelativeValue(), 0.0);
    else
        return ::g::Fuse::Gestures::double2__New2(uPtr(_binaryRangeControl)->RelativeValue());
}

// private void set_ControlRelativeValue(Fuse.Gestures.double2 value) [instance]
void CircularRangeBehavior::ControlRelativeValue(::g::Fuse::Gestures::double2 value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_ControlRelativeValue(Fuse.Gestures.double2)");

    if (_rangeControl != NULL)
        uPtr(_rangeControl)->RelativeValue(value.X);
    else
        uPtr(_binaryRangeControl)->RelativeValue(value.AsFloat2());
}

// private double get_CurrentRadius() [instance]
double CircularRangeBehavior::CurrentRadius()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_CurrentRadius()");
    return (((ControlRelativeValue().Y * (double)(MaximumRadius() - MinimumRadius())) + (double)MinimumRadius()) * (double)uPtr(_control)->ActualSize().X) / 2.0;
}

// public float get_DegreesValue() [instance]
float CircularRangeBehavior::DegreesValue()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_DegreesValue()");
    ::g::Uno::Float2 range = AngleRange();
    return (float)::g::Uno::Math::RadiansToDegrees((ControlRelativeValue().X * (double)(range.Y - range.X)) + (double)range.X);
}

// public void set_DegreesValue(float value) [instance]
void CircularRangeBehavior::DegreesValue(float value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_DegreesValue(float)");
    UpdateValue((double)(((value / 360.0f) * 3.14159274f) * 2.0f), CurrentRadius());
}

// public generated void add_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) [instance]
void CircularRangeBehavior::add_DegreesValueChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "add_DegreesValueChanged(Uno.UX.ValueChangedHandler<float>)");
    DegreesValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DegreesValueChanged1, value), ::TYPES[6/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public generated void remove_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) [instance]
void CircularRangeBehavior::remove_DegreesValueChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "remove_DegreesValueChanged(Uno.UX.ValueChangedHandler<float>)");
    DegreesValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DegreesValueChanged1, value), ::TYPES[6/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public float get_EndAngleDegrees() [instance]
float CircularRangeBehavior::EndAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_endAngle);
}

// public void set_EndAngleDegrees(float value) [instance]
void CircularRangeBehavior::EndAngleDegrees(float value)
{
    _endAngle = ::g::Uno::Math::DegreesToRadians1(value);
}

// public Fuse.Input.GesturePriority get_GesturePriority() [instance]
int32_t CircularRangeBehavior::GesturePriority()
{
    return _gesturePriority;
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value) [instance]
void CircularRangeBehavior::GesturePriority(int32_t value)
{
    _gesturePriority = value;
}

// public bool get_IsWrapping() [instance]
bool CircularRangeBehavior::IsWrapping()
{
    return _wrap;
}

// public void set_IsWrapping(bool value) [instance]
void CircularRangeBehavior::IsWrapping(bool value)
{
    _wrap = value;
}

// private float2 LocalVector(Fuse.Input.PointerEventArgs args) [instance]
::g::Uno::Float2 CircularRangeBehavior::LocalVector(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "LocalVector(Fuse.Input.PointerEventArgs)");
    ::g::Uno::Float2 l = uPtr(_control)->WindowToLocal(uPtr(args)->WindowPoint());
    ::g::Uno::Float2 o = ::g::Uno::Float2__op_Subtraction2(l, ::g::Uno::Float2__op_Division1(uPtr(_control)->ActualSize(), 2.0f));
    return o;
}

// public float get_MaximumRadius() [instance]
float CircularRangeBehavior::MaximumRadius()
{
    return _maximumRadius;
}

// public void set_MaximumRadius(float value) [instance]
void CircularRangeBehavior::MaximumRadius(float value)
{
    _maximumRadius = value;
}

// public float get_MinimumRadius() [instance]
float CircularRangeBehavior::MinimumRadius()
{
    return _minimumRadius;
}

// public void set_MinimumRadius(float value) [instance]
void CircularRangeBehavior::MinimumRadius(float value)
{
    _minimumRadius = value;
}

// private void OnValueChanged(object s, object args) [instance]
void CircularRangeBehavior::OnValueChanged(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnValueChanged(object,object)");
    ::g::Uno::UX::ValueChangedArgs* ret2;
    OnPropertyChanged(CircularRangeBehavior::_valueName_);
    OnPropertyChanged(CircularRangeBehavior::_degreesValueName_);

    if (::g::Uno::Delegate::op_Inequality(DegreesValueChanged1, NULL))
        uPtr(DegreesValueChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[5/*Uno.UX.ValueChangedArgs<float>*/], uCRef(DegreesValue()), &ret2), ret2));
}

// private double Radius(Fuse.Input.PointerEventArgs args) [instance]
double CircularRangeBehavior::Radius(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "Radius(Fuse.Input.PointerEventArgs)");
    return (double)::g::Uno::Vector::Length(LocalVector(args));
}

// public void SetDegreesValue(float value, Uno.UX.IPropertyListener origin) [instance]
void CircularRangeBehavior::SetDegreesValue(float value, uObject* origin)
{
    DegreesValue(value);
}

// public float get_StartAngleDegrees() [instance]
float CircularRangeBehavior::StartAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_startAngle);
}

// public void set_StartAngleDegrees(float value) [instance]
void CircularRangeBehavior::StartAngleDegrees(float value)
{
    _startAngle = ::g::Uno::Math::DegreesToRadians1(value);
}

// private void UpdateValue(double angle, double radius) [instance]
void CircularRangeBehavior::UpdateValue(double angle, double radius)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "UpdateValue(double,double)");
    ::g::Uno::Float2 step = (_rangeControl != NULL) ? ::g::Uno::Float2__New2((float)uPtr(_rangeControl)->RelativeUserStep(), 0.0f) : uPtr(_binaryRangeControl)->RelativeUserStep();
    ::g::Uno::Float2 range = AngleRange();
    double rel = ::g::Uno::Math::Mod(angle - (double)range.X, 6.2831854820251465) / (double)(range.Y - range.X);

    if (step.X > 1e-05f)
        rel = ::g::Uno::Math::Round(rel / (double)step.X) * (double)step.X;

    if (IsWrapping() && (rel > 0.99998998641967773))
        rel = 0.0;

    double relRad = radius / (double)(uPtr(_control)->ActualSize().X / 2.0f);
    double xRad = (relRad - (double)MinimumRadius()) / (double)(MaximumRadius() - MinimumRadius());

    if (step.Y > 1e-05f)
        xRad = ::g::Uno::Math::Round(xRad / (double)step.Y) * (double)step.Y;

    ControlRelativeValue(::g::Fuse::Gestures::double2__New1(::g::Uno::Math::Clamp(rel, 0.0, 1.0), ::g::Uno::Math::Clamp(xRad, 0.0, 1.0)));
}

// public generated CircularRangeBehavior New() [static]
CircularRangeBehavior* CircularRangeBehavior::New2()
{
    CircularRangeBehavior* obj1 = (CircularRangeBehavior*)uNew(CircularRangeBehavior_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Clicked.uno
// --------------------------------------------------------------

// public sealed class Clicked
// {
static void Clicked_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Gestures.Clicked>*/, type, NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[10] = ::g::Fuse::Gestures::ClickedHandler_typeof();
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
    type->SetFields(42,
        ::TYPES[10/*Fuse.Gestures.ClickedHandler*/], offsetof(Clicked, Handler1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("AddHandler", NULL, (void*)Clicked__AddHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::TYPES[10/*Fuse.Gestures.ClickedHandler*/]),
        new uFunction("add_Handler", NULL, (void*)Clicked__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[10/*Fuse.Gestures.ClickedHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)Clicked__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[10/*Fuse.Gestures.ClickedHandler*/]),
        new uFunction(".ctor", NULL, (void*)Clicked__New2_fn, 0, true, type, 0),
        new uFunction("RemoveHandler", NULL, (void*)Clicked__RemoveHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::TYPES[10/*Fuse.Gestures.ClickedHandler*/]));
}

::g::Fuse::Triggers::Trigger_type* Clicked_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Clicked);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Clicked", options);
    type->fp_build_ = Clicked_build;
    type->fp_ctor_ = (void*)Clicked__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Clicked__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Clicked__OnUnrooted_fn;
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

// public generated Clicked()
void Clicked__ctor_6_fn(Clicked* __this)
{
    __this->ctor_6();
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler)
void Clicked__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Clicked::AddHandler(visual, handler);
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value)
void Clicked__add_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value)
void Clicked__remove_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Clicked New()
void Clicked__New2_fn(Clicked** __retval)
{
    *__retval = Clicked::New2();
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount)
void Clicked__OnClicked_fn(Clicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* clickCount)
{
    __this->OnClicked(args, *clickCount);
}

// protected override sealed void OnRooted()
void Clicked__OnRooted_fn(Clicked* __this)
{
    uStackFrame __("Fuse.Gestures.Clicked", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_ClickedEvent(uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
}

// protected override sealed void OnUnrooted()
void Clicked__OnUnrooted_fn(Clicked* __this)
{
    uStackFrame __("Fuse.Gestures.Clicked", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_ClickedEvent(uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler)
void Clicked__RemoveHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Clicked::RemoveHandler(visual, handler);
}

// public generated Clicked() [instance]
void Clicked::ctor_6()
{
    ctor_5();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) [instance]
void Clicked::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicked", "add_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[10/*Fuse.Gestures.ClickedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) [instance]
void Clicked::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicked", "remove_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[10/*Fuse.Gestures.ClickedHandler*/]);
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) [instance]
void Clicked::OnClicked(::g::Fuse::Input::PointerEventArgs* args, int32_t clickCount)
{
    uStackFrame __("Fuse.Gestures.Clicked", "OnClicked(Fuse.Input.PointerEventArgs,int)");

    if (!Accept(args))
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::ClickedArgs*)::g::Fuse::Gestures::ClickedArgs::New3(args, Parent()));
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) [static]
void Clicked::AddHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Clicked", "AddHandler(Fuse.Visual,Fuse.Gestures.ClickedHandler)");
    Clicked* c = (Clicked*)uPtr(visual)->FirstChild(::TYPES[7/*Fuse.Visual.FirstChild<Fuse.Gestures.Clicked>*/]);

    if (c == NULL)
    {
        c = Clicked::New2();
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), c);
    }

    uPtr(c)->add_Handler(handler);
}

// public generated Clicked New() [static]
Clicked* Clicked::New2()
{
    Clicked* obj1 = (Clicked*)uNew(Clicked_typeof());
    obj1->ctor_6();
    return obj1;
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) [static]
void Clicked::RemoveHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Clicked", "RemoveHandler(Fuse.Visual,Fuse.Gestures.ClickedHandler)");
    Clicked* c = (Clicked*)uPtr(visual)->FirstChild(::TYPES[7/*Fuse.Visual.FirstChild<Fuse.Gestures.Clicked>*/]);

    if (c != NULL)
        uPtr(c)->remove_Handler(handler);
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Clicked.uno
// --------------------------------------------------------------

// public sealed class ClickedArgs
// {
static void ClickedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ClickedArgs__New3_fn, 0, true, type, 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* ClickedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::CustomPointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ClickedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.ClickedArgs", options);
    type->fp_build_ = ClickedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual)
void ClickedArgs__ctor_4_fn(ClickedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual)
void ClickedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, ClickedArgs** __retval)
{
    *__retval = ClickedArgs::New3(args, visual);
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance]
void ClickedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.ClickedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Visual)");
    ctor_3(args, visual);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static]
ClickedArgs* ClickedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    ClickedArgs* obj1 = (ClickedArgs*)uNew(ClickedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Clicked.uno
// --------------------------------------------------------------

// public delegate void ClickedHandler(object sender, Fuse.Gestures.ClickedArgs args)
uDelegateType* ClickedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::ClickedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Internal/Clicker.uno
// -----------------------------------------------------------------------

// internal sealed class Clicker
// {
// static generated Clicker()
static void Clicker__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    Clicker::_clickerProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void Clicker_build(uType* type)
{
    ::TYPES[11] = ::g::Uno::Action_typeof();
    ::TYPES[9] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Gestures_typeof(),
        ::g::Uno::Math_typeof(),
        ::g::Fuse::Input::Pointer_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::Input::IGesture_typeof(), offsetof(Clicker_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(Clicker, _maxTapDistanceMoved), 0,
        ::g::Uno::Float_typeof(), offsetof(Clicker, _maxTapTimeHeld), 0,
        ::g::Uno::Float_typeof(), offsetof(Clicker, _maxDoubleInterval), 0,
        ::g::Uno::Float_typeof(), offsetof(Clicker, _longPressTimeout), 0,
        ::g::Fuse::Input::GesturePriority_typeof(), offsetof(Clicker, _priority), 0,
        ::g::Uno::Int_typeof(), offsetof(Clicker, _attachCount), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Clicker, _visual), 0,
        ::g::Fuse::Input::Gesture_typeof(), offsetof(Clicker, _gesture), 0,
        ::g::Uno::Float2_typeof(), offsetof(Clicker, _startCoord), 0,
        ::g::Uno::Float2_typeof(), offsetof(Clicker, _pressedPosition), 0,
        ::g::Uno::Double_typeof(), offsetof(Clicker, _startTime), 0,
        ::g::Uno::Int_typeof(), offsetof(Clicker, _tapCount), 0,
        ::g::Uno::Int_typeof(), offsetof(Clicker, _clickCount), 0,
        ::g::Uno::Double_typeof(), offsetof(Clicker, _lastUpTime), 0,
        ::g::Uno::Bool_typeof(), offsetof(Clicker, _maybeTap), 0,
        ::g::Uno::Bool_typeof(), offsetof(Clicker, _hasUpdate), 0,
        ::g::Uno::Bool_typeof(), offsetof(Clicker, _hovering), 0,
        ::g::Fuse::Input::PointerEventArgs_typeof(), offsetof(Clicker, _lastArgs), 0,
        ::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], offsetof(Clicker, ClickedEvent1), 0,
        ::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], offsetof(Clicker, LongPressedEvent1), 0,
        ::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], offsetof(Clicker, PressingEvent1), 0,
        ::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], offsetof(Clicker, TappedEvent1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Clicker::_clickerProperty_, uFieldFlagsStatic);
}

Clicker_type* Clicker_typeof()
{
    static uSStrong<Clicker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 23;
    options.InterfaceCount = 1;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(Clicker);
    options.TypeSize = sizeof(Clicker_type);
    type = (Clicker_type*)uClassType::New("Fuse.Gestures.Clicker", options);
    type->fp_build_ = Clicker_build;
    type->fp_cctor_ = Clicker__cctor__fn;
    type->interface0.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int32_t*))Clicker__FuseInputIGestureOnPointerPressed_fn;
    type->interface0.fp_OnCaptureChanged = (void(*)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int32_t*, int32_t*))Clicker__FuseInputIGestureOnCaptureChanged_fn;
    type->interface0.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int32_t*))Clicker__FuseInputIGestureOnPointerMoved_fn;
    type->interface0.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int32_t*))Clicker__FuseInputIGestureOnPointerReleased_fn;
    type->interface0.fp_OnLostCapture = (void(*)(uObject*, bool*))Clicker__FuseInputIGestureOnLostCapture_fn;
    type->interface0.fp_get_Priority = (void(*)(uObject*, ::g::Fuse::Input::GesturePriorityConfig*))Clicker__FuseInputIGestureget_Priority_fn;
    return type;
}

// private Clicker(Fuse.Visual visual)
void Clicker__ctor__fn(Clicker* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_(visual);
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Visual elm, Fuse.Input.GesturePriority priority)
void Clicker__AttachClicker_fn(::g::Fuse::Visual* elm, int32_t* priority, Clicker** __retval)
{
    *__retval = Clicker::AttachClicker(elm, *priority);
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value)
void Clicker__add_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_ClickedEvent(value);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value)
void Clicker__remove_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_ClickedEvent(value);
}

// public void Detach()
void Clicker__Detach_fn(Clicker* __this)
{
    __this->Detach();
}

// private void DoneCapture()
void Clicker__DoneCapture_fn(Clicker* __this)
{
    __this->DoneCapture();
}

// private void Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType how, Fuse.Input.CaptureType prev)
void Clicker__FuseInputIGestureOnCaptureChanged_fn(Clicker* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* how, int32_t* prev)
{
    uStackFrame __("Fuse.Gestures.Clicker", "Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs,Fuse.Input.CaptureType,Fuse.Input.CaptureType)");

    if (::g::Uno::Delegate::op_Inequality(__this->LongPressedEvent1, NULL) && !__this->_hasUpdate)
    {
        __this->_hasUpdate = true;
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Clicker__Update_fn, __this), 0);
    }

    if (::g::Uno::Delegate::op_Inequality(__this->PressingEvent1, NULL))
        uPtr(__this->PressingEvent1)->Invoke(2, args, uCRef<int32_t>(1));

    __this->_hovering = true;
}

// private void Fuse.Input.IGesture.OnLostCapture(bool forced)
void Clicker__FuseInputIGestureOnLostCapture_fn(Clicker* __this, bool* forced)
{
    uStackFrame __("Fuse.Gestures.Clicker", "Fuse.Input.IGesture.OnLostCapture(bool)");
    bool forced_ = *forced;
    __this->DoneCapture();

    if (forced_)
    {
        __this->_tapCount = 0;
        __this->_clickCount = 0;
    }
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs args)
void Clicker__FuseInputIGestureOnPointerMoved_fn(Clicker* __this, ::g::Fuse::Input::PointerMovedArgs* args, int32_t* __retval)
{
    uStackFrame __("Fuse.Gestures.Clicker", "Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs)");
    float distance = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(uPtr(args)->WindowPoint(), __this->_startCoord));
    double deltaTime = args->Timestamp() - __this->_startTime;

    if ((distance > __this->_maxTapDistanceMoved) || (deltaTime > (double)__this->_maxTapTimeHeld))
        __this->_maybeTap = false;

    if (!__this->NeedCapture())
        return *__retval = 2, void();

    bool hoverNow = uPtr(__this->_visual)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow != __this->_hovering)
    {
        if (::g::Uno::Delegate::op_Inequality(__this->PressingEvent1, NULL))
            uPtr(__this->PressingEvent1)->Invoke(2, args, uCRef<int32_t>(hoverNow ? 1 : 0));

        __this->_hovering = hoverNow;
    }

    __this->_lastArgs = args;
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs args)
void Clicker__FuseInputIGestureOnPointerPressed_fn(Clicker* __this, ::g::Fuse::Input::PointerPressedArgs* args, int32_t* __retval)
{
    uStackFrame __("Fuse.Gestures.Clicker", "Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs)");
    __this->_lastArgs = args;
    double delta = uPtr(args)->Timestamp() - __this->_lastUpTime;

    if (delta > (double)__this->_maxDoubleInterval)
    {
        __this->_tapCount = 0;
        __this->_clickCount = 0;
    }

    __this->_pressedPosition = uPtr(__this->_visual)->WindowToLocal(args->WindowPoint());
    __this->_startCoord = args->WindowPoint();
    __this->_startTime = args->Timestamp();
    __this->_maybeTap = true;
    __this->_lastArgs = args;
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs args)
void Clicker__FuseInputIGestureOnPointerReleased_fn(Clicker* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int32_t* __retval)
{
    uStackFrame __("Fuse.Gestures.Clicker", "Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs)");
    double deltaTime = uPtr(args)->Timestamp() - __this->_startTime;

    if (__this->_maybeTap && (deltaTime <= (double)__this->_maxTapTimeHeld))
    {
        __this->_tapCount++;

        if (::g::Uno::Delegate::op_Inequality(__this->TappedEvent1, NULL))
            uPtr(__this->TappedEvent1)->Invoke(2, args, uCRef<int32_t>(__this->_tapCount));
    }
    else
        __this->_tapCount = 0;

    bool hoverNow = uPtr(__this->_visual)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow)
    {
        __this->_clickCount++;

        if (::g::Uno::Delegate::op_Inequality(__this->ClickedEvent1, NULL))
            uPtr(__this->ClickedEvent1)->Invoke(2, args, uCRef<int32_t>(__this->_clickCount));
    }
    else
        __this->_clickCount = 0;

    if (__this->_hovering && ::g::Uno::Delegate::op_Inequality(__this->PressingEvent1, NULL))
        uPtr(__this->PressingEvent1)->Invoke(2, args, uCRef<int32_t>(0));

    __this->_hovering = false;
    __this->_lastUpTime = args->Timestamp();
    __this->_lastArgs = args;
    return *__retval = 2, void();
}

// private Fuse.Input.GesturePriorityConfig Fuse.Input.IGesture.get_Priority()
void Clicker__FuseInputIGestureget_Priority_fn(Clicker* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval)
{
    return *__retval = ::g::Fuse::Input::GesturePriorityConfig__New1(4, 0.0f, 0), void();
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value)
void Clicker__add_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_LongPressedEvent(value);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value)
void Clicker__remove_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_LongPressedEvent(value);
}

// private bool NeedCapture()
void Clicker__NeedCapture_fn(Clicker* __this, bool* __retval)
{
    *__retval = __this->NeedCapture();
}

// private Clicker New(Fuse.Visual visual)
void Clicker__New1_fn(::g::Fuse::Visual* visual, Clicker** __retval)
{
    *__retval = Clicker::New1(visual);
}

// private void OnRooted()
void Clicker__OnRooted_fn(Clicker* __this)
{
    __this->OnRooted();
}

// private void OnUnrooted()
void Clicker__OnUnrooted_fn(Clicker* __this)
{
    __this->OnUnrooted();
}

// internal float2 get_PressedPosition()
void Clicker__get_PressedPosition_fn(Clicker* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PressedPosition();
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value)
void Clicker__add_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_PressingEvent(value);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value)
void Clicker__remove_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_PressingEvent(value);
}

// private void ReleaseUpdate()
void Clicker__ReleaseUpdate_fn(Clicker* __this)
{
    __this->ReleaseUpdate();
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value)
void Clicker__add_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_TappedEvent(value);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value)
void Clicker__remove_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_TappedEvent(value);
}

// private void Update()
void Clicker__Update_fn(Clicker* __this)
{
    __this->Update();
}

uSStrong< ::g::Fuse::PropertyHandle*> Clicker::_clickerProperty_;

// private Clicker(Fuse.Visual visual) [instance]
void Clicker::ctor_(::g::Fuse::Visual* visual)
{
    _maxTapDistanceMoved = 25.0f;
    _maxTapTimeHeld = 0.3f;
    _maxDoubleInterval = 0.3f;
    _longPressTimeout = 0.5f;
    _attachCount = 1;
    _visual = visual;
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance]
void Clicker::add_ClickedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_ClickedEvent(Fuse.Gestures.ClickerEventHandler)");
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ClickedEvent1, value), ::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance]
void Clicker::remove_ClickedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler)");
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ClickedEvent1, value), ::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public void Detach() [instance]
void Clicker::Detach()
{
    uStackFrame __("Fuse.Gestures.Clicker", "Detach()");
    _attachCount--;

    if (_attachCount == 0)
    {
        OnUnrooted();
        uPtr(uPtr(_visual)->Properties())->Clear(Clicker::_clickerProperty_);
    }
}

// private void DoneCapture() [instance]
void Clicker::DoneCapture()
{
    uStackFrame __("Fuse.Gestures.Clicker", "DoneCapture()");
    ReleaseUpdate();

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int32_t>(0));

    _hovering = false;
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance]
void Clicker::add_LongPressedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler)");
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LongPressedEvent1, value), ::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance]
void Clicker::remove_LongPressedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler)");
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LongPressedEvent1, value), ::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private bool NeedCapture() [instance]
bool Clicker::NeedCapture()
{
    return (((_maybeTap && ::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL);
}

// private void OnRooted() [instance]
void Clicker::OnRooted()
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnRooted()");
    _gesture = ::g::Fuse::Input::Gestures::Add((uObject*)this, _visual, 0);
}

// private void OnUnrooted() [instance]
void Clicker::OnUnrooted()
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnUnrooted()");
    uPtr(_gesture)->Dispose();
    _gesture = NULL;
}

// internal float2 get_PressedPosition() [instance]
::g::Uno::Float2 Clicker::PressedPosition()
{
    return _pressedPosition;
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance]
void Clicker::add_PressingEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_PressingEvent(Fuse.Gestures.ClickerEventHandler)");
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PressingEvent1, value), ::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance]
void Clicker::remove_PressingEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_PressingEvent(Fuse.Gestures.ClickerEventHandler)");
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PressingEvent1, value), ::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private void ReleaseUpdate() [instance]
void Clicker::ReleaseUpdate()
{
    uStackFrame __("Fuse.Gestures.Clicker", "ReleaseUpdate()");

    if (_hasUpdate)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Clicker__Update_fn, this), 0);
        _hasUpdate = false;
    }
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance]
void Clicker::add_TappedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_TappedEvent(Fuse.Gestures.ClickerEventHandler)");
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TappedEvent1, value), ::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance]
void Clicker::remove_TappedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_TappedEvent(Fuse.Gestures.ClickerEventHandler)");
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TappedEvent1, value), ::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private void Update() [instance]
void Clicker::Update()
{
    uStackFrame __("Fuse.Gestures.Clicker", "Update()");
    double elapsed = ::g::Fuse::Time::FrameTime() - _startTime;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL) && (elapsed > (double)_longPressTimeout))
    {
        uPtr(LongPressedEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int32_t>(0));
        ::g::Fuse::Input::Pointer::ReleaseCapture(this);
        DoneCapture();
    }
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Visual elm, Fuse.Input.GesturePriority priority) [static]
Clicker* Clicker::AttachClicker(::g::Fuse::Visual* elm, int32_t priority)
{
    uStackFrame __("Fuse.Gestures.Clicker", "AttachClicker(Fuse.Visual,Fuse.Input.GesturePriority)");
    Clicker_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(Clicker::_clickerProperty_, &v))
    {
        Clicker* c = uAs<Clicker*>(v, Clicker_typeof());
        uPtr(c)->_priority = ::g::Uno::Math::Max8(uPtr(c)->_priority, priority);
        c->_attachCount++;
        return c;
    }

    Clicker* nc = Clicker::New1(elm);
    nc->_priority = priority;
    uPtr(uPtr(elm)->Properties())->Set(Clicker::_clickerProperty_, nc);
    nc->OnRooted();
    return nc;
}

// private Clicker New(Fuse.Visual visual) [static]
Clicker* Clicker::New1(::g::Fuse::Visual* visual)
{
    Clicker* obj1 = (Clicker*)uNew(Clicker_typeof());
    obj1->ctor_(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Internal/Clicker.uno
// -----------------------------------------------------------------------

// internal delegate void ClickerEventHandler(Fuse.Input.PointerEventArgs args, int count)
uDelegateType* ClickerEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickerEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Input::PointerEventArgs_typeof(),
        ::g::Uno::Int_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Internal/Clicker.uno
// -----------------------------------------------------------------------

// public enum ClickerPointerIndex
uEnumType* ClickerPointerIndex_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.ClickerPointerIndex", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Primary", 0LL,
        "Any", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Internal/Clicker.uno
// -----------------------------------------------------------------------

// public abstract class ClickerTrigger
// {
static void ClickerTrigger_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Gestures::Clicker_typeof());
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
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(ClickerTrigger, Clicker), 0,
        ::g::Fuse::Gestures::ClickerPointerIndex_typeof(), offsetof(ClickerTrigger, _pointerIndex), 0,
        ::g::Fuse::Input::GesturePriority_typeof(), offsetof(ClickerTrigger, _gesturePriority), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_GesturePriority", NULL, (void*)ClickerTrigger__get_GesturePriority_fn, 0, false, ::g::Fuse::Input::GesturePriority_typeof(), 0),
        new uFunction("set_GesturePriority", NULL, (void*)ClickerTrigger__set_GesturePriority_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::GesturePriority_typeof()),
        new uFunction("get_PointerIndex", NULL, (void*)ClickerTrigger__get_PointerIndex_fn, 0, false, ::g::Fuse::Gestures::ClickerPointerIndex_typeof(), 0),
        new uFunction("set_PointerIndex", NULL, (void*)ClickerTrigger__set_PointerIndex_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ClickerPointerIndex_typeof()));
}

::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ClickerTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.ClickerTrigger", options);
    type->fp_build_ = ClickerTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ClickerTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ClickerTrigger__OnUnrooted_fn;
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

// protected generated ClickerTrigger()
void ClickerTrigger__ctor_5_fn(ClickerTrigger* __this)
{
    __this->ctor_5();
}

// protected bool Accept(Fuse.Input.PointerEventArgs args)
void ClickerTrigger__Accept_fn(ClickerTrigger* __this, ::g::Fuse::Input::PointerEventArgs* args, bool* __retval)
{
    *__retval = __this->Accept(args);
}

// public Fuse.Input.GesturePriority get_GesturePriority()
void ClickerTrigger__get_GesturePriority_fn(ClickerTrigger* __this, int32_t* __retval)
{
    *__retval = __this->GesturePriority();
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value)
void ClickerTrigger__set_GesturePriority_fn(ClickerTrigger* __this, int32_t* value)
{
    __this->GesturePriority(*value);
}

// protected override void OnRooted()
void ClickerTrigger__OnRooted_fn(ClickerTrigger* __this)
{
    uStackFrame __("Fuse.Gestures.ClickerTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->Parent(), __this->GesturePriority());
}

// protected override void OnUnrooted()
void ClickerTrigger__OnUnrooted_fn(ClickerTrigger* __this)
{
    uStackFrame __("Fuse.Gestures.ClickerTrigger", "OnUnrooted()");
    uPtr(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Gestures.ClickerPointerIndex get_PointerIndex()
void ClickerTrigger__get_PointerIndex_fn(ClickerTrigger* __this, int32_t* __retval)
{
    *__retval = __this->PointerIndex();
}

// public void set_PointerIndex(Fuse.Gestures.ClickerPointerIndex value)
void ClickerTrigger__set_PointerIndex_fn(ClickerTrigger* __this, int32_t* value)
{
    __this->PointerIndex(*value);
}

// protected generated ClickerTrigger() [instance]
void ClickerTrigger::ctor_5()
{
    _gesturePriority = 4;
    ctor_4();
}

// protected bool Accept(Fuse.Input.PointerEventArgs args) [instance]
bool ClickerTrigger::Accept(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.ClickerTrigger", "Accept(Fuse.Input.PointerEventArgs)");

    if (!IsRootingCompleted())
        return false;

    if (PointerIndex() == 1)
        return true;

    return uPtr(args)->IsPrimary();
}

// public Fuse.Input.GesturePriority get_GesturePriority() [instance]
int32_t ClickerTrigger::GesturePriority()
{
    return _gesturePriority;
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value) [instance]
void ClickerTrigger::GesturePriority(int32_t value)
{
    _gesturePriority = value;
}

// public Fuse.Gestures.ClickerPointerIndex get_PointerIndex() [instance]
int32_t ClickerTrigger::PointerIndex()
{
    return _pointerIndex;
}

// public void set_PointerIndex(Fuse.Gestures.ClickerPointerIndex value) [instance]
void ClickerTrigger::PointerIndex(int32_t value)
{
    _pointerIndex = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Internal/Helpers.uno
// -----------------------------------------------------------------------

// internal sealed class DegreeSpan
// {
static void DegreeSpan_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(DegreeSpan, _a), 0,
        ::g::Uno::Float_typeof(), offsetof(DegreeSpan, _b), 0);
}

uType* DegreeSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DegreeSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.DegreeSpan", options);
    type->fp_build_ = DegreeSpan_build;
    return type;
}

// public DegreeSpan(float a, float b)
void DegreeSpan__ctor__fn(DegreeSpan* __this, float* a, float* b)
{
    __this->ctor_(*a, *b);
}

// public bool IsWithinBounds(float x)
void DegreeSpan__IsWithinBounds_fn(DegreeSpan* __this, float* x, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*x);
}

// public DegreeSpan New(float a, float b)
void DegreeSpan__New1_fn(float* a, float* b, DegreeSpan** __retval)
{
    *__retval = DegreeSpan::New1(*a, *b);
}

// public DegreeSpan(float a, float b) [instance]
void DegreeSpan::ctor_(float a, float b)
{
    _a = a;
    _b = b;
}

// public bool IsWithinBounds(float x) [instance]
bool DegreeSpan::IsWithinBounds(float x)
{
    float angle1 = _a;
    float angle2 = _b;
    float rAngle = ::g::Uno::Math::Mod1(::g::Uno::Math::Mod1(angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
        return (x >= angle1) && (x <= angle2);
    else
        return (x >= angle2) || (x <= angle2);
}

// public DegreeSpan New(float a, float b) [static]
DegreeSpan* DegreeSpan::New1(float a, float b)
{
    DegreeSpan* obj1 = (DegreeSpan*)uNew(DegreeSpan_typeof());
    obj1->ctor_(a, b);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.12.0/RangeControls/CircularRangeBehavior.uno
// -----------------------------------------------------------------------------------------------------

// internal struct double2
// {
static void double2_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(double2, X), 0,
        ::g::Uno::Double_typeof(), offsetof(double2, Y), 0);
}

uStructType* double2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 2;
    options.Alignment = alignof(double2);
    options.ValueSize = sizeof(double2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Gestures.double2", options);
    type->fp_build_ = double2_build;
    return type;
}

// public double2(double x, double y)
void double2__ctor_1_fn(double2* __this, double* x, double* y)
{
    __this->ctor_1(*x, *y);
}

// public double2(float2 v)
void double2__ctor_2_fn(double2* __this, ::g::Uno::Float2* v)
{
    __this->ctor_2(*v);
}

// public float2 get_AsFloat2()
void double2__get_AsFloat2_fn(double2* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->AsFloat2();
}

// public double2 New(double x, double y)
void double2__New1_fn(double* x, double* y, double2* __retval)
{
    *__retval = double2__New1(*x, *y);
}

// public double2 New(float2 v)
void double2__New2_fn(::g::Uno::Float2* v, double2* __retval)
{
    *__retval = double2__New2(*v);
}

// public double2(double x, double y) [instance]
void double2::ctor_1(double x, double y)
{
    X = x;
    Y = y;
}

// public double2(float2 v) [instance]
void double2::ctor_2(::g::Uno::Float2 v)
{
    X = (double)v.X;
    Y = (double)v.Y;
}

// public float2 get_AsFloat2() [instance]
::g::Uno::Float2 double2::AsFloat2()
{
    return ::g::Uno::Float2__New2((float)X, (float)Y);
}

// public double2 New(double x, double y) [static]
double2 double2__New1(double x, double y)
{
    double2 obj1;
    obj1.ctor_1(x, y);
    return obj1;
}

// public double2 New(float2 v) [static]
double2 double2__New2(::g::Uno::Float2 v)
{
    double2 obj2;
    obj2.ctor_2(v);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Clicked.uno
// --------------------------------------------------------------

// public sealed class DoubleClicked
// {
static void DoubleClicked_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[10] = ::g::Fuse::Gestures::ClickedHandler_typeof();
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
    type->SetFields(42,
        ::TYPES[10/*Fuse.Gestures.ClickedHandler*/], offsetof(DoubleClicked, Handler1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("add_Handler", NULL, (void*)DoubleClicked__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[10/*Fuse.Gestures.ClickedHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)DoubleClicked__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[10/*Fuse.Gestures.ClickedHandler*/]),
        new uFunction(".ctor", NULL, (void*)DoubleClicked__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* DoubleClicked_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(DoubleClicked);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.DoubleClicked", options);
    type->fp_build_ = DoubleClicked_build;
    type->fp_ctor_ = (void*)DoubleClicked__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DoubleClicked__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))DoubleClicked__OnUnrooted_fn;
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

// public generated DoubleClicked()
void DoubleClicked__ctor_6_fn(DoubleClicked* __this)
{
    __this->ctor_6();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value)
void DoubleClicked__add_Handler_fn(DoubleClicked* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value)
void DoubleClicked__remove_Handler_fn(DoubleClicked* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated DoubleClicked New()
void DoubleClicked__New2_fn(DoubleClicked** __retval)
{
    *__retval = DoubleClicked::New2();
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount)
void DoubleClicked__OnClicked_fn(DoubleClicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* clickCount)
{
    __this->OnClicked(args, *clickCount);
}

// protected override sealed void OnRooted()
void DoubleClicked__OnRooted_fn(DoubleClicked* __this)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_ClickedEvent(uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleClicked__OnClicked_fn, __this));
}

// protected override sealed void OnUnrooted()
void DoubleClicked__OnUnrooted_fn(DoubleClicked* __this)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_ClickedEvent(uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleClicked__OnClicked_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public generated DoubleClicked() [instance]
void DoubleClicked::ctor_6()
{
    ctor_5();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) [instance]
void DoubleClicked::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "add_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[10/*Fuse.Gestures.ClickedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) [instance]
void DoubleClicked::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "remove_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[10/*Fuse.Gestures.ClickedHandler*/]);
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) [instance]
void DoubleClicked::OnClicked(::g::Fuse::Input::PointerEventArgs* args, int32_t clickCount)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "OnClicked(Fuse.Input.PointerEventArgs,int)");

    if (!Accept(args))
        return;

    if (clickCount != 2)
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::ClickedArgs*)::g::Fuse::Gestures::ClickedArgs::New3(args, Parent()));
}

// public generated DoubleClicked New() [static]
DoubleClicked* DoubleClicked::New2()
{
    DoubleClicked* obj1 = (DoubleClicked*)uNew(DoubleClicked_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Tapped.uno
// -------------------------------------------------------------

// public sealed class DoubleTapped
// {
static void DoubleTapped_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[12] = ::g::Fuse::Gestures::DoubleTappedHandler_typeof();
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
    type->SetFields(42,
        ::TYPES[12/*Fuse.Gestures.DoubleTappedHandler*/], offsetof(DoubleTapped, Handler1), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("add_Handler", NULL, (void*)DoubleTapped__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[12/*Fuse.Gestures.DoubleTappedHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)DoubleTapped__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[12/*Fuse.Gestures.DoubleTappedHandler*/]),
        new uFunction(".ctor", NULL, (void*)DoubleTapped__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)DoubleTapped__New3_fn, 0, true, type, 1, ::TYPES[12/*Fuse.Gestures.DoubleTappedHandler*/]));
}

::g::Fuse::Triggers::Trigger_type* DoubleTapped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(DoubleTapped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.DoubleTapped", options);
    type->fp_build_ = DoubleTapped_build;
    type->fp_ctor_ = (void*)DoubleTapped__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DoubleTapped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))DoubleTapped__OnUnrooted_fn;
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

// public DoubleTapped()
void DoubleTapped__ctor_6_fn(DoubleTapped* __this)
{
    __this->ctor_6();
}

// public DoubleTapped(Fuse.Gestures.DoubleTappedHandler handler)
void DoubleTapped__ctor_7_fn(DoubleTapped* __this, uDelegate* handler)
{
    __this->ctor_7(handler);
}

// public generated void add_Handler(Fuse.Gestures.DoubleTappedHandler value)
void DoubleTapped__add_Handler_fn(DoubleTapped* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.DoubleTappedHandler value)
void DoubleTapped__remove_Handler_fn(DoubleTapped* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public DoubleTapped New()
void DoubleTapped__New2_fn(DoubleTapped** __retval)
{
    *__retval = DoubleTapped::New2();
}

// public DoubleTapped New(Fuse.Gestures.DoubleTappedHandler handler)
void DoubleTapped__New3_fn(uDelegate* handler, DoubleTapped** __retval)
{
    *__retval = DoubleTapped::New3(handler);
}

// protected override sealed void OnRooted()
void DoubleTapped__OnRooted_fn(DoubleTapped* __this)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_TappedEvent(uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleTapped__OnTapped_fn, __this));
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount)
void DoubleTapped__OnTapped_fn(DoubleTapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* tapCount)
{
    __this->OnTapped(args, *tapCount);
}

// protected override sealed void OnUnrooted()
void DoubleTapped__OnUnrooted_fn(DoubleTapped* __this)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_TappedEvent(uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleTapped__OnTapped_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public DoubleTapped() [instance]
void DoubleTapped::ctor_6()
{
    ctor_5();
}

// public DoubleTapped(Fuse.Gestures.DoubleTappedHandler handler) [instance]
void DoubleTapped::ctor_7(uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", ".ctor(Fuse.Gestures.DoubleTappedHandler)");
    ctor_5();
    add_Handler(handler);
}

// public generated void add_Handler(Fuse.Gestures.DoubleTappedHandler value) [instance]
void DoubleTapped::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "add_Handler(Fuse.Gestures.DoubleTappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[12/*Fuse.Gestures.DoubleTappedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.DoubleTappedHandler value) [instance]
void DoubleTapped::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "remove_Handler(Fuse.Gestures.DoubleTappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[12/*Fuse.Gestures.DoubleTappedHandler*/]);
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) [instance]
void DoubleTapped::OnTapped(::g::Fuse::Input::PointerEventArgs* args, int32_t tapCount)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "OnTapped(Fuse.Input.PointerEventArgs,int)");

    if (!Accept(args))
        return;

    if (tapCount != 2)
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::DoubleTappedArgs*)::g::Fuse::Gestures::DoubleTappedArgs::New3(args, Parent()));
}

// public DoubleTapped New() [static]
DoubleTapped* DoubleTapped::New2()
{
    DoubleTapped* obj1 = (DoubleTapped*)uNew(DoubleTapped_typeof());
    obj1->ctor_6();
    return obj1;
}

// public DoubleTapped New(Fuse.Gestures.DoubleTappedHandler handler) [static]
DoubleTapped* DoubleTapped::New3(uDelegate* handler)
{
    DoubleTapped* obj2 = (DoubleTapped*)uNew(DoubleTapped_typeof());
    obj2->ctor_7(handler);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Tapped.uno
// -------------------------------------------------------------

// public sealed class DoubleTappedArgs
// {
static void DoubleTappedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DoubleTappedArgs__New3_fn, 0, true, type, 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* DoubleTappedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::CustomPointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DoubleTappedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.DoubleTappedArgs", options);
    type->fp_build_ = DoubleTappedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public DoubleTappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual)
void DoubleTappedArgs__ctor_4_fn(DoubleTappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public DoubleTappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual)
void DoubleTappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, DoubleTappedArgs** __retval)
{
    *__retval = DoubleTappedArgs::New3(args, visual);
}

// public DoubleTappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance]
void DoubleTappedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.DoubleTappedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Visual)");
    ctor_3(args, visual);
}

// public DoubleTappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static]
DoubleTappedArgs* DoubleTappedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    DoubleTappedArgs* obj1 = (DoubleTappedArgs*)uNew(DoubleTappedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Tapped.uno
// -------------------------------------------------------------

// public delegate void DoubleTappedHandler(object sender, Fuse.Gestures.DoubleTappedArgs args)
uDelegateType* DoubleTappedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.DoubleTappedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::DoubleTappedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/WhileEdgeSwiped.uno
// ----------------------------------------------------------------------

// public enum Edge
uEnumType* Edge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Edge", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/WhileEdgeSwiped.uno
// ----------------------------------------------------------------------

// public sealed class EdgeSwipeAnimation
// {
static void EdgeSwipeAnimation_build(uType* type)
{
    ::STRINGS[5] = uString::Const("EdgeSwipeAnimation must be attached to an Element");
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[13] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof(), NULL);
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
        ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), offsetof(EdgeSwipeAnimation, _swiper), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("Disable", NULL, (void*)EdgeSwipeAnimation__Disable_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Edge", NULL, (void*)EdgeSwipeAnimation__get_Edge_fn, 0, false, ::g::Fuse::Gestures::Edge_typeof(), 0),
        new uFunction("set_Edge", NULL, (void*)EdgeSwipeAnimation__set_Edge_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::Edge_typeof()),
        new uFunction("get_EdgeThreshold", NULL, (void*)EdgeSwipeAnimation__get_EdgeThreshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EdgeThreshold", NULL, (void*)EdgeSwipeAnimation__set_EdgeThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Enable", NULL, (void*)EdgeSwipeAnimation__Enable_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IsEnabled", NULL, (void*)EdgeSwipeAnimation__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)EdgeSwipeAnimation__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)EdgeSwipeAnimation__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)EdgeSwipeAnimation__get_Target_fn, 0, false, ::TYPES[0/*Fuse.Elements.Element*/], 0),
        new uFunction("set_Target", NULL, (void*)EdgeSwipeAnimation__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Fuse.Elements.Element*/]));
}

::g::Fuse::Triggers::Trigger_type* EdgeSwipeAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(EdgeSwipeAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.EdgeSwipeAnimation", options);
    type->fp_build_ = EdgeSwipeAnimation_build;
    type->fp_ctor_ = (void*)EdgeSwipeAnimation__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))EdgeSwipeAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))EdgeSwipeAnimation__OnUnrooted_fn;
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

// public generated EdgeSwipeAnimation()
void EdgeSwipeAnimation__ctor_5_fn(EdgeSwipeAnimation* __this)
{
    __this->ctor_5();
}

// public void Disable()
void EdgeSwipeAnimation__Disable_fn(EdgeSwipeAnimation* __this)
{
    __this->Disable();
}

// public Fuse.Gestures.Edge get_Edge()
void EdgeSwipeAnimation__get_Edge_fn(EdgeSwipeAnimation* __this, int32_t* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value)
void EdgeSwipeAnimation__set_Edge_fn(EdgeSwipeAnimation* __this, int32_t* value)
{
    __this->Edge(*value);
}

// public float get_EdgeThreshold()
void EdgeSwipeAnimation__get_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* __retval)
{
    *__retval = __this->EdgeThreshold();
}

// public void set_EdgeThreshold(float value)
void EdgeSwipeAnimation__set_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* value)
{
    __this->EdgeThreshold(*value);
}

// public void Enable()
void EdgeSwipeAnimation__Enable_fn(EdgeSwipeAnimation* __this)
{
    __this->Enable();
}

// public bool get_IsEnabled()
void EdgeSwipeAnimation__get_IsEnabled_fn(EdgeSwipeAnimation* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value)
void EdgeSwipeAnimation__set_IsEnabled_fn(EdgeSwipeAnimation* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public generated EdgeSwipeAnimation New()
void EdgeSwipeAnimation__New2_fn(EdgeSwipeAnimation** __retval)
{
    *__retval = EdgeSwipeAnimation::New2();
}

// private void OnProgressChanged(object s, double progress)
void EdgeSwipeAnimation__OnProgressChanged1_fn(EdgeSwipeAnimation* __this, uObject* s, double* progress)
{
    __this->OnProgressChanged1(s, *progress);
}

// protected override sealed void OnRooted()
void EdgeSwipeAnimation__OnRooted_fn(EdgeSwipeAnimation* __this)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[0/*Fuse.Elements.Element*/]);

    if (element == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"EdgeSwipeAn...*/]));

    uPtr(__this->_swiper)->Rooted(element);
    uPtr(__this->_swiper)->Seek(0.0);
    uPtr(__this->_swiper)->add_ProgressChanged(uDelegate::New(::TYPES[13/*Uno.Action<object, double>*/], (void*)EdgeSwipeAnimation__OnProgressChanged1_fn, __this));
}

// protected override sealed void OnUnrooted()
void EdgeSwipeAnimation__OnUnrooted_fn(EdgeSwipeAnimation* __this)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "OnUnrooted()");
    uPtr(__this->_swiper)->Unrooted();
    uPtr(__this->_swiper)->remove_ProgressChanged(uDelegate::New(::TYPES[13/*Uno.Action<object, double>*/], (void*)EdgeSwipeAnimation__OnProgressChanged1_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Elements.Element get_Target()
void EdgeSwipeAnimation__get_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Elements.Element value)
void EdgeSwipeAnimation__set_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Target(value);
}

// public generated EdgeSwipeAnimation() [instance]
void EdgeSwipeAnimation::ctor_5()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", ".ctor()");
    _swiper = ::g::Fuse::Gestures::Internal::EdgeSwiper::New1();
    ctor_4();
}

// public void Disable() [instance]
void EdgeSwipeAnimation::Disable()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "Disable()");
    uPtr(_swiper)->Disable();
}

// public Fuse.Gestures.Edge get_Edge() [instance]
int32_t EdgeSwipeAnimation::Edge()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_Edge()");
    return uPtr(_swiper)->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance]
void EdgeSwipeAnimation::Edge(int32_t value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_Edge(Fuse.Gestures.Edge)");
    uPtr(_swiper)->Edge(value);
}

// public float get_EdgeThreshold() [instance]
float EdgeSwipeAnimation::EdgeThreshold()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_EdgeThreshold()");
    return uPtr(_swiper)->EdgeThreshold();
}

// public void set_EdgeThreshold(float value) [instance]
void EdgeSwipeAnimation::EdgeThreshold(float value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_EdgeThreshold(float)");
    uPtr(_swiper)->EdgeThreshold(value);
}

// public void Enable() [instance]
void EdgeSwipeAnimation::Enable()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "Enable()");
    uPtr(_swiper)->Enable();
}

// public bool get_IsEnabled() [instance]
bool EdgeSwipeAnimation::IsEnabled()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_IsEnabled()");
    return uPtr(_swiper)->IsEnabled();
}

// public void set_IsEnabled(bool value) [instance]
void EdgeSwipeAnimation::IsEnabled(bool value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_IsEnabled(bool)");

    if (value)
        Enable();
    else
        Disable();
}

// private void OnProgressChanged(object s, double progress) [instance]
void EdgeSwipeAnimation::OnProgressChanged1(uObject* s, double progress)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "OnProgressChanged(object,double)");
    Seek(progress, 0);
}

// public Fuse.Elements.Element get_Target() [instance]
::g::Fuse::Elements::Element* EdgeSwipeAnimation::Target()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_Target()");
    return uPtr(_swiper)->Target();
}

// public void set_Target(Fuse.Elements.Element value) [instance]
void EdgeSwipeAnimation::Target(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_Target(Fuse.Elements.Element)");
    uPtr(_swiper)->Target(value);
}

// public generated EdgeSwipeAnimation New() [static]
EdgeSwipeAnimation* EdgeSwipeAnimation::New2()
{
    EdgeSwipeAnimation* obj1 = (EdgeSwipeAnimation*)uNew(EdgeSwipeAnimation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/TransformGesture.uno
// -----------------------------------------------------------------------

// public abstract interface ISizeConstraint
// {
uInterfaceType* ISizeConstraint_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Gestures.ISizeConstraint", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_ContentSize", NULL, NULL, offsetof(ISizeConstraint, fp_get_ContentSize), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_TrimSize", NULL, NULL, offsetof(ISizeConstraint, fp_get_TrimSize), false, ::g::Uno::Float2_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/KeepInView.uno
// -----------------------------------------------------------------

// public sealed class KeepFocusInView
// {
static void KeepFocusInView_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(21);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeepFocusInView__New3_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* KeepFocusInView_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::KeepInViewCommon_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(KeepFocusInView);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepFocusInView", options);
    type->fp_build_ = KeepFocusInView_build;
    type->fp_ctor_ = (void*)KeepFocusInView__New3_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))KeepFocusInView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))KeepFocusInView__OnUnrooted_fn;
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

// public generated KeepFocusInView()
void KeepFocusInView__ctor_4_fn(KeepFocusInView* __this)
{
    __this->ctor_4();
}

// public generated KeepFocusInView New()
void KeepFocusInView__New3_fn(KeepFocusInView** __retval)
{
    *__retval = KeepFocusInView::New3();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga)
void KeepFocusInView__OnGotFocus_fn(KeepFocusInView* __this, uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    __this->OnGotFocus(s, fga);
}

// private void OnLostFocus(object s, object a)
void KeepFocusInView__OnLostFocus_fn(KeepFocusInView* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus(s, a);
}

// protected override sealed void OnRooted()
void KeepFocusInView__OnRooted_fn(KeepFocusInView* __this)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnRooted()");
    ::g::Fuse::Gestures::KeepInViewCommon__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[14/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[15/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
}

// protected override sealed void OnUnrooted()
void KeepFocusInView__OnUnrooted_fn(KeepFocusInView* __this)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[14/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[15/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
    ::g::Fuse::Gestures::KeepInViewCommon__OnUnrooted_fn(__this);
}

// public generated KeepFocusInView() [instance]
void KeepFocusInView::ctor_4()
{
    ctor_3();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) [instance]
void KeepFocusInView::OnGotFocus(uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnGotFocus(object,Fuse.Input.FocusGainedArgs)");
    Target(::g::Fuse::Input::Focus::FocusedVisual());
}

// private void OnLostFocus(object s, object a) [instance]
void KeepFocusInView::OnLostFocus(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnLostFocus(object,object)");
    Target(NULL);
}

// public generated KeepFocusInView New() [static]
KeepFocusInView* KeepFocusInView::New3()
{
    KeepFocusInView* obj1 = (KeepFocusInView*)uNew(KeepFocusInView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/KeepInView.uno
// -----------------------------------------------------------------

// public sealed class KeepInView
// {
static void KeepInView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(21);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeepInView__New3_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* KeepInView_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::KeepInViewCommon_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(KeepInView);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepInView", options);
    type->fp_build_ = KeepInView_build;
    type->fp_ctor_ = (void*)KeepInView__New3_fn;
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

// public generated KeepInView()
void KeepInView__ctor_4_fn(KeepInView* __this)
{
    __this->ctor_4();
}

// public generated KeepInView New()
void KeepInView__New3_fn(KeepInView** __retval)
{
    *__retval = KeepInView::New3();
}

// public generated KeepInView() [instance]
void KeepInView::ctor_4()
{
    ctor_3();
}

// public generated KeepInView New() [static]
KeepInView* KeepInView::New3()
{
    KeepInView* obj1 = (KeepInView*)uNew(KeepInView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/KeepInView.uno
// -----------------------------------------------------------------

// public class KeepInViewCommon
// {
static void KeepInViewCommon_build(uType* type)
{
    ::TYPES[16] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(18,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(KeepInViewCommon, _target), 0,
        ::g::Uno::Bool_typeof(), offsetof(KeepInViewCommon, _attached), 0,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(KeepInViewCommon, _rootElement), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Target", NULL, (void*)KeepInViewCommon__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)KeepInViewCommon__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
}

::g::Fuse::Node_type* KeepInViewCommon_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(KeepInViewCommon);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepInViewCommon", options);
    type->fp_build_ = KeepInViewCommon_build;
    type->fp_ctor_ = (void*)KeepInViewCommon__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))KeepInViewCommon__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))KeepInViewCommon__OnUnrooted_fn;
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

// internal KeepInViewCommon()
void KeepInViewCommon__ctor_3_fn(KeepInViewCommon* __this)
{
    __this->ctor_3();
}

// private void AttachElement()
void KeepInViewCommon__AttachElement_fn(KeepInViewCommon* __this)
{
    __this->AttachElement();
}

// internal KeepInViewCommon New()
void KeepInViewCommon__New2_fn(KeepInViewCommon** __retval)
{
    *__retval = KeepInViewCommon::New2();
}

// protected override void OnRooted()
void KeepInViewCommon__OnRooted_fn(KeepInViewCommon* __this)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_rootElement = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[0/*Fuse.Elements.Element*/]);

    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->add_Placed(uDelegate::New(::TYPES[16/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->AttachElement();
    }
}

// protected override void OnUnrooted()
void KeepInViewCommon__OnUnrooted_fn(KeepInViewCommon* __this)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "OnUnrooted()");

    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->remove_Placed(uDelegate::New(::TYPES[16/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->ReleaseElement();
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void ReleaseElement()
void KeepInViewCommon__ReleaseElement_fn(KeepInViewCommon* __this)
{
    __this->ReleaseElement();
}

// public Fuse.Node get_Target()
void KeepInViewCommon__get_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Node value)
void KeepInViewCommon__set_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// private void Update(object s, object a)
void KeepInViewCommon__Update_fn(KeepInViewCommon* __this, uObject* s, uObject* a)
{
    __this->Update(s, a);
}

// internal KeepInViewCommon() [instance]
void KeepInViewCommon::ctor_3()
{
    ctor_2();
}

// private void AttachElement() [instance]
void KeepInViewCommon::AttachElement()
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "AttachElement()");

    if (_target == NULL)
        return;

    uPtr(_target)->add_Placed(uDelegate::New(::TYPES[16/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = true;
    Update(NULL, NULL);
}

// private void ReleaseElement() [instance]
void KeepInViewCommon::ReleaseElement()
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "ReleaseElement()");

    if (!_attached)
        return;

    uPtr(_target)->remove_Placed(uDelegate::New(::TYPES[16/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = false;
}

// public Fuse.Node get_Target() [instance]
::g::Fuse::Node* KeepInViewCommon::Target()
{
    return _target;
}

// public void set_Target(Fuse.Node value) [instance]
void KeepInViewCommon::Target(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "set_Target(Fuse.Node)");
    ::g::Fuse::Elements::Element* prev = _target;
    ReleaseElement();
    ::g::Fuse::Node* v = value;

    while (v != NULL)
    {
        _target = uAs< ::g::Fuse::Elements::Element*>(v, ::TYPES[0/*Fuse.Elements.Element*/]);

        if (_target != NULL)
            break;

        v = uPtr(v)->Parent();
    }

    if (v == NULL)
    {
        if (prev != NULL)
            uPtr(prev)->OnBringIntoView(NULL);

        _target = NULL;
    }
    else
        AttachElement();
}

// private void Update(object s, object a) [instance]
void KeepInViewCommon::Update(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "Update(object,object)");

    if (_target != NULL)
        uPtr(_target)->BringIntoView();
}

// internal KeepInViewCommon New() [static]
KeepInViewCommon* KeepInViewCommon::New2()
{
    KeepInViewCommon* obj1 = (KeepInViewCommon*)uNew(KeepInViewCommon_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.12.0/RangeControls/LinearRangeBehavior.uno
// ---------------------------------------------------------------------------------------------------

// public sealed class LinearRangeBehavior
// {
static void LinearRangeBehavior_build(uType* type)
{
    ::STRINGS[6] = uString::Const("RangeControl");
    ::STRINGS[7] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.12.0/RangeControls/LinearRangeBehavior.uno");
    ::STRINGS[4] = uString::Const("OnRooted");
    ::STRINGS[8] = uString::Const("Element");
    ::TYPES[1] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof(),
        ::g::Fuse::Input::Gestures_typeof(),
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(LinearRangeBehavior_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(LinearRangeBehavior_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(LinearRangeBehavior_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(LinearRangeBehavior_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(LinearRangeBehavior_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(LinearRangeBehavior_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(LinearRangeBehavior_type, interface6),
        ::g::Fuse::Input::IGesture_typeof(), offsetof(LinearRangeBehavior_type, interface7));
    type->SetFields(18,
        ::TYPES[1/*Fuse.Controls.RangeControl*/], offsetof(LinearRangeBehavior, Control), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(LinearRangeBehavior, _orientation), 0,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(LinearRangeBehavior, _boundsElement), 0,
        ::g::Fuse::Input::Gesture_typeof(), offsetof(LinearRangeBehavior, _gesture), 0,
        ::g::Fuse::Input::GesturePriority_typeof(), offsetof(LinearRangeBehavior, _gesturePriority), 0,
        ::g::Uno::Float2_typeof(), offsetof(LinearRangeBehavior, _startCoord), 0,
        ::g::Uno::Float2_typeof(), offsetof(LinearRangeBehavior, _currentCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(LinearRangeBehavior, _initialValue), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_GesturePriority", NULL, (void*)LinearRangeBehavior__get_GesturePriority_fn, 0, false, ::g::Fuse::Input::GesturePriority_typeof(), 0),
        new uFunction("set_GesturePriority", NULL, (void*)LinearRangeBehavior__set_GesturePriority_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::GesturePriority_typeof()),
        new uFunction(".ctor", NULL, (void*)LinearRangeBehavior__New2_fn, 0, true, type, 0),
        new uFunction("get_Orientation", NULL, (void*)LinearRangeBehavior__get_Orientation_fn, 0, false, ::g::Fuse::Layouts::Orientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)LinearRangeBehavior__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Orientation_typeof()));
}

LinearRangeBehavior_type* LinearRangeBehavior_typeof()
{
    static uSStrong<LinearRangeBehavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 26;
    options.InterfaceCount = 8;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(LinearRangeBehavior);
    options.TypeSize = sizeof(LinearRangeBehavior_type);
    type = (LinearRangeBehavior_type*)uClassType::New("Fuse.Gestures.LinearRangeBehavior", options);
    type->fp_build_ = LinearRangeBehavior_build;
    type->fp_ctor_ = (void*)LinearRangeBehavior__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))LinearRangeBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))LinearRangeBehavior__OnUnrooted_fn;
    type->interface7.fp_OnLostCapture = (void(*)(uObject*, bool*))LinearRangeBehavior__FuseInputIGestureOnLostCapture_fn;
    type->interface7.fp_OnCaptureChanged = (void(*)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int32_t*, int32_t*))LinearRangeBehavior__FuseInputIGestureOnCaptureChanged_fn;
    type->interface7.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int32_t*))LinearRangeBehavior__FuseInputIGestureOnPointerPressed_fn;
    type->interface7.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int32_t*))LinearRangeBehavior__FuseInputIGestureOnPointerMoved_fn;
    type->interface7.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int32_t*))LinearRangeBehavior__FuseInputIGestureOnPointerReleased_fn;
    type->interface7.fp_get_Priority = (void(*)(uObject*, ::g::Fuse::Input::GesturePriorityConfig*))LinearRangeBehavior__FuseInputIGestureget_Priority_fn;
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

// public generated LinearRangeBehavior()
void LinearRangeBehavior__ctor_3_fn(LinearRangeBehavior* __this)
{
    __this->ctor_3();
}

// private float2 get_Direction()
void LinearRangeBehavior__get_Direction_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Direction();
}

// private Fuse.Controls.RangeControl FindRangeControl()
void LinearRangeBehavior__FindRangeControl_fn(LinearRangeBehavior* __this, ::g::Fuse::Controls::RangeControl** __retval)
{
    *__retval = __this->FindRangeControl();
}

// private void Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType how, Fuse.Input.CaptureType prev)
void LinearRangeBehavior__FuseInputIGestureOnCaptureChanged_fn(LinearRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* how, int32_t* prev)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs,Fuse.Input.CaptureType,Fuse.Input.CaptureType)");

    if (uPtr(__this->_gesture)->IsHardCapture())
        ::g::Fuse::Input::Focus::GiveTo(__this->Control);
}

// private void Fuse.Input.IGesture.OnLostCapture(bool forced)
void LinearRangeBehavior__FuseInputIGestureOnLostCapture_fn(LinearRangeBehavior* __this, bool* forced)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "Fuse.Input.IGesture.OnLostCapture(bool)");
    bool forced_ = *forced;

    if (forced_)
        uPtr(__this->Control)->Value(__this->_initialValue);
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs c)
void LinearRangeBehavior__FuseInputIGestureOnPointerMoved_fn(LinearRangeBehavior* __this, ::g::Fuse::Input::PointerMovedArgs* c, int32_t* __retval)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs)");
    __this->_currentCoord = uPtr(c)->WindowPoint();

    if (uPtr(__this->_gesture)->IsHardCapture())
        __this->UpdateValue(uPtr(__this->_boundsElement)->WindowToLocal(__this->_currentCoord));

    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs c)
void LinearRangeBehavior__FuseInputIGestureOnPointerPressed_fn(LinearRangeBehavior* __this, ::g::Fuse::Input::PointerPressedArgs* c, int32_t* __retval)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs)");
    __this->_startCoord = (__this->_currentCoord = uPtr(c)->WindowPoint());
    __this->_initialValue = uPtr(__this->Control)->Value();
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs c)
void LinearRangeBehavior__FuseInputIGestureOnPointerReleased_fn(LinearRangeBehavior* __this, ::g::Fuse::Input::PointerReleasedArgs* c, int32_t* __retval)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs)");
    __this->UpdateValue(uPtr(__this->_boundsElement)->WindowToLocal(uPtr(c)->WindowPoint()));
    return *__retval = 2, void();
}

// private Fuse.Input.GesturePriorityConfig Fuse.Input.IGesture.get_Priority()
void LinearRangeBehavior__FuseInputIGestureget_Priority_fn(LinearRangeBehavior* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval)
{
    return *__retval = ::g::Fuse::Input::GesturePriorityConfig__New1(2, ::g::Fuse::Input::Gesture::VectorSignificance(__this->Direction(), ::g::Uno::Float2__op_Subtraction2(__this->_currentCoord, __this->_startCoord)), 0), void();
}

// public Fuse.Input.GesturePriority get_GesturePriority()
void LinearRangeBehavior__get_GesturePriority_fn(LinearRangeBehavior* __this, int32_t* __retval)
{
    *__retval = __this->GesturePriority();
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value)
void LinearRangeBehavior__set_GesturePriority_fn(LinearRangeBehavior* __this, int32_t* value)
{
    __this->GesturePriority(*value);
}

// public generated LinearRangeBehavior New()
void LinearRangeBehavior__New2_fn(LinearRangeBehavior** __retval)
{
    *__retval = LinearRangeBehavior::New2();
}

// protected override sealed void OnRooted()
void LinearRangeBehavior__OnRooted_fn(LinearRangeBehavior* __this)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->Control = __this->FindRangeControl();

    if (__this->Control == NULL)
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[6/*"RangeControl"*/], __this->Parent(), __this, ::STRINGS[7/*"/usr/local/...*/], 64, ::STRINGS[4/*"OnRooted"*/]);

    __this->_boundsElement = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[0/*Fuse.Elements.Element*/]);

    if (__this->_boundsElement == NULL)
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[8/*"Element"*/], __this->Parent(), __this, ::STRINGS[7/*"/usr/local/...*/], 68, ::STRINGS[4/*"OnRooted"*/]);
    else
        __this->_gesture = ::g::Fuse::Input::Gestures::Add((uObject*)__this, __this->_boundsElement, 1);
}

// protected override sealed void OnUnrooted()
void LinearRangeBehavior__OnUnrooted_fn(LinearRangeBehavior* __this)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnUnrooted()");

    if (__this->_gesture != NULL)
    {
        uPtr(__this->_gesture)->Dispose();
        __this->_gesture = NULL;
    }

    __this->Control = NULL;
    __this->_boundsElement = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public Fuse.Layouts.Orientation get_Orientation()
void LinearRangeBehavior__get_Orientation_fn(LinearRangeBehavior* __this, int32_t* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value)
void LinearRangeBehavior__set_Orientation_fn(LinearRangeBehavior* __this, int32_t* value)
{
    __this->Orientation(*value);
}

// private double PositionToValue(float2 pos)
void LinearRangeBehavior__PositionToValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos, double* __retval)
{
    *__retval = __this->PositionToValue(*pos);
}

// private void UpdateValue(float2 pos)
void LinearRangeBehavior__UpdateValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos)
{
    __this->UpdateValue(*pos);
}

// public generated LinearRangeBehavior() [instance]
void LinearRangeBehavior::ctor_3()
{
    _gesturePriority = 2;
    _initialValue = 0.0;
    ctor_2();
}

// private float2 get_Direction() [instance]
::g::Uno::Float2 LinearRangeBehavior::Direction()
{
    return (Orientation() == 0) ? ::g::Uno::Float2__New2(1.0f, 0.0f) : ::g::Uno::Float2__New2(0.0f, 1.0f);
}

// private Fuse.Controls.RangeControl FindRangeControl() [instance]
::g::Fuse::Controls::RangeControl* LinearRangeBehavior::FindRangeControl()
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "FindRangeControl()");
    ::g::Fuse::Visual* p = Parent();

    while ((p != NULL) && !uIs(p, ::TYPES[1/*Fuse.Controls.RangeControl*/]))
        p = uPtr(p)->Parent();

    return uAs< ::g::Fuse::Controls::RangeControl*>(p, ::TYPES[1/*Fuse.Controls.RangeControl*/]);
}

// public Fuse.Input.GesturePriority get_GesturePriority() [instance]
int32_t LinearRangeBehavior::GesturePriority()
{
    return _gesturePriority;
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value) [instance]
void LinearRangeBehavior::GesturePriority(int32_t value)
{
    _gesturePriority = value;
}

// public Fuse.Layouts.Orientation get_Orientation() [instance]
int32_t LinearRangeBehavior::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance]
void LinearRangeBehavior::Orientation(int32_t value)
{
    _orientation = value;
}

// private double PositionToValue(float2 pos) [instance]
double LinearRangeBehavior::PositionToValue(::g::Uno::Float2 pos)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "PositionToValue(float2)");

    if (Orientation() == 1)
        return (double)(pos.Y / uPtr(_boundsElement)->ActualSize().Y);

    return (double)(pos.X / uPtr(_boundsElement)->ActualSize().X);
}

// private void UpdateValue(float2 pos) [instance]
void LinearRangeBehavior::UpdateValue(::g::Uno::Float2 pos)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "UpdateValue(float2)");
    double step = uPtr(Control)->RelativeUserStep();
    double r = PositionToValue(pos);
    double q = (step > 0.0) ? ::g::Uno::Math::Round(r / step) * step : r;
    uPtr(Control)->RelativeValue(::g::Uno::Math::Clamp(q, 0.0, 1.0));
}

// public generated LinearRangeBehavior New() [static]
LinearRangeBehavior* LinearRangeBehavior::New2()
{
    LinearRangeBehavior* obj1 = (LinearRangeBehavior*)uNew(LinearRangeBehavior_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/LongPress.uno
// ----------------------------------------------------------------

// public sealed class LongPressed
// {
static void LongPressed_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Gestures::LongPressedHandler_typeof();
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
    type->SetFields(42,
        ::TYPES[17/*Fuse.Gestures.LongPressedHandler*/], offsetof(LongPressed, Handler1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("add_Handler", NULL, (void*)LongPressed__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[17/*Fuse.Gestures.LongPressedHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)LongPressed__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[17/*Fuse.Gestures.LongPressedHandler*/]),
        new uFunction(".ctor", NULL, (void*)LongPressed__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* LongPressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(LongPressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.LongPressed", options);
    type->fp_build_ = LongPressed_build;
    type->fp_ctor_ = (void*)LongPressed__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))LongPressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))LongPressed__OnUnrooted_fn;
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

// public generated LongPressed()
void LongPressed__ctor_6_fn(LongPressed* __this)
{
    __this->ctor_6();
}

// public generated void add_Handler(Fuse.Gestures.LongPressedHandler value)
void LongPressed__add_Handler_fn(LongPressed* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.LongPressedHandler value)
void LongPressed__remove_Handler_fn(LongPressed* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated LongPressed New()
void LongPressed__New2_fn(LongPressed** __retval)
{
    *__retval = LongPressed::New2();
}

// private void OnLongPressed(Fuse.Input.PointerEventArgs args, int count)
void LongPressed__OnLongPressed_fn(LongPressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* count)
{
    __this->OnLongPressed(args, *count);
}

// protected override sealed void OnRooted()
void LongPressed__OnRooted_fn(LongPressed* __this)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_LongPressedEvent(uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], (void*)LongPressed__OnLongPressed_fn, __this));
}

// protected override sealed void OnUnrooted()
void LongPressed__OnUnrooted_fn(LongPressed* __this)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_LongPressedEvent(uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], (void*)LongPressed__OnLongPressed_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public generated LongPressed() [instance]
void LongPressed::ctor_6()
{
    ctor_5();
}

// public generated void add_Handler(Fuse.Gestures.LongPressedHandler value) [instance]
void LongPressed::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "add_Handler(Fuse.Gestures.LongPressedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[17/*Fuse.Gestures.LongPressedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.LongPressedHandler value) [instance]
void LongPressed::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "remove_Handler(Fuse.Gestures.LongPressedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[17/*Fuse.Gestures.LongPressedHandler*/]);
}

// private void OnLongPressed(Fuse.Input.PointerEventArgs args, int count) [instance]
void LongPressed::OnLongPressed(::g::Fuse::Input::PointerEventArgs* args, int32_t count)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "OnLongPressed(Fuse.Input.PointerEventArgs,int)");

    if (!Accept(args))
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::LongPressedArgs*)::g::Fuse::Gestures::LongPressedArgs::New3(args, Parent()));
}

// public generated LongPressed New() [static]
LongPressed* LongPressed::New2()
{
    LongPressed* obj1 = (LongPressed*)uNew(LongPressed_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/LongPress.uno
// ----------------------------------------------------------------

// public sealed class LongPressedArgs
// {
static void LongPressedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LongPressedArgs__New3_fn, 0, true, type, 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* LongPressedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::CustomPointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LongPressedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.LongPressedArgs", options);
    type->fp_build_ = LongPressedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public LongPressedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual)
void LongPressedArgs__ctor_4_fn(LongPressedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public LongPressedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual)
void LongPressedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, LongPressedArgs** __retval)
{
    *__retval = LongPressedArgs::New3(args, visual);
}

// public LongPressedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance]
void LongPressedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.LongPressedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Visual)");
    ctor_3(args, visual);
}

// public LongPressedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static]
LongPressedArgs* LongPressedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    LongPressedArgs* obj1 = (LongPressedArgs*)uNew(LongPressedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/LongPress.uno
// ----------------------------------------------------------------

// public delegate void LongPressedHandler(object sender, Fuse.Gestures.LongPressedArgs args)
uDelegateType* LongPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.LongPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::LongPressedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Scroller.uno
// --------------------------------------------------------------------------

// private enum Scroller.MoveUserFlags
uEnumType* Scroller__MoveUserFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Scroller.MoveUserFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Started", 1LL,
        "Release", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/PanGesture.uno
// -----------------------------------------------------------------

// public sealed class PanGesture
// {
static void PanGesture_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[19] = ::g::Fuse::Gestures::Internal::TwoFingerTranslateHandler_typeof();
    ::TYPES[20] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[21] = ::g::Fuse::Gestures::ISizeConstraint_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface6));
    type->SetFields(22,
        ::g::Uno::Float2_typeof(), offsetof(PanGesture, _startTranslation), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(PanGesture, _startTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(PanGesture, _invTransform), 0,
        ::g::Uno::Float2_typeof(), offsetof(PanGesture, _screenPrevTranslation), 0,
        ::g::Uno::Float2_typeof(), offsetof(PanGesture, _screenStartTranslation), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(PanGesture, _constrainElement), 0,
        ::TYPES[21/*Fuse.Gestures.ISizeConstraint*/], offsetof(PanGesture, _sizeConstraint), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_ConstrainElement", NULL, (void*)PanGesture__get_ConstrainElement_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_ConstrainElement", NULL, (void*)PanGesture__set_ConstrainElement_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("get_Constraint", NULL, (void*)PanGesture__get_Constraint_fn, 0, false, ::TYPES[21/*Fuse.Gestures.ISizeConstraint*/], 0),
        new uFunction("set_Constraint", NULL, (void*)PanGesture__set_Constraint_fn, 0, false, uVoid_typeof(), 1, ::TYPES[21/*Fuse.Gestures.ISizeConstraint*/]),
        new uFunction(".ctor", NULL, (void*)PanGesture__New2_fn, 0, true, type, 1, ::g::Fuse::Elements::InteractiveTransform_typeof()));
}

::g::Fuse::Gestures::TransformGesture_type* PanGesture_typeof()
{
    static uSStrong< ::g::Fuse::Gestures::TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::TransformGesture_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PanGesture);
    options.TypeSize = sizeof(::g::Fuse::Gestures::TransformGesture_type);
    type = (::g::Fuse::Gestures::TransformGesture_type*)uClassType::New("Fuse.Gestures.PanGesture", options);
    type->fp_build_ = PanGesture_build;
    type->fp_OnEnded = (void(*)(::g::Fuse::Gestures::TransformGesture*))PanGesture__OnEnded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PanGesture__OnRooted_fn;
    type->fp_OnStarted = (void(*)(::g::Fuse::Gestures::TransformGesture*))PanGesture__OnStarted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PanGesture__OnUnrooted_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Gestures::TransformGesture*))PanGesture__OnUpdate_fn;
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

// public PanGesture(Fuse.Elements.InteractiveTransform target)
void PanGesture__ctor_4_fn(PanGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_4(target);
}

// public Fuse.Elements.Element get_ConstrainElement()
void PanGesture__get_ConstrainElement_fn(PanGesture* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->ConstrainElement();
}

// public void set_ConstrainElement(Fuse.Elements.Element value)
void PanGesture__set_ConstrainElement_fn(PanGesture* __this, ::g::Fuse::Elements::Element* value)
{
    __this->ConstrainElement(value);
}

// public Fuse.Gestures.ISizeConstraint get_Constraint()
void PanGesture__get_Constraint_fn(PanGesture* __this, uObject** __retval)
{
    *__retval = __this->Constraint();
}

// public void set_Constraint(Fuse.Gestures.ISizeConstraint value)
void PanGesture__set_Constraint_fn(PanGesture* __this, uObject* value)
{
    __this->Constraint(value);
}

// public PanGesture New(Fuse.Elements.InteractiveTransform target)
void PanGesture__New2_fn(::g::Fuse::Elements::InteractiveTransform* target, PanGesture** __retval)
{
    *__retval = PanGesture::New2(target);
}

// protected override sealed void OnEnded()
void PanGesture__OnEnded_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnEnded()");
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->Region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
    __this->CheckNeedUpdate();
}

// protected override sealed void OnRooted()
void PanGesture__OnRooted_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnRooted()");
    ::g::Fuse::Gestures::TransformGesture__OnRooted_fn(__this);
    uPtr(__this->Impl)->add_Translated(uDelegate::New(::TYPES[19/*Fuse.Gestures.Internal.TwoFingerTranslateHandler*/], (void*)PanGesture__OnTranslated_fn, __this));
}

// protected override sealed void OnStarted()
void PanGesture__OnStarted_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnStarted()");
    ::g::Uno::Float4 ind1;
    __this->_startTranslation = uPtr(__this->Target())->Translation();
    __this->_startTransform = ::g::Fuse::FastMatrix::Identity();
    uPtr(__this->Target())->AppendRotationScale(__this->_startTransform);
    __this->_invTransform = ::g::Uno::Matrix::Invert2(uPtr(__this->_startTransform)->Matrix());
    __this->_screenStartTranslation = (__this->_screenPrevTranslation = (ind1 = ::g::Uno::Vector::Transform1(__this->_startTranslation, uPtr(__this->_startTransform)->Matrix()), ::g::Uno::Float2__New2(ind1.X, ind1.Y)));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[20/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(__this->_screenStartTranslation));
    __this->UpdateConstraint();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->Region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]));
    __this->CheckNeedUpdate();
}

// private void OnTranslated(float2 dist)
void PanGesture__OnTranslated_fn(PanGesture* __this, ::g::Uno::Float2* dist)
{
    __this->OnTranslated(*dist);
}

// protected override sealed void OnUnrooted()
void PanGesture__OnUnrooted_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnUnrooted()");
    uPtr(__this->Impl)->remove_Translated(uDelegate::New(::TYPES[19/*Fuse.Gestures.Internal.TwoFingerTranslateHandler*/], (void*)PanGesture__OnTranslated_fn, __this));
    ::g::Fuse::Gestures::TransformGesture__OnUnrooted_fn(__this);
}

// protected override sealed void OnUpdate()
void PanGesture__OnUpdate_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnUpdate()");
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float2 ret6;
    uPtr(__this->Target())->Translation((ind3 = ::g::Uno::Vector::Transform1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[20/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret6), ret6), __this->_invTransform), ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
}

// internal float4 get_TranslationConstraint()
void PanGesture__get_TranslationConstraint_fn(PanGesture* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TranslationConstraint();
}

// private void UpdateConstraint()
void PanGesture__UpdateConstraint_fn(PanGesture* __this)
{
    __this->UpdateConstraint();
}

// public PanGesture(Fuse.Elements.InteractiveTransform target) [instance]
void PanGesture::ctor_4(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.PanGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    ctor_3(target);
}

// public Fuse.Elements.Element get_ConstrainElement() [instance]
::g::Fuse::Elements::Element* PanGesture::ConstrainElement()
{
    return _constrainElement;
}

// public void set_ConstrainElement(Fuse.Elements.Element value) [instance]
void PanGesture::ConstrainElement(::g::Fuse::Elements::Element* value)
{
    _constrainElement = value;
}

// public Fuse.Gestures.ISizeConstraint get_Constraint() [instance]
uObject* PanGesture::Constraint()
{
    return _sizeConstraint;
}

// public void set_Constraint(Fuse.Gestures.ISizeConstraint value) [instance]
void PanGesture::Constraint(uObject* value)
{
    _sizeConstraint = value;
}

// private void OnTranslated(float2 dist) [instance]
void PanGesture::OnTranslated(::g::Uno::Float2 dist)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnTranslated(float2)");
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float2 ret5;
    UpdateConstraint();
    ::g::Uno::Float2 screen = ::g::Uno::Float2__op_Addition2(_screenStartTranslation, dist);
    ::g::Uno::Float2 step = ::g::Uno::Float2__op_Subtraction2(screen, _screenPrevTranslation);
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(Region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), step);
    _screenPrevTranslation = screen;
    uPtr(Target())->Translation((ind2 = ::g::Uno::Vector::Transform1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(Region), ::TYPES[20/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret5), ret5), _invTransform), ::g::Uno::Float2__New2(ind2.X, ind2.Y)));
}

// internal float4 get_TranslationConstraint() [instance]
::g::Uno::Float4 PanGesture::TranslationConstraint()
{
    uStackFrame __("Fuse.Gestures.PanGesture", "get_TranslationConstraint()");
    bool hasSize = false;
    ::g::Uno::Float2 size = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 trimSize = ::g::Uno::Float2__New1(0.0f);

    if (_constrainElement != NULL)
    {
        size = uPtr(_constrainElement)->ActualSize();
        hasSize = true;
    }

    if (_sizeConstraint != NULL)
    {
        size = ::g::Fuse::Gestures::ISizeConstraint::ContentSize(uInterface(uPtr(_sizeConstraint), ::TYPES[21/*Fuse.Gestures.ISizeConstraint*/]));
        trimSize = ::g::Fuse::Gestures::ISizeConstraint::TrimSize(uInterface(uPtr(_sizeConstraint), ::TYPES[21/*Fuse.Gestures.ISizeConstraint*/]));
        hasSize = true;
    }

    if (hasSize)
    {
        ::g::Fuse::FastMatrix* trans = ::g::Fuse::FastMatrix::Identity();
        uPtr(Target())->AppendRotationScale(trans);
        ::g::Uno::Rect rect = ::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_UnaryNegation(size), 2.0f), size);
        ::g::Uno::Rect bounds = ::g::Uno::Rect__Transform(rect, uPtr(trans)->Matrix());
        ::g::Uno::Float2 full = bounds.Maximum();
        ::g::Uno::Float2 over = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(full, ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(size, trimSize), 2.0f)));
        ::g::Uno::Float4 c = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(over), over);
        return c;
    }

    return ::g::Uno::Float4__New2(-FLT_INF, -FLT_INF, FLT_INF, FLT_INF);
}

// private void UpdateConstraint() [instance]
void PanGesture::UpdateConstraint()
{
    uStackFrame __("Fuse.Gestures.PanGesture", "UpdateConstraint()");
    ::g::Uno::Float4 c = TranslationConstraint();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(Region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(c.X, c.Y));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(Region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(c.Z, c.W));
}

// public PanGesture New(Fuse.Elements.InteractiveTransform target) [static]
PanGesture* PanGesture::New2(::g::Fuse::Elements::InteractiveTransform* target)
{
    PanGesture* obj4 = (PanGesture*)uNew(PanGesture_typeof());
    obj4->ctor_4(target);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/PointerCapture.uno
// ---------------------------------------------------------------------

// public sealed class PointerCapture
// {
// static generated PointerCapture()
static void PointerCapture__cctor_1_fn(uType* __type)
{
    PointerCapture::IsActiveName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"IsActive"*/]);
}

static void PointerCapture_build(uType* type)
{
    ::STRINGS[9] = uString::Const("IsActive");
    type->SetDependencies(
        ::g::Fuse::Input::Gestures_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PointerCapture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(PointerCapture_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(PointerCapture_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(PointerCapture_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(PointerCapture_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PointerCapture_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PointerCapture_type, interface6),
        ::g::Fuse::Input::IGesture_typeof(), offsetof(PointerCapture_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(PointerCapture_type, interface8));
    type->SetFields(18,
        ::g::Fuse::Gestures::PointerCaptureOn_typeof(), offsetof(PointerCapture, _on), 0,
        ::g::Uno::Bool_typeof(), offsetof(PointerCapture, _isActive), 0,
        ::g::Fuse::Input::Gesture_typeof(), offsetof(PointerCapture, _gesture), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PointerCapture::IsActiveName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("get_IsActive", NULL, (void*)PointerCapture__get_IsActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsActive", NULL, (void*)PointerCapture__set_IsActive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)PointerCapture__New2_fn, 0, true, type, 0),
        new uFunction("get_On", NULL, (void*)PointerCapture__get_On_fn, 0, false, ::g::Fuse::Gestures::PointerCaptureOn_typeof(), 0),
        new uFunction("set_On", NULL, (void*)PointerCapture__set_On_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::PointerCaptureOn_typeof()),
        new uFunction("SetIsActive", NULL, (void*)PointerCapture__SetIsActive_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

PointerCapture_type* PointerCapture_typeof()
{
    static uSStrong<PointerCapture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PointerCapture);
    options.TypeSize = sizeof(PointerCapture_type);
    type = (PointerCapture_type*)uClassType::New("Fuse.Gestures.PointerCapture", options);
    type->fp_build_ = PointerCapture_build;
    type->fp_ctor_ = (void*)PointerCapture__New2_fn;
    type->fp_cctor_ = PointerCapture__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PointerCapture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PointerCapture__OnUnrooted_fn;
    type->interface7.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int32_t*))PointerCapture__FuseInputIGestureOnPointerPressed_fn;
    type->interface7.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int32_t*))PointerCapture__FuseInputIGestureOnPointerMoved_fn;
    type->interface7.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int32_t*))PointerCapture__FuseInputIGestureOnPointerReleased_fn;
    type->interface7.fp_OnCaptureChanged = (void(*)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int32_t*, int32_t*))PointerCapture__FuseInputIGestureOnCaptureChanged_fn;
    type->interface7.fp_OnLostCapture = (void(*)(uObject*, bool*))PointerCapture__FuseInputIGestureOnLostCapture_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))PointerCapture__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface7.fp_get_Priority = (void(*)(uObject*, ::g::Fuse::Input::GesturePriorityConfig*))PointerCapture__FuseInputIGestureget_Priority_fn;
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

// public generated PointerCapture()
void PointerCapture__ctor_3_fn(PointerCapture* __this)
{
    __this->ctor_3();
}

// private void Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType how, Fuse.Input.CaptureType prev)
void PointerCapture__FuseInputIGestureOnCaptureChanged_fn(PointerCapture* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* how, int32_t* prev)
{
    uStackFrame __("Fuse.Gestures.PointerCapture", "Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs,Fuse.Input.CaptureType,Fuse.Input.CaptureType)");
    __this->SetIsActive(true, (uObject*)__this->_gesture);
}

// private void Fuse.Input.IGesture.OnLostCapture(bool forced)
void PointerCapture__FuseInputIGestureOnLostCapture_fn(PointerCapture* __this, bool* forced)
{
    uStackFrame __("Fuse.Gestures.PointerCapture", "Fuse.Input.IGesture.OnLostCapture(bool)");
    __this->SetIsActive(false, (uObject*)__this->_gesture);
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs args)
void PointerCapture__FuseInputIGestureOnPointerMoved_fn(PointerCapture* __this, ::g::Fuse::Input::PointerMovedArgs* args, int32_t* __retval)
{
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs args)
void PointerCapture__FuseInputIGestureOnPointerPressed_fn(PointerCapture* __this, ::g::Fuse::Input::PointerPressedArgs* args, int32_t* __retval)
{
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs args)
void PointerCapture__FuseInputIGestureOnPointerReleased_fn(PointerCapture* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int32_t* __retval)
{
    return *__retval = 2, void();
}

// private Fuse.Input.GesturePriorityConfig Fuse.Input.IGesture.get_Priority()
void PointerCapture__FuseInputIGestureget_Priority_fn(PointerCapture* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval)
{
    return *__retval = ::g::Fuse::Input::GesturePriorityConfig__New1(2, 0.0f, 0), void();
}

// public bool get_IsActive()
void PointerCapture__get_IsActive_fn(PointerCapture* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value)
void PointerCapture__set_IsActive_fn(PointerCapture* __this, bool* value)
{
    __this->IsActive(*value);
}

// public generated PointerCapture New()
void PointerCapture__New2_fn(PointerCapture** __retval)
{
    *__retval = PointerCapture::New2();
}

// public Fuse.Gestures.PointerCaptureOn get_On()
void PointerCapture__get_On_fn(PointerCapture* __this, int32_t* __retval)
{
    *__retval = __this->On();
}

// public void set_On(Fuse.Gestures.PointerCaptureOn value)
void PointerCapture__set_On_fn(PointerCapture* __this, int32_t* value)
{
    __this->On(*value);
}

// protected override sealed void OnRooted()
void PointerCapture__OnRooted_fn(PointerCapture* __this)
{
    uStackFrame __("Fuse.Gestures.PointerCapture", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);

    if (__this->On() == 1)
        __this->_gesture = ::g::Fuse::Input::Gestures::Add((uObject*)__this, __this->Parent(), 5);
}

// protected override sealed void OnUnrooted()
void PointerCapture__OnUnrooted_fn(PointerCapture* __this)
{
    uStackFrame __("Fuse.Gestures.PointerCapture", "OnUnrooted()");

    if (__this->_gesture != NULL)
    {
        uPtr(__this->_gesture)->Dispose();
        __this->_gesture = NULL;
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin)
void PointerCapture__SetIsActive_fn(PointerCapture* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector value)
void PointerCapture__UnoUXIPropertyListenerOnPropertyChanged_fn(PointerCapture* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* value)
{
}

::g::Uno::UX::Selector PointerCapture::IsActiveName_;

// public generated PointerCapture() [instance]
void PointerCapture::ctor_3()
{
    ctor_2();
}

// public bool get_IsActive() [instance]
bool PointerCapture::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance]
void PointerCapture::IsActive(bool value)
{
    uStackFrame __("Fuse.Gestures.PointerCapture", "set_IsActive(bool)");
    SetIsActive(value, (uObject*)this);
}

// public Fuse.Gestures.PointerCaptureOn get_On() [instance]
int32_t PointerCapture::On()
{
    return _on;
}

// public void set_On(Fuse.Gestures.PointerCaptureOn value) [instance]
void PointerCapture::On(int32_t value)
{
    if (value == _on)
        return;

    _on = value;
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) [instance]
void PointerCapture::SetIsActive(bool value, uObject* origin)
{
    uStackFrame __("Fuse.Gestures.PointerCapture", "SetIsActive(bool,Uno.UX.IPropertyListener)");

    if (value == _isActive)
        return;

    _isActive = value;
    OnPropertyChanged1(PointerCapture::IsActiveName_, origin);

    if (((_gesture != NULL) && (origin != _gesture)) && !_isActive)
        uPtr(_gesture)->Dispose();
}

// public generated PointerCapture New() [static]
PointerCapture* PointerCapture::New2()
{
    PointerCapture* obj1 = (PointerCapture*)uNew(PointerCapture_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/PointerCapture.uno
// ---------------------------------------------------------------------

// public enum PointerCaptureOn
uEnumType* PointerCaptureOn_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.PointerCaptureOn", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Pressed", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Pressed.uno
// --------------------------------------------------------------

// public sealed class Pressed
// {
static void Pressed_build(uType* type)
{
    ::TYPES[22] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Pointer_typeof());
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
        new uFunction(".ctor", NULL, (void*)Pressed__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* Pressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 39;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Pressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Pressed", options);
    type->fp_build_ = Pressed_build;
    type->fp_ctor_ = (void*)Pressed__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Pressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Pressed__OnUnrooted_fn;
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

// public generated Pressed()
void Pressed__ctor_5_fn(Pressed* __this)
{
    __this->ctor_5();
}

// public generated Pressed New()
void Pressed__New2_fn(Pressed** __retval)
{
    *__retval = Pressed::New2();
}

// private void OnPressed(object s, object a)
void Pressed__OnPressed_fn(Pressed* __this, uObject* s, uObject* a)
{
    __this->OnPressed(s, a);
}

// protected override sealed void OnRooted()
void Pressed__OnRooted_fn(Pressed* __this)
{
    uStackFrame __("Fuse.Gestures.Pressed", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[22/*Fuse.Input.PointerPressedHandler*/], (void*)Pressed__OnPressed_fn, __this));
}

// protected override sealed void OnUnrooted()
void Pressed__OnUnrooted_fn(Pressed* __this)
{
    uStackFrame __("Fuse.Gestures.Pressed", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[22/*Fuse.Input.PointerPressedHandler*/], (void*)Pressed__OnPressed_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Pressed() [instance]
void Pressed::ctor_5()
{
    ctor_4();
}

// private void OnPressed(object s, object a) [instance]
void Pressed::OnPressed(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.Pressed", "OnPressed(object,object)");
    Pulse();
}

// public generated Pressed New() [static]
Pressed* Pressed::New2()
{
    Pressed* obj1 = (Pressed*)uNew(Pressed_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Released.uno
// ---------------------------------------------------------------

// public sealed class Released
// {
static void Released_build(uType* type)
{
    ::TYPES[23] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Pointer_typeof());
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
        new uFunction(".ctor", NULL, (void*)Released__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* Released_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 39;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Released);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Released", options);
    type->fp_build_ = Released_build;
    type->fp_ctor_ = (void*)Released__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Released__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Released__OnUnrooted_fn;
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

// public generated Released()
void Released__ctor_5_fn(Released* __this)
{
    __this->ctor_5();
}

// public generated Released New()
void Released__New2_fn(Released** __retval)
{
    *__retval = Released::New2();
}

// private void OnReleased(object s, object a)
void Released__OnReleased_fn(Released* __this, uObject* s, uObject* a)
{
    __this->OnReleased(s, a);
}

// protected override sealed void OnRooted()
void Released__OnRooted_fn(Released* __this)
{
    uStackFrame __("Fuse.Gestures.Released", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[23/*Fuse.Input.PointerReleasedHandler*/], (void*)Released__OnReleased_fn, __this));
}

// protected override sealed void OnUnrooted()
void Released__OnUnrooted_fn(Released* __this)
{
    uStackFrame __("Fuse.Gestures.Released", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[23/*Fuse.Input.PointerReleasedHandler*/], (void*)Released__OnReleased_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Released() [instance]
void Released::ctor_5()
{
    ctor_4();
}

// private void OnReleased(object s, object a) [instance]
void Released::OnReleased(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.Released", "OnReleased(object,object)");
    Pulse();
}

// public generated Released New() [static]
Released* Released::New2()
{
    Released* obj1 = (Released*)uNew(Released_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/RotateGesture.uno
// --------------------------------------------------------------------

// public sealed class RotateGesture
// {
static void RotateGesture_build(uType* type)
{
    ::TYPES[24] = ::g::Fuse::Gestures::Internal::TwoFingerRotateHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[20] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface6));
    type->SetFields(22,
        ::g::Uno::Float_typeof(), offsetof(RotateGesture, _startRotation), 0,
        ::g::Uno::Float_typeof(), offsetof(RotateGesture, _Step), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)RotateGesture__New2_fn, 0, true, type, 1, ::g::Fuse::Elements::InteractiveTransform_typeof()),
        new uFunction("get_Step", NULL, (void*)RotateGesture__get_Step_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Step", NULL, (void*)RotateGesture__set_Step_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_StepDegrees", NULL, (void*)RotateGesture__get_StepDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StepDegrees", NULL, (void*)RotateGesture__set_StepDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Gestures::TransformGesture_type* RotateGesture_typeof()
{
    static uSStrong< ::g::Fuse::Gestures::TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::TransformGesture_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RotateGesture);
    options.TypeSize = sizeof(::g::Fuse::Gestures::TransformGesture_type);
    type = (::g::Fuse::Gestures::TransformGesture_type*)uClassType::New("Fuse.Gestures.RotateGesture", options);
    type->fp_build_ = RotateGesture_build;
    type->fp_OnEnded = (void(*)(::g::Fuse::Gestures::TransformGesture*))RotateGesture__OnEnded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))RotateGesture__OnRooted_fn;
    type->fp_OnStarted = (void(*)(::g::Fuse::Gestures::TransformGesture*))RotateGesture__OnStarted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RotateGesture__OnUnrooted_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Gestures::TransformGesture*))RotateGesture__OnUpdate_fn;
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

// public RotateGesture(Fuse.Elements.InteractiveTransform target)
void RotateGesture__ctor_4_fn(RotateGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_4(target);
}

// public RotateGesture New(Fuse.Elements.InteractiveTransform target)
void RotateGesture__New2_fn(::g::Fuse::Elements::InteractiveTransform* target, RotateGesture** __retval)
{
    *__retval = RotateGesture::New2(target);
}

// protected override sealed void OnEnded()
void RotateGesture__OnEnded_fn(RotateGesture* __this)
{
}

// protected override sealed void OnRooted()
void RotateGesture__OnRooted_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnRooted()");
    ::g::Fuse::Gestures::TransformGesture__OnRooted_fn(__this);
    uPtr(__this->Impl)->add_Rotated(uDelegate::New(::TYPES[24/*Fuse.Gestures.Internal.TwoFingerRotateHandler*/], (void*)RotateGesture__OnRotated_fn, __this));
}

// private void OnRotated(float angle)
void RotateGesture__OnRotated_fn(RotateGesture* __this, float* angle)
{
    __this->OnRotated(*angle);
}

// protected override sealed void OnStarted()
void RotateGesture__OnStarted_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnStarted()");
    __this->_startRotation = uPtr(__this->Target())->Rotation();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(__this->Region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(__this->_startRotation, 0.0f));
}

// protected override sealed void OnUnrooted()
void RotateGesture__OnUnrooted_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnUnrooted()");
    uPtr(__this->Impl)->remove_Rotated(uDelegate::New(::TYPES[24/*Fuse.Gestures.Internal.TwoFingerRotateHandler*/], (void*)RotateGesture__OnRotated_fn, __this));
    ::g::Fuse::Gestures::TransformGesture__OnUnrooted_fn(__this);
}

// protected override sealed void OnUpdate()
void RotateGesture__OnUpdate_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnUpdate()");
    ::g::Uno::Float2 ret2;
    uPtr(__this->Target())->Rotation((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[20/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret2), ret2).X);
}

// public generated float get_Step()
void RotateGesture__get_Step_fn(RotateGesture* __this, float* __retval)
{
    *__retval = __this->Step();
}

// public generated void set_Step(float value)
void RotateGesture__set_Step_fn(RotateGesture* __this, float* value)
{
    __this->Step(*value);
}

// public float get_StepDegrees()
void RotateGesture__get_StepDegrees_fn(RotateGesture* __this, float* __retval)
{
    *__retval = __this->StepDegrees();
}

// public void set_StepDegrees(float value)
void RotateGesture__set_StepDegrees_fn(RotateGesture* __this, float* value)
{
    __this->StepDegrees(*value);
}

// public RotateGesture(Fuse.Elements.InteractiveTransform target) [instance]
void RotateGesture::ctor_4(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    ctor_3(target);
    Region = (uObject*)::g::Fuse::Motion::Simulation::BasicBoundedRegion2D::CreateRadians();
}

// private void OnRotated(float angle) [instance]
void RotateGesture::OnRotated(float angle)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnRotated(float)");
    float q = _startRotation + angle;

    if (Step() > 0.0f)
    {
        float s = ::g::Uno::Math::Floor1((q / Step()) + 0.5f) * Step();
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(Region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(s, 0.0f));
        CheckNeedUpdate();
    }
    else
        uPtr(Target())->Rotation(q);
}

// public generated float get_Step() [instance]
float RotateGesture::Step()
{
    return _Step;
}

// public generated void set_Step(float value) [instance]
void RotateGesture::Step(float value)
{
    _Step = value;
}

// public float get_StepDegrees() [instance]
float RotateGesture::StepDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(Step());
}

// public void set_StepDegrees(float value) [instance]
void RotateGesture::StepDegrees(float value)
{
    Step(::g::Uno::Math::DegreesToRadians1(value));
}

// public RotateGesture New(Fuse.Elements.InteractiveTransform target) [static]
RotateGesture* RotateGesture::New2(::g::Fuse::Elements::InteractiveTransform* target)
{
    RotateGesture* obj1 = (RotateGesture*)uNew(RotateGesture_typeof());
    obj1->ctor_4(target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Scroller.Actions.uno
// ----------------------------------------------------------------------------------

// public sealed class ScrollableGoto
// {
static void ScrollableGoto_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Use ScrollTo instead, it has the same interface");
    ::STRINGS[11] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Scroller.Actions.uno");
    ::STRINGS[12] = uString::Const(".ctor");
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrollableGoto__New3_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollableGoto_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ScrollTo_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ScrollableGoto);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ScrollableGoto", options);
    type->fp_build_ = ScrollableGoto_build;
    type->fp_ctor_ = (void*)ScrollableGoto__New3_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public ScrollableGoto()
void ScrollableGoto__ctor_3_fn(ScrollableGoto* __this)
{
    __this->ctor_3();
}

// public ScrollableGoto New()
void ScrollableGoto__New3_fn(ScrollableGoto** __retval)
{
    *__retval = ScrollableGoto::New3();
}

// public ScrollableGoto() [instance]
void ScrollableGoto::ctor_3()
{
    ctor_2();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[10/*"Use ScrollT...*/], this, ::STRINGS[11/*"/usr/local/...*/], 131, ::STRINGS[12/*".ctor"*/]);
}

// public ScrollableGoto New() [static]
ScrollableGoto* ScrollableGoto::New3()
{
    ScrollableGoto* obj1 = (ScrollableGoto*)uNew(ScrollableGoto_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Scroller.uno
// --------------------------------------------------------------------------

// public sealed class Scroller
// {
// static generated Scroller()
static void Scroller__cctor_1_fn(uType* __type)
{
    Scroller::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(1.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
    Scroller::_verticalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(1.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f)));
}

static void Scroller_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Input::Gestures_typeof(),
        ::g::Uno::Math_typeof(),
        ::g::Fuse::Controls::ScrollViewBase_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Scroller_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Scroller_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Scroller_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Scroller_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Scroller_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Scroller_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Scroller_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Scroller_type, interface7),
        ::g::Fuse::Input::IGesture_typeof(), offsetof(Scroller_type, interface8));
    type->SetFields(18,
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(Scroller, _region), 0,
        ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL), offsetof(Scroller, _velocity), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _delayStart), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(Scroller, _scrollable), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _pointerListening), 0,
        ::g::Fuse::Input::Gesture_typeof(), offsetof(Scroller, _gesture), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _hasUpdated), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _updateFirstFrame), 0,
        ::g::Uno::Int_typeof(), offsetof(Scroller, _down), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _pointerPos), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _prevPos), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _startPos), 0,
        ::g::Uno::Double_typeof(), offsetof(Scroller, _prevTime), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _softCaptureStart), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _softCaptureCurrent), 0,
        ::g::Uno::Float_typeof(), offsetof(Scroller, _significance), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _pressed), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Scroller, _pendingBringIntoView), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&Scroller::_horizontalGesture_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&Scroller::_verticalGesture_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("CheckLimits", NULL, (void*)Scroller__CheckLimits_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_DelayStart", NULL, (void*)Scroller__get_DelayStart_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_DelayStart", NULL, (void*)Scroller__set_DelayStart_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Goto", NULL, (void*)Scroller__Goto_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)Scroller__New2_fn, 0, true, type, 0),
        new uFunction("get_OverflowExtent", NULL, (void*)Scroller__get_OverflowExtent_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_UserScroll", NULL, (void*)Scroller__get_UserScroll_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UserScroll", NULL, (void*)Scroller__set_UserScroll_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

Scroller_type* Scroller_typeof()
{
    static uSStrong<Scroller_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 38;
    options.InterfaceCount = 9;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(Scroller);
    options.TypeSize = sizeof(Scroller_type);
    type = (Scroller_type*)uClassType::New("Fuse.Gestures.Scroller", options);
    type->fp_build_ = Scroller_build;
    type->fp_ctor_ = (void*)Scroller__New2_fn;
    type->fp_cctor_ = Scroller__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Scroller__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Scroller__OnUnrooted_fn;
    type->interface8.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int32_t*))Scroller__FuseInputIGestureOnPointerPressed_fn;
    type->interface8.fp_OnCaptureChanged = (void(*)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int32_t*, int32_t*))Scroller__FuseInputIGestureOnCaptureChanged_fn;
    type->interface8.fp_OnLostCapture = (void(*)(uObject*, bool*))Scroller__FuseInputIGestureOnLostCapture_fn;
    type->interface8.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int32_t*))Scroller__FuseInputIGestureOnPointerMoved_fn;
    type->interface8.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int32_t*))Scroller__FuseInputIGestureOnPointerReleased_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface8.fp_get_Priority = (void(*)(uObject*, ::g::Fuse::Input::GesturePriorityConfig*))Scroller__FuseInputIGestureget_Priority_fn;
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

// public Scroller()
void Scroller__ctor_3_fn(Scroller* __this)
{
    __this->ctor_3();
}

// internal Scroller(bool ignore)
void Scroller__ctor_4_fn(Scroller* __this, bool* ignore)
{
    __this->ctor_4(*ignore);
}

// public void CheckLimits()
void Scroller__CheckLimits_fn(Scroller* __this)
{
    __this->CheckLimits();
}

// private void CheckNeedUpdated([bool off])
void Scroller__CheckNeedUpdated_fn(Scroller* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// public bool get_DelayStart()
void Scroller__get_DelayStart_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->DelayStart();
}

// public void set_DelayStart(bool value)
void Scroller__set_DelayStart_fn(Scroller* __this, bool* value)
{
    __this->DelayStart(*value);
}

// private float2 FromWindow(float2 p)
void Scroller__FromWindow_fn(Scroller* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// private void Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType how, Fuse.Input.CaptureType prev)
void Scroller__FuseInputIGestureOnCaptureChanged_fn(Scroller* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* how, int32_t* prev)
{
    uStackFrame __("Fuse.Gestures.Scroller", "Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs,Fuse.Input.CaptureType,Fuse.Input.CaptureType)");
    int32_t how_ = *how;

    if ((how_ & 1) == 1)
        __this->_softCaptureStart = (__this->_softCaptureCurrent = uPtr(args)->WindowPoint());

    __this->StartInvalidateVisual();
    __this->_pointerPos = uPtr(args)->WindowPoint();
    __this->_prevPos = (__this->_startPos = __this->_pointerPos);
    __this->_prevTime = args->Timestamp();
    ::g::Fuse::Motion::Simulation::PointerVelocity__Reset1_fn(uPtr(__this->_velocity), uCRef(__this->FromWindow(__this->_pointerPos)), uCRef(::g::Uno::Float2__New1(0.0f)), uCRef(0.0));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->_region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_region), ::TYPES[20/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(uPtr(__this->_scrollable)->ScrollPosition()));
    __this->CheckNeedUpdated(false);
}

// private void Fuse.Input.IGesture.OnLostCapture(bool forced)
void Scroller__FuseInputIGestureOnLostCapture_fn(Scroller* __this, bool* forced)
{
    uStackFrame __("Fuse.Gestures.Scroller", "Fuse.Input.IGesture.OnLostCapture(bool)");
    __this->StopInvalidateVisual();
    __this->_significance = 0.0f;

    if ((__this->_region != NULL) && ::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(__this->_region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/])))
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->_region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));

    __this->CheckNeedUpdated(false);
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs args)
void Scroller__FuseInputIGestureOnPointerMoved_fn(Scroller* __this, ::g::Fuse::Input::PointerMovedArgs* args, int32_t* __retval)
{
    uStackFrame __("Fuse.Gestures.Scroller", "Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs)");

    if (__this->_gesture == NULL)
        return *__retval = 0, void();

    if (!uPtr(__this->_gesture)->IsHardCapture())
    {
        __this->_softCaptureCurrent = uPtr(args)->WindowPoint();
        __this->_significance = 0.0f;
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(__this->_softCaptureCurrent, __this->_softCaptureStart);

        if (uPtr(__this->_scrollable)->AllowedScrollDirections() == 15)
            __this->_significance = ::g::Uno::Vector::Length(diff);

        if (uPtr(__this->_scrollable)->AllowedScrollDirections() == 3)
        {
            if (uPtr(Scroller::_horizontalGesture_)->IsWithinBounds(diff))
                __this->_significance = ::g::Uno::Math::Abs1(diff.X);
        }

        if (uPtr(__this->_scrollable)->AllowedScrollDirections() == 12)
        {
            if (uPtr(Scroller::_verticalGesture_)->IsWithinBounds(diff))
                __this->_significance = ::g::Uno::Math::Abs1(diff.Y);
        }
    }

    __this->_pointerPos = uPtr(args)->WindowPoint();
    __this->MoveUser((!__this->_delayStart || uPtr(__this->_gesture)->IsHardCapture()) ? 1 : 0, args->Timestamp());
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs args)
void Scroller__FuseInputIGestureOnPointerPressed_fn(Scroller* __this, ::g::Fuse::Input::PointerPressedArgs* args, int32_t* __retval)
{
    uStackFrame __("Fuse.Gestures.Scroller", "Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs)");
    ::g::Uno::Float2 ret3;
    __this->StartInvalidateVisual();
    __this->_significance = (float)((::g::Uno::Vector::Length((::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(__this->_region), ::TYPES[20/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret3), ret3)) > 100.0f) ? 100 : 0);
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs args)
void Scroller__FuseInputIGestureOnPointerReleased_fn(Scroller* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int32_t* __retval)
{
    uStackFrame __("Fuse.Gestures.Scroller", "Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs)");
    ::g::Uno::Float2 ret4;
    __this->StopInvalidateVisual();

    if (__this->_delayStart && !uPtr(__this->_gesture)->IsHardCapture())
        return *__retval = 2, void();

    if (::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(__this->_region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/])))
    {
        __this->_pointerPos = uPtr(args)->WindowPoint();
        __this->MoveUser(3, args->Timestamp());
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->_region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__op_UnaryNegation(uPtr(__this->_scrollable)->ConstrainExtents((::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(__this->_velocity), &ret4), ret4))));
    }

    return *__retval = 2, void();
}

// private Fuse.Input.GesturePriorityConfig Fuse.Input.IGesture.get_Priority()
void Scroller__FuseInputIGestureget_Priority_fn(Scroller* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval)
{
    uStackFrame __("Fuse.Gestures.Scroller", "Fuse.Input.IGesture.get_Priority()");
    return *__retval = ::g::Fuse::Input::GesturePriorityConfig__New1((__this->_scrollable == NULL) ? 1 : uPtr(__this->_scrollable)->GesturePriority(), (float)(!__this->DelayStart() ? 100 : 0) + __this->_significance, 0), void();
}

// public void Goto(float2 position)
void Scroller__Goto_fn(Scroller* __this, ::g::Uno::Float2* position)
{
    __this->Goto(*position);
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags, double time)
void Scroller__MoveUser_fn(Scroller* __this, int32_t* flags, double* time)
{
    __this->MoveUser(*flags, *time);
}

// public Scroller New()
void Scroller__New2_fn(Scroller** __retval)
{
    *__retval = Scroller::New2();
}

// internal Scroller New(bool ignore)
void Scroller__New3_fn(bool* ignore, Scroller** __retval)
{
    *__retval = Scroller::New3(*ignore);
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args)
void Scroller__OnRequestBringIntoView_fn(Scroller* __this, uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    __this->OnRequestBringIntoView(sender, args);
}

// protected override sealed void OnRooted()
void Scroller__OnRooted_fn(Scroller* __this)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_scrollable = uAs< ::g::Fuse::Controls::ScrollView*>(__this->Parent(), ::g::Fuse::Controls::ScrollView_typeof());

    if (__this->_scrollable == NULL)
        U_THROW(::g::Uno::Exception::New2(uString::Const("Scroller can only be used in a ScrollView")));

    uPtr(__this->_scrollable)->AddPropertyListener((uObject*)__this);
    uPtr(__this->_scrollable)->_scroller = __this;
    uPtr(__this->_scrollable)->add_RequestBringIntoView(uDelegate::New(::g::Fuse::RequestBringIntoViewHandler_typeof(), (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::g::Fuse::Controls::ScrollPositionChangedHandler_typeof(), (void*)Scroller__OnScrollPositionChanged_fn, __this));
    __this->_region = uPtr(uPtr(__this->_scrollable)->Motion())->AcquireSimulation();
    __this->UpdatePointerEvents(false);
}

// private void OnScrollPositionChanged(object s, Fuse.Controls.ScrollPositionChangedArgs args)
void Scroller__OnScrollPositionChanged_fn(Scroller* __this, uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args)
{
    __this->OnScrollPositionChanged(s, args);
}

// protected override sealed void OnUnrooted()
void Scroller__OnUnrooted_fn(Scroller* __this)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnUnrooted()");
    __this->StopInvalidateVisual();
    uPtr(__this->_scrollable)->RemovePropertyListener((uObject*)__this);
    uPtr(__this->_scrollable)->remove_RequestBringIntoView(uDelegate::New(::g::Fuse::RequestBringIntoViewHandler_typeof(), (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::g::Fuse::Controls::ScrollPositionChangedHandler_typeof(), (void*)Scroller__OnScrollPositionChanged_fn, __this));
    uPtr(__this->_scrollable)->_scroller = NULL;

    if (__this->_hasUpdated)
    {
        __this->_hasUpdated = false;
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, __this), 0);
    }

    __this->UpdatePointerEvents(true);

    if (__this->_region != NULL)
    {
        uPtr(uPtr(__this->_scrollable)->Motion())->ReleaseSimulation();
        __this->_region = NULL;
    }

    __this->_scrollable = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnUpdated()
void Scroller__OnUpdated_fn(Scroller* __this)
{
    __this->OnUpdated();
}

// public float2 get_OverflowExtent()
void Scroller__get_OverflowExtent_fn(Scroller* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->OverflowExtent();
}

// private void PerformBringIntoView()
void Scroller__PerformBringIntoView_fn(Scroller* __this)
{
    __this->PerformBringIntoView();
}

// private bool get_ScrollableUserScroll()
void Scroller__get_ScrollableUserScroll_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->ScrollableUserScroll();
}

// private void StartInvalidateVisual()
void Scroller__StartInvalidateVisual_fn(Scroller* __this)
{
    __this->StartInvalidateVisual();
}

// private void StopInvalidateVisual()
void Scroller__StopInvalidateVisual_fn(Scroller* __this)
{
    __this->StopInvalidateVisual();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel)
void Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn(Scroller* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel)
{
    uStackFrame __("Fuse.Gestures.Scroller", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector sel_ = *sel;

    if (obj != __this->_scrollable)
        return;

    if (::g::Uno::UX::Selector__op_Equality(sel_, ::g::Fuse::Controls::ScrollViewBase::UserScrollName()))
        __this->UpdatePointerEvents(false);
}

// private void UpdatePointerEvents([bool forceOff])
void Scroller__UpdatePointerEvents_fn(Scroller* __this, bool* forceOff)
{
    __this->UpdatePointerEvents(*forceOff);
}

// private void UpdateScrollMax()
void Scroller__UpdateScrollMax_fn(Scroller* __this)
{
    __this->UpdateScrollMax();
}

// public bool get_UserScroll()
void Scroller__get_UserScroll_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->UserScroll();
}

// public void set_UserScroll(bool value)
void Scroller__set_UserScroll_fn(Scroller* __this, bool* value)
{
    __this->UserScroll(*value);
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_horizontalGesture_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_verticalGesture_;

// public Scroller() [instance]
void Scroller::ctor_3()
{
    uStackFrame __("Fuse.Gestures.Scroller", ".ctor()");
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)));
    _delayStart = true;
    _down = -1;
    ctor_2();
    ::g::Fuse::Diagnostics::Deprecated(uString::Const("Scroller should not be used directly as it is an internal class. The ScrollView provides the entire interface for scrolling."), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Scroller.uno"), 30, ::STRINGS[12/*".ctor"*/]);
}

// internal Scroller(bool ignore) [instance]
void Scroller::ctor_4(bool ignore)
{
    uStackFrame __("Fuse.Gestures.Scroller", ".ctor(bool)");
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)));
    _delayStart = true;
    _down = -1;
    ctor_2();
}

// public void CheckLimits() [instance]
void Scroller::CheckLimits()
{
    uStackFrame __("Fuse.Gestures.Scroller", "CheckLimits()");
    UpdateScrollMax();

    if (((_region != NULL) && ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[29/*Fuse.Motion.Simulation.Simulation*/]))) && !::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/])))
        Goto(uPtr(_scrollable)->ScrollPosition());
}

// private void CheckNeedUpdated([bool off]) [instance]
void Scroller::CheckNeedUpdated(bool off)
{
    uStackFrame __("Fuse.Gestures.Scroller", "CheckNeedUpdated([bool])");
    bool needUpdated = ((_region != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[29/*Fuse.Motion.Simulation.Simulation*/]))) && IsRootingStarted();

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = true;
        _updateFirstFrame = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// public bool get_DelayStart() [instance]
bool Scroller::DelayStart()
{
    return _delayStart;
}

// public void set_DelayStart(bool value) [instance]
void Scroller::DelayStart(bool value)
{
    _delayStart = value;
    ::g::Fuse::Diagnostics::Deprecated(uString::Const("Scroller.DelayStart is no longer supported."), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Scroller.uno"), 49, uString::Const("set_DelayStart"));
}

// private float2 FromWindow(float2 p) [instance]
::g::Uno::Float2 Scroller::FromWindow(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Gestures.Scroller", "FromWindow(float2)");
    return uPtr(uPtr(_scrollable)->Parent())->WindowToLocal(p);
}

// public void Goto(float2 position) [instance]
void Scroller::Goto(::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Gestures.Scroller", "Goto(float2)");

    if (_scrollable == NULL)
        return;

    position = uPtr(_scrollable)->Constrain(position);
    UpdateScrollMax();

    if (_region != NULL)
    {
        if (::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[29/*Fuse.Motion.Simulation.Simulation*/])))
            ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[20/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));

        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), position);
    }

    CheckNeedUpdated(false);
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags, double time) [instance]
void Scroller::MoveUser(int32_t flags, double time)
{
    uStackFrame __("Fuse.Gestures.Scroller", "MoveUser(Fuse.Gestures.Scroller.MoveUserFlags,double)");
    ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(FromWindow(_prevPos), FromWindow(_pointerPos));

    if ((flags & 2) == 2)
        diff = ::g::Uno::Float2__New1(0.0f);

    _prevPos = _pointerPos;
    double elapsed = time - _prevTime;
    _prevTime = time;

    if ((flags & 1) == 1)
    {
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[20/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(_region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), diff);
        OnUpdated();
    }

    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef((double)(float)elapsed), uCRef<int32_t>((!((flags & 1) == 1) ? 1 : 0) | (((flags & 2) == 2) ? 2 : 0)));
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) [instance]
void Scroller::OnRequestBringIntoView(uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnRequestBringIntoView(object,Fuse.RequestBringIntoViewArgs)");
    _pendingBringIntoView = uPtr(args)->Visual();
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Scroller__PerformBringIntoView_fn, this), 1, 5);
}

// private void OnScrollPositionChanged(object s, Fuse.Controls.ScrollPositionChangedArgs args) [instance]
void Scroller::OnScrollPositionChanged(uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnScrollPositionChanged(object,Fuse.Controls.ScrollPositionChangedArgs)");
    ::g::Uno::Float2 ret5;

    if (uPtr(args)->Origin() == this)
        return;

    if (uPtr(args)->IsAdjustment())
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Adjust(uInterface(uPtr(_region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), uPtr(args)->ArrangeOffset());
    else
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(_region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret5), ret5));

    CheckNeedUpdated(true);
}

// private void OnUpdated() [instance]
void Scroller::OnUpdated()
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnUpdated()");
    ::g::Uno::Float2 ret6;

    if (_updateFirstFrame)
    {
        _updateFirstFrame = false;
        return;
    }

    if ((_region == NULL) || (_scrollable == NULL))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Invalid scroller update"), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Scroller.uno"), 384, uString::Const("OnUpdated"));
        return;
    }

    UpdateScrollMax();
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::TYPES[29/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    uPtr(_scrollable)->SetScrollPosition1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[20/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret6), ret6), (uObject*)this);
    CheckNeedUpdated(true);
}

// public float2 get_OverflowExtent() [instance]
::g::Uno::Float2 Scroller::OverflowExtent()
{
    uStackFrame __("Fuse.Gestures.Scroller", "get_OverflowExtent()");
    return (_scrollable == NULL) ? ::g::Uno::Float2__New1(0.0f) : uPtr(uPtr(_scrollable)->Motion())->OverflowExtent();
}

// private void PerformBringIntoView() [instance]
void Scroller::PerformBringIntoView()
{
    uStackFrame __("Fuse.Gestures.Scroller", "PerformBringIntoView()");

    if ((_pendingBringIntoView == NULL) || !uPtr(_pendingBringIntoView)->IsRootingCompleted())
        return;

    ::g::Uno::Float2 pos = uPtr(_scrollable)->GetVisualScrollPosition(_pendingBringIntoView);
    Goto(pos);
    _pendingBringIntoView = NULL;
}

// private bool get_ScrollableUserScroll() [instance]
bool Scroller::ScrollableUserScroll()
{
    uStackFrame __("Fuse.Gestures.Scroller", "get_ScrollableUserScroll()");
    return (_scrollable != NULL) ? uPtr(_scrollable)->UserScroll() : true;
}

// private void StartInvalidateVisual() [instance]
void Scroller::StartInvalidateVisual()
{
    uStackFrame __("Fuse.Gestures.Scroller", "StartInvalidateVisual()");

    if (!_pressed)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)::g::Fuse::Visual__InvalidateVisual_fn, uPtr(_scrollable)), 0);

    _pressed = true;
}

// private void StopInvalidateVisual() [instance]
void Scroller::StopInvalidateVisual()
{
    uStackFrame __("Fuse.Gestures.Scroller", "StopInvalidateVisual()");

    if (_pressed)
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)::g::Fuse::Visual__InvalidateVisual_fn, uPtr(_scrollable)), 0);

    _pressed = false;
}

// private void UpdatePointerEvents([bool forceOff]) [instance]
void Scroller::UpdatePointerEvents(bool forceOff)
{
    uStackFrame __("Fuse.Gestures.Scroller", "UpdatePointerEvents([bool])");
    bool shouldListen = (!forceOff && (_scrollable != NULL)) && ScrollableUserScroll();

    if (shouldListen == _pointerListening)
        return;

    if (shouldListen)
    {
        if (_gesture != NULL)
            ::g::Fuse::Diagnostics::InternalError(uString::Const("inconsistent gesture state"), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Scroller.uno"), 129, uString::Const("UpdatePointerEvents"));
        else
            _gesture = ::g::Fuse::Input::Gestures::Add((uObject*)this, _scrollable, 9);
    }
    else if (_scrollable != NULL)
    {
        if (_gesture == NULL)
            ::g::Fuse::Diagnostics::InternalError(uString::Const("inconsistent gesture state"), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Scroller.uno"), 136, uString::Const("UpdatePointerEvents"));
        else
        {
            uPtr(_gesture)->Dispose();
            _gesture = NULL;
        }
    }
    else
        U_THROW(::g::Uno::Exception::New2(uString::Const("Invalid tear-down of pointer events")));

    _pointerListening = shouldListen;
}

// private void UpdateScrollMax() [instance]
void Scroller::UpdateScrollMax()
{
    uStackFrame __("Fuse.Gestures.Scroller", "UpdateScrollMax()");

    if (_scrollable == NULL)
        return;

    if (_region != NULL)
    {
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), uPtr(_scrollable)->MaxScroll());
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), uPtr(_scrollable)->MinScroll());
    }
}

// public bool get_UserScroll() [instance]
bool Scroller::UserScroll()
{
    uStackFrame __("Fuse.Gestures.Scroller", "get_UserScroll()");
    return ScrollableUserScroll();
}

// public void set_UserScroll(bool value) [instance]
void Scroller::UserScroll(bool value)
{
    ::g::Fuse::Diagnostics::Deprecated(uString::Const("This value bound to the ScrollView now, set ScrollView.UserScroll instead"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Scroller.uno"), 108, uString::Const("set_UserScroll"));
}

// public Scroller New() [static]
Scroller* Scroller::New2()
{
    Scroller* obj2 = (Scroller*)uNew(Scroller_typeof());
    obj2->ctor_3();
    return obj2;
}

// internal Scroller New(bool ignore) [static]
Scroller* Scroller::New3(bool ignore)
{
    Scroller* obj1 = (Scroller*)uNew(Scroller_typeof());
    obj1->ctor_4(ignore);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Scroller.Actions.uno
// ----------------------------------------------------------------------------------

// public class ScrollTo
// {
static void ScrollTo_build(uType* type)
{
    ::STRINGS[13] = uString::Const("Unabled to locate ScrollView");
    ::STRINGS[11] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Scroller.Actions.uno");
    ::STRINGS[14] = uString::Const("Perform");
    ::TYPES[25] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Controls.ScrollView>*/, ::g::Fuse::Controls::ScrollView_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Uno::Float2_typeof(), offsetof(ScrollTo, _position), 0,
        ::g::Uno::Bool_typeof(), offsetof(ScrollTo, _hasPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(ScrollTo, _relativePosition), 0,
        ::g::Uno::Bool_typeof(), offsetof(ScrollTo, _hasRelativePosition), 0,
        ::g::Fuse::Gestures::ScrollToHow_typeof(), offsetof(ScrollTo, _how), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(ScrollTo, _Target), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_How", NULL, (void*)ScrollTo__get_How_fn, 0, false, ::g::Fuse::Gestures::ScrollToHow_typeof(), 0),
        new uFunction("set_How", NULL, (void*)ScrollTo__set_How_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ScrollToHow_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollTo__New2_fn, 0, true, type, 0),
        new uFunction("get_Position", NULL, (void*)ScrollTo__get_Position_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)ScrollTo__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_RelativePosition", NULL, (void*)ScrollTo__get_RelativePosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_RelativePosition", NULL, (void*)ScrollTo__set_RelativePosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Target", NULL, (void*)ScrollTo__get_Target_fn, 0, false, ::g::Fuse::Controls::ScrollView_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)ScrollTo__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollView_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollTo_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ScrollTo);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ScrollTo", options);
    type->fp_build_ = ScrollTo_build;
    type->fp_ctor_ = (void*)ScrollTo__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ScrollTo__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated ScrollTo()
void ScrollTo__ctor_2_fn(ScrollTo* __this)
{
    __this->ctor_2();
}

// public Fuse.Gestures.ScrollToHow get_How()
void ScrollTo__get_How_fn(ScrollTo* __this, int32_t* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Gestures.ScrollToHow value)
void ScrollTo__set_How_fn(ScrollTo* __this, int32_t* value)
{
    __this->How(*value);
}

// public generated ScrollTo New()
void ScrollTo__New2_fn(ScrollTo** __retval)
{
    *__retval = ScrollTo::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void ScrollTo__Perform_fn(ScrollTo* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Gestures.ScrollTo", "Perform(Fuse.Node)");
    ::g::Fuse::Controls::ScrollView* ind1;
    ind1 = __this->Target();
    ::g::Fuse::Controls::ScrollView* scrollView = (ind1 != NULL) ? ind1 : (::g::Fuse::Controls::ScrollView*)uPtr(target)->FindByType(::TYPES[25/*Fuse.Node.FindByType<Fuse.Controls.ScrollView>*/]);

    if (scrollView == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[13/*"Unabled to ...*/], __this, ::STRINGS[11/*"/usr/local/...*/], 106, ::STRINGS[14/*"Perform"*/], NULL);
        return;
    }

    ::g::Uno::Float2 toPos = __this->_hasRelativePosition ? uPtr(scrollView)->RelativeToAbsolutePosition(__this->_relativePosition) : __this->_position;

    if (__this->How() == 0)
        uPtr(scrollView)->Goto(toPos);
    else
        uPtr(scrollView)->ScrollPosition(toPos);
}

// public float2 get_Position()
void ScrollTo__get_Position_fn(ScrollTo* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(float2 value)
void ScrollTo__set_Position_fn(ScrollTo* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public float2 get_RelativePosition()
void ScrollTo__get_RelativePosition_fn(ScrollTo* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RelativePosition();
}

// public void set_RelativePosition(float2 value)
void ScrollTo__set_RelativePosition_fn(ScrollTo* __this, ::g::Uno::Float2* value)
{
    __this->RelativePosition(*value);
}

// public generated Fuse.Controls.ScrollView get_Target()
void ScrollTo__get_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Controls.ScrollView value)
void ScrollTo__set_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView* value)
{
    __this->Target(value);
}

// public generated ScrollTo() [instance]
void ScrollTo::ctor_2()
{
    ctor_1();
}

// public Fuse.Gestures.ScrollToHow get_How() [instance]
int32_t ScrollTo::How()
{
    return _how;
}

// public void set_How(Fuse.Gestures.ScrollToHow value) [instance]
void ScrollTo::How(int32_t value)
{
    _how = value;
}

// public float2 get_Position() [instance]
::g::Uno::Float2 ScrollTo::Position()
{
    return _position;
}

// public void set_Position(float2 value) [instance]
void ScrollTo::Position(::g::Uno::Float2 value)
{
    _position = value;
    _hasPosition = true;
}

// public float2 get_RelativePosition() [instance]
::g::Uno::Float2 ScrollTo::RelativePosition()
{
    return _relativePosition;
}

// public void set_RelativePosition(float2 value) [instance]
void ScrollTo::RelativePosition(::g::Uno::Float2 value)
{
    _relativePosition = value;
    _hasRelativePosition = true;
}

// public generated Fuse.Controls.ScrollView get_Target() [instance]
::g::Fuse::Controls::ScrollView* ScrollTo::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Controls.ScrollView value) [instance]
void ScrollTo::Target(::g::Fuse::Controls::ScrollView* value)
{
    _Target = value;
}

// public generated ScrollTo New() [static]
ScrollTo* ScrollTo::New2()
{
    ScrollTo* obj2 = (ScrollTo*)uNew(ScrollTo_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.12.0/Scroller.Actions.uno
// ----------------------------------------------------------------------------------

// public enum ScrollToHow
uEnumType* ScrollToHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.ScrollToHow", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Goto", 0LL,
        "Seek", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Swipe.uno
// ------------------------------------------------------------

// public sealed class SetSwipeActive
// {
static void SetSwipeActive_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Uno::Bool_typeof(), offsetof(SetSwipeActive, _Bypass), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(SetSwipeActive, _Target), 0,
        ::g::Uno::Bool_typeof(), offsetof(SetSwipeActive, _Value), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Bypass", NULL, (void*)SetSwipeActive__get_Bypass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bypass", NULL, (void*)SetSwipeActive__set_Bypass_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)SetSwipeActive__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)SetSwipeActive__get_Target_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)SetSwipeActive__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Value", NULL, (void*)SetSwipeActive__get_Value_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)SetSwipeActive__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SetSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.SetSwipeActive", options);
    type->fp_build_ = SetSwipeActive_build;
    type->fp_ctor_ = (void*)SetSwipeActive__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SetSwipeActive__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated SetSwipeActive()
void SetSwipeActive__ctor_2_fn(SetSwipeActive* __this)
{
    __this->ctor_2();
}

// public generated bool get_Bypass()
void SetSwipeActive__get_Bypass_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value)
void SetSwipeActive__set_Bypass_fn(SetSwipeActive* __this, bool* value)
{
    __this->Bypass(*value);
}

// public generated SetSwipeActive New()
void SetSwipeActive__New2_fn(SetSwipeActive** __retval)
{
    *__retval = SetSwipeActive::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void SetSwipeActive__Perform_fn(SetSwipeActive* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "Perform(Fuse.Node)");

    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(__this->Value(), NULL, __this->Bypass());
}

// public generated Fuse.Gestures.SwipeGesture get_Target()
void SetSwipeActive__get_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value)
void SetSwipeActive__set_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated bool get_Value()
void SetSwipeActive__get_Value_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(bool value)
void SetSwipeActive__set_Value_fn(SetSwipeActive* __this, bool* value)
{
    __this->Value(*value);
}

// public generated SetSwipeActive() [instance]
void SetSwipeActive::ctor_2()
{
    ctor_1();
}

// public generated bool get_Bypass() [instance]
bool SetSwipeActive::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance]
void SetSwipeActive::Bypass(bool value)
{
    _Bypass = value;
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance]
::g::Fuse::Gestures::SwipeGesture* SetSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance]
void SetSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}

// public generated bool get_Value() [instance]
bool SetSwipeActive::Value()
{
    return _Value;
}

// public generated void set_Value(bool value) [instance]
void SetSwipeActive::Value(bool value)
{
    _Value = value;
}

// public generated SetSwipeActive New() [static]
SetSwipeActive* SetSwipeActive::New2()
{
    SetSwipeActive* obj1 = (SetSwipeActive*)uNew(SetSwipeActive_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Swipe.uno
// ------------------------------------------------------------

// public sealed class Swiped
// {
static void Swiped_build(uType* type)
{
    ::TYPES[26] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), NULL);
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
        ::g::Fuse::Gestures::SwipedHow_typeof(), offsetof(Swiped, _how), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(Swiped, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(Swiped, _Source), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_How", NULL, (void*)Swiped__get_How_fn, 0, false, ::g::Fuse::Gestures::SwipedHow_typeof(), 0),
        new uFunction("set_How", NULL, (void*)Swiped__set_How_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipedHow_typeof()),
        new uFunction(".ctor", NULL, (void*)Swiped__New2_fn, 0, true, type, 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)Swiped__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* Swiped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Swiped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Swiped", options);
    type->fp_build_ = Swiped_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Swiped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Swiped__OnUnrooted_fn;
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

// public Swiped(Fuse.Gestures.SwipeGesture source)
void Swiped__ctor_5_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_5(source);
}

// public Fuse.Gestures.SwipedHow get_How()
void Swiped__get_How_fn(Swiped* __this, int32_t* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Gestures.SwipedHow value)
void Swiped__set_How_fn(Swiped* __this, int32_t* value)
{
    __this->How(*value);
}

// public Swiped New(Fuse.Gestures.SwipeGesture source)
void Swiped__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, Swiped** __retval)
{
    *__retval = Swiped::New2(source);
}

// protected override sealed void OnRooted()
void Swiped__OnRooted_fn(Swiped* __this)
{
    uStackFrame __("Fuse.Gestures.Swiped", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->add_Swiped(uDelegate::New(::TYPES[26/*Uno.Action<bool, bool>*/], (void*)Swiped__OnSwiped_fn, __this));
}

// private void OnSwiped(bool v, bool cancelled)
void Swiped__OnSwiped_fn(Swiped* __this, bool* v, bool* cancelled)
{
    __this->OnSwiped(*v, *cancelled);
}

// protected override sealed void OnUnrooted()
void Swiped__OnUnrooted_fn(Swiped* __this)
{
    uStackFrame __("Fuse.Gestures.Swiped", "OnUnrooted()");
    uPtr(__this->_region)->remove_Swiped(uDelegate::New(::TYPES[26/*Uno.Action<bool, bool>*/], (void*)Swiped__OnSwiped_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source()
void Swiped__get_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value)
void Swiped__set_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// public Swiped(Fuse.Gestures.SwipeGesture source) [instance]
void Swiped::ctor_5(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_4();
    Source(source);
}

// public Fuse.Gestures.SwipedHow get_How() [instance]
int32_t Swiped::How()
{
    return _how;
}

// public void set_How(Fuse.Gestures.SwipedHow value) [instance]
void Swiped::How(int32_t value)
{
    _how = value;
}

// private void OnSwiped(bool v, bool cancelled) [instance]
void Swiped::OnSwiped(bool v, bool cancelled)
{
    uStackFrame __("Fuse.Gestures.Swiped", "OnSwiped(bool,bool)");

    if (cancelled)
    {
        if (How() == 3)
            Pulse();

        return;
    }

    if (v && ((How() == 0) || (How() == 2)))
        Pulse();

    if (!v && ((How() == 1) || (How() == 2)))
        Pulse();
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance]
::g::Fuse::Gestures::SwipeGesture* Swiped::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance]
void Swiped::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public Swiped New(Fuse.Gestures.SwipeGesture source) [static]
Swiped* Swiped::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    Swiped* obj1 = (Swiped*)uNew(Swiped_typeof());
    obj1->ctor_5(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Swipe.uno
// ------------------------------------------------------------

// public enum SwipedHow
uEnumType* SwipedHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipedHow", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "ToActive", 0LL,
        "ToInactive", 1LL,
        "ToEither", 2LL,
        "Cancelled", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Swipe.uno
// ------------------------------------------------------------

// public enum SwipeDirection
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Up", 1LL,
        "Right", 2LL,
        "Down", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Swipe.uno
// ------------------------------------------------------------

// public sealed class SwipeGesture
// {
// static generated SwipeGesture()
static void SwipeGesture__cctor_1_fn(uType* __type)
{
    SwipeGesture::GesturePriorityName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"GesturePrio...*/]);
    SwipeGesture::_isActiveName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"IsActive"*/]);
}

static void SwipeGesture_build(uType* type)
{
    ::STRINGS[15] = uString::Const("GesturePriority");
    ::STRINGS[9] = uString::Const("IsActive");
    ::STRINGS[8] = uString::Const("Element");
    ::STRINGS[16] = uString::Const("/usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Swipe.uno");
    ::STRINGS[4] = uString::Const("OnRooted");
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetDependencies(
        ::g::Fuse::Gestures::Internal::Swiper_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipeGesture_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(SwipeGesture_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(SwipeGesture_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(SwipeGesture_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeGesture_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeGesture_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipeGesture_type, interface7));
    type->SetFields(18,
        ::g::Fuse::Gestures::Internal::Swiper_typeof(), offsetof(SwipeGesture, _swiper), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(SwipeGesture, _region), 0,
        ::g::Fuse::Gestures::SwipeType_typeof(), offsetof(SwipeGesture, _type), 0,
        ::g::Uno::Bool_typeof(), offsetof(SwipeGesture, _hasEdge), 0,
        ::g::Fuse::Gestures::Edge_typeof(), offsetof(SwipeGesture, _edge), 0,
        ::g::Uno::Bool_typeof(), offsetof(SwipeGesture, _hasDirection), 0,
        ::g::Fuse::Gestures::SwipeDirection_typeof(), offsetof(SwipeGesture, _direction), 0,
        ::g::Fuse::Input::GesturePriority_typeof(), offsetof(SwipeGesture, _gesturePriority), 0,
        ::g::Uno::Bool_typeof(), offsetof(SwipeGesture, _hasThreshold), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SwipeGesture::GesturePriorityName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SwipeGesture::_isActiveName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(22,
        new uFunction("get_Direction", NULL, (void*)SwipeGesture__get_Direction_fn, 0, false, ::g::Fuse::Gestures::SwipeDirection_typeof(), 0),
        new uFunction("set_Direction", NULL, (void*)SwipeGesture__set_Direction_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeDirection_typeof()),
        new uFunction("get_Edge", NULL, (void*)SwipeGesture__get_Edge_fn, 0, false, ::g::Fuse::Gestures::Edge_typeof(), 0),
        new uFunction("set_Edge", NULL, (void*)SwipeGesture__set_Edge_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::Edge_typeof()),
        new uFunction("get_GesturePriority", NULL, (void*)SwipeGesture__get_GesturePriority_fn, 0, false, ::g::Fuse::Input::GesturePriority_typeof(), 0),
        new uFunction("set_GesturePriority", NULL, (void*)SwipeGesture__set_GesturePriority_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::GesturePriority_typeof()),
        new uFunction("get_HitSize", NULL, (void*)SwipeGesture__get_HitSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_HitSize", NULL, (void*)SwipeGesture__set_HitSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IsActive", NULL, (void*)SwipeGesture__get_IsActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsActive", NULL, (void*)SwipeGesture__set_IsActive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsEnabled", NULL, (void*)SwipeGesture__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)SwipeGesture__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Length", NULL, (void*)SwipeGesture__get_Length_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Length", NULL, (void*)SwipeGesture__set_Length_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LengthNode", NULL, (void*)SwipeGesture__get_LengthNode_fn, 0, false, ::TYPES[0/*Fuse.Elements.Element*/], 0),
        new uFunction("set_LengthNode", NULL, (void*)SwipeGesture__set_LengthNode_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Fuse.Elements.Element*/]),
        new uFunction(".ctor", NULL, (void*)SwipeGesture__New2_fn, 0, true, type, 0),
        new uFunction("SetIsActive", NULL, (void*)SwipeGesture__SetIsActive_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Threshold", NULL, (void*)SwipeGesture__get_Threshold_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Threshold", NULL, (void*)SwipeGesture__set_Threshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Type", NULL, (void*)SwipeGesture__get_Type_fn, 0, false, ::g::Fuse::Gestures::SwipeType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)SwipeGesture__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeType_typeof()));
}

SwipeGesture_type* SwipeGesture_typeof()
{
    static uSStrong<SwipeGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SwipeGesture);
    options.TypeSize = sizeof(SwipeGesture_type);
    type = (SwipeGesture_type*)uClassType::New("Fuse.Gestures.SwipeGesture", options);
    type->fp_build_ = SwipeGesture_build;
    type->fp_ctor_ = (void*)SwipeGesture__New2_fn;
    type->fp_cctor_ = SwipeGesture__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipeGesture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipeGesture__OnUnrooted_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// public SwipeGesture()
void SwipeGesture__ctor_3_fn(SwipeGesture* __this)
{
    __this->ctor_3();
}

// public Fuse.Gestures.SwipeDirection get_Direction()
void SwipeGesture__get_Direction_fn(SwipeGesture* __this, int32_t* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value)
void SwipeGesture__set_Direction_fn(SwipeGesture* __this, int32_t* value)
{
    __this->Direction(*value);
}

// public Fuse.Gestures.Edge get_Edge()
void SwipeGesture__get_Edge_fn(SwipeGesture* __this, int32_t* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value)
void SwipeGesture__set_Edge_fn(SwipeGesture* __this, int32_t* value)
{
    __this->Edge(*value);
}

// public Fuse.Input.GesturePriority get_GesturePriority()
void SwipeGesture__get_GesturePriority_fn(SwipeGesture* __this, int32_t* __retval)
{
    *__retval = __this->GesturePriority();
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value)
void SwipeGesture__set_GesturePriority_fn(SwipeGesture* __this, int32_t* value)
{
    __this->GesturePriority(*value);
}

// public float get_HitSize()
void SwipeGesture__get_HitSize_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->HitSize();
}

// public void set_HitSize(float value)
void SwipeGesture__set_HitSize_fn(SwipeGesture* __this, float* value)
{
    __this->HitSize(*value);
}

// public bool get_IsActive()
void SwipeGesture__get_IsActive_fn(SwipeGesture* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value)
void SwipeGesture__set_IsActive_fn(SwipeGesture* __this, bool* value)
{
    __this->IsActive(*value);
}

// public bool get_IsEnabled()
void SwipeGesture__get_IsEnabled_fn(SwipeGesture* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value)
void SwipeGesture__set_IsEnabled_fn(SwipeGesture* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public float get_Length()
void SwipeGesture__get_Length_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->Length();
}

// public void set_Length(float value)
void SwipeGesture__set_Length_fn(SwipeGesture* __this, float* value)
{
    __this->Length(*value);
}

// public Fuse.Elements.Element get_LengthNode()
void SwipeGesture__get_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LengthNode();
}

// public void set_LengthNode(Fuse.Elements.Element value)
void SwipeGesture__set_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LengthNode(value);
}

// public SwipeGesture New()
void SwipeGesture__New2_fn(SwipeGesture** __retval)
{
    *__retval = SwipeGesture::New2();
}

// protected override sealed void OnRooted()
void SwipeGesture__OnRooted_fn(SwipeGesture* __this)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[0/*Fuse.Elements.Element*/]);

    if (element == NULL)
    {
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[8/*"Element"*/], __this->Parent(), __this, ::STRINGS[16/*"/usr/local/...*/], 262, ::STRINGS[4/*"OnRooted"*/]);
        return;
    }

    uPtr(__this->_region)->SetActive(__this->IsActive());
    __this->_swiper = ::g::Fuse::Gestures::Internal::Swiper::AttachSwiper(element);
    uPtr(__this->_swiper)->AddRegion(__this->Region());
    uPtr(__this->_region)->AddPropertyListener((uObject*)__this);
}

// protected override sealed void OnUnrooted()
void SwipeGesture__OnUnrooted_fn(SwipeGesture* __this)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "OnUnrooted()");
    uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);

    if (__this->_swiper != NULL)
    {
        uPtr(__this->_swiper)->RemoveRegion(__this->_region);
        uPtr(__this->_swiper)->Detach();
        __this->_swiper = NULL;
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region()
void SwipeGesture__get_Region_fn(SwipeGesture* __this, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval)
{
    *__retval = __this->Region();
}

// internal void SetActive(bool value, Uno.UX.IPropertyListener origin, [bool bypass])
void SwipeGesture__SetActive_fn(SwipeGesture* __this, bool* value, uObject* origin, bool* bypass)
{
    __this->SetActive(*value, origin, *bypass);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin)
void SwipeGesture__SetIsActive_fn(SwipeGesture* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// public float2 get_Threshold()
void SwipeGesture__get_Threshold_fn(SwipeGesture* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Threshold();
}

// public void set_Threshold(float2 value)
void SwipeGesture__set_Threshold_fn(SwipeGesture* __this, ::g::Uno::Float2* value)
{
    __this->Threshold(*value);
}

// public Fuse.Gestures.SwipeType get_Type()
void SwipeGesture__get_Type_fn(SwipeGesture* __this, int32_t* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Gestures.SwipeType value)
void SwipeGesture__set_Type_fn(SwipeGesture* __this, int32_t* value)
{
    __this->Type(*value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop)
void SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipeGesture* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((obj == __this->_region) && ::g::Uno::UX::Selector__op_Equality(prop_, SwipeGesture::_isActiveName_))
        __this->OnPropertyChanged1(SwipeGesture::_isActiveName_, (uObject*)__this->_region);
}

::g::Uno::UX::Selector SwipeGesture::GesturePriorityName_;
::g::Uno::UX::Selector SwipeGesture::_isActiveName_;

// public SwipeGesture() [instance]
void SwipeGesture::ctor_3()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", ".ctor()");
    _region = ::g::Fuse::Gestures::Internal::SwipeRegion::New2();
    _gesturePriority = 1;
    ctor_2();
    Type(0);
    Direction(0);
}

// public Fuse.Gestures.SwipeDirection get_Direction() [instance]
int32_t SwipeGesture::Direction()
{
    return _direction;
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) [instance]
void SwipeGesture::Direction(int32_t value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_Direction(Fuse.Gestures.SwipeDirection)");
    _direction = value;
    _hasDirection = true;
    uPtr(_region)->Area = 0;

    switch (Direction())
    {
        case 0:
        {
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
            uPtr(_region)->Priority = 101;
            break;
        }
        case 1:
        {
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
            uPtr(_region)->Priority = 102;
            break;
        }
        case 2:
        {
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
            uPtr(_region)->Priority = 103;
            break;
        }
        case 3:
        {
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
            uPtr(_region)->Priority = 104;
            break;
        }
    }
}

// public Fuse.Gestures.Edge get_Edge() [instance]
int32_t SwipeGesture::Edge()
{
    return _edge;
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance]
void SwipeGesture::Edge(int32_t value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_Edge(Fuse.Gestures.Edge)");
    _edge = value;
    _hasEdge = true;
    uPtr(_region)->Area = 1;

    switch (_edge)
    {
        case 0:
        {
            uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
            uPtr(_region)->Priority = 1;
            break;
        }
        case 2:
        {
            uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 0.0f);
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
            uPtr(_region)->Priority = 2;
            break;
        }
        case 1:
        {
            uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(1.0f, 0.0f, 1.0f, 1.0f);
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
            uPtr(_region)->Priority = 3;
            break;
        }
        case 3:
        {
            uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 1.0f, 1.0f, 1.0f);
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
            uPtr(_region)->Priority = 4;
            break;
        }
    }
}

// public Fuse.Input.GesturePriority get_GesturePriority() [instance]
int32_t SwipeGesture::GesturePriority()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_GesturePriority()");
    return uPtr(_region)->GesturePriority();
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value) [instance]
void SwipeGesture::GesturePriority(int32_t value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_GesturePriority(Fuse.Input.GesturePriority)");
    uPtr(_region)->GesturePriority(value);
}

// public float get_HitSize() [instance]
float SwipeGesture::HitSize()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_HitSize()");
    return uPtr(_region)->AreaVectorDistance;
}

// public void set_HitSize(float value) [instance]
void SwipeGesture::HitSize(float value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_HitSize(float)");
    uPtr(_region)->AreaVectorDistance = value;
}

// public bool get_IsActive() [instance]
bool SwipeGesture::IsActive()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_IsActive()");
    return uPtr(_region)->IsActive();
}

// public void set_IsActive(bool value) [instance]
void SwipeGesture::IsActive(bool value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_IsActive(bool)");
    SetIsActive(value, (uObject*)this);
}

// public bool get_IsEnabled() [instance]
bool SwipeGesture::IsEnabled()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_IsEnabled()");
    return uPtr(_region)->IsEnabled();
}

// public void set_IsEnabled(bool value) [instance]
void SwipeGesture::IsEnabled(bool value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_IsEnabled(bool)");
    uPtr(_region)->IsEnabled(value);
}

// public float get_Length() [instance]
float SwipeGesture::Length()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_Length()");
    return (float)uPtr(_region)->Length;
}

// public void set_Length(float value) [instance]
void SwipeGesture::Length(float value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_Length(float)");
    uPtr(_region)->Length = (double)value;
}

// public Fuse.Elements.Element get_LengthNode() [instance]
::g::Fuse::Elements::Element* SwipeGesture::LengthNode()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_LengthNode()");
    return uPtr(_region)->LengthElement;
}

// public void set_LengthNode(Fuse.Elements.Element value) [instance]
void SwipeGesture::LengthNode(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_LengthNode(Fuse.Elements.Element)");
    uPtr(_region)->LengthElement = value;
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() [instance]
::g::Fuse::Gestures::Internal::SwipeRegion* SwipeGesture::Region()
{
    return _region;
}

// internal void SetActive(bool value, Uno.UX.IPropertyListener origin, [bool bypass]) [instance]
void SwipeGesture::SetActive(bool value, uObject* origin, bool bypass)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "SetActive(bool,Uno.UX.IPropertyListener,[bool])");

    if (_swiper == NULL)
        uPtr(_region)->SetIsActive(value, origin);
    else
        uPtr(_swiper)->SetActivation(_region, value, bypass);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) [instance]
void SwipeGesture::SetIsActive(bool value, uObject* origin)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "SetIsActive(bool,Uno.UX.IPropertyListener)");
    SetActive(value, origin, false);
}

// public float2 get_Threshold() [instance]
::g::Uno::Float2 SwipeGesture::Threshold()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "get_Threshold()");
    return ::g::Uno::Float2__New2(uPtr(_region)->ActivationThreshold, 1.0f - uPtr(_region)->DeactivationThreshold);
}

// public void set_Threshold(float2 value) [instance]
void SwipeGesture::Threshold(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_Threshold(float2)");
    _hasThreshold = true;
    uPtr(_region)->ActivationThreshold = value.Item(0);
    uPtr(_region)->DeactivationThreshold = (1.0f - value.Item(1));
}

// public Fuse.Gestures.SwipeType get_Type() [instance]
int32_t SwipeGesture::Type()
{
    return _type;
}

// public void set_Type(Fuse.Gestures.SwipeType value) [instance]
void SwipeGesture::Type(int32_t value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_Type(Fuse.Gestures.SwipeType)");
    _type = value;
    uPtr(_region)->IsInterruptible = (Type() != 0);
    uPtr(_region)->RevertActive = (Type() != 1);
    uPtr(_region)->AutoTrigger = (Type() == 2);

    if ((_type == 1) && !_hasThreshold)
    {
        uPtr(_region)->ActivationThreshold = 0.5f;
        uPtr(_region)->DeactivationThreshold = 0.5f;
    }
}

// public SwipeGesture New() [static]
SwipeGesture* SwipeGesture::New2()
{
    SwipeGesture* obj1 = (SwipeGesture*)uNew(SwipeGesture_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Internal/Helpers.uno
// -----------------------------------------------------------------------

// internal sealed class SwipeGestureHelper
// {
static void SwipeGestureHelper_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), offsetof(SwipeGestureHelper, _spans), 0,
        ::g::Uno::Float_typeof(), offsetof(SwipeGestureHelper, _lengthThreshold), 0);
}

uType* SwipeGestureHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SwipeGestureHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.SwipeGestureHelper", options);
    type->fp_build_ = SwipeGestureHelper_build;
    return type;
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans)
void SwipeGestureHelper__ctor__fn(SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans)
{
    __this->ctor_(*lengthThreshold, spans);
}

// public bool IsWithinBounds(float2 vector)
void SwipeGestureHelper__IsWithinBounds_fn(SwipeGestureHelper* __this, ::g::Uno::Float2* vector, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*vector);
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans)
void SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, SwipeGestureHelper** __retval)
{
    *__retval = SwipeGestureHelper::New1(*lengthThreshold, spans);
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [instance]
void SwipeGestureHelper::ctor_(float lengthThreshold, uArray* spans)
{
    _spans = spans;
    _lengthThreshold = lengthThreshold;
}

// public bool IsWithinBounds(float2 vector) [instance]
bool SwipeGestureHelper::IsWithinBounds(::g::Uno::Float2 vector)
{
    uStackFrame __("Fuse.Gestures.SwipeGestureHelper", "IsWithinBounds(float2)");
    float length = ::g::Uno::Vector::Length(vector);

    if (length < _lengthThreshold)
        return false;

    float angle = ::g::Uno::Math::RadiansToDegrees1(::g::Uno::Math::Atan22(vector.X, vector.Y));

    for (int32_t i = 0; i < uPtr(_spans)->Length(); i++)
        if (uPtr(uPtr(_spans)->Strong< ::g::Fuse::Gestures::DegreeSpan*>(i))->IsWithinBounds(angle))
            return true;

    return false;
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [static]
SwipeGestureHelper* SwipeGestureHelper::New1(float lengthThreshold, uArray* spans)
{
    SwipeGestureHelper* obj1 = (SwipeGestureHelper*)uNew(SwipeGestureHelper_typeof());
    obj1->ctor_(lengthThreshold, spans);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Swipe.uno
// ------------------------------------------------------------

// public enum SwipeType
uEnumType* SwipeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Simple", 0LL,
        "Active", 1LL,
        "Auto", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Swipe.uno
// ------------------------------------------------------------

// public sealed class SwipingAnimation
// {
static void SwipingAnimation_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipingAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(SwipingAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(SwipingAnimation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(SwipingAnimation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipingAnimation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipingAnimation_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(SwipingAnimation_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(SwipingAnimation_type, interface8),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipingAnimation_type, interface9));
    type->SetFields(39,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(SwipingAnimation, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(SwipingAnimation, _Source), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)SwipingAnimation__New2_fn, 0, true, type, 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)SwipingAnimation__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
}

SwipingAnimation_type* SwipingAnimation_typeof()
{
    static uSStrong<SwipingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SwipingAnimation);
    options.TypeSize = sizeof(SwipingAnimation_type);
    type = (SwipingAnimation_type*)uClassType::New("Fuse.Gestures.SwipingAnimation", options);
    type->fp_build_ = SwipingAnimation_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipingAnimation__OnUnrooted_fn;
    type->interface9.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source)
void SwipingAnimation__ctor_5_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_5(source);
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source)
void SwipingAnimation__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, SwipingAnimation** __retval)
{
    *__retval = SwipingAnimation::New2(source);
}

// private void OnProgressChanged(double progress)
void SwipingAnimation__OnProgressChanged1_fn(SwipingAnimation* __this, double* progress)
{
    __this->OnProgressChanged1(*progress);
}

// protected override sealed void OnRooted()
void SwipingAnimation__OnRooted_fn(SwipingAnimation* __this)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->AddPropertyListener((uObject*)__this);
    __this->OnProgressChanged1(uPtr(uPtr(__this->Source())->Region())->Progress());
}

// protected override sealed void OnUnrooted()
void SwipingAnimation__OnUnrooted_fn(SwipingAnimation* __this)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "OnUnrooted()");
    uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source()
void SwipingAnimation__get_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value)
void SwipingAnimation__set_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector prop)
void SwipingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipingAnimation* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((sender != __this->_region) || ::g::Uno::UX::Selector__op_Inequality(prop_, ::g::Fuse::Gestures::Internal::SwipeRegion::ProgressName()))
        return;

    __this->OnProgressChanged1(uPtr(__this->_region)->Progress());
}

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) [instance]
void SwipingAnimation::ctor_5(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_4();
    Source(source);
}

// private void OnProgressChanged(double progress) [instance]
void SwipingAnimation::OnProgressChanged1(double progress)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "OnProgressChanged(double)");
    double diff = progress - uPtr(uPtr(Source())->Region())->StableProgress();
    Seek(progress, (diff >= 0.0) ? 0 : 1);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance]
::g::Fuse::Gestures::SwipeGesture* SwipingAnimation::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance]
void SwipingAnimation::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) [static]
SwipingAnimation* SwipingAnimation::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    SwipingAnimation* obj1 = (SwipingAnimation*)uNew(SwipingAnimation_typeof());
    obj1->ctor_5(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Tapped.uno
// -------------------------------------------------------------

// public sealed class Tapped
// {
static void Tapped_build(uType* type)
{
    ::TYPES[27] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Gestures.Tapped>*/, type, NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[28] = ::g::Fuse::Gestures::TappedHandler_typeof();
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
    type->SetFields(42,
        ::TYPES[28/*Fuse.Gestures.TappedHandler*/], offsetof(Tapped, Handler1), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("AddHandler", NULL, (void*)Tapped__AddHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::TYPES[28/*Fuse.Gestures.TappedHandler*/]),
        new uFunction("add_Handler", NULL, (void*)Tapped__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[28/*Fuse.Gestures.TappedHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)Tapped__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[28/*Fuse.Gestures.TappedHandler*/]),
        new uFunction(".ctor", NULL, (void*)Tapped__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)Tapped__New3_fn, 0, true, type, 1, ::TYPES[28/*Fuse.Gestures.TappedHandler*/]),
        new uFunction("RemoveHandler", NULL, (void*)Tapped__RemoveHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::TYPES[28/*Fuse.Gestures.TappedHandler*/]));
}

::g::Fuse::Triggers::Trigger_type* Tapped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Tapped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Tapped", options);
    type->fp_build_ = Tapped_build;
    type->fp_ctor_ = (void*)Tapped__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Tapped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Tapped__OnUnrooted_fn;
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

// public Tapped()
void Tapped__ctor_6_fn(Tapped* __this)
{
    __this->ctor_6();
}

// public Tapped(Fuse.Gestures.TappedHandler handler)
void Tapped__ctor_7_fn(Tapped* __this, uDelegate* handler)
{
    __this->ctor_7(handler);
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.TappedHandler handler)
void Tapped__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Tapped::AddHandler(visual, handler);
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value)
void Tapped__add_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value)
void Tapped__remove_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public Tapped New()
void Tapped__New2_fn(Tapped** __retval)
{
    *__retval = Tapped::New2();
}

// public Tapped New(Fuse.Gestures.TappedHandler handler)
void Tapped__New3_fn(uDelegate* handler, Tapped** __retval)
{
    *__retval = Tapped::New3(handler);
}

// protected override sealed void OnRooted()
void Tapped__OnRooted_fn(Tapped* __this)
{
    uStackFrame __("Fuse.Gestures.Tapped", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_TappedEvent(uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount)
void Tapped__OnTapped_fn(Tapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* tapCount)
{
    __this->OnTapped(args, *tapCount);
}

// protected override sealed void OnUnrooted()
void Tapped__OnUnrooted_fn(Tapped* __this)
{
    uStackFrame __("Fuse.Gestures.Tapped", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_TappedEvent(uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Gestures.TappedHandler handler)
void Tapped__RemoveHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Tapped::RemoveHandler(visual, handler);
}

// public Tapped() [instance]
void Tapped::ctor_6()
{
    ctor_5();
}

// public Tapped(Fuse.Gestures.TappedHandler handler) [instance]
void Tapped::ctor_7(uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Tapped", ".ctor(Fuse.Gestures.TappedHandler)");
    ctor_5();
    add_Handler(handler);
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) [instance]
void Tapped::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Tapped", "add_Handler(Fuse.Gestures.TappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[28/*Fuse.Gestures.TappedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) [instance]
void Tapped::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Tapped", "remove_Handler(Fuse.Gestures.TappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[28/*Fuse.Gestures.TappedHandler*/]);
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) [instance]
void Tapped::OnTapped(::g::Fuse::Input::PointerEventArgs* args, int32_t tapCount)
{
    uStackFrame __("Fuse.Gestures.Tapped", "OnTapped(Fuse.Input.PointerEventArgs,int)");

    if (!Accept(args))
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::TappedArgs*)::g::Fuse::Gestures::TappedArgs::New3(args, Parent()));
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.TappedHandler handler) [static]
void Tapped::AddHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Tapped", "AddHandler(Fuse.Visual,Fuse.Gestures.TappedHandler)");
    Tapped* t = (Tapped*)uPtr(visual)->FirstChild(::TYPES[27/*Fuse.Visual.FirstChild<Fuse.Gestures.Tapped>*/]);

    if (t == NULL)
    {
        t = Tapped::New2();
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]), t);
    }

    uPtr(t)->add_Handler(handler);
}

// public Tapped New() [static]
Tapped* Tapped::New2()
{
    Tapped* obj1 = (Tapped*)uNew(Tapped_typeof());
    obj1->ctor_6();
    return obj1;
}

// public Tapped New(Fuse.Gestures.TappedHandler handler) [static]
Tapped* Tapped::New3(uDelegate* handler)
{
    Tapped* obj2 = (Tapped*)uNew(Tapped_typeof());
    obj2->ctor_7(handler);
    return obj2;
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Gestures.TappedHandler handler) [static]
void Tapped::RemoveHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Tapped", "RemoveHandler(Fuse.Visual,Fuse.Gestures.TappedHandler)");
    Tapped* t = (Tapped*)uPtr(visual)->FirstChild(::TYPES[27/*Fuse.Visual.FirstChild<Fuse.Gestures.Tapped>*/]);

    if (t != NULL)
        uPtr(t)->remove_Handler(handler);
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Tapped.uno
// -------------------------------------------------------------

// public sealed class TappedArgs
// {
static void TappedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TappedArgs__New3_fn, 0, true, type, 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* TappedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::CustomPointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TappedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.TappedArgs", options);
    type->fp_build_ = TappedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual)
void TappedArgs__ctor_4_fn(TappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual)
void TappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, TappedArgs** __retval)
{
    *__retval = TappedArgs::New3(args, visual);
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance]
void TappedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.TappedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Visual)");
    ctor_3(args, visual);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static]
TappedArgs* TappedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    TappedArgs* obj1 = (TappedArgs*)uNew(TappedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Tapped.uno
// -------------------------------------------------------------

// public delegate void TappedHandler(object sender, Fuse.Gestures.TappedArgs args)
uDelegateType* TappedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.TappedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::TappedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Swipe.uno
// ------------------------------------------------------------

// public sealed class ToggleSwipeActive
// {
static void ToggleSwipeActive_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(ToggleSwipeActive, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ToggleSwipeActive__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)ToggleSwipeActive__get_Target_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)ToggleSwipeActive__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ToggleSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ToggleSwipeActive", options);
    type->fp_build_ = ToggleSwipeActive_build;
    type->fp_ctor_ = (void*)ToggleSwipeActive__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSwipeActive__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated ToggleSwipeActive()
void ToggleSwipeActive__ctor_2_fn(ToggleSwipeActive* __this)
{
    __this->ctor_2();
}

// public generated ToggleSwipeActive New()
void ToggleSwipeActive__New2_fn(ToggleSwipeActive** __retval)
{
    *__retval = ToggleSwipeActive::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void ToggleSwipeActive__Perform_fn(ToggleSwipeActive* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Gestures.ToggleSwipeActive", "Perform(Fuse.Node)");

    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(!uPtr(__this->Target())->IsActive(), NULL, false);
}

// public generated Fuse.Gestures.SwipeGesture get_Target()
void ToggleSwipeActive__get_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value)
void ToggleSwipeActive__set_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated ToggleSwipeActive() [instance]
void ToggleSwipeActive::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance]
::g::Fuse::Gestures::SwipeGesture* ToggleSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance]
void ToggleSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}

// public generated ToggleSwipeActive New() [static]
ToggleSwipeActive* ToggleSwipeActive::New2()
{
    ToggleSwipeActive* obj1 = (ToggleSwipeActive*)uNew(ToggleSwipeActive_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/TransformGesture.uno
// -----------------------------------------------------------------------

// public abstract class TransformGesture
// {
static void TransformGesture_build(uType* type)
{
    ::TYPES[29] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[11] = ::g::Uno::Action_typeof();
    ::TYPES[30] = ::g::Fuse::Gestures::Internal::TwoFingerEventHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Gestures::Internal::TwoFinger_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(TransformGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(TransformGesture_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(TransformGesture_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(TransformGesture_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(TransformGesture_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(TransformGesture_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(TransformGesture_type, interface6));
    type->SetFields(18,
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(TransformGesture, Region), 0,
        ::g::Fuse::Gestures::Internal::TwoFinger_typeof(), offsetof(TransformGesture, Impl), 0,
        ::g::Uno::Bool_typeof(), offsetof(TransformGesture, _hasUpdate), 0,
        ::g::Fuse::Elements::InteractiveTransform_typeof(), offsetof(TransformGesture, _Target), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Target", NULL, (void*)TransformGesture__get_Target_fn, 0, false, ::g::Fuse::Elements::InteractiveTransform_typeof(), 0));
}

TransformGesture_type* TransformGesture_typeof()
{
    static uSStrong<TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 7;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TransformGesture);
    options.TypeSize = sizeof(TransformGesture_type);
    type = (TransformGesture_type*)uClassType::New("Fuse.Gestures.TransformGesture", options);
    type->fp_build_ = TransformGesture_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))TransformGesture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))TransformGesture__OnUnrooted_fn;
    type->fp_OnUpdate = TransformGesture__OnUpdate_fn;
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

// internal TransformGesture(Fuse.Elements.InteractiveTransform target)
void TransformGesture__ctor_3_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_3(target);
}

// protected void CheckNeedUpdate()
void TransformGesture__CheckNeedUpdate_fn(TransformGesture* __this)
{
    __this->CheckNeedUpdate();
}

// protected override void OnRooted()
void TransformGesture__OnRooted_fn(TransformGesture* __this)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->Impl = ::g::Fuse::Gestures::Internal::TwoFinger::Attach(__this->Parent());
    uPtr(__this->Impl)->add_Started(uDelegate::New(::TYPES[30/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnStarted)));
    uPtr(__this->Impl)->add_Ended(uDelegate::New(::TYPES[30/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnEnded)));
}

// protected override void OnUnrooted()
void TransformGesture__OnUnrooted_fn(TransformGesture* __this)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "OnUnrooted()");
    uPtr(__this->Impl)->remove_Started(uDelegate::New(::TYPES[30/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnStarted)));
    uPtr(__this->Impl)->remove_Ended(uDelegate::New(::TYPES[30/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnEnded)));
    uPtr(__this->Impl)->Detach();
    __this->Impl = NULL;
    __this->CheckNeedUpdate();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// protected virtual void OnUpdate()
void TransformGesture__OnUpdate_fn(TransformGesture* __this)
{
}

// public generated Fuse.Elements.InteractiveTransform get_Target()
void TransformGesture__get_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Fuse.Elements.InteractiveTransform value)
void TransformGesture__set_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* value)
{
    __this->Target(value);
}

// private void Update()
void TransformGesture__Update_fn(TransformGesture* __this)
{
    __this->Update();
}

// internal TransformGesture(Fuse.Elements.InteractiveTransform target) [instance]
void TransformGesture::ctor_3(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    Region = (uObject*)::g::Fuse::Motion::Simulation::BasicBoundedRegion2D::CreatePoints();
    ctor_2();
    Target(target);
}

// protected void CheckNeedUpdate() [instance]
void TransformGesture::CheckNeedUpdate()
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "CheckNeedUpdate()");
    bool need = IsRootingCompleted() && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(Region), ::TYPES[29/*Fuse.Motion.Simulation.Simulation*/]));

    if (need == _hasUpdate)
        return;

    _hasUpdate = need;

    if (need)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)TransformGesture__Update_fn, this), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)TransformGesture__Update_fn, this), 0);
}

// public generated Fuse.Elements.InteractiveTransform get_Target() [instance]
::g::Fuse::Elements::InteractiveTransform* TransformGesture::Target()
{
    return _Target;
}

// private generated void set_Target(Fuse.Elements.InteractiveTransform value) [instance]
void TransformGesture::Target(::g::Fuse::Elements::InteractiveTransform* value)
{
    _Target = value;
}

// private void Update() [instance]
void TransformGesture::Update()
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "Update()");
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(Region), ::TYPES[29/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    OnUpdate();
    CheckNeedUpdate();
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Internal/Clicker.uno
// -----------------------------------------------------------------------

// public abstract class WhileClickerTrigger
// {
static void WhileClickerTrigger_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Gestures::Clicker_typeof());
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
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(WhileClickerTrigger, Clicker), 0,
        ::g::Fuse::Input::GesturePriority_typeof(), offsetof(WhileClickerTrigger, _gesturePriority), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_GesturePriority", NULL, (void*)WhileClickerTrigger__get_GesturePriority_fn, 0, false, ::g::Fuse::Input::GesturePriority_typeof(), 0),
        new uFunction("set_GesturePriority", NULL, (void*)WhileClickerTrigger__set_GesturePriority_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::GesturePriority_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhileClickerTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileClickerTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhileClickerTrigger", options);
    type->fp_build_ = WhileClickerTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileClickerTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileClickerTrigger__OnUnrooted_fn;
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

// protected generated WhileClickerTrigger()
void WhileClickerTrigger__ctor_6_fn(WhileClickerTrigger* __this)
{
    __this->ctor_6();
}

// public Fuse.Input.GesturePriority get_GesturePriority()
void WhileClickerTrigger__get_GesturePriority_fn(WhileClickerTrigger* __this, int32_t* __retval)
{
    *__retval = __this->GesturePriority();
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value)
void WhileClickerTrigger__set_GesturePriority_fn(WhileClickerTrigger* __this, int32_t* value)
{
    __this->GesturePriority(*value);
}

// protected override sealed void OnRooted()
void WhileClickerTrigger__OnRooted_fn(WhileClickerTrigger* __this)
{
    uStackFrame __("Fuse.Gestures.WhileClickerTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->Parent(), __this->GesturePriority());
}

// protected override sealed void OnUnrooted()
void WhileClickerTrigger__OnUnrooted_fn(WhileClickerTrigger* __this)
{
    uStackFrame __("Fuse.Gestures.WhileClickerTrigger", "OnUnrooted()");
    uPtr(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected generated WhileClickerTrigger() [instance]
void WhileClickerTrigger::ctor_6()
{
    _gesturePriority = 4;
    ctor_5();
}

// public Fuse.Input.GesturePriority get_GesturePriority() [instance]
int32_t WhileClickerTrigger::GesturePriority()
{
    return _gesturePriority;
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value) [instance]
void WhileClickerTrigger::GesturePriority(int32_t value)
{
    _gesturePriority = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/WhileHovering.uno
// --------------------------------------------------------------------

// public sealed class WhileHovering
// {
static void WhileHovering_build(uType* type)
{
    ::TYPES[31] = ::g::Fuse::Input::PointerEnteredHandler_typeof();
    ::TYPES[32] = ::g::Fuse::Input::PointerLeftHandler_typeof();
    ::TYPES[33] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Pointer_typeof());
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
        new uFunction(".ctor", NULL, (void*)WhileHovering__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* WhileHovering_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 39;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileHovering);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhileHovering", options);
    type->fp_build_ = WhileHovering_build;
    type->fp_ctor_ = (void*)WhileHovering__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileHovering__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileHovering__OnUnrooted_fn;
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

// public generated WhileHovering()
void WhileHovering__ctor_5_fn(WhileHovering* __this)
{
    __this->ctor_5();
}

// public generated WhileHovering New()
void WhileHovering__New2_fn(WhileHovering** __retval)
{
    *__retval = WhileHovering::New2();
}

// private void OnIsContextEnabledChanged(object s, object a)
void WhileHovering__OnIsContextEnabledChanged_fn(WhileHovering* __this, uObject* s, uObject* a)
{
    __this->OnIsContextEnabledChanged(s, a);
}

// private void OnPointerEntered(object sender, object args)
void WhileHovering__OnPointerEntered_fn(WhileHovering* __this, uObject* sender, uObject* args)
{
    __this->OnPointerEntered(sender, args);
}

// private void OnPointerLeft(object sender, object args)
void WhileHovering__OnPointerLeft_fn(WhileHovering* __this, uObject* sender, uObject* args)
{
    __this->OnPointerLeft(sender, args);
}

// protected override sealed void OnRooted()
void WhileHovering__OnRooted_fn(WhileHovering* __this)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[31/*Fuse.Input.PointerEnteredHandler*/], (void*)WhileHovering__OnPointerEntered_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[32/*Fuse.Input.PointerLeftHandler*/], (void*)WhileHovering__OnPointerLeft_fn, __this));
    uPtr(__this->Parent())->add_IsContextEnabledChanged(uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)WhileHovering__OnIsContextEnabledChanged_fn, __this));
}

// protected override sealed void OnUnrooted()
void WhileHovering__OnUnrooted_fn(WhileHovering* __this)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[31/*Fuse.Input.PointerEnteredHandler*/], (void*)WhileHovering__OnPointerEntered_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[32/*Fuse.Input.PointerLeftHandler*/], (void*)WhileHovering__OnPointerLeft_fn, __this));
    uPtr(__this->Parent())->remove_IsContextEnabledChanged(uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)WhileHovering__OnIsContextEnabledChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileHovering() [instance]
void WhileHovering::ctor_5()
{
    ctor_4();
}

// private void OnIsContextEnabledChanged(object s, object a) [instance]
void WhileHovering::OnIsContextEnabledChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnIsContextEnabledChanged(object,object)");

    if (!uPtr(Parent())->IsContextEnabled())
        Deactivate();
}

// private void OnPointerEntered(object sender, object args) [instance]
void WhileHovering::OnPointerEntered(uObject* sender, uObject* args)
{
    Activate(NULL);
}

// private void OnPointerLeft(object sender, object args) [instance]
void WhileHovering::OnPointerLeft(uObject* sender, uObject* args)
{
    Deactivate();
}

// public generated WhileHovering New() [static]
WhileHovering* WhileHovering::New2()
{
    WhileHovering* obj1 = (WhileHovering*)uNew(WhileHovering_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Pressed.uno
// --------------------------------------------------------------

// public sealed class WhilePressed
// {
static void WhilePressed_build(uType* type)
{
    ::TYPES[34] = ::g::Fuse::Input::PointerPressedArgs_typeof();
    ::TYPES[9] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[31] = ::g::Fuse::Input::PointerEnteredHandler_typeof();
    ::TYPES[32] = ::g::Fuse::Input::PointerLeftHandler_typeof();
    ::TYPES[22] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[23] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[33] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Gestures::Clicker_typeof(),
        ::g::Fuse::Input::Pointer_typeof());
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
        ::g::Uno::Float2_typeof(), offsetof(WhilePressed, _pressedPosition), 0,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(WhilePressed, Clicker), 0,
        ::g::Uno::Platform::PointerType_typeof(), offsetof(WhilePressed, _pointerType), 0,
        ::g::Uno::Bool_typeof(), offsetof(WhilePressed, _inside), 0,
        ::g::Uno::Bool_typeof(), offsetof(WhilePressed, _Capture), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Capture", NULL, (void*)WhilePressed__get_Capture_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Capture", NULL, (void*)WhilePressed__set_Capture_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)WhilePressed__New2_fn, 0, true, type, 0),
        new uFunction("get_PointerType", NULL, (void*)WhilePressed__get_PointerType_fn, 0, false, ::g::Uno::Platform::PointerType_typeof(), 0),
        new uFunction("set_PointerType", NULL, (void*)WhilePressed__set_PointerType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::PointerType_typeof()),
        new uFunction("get_PressedPosition", NULL, (void*)WhilePressed__get_PressedPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_PressedPosition", NULL, (void*)WhilePressed__set_PressedPosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhilePressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 45;
    options.InterfaceCount = 9;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(WhilePressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhilePressed", options);
    type->fp_build_ = WhilePressed_build;
    type->fp_ctor_ = (void*)WhilePressed__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhilePressed__OnUnrooted_fn;
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

// public generated WhilePressed()
void WhilePressed__ctor_6_fn(WhilePressed* __this)
{
    __this->ctor_6();
}

// public generated bool get_Capture()
void WhilePressed__get_Capture_fn(WhilePressed* __this, bool* __retval)
{
    *__retval = __this->Capture();
}

// public generated void set_Capture(bool value)
void WhilePressed__set_Capture_fn(WhilePressed* __this, bool* value)
{
    __this->Capture(*value);
}

// private void CheckStatus(object s, object a)
void WhilePressed__CheckStatus_fn(WhilePressed* __this, uObject* s, uObject* a)
{
    __this->CheckStatus(s, a);
}

// public generated WhilePressed New()
void WhilePressed__New2_fn(WhilePressed** __retval)
{
    *__retval = WhilePressed::New2();
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count)
void WhilePressed__OnClickerPressing_fn(WhilePressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* count)
{
    __this->OnClickerPressing(args, *count);
}

// private void OnPointerEntered(object sender, object args)
void WhilePressed__OnPointerEntered_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerEntered(sender, args);
}

// private void OnPointerLeft(object sender, object args)
void WhilePressed__OnPointerLeft_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerLeft(sender, args);
}

// protected override sealed void OnRooted()
void WhilePressed__OnRooted_fn(WhilePressed* __this)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (__this->Capture())
    {
        __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->Parent(), 2);
        uPtr(__this->Clicker)->add_PressingEvent(uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
    }
    else
    {
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[31/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[32/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[22/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::VisualEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[23/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->Parent())->add_IsContextEnabledChanged(uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        __this->_inside = false;
    }

    __this->SetActive(false);
}

// protected override sealed void OnUnrooted()
void WhilePressed__OnUnrooted_fn(WhilePressed* __this)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnUnrooted()");

    if (__this->Capture())
    {
        uPtr(__this->Clicker)->remove_PressingEvent(uDelegate::New(::TYPES[9/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
        uPtr(__this->Clicker)->Detach();
        __this->Clicker = NULL;
    }
    else
    {
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[31/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[32/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[22/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::VisualEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[23/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->Parent())->remove_IsContextEnabledChanged(uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Uno.Platform.PointerType get_PointerType()
void WhilePressed__get_PointerType_fn(WhilePressed* __this, int32_t* __retval)
{
    *__retval = __this->PointerType();
}

// public void set_PointerType(Uno.Platform.PointerType value)
void WhilePressed__set_PointerType_fn(WhilePressed* __this, int32_t* value)
{
    __this->PointerType(*value);
}

// public float2 get_PressedPosition()
void WhilePressed__get_PressedPosition_fn(WhilePressed* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PressedPosition();
}

// public void set_PressedPosition(float2 value)
void WhilePressed__set_PressedPosition_fn(WhilePressed* __this, ::g::Uno::Float2* value)
{
    __this->PressedPosition(*value);
}

// public generated WhilePressed() [instance]
void WhilePressed::ctor_6()
{
    ctor_5();
}

// public generated bool get_Capture() [instance]
bool WhilePressed::Capture()
{
    return _Capture;
}

// public generated void set_Capture(bool value) [instance]
void WhilePressed::Capture(bool value)
{
    _Capture = value;
}

// private void CheckStatus(object s, object a) [instance]
void WhilePressed::CheckStatus(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "CheckStatus(object,object)");
    ::g::Fuse::Input::PointerPressedArgs* ppa = uAs< ::g::Fuse::Input::PointerPressedArgs*>(a, ::TYPES[34/*Fuse.Input.PointerPressedArgs*/]);

    if (ppa != NULL)
        _pressedPosition = uPtr(Parent())->WindowToLocal(uPtr(ppa)->WindowPoint());

    SetActive((_inside && uPtr(Parent())->IsContextEnabled()) && ::g::Fuse::Input::Pointer::IsPressed());
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count) [instance]
void WhilePressed::OnClickerPressing(::g::Fuse::Input::PointerEventArgs* args, int32_t count)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnClickerPressing(Fuse.Input.PointerEventArgs,int)");
    bool q = (PointerType() == 0) || (PointerType() == uPtr(args)->PointerType());
    bool on = count > 0;

    if (q)
        SetActive(on);
}

// private void OnPointerEntered(object sender, object args) [instance]
void WhilePressed::OnPointerEntered(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnPointerEntered(object,object)");
    _inside = true;
    CheckStatus(sender, args);
}

// private void OnPointerLeft(object sender, object args) [instance]
void WhilePressed::OnPointerLeft(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnPointerLeft(object,object)");
    _inside = false;
    CheckStatus(sender, args);
}

// public Uno.Platform.PointerType get_PointerType() [instance]
int32_t WhilePressed::PointerType()
{
    return _pointerType;
}

// public void set_PointerType(Uno.Platform.PointerType value) [instance]
void WhilePressed::PointerType(int32_t value)
{
    _pointerType = value;
}

// public float2 get_PressedPosition() [instance]
::g::Uno::Float2 WhilePressed::PressedPosition()
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "get_PressedPosition()");
    return (Clicker != NULL) ? uPtr(Clicker)->PressedPosition() : _pressedPosition;
}

// public void set_PressedPosition(float2 value) [instance]
void WhilePressed::PressedPosition(::g::Uno::Float2 value)
{
}

// public generated WhilePressed New() [static]
WhilePressed* WhilePressed::New2()
{
    WhilePressed* obj1 = (WhilePressed*)uNew(WhilePressed_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Swipe.uno
// ------------------------------------------------------------

// public sealed class WhileSwipeActive
// {
static void WhileSwipeActive_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSwipeActive_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileSwipeActive_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileSwipeActive_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileSwipeActive_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WhileSwipeActive_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSwipeActive_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSwipeActive_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileSwipeActive_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileSwipeActive_type, interface8),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(WhileSwipeActive_type, interface9));
    type->SetFields(40,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(WhileSwipeActive, _region), 0,
        ::g::Uno::Float_typeof(), offsetof(WhileSwipeActive, _threshold), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(WhileSwipeActive, _Source), 0);
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)WhileSwipeActive__New2_fn, 0, true, type, 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)WhileSwipeActive__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0),
        new uFunction("get_Threshold", NULL, (void*)WhileSwipeActive__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Threshold", NULL, (void*)WhileSwipeActive__set_Threshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

WhileSwipeActive_type* WhileSwipeActive_typeof()
{
    static uSStrong<WhileSwipeActive_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileSwipeActive);
    options.TypeSize = sizeof(WhileSwipeActive_type);
    type = (WhileSwipeActive_type*)uClassType::New("Fuse.Gestures.WhileSwipeActive", options);
    type->fp_build_ = WhileSwipeActive_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileSwipeActive__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileSwipeActive__OnUnrooted_fn;
    type->interface9.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))WhileSwipeActive__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// public WhileSwipeActive(Fuse.Gestures.SwipeGesture source)
void WhileSwipeActive__ctor_6_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_6(source);
}

// public WhileSwipeActive New(Fuse.Gestures.SwipeGesture source)
void WhileSwipeActive__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, WhileSwipeActive** __retval)
{
    *__retval = WhileSwipeActive::New2(source);
}

// private void OnProgressChanged(double progress)
void WhileSwipeActive__OnProgressChanged1_fn(WhileSwipeActive* __this, double* progress)
{
    __this->OnProgressChanged1(*progress);
}

// protected override sealed void OnRooted()
void WhileSwipeActive__OnRooted_fn(WhileSwipeActive* __this)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->AddPropertyListener((uObject*)__this);
    __this->OnProgressChanged1(uPtr(uPtr(__this->Source())->Region())->Progress());
}

// protected override sealed void OnUnrooted()
void WhileSwipeActive__OnUnrooted_fn(WhileSwipeActive* __this)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "OnUnrooted()");
    uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source()
void WhileSwipeActive__get_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value)
void WhileSwipeActive__set_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// public float get_Threshold()
void WhileSwipeActive__get_Threshold_fn(WhileSwipeActive* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

// public void set_Threshold(float value)
void WhileSwipeActive__set_Threshold_fn(WhileSwipeActive* __this, float* value)
{
    __this->Threshold(*value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector prop)
void WhileSwipeActive__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileSwipeActive* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((sender != __this->_region) || ::g::Uno::UX::Selector__op_Inequality(prop_, ::g::Fuse::Gestures::Internal::SwipeRegion::ProgressName()))
        return;

    __this->OnProgressChanged1(uPtr(__this->_region)->Progress());
}

// public WhileSwipeActive(Fuse.Gestures.SwipeGesture source) [instance]
void WhileSwipeActive::ctor_6(::g::Fuse::Gestures::SwipeGesture* source)
{
    _threshold = 1.0f;
    ctor_5();
    Source(source);
}

// private void OnProgressChanged(double progress) [instance]
void WhileSwipeActive::OnProgressChanged1(double progress)
{
    SetActive(progress >= (double)Threshold());
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance]
::g::Fuse::Gestures::SwipeGesture* WhileSwipeActive::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance]
void WhileSwipeActive::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public float get_Threshold() [instance]
float WhileSwipeActive::Threshold()
{
    return _threshold;
}

// public void set_Threshold(float value) [instance]
void WhileSwipeActive::Threshold(float value)
{
    _threshold = value;
}

// public WhileSwipeActive New(Fuse.Gestures.SwipeGesture source) [static]
WhileSwipeActive* WhileSwipeActive::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    WhileSwipeActive* obj1 = (WhileSwipeActive*)uNew(WhileSwipeActive_typeof());
    obj1->ctor_6(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/Swipe.uno
// ------------------------------------------------------------

// public sealed class WhileSwiping
// {
static void WhileSwiping_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSwiping_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileSwiping_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileSwiping_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileSwiping_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WhileSwiping_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSwiping_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSwiping_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileSwiping_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileSwiping_type, interface8),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(WhileSwiping_type, interface9));
    type->SetFields(40,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(WhileSwiping, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(WhileSwiping, _Source), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileSwiping__New2_fn, 0, true, type, 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)WhileSwiping__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
}

WhileSwiping_type* WhileSwiping_typeof()
{
    static uSStrong<WhileSwiping_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileSwiping);
    options.TypeSize = sizeof(WhileSwiping_type);
    type = (WhileSwiping_type*)uClassType::New("Fuse.Gestures.WhileSwiping", options);
    type->fp_build_ = WhileSwiping_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileSwiping__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileSwiping__OnUnrooted_fn;
    type->interface9.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))WhileSwiping__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// public WhileSwiping(Fuse.Gestures.SwipeGesture source)
void WhileSwiping__ctor_6_fn(WhileSwiping* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_6(source);
}

// public WhileSwiping New(Fuse.Gestures.SwipeGesture source)
void WhileSwiping__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, WhileSwiping** __retval)
{
    *__retval = WhileSwiping::New2(source);
}

// private void OnInProgressChanged(bool inProgress)
void WhileSwiping__OnInProgressChanged_fn(WhileSwiping* __this, bool* inProgress)
{
    __this->OnInProgressChanged(*inProgress);
}

// protected override sealed void OnRooted()
void WhileSwiping__OnRooted_fn(WhileSwiping* __this)
{
    uStackFrame __("Fuse.Gestures.WhileSwiping", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->AddPropertyListener((uObject*)__this);
    __this->OnInProgressChanged(uPtr(__this->_region)->InProgress());
}

// protected override sealed void OnUnrooted()
void WhileSwiping__OnUnrooted_fn(WhileSwiping* __this)
{
    uStackFrame __("Fuse.Gestures.WhileSwiping", "OnUnrooted()");
    uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source()
void WhileSwiping__get_Source_fn(WhileSwiping* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value)
void WhileSwiping__set_Source_fn(WhileSwiping* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector prop)
void WhileSwiping__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileSwiping* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Gestures.WhileSwiping", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((sender != __this->_region) || ::g::Uno::UX::Selector__op_Inequality(prop_, ::g::Fuse::Gestures::Internal::SwipeRegion::InProgressName()))
        return;

    __this->OnInProgressChanged(uPtr(__this->_region)->InProgress());
}

// public WhileSwiping(Fuse.Gestures.SwipeGesture source) [instance]
void WhileSwiping::ctor_6(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_5();
    Source(source);
}

// private void OnInProgressChanged(bool inProgress) [instance]
void WhileSwiping::OnInProgressChanged(bool inProgress)
{
    SetActive(inProgress);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance]
::g::Fuse::Gestures::SwipeGesture* WhileSwiping::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance]
void WhileSwiping::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public WhileSwiping New(Fuse.Gestures.SwipeGesture source) [static]
WhileSwiping* WhileSwiping::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    WhileSwiping* obj1 = (WhileSwiping*)uNew(WhileSwiping_typeof());
    obj1->ctor_6(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/ZoomGesture.uno
// ------------------------------------------------------------------

// public sealed class ZoomGesture
// {
static void ZoomGesture_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[35] = ::g::Fuse::Gestures::Internal::TwoFingerZoomHandler_typeof();
    ::TYPES[20] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface6));
    type->SetFields(22,
        ::g::Uno::Float_typeof(), offsetof(ZoomGesture, _prevZoom), 0,
        ::g::Uno::Float_typeof(), offsetof(ZoomGesture, _startZoom), 0,
        ::g::Uno::Float_typeof(), offsetof(ZoomGesture, _maximum), 0,
        ::g::Uno::Float_typeof(), offsetof(ZoomGesture, _minimum), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Maximum", NULL, (void*)ZoomGesture__get_Maximum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)ZoomGesture__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Minimum", NULL, (void*)ZoomGesture__get_Minimum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)ZoomGesture__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)ZoomGesture__New2_fn, 0, true, type, 1, ::g::Fuse::Elements::InteractiveTransform_typeof()));
}

::g::Fuse::Gestures::TransformGesture_type* ZoomGesture_typeof()
{
    static uSStrong< ::g::Fuse::Gestures::TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::TransformGesture_typeof();
    options.FieldCount = 26;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ZoomGesture);
    options.TypeSize = sizeof(::g::Fuse::Gestures::TransformGesture_type);
    type = (::g::Fuse::Gestures::TransformGesture_type*)uClassType::New("Fuse.Gestures.ZoomGesture", options);
    type->fp_build_ = ZoomGesture_build;
    type->fp_OnEnded = (void(*)(::g::Fuse::Gestures::TransformGesture*))ZoomGesture__OnEnded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ZoomGesture__OnRooted_fn;
    type->fp_OnStarted = (void(*)(::g::Fuse::Gestures::TransformGesture*))ZoomGesture__OnStarted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ZoomGesture__OnUnrooted_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Gestures::TransformGesture*))ZoomGesture__OnUpdate_fn;
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

// public ZoomGesture(Fuse.Elements.InteractiveTransform target)
void ZoomGesture__ctor_4_fn(ZoomGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_4(target);
}

// public float get_Maximum()
void ZoomGesture__get_Maximum_fn(ZoomGesture* __this, float* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(float value)
void ZoomGesture__set_Maximum_fn(ZoomGesture* __this, float* value)
{
    __this->Maximum(*value);
}

// public float get_Minimum()
void ZoomGesture__get_Minimum_fn(ZoomGesture* __this, float* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(float value)
void ZoomGesture__set_Minimum_fn(ZoomGesture* __this, float* value)
{
    __this->Minimum(*value);
}

// public ZoomGesture New(Fuse.Elements.InteractiveTransform target)
void ZoomGesture__New2_fn(::g::Fuse::Elements::InteractiveTransform* target, ZoomGesture** __retval)
{
    *__retval = ZoomGesture::New2(target);
}

// protected override sealed void OnEnded()
void ZoomGesture__OnEnded_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnEnded()");
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->Region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
    __this->CheckNeedUpdate();
}

// protected override sealed void OnRooted()
void ZoomGesture__OnRooted_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnRooted()");
    ::g::Fuse::Gestures::TransformGesture__OnRooted_fn(__this);
    uPtr(__this->Impl)->add_Zoomed(uDelegate::New(::TYPES[35/*Fuse.Gestures.Internal.TwoFingerZoomHandler*/], (void*)ZoomGesture__OnZoomed_fn, __this));
}

// protected override sealed void OnStarted()
void ZoomGesture__OnStarted_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnStarted()");
    __this->_startZoom = uPtr(__this->Target())->ZoomFactor();
    __this->_prevZoom = ::g::Uno::Math::Log1(__this->_startZoom);
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[20/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(::g::Uno::Float2__New2(__this->_prevZoom, 0.0f)));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(__this->Region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(::g::Uno::Math::Log1(__this->Minimum()), 0.0f));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(__this->Region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(::g::Uno::Math::Log1(__this->Maximum()), 0.0f));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->Region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]));
    __this->CheckNeedUpdate();
}

// protected override sealed void OnUnrooted()
void ZoomGesture__OnUnrooted_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnUnrooted()");
    uPtr(__this->Impl)->remove_Zoomed(uDelegate::New(::TYPES[35/*Fuse.Gestures.Internal.TwoFingerZoomHandler*/], (void*)ZoomGesture__OnZoomed_fn, __this));
    ::g::Fuse::Gestures::TransformGesture__OnUnrooted_fn(__this);
}

// protected override sealed void OnUpdate()
void ZoomGesture__OnUpdate_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnUpdate()");
    ::g::Uno::Float2 ret2;
    uPtr(__this->Target())->SetZoomFactor(::g::Uno::Math::Exp1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[20/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret2), ret2).X), NULL);
}

// private void OnZoomed(float factor)
void ZoomGesture__OnZoomed_fn(ZoomGesture* __this, float* factor)
{
    __this->OnZoomed(*factor);
}

// public ZoomGesture(Fuse.Elements.InteractiveTransform target) [instance]
void ZoomGesture::ctor_4(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    _maximum = FLT_INF;
    _minimum = 0.0f;
    ctor_3(target);
    Region = (uObject*)::g::Fuse::Motion::Simulation::BasicBoundedRegion2D::CreateExponential();
}

// public float get_Maximum() [instance]
float ZoomGesture::Maximum()
{
    return _maximum;
}

// public void set_Maximum(float value) [instance]
void ZoomGesture::Maximum(float value)
{
    _maximum = value;
}

// public float get_Minimum() [instance]
float ZoomGesture::Minimum()
{
    return _minimum;
}

// public void set_Minimum(float value) [instance]
void ZoomGesture::Minimum(float value)
{
    _minimum = value;
}

// private void OnZoomed(float factor) [instance]
void ZoomGesture::OnZoomed(float factor)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnZoomed(float)");
    ::g::Uno::Float2 ret3;
    float current = _startZoom * factor;
    float step = ::g::Uno::Math::Log1(current) - _prevZoom;
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(Region), ::TYPES[18/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(step, 0.0f));
    _prevZoom = ::g::Uno::Math::Log1(current);
    uPtr(Target())->ZoomFactor(::g::Uno::Math::Exp1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(Region), ::TYPES[20/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret3), ret3).X));
}

// public ZoomGesture New(Fuse.Elements.InteractiveTransform target) [static]
ZoomGesture* ZoomGesture::New2(::g::Fuse::Elements::InteractiveTransform* target)
{
    ZoomGesture* obj1 = (ZoomGesture*)uNew(ZoomGesture_typeof());
    obj1->ctor_4(target);
    return obj1;
}
// }

}}} // ::g::Fuse::Gestures
