// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.HTML.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.LauncherImpl.InterAppLauncher.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.Actions.BringIntoView.h>
#include <Fuse.Triggers.Actions.BringToFront.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.CancelInteractions.h>
#include <Fuse.Triggers.Actions.Collapse.h>
#include <Fuse.Triggers.Actions.DebugAction.h>
#include <Fuse.Triggers.Actions.DebugFrame.h>
#include <Fuse.Triggers.Actions.DebugProperty-1.h>
#include <Fuse.Triggers.Actions.DebugTime.h>
#include <Fuse.Triggers.Actions.EvaluateJS.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.Hide.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions.ITaggedDebugProperty.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.Actions.JSEventArgs.h>
#include <Fuse.Triggers.Actions.JSEventHandler.h>
#include <Fuse.Triggers.Actions.LaunchUri.h>
#include <Fuse.Triggers.Actions.LoadHtml.h>
#include <Fuse.Triggers.Actions.LoadUrl.h>
#include <Fuse.Triggers.Actions.Pause.h>
#include <Fuse.Triggers.Actions.Play.h>
#include <Fuse.Triggers.Actions.PlaybackAction.h>
#include <Fuse.Triggers.Actions.PlayTo.h>
#include <Fuse.Triggers.Actions.Pulse.h>
#include <Fuse.Triggers.Actions.PulseBackward.h>
#include <Fuse.Triggers.Actions.PulseForward.h>
#include <Fuse.Triggers.Actions.RaiseUserEvent.h>
#include <Fuse.Triggers.Actions.ReleaseFocus.h>
#include <Fuse.Triggers.Actions.ReleasePage.h>
#include <Fuse.Triggers.Actions.Reload.h>
#include <Fuse.Triggers.Actions.Resume.h>
#include <Fuse.Triggers.Actions.SendToBack.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.Show.h>
#include <Fuse.Triggers.Actions.Stop.h>
#include <Fuse.Triggers.Actions.StopLoading.h>
#include <Fuse.Triggers.Actions.TimelineAction.h>
#include <Fuse.Triggers.Actions.TimelineActionHow.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions.TransitionLayout.h>
#include <Fuse.Triggers.Actions.TransitionState.h>
#include <Fuse.Triggers.Actions.TransitionStateType.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Actions.TriggerWhen.h>
#include <Fuse.Triggers.Actions.UserEventArg.h>
#include <Fuse.Triggers.Actions.WebViewNavAction.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.LayoutTransitionedArgs.h>
#include <Fuse.Triggers.LayoutTransitionedHandler.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEvent.h>
#include <Fuse.Visual.CancelInteractionsType.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Fuse.VisualEventArgs.h>
#include <Fuse.VisualEventHandler.h>
#include <Fuse.VisualEventMode.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4x4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property1-1.h>
static uString* STRINGS[32];
static uType* TYPES[35];

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// /usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/Actions/BringIntoView.uno
// -------------------------------------------------------------------------------------

// public sealed class BringIntoView
// {
static void BringIntoView_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BringIntoView__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* BringIntoView_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BringIntoView);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringIntoView", options);
    type->fp_build_ = BringIntoView_build;
    type->fp_ctor_ = (void*)BringIntoView__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringIntoView__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated BringIntoView()
void BringIntoView__ctor_2_fn(BringIntoView* __this)
{
    __this->ctor_2();
}

// public generated BringIntoView New()
void BringIntoView__New2_fn(BringIntoView** __retval)
{
    *__retval = BringIntoView::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void BringIntoView__Perform_fn(BringIntoView* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.BringIntoView", "Perform(Fuse.Node)");
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>((::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]), ::TYPES[0/*Fuse.Elements.Element*/]);

    if (elm != NULL)
        uPtr(elm)->BringIntoView();
}

// public generated BringIntoView() [instance]
void BringIntoView::ctor_2()
{
    ctor_1();
}

// public generated BringIntoView New() [static]
BringIntoView* BringIntoView::New2()
{
    BringIntoView* obj1 = (BringIntoView*)uNew(BringIntoView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/1.12.0/Triggers/BringToFront.uno
// ----------------------------------------------------------------------------

// public sealed class BringToFront
// {
static void BringToFront_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::TYPES[2/*Fuse.Visual*/], offsetof(BringToFront, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)BringToFront__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)BringToFront__get_Target_fn, 0, false, ::TYPES[2/*Fuse.Visual*/], 0),
        new uFunction("set_Target", NULL, (void*)BringToFront__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*Fuse.Visual*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* BringToFront_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BringToFront);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringToFront", options);
    type->fp_build_ = BringToFront_build;
    type->fp_ctor_ = (void*)BringToFront__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringToFront__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated BringToFront()
void BringToFront__ctor_2_fn(BringToFront* __this)
{
    __this->ctor_2();
}

// public generated BringToFront New()
void BringToFront__New2_fn(BringToFront** __retval)
{
    *__retval = BringToFront::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void BringToFront__Perform_fn(BringToFront* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.BringToFront", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* ind1;
    ind1 = __this->Target();
    ::g::Fuse::Visual* elm = (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]);

    if (elm != NULL)
    {
        ::g::Fuse::Visual* panel = uAs< ::g::Fuse::Visual*>(uPtr(elm)->Parent(), ::TYPES[2/*Fuse.Visual*/]);

        if (panel != NULL)
            uPtr(panel)->BringToFront(elm);
    }
}

// public generated Fuse.Visual get_Target()
void BringToFront__get_Target_fn(BringToFront* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value)
void BringToFront__set_Target_fn(BringToFront* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated BringToFront() [instance]
void BringToFront::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Visual get_Target() [instance]
::g::Fuse::Visual* BringToFront::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance]
void BringToFront::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated BringToFront New() [static]
BringToFront* BringToFront::New2()
{
    BringToFront* obj2 = (BringToFront*)uNew(BringToFront_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Callback.uno
// -----------------------------------------------------------------------

// public sealed class Callback
// {
static void Callback_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::VisualEventHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Uno::Action_typeof(), offsetof(Callback, _Action), 0,
        ::TYPES[3/*Fuse.VisualEventHandler*/], offsetof(Callback, Handler1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Action", NULL, (void*)Callback__get_Action_fn, 0, false, ::g::Uno::Action_typeof(), 0),
        new uFunction("set_Action", NULL, (void*)Callback__set_Action_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("add_Handler", NULL, (void*)Callback__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[3/*Fuse.VisualEventHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)Callback__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[3/*Fuse.VisualEventHandler*/]),
        new uFunction(".ctor", NULL, (void*)Callback__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Callback_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Callback);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Callback", options);
    type->fp_build_ = Callback_build;
    type->fp_ctor_ = (void*)Callback__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Callback__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Callback()
void Callback__ctor_2_fn(Callback* __this)
{
    __this->ctor_2();
}

// public generated Uno.Action get_Action()
void Callback__get_Action_fn(Callback* __this, uDelegate** __retval)
{
    *__retval = __this->Action();
}

// public generated void set_Action(Uno.Action value)
void Callback__set_Action_fn(Callback* __this, uDelegate* value)
{
    __this->Action(value);
}

// public generated void add_Handler(Fuse.VisualEventHandler value)
void Callback__add_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.VisualEventHandler value)
void Callback__remove_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Callback New()
void Callback__New2_fn(Callback** __retval)
{
    *__retval = Callback::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void Callback__Perform_fn(Callback* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Callback", "Perform(Fuse.Node)");

    if (::g::Uno::Delegate::op_Inequality(__this->Action(), NULL))
        uPtr(__this->Action())->InvokeVoid();

    if (::g::Uno::Delegate::op_Inequality(__this->Handler1, NULL))
    {
        ::g::Fuse::Visual* visual = (::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]);
        uPtr(__this->Handler1)->Invoke(2, visual, (::g::Fuse::VisualEventArgs*)::g::Fuse::VisualEventArgs::New2(visual));
    }
}

// public generated Callback() [instance]
void Callback::ctor_2()
{
    ctor_1();
}

// public generated Uno.Action get_Action() [instance]
uDelegate* Callback::Action()
{
    return _Action;
}

// public generated void set_Action(Uno.Action value) [instance]
void Callback::Action(uDelegate* value)
{
    _Action = value;
}

// public generated void add_Handler(Fuse.VisualEventHandler value) [instance]
void Callback::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Actions.Callback", "add_Handler(Fuse.VisualEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[3/*Fuse.VisualEventHandler*/]);
}

// public generated void remove_Handler(Fuse.VisualEventHandler value) [instance]
void Callback::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Actions.Callback", "remove_Handler(Fuse.VisualEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[3/*Fuse.VisualEventHandler*/]);
}

// public generated Callback New() [static]
Callback* Callback::New2()
{
    Callback* obj1 = (Callback*)uNew(Callback_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/CancelInteractions.uno
// ---------------------------------------------------------------------------------

// public sealed class CancelInteractions
// {
static void CancelInteractions_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Fuse::Visual_typeof(), offsetof(CancelInteractions, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)CancelInteractions__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)CancelInteractions__get_Target_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)CancelInteractions__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* CancelInteractions_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CancelInteractions);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.CancelInteractions", options);
    type->fp_build_ = CancelInteractions_build;
    type->fp_ctor_ = (void*)CancelInteractions__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))CancelInteractions__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated CancelInteractions()
void CancelInteractions__ctor_2_fn(CancelInteractions* __this)
{
    __this->ctor_2();
}

// public generated CancelInteractions New()
void CancelInteractions__New2_fn(CancelInteractions** __retval)
{
    *__retval = CancelInteractions::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void CancelInteractions__Perform_fn(CancelInteractions* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.CancelInteractions", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* ind1;
    ind1 = __this->Target();
    ::g::Fuse::Visual* t = (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]);

    if (t != NULL)
        uPtr(t)->CancelInteractions(1);
}

// public generated Fuse.Visual get_Target()
void CancelInteractions__get_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value)
void CancelInteractions__set_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated CancelInteractions() [instance]
void CancelInteractions::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Visual get_Target() [instance]
::g::Fuse::Visual* CancelInteractions::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance]
void CancelInteractions::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated CancelInteractions New() [static]
CancelInteractions* CancelInteractions::New2()
{
    CancelInteractions* obj2 = (CancelInteractions*)uNew(CancelInteractions_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Visibility.uno
// -------------------------------------------------------------------------

// public sealed class Collapse
// {
static void Collapse_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Cannot find an Element/ICollapse");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Visibility.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[4] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.Actions.ICollapse>*/, ::g::Fuse::Triggers::Actions::ICollapse_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Triggers::Actions::ICollapse_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Collapse__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Collapse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Collapse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Collapse", options);
    type->fp_build_ = Collapse_build;
    type->fp_ctor_ = (void*)Collapse__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Collapse__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Collapse()
void Collapse__ctor_2_fn(Collapse* __this)
{
    __this->ctor_2();
}

// public generated Collapse New()
void Collapse__New2_fn(Collapse** __retval)
{
    *__retval = Collapse::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void Collapse__Perform_fn(Collapse* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Collapse", "Perform(Fuse.Node)");
    uObject* t = (uObject*)uPtr(target)->FindByType(::TYPES[4/*Fuse.Node.FindByType<Fuse.Triggers.Actions.ICollapse>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::Actions::ICollapse::Collapse(uInterface(uPtr(t), ::TYPES[5/*Fuse.Triggers.Actions.ICollapse*/]));
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"Cannot find...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 110, ::STRINGS[2/*"Perform"*/], NULL);
}

// public generated Collapse() [instance]
void Collapse::ctor_2()
{
    ctor_1();
}

// public generated Collapse New() [static]
Collapse* Collapse::New2()
{
    Collapse* obj1 = (Collapse*)uNew(Collapse_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/DebugAction.uno
// --------------------------------------------------------------------------

// public sealed class DebugAction
// {
static void DebugAction_build(uType* type)
{
    ::STRINGS[3] = uString::Const(" = ");
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof();
    ::TYPES[8] = ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[7/*Fuse.Triggers.Actions.ITaggedDebugProperty*/], NULL);
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::TYPES[8/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>*/], offsetof(DebugAction, _props), 0,
        ::g::Uno::String_typeof(), offsetof(DebugAction, _Message), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Message", NULL, (void*)DebugAction__get_Message_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Message", NULL, (void*)DebugAction__set_Message_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)DebugAction__New2_fn, 0, true, type, 0),
        new uFunction("get_Properties", NULL, (void*)DebugAction__get_Properties_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[7/*Fuse.Triggers.Actions.ITaggedDebugProperty*/], NULL), 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* DebugAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DebugAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.DebugAction", options);
    type->fp_build_ = DebugAction_build;
    type->fp_ctor_ = (void*)DebugAction__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))DebugAction__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated DebugAction()
void DebugAction__ctor_2_fn(DebugAction* __this)
{
    __this->ctor_2();
}

// public generated string get_Message()
void DebugAction__get_Message_fn(DebugAction* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// public generated void set_Message(string value)
void DebugAction__set_Message_fn(DebugAction* __this, uString* value)
{
    __this->Message(value);
}

// public generated DebugAction New()
void DebugAction__New2_fn(DebugAction** __retval)
{
    *__retval = DebugAction::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void DebugAction__Perform_fn(DebugAction* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.DebugAction", "Perform(Fuse.Node)");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret3;

    if (::g::Uno::String::op_Inequality(__this->Message(), NULL))
        ::g::Uno::Diagnostics::Debug::Log2(__this->Message(), 0);

    if (__this->_props != NULL)
    {
        ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_props), &ret3), ret3);

        {
            try
            {
                {
                    while (enum1.MoveNext(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]))
                    {
                        uObject* prop = enum1.Current(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]);
                        ::g::Uno::Diagnostics::Debug::Log2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Fuse::Triggers::Actions::ITaggedDebugProperty::GetTag(uInterface(uPtr(prop), ::TYPES[7/*Fuse.Triggers.Actions.ITaggedDebugProperty*/])), ::STRINGS[3/*" = "*/]), ::g::Fuse::Triggers::Actions::ITaggedDebugProperty::GetStringValue(uInterface(uPtr(prop), ::TYPES[7/*Fuse.Triggers.Actions.ITaggedDebugProperty*/]))), 0);
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum1.Dispose(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]);
                }
                                throw __t;
                goto __after_finally_0;
            }

            {
                enum1.Dispose(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]);
            }
            __after_finally_0:;
        }
    }
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.ITaggedDebugProperty> get_Properties()
void DebugAction__get_Properties_fn(DebugAction* __this, uObject** __retval)
{
    *__retval = __this->Properties();
}

// public generated DebugAction() [instance]
void DebugAction::ctor_2()
{
    ctor_1();
}

// public generated string get_Message() [instance]
uString* DebugAction::Message()
{
    return _Message;
}

// public generated void set_Message(string value) [instance]
void DebugAction::Message(uString* value)
{
    _Message = value;
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.ITaggedDebugProperty> get_Properties() [instance]
uObject* DebugAction::Properties()
{
    uStackFrame __("Fuse.Triggers.Actions.DebugAction", "get_Properties()");

    if (_props == NULL)
        _props = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[8/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>*/]));

    return (uObject*)_props;
}

// public generated DebugAction New() [static]
DebugAction* DebugAction::New2()
{
    DebugAction* obj2 = (DebugAction*)uNew(DebugAction_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/DebugProperty.uno
// ----------------------------------------------------------------------------

// public sealed class DebugFrame
// {
static void DebugFrame_build(uType* type)
{
    ::STRINGS[4] = uString::Const("");
    ::STRINGS[5] = uString::Const("Frame");
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), offsetof(DebugFrame_type, interface0));
    type->Reflection.SetFunctions(3,
        new uFunction("GetStringValue", NULL, (void*)DebugFrame__GetStringValue_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetTag", NULL, (void*)DebugFrame__GetTag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DebugFrame__New1_fn, 0, true, type, 0));
}

DebugFrame_type* DebugFrame_typeof()
{
    static uSStrong<DebugFrame_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DebugFrame);
    options.TypeSize = sizeof(DebugFrame_type);
    type = (DebugFrame_type*)uClassType::New("Fuse.Triggers.Actions.DebugFrame", options);
    type->fp_build_ = DebugFrame_build;
    type->fp_ctor_ = (void*)DebugFrame__New1_fn;
    type->interface0.fp_GetTag = (void(*)(uObject*, uString**))DebugFrame__GetTag_fn;
    type->interface0.fp_GetStringValue = (void(*)(uObject*, uString**))DebugFrame__GetStringValue_fn;
    return type;
}

// public generated DebugFrame()
void DebugFrame__ctor__fn(DebugFrame* __this)
{
    __this->ctor_();
}

// public string GetStringValue()
void DebugFrame__GetStringValue_fn(DebugFrame* __this, uString** __retval)
{
    *__retval = __this->GetStringValue();
}

// public string GetTag()
void DebugFrame__GetTag_fn(DebugFrame* __this, uString** __retval)
{
    *__retval = __this->GetTag();
}

// public generated DebugFrame New()
void DebugFrame__New1_fn(DebugFrame** __retval)
{
    *__retval = DebugFrame::New1();
}

// public generated DebugFrame() [instance]
void DebugFrame::ctor_()
{
}

// public string GetStringValue() [instance]
uString* DebugFrame::GetStringValue()
{
    uStackFrame __("Fuse.Triggers.Actions.DebugFrame", "GetStringValue()");
    return ::g::Uno::String::op_Addition1(::STRINGS[4/*""*/], uBox<int32_t>(::g::Uno::Int_typeof(), ::g::Fuse::UpdateManager::FrameIndex()));
}

// public string GetTag() [instance]
uString* DebugFrame::GetTag()
{
    return ::STRINGS[5/*"Frame"*/];
}

// public generated DebugFrame New() [static]
DebugFrame* DebugFrame::New1()
{
    DebugFrame* obj1 = (DebugFrame*)uNew(DebugFrame_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/DebugProperty.uno
// ----------------------------------------------------------------------------

// public sealed class DebugProperty<T>
// {
static void DebugProperty_build(uType* type)
{
    ::STRINGS[4] = uString::Const("");
    type->SetInterfaces(
        ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), offsetof(DebugProperty_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(DebugProperty, _Tag), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(DebugProperty, _Value), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("GetStringValue", NULL, (void*)DebugProperty__GetStringValue_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetTag", NULL, (void*)DebugProperty__GetTag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", type, (void*)DebugProperty__New1_fn, 0, true, type, 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("get_Tag", NULL, (void*)DebugProperty__get_Tag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Tag", NULL, (void*)DebugProperty__set_Tag_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)DebugProperty__get_Value_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("set_Value", NULL, (void*)DebugProperty__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL)));
}

DebugProperty_type* DebugProperty_typeof()
{
    static uSStrong<DebugProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DebugProperty);
    options.TypeSize = sizeof(DebugProperty_type);
    type = (DebugProperty_type*)uClassType::New("Fuse.Triggers.Actions.DebugProperty`1", options);
    type->fp_build_ = DebugProperty_build;
    type->interface0.fp_GetTag = (void(*)(uObject*, uString**))DebugProperty__GetTag_fn;
    type->interface0.fp_GetStringValue = (void(*)(uObject*, uString**))DebugProperty__GetStringValue_fn;
    return type;
}

// public DebugProperty(Uno.UX.Property<T> val)
void DebugProperty__ctor__fn(DebugProperty* __this, ::g::Uno::UX::Property1* val)
{
    __this->ctor_(val);
}

// public string GetStringValue()
void DebugProperty__GetStringValue_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->GetStringValue();
}

// public string GetTag()
void DebugProperty__GetTag_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->GetTag();
}

// public DebugProperty New(Uno.UX.Property<T> val)
void DebugProperty__New1_fn(uType* __type, ::g::Uno::UX::Property1* val, DebugProperty** __retval)
{
    *__retval = DebugProperty::New1(__type, val);
}

// public generated string get_Tag()
void DebugProperty__get_Tag_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->Tag();
}

// public generated void set_Tag(string value)
void DebugProperty__set_Tag_fn(DebugProperty* __this, uString* value)
{
    __this->Tag(value);
}

// public generated Uno.UX.Property<T> get_Value()
void DebugProperty__get_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(Uno.UX.Property<T> value)
void DebugProperty__set_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property1* value)
{
    __this->Value(value);
}

// public DebugProperty(Uno.UX.Property<T> val) [instance]
void DebugProperty::ctor_(::g::Uno::UX::Property1* val)
{
    Value(val);
}

// public string GetStringValue() [instance]
uString* DebugProperty::GetStringValue()
{
    uStackFrame __("Fuse.Triggers.Actions.DebugProperty`1", "GetStringValue()");
    uT ret2(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    return ::g::Uno::String::op_Addition1(::STRINGS[4/*""*/], uBoxPtr(__type->T(0), (::g::Uno::UX::Property1__Get_fn(uPtr(Value()), &ret2), ret2)));
}

// public string GetTag() [instance]
uString* DebugProperty::GetTag()
{
    return Tag();
}

// public generated string get_Tag() [instance]
uString* DebugProperty::Tag()
{
    return _Tag;
}

// public generated void set_Tag(string value) [instance]
void DebugProperty::Tag(uString* value)
{
    _Tag = value;
}

// public generated Uno.UX.Property<T> get_Value() [instance]
::g::Uno::UX::Property1* DebugProperty::Value()
{
    return _Value;
}

// public generated void set_Value(Uno.UX.Property<T> value) [instance]
void DebugProperty::Value(::g::Uno::UX::Property1* value)
{
    _Value = value;
}

// public DebugProperty New(Uno.UX.Property<T> val) [static]
DebugProperty* DebugProperty::New1(uType* __type, ::g::Uno::UX::Property1* val)
{
    DebugProperty* obj1 = (DebugProperty*)uNew(__type);
    obj1->ctor_(val);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/DebugProperty.uno
// ----------------------------------------------------------------------------

// public sealed class DebugTime
// {
static void DebugTime_build(uType* type)
{
    ::STRINGS[4] = uString::Const("");
    ::STRINGS[6] = uString::Const("Time");
    type->SetInterfaces(
        ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), offsetof(DebugTime_type, interface0));
    type->Reflection.SetFunctions(3,
        new uFunction("GetStringValue", NULL, (void*)DebugTime__GetStringValue_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetTag", NULL, (void*)DebugTime__GetTag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DebugTime__New1_fn, 0, true, type, 0));
}

DebugTime_type* DebugTime_typeof()
{
    static uSStrong<DebugTime_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DebugTime);
    options.TypeSize = sizeof(DebugTime_type);
    type = (DebugTime_type*)uClassType::New("Fuse.Triggers.Actions.DebugTime", options);
    type->fp_build_ = DebugTime_build;
    type->fp_ctor_ = (void*)DebugTime__New1_fn;
    type->interface0.fp_GetTag = (void(*)(uObject*, uString**))DebugTime__GetTag_fn;
    type->interface0.fp_GetStringValue = (void(*)(uObject*, uString**))DebugTime__GetStringValue_fn;
    return type;
}

// public generated DebugTime()
void DebugTime__ctor__fn(DebugTime* __this)
{
    __this->ctor_();
}

// public string GetStringValue()
void DebugTime__GetStringValue_fn(DebugTime* __this, uString** __retval)
{
    *__retval = __this->GetStringValue();
}

// public string GetTag()
void DebugTime__GetTag_fn(DebugTime* __this, uString** __retval)
{
    *__retval = __this->GetTag();
}

// public generated DebugTime New()
void DebugTime__New1_fn(DebugTime** __retval)
{
    *__retval = DebugTime::New1();
}

// public generated DebugTime() [instance]
void DebugTime::ctor_()
{
}

// public string GetStringValue() [instance]
uString* DebugTime::GetStringValue()
{
    uStackFrame __("Fuse.Triggers.Actions.DebugTime", "GetStringValue()");
    return ::g::Uno::String::op_Addition1(::STRINGS[4/*""*/], uBox(::g::Uno::Double_typeof(), ::g::Fuse::Time::FrameTime()));
}

// public string GetTag() [instance]
uString* DebugTime::GetTag()
{
    return ::STRINGS[6/*"Time"*/];
}

// public generated DebugTime New() [static]
DebugTime* DebugTime::New1()
{
    DebugTime* obj1 = (DebugTime*)uNew(DebugTime_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/EvaluateJS.uno
// -------------------------------------------------------------------------

// public sealed class EvaluateJS
// {
static void EvaluateJS_build(uType* type)
{
    ::STRINGS[4] = uString::Const("");
    ::STRINGS[7] = uString::Const("JSON.stringify((function(){");
    ::STRINGS[8] = uString::Const("})());");
    ::TYPES[9] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Controls.IWebView>*/, ::TYPES[9/*Fuse.Controls.IWebView*/], NULL);
    ::TYPES[12] = ::g::Fuse::Triggers::Actions::JSEventHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Uno::String_typeof(), offsetof(EvaluateJS, _rawSource), 0,
        ::g::Uno::String_typeof(), offsetof(EvaluateJS, _processedSource), 0,
        ::TYPES[9/*Fuse.Controls.IWebView*/], offsetof(EvaluateJS, _target), 0,
        ::TYPES[12/*Fuse.Triggers.Actions.JSEventHandler*/], offsetof(EvaluateJS, Handler1), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("add_Handler", NULL, (void*)EvaluateJS__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[12/*Fuse.Triggers.Actions.JSEventHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)EvaluateJS__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[12/*Fuse.Triggers.Actions.JSEventHandler*/]),
        new uFunction("get_JavaScript", NULL, (void*)EvaluateJS__get_JavaScript_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_JavaScript", NULL, (void*)EvaluateJS__set_JavaScript_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)EvaluateJS__New2_fn, 0, true, type, 0),
        new uFunction("get_WebView", NULL, (void*)EvaluateJS__get_WebView_fn, 0, false, ::TYPES[9/*Fuse.Controls.IWebView*/], 0),
        new uFunction("set_WebView", NULL, (void*)EvaluateJS__set_WebView_fn, 0, false, uVoid_typeof(), 1, ::TYPES[9/*Fuse.Controls.IWebView*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* EvaluateJS_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EvaluateJS);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.EvaluateJS", options);
    type->fp_build_ = EvaluateJS_build;
    type->fp_ctor_ = (void*)EvaluateJS__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))EvaluateJS__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated EvaluateJS()
void EvaluateJS__ctor_2_fn(EvaluateJS* __this)
{
    __this->ctor_2();
}

// private void Execute(Fuse.Controls.IWebView webView)
void EvaluateJS__Execute_fn(EvaluateJS* __this, uObject* webView)
{
    __this->Execute(webView);
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value)
void EvaluateJS__add_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value)
void EvaluateJS__remove_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public string get_JavaScript()
void EvaluateJS__get_JavaScript_fn(EvaluateJS* __this, uString** __retval)
{
    *__retval = __this->JavaScript();
}

// public void set_JavaScript(string value)
void EvaluateJS__set_JavaScript_fn(EvaluateJS* __this, uString* value)
{
    __this->JavaScript(value);
}

// public generated EvaluateJS New()
void EvaluateJS__New2_fn(EvaluateJS** __retval)
{
    *__retval = EvaluateJS::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void EvaluateJS__Perform_fn(EvaluateJS* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "Perform(Fuse.Node)");
    uObject* ind1;
    ind1 = __this->_target;
    uObject* webView = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[11/*Fuse.Node.FindByType<Fuse.Controls.IWebView>*/]);

    if ((webView != NULL) && !::g::Uno::String::IsNullOrEmpty(__this->_rawSource))
        __this->Execute(webView);
}

// private string PrepareScriptForEval(string js)
void EvaluateJS__PrepareScriptForEval_fn(EvaluateJS* __this, uString* js, uString** __retval)
{
    *__retval = __this->PrepareScriptForEval(js);
}

// private void ResultHandler(string result)
void EvaluateJS__ResultHandler_fn(EvaluateJS* __this, uString* result)
{
    __this->ResultHandler(result);
}

// public Fuse.Controls.IWebView get_WebView()
void EvaluateJS__get_WebView_fn(EvaluateJS* __this, uObject** __retval)
{
    *__retval = __this->WebView();
}

// public void set_WebView(Fuse.Controls.IWebView value)
void EvaluateJS__set_WebView_fn(EvaluateJS* __this, uObject* value)
{
    __this->WebView(value);
}

// public generated EvaluateJS() [instance]
void EvaluateJS::ctor_2()
{
    ctor_1();
}

// private void Execute(Fuse.Controls.IWebView webView) [instance]
void EvaluateJS::Execute(uObject* webView)
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "Execute(Fuse.Controls.IWebView)");
    ::g::Fuse::Controls::IWebView::Eval1(uInterface(uPtr(webView), ::TYPES[9/*Fuse.Controls.IWebView*/]), _processedSource, uDelegate::New(::TYPES[10/*Uno.Action<string>*/], (void*)EvaluateJS__ResultHandler_fn, this));
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance]
void EvaluateJS::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "add_Handler(Fuse.Triggers.Actions.JSEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[12/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance]
void EvaluateJS::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "remove_Handler(Fuse.Triggers.Actions.JSEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[12/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// public string get_JavaScript() [instance]
uString* EvaluateJS::JavaScript()
{
    return _rawSource;
}

// public void set_JavaScript(string value) [instance]
void EvaluateJS::JavaScript(uString* value)
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "set_JavaScript(string)");
    _rawSource = value;
    _processedSource = PrepareScriptForEval(_rawSource);
}

// private string PrepareScriptForEval(string js) [instance]
uString* EvaluateJS::PrepareScriptForEval(uString* js)
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "PrepareScriptForEval(string)");

    if (::g::Uno::String::op_Equality(js, NULL))
        return ::STRINGS[4/*""*/];

    js = ::g::Uno::String::Trim(uPtr(js));
    js = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[7/*"JSON.string...*/], js), ::STRINGS[8/*"})());"*/]);
    return js;
}

// private void ResultHandler(string result) [instance]
void EvaluateJS::ResultHandler(uString* result)
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "ResultHandler(string)");

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Triggers::Actions::JSEventArgs*)::g::Fuse::Triggers::Actions::JSEventArgs::New2(result));
}

// public Fuse.Controls.IWebView get_WebView() [instance]
uObject* EvaluateJS::WebView()
{
    return _target;
}

// public void set_WebView(Fuse.Controls.IWebView value) [instance]
void EvaluateJS::WebView(uObject* value)
{
    _target = value;
}

// public generated EvaluateJS New() [static]
EvaluateJS* EvaluateJS::New2()
{
    EvaluateJS* obj2 = (EvaluateJS*)uNew(EvaluateJS_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Focus.uno
// --------------------------------------------------------------------

// public sealed class GiveFocus
// {
// static generated GiveFocus()
static void GiveFocus__cctor__fn(uType* __type)
{
    GiveFocus::Singleton_ = GiveFocus::New2();
}

static void GiveFocus_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::TYPES[2/*Fuse.Visual*/], offsetof(GiveFocus, _Target), 0,
        ::g::Fuse::Triggers::Actions::TriggerAction_typeof(), (uintptr_t)&GiveFocus::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 12));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)GiveFocus__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)GiveFocus__get_Target_fn, 0, false, ::TYPES[2/*Fuse.Visual*/], 0),
        new uFunction("set_Target", NULL, (void*)GiveFocus__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*Fuse.Visual*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* GiveFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(GiveFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.GiveFocus", options);
    type->fp_build_ = GiveFocus_build;
    type->fp_ctor_ = (void*)GiveFocus__New2_fn;
    type->fp_cctor_ = GiveFocus__cctor__fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))GiveFocus__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated GiveFocus()
void GiveFocus__ctor_2_fn(GiveFocus* __this)
{
    __this->ctor_2();
}

// public generated GiveFocus New()
void GiveFocus__New2_fn(GiveFocus** __retval)
{
    *__retval = GiveFocus::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void GiveFocus__Perform_fn(GiveFocus* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.GiveFocus", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* ind1;
    ::g::Fuse::Input::Focus::GiveTo((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Visual*>(target, ::TYPES[2/*Fuse.Visual*/])));
}

// public generated Fuse.Visual get_Target()
void GiveFocus__get_Target_fn(GiveFocus* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value)
void GiveFocus__set_Target_fn(GiveFocus* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction*> GiveFocus::Singleton_;

// public generated GiveFocus() [instance]
void GiveFocus::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Visual get_Target() [instance]
::g::Fuse::Visual* GiveFocus::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance]
void GiveFocus::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated GiveFocus New() [static]
GiveFocus* GiveFocus::New2()
{
    GiveFocus* obj2 = (GiveFocus*)uNew(GiveFocus_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Visibility.uno
// -------------------------------------------------------------------------

// public sealed class Hide
// {
static void Hide_build(uType* type)
{
    ::STRINGS[9] = uString::Const("Cannot find an Element/IHide");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Visibility.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[13] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.Actions.IHide>*/, ::g::Fuse::Triggers::Actions::IHide_typeof(), NULL);
    ::TYPES[14] = ::g::Fuse::Triggers::Actions::IHide_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Hide__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Hide_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Hide);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Hide", options);
    type->fp_build_ = Hide_build;
    type->fp_ctor_ = (void*)Hide__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Hide__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Hide()
void Hide__ctor_2_fn(Hide* __this)
{
    __this->ctor_2();
}

// public generated Hide New()
void Hide__New2_fn(Hide** __retval)
{
    *__retval = Hide::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void Hide__Perform_fn(Hide* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Hide", "Perform(Fuse.Node)");
    uObject* t = (uObject*)uPtr(target)->FindByType(::TYPES[13/*Fuse.Node.FindByType<Fuse.Triggers.Actions.IHide>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::Actions::IHide::Hide(uInterface(uPtr(t), ::TYPES[14/*Fuse.Triggers.Actions.IHide*/]));
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[9/*"Cannot find...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 74, ::STRINGS[2/*"Perform"*/], NULL);
}

// public generated Hide() [instance]
void Hide::ctor_2()
{
    ctor_1();
}

// public generated Hide New() [static]
Hide* Hide::New2()
{
    Hide* obj1 = (Hide*)uNew(Hide_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Visibility.uno
// -------------------------------------------------------------------------

// public abstract interface ICollapse
// {
uInterfaceType* ICollapse_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ICollapse", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Collapse", NULL, NULL, offsetof(ICollapse, fp_Collapse), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Visibility.uno
// -------------------------------------------------------------------------

// public abstract interface IHide
// {
uInterfaceType* IHide_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IHide", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Hide", NULL, NULL, offsetof(IHide, fp_Hide), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Visibility.uno
// -------------------------------------------------------------------------

// public abstract interface IShow
// {
uInterfaceType* IShow_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IShow", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Show", NULL, NULL, offsetof(IShow, fp_Show), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/DebugProperty.uno
// ----------------------------------------------------------------------------

// public abstract interface ITaggedDebugProperty
// {
uInterfaceType* ITaggedDebugProperty_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ITaggedDebugProperty", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("GetStringValue", NULL, NULL, offsetof(ITaggedDebugProperty, fp_GetStringValue), false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetTag", NULL, NULL, offsetof(ITaggedDebugProperty, fp_GetTag), false, ::g::Uno::String_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Toggle.uno
// ---------------------------------------------------------------------

// public abstract interface IToggleable
// {
uInterfaceType* IToggleable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IToggleable", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Toggle", NULL, NULL, offsetof(IToggleable, fp_Toggle), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/EvaluateJS.uno
// -------------------------------------------------------------------------

// public sealed class JSEventArgs
// {
static void JSEventArgs_build(uType* type)
{
    ::STRINGS[10] = uString::Const("json");
    ::TYPES[15] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(JSEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(JSEventArgs, ResultJson), 0);
    type->Reflection.SetFields(1,
        new uField("ResultJson", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)JSEventArgs__New2_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

JSEventArgs_type* JSEventArgs_typeof()
{
    static uSStrong<JSEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JSEventArgs);
    options.TypeSize = sizeof(JSEventArgs_type);
    type = (JSEventArgs_type*)uClassType::New("Fuse.Triggers.Actions.JSEventArgs", options);
    type->fp_build_ = JSEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))JSEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public JSEventArgs(string resultJson)
void JSEventArgs__ctor_1_fn(JSEventArgs* __this, uString* resultJson)
{
    __this->ctor_1(resultJson);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s)
void JSEventArgs__FuseScriptingIScriptEventSerialize_fn(JSEventArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Triggers.Actions.JSEventArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[15/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[10/*"json"*/], __this->ResultJson);
}

// public JSEventArgs New(string resultJson)
void JSEventArgs__New2_fn(uString* resultJson, JSEventArgs** __retval)
{
    *__retval = JSEventArgs::New2(resultJson);
}

// public JSEventArgs(string resultJson) [instance]
void JSEventArgs::ctor_1(uString* resultJson)
{
    ctor_();
    ResultJson = resultJson;
}

// public JSEventArgs New(string resultJson) [static]
JSEventArgs* JSEventArgs::New2(uString* resultJson)
{
    JSEventArgs* obj1 = (JSEventArgs*)uNew(JSEventArgs_typeof());
    obj1->ctor_1(resultJson);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/EvaluateJS.uno
// -------------------------------------------------------------------------

// public delegate void JSEventHandler(object sender, Fuse.Triggers.Actions.JSEventArgs args)
uDelegateType* JSEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.Actions.JSEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Triggers::Actions::JSEventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Launcher.InterApp/1.12.0/InterApp/InterAppTrigger.uno
// ----------------------------------------------------------------------------------------

// public sealed class LaunchUri
// {
static void LaunchUri_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Uno::String_typeof(), offsetof(LaunchUri, _Uri), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)LaunchUri__New2_fn, 0, true, type, 0),
        new uFunction("get_Uri", NULL, (void*)LaunchUri__get_Uri_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Uri", NULL, (void*)LaunchUri__set_Uri_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchUri_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LaunchUri);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.LaunchUri", options);
    type->fp_build_ = LaunchUri_build;
    type->fp_ctor_ = (void*)LaunchUri__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))LaunchUri__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated LaunchUri()
void LaunchUri__ctor_2_fn(LaunchUri* __this)
{
    __this->ctor_2();
}

// public generated LaunchUri New()
void LaunchUri__New2_fn(LaunchUri** __retval)
{
    *__retval = LaunchUri::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void LaunchUri__Perform_fn(LaunchUri* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.LaunchUri", "Perform(Fuse.Node)");
    ::g::Fuse::LauncherImpl::InterAppLauncher::LaunchUri(::g::Uno::Net::Http::Uri::New1(__this->Uri()));
}

// public generated string get_Uri()
void LaunchUri__get_Uri_fn(LaunchUri* __this, uString** __retval)
{
    *__retval = __this->Uri();
}

// public generated void set_Uri(string value)
void LaunchUri__set_Uri_fn(LaunchUri* __this, uString* value)
{
    __this->Uri(value);
}

// public generated LaunchUri() [instance]
void LaunchUri::ctor_2()
{
    ctor_1();
}

// public generated string get_Uri() [instance]
uString* LaunchUri::Uri()
{
    return _Uri;
}

// public generated void set_Uri(string value) [instance]
void LaunchUri::Uri(uString* value)
{
    _Uri = value;
}

// public generated LaunchUri New() [static]
LaunchUri* LaunchUri::New2()
{
    LaunchUri* obj1 = (LaunchUri*)uNew(LaunchUri_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/WebViewNavActions.uno
// --------------------------------------------------------------------------------

// public sealed class LoadHtml
// {
static void LoadHtml_build(uType* type)
{
    ::STRINGS[4] = uString::Const("");
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(LoadHtml_type, interface0),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(LoadHtml_type, interface1));
    type->SetFields(11,
        ::g::Fuse::Controls::HTML_typeof(), offsetof(LoadHtml, _html), 0,
        ::g::Uno::String_typeof(), offsetof(LoadHtml, _BaseUrl), 0,
        ::g::Uno::String_typeof(), offsetof(LoadHtml, _Source), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_BaseUrl", NULL, (void*)LoadHtml__get_BaseUrl_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_BaseUrl", NULL, (void*)LoadHtml__set_BaseUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_HTMLSource", NULL, (void*)LoadHtml__get_HTMLSource_fn, 0, false, ::g::Fuse::Controls::HTML_typeof(), 0),
        new uFunction("set_HTMLSource", NULL, (void*)LoadHtml__set_HTMLSource_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::HTML_typeof()),
        new uFunction(".ctor", NULL, (void*)LoadHtml__New2_fn, 0, true, type, 0),
        new uFunction("get_Source", NULL, (void*)LoadHtml__get_Source_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)LoadHtml__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

LoadHtml_type* LoadHtml_typeof()
{
    static uSStrong<LoadHtml_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LoadHtml);
    options.TypeSize = sizeof(LoadHtml_type);
    type = (LoadHtml_type*)uClassType::New("Fuse.Triggers.Actions.LoadHtml", options);
    type->fp_build_ = LoadHtml_build;
    type->fp_ctor_ = (void*)LoadHtml__New2_fn;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))LoadHtml__Execute_fn;
    type->interface1.fp_get_Source = (void(*)(uObject*, uString**))LoadHtml__get_Source_fn;
    type->interface1.fp_set_Source = (void(*)(uObject*, uString*))LoadHtml__set_Source_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated LoadHtml()
void LoadHtml__ctor_3_fn(LoadHtml* __this)
{
    __this->ctor_3();
}

// public generated string get_BaseUrl()
void LoadHtml__get_BaseUrl_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value)
void LoadHtml__set_BaseUrl_fn(LoadHtml* __this, uString* value)
{
    __this->BaseUrl(value);
}

// private override sealed void Execute(Fuse.Controls.WebView webview)
void LoadHtml__Execute_fn(LoadHtml* __this, ::g::Fuse::Controls::WebView* webview)
{
    uStackFrame __("Fuse.Triggers.Actions.LoadHtml", "Execute(Fuse.Controls.WebView)");

    if (::g::Uno::String::op_Inequality(__this->Source(), ::STRINGS[4/*""*/]))
        uPtr(webview)->LoadHtml1(__this->Source(), __this->BaseUrl());
}

// public Fuse.Controls.HTML get_HTMLSource()
void LoadHtml__get_HTMLSource_fn(LoadHtml* __this, ::g::Fuse::Controls::HTML** __retval)
{
    *__retval = __this->HTMLSource();
}

// public void set_HTMLSource(Fuse.Controls.HTML value)
void LoadHtml__set_HTMLSource_fn(LoadHtml* __this, ::g::Fuse::Controls::HTML* value)
{
    __this->HTMLSource(value);
}

// public generated LoadHtml New()
void LoadHtml__New2_fn(LoadHtml** __retval)
{
    *__retval = LoadHtml::New2();
}

// public generated string get_Source()
void LoadHtml__get_Source_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public generated void set_Source(string value)
void LoadHtml__set_Source_fn(LoadHtml* __this, uString* value)
{
    __this->Source(value);
}

// public generated LoadHtml() [instance]
void LoadHtml::ctor_3()
{
    ctor_2();
}

// public generated string get_BaseUrl() [instance]
uString* LoadHtml::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance]
void LoadHtml::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public Fuse.Controls.HTML get_HTMLSource() [instance]
::g::Fuse::Controls::HTML* LoadHtml::HTMLSource()
{
    return _html;
}

// public void set_HTMLSource(Fuse.Controls.HTML value) [instance]
void LoadHtml::HTMLSource(::g::Fuse::Controls::HTML* value)
{
    uStackFrame __("Fuse.Triggers.Actions.LoadHtml", "set_HTMLSource(Fuse.Controls.HTML)");
    _html = value;
    uPtr(_html)->Receiver = (uObject*)this;
}

// public generated string get_Source() [instance]
uString* LoadHtml::Source()
{
    return _Source;
}

// public generated void set_Source(string value) [instance]
void LoadHtml::Source(uString* value)
{
    _Source = value;
}

// public generated LoadHtml New() [static]
LoadHtml* LoadHtml::New2()
{
    LoadHtml* obj1 = (LoadHtml*)uNew(LoadHtml_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/WebViewNavActions.uno
// --------------------------------------------------------------------------------

// public sealed class LoadUrl
// {
static void LoadUrl_build(uType* type)
{
    ::STRINGS[4] = uString::Const("");
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::WebViewNavAction_type, interface0));
    type->SetFields(11,
        ::g::Uno::String_typeof(), offsetof(LoadUrl, _Url), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)LoadUrl__New2_fn, 0, true, type, 0),
        new uFunction("get_Url", NULL, (void*)LoadUrl__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)LoadUrl__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadUrl);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.LoadUrl", options);
    type->fp_build_ = LoadUrl_build;
    type->fp_ctor_ = (void*)LoadUrl__New2_fn;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))LoadUrl__Execute_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated LoadUrl()
void LoadUrl__ctor_3_fn(LoadUrl* __this)
{
    __this->ctor_3();
}

// private override sealed void Execute(Fuse.Controls.WebView webview)
void LoadUrl__Execute_fn(LoadUrl* __this, ::g::Fuse::Controls::WebView* webview)
{
    uStackFrame __("Fuse.Triggers.Actions.LoadUrl", "Execute(Fuse.Controls.WebView)");

    if (::g::Uno::String::op_Inequality(__this->Url(), ::STRINGS[4/*""*/]))
        uPtr(webview)->LoadUrl(__this->Url());
}

// public generated LoadUrl New()
void LoadUrl__New2_fn(LoadUrl** __retval)
{
    *__retval = LoadUrl::New2();
}

// public generated string get_Url()
void LoadUrl__get_Url_fn(LoadUrl* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public generated void set_Url(string value)
void LoadUrl__set_Url_fn(LoadUrl* __this, uString* value)
{
    __this->Url(value);
}

// public generated LoadUrl() [instance]
void LoadUrl::ctor_3()
{
    ctor_2();
}

// public generated string get_Url() [instance]
uString* LoadUrl::Url()
{
    return _Url;
}

// public generated void set_Url(string value) [instance]
void LoadUrl::Url(uString* value)
{
    _Url = value;
}

// public generated LoadUrl New() [static]
LoadUrl* LoadUrl::New2()
{
    LoadUrl* obj1 = (LoadUrl*)uNew(LoadUrl_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Playback.uno
// -----------------------------------------------------------------------

// public sealed class Pause
// {
static void Pause_build(uType* type)
{
    ::TYPES[16] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.IPlayback>*/, ::g::Fuse::Triggers::IPlayback_typeof(), NULL);
    ::TYPES[17] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(12);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Pause__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Pause_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Pause);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pause", options);
    type->fp_build_ = Pause_build;
    type->fp_ctor_ = (void*)Pause__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pause__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Pause()
void Pause__ctor_3_fn(Pause* __this)
{
    __this->ctor_3();
}

// public generated Pause New()
void Pause__New2_fn(Pause** __retval)
{
    *__retval = Pause::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void Pause__Perform_fn(Pause* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Pause", "Perform(Fuse.Node)");
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[16/*Fuse.Node.FindByType<Fuse.Triggers.IPlayback>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::Pause(uInterface(uPtr(t), ::TYPES[17/*Fuse.Triggers.IPlayback*/]));
}

// public generated Pause() [instance]
void Pause::ctor_3()
{
    ctor_2();
}

// public generated Pause New() [static]
Pause* Pause::New2()
{
    Pause* obj2 = (Pause*)uNew(Pause_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Playback.uno
// -----------------------------------------------------------------------

// public class Play
// {
static void Play_build(uType* type)
{
    ::TYPES[16] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.IPlayback>*/, ::g::Fuse::Triggers::IPlayback_typeof(), NULL);
    ::TYPES[17] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(12);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Play__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Play_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Play);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Play", options);
    type->fp_build_ = Play_build;
    type->fp_ctor_ = (void*)Play__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Play__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Play()
void Play__ctor_3_fn(Play* __this)
{
    __this->ctor_3();
}

// public generated Play New()
void Play__New2_fn(Play** __retval)
{
    *__retval = Play::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void Play__Perform_fn(Play* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Play", "Perform(Fuse.Node)");
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[16/*Fuse.Node.FindByType<Fuse.Triggers.IPlayback>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::Resume(uInterface(uPtr(t), ::TYPES[17/*Fuse.Triggers.IPlayback*/]));
}

// public generated Play() [instance]
void Play::ctor_3()
{
    ctor_2();
}

// public generated Play New() [static]
Play* Play::New2()
{
    Play* obj2 = (Play*)uNew(Play_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Playback.uno
// -----------------------------------------------------------------------

// public abstract class PlaybackAction
// {
static void PlaybackAction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(PlaybackAction, _Target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Target", NULL, (void*)PlaybackAction__get_Target_fn, 0, false, ::g::Fuse::Triggers::IPlayback_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)PlaybackAction__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IPlayback_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PlaybackAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PlaybackAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlaybackAction", options);
    type->fp_build_ = PlaybackAction_build;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// internal PlaybackAction()
void PlaybackAction__ctor_2_fn(PlaybackAction* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Triggers.IPlayback get_Target()
void PlaybackAction__get_Target_fn(PlaybackAction* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IPlayback value)
void PlaybackAction__set_Target_fn(PlaybackAction* __this, uObject* value)
{
    __this->Target(value);
}

// internal PlaybackAction() [instance]
void PlaybackAction::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.IPlayback get_Target() [instance]
uObject* PlaybackAction::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IPlayback value) [instance]
void PlaybackAction::Target(uObject* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Playback.uno
// -----------------------------------------------------------------------

// public sealed class PlayTo
// {
static void PlayTo_build(uType* type)
{
    ::STRINGS[11] = uString::Const("Use the TimelineAction with `How=\"PlayTo\" instead.");
    ::STRINGS[12] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Playback.uno");
    ::STRINGS[13] = uString::Const(".ctor");
    ::TYPES[16] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.IPlayback>*/, ::g::Fuse::Triggers::IPlayback_typeof(), NULL);
    ::TYPES[17] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(12,
        ::g::Uno::Double_typeof(), offsetof(PlayTo, _Progress), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)PlayTo__New2_fn, 0, true, type, 0),
        new uFunction("get_Progress", NULL, (void*)PlayTo__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, (void*)PlayTo__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PlayTo);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlayTo", options);
    type->fp_build_ = PlayTo_build;
    type->fp_ctor_ = (void*)PlayTo__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PlayTo__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public PlayTo()
void PlayTo__ctor_3_fn(PlayTo* __this)
{
    __this->ctor_3();
}

// public PlayTo New()
void PlayTo__New2_fn(PlayTo** __retval)
{
    *__retval = PlayTo::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void PlayTo__Perform_fn(PlayTo* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.PlayTo", "Perform(Fuse.Node)");
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[16/*Fuse.Node.FindByType<Fuse.Triggers.IPlayback>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::PlayTo(uInterface(uPtr(t), ::TYPES[17/*Fuse.Triggers.IPlayback*/]), __this->Progress());
}

// public generated double get_Progress()
void PlayTo__get_Progress_fn(PlayTo* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void set_Progress(double value)
void PlayTo__set_Progress_fn(PlayTo* __this, double* value)
{
    __this->Progress(*value);
}

// public PlayTo() [instance]
void PlayTo::ctor_3()
{
    ctor_2();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[11/*"Use the Tim...*/], this, ::STRINGS[12/*"/usr/local/...*/], 288, ::STRINGS[13/*".ctor"*/]);
}

// public generated double get_Progress() [instance]
double PlayTo::Progress()
{
    return _Progress;
}

// public generated void set_Progress(double value) [instance]
void PlayTo::Progress(double value)
{
    _Progress = value;
}

// public PlayTo New() [static]
PlayTo* PlayTo::New2()
{
    PlayTo* obj2 = (PlayTo*)uNew(PlayTo_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Pulse.uno
// --------------------------------------------------------------------

// public sealed class Pulse
// {
static void Pulse_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Triggers::IPulseTrigger_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::TYPES[18/*Fuse.Triggers.IPulseTrigger*/], offsetof(Pulse, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Pulse__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)Pulse__get_Target_fn, 0, false, ::TYPES[18/*Fuse.Triggers.IPulseTrigger*/], 0),
        new uFunction("set_Target", NULL, (void*)Pulse__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[18/*Fuse.Triggers.IPulseTrigger*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Pulse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pulse", options);
    type->fp_build_ = Pulse_build;
    type->fp_ctor_ = (void*)Pulse__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pulse__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Pulse()
void Pulse__ctor_2_fn(Pulse* __this)
{
    __this->ctor_2();
}

// public generated Pulse New()
void Pulse__New2_fn(Pulse** __retval)
{
    *__retval = Pulse::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void Pulse__Perform_fn(Pulse* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Pulse", "Perform(Fuse.Node)");
    uObject* t = __this->Target();

    if (t != NULL)
        ::g::Fuse::Triggers::IPulseTrigger::Pulse(uInterface(uPtr(t), ::TYPES[18/*Fuse.Triggers.IPulseTrigger*/]));
}

// public generated Fuse.Triggers.IPulseTrigger get_Target()
void Pulse__get_Target_fn(Pulse* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IPulseTrigger value)
void Pulse__set_Target_fn(Pulse* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Pulse() [instance]
void Pulse::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.IPulseTrigger get_Target() [instance]
uObject* Pulse::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IPulseTrigger value) [instance]
void Pulse::Target(uObject* value)
{
    _Target = value;
}

// public generated Pulse New() [static]
Pulse* Pulse::New2()
{
    Pulse* obj1 = (Pulse*)uNew(Pulse_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Pulse.uno
// --------------------------------------------------------------------

// public sealed class PulseBackward
// {
static void PulseBackward_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(PulseBackward, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)PulseBackward__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)PulseBackward__get_Target_fn, 0, false, ::g::Fuse::Triggers::Timeline_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)PulseBackward__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Timeline_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PulseBackward_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PulseBackward);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PulseBackward", options);
    type->fp_build_ = PulseBackward_build;
    type->fp_ctor_ = (void*)PulseBackward__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PulseBackward__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated PulseBackward()
void PulseBackward__ctor_2_fn(PulseBackward* __this)
{
    __this->ctor_2();
}

// public generated PulseBackward New()
void PulseBackward__New2_fn(PulseBackward** __retval)
{
    *__retval = PulseBackward::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void PulseBackward__Perform_fn(PulseBackward* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.PulseBackward", "Perform(Fuse.Node)");
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t != NULL)
        uPtr(t)->PulseBackward1();
}

// public generated Fuse.Triggers.Timeline get_Target()
void PulseBackward__get_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value)
void PulseBackward__set_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated PulseBackward() [instance]
void PulseBackward::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.Timeline get_Target() [instance]
::g::Fuse::Triggers::Timeline* PulseBackward::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance]
void PulseBackward::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}

// public generated PulseBackward New() [static]
PulseBackward* PulseBackward::New2()
{
    PulseBackward* obj1 = (PulseBackward*)uNew(PulseBackward_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Pulse.uno
// --------------------------------------------------------------------

// public sealed class PulseForward
// {
static void PulseForward_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(PulseForward, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)PulseForward__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)PulseForward__get_Target_fn, 0, false, ::g::Fuse::Triggers::Timeline_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)PulseForward__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Timeline_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PulseForward_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PulseForward);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PulseForward", options);
    type->fp_build_ = PulseForward_build;
    type->fp_ctor_ = (void*)PulseForward__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PulseForward__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated PulseForward()
void PulseForward__ctor_2_fn(PulseForward* __this)
{
    __this->ctor_2();
}

// public generated PulseForward New()
void PulseForward__New2_fn(PulseForward** __retval)
{
    *__retval = PulseForward::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void PulseForward__Perform_fn(PulseForward* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.PulseForward", "Perform(Fuse.Node)");
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t != NULL)
        uPtr(t)->PulseForward();
}

// public generated Fuse.Triggers.Timeline get_Target()
void PulseForward__get_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value)
void PulseForward__set_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated PulseForward() [instance]
void PulseForward::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.Timeline get_Target() [instance]
::g::Fuse::Triggers::Timeline* PulseForward::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance]
void PulseForward::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}

// public generated PulseForward New() [static]
PulseForward* PulseForward::New2()
{
    PulseForward* obj1 = (PulseForward*)uNew(PulseForward_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/1.12.0/RaiseUserEvent.uno
// -----------------------------------------------------------------------

// public sealed class RaiseUserEvent
// {
static void RaiseUserEvent_build(uType* type)
{
    ::STRINGS[14] = uString::Const("no UserEvent found: ");
    ::STRINGS[15] = uString::Const("/usr/local/share/uno/Packages/Fuse.UserEvents/1.12.0/RaiseUserEvent.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[19] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[23] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::IDisposable_typeof();
    ::TYPES[25] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::UserEvent_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Uno::UX::Selector_typeof(), offsetof(RaiseUserEvent, _eventName), 0,
        ::g::Fuse::Node_typeof(), offsetof(RaiseUserEvent, _eventTarget), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(RaiseUserEvent, _event), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL), offsetof(RaiseUserEvent, _args), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_ArgList", NULL, (void*)RaiseUserEvent__get_ArgList_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL), 0),
        new uFunction("get_EventName", NULL, (void*)RaiseUserEvent__get_EventName_fn, 0, false, ::g::Uno::UX::Selector_typeof(), 0),
        new uFunction("set_EventName", NULL, (void*)RaiseUserEvent__set_EventName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Selector_typeof()),
        new uFunction(".ctor", NULL, (void*)RaiseUserEvent__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RaiseUserEvent);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.RaiseUserEvent", options);
    type->fp_build_ = RaiseUserEvent_build;
    type->fp_ctor_ = (void*)RaiseUserEvent__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RaiseUserEvent__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated RaiseUserEvent()
void RaiseUserEvent__ctor_2_fn(RaiseUserEvent* __this)
{
    __this->ctor_2();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.UserEventArg> get_ArgList()
void RaiseUserEvent__get_ArgList_fn(RaiseUserEvent* __this, uObject** __retval)
{
    *__retval = __this->ArgList();
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs()
void RaiseUserEvent__ConvertArgs_fn(RaiseUserEvent* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->ConvertArgs();
}

// public Uno.UX.Selector get_EventName()
void RaiseUserEvent__get_EventName_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->EventName();
}

// public void set_EventName(Uno.UX.Selector value)
void RaiseUserEvent__set_EventName_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* value)
{
    __this->EventName(*value);
}

// public generated RaiseUserEvent New()
void RaiseUserEvent__New2_fn(RaiseUserEvent** __retval)
{
    *__retval = RaiseUserEvent::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void RaiseUserEvent__Perform_fn(RaiseUserEvent* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.RaiseUserEvent", "Perform(Fuse.Node)");

    if ((__this->_event == NULL) || (__this->_eventTarget != target))
    {
        ::g::Fuse::Visual* n;
        __this->_event = ::g::Fuse::UserEvent::ScanTree(target, __this->EventName(), &n);
        __this->_eventTarget = target;
    }

    if (__this->_event == NULL)
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[14/*"no UserEven...*/], ::g::Uno::UX::Selector__op_Implicit1(__this->EventName())), __this, ::STRINGS[15/*"/usr/local/...*/], 86, ::STRINGS[2/*"Perform"*/], NULL);
    else
        uPtr(__this->_event)->Raise(__this->ConvertArgs());
}

// public generated RaiseUserEvent() [instance]
void RaiseUserEvent::ctor_2()
{
    ctor_1();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.UserEventArg> get_ArgList() [instance]
uObject* RaiseUserEvent::ArgList()
{
    uStackFrame __("Fuse.Triggers.Actions.RaiseUserEvent", "get_ArgList()");

    if (_args == NULL)
        _args = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[25/*Uno.Collections.List<Fuse.Triggers.Actions.UserEventArg>*/]));

    return _args;
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs() [instance]
::g::Uno::Collections::Dictionary* RaiseUserEvent::ConvertArgs()
{
    uStackFrame __("Fuse.Triggers.Actions.RaiseUserEvent", "ConvertArgs()");
    ::g::Fuse::Triggers::Actions::UserEventArg* ret3;

    if ((_args == NULL) || (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_args), ::TYPES[19/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/])) == 0))
        return NULL;

    ::g::Uno::Collections::Dictionary* d = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[20/*Uno.Collections.Dictionary<string, object>*/]);
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_args), ::TYPES[21/*Uno.Collections.IEnumerable<Fuse.Triggers.Actions.UserEventArg>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[22/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Fuse::Triggers::Actions::UserEventArg* arg = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[23/*Uno.Collections.IEnumerator<Fuse.Triggers.Actions.UserEventArg>*/]), &ret3), ret3);
                    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(d), uPtr(arg)->Name(), uPtr(arg)->Value());
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[24/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[24/*Uno.IDisposable*/]));
        }
        __after_finally_1:;
    }

    return d;
}

// public Uno.UX.Selector get_EventName() [instance]
::g::Uno::UX::Selector RaiseUserEvent::EventName()
{
    return _eventName;
}

// public void set_EventName(Uno.UX.Selector value) [instance]
void RaiseUserEvent::EventName(::g::Uno::UX::Selector value)
{
    _eventName = value;
    _event = NULL;
}

// public generated RaiseUserEvent New() [static]
RaiseUserEvent* RaiseUserEvent::New2()
{
    RaiseUserEvent* obj2 = (RaiseUserEvent*)uNew(RaiseUserEvent_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Focus.uno
// --------------------------------------------------------------------

// public sealed class ReleaseFocus
// {
static void ReleaseFocus_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ReleaseFocus__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ReleaseFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.ReleaseFocus", options);
    type->fp_build_ = ReleaseFocus_build;
    type->fp_ctor_ = (void*)ReleaseFocus__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ReleaseFocus__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated ReleaseFocus()
void ReleaseFocus__ctor_2_fn(ReleaseFocus* __this)
{
    __this->ctor_2();
}

// public generated ReleaseFocus New()
void ReleaseFocus__New2_fn(ReleaseFocus** __retval)
{
    *__retval = ReleaseFocus::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void ReleaseFocus__Perform_fn(ReleaseFocus* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.ReleaseFocus", "Perform(Fuse.Node)");
    ::g::Fuse::Input::Focus::GiveTo(NULL);
}

// public generated ReleaseFocus() [instance]
void ReleaseFocus::ctor_2()
{
    ctor_1();
}

// public generated ReleaseFocus New() [static]
ReleaseFocus* ReleaseFocus::New2()
{
    ReleaseFocus* obj1 = (ReleaseFocus*)uNew(ReleaseFocus_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.12.0/NavigationActions.uno
// -----------------------------------------------------------------------------------

// public sealed class ReleasePage
// {
static void ReleasePage_build(uType* type)
{
    ::STRINGS[16] = uString::Const("Requires a Visual and Navigator parent");
    ::STRINGS[17] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.12.0/NavigationActions.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[26] = ::g::Fuse::Controls::Navigator_typeof();
    ::TYPES[27] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Fuse::Visual_typeof(), offsetof(ReleasePage, _pendVisual), 0,
        ::TYPES[26/*Fuse.Controls.Navigator*/], offsetof(ReleasePage, _pendNavigator), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ReleasePage__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ReleasePage_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ReleasePage);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.ReleasePage", options);
    type->fp_build_ = ReleasePage_build;
    type->fp_ctor_ = (void*)ReleasePage__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ReleasePage__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated ReleasePage()
void ReleasePage__ctor_2_fn(ReleasePage* __this)
{
    __this->ctor_2();
}

// private void DeferredRelease()
void ReleasePage__DeferredRelease_fn(ReleasePage* __this)
{
    __this->DeferredRelease();
}

// public generated ReleasePage New()
void ReleasePage__New2_fn(ReleasePage** __retval)
{
    *__retval = ReleasePage::New2();
}

// protected override sealed void Perform(Fuse.Node n)
void ReleasePage__Perform_fn(ReleasePage* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.Actions.ReleasePage", "Perform(Fuse.Node)");
    __this->_pendVisual = ((::g::Fuse::Visual*)uPtr(n)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]));
    __this->_pendNavigator = ((__this->_pendVisual == NULL) ? uCast< ::g::Fuse::Controls::Navigator*>(NULL, ::TYPES[26/*Fuse.Controls.Navigator*/]) : uAs< ::g::Fuse::Controls::Navigator*>(uPtr(__this->_pendVisual)->Parent(), ::TYPES[26/*Fuse.Controls.Navigator*/]));

    if ((__this->_pendVisual == NULL) || (__this->_pendNavigator == NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[16/*"Requires a ...*/], __this, ::STRINGS[17/*"/usr/local/...*/], 26, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[27/*Uno.Action*/], (void*)ReleasePage__DeferredRelease_fn, __this), -1, 2);
}

// public generated ReleasePage() [instance]
void ReleasePage::ctor_2()
{
    ctor_1();
}

// private void DeferredRelease() [instance]
void ReleasePage::DeferredRelease()
{
    uStackFrame __("Fuse.Triggers.Actions.ReleasePage", "DeferredRelease()");

    if ((_pendNavigator == NULL) || (_pendVisual == NULL))
        return;

    uPtr(_pendNavigator)->ReleasePage(_pendVisual);
    _pendNavigator = NULL;
    _pendVisual = NULL;
}

// public generated ReleasePage New() [static]
ReleasePage* ReleasePage::New2()
{
    ReleasePage* obj1 = (ReleasePage*)uNew(ReleasePage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/WebViewNavActions.uno
// --------------------------------------------------------------------------------

// public sealed class Reload
// {
static void Reload_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::WebViewNavAction_type, interface0));
    type->SetFields(11);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Reload__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* Reload_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Reload);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.Reload", options);
    type->fp_build_ = Reload_build;
    type->fp_ctor_ = (void*)Reload__New2_fn;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))Reload__Execute_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Reload()
void Reload__ctor_3_fn(Reload* __this)
{
    __this->ctor_3();
}

// private override sealed void Execute(Fuse.Controls.WebView webview)
void Reload__Execute_fn(Reload* __this, ::g::Fuse::Controls::WebView* webview)
{
    uStackFrame __("Fuse.Triggers.Actions.Reload", "Execute(Fuse.Controls.WebView)");
    uPtr(webview)->Reload();
}

// public generated Reload New()
void Reload__New2_fn(Reload** __retval)
{
    *__retval = Reload::New2();
}

// public generated Reload() [instance]
void Reload::ctor_3()
{
    ctor_2();
}

// public generated Reload New() [static]
Reload* Reload::New2()
{
    Reload* obj1 = (Reload*)uNew(Reload_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Playback.uno
// -----------------------------------------------------------------------

// public sealed class Resume
// {
static void Resume_build(uType* type)
{
    ::STRINGS[18] = uString::Const("Use `Play` instead of `Resume`");
    ::STRINGS[12] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Playback.uno");
    ::STRINGS[13] = uString::Const(".ctor");
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(12);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Resume__New3_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Resume_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::Play_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Resume);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Resume", options);
    type->fp_build_ = Resume_build;
    type->fp_ctor_ = (void*)Resume__New3_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public Resume()
void Resume__ctor_4_fn(Resume* __this)
{
    __this->ctor_4();
}

// public Resume New()
void Resume__New3_fn(Resume** __retval)
{
    *__retval = Resume::New3();
}

// public Resume() [instance]
void Resume::ctor_4()
{
    ctor_3();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[18/*"Use `Play` ...*/], this, ::STRINGS[12/*"/usr/local/...*/], 231, ::STRINGS[13/*".ctor"*/]);
}

// public Resume New() [static]
Resume* Resume::New3()
{
    Resume* obj1 = (Resume*)uNew(Resume_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/1.12.0/Triggers/BringToFront.uno
// ----------------------------------------------------------------------------

// public sealed class SendToBack
// {
static void SendToBack_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::TYPES[2/*Fuse.Visual*/], offsetof(SendToBack, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)SendToBack__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)SendToBack__get_Target_fn, 0, false, ::TYPES[2/*Fuse.Visual*/], 0),
        new uFunction("set_Target", NULL, (void*)SendToBack__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*Fuse.Visual*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SendToBack);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.SendToBack", options);
    type->fp_build_ = SendToBack_build;
    type->fp_ctor_ = (void*)SendToBack__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SendToBack__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated SendToBack()
void SendToBack__ctor_2_fn(SendToBack* __this)
{
    __this->ctor_2();
}

// public generated SendToBack New()
void SendToBack__New2_fn(SendToBack** __retval)
{
    *__retval = SendToBack::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void SendToBack__Perform_fn(SendToBack* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.SendToBack", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* ind1;
    ind1 = __this->Target();
    ::g::Fuse::Visual* elm = (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]);

    if (elm != NULL)
    {
        ::g::Fuse::Visual* panel = uAs< ::g::Fuse::Visual*>(uPtr(elm)->Parent(), ::TYPES[2/*Fuse.Visual*/]);

        if (panel != NULL)
            uPtr(panel)->SendToBack(elm);
    }
}

// public generated Fuse.Visual get_Target()
void SendToBack__get_Target_fn(SendToBack* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value)
void SendToBack__set_Target_fn(SendToBack* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated SendToBack() [instance]
void SendToBack::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Visual get_Target() [instance]
::g::Fuse::Visual* SendToBack::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance]
void SendToBack::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated SendToBack New() [static]
SendToBack* SendToBack::New2()
{
    SendToBack* obj2 = (SendToBack*)uNew(SendToBack_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Set.uno
// ------------------------------------------------------------------

// public sealed class Set<T>
// {
static void Set_build(uType* type)
{
    ::STRINGS[19] = uString::Const("target");
    ::TYPES[28] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(Set, _hasIncrement), 0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL), offsetof(Set, _blender), 0,
        ::g::Uno::UX::Expression_typeof()->MakeType(type->T(0), NULL), offsetof(Set, _Expression), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(Set, _Target), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(8,
        new uFunction("get_Expression", NULL, (void*)Set__get_Expression_fn, 0, false, ::g::Uno::UX::Expression_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("set_Expression", NULL, (void*)Set__set_Expression_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Expression_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("get_Increment", NULL, (void*)Set__get_Increment_fn, 0, false, type->T(0), 0),
        new uFunction("set_Increment", NULL, (void*)Set__set_Increment_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction(".ctor", type, (void*)Set__New2_fn, 0, true, type, 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("get_Target", NULL, (void*)Set__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("get_Value", NULL, (void*)Set__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)Set__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Set_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 17;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Set);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Set`1", options);
    type->fp_build_ = Set_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Set__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public Set(Uno.UX.Property<T> target)
void Set__ctor_2_fn(Set* __this, ::g::Uno::UX::Property1* target)
{
    __this->ctor_2(target);
}

// public generated Uno.UX.Expression<T> get_Expression()
void Set__get_Expression_fn(Set* __this, uDelegate** __retval)
{
    *__retval = __this->Expression();
}

// public generated void set_Expression(Uno.UX.Expression<T> value)
void Set__set_Expression_fn(Set* __this, uDelegate* value)
{
    __this->Expression(value);
}

// public T get_Increment()
void Set__get_Increment_fn(Set* __this, uTRef __retval)
{
    return __retval.Store(__this->_increment()), void();
}

// public void set_Increment(T value)
void Set__set_Increment_fn(Set* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    uStackFrame __("Fuse.Triggers.Actions.Set`1", "set_Increment(T)");
    __this->_increment() = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
        __this->_blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
}

// public Set New(Uno.UX.Property<T> target)
void Set__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, Set** __retval)
{
    *__retval = Set::New2(__type, target);
}

// protected override sealed void Perform(Fuse.Node target)
void Set__Perform_fn(Set* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Set`1", "Perform(Fuse.Node)");
    uT ret2(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret3(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret4(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret5(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));

    if (__this->_hasIncrement)
        Set__Update_fn(__this, (uPtr(__this->_blender)->Add_ex((::g::Uno::UX::Property1__Get_fn(uPtr(__this->Target()), &ret3), ret3), __this->_increment(), &ret2), ret2));
    else if (::g::Uno::Delegate::op_Inequality(__this->Expression(), NULL))
        Set__Update_fn(__this, (uPtr(__this->Expression())->Invoke(&ret4), ret4));
    else
        Set__Update_fn(__this, (Set__get_Value_fn(__this, &ret5), ret5));
}

// public generated Uno.UX.Property<T> get_Target()
void Set__get_Target_fn(Set* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value)
void Set__set_Target_fn(Set* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private void Update(T value)
void Set__Update_fn(Set* __this, void* value)
{
    uStackFrame __("Fuse.Triggers.Actions.Set`1", "Update(T)");
    ::g::Uno::UX::Property1__Set_fn(uPtr(__this->Target()), value, NULL);
}

// public generated T get_Value()
void Set__get_Value_fn(Set* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// public generated void set_Value(T value)
void Set__set_Value_fn(Set* __this, void* value)
{
    __this->_Value() = value;
}

// public Set(Uno.UX.Property<T> target) [instance]
void Set::ctor_2(::g::Uno::UX::Property1* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Set`1", ".ctor(Uno.UX.Property<T>)");
    ctor_1();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[19/*"target"*/]));

    Target(target);
}

// public generated Uno.UX.Expression<T> get_Expression() [instance]
uDelegate* Set::Expression()
{
    return _Expression;
}

// public generated void set_Expression(Uno.UX.Expression<T> value) [instance]
void Set::Expression(uDelegate* value)
{
    _Expression = value;
}

// public generated Uno.UX.Property<T> get_Target() [instance]
::g::Uno::UX::Property1* Set::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance]
void Set::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// public Set New(Uno.UX.Property<T> target) [static]
Set* Set::New2(uType* __type, ::g::Uno::UX::Property1* target)
{
    Set* obj1 = (Set*)uNew(__type);
    obj1->ctor_2(target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Visibility.uno
// -------------------------------------------------------------------------

// public sealed class Show
// {
static void Show_build(uType* type)
{
    ::STRINGS[20] = uString::Const("Cannot find an Element/IShow");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Visibility.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[29] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.Actions.IShow>*/, ::g::Fuse::Triggers::Actions::IShow_typeof(), NULL);
    ::TYPES[30] = ::g::Fuse::Triggers::Actions::IShow_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Show__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Show);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Show", options);
    type->fp_build_ = Show_build;
    type->fp_ctor_ = (void*)Show__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Show__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Show()
void Show__ctor_2_fn(Show* __this)
{
    __this->ctor_2();
}

// public generated Show New()
void Show__New2_fn(Show** __retval)
{
    *__retval = Show::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void Show__Perform_fn(Show* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Show", "Perform(Fuse.Node)");
    uObject* t = (uObject*)uPtr(target)->FindByType(::TYPES[29/*Fuse.Node.FindByType<Fuse.Triggers.Actions.IShow>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::Actions::IShow::Show(uInterface(uPtr(t), ::TYPES[30/*Fuse.Triggers.Actions.IShow*/]));
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[20/*"Cannot find...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 38, ::STRINGS[2/*"Perform"*/], NULL);
}

// public generated Show() [instance]
void Show::ctor_2()
{
    ctor_1();
}

// public generated Show New() [static]
Show* Show::New2()
{
    Show* obj1 = (Show*)uNew(Show_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Playback.uno
// -----------------------------------------------------------------------

// public sealed class Stop
// {
static void Stop_build(uType* type)
{
    ::TYPES[16] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.IPlayback>*/, ::g::Fuse::Triggers::IPlayback_typeof(), NULL);
    ::TYPES[17] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(12);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Stop__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Stop);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Stop", options);
    type->fp_build_ = Stop_build;
    type->fp_ctor_ = (void*)Stop__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Stop__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Stop()
void Stop__ctor_3_fn(Stop* __this)
{
    __this->ctor_3();
}

// public generated Stop New()
void Stop__New2_fn(Stop** __retval)
{
    *__retval = Stop::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void Stop__Perform_fn(Stop* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Stop", "Perform(Fuse.Node)");
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[16/*Fuse.Node.FindByType<Fuse.Triggers.IPlayback>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::Stop(uInterface(uPtr(t), ::TYPES[17/*Fuse.Triggers.IPlayback*/]));
}

// public generated Stop() [instance]
void Stop::ctor_3()
{
    ctor_2();
}

// public generated Stop New() [static]
Stop* Stop::New2()
{
    Stop* obj2 = (Stop*)uNew(Stop_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/WebViewNavActions.uno
// --------------------------------------------------------------------------------

// public sealed class StopLoading
// {
static void StopLoading_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::WebViewNavAction_type, interface0));
    type->SetFields(11);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StopLoading__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StopLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.StopLoading", options);
    type->fp_build_ = StopLoading_build;
    type->fp_ctor_ = (void*)StopLoading__New2_fn;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))StopLoading__Execute_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated StopLoading()
void StopLoading__ctor_3_fn(StopLoading* __this)
{
    __this->ctor_3();
}

// private override sealed void Execute(Fuse.Controls.WebView webview)
void StopLoading__Execute_fn(StopLoading* __this, ::g::Fuse::Controls::WebView* webview)
{
    uStackFrame __("Fuse.Triggers.Actions.StopLoading", "Execute(Fuse.Controls.WebView)");
    uPtr(webview)->Stop();
}

// public generated StopLoading New()
void StopLoading__New2_fn(StopLoading** __retval)
{
    *__retval = StopLoading::New2();
}

// public generated StopLoading() [instance]
void StopLoading::ctor_3()
{
    ctor_2();
}

// public generated StopLoading New() [static]
StopLoading* StopLoading::New2()
{
    StopLoading* obj1 = (StopLoading*)uNew(StopLoading_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/TimelineAction.uno
// -----------------------------------------------------------------------------

// public sealed class TimelineAction
// {
static void TimelineAction_build(uType* type)
{
    ::STRINGS[21] = uString::Const("`TimelineAction` called without a `Timeline` `Target`");
    ::STRINGS[22] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/TimelineAction.uno");
    ::STRINGS[2] = uString::Const("Perform");
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Fuse::Triggers::Actions::TimelineActionHow_typeof(), offsetof(TimelineAction, _How), 0,
        ::g::Uno::Double_typeof(), offsetof(TimelineAction, _Progress), 0,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(TimelineAction, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_How", NULL, (void*)TimelineAction__get_How_fn, 0, false, ::g::Fuse::Triggers::Actions::TimelineActionHow_typeof(), 0),
        new uFunction("set_How", NULL, (void*)TimelineAction__set_How_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Actions::TimelineActionHow_typeof()),
        new uFunction(".ctor", NULL, (void*)TimelineAction__New2_fn, 0, true, type, 0),
        new uFunction("get_Progress", NULL, (void*)TimelineAction__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, (void*)TimelineAction__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Target", NULL, (void*)TimelineAction__get_Target_fn, 0, false, ::g::Fuse::Triggers::Timeline_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)TimelineAction__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Timeline_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TimelineAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TimelineAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TimelineAction", options);
    type->fp_build_ = TimelineAction_build;
    type->fp_ctor_ = (void*)TimelineAction__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TimelineAction__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated TimelineAction()
void TimelineAction__ctor_2_fn(TimelineAction* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Triggers.Actions.TimelineActionHow get_How()
void TimelineAction__get_How_fn(TimelineAction* __this, int32_t* __retval)
{
    *__retval = __this->How();
}

// public generated void set_How(Fuse.Triggers.Actions.TimelineActionHow value)
void TimelineAction__set_How_fn(TimelineAction* __this, int32_t* value)
{
    __this->How(*value);
}

// public generated TimelineAction New()
void TimelineAction__New2_fn(TimelineAction** __retval)
{
    *__retval = TimelineAction::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void TimelineAction__Perform_fn(TimelineAction* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.TimelineAction", "Perform(Fuse.Node)");
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[21/*"`TimelineAc...*/], __this, ::STRINGS[22/*"/usr/local/...*/], 48, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    switch (__this->How())
    {
        case 0:
        {
            uPtr(t)->Pause();
            break;
        }
        case 2:
        {
            uPtr(t)->PlayTo1(__this->Progress());
            break;
        }
        case 3:
        {
            uPtr(t)->Pulse1();
            break;
        }
        case 4:
        {
            uPtr(t)->PulseBackward1();
            break;
        }
        case 5:
        {
            uPtr(t)->PulseForward();
            break;
        }
        case 1:
        case 6:
        {
            uPtr(t)->Resume();
            break;
        }
        case 7:
        {
            uPtr(t)->Progress1(__this->Progress());
            break;
        }
        case 8:
        {
            uPtr(t)->Stop1();
            break;
        }
    }
}

// public generated double get_Progress()
void TimelineAction__get_Progress_fn(TimelineAction* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void set_Progress(double value)
void TimelineAction__set_Progress_fn(TimelineAction* __this, double* value)
{
    __this->Progress(*value);
}

// public generated Fuse.Triggers.Timeline get_Target()
void TimelineAction__get_Target_fn(TimelineAction* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value)
void TimelineAction__set_Target_fn(TimelineAction* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated TimelineAction() [instance]
void TimelineAction::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.Actions.TimelineActionHow get_How() [instance]
int32_t TimelineAction::How()
{
    return _How;
}

// public generated void set_How(Fuse.Triggers.Actions.TimelineActionHow value) [instance]
void TimelineAction::How(int32_t value)
{
    _How = value;
}

// public generated double get_Progress() [instance]
double TimelineAction::Progress()
{
    return _Progress;
}

// public generated void set_Progress(double value) [instance]
void TimelineAction::Progress(double value)
{
    _Progress = value;
}

// public generated Fuse.Triggers.Timeline get_Target() [instance]
::g::Fuse::Triggers::Timeline* TimelineAction::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance]
void TimelineAction::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}

// public generated TimelineAction New() [static]
TimelineAction* TimelineAction::New2()
{
    TimelineAction* obj1 = (TimelineAction*)uNew(TimelineAction_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/TimelineAction.uno
// -----------------------------------------------------------------------------

// public enum TimelineActionHow
uEnumType* TimelineActionHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TimelineActionHow", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "Pause", 0LL,
        "Play", 1LL,
        "PlayTo", 2LL,
        "Pulse", 3LL,
        "PulseBackward", 4LL,
        "PulseForward", 5LL,
        "Resume", 6LL,
        "Seek", 7LL,
        "Stop", 8LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Toggle.uno
// ---------------------------------------------------------------------

// public sealed class Toggle
// {
static void Toggle_build(uType* type)
{
    ::STRINGS[23] = uString::Const("Could not find `IToggleable` target");
    ::STRINGS[24] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Toggle.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[31] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.Actions.IToggleable>*/, ::g::Fuse::Triggers::Actions::IToggleable_typeof(), NULL);
    ::TYPES[32] = ::g::Fuse::Triggers::Actions::IToggleable_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::TYPES[32/*Fuse.Triggers.Actions.IToggleable*/], offsetof(Toggle, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Toggle__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)Toggle__get_Target_fn, 0, false, ::TYPES[32/*Fuse.Triggers.Actions.IToggleable*/], 0),
        new uFunction("set_Target", NULL, (void*)Toggle__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[32/*Fuse.Triggers.Actions.IToggleable*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Toggle_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Toggle);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Toggle", options);
    type->fp_build_ = Toggle_build;
    type->fp_ctor_ = (void*)Toggle__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Toggle__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated Toggle()
void Toggle__ctor_2_fn(Toggle* __this)
{
    __this->ctor_2();
}

// public generated Toggle New()
void Toggle__New2_fn(Toggle** __retval)
{
    *__retval = Toggle::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void Toggle__Perform_fn(Toggle* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Toggle", "Perform(Fuse.Node)");
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[31/*Fuse.Node.FindByType<Fuse.Triggers.Actions.IToggleable>*/]);

    if (t == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[23/*"Could not f...*/], __this, ::STRINGS[24/*"/usr/local/...*/], 41, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    ::g::Fuse::Triggers::Actions::IToggleable::Toggle(uInterface(uPtr(t), ::TYPES[32/*Fuse.Triggers.Actions.IToggleable*/]));
}

// public generated Fuse.Triggers.Actions.IToggleable get_Target()
void Toggle__get_Target_fn(Toggle* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Actions.IToggleable value)
void Toggle__set_Target_fn(Toggle* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Toggle() [instance]
void Toggle::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.Actions.IToggleable get_Target() [instance]
uObject* Toggle::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Actions.IToggleable value) [instance]
void Toggle::Target(uObject* value)
{
    _Target = value;
}

// public generated Toggle New() [static]
Toggle* Toggle::New2()
{
    Toggle* obj2 = (Toggle*)uNew(Toggle_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno
// -------------------------------------------------------------------------------

// public sealed class TransitionLayout
// {
static void TransitionLayout_build(uType* type)
{
    ::STRINGS[25] = uString::Const("Missing `From` or cannot find `Element` target");
    ::STRINGS[26] = uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Triggers/LayoutAnimation.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Triggers::LayoutTransition_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(TransitionLayout, _perform), 0,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(TransitionLayout, _From), 0,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(TransitionLayout, _Target), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_From", NULL, (void*)TransitionLayout__get_From_fn, 0, false, ::TYPES[0/*Fuse.Elements.Element*/], 0),
        new uFunction("set_From", NULL, (void*)TransitionLayout__set_From_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Fuse.Elements.Element*/]),
        new uFunction(".ctor", NULL, (void*)TransitionLayout__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)TransitionLayout__get_Target_fn, 0, false, ::TYPES[0/*Fuse.Elements.Element*/], 0),
        new uFunction("set_Target", NULL, (void*)TransitionLayout__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Fuse.Elements.Element*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TransitionLayout);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionLayout", options);
    type->fp_build_ = TransitionLayout_build;
    type->fp_ctor_ = (void*)TransitionLayout__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionLayout__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated TransitionLayout()
void TransitionLayout__ctor_2_fn(TransitionLayout* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Elements.Element get_From()
void TransitionLayout__get_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->From();
}

// public generated void set_From(Fuse.Elements.Element value)
void TransitionLayout__set_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value)
{
    __this->From(value);
}

// public generated TransitionLayout New()
void TransitionLayout__New2_fn(TransitionLayout** __retval)
{
    *__retval = TransitionLayout::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void TransitionLayout__Perform_fn(TransitionLayout* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.TransitionLayout", "Perform(Fuse.Node)");
    ::g::Fuse::Elements::Element* ind1;
    __this->_perform = (ind1 = __this->Target(), ((ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Elements::Element*>((::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]), ::TYPES[0/*Fuse.Elements.Element*/])));

    if ((__this->_perform == NULL) || (__this->From() == NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[25/*"Missing `Fr...*/], __this, ::STRINGS[26/*"/usr/local/...*/], 355, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[27/*Uno.Action*/], (void*)TransitionLayout__Transition_fn, __this), 1, 3);
}

// public generated Fuse.Elements.Element get_Target()
void TransitionLayout__get_Target_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Elements.Element value)
void TransitionLayout__set_Target_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Target(value);
}

// private void Transition()
void TransitionLayout__Transition_fn(TransitionLayout* __this)
{
    __this->Transition();
}

// public generated TransitionLayout() [instance]
void TransitionLayout::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Elements.Element get_From() [instance]
::g::Fuse::Elements::Element* TransitionLayout::From()
{
    return _From;
}

// public generated void set_From(Fuse.Elements.Element value) [instance]
void TransitionLayout::From(::g::Fuse::Elements::Element* value)
{
    _From = value;
}

// public generated Fuse.Elements.Element get_Target() [instance]
::g::Fuse::Elements::Element* TransitionLayout::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Elements.Element value) [instance]
void TransitionLayout::Target(::g::Fuse::Elements::Element* value)
{
    _Target = value;
}

// private void Transition() [instance]
void TransitionLayout::Transition()
{
    uStackFrame __("Fuse.Triggers.Actions.TransitionLayout", "Transition()");
    ::g::Uno::Float4x4 ind2;
    ind2 = uPtr(From())->LocalTransform();
    ::g::Uno::Float2 oldPosition = ::g::Uno::Float2__New2(ind2.M41, ind2.M42);
    ::g::Uno::Float2 oldSize = uPtr(From())->ActualSize();
    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(uPtr(From())->WorldTransform(), uPtr(uPtr(_perform)->Parent())->WorldTransformInverse());
    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New2(m.M41, m.M42, m.M43), ::g::Uno::Float3__New4(uPtr(_perform)->IntendedPosition(), 0.0f));
    ::g::Fuse::Triggers::LayoutTransition::SetWorldPositionChange(_perform, worldChange);
    ::g::Fuse::Triggers::LayoutTransition::SetPositionChange(_perform, oldPosition, uPtr(_perform)->IntendedPosition());
    ::g::Fuse::Triggers::LayoutTransition::SetSizeChange(_perform, oldSize, uPtr(_perform)->IntendedSize());
    uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned())->RaiseWithoutBubble(::g::Fuse::Triggers::LayoutTransitionedArgs::New3(_perform), 0);
}

// public generated TransitionLayout New() [static]
TransitionLayout* TransitionLayout::New2()
{
    TransitionLayout* obj3 = (TransitionLayout*)uNew(TransitionLayout_typeof());
    obj3->ctor_2();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/StateTransition.uno
// ------------------------------------------------------------------------------

// public sealed class TransitionState
// {
static void TransitionState_build(uType* type)
{
    ::STRINGS[27] = uString::Const("Missing `Target`");
    ::STRINGS[28] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/StateTransition.uno");
    ::STRINGS[2] = uString::Const("Perform");
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(TransitionState, _Target), 0,
        ::g::Fuse::Triggers::Actions::TransitionStateType_typeof(), offsetof(TransitionState, _Type), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)TransitionState__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)TransitionState__get_Target_fn, 0, false, ::g::Fuse::Triggers::StateGroup_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)TransitionState__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::StateGroup_typeof()),
        new uFunction("get_Type", NULL, (void*)TransitionState__get_Type_fn, 0, false, ::g::Fuse::Triggers::Actions::TransitionStateType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)TransitionState__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Actions::TransitionStateType_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionState_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransitionState);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionState", options);
    type->fp_build_ = TransitionState_build;
    type->fp_ctor_ = (void*)TransitionState__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionState__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated TransitionState()
void TransitionState__ctor_2_fn(TransitionState* __this)
{
    __this->ctor_2();
}

// public generated TransitionState New()
void TransitionState__New2_fn(TransitionState** __retval)
{
    *__retval = TransitionState::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void TransitionState__Perform_fn(TransitionState* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.TransitionState", "Perform(Fuse.Node)");
    ::g::Fuse::Triggers::StateGroup* t = __this->Target();

    if (t == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[27/*"Missing `Ta...*/], __this, ::STRINGS[28/*"/usr/local/...*/], 24, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    switch (__this->Type())
    {
        case 0:
        {
            uPtr(t)->GotoNextState();
            break;
        }
    }
}

// public generated Fuse.Triggers.StateGroup get_Target()
void TransitionState__get_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.StateGroup value)
void TransitionState__set_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type()
void TransitionState__get_Type_fn(TransitionState* __this, int32_t* __retval)
{
    *__retval = __this->Type();
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value)
void TransitionState__set_Type_fn(TransitionState* __this, int32_t* value)
{
    __this->Type(*value);
}

// public generated TransitionState() [instance]
void TransitionState::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.StateGroup get_Target() [instance]
::g::Fuse::Triggers::StateGroup* TransitionState::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.StateGroup value) [instance]
void TransitionState::Target(::g::Fuse::Triggers::StateGroup* value)
{
    _Target = value;
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type() [instance]
int32_t TransitionState::Type()
{
    return _Type;
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value) [instance]
void TransitionState::Type(int32_t value)
{
    _Type = value;
}

// public generated TransitionState New() [static]
TransitionState* TransitionState::New2()
{
    TransitionState* obj1 = (TransitionState*)uNew(TransitionState_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/StateTransition.uno
// ------------------------------------------------------------------------------

// public enum TransitionStateType
uEnumType* TransitionStateType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TransitionStateType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Next", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/TriggerAction.uno
// ----------------------------------------------------------------------------

// public abstract class TriggerAction
// {
static void TriggerAction_build(uType* type)
{
    ::STRINGS[29] = uString::Const("Use `Trigger.When` instead of `Trigger.Direction`");
    ::STRINGS[30] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/TriggerAction.uno");
    ::STRINGS[31] = uString::Const("set_Direction");
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(TriggerAction_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Triggers::Actions::TriggerWhen_typeof(), offsetof(TriggerAction, _when), 0,
        ::g::Uno::Float_typeof(), offsetof(TriggerAction, _progress), 0,
        ::g::Uno::Bool_typeof(), offsetof(TriggerAction, _hasProgress), 0,
        ::g::Uno::Float_typeof(), offsetof(TriggerAction, _delay), 0,
        ::g::Uno::Bool_typeof(), offsetof(TriggerAction, _hasDelay), 0,
        ::g::Uno::Bool_typeof(), offsetof(TriggerAction, _isActive), 0,
        ::g::Uno::String_typeof(), offsetof(TriggerAction, _SourceFileName), 0,
        ::g::Uno::Int_typeof(), offsetof(TriggerAction, _SourceLineNumber), 0,
        ::g::Fuse::Node_typeof(), offsetof(TriggerAction, _TargetNode), 0);
    type->Reflection.SetFunctions(20,
        new uFunction("get_AtProgress", NULL, (void*)TriggerAction__get_AtProgress_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_AtProgress", NULL, (void*)TriggerAction__set_AtProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Delay", NULL, (void*)TriggerAction__get_Delay_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Delay", NULL, (void*)TriggerAction__set_Delay_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Direction", NULL, (void*)TriggerAction__get_Direction_fn, 0, false, ::g::Fuse::Triggers::Actions::TriggerWhen_typeof(), 0),
        new uFunction("set_Direction", NULL, (void*)TriggerAction__set_Direction_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Actions::TriggerWhen_typeof()),
        new uFunction("get_IsActive", NULL, (void*)TriggerAction__get_IsActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsActive", NULL, (void*)TriggerAction__set_IsActive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsProgressTriggered", NULL, (void*)TriggerAction__get_IsProgressTriggered_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("PerformFromNode", NULL, (void*)TriggerAction__PerformFromNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ProgressWhen", NULL, (void*)TriggerAction__ProgressWhen_fn, 0, false, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_SourceFileName", NULL, (void*)TriggerAction__get_SourceFileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_SourceFileName", NULL, (void*)TriggerAction__set_SourceFileName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_SourceLineNumber", NULL, (void*)TriggerAction__get_SourceLineNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_SourceLineNumber", NULL, (void*)TriggerAction__set_SourceLineNumber_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_TargetNode", NULL, (void*)TriggerAction__get_TargetNode_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_TargetNode", NULL, (void*)TriggerAction__set_TargetNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("Unroot", NULL, (void*)TriggerAction__Unroot_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_When", NULL, (void*)TriggerAction__get_When_fn, 0, false, ::g::Fuse::Triggers::Actions::TriggerWhen_typeof(), 0),
        new uFunction("set_When", NULL, (void*)TriggerAction__set_When_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Actions::TriggerWhen_typeof()));
}

TriggerAction_type* TriggerAction_typeof()
{
    static uSStrong<TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TriggerAction);
    options.TypeSize = sizeof(TriggerAction_type);
    type = (TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TriggerAction", options);
    type->fp_build_ = TriggerAction_build;
    type->fp_OnUnrooted = TriggerAction__OnUnrooted_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected generated TriggerAction()
void TriggerAction__ctor_1_fn(TriggerAction* __this)
{
    __this->ctor_1();
}

// public float get_AtProgress()
void TriggerAction__get_AtProgress_fn(TriggerAction* __this, float* __retval)
{
    *__retval = __this->AtProgress();
}

// public void set_AtProgress(float value)
void TriggerAction__set_AtProgress_fn(TriggerAction* __this, float* value)
{
    __this->AtProgress(*value);
}

// public float get_Delay()
void TriggerAction__get_Delay_fn(TriggerAction* __this, float* __retval)
{
    *__retval = __this->Delay();
}

// public void set_Delay(float value)
void TriggerAction__set_Delay_fn(TriggerAction* __this, float* value)
{
    __this->Delay(*value);
}

// public Fuse.Triggers.Actions.TriggerWhen get_Direction()
void TriggerAction__get_Direction_fn(TriggerAction* __this, int32_t* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Triggers.Actions.TriggerWhen value)
void TriggerAction__set_Direction_fn(TriggerAction* __this, int32_t* value)
{
    __this->Direction(*value);
}

// private Fuse.ISourceLocation Fuse.ISourceLocation.get_SourceNearest()
void TriggerAction__FuseISourceLocationget_SourceNearest_fn(TriggerAction* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Triggers.Actions.TriggerAction", "Fuse.ISourceLocation.get_SourceNearest()");
    return *__retval = (uObject*)__this, void();
}

// public bool get_IsActive()
void TriggerAction__get_IsActive_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value)
void TriggerAction__set_IsActive_fn(TriggerAction* __this, bool* value)
{
    __this->IsActive(*value);
}

// public bool get_IsProgressTriggered()
void TriggerAction__get_IsProgressTriggered_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsProgressTriggered();
}

// protected virtual void OnUnrooted()
void TriggerAction__OnUnrooted_fn(TriggerAction* __this)
{
}

// public void PerformFromNode(Fuse.Node target)
void TriggerAction__PerformFromNode_fn(TriggerAction* __this, ::g::Fuse::Node* target)
{
    __this->PerformFromNode(target);
}

// public float ProgressWhen(float totalDuration)
void TriggerAction__ProgressWhen_fn(TriggerAction* __this, float* totalDuration, float* __retval)
{
    *__retval = __this->ProgressWhen(*totalDuration);
}

// public generated string get_SourceFileName()
void TriggerAction__get_SourceFileName_fn(TriggerAction* __this, uString** __retval)
{
    *__retval = __this->SourceFileName();
}

// public generated void set_SourceFileName(string value)
void TriggerAction__set_SourceFileName_fn(TriggerAction* __this, uString* value)
{
    __this->SourceFileName(value);
}

// public generated int get_SourceLineNumber()
void TriggerAction__get_SourceLineNumber_fn(TriggerAction* __this, int32_t* __retval)
{
    *__retval = __this->SourceLineNumber();
}

// public generated void set_SourceLineNumber(int value)
void TriggerAction__set_SourceLineNumber_fn(TriggerAction* __this, int32_t* value)
{
    __this->SourceLineNumber(*value);
}

// public generated Fuse.Node get_TargetNode()
void TriggerAction__get_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->TargetNode();
}

// public generated void set_TargetNode(Fuse.Node value)
void TriggerAction__set_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node* value)
{
    __this->TargetNode(value);
}

// public void Unroot()
void TriggerAction__Unroot_fn(TriggerAction* __this)
{
    __this->Unroot();
}

// public Fuse.Triggers.Actions.TriggerWhen get_When()
void TriggerAction__get_When_fn(TriggerAction* __this, int32_t* __retval)
{
    *__retval = __this->When();
}

// public void set_When(Fuse.Triggers.Actions.TriggerWhen value)
void TriggerAction__set_When_fn(TriggerAction* __this, int32_t* value)
{
    __this->When(*value);
}

// protected generated TriggerAction() [instance]
void TriggerAction::ctor_1()
{
    _isActive = true;
    ctor_();
}

// public float get_AtProgress() [instance]
float TriggerAction::AtProgress()
{
    return _progress;
}

// public void set_AtProgress(float value) [instance]
void TriggerAction::AtProgress(float value)
{
    _hasProgress = true;
    _progress = value;
}

// public float get_Delay() [instance]
float TriggerAction::Delay()
{
    return _delay;
}

// public void set_Delay(float value) [instance]
void TriggerAction::Delay(float value)
{
    _hasDelay = true;
    _delay = value;
}

// public Fuse.Triggers.Actions.TriggerWhen get_Direction() [instance]
int32_t TriggerAction::Direction()
{
    return When();
}

// public void set_Direction(Fuse.Triggers.Actions.TriggerWhen value) [instance]
void TriggerAction::Direction(int32_t value)
{
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[29/*"Use `Trigge...*/], this, ::STRINGS[30/*"/usr/local/...*/], 45, ::STRINGS[31/*"set_Direction"*/]);
    When(value);
}

// public bool get_IsActive() [instance]
bool TriggerAction::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance]
void TriggerAction::IsActive(bool value)
{
    _isActive = value;
}

// public bool get_IsProgressTriggered() [instance]
bool TriggerAction::IsProgressTriggered()
{
    return _hasProgress || _hasDelay;
}

// public void PerformFromNode(Fuse.Node target) [instance]
void TriggerAction::PerformFromNode(::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.TriggerAction", "PerformFromNode(Fuse.Node)");
    ::g::Fuse::Node* ind1;

    if (IsActive())
        Perform((ind1 = TargetNode(), (ind1 != NULL) ? ind1 : target));
}

// public float ProgressWhen(float totalDuration) [instance]
float TriggerAction::ProgressWhen(float totalDuration)
{
    if (_hasProgress)
        return _progress;

    if (_hasDelay)
        return _delay / totalDuration;

    return 0.0f;
}

// public generated string get_SourceFileName() [instance]
uString* TriggerAction::SourceFileName()
{
    return _SourceFileName;
}

// public generated void set_SourceFileName(string value) [instance]
void TriggerAction::SourceFileName(uString* value)
{
    _SourceFileName = value;
}

// public generated int get_SourceLineNumber() [instance]
int32_t TriggerAction::SourceLineNumber()
{
    return _SourceLineNumber;
}

// public generated void set_SourceLineNumber(int value) [instance]
void TriggerAction::SourceLineNumber(int32_t value)
{
    _SourceLineNumber = value;
}

// public generated Fuse.Node get_TargetNode() [instance]
::g::Fuse::Node* TriggerAction::TargetNode()
{
    return _TargetNode;
}

// public generated void set_TargetNode(Fuse.Node value) [instance]
void TriggerAction::TargetNode(::g::Fuse::Node* value)
{
    _TargetNode = value;
}

// public void Unroot() [instance]
void TriggerAction::Unroot()
{
    uStackFrame __("Fuse.Triggers.Actions.TriggerAction", "Unroot()");
    OnUnrooted();
}

// public Fuse.Triggers.Actions.TriggerWhen get_When() [instance]
int32_t TriggerAction::When()
{
    return _when;
}

// public void set_When(Fuse.Triggers.Actions.TriggerWhen value) [instance]
void TriggerAction::When(int32_t value)
{
    _when = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/TriggerAction.uno
// ----------------------------------------------------------------------------

// public enum TriggerWhen
uEnumType* TriggerWhen_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TriggerWhen", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL,
        "ForwardAndBackward", 2LL,
        "Start", 3LL,
        "Stop", 4LL,
        "Both", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.UserEvents/1.12.0/RaiseUserEvent.uno
// -----------------------------------------------------------------------

// public sealed class UserEventArg
// {
static void UserEventArg_build(uType* type)
{
    ::TYPES[33] = ::g::Uno::String_typeof();
    type->SetFields(2,
        ::TYPES[33/*string*/], offsetof(UserEventArg, _Name), 0,
        uObject_typeof(), offsetof(UserEventArg, _Value), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_BoolValue", NULL, (void*)UserEventArg__get_BoolValue_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_BoolValue", NULL, (void*)UserEventArg__set_BoolValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_FloatValue", NULL, (void*)UserEventArg__get_FloatValue_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_FloatValue", NULL, (void*)UserEventArg__set_FloatValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IntValue", NULL, (void*)UserEventArg__get_IntValue_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_IntValue", NULL, (void*)UserEventArg__set_IntValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Name", NULL, (void*)UserEventArg__get_Name_fn, 0, false, ::TYPES[33/*string*/], 0),
        new uFunction(".ctor", NULL, (void*)UserEventArg__New2_fn, 0, true, type, 1, ::TYPES[33/*string*/]),
        new uFunction("get_StringValue", NULL, (void*)UserEventArg__get_StringValue_fn, 0, false, ::TYPES[33/*string*/], 0),
        new uFunction("set_StringValue", NULL, (void*)UserEventArg__set_StringValue_fn, 0, false, uVoid_typeof(), 1, ::TYPES[33/*string*/]),
        new uFunction("get_Value", NULL, (void*)UserEventArg__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)UserEventArg__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

uType* UserEventArg_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(UserEventArg);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.Actions.UserEventArg", options);
    type->fp_build_ = UserEventArg_build;
    return type;
}

// public UserEventArg(string name)
void UserEventArg__ctor_1_fn(UserEventArg* __this, uString* name)
{
    __this->ctor_1(name);
}

// public bool get_BoolValue()
void UserEventArg__get_BoolValue_fn(UserEventArg* __this, bool* __retval)
{
    *__retval = __this->BoolValue();
}

// public void set_BoolValue(bool value)
void UserEventArg__set_BoolValue_fn(UserEventArg* __this, bool* value)
{
    __this->BoolValue(*value);
}

// public float get_FloatValue()
void UserEventArg__get_FloatValue_fn(UserEventArg* __this, float* __retval)
{
    *__retval = __this->FloatValue();
}

// public void set_FloatValue(float value)
void UserEventArg__set_FloatValue_fn(UserEventArg* __this, float* value)
{
    __this->FloatValue(*value);
}

// public int get_IntValue()
void UserEventArg__get_IntValue_fn(UserEventArg* __this, int32_t* __retval)
{
    *__retval = __this->IntValue();
}

// public void set_IntValue(int value)
void UserEventArg__set_IntValue_fn(UserEventArg* __this, int32_t* value)
{
    __this->IntValue(*value);
}

// public generated string get_Name()
void UserEventArg__get_Name_fn(UserEventArg* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value)
void UserEventArg__set_Name_fn(UserEventArg* __this, uString* value)
{
    __this->Name(value);
}

// public UserEventArg New(string name)
void UserEventArg__New2_fn(uString* name, UserEventArg** __retval)
{
    *__retval = UserEventArg::New2(name);
}

// public string get_StringValue()
void UserEventArg__get_StringValue_fn(UserEventArg* __this, uString** __retval)
{
    *__retval = __this->StringValue();
}

// public void set_StringValue(string value)
void UserEventArg__set_StringValue_fn(UserEventArg* __this, uString* value)
{
    __this->StringValue(value);
}

// public generated object get_Value()
void UserEventArg__get_Value_fn(UserEventArg* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(object value)
void UserEventArg__set_Value_fn(UserEventArg* __this, uObject* value)
{
    __this->Value(value);
}

// public UserEventArg(string name) [instance]
void UserEventArg::ctor_1(uString* name)
{
    ctor_();
    Name(name);
}

// public bool get_BoolValue() [instance]
bool UserEventArg::BoolValue()
{
    uStackFrame __("Fuse.Triggers.Actions.UserEventArg", "get_BoolValue()");
    return uUnbox<bool>(::g::Uno::Bool_typeof(), Value());
}

// public void set_BoolValue(bool value) [instance]
void UserEventArg::BoolValue(bool value)
{
    Value(uBox(::g::Uno::Bool_typeof(), value));
}

// public float get_FloatValue() [instance]
float UserEventArg::FloatValue()
{
    uStackFrame __("Fuse.Triggers.Actions.UserEventArg", "get_FloatValue()");
    return (float)uUnbox<double>(::g::Uno::Double_typeof(), Value());
}

// public void set_FloatValue(float value) [instance]
void UserEventArg::FloatValue(float value)
{
    Value(uBox(::g::Uno::Double_typeof(), (double)value));
}

// public int get_IntValue() [instance]
int32_t UserEventArg::IntValue()
{
    uStackFrame __("Fuse.Triggers.Actions.UserEventArg", "get_IntValue()");
    return uUnbox<int32_t>(::g::Uno::Int_typeof(), Value());
}

// public void set_IntValue(int value) [instance]
void UserEventArg::IntValue(int32_t value)
{
    Value(uBox<int32_t>(::g::Uno::Int_typeof(), value));
}

// public generated string get_Name() [instance]
uString* UserEventArg::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance]
void UserEventArg::Name(uString* value)
{
    _Name = value;
}

// public string get_StringValue() [instance]
uString* UserEventArg::StringValue()
{
    uStackFrame __("Fuse.Triggers.Actions.UserEventArg", "get_StringValue()");
    return uCast<uString*>(Value(), ::TYPES[33/*string*/]);
}

// public void set_StringValue(string value) [instance]
void UserEventArg::StringValue(uString* value)
{
    Value(value);
}

// public generated object get_Value() [instance]
uObject* UserEventArg::Value()
{
    return _Value;
}

// public generated void set_Value(object value) [instance]
void UserEventArg::Value(uObject* value)
{
    _Value = value;
}

// public UserEventArg New(string name) [static]
UserEventArg* UserEventArg::New2(uString* name)
{
    UserEventArg* obj1 = (UserEventArg*)uNew(UserEventArg_typeof());
    obj1->ctor_1(name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/WebViewNavActions.uno
// --------------------------------------------------------------------------------

// public abstract class WebViewNavAction
// {
static void WebViewNavAction_build(uType* type)
{
    ::TYPES[34] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Controls.WebView>*/, ::g::Fuse::Controls::WebView_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WebViewNavAction_type, interface0));
    type->SetFields(11);
}

WebViewNavAction_type* WebViewNavAction_typeof()
{
    static uSStrong<WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WebViewNavAction);
    options.TypeSize = sizeof(WebViewNavAction_type);
    type = (WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.WebViewNavAction", options);
    type->fp_build_ = WebViewNavAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))WebViewNavAction__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// internal WebViewNavAction()
void WebViewNavAction__ctor_2_fn(WebViewNavAction* __this)
{
    __this->ctor_2();
}

// protected override sealed void Perform(Fuse.Node target)
void WebViewNavAction__Perform_fn(WebViewNavAction* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.WebViewNavAction", "Perform(Fuse.Node)");
    ::g::Fuse::Controls::WebView* webView = (::g::Fuse::Controls::WebView*)uPtr(target)->FindByType(::TYPES[34/*Fuse.Node.FindByType<Fuse.Controls.WebView>*/]);

    if (webView != NULL)
        __this->Execute(webView);
}

// internal WebViewNavAction() [instance]
void WebViewNavAction::ctor_2()
{
    ctor_1();
}
// }

}}}} // ::g::Fuse::Triggers::Actions
