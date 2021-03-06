// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Object.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.ApplicationStateTransitionHandler.h>
#include <Uno.Platform.ClosingEventArgs.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Platform.EventModifiers.h>
#include <Uno.Platform.EventSources.HardwareKeys.h>
#include <Uno.Platform.EventSources.TextSource.h>
#include <Uno.Platform.iOSDisplay.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.OSFrame.h>
#include <Uno.Platform.PointerCursor.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.TextInputEventArgs.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.Platform.WheelDeltaMode.h>
#include <Uno.Platform.Window.h>
#include <Uno.Runtime.Implementation.Internal.Unsafe.h>
#include <Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
void uInitRtti();
void uStartApp();
static uString* STRINGS[13];
static uType* TYPES[10];

namespace g{
namespace Uno{
namespace Platform{

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/CoreApp.uno
// ----------------------------------------------------------------------------

// public enum ApplicationState
uEnumType* ApplicationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.ApplicationState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Background", 1LL,
        "Foreground", 2LL,
        "Interactive", 3LL,
        "Terminating", -1LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/CoreApp.uno
// ----------------------------------------------------------------------------

// public delegate void ApplicationStateTransitionHandler(Uno.Platform.ApplicationState newState)
uDelegateType* ApplicationStateTransitionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Platform.ApplicationStateTransitionHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Platform::ApplicationState_typeof());
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/ClosingEventArgs.uno
// -------------------------------------------------------------------------------------

// public sealed class ClosingEventArgs
// {
static void ClosingEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(ClosingEventArgs, _Cancel), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Cancel", NULL, (void*)ClosingEventArgs__get_Cancel_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Cancel", NULL, (void*)ClosingEventArgs__set_Cancel_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)ClosingEventArgs__New2_fn, 0, true, type, 0));
}

uType* ClosingEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ClosingEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.ClosingEventArgs", options);
    type->fp_build_ = ClosingEventArgs_build;
    type->fp_ctor_ = (void*)ClosingEventArgs__New2_fn;
    return type;
}

// public generated ClosingEventArgs()
void ClosingEventArgs__ctor_1_fn(ClosingEventArgs* __this)
{
    __this->ctor_1();
}

// public generated bool get_Cancel()
void ClosingEventArgs__get_Cancel_fn(ClosingEventArgs* __this, bool* __retval)
{
    *__retval = __this->Cancel();
}

// public generated void set_Cancel(bool value)
void ClosingEventArgs__set_Cancel_fn(ClosingEventArgs* __this, bool* value)
{
    __this->Cancel(*value);
}

// public generated ClosingEventArgs New()
void ClosingEventArgs__New2_fn(ClosingEventArgs** __retval)
{
    *__retval = ClosingEventArgs::New2();
}

// public generated ClosingEventArgs() [instance]
void ClosingEventArgs::ctor_1()
{
    ctor_();
}

// public generated bool get_Cancel() [instance]
bool ClosingEventArgs::Cancel()
{
    return _Cancel;
}

// public generated void set_Cancel(bool value) [instance]
void ClosingEventArgs::Cancel(bool value)
{
    _Cancel = value;
}

// public generated ClosingEventArgs New() [static]
ClosingEventArgs* ClosingEventArgs::New2()
{
    ClosingEventArgs* obj1 = (ClosingEventArgs*)uNew(ClosingEventArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/CoreApp.uno
// ----------------------------------------------------------------------------

// public abstract class CoreApp
// {
// static generated CoreApp()
static void CoreApp__cctor__fn(uType* __type)
{
    CoreApp::_delayedURIS_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]));
}

static void CoreApp_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Foreground");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/CoreApp.uno");
    ::STRINGS[2] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Background");
    ::STRINGS[3] = uString::Const("EnterForeground() called on terminating application");
    ::STRINGS[4] = uString::Const("EnterForeground() called on uninitialized application");
    ::STRINGS[5] = uString::Const("EnterInteractive() called on terminating application");
    ::STRINGS[6] = uString::Const("EnterInteractive() called on uninitialized application");
    ::STRINGS[7] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Interactive");
    ::STRINGS[8] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Uninitialized");
    ::STRINGS[9] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Terminating");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&CoreApp::_delayedURIS_, uFieldFlagsStatic,
        type, (uintptr_t)&CoreApp::_Current_, uFieldFlagsStatic,
        ::g::Uno::Platform::ApplicationState_typeof(), (uintptr_t)&CoreApp::_State_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.EventHandler<string>*/], (uintptr_t)&CoreApp::_receivedURI1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&CoreApp::EnteringBackground1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&CoreApp::EnteringForeground1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&CoreApp::EnteringInteractive1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&CoreApp::ExitedInteractive1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.EventHandler*/], (uintptr_t)&CoreApp::ReceivedLowMemoryWarning1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&CoreApp::Started1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&CoreApp::Terminating1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(21,
        new uFunction("add__receivedURI", NULL, (void*)CoreApp__add__receivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("remove__receivedURI", NULL, (void*)CoreApp__remove__receivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("get_Current", NULL, (void*)CoreApp__get_Current_fn, 0, true, type, 0),
        new uFunction("add_EnteringBackground", NULL, (void*)CoreApp__add_EnteringBackground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("remove_EnteringBackground", NULL, (void*)CoreApp__remove_EnteringBackground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("add_EnteringForeground", NULL, (void*)CoreApp__add_EnteringForeground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("remove_EnteringForeground", NULL, (void*)CoreApp__remove_EnteringForeground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("add_EnteringInteractive", NULL, (void*)CoreApp__add_EnteringInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("remove_EnteringInteractive", NULL, (void*)CoreApp__remove_EnteringInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("add_ExitedInteractive", NULL, (void*)CoreApp__add_ExitedInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("remove_ExitedInteractive", NULL, (void*)CoreApp__remove_ExitedInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("Load", NULL, (void*)CoreApp__Load_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_ReceivedLowMemoryWarning", NULL, (void*)CoreApp__add_ReceivedLowMemoryWarning_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("remove_ReceivedLowMemoryWarning", NULL, (void*)CoreApp__remove_ReceivedLowMemoryWarning_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("add_ReceivedURI", NULL, (void*)CoreApp__add_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("remove_ReceivedURI", NULL, (void*)CoreApp__remove_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("add_Started", NULL, (void*)CoreApp__add_Started_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("remove_Started", NULL, (void*)CoreApp__remove_Started_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("get_State", NULL, (void*)CoreApp__get_State_fn, 0, true, ::g::Uno::Platform::ApplicationState_typeof(), 0),
        new uFunction("add_Terminating", NULL, (void*)CoreApp__add_Terminating_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("remove_Terminating", NULL, (void*)CoreApp__remove_Terminating_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]));
}

uType* CoreApp_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(CoreApp);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.CoreApp", options);
    type->fp_build_ = CoreApp_build;
    type->fp_cctor_ = CoreApp__cctor__fn;
    return type;
}

// protected CoreApp()
void CoreApp__ctor__fn(CoreApp* __this)
{
    __this->ctor_();
}

// public static generated void add__receivedURI(Uno.EventHandler<string> value)
void CoreApp__add__receivedURI_fn(uDelegate* value)
{
    CoreApp::add__receivedURI(value);
}

// public static generated void remove__receivedURI(Uno.EventHandler<string> value)
void CoreApp__remove__receivedURI_fn(uDelegate* value)
{
    CoreApp::remove__receivedURI(value);
}

// public static generated Uno.Platform.CoreApp get_Current()
void CoreApp__get_Current_fn(CoreApp** __retval)
{
    *__retval = CoreApp::Current();
}

// internal static generated void set_Current(Uno.Platform.CoreApp value)
void CoreApp__set_Current_fn(CoreApp* value)
{
    CoreApp::Current(value);
}

// private static void DispatchDelayedUri()
void CoreApp__DispatchDelayedUri_fn()
{
    CoreApp::DispatchDelayedUri();
}

// internal static void EnterBackground()
void CoreApp__EnterBackground_fn()
{
    CoreApp::EnterBackground();
}

// internal static void EnterForeground()
void CoreApp__EnterForeground_fn()
{
    CoreApp::EnterForeground();
}

// public static generated void add_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler value)
void CoreApp__add_EnteringBackground_fn(uDelegate* value)
{
    CoreApp::add_EnteringBackground(value);
}

// public static generated void remove_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler value)
void CoreApp__remove_EnteringBackground_fn(uDelegate* value)
{
    CoreApp::remove_EnteringBackground(value);
}

// public static generated void add_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler value)
void CoreApp__add_EnteringForeground_fn(uDelegate* value)
{
    CoreApp::add_EnteringForeground(value);
}

// public static generated void remove_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler value)
void CoreApp__remove_EnteringForeground_fn(uDelegate* value)
{
    CoreApp::remove_EnteringForeground(value);
}

// public static generated void add_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler value)
void CoreApp__add_EnteringInteractive_fn(uDelegate* value)
{
    CoreApp::add_EnteringInteractive(value);
}

// public static generated void remove_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler value)
void CoreApp__remove_EnteringInteractive_fn(uDelegate* value)
{
    CoreApp::remove_EnteringInteractive(value);
}

// internal static void EnterInteractive()
void CoreApp__EnterInteractive_fn()
{
    CoreApp::EnterInteractive();
}

// public static generated void add_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler value)
void CoreApp__add_ExitedInteractive_fn(uDelegate* value)
{
    CoreApp::add_ExitedInteractive(value);
}

// public static generated void remove_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler value)
void CoreApp__remove_ExitedInteractive_fn(uDelegate* value)
{
    CoreApp::remove_ExitedInteractive(value);
}

// internal static void ExitInteractive()
void CoreApp__ExitInteractive_fn()
{
    CoreApp::ExitInteractive();
}

// public void Load()
void CoreApp__Load_fn(CoreApp* __this)
{
    __this->Load();
}

// internal static void OnReceivedLowMemoryWarning()
void CoreApp__OnReceivedLowMemoryWarning_fn()
{
    CoreApp::OnReceivedLowMemoryWarning();
}

// public static generated void add_ReceivedLowMemoryWarning(Uno.EventHandler value)
void CoreApp__add_ReceivedLowMemoryWarning_fn(uDelegate* value)
{
    CoreApp::add_ReceivedLowMemoryWarning(value);
}

// public static generated void remove_ReceivedLowMemoryWarning(Uno.EventHandler value)
void CoreApp__remove_ReceivedLowMemoryWarning_fn(uDelegate* value)
{
    CoreApp::remove_ReceivedLowMemoryWarning(value);
}

// public static void add_ReceivedURI(Uno.EventHandler<string> value)
void CoreApp__add_ReceivedURI_fn(uDelegate* value)
{
    CoreApp::add_ReceivedURI(value);
}

// public static void remove_ReceivedURI(Uno.EventHandler<string> value)
void CoreApp__remove_ReceivedURI_fn(uDelegate* value)
{
    CoreApp::remove_ReceivedURI(value);
}

// internal static void Start()
void CoreApp__Start_fn()
{
    CoreApp::Start();
}

// public static generated void add_Started(Uno.Platform.ApplicationStateTransitionHandler value)
void CoreApp__add_Started_fn(uDelegate* value)
{
    CoreApp::add_Started(value);
}

// public static generated void remove_Started(Uno.Platform.ApplicationStateTransitionHandler value)
void CoreApp__remove_Started_fn(uDelegate* value)
{
    CoreApp::remove_Started(value);
}

// public static generated Uno.Platform.ApplicationState get_State()
void CoreApp__get_State_fn(int32_t* __retval)
{
    *__retval = CoreApp::State();
}

// private static generated void set_State(Uno.Platform.ApplicationState value)
void CoreApp__set_State_fn(int32_t* value)
{
    CoreApp::State(*value);
}

// internal static void Terminate()
void CoreApp__Terminate_fn()
{
    CoreApp::Terminate();
}

// public static generated void add_Terminating(Uno.Platform.ApplicationStateTransitionHandler value)
void CoreApp__add_Terminating_fn(uDelegate* value)
{
    CoreApp::add_Terminating(value);
}

// public static generated void remove_Terminating(Uno.Platform.ApplicationStateTransitionHandler value)
void CoreApp__remove_Terminating_fn(uDelegate* value)
{
    CoreApp::remove_Terminating(value);
}

uSStrong< ::g::Uno::Collections::List*> CoreApp::_delayedURIS_;
uSStrong<CoreApp*> CoreApp::_Current_;
int32_t CoreApp::_State_;
uSStrong<uDelegate*> CoreApp::_receivedURI1_;
uSStrong<uDelegate*> CoreApp::EnteringBackground1_;
uSStrong<uDelegate*> CoreApp::EnteringForeground1_;
uSStrong<uDelegate*> CoreApp::EnteringInteractive1_;
uSStrong<uDelegate*> CoreApp::ExitedInteractive1_;
uSStrong<uDelegate*> CoreApp::ReceivedLowMemoryWarning1_;
uSStrong<uDelegate*> CoreApp::Started1_;
uSStrong<uDelegate*> CoreApp::Terminating1_;

// protected CoreApp() [instance]
void CoreApp::ctor_()
{
    if (CoreApp::Current() == NULL)
        CoreApp::Current(this);
}

// public void Load() [instance]
void CoreApp::Load()
{
}

// private static void DispatchDelayedUri() [static]
void CoreApp::DispatchDelayedUri()
{
    uStackFrame __("Uno.Platform.CoreApp", "DispatchDelayedUri()");
    CoreApp_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret14;
    uDelegate* handler = CoreApp::_receivedURI1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
    {
        if (uPtr(CoreApp::_delayedURIS_)->Count() > 0)
        {
            ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum13 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(CoreApp::_delayedURIS_), &ret14), ret14);

            {
                try
                {
                    {
                        while (enum13.MoveNext(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]))
                        {
                            uString* u = enum13.Current(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
                            uPtr(handler)->Invoke(2, NULL, u);
                        }
                    }
                }

                catch (const uThrowable& __t)
                {
                    {
                        enum13.Dispose(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
                    }
                                        throw __t;
                    goto __after_finally_0;
                }

                {
                    enum13.Dispose(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
                }
                __after_finally_0:;
            }

            uPtr(CoreApp::_delayedURIS_)->Clear();
        }
    }
}

// internal static void EnterBackground() [static]
void CoreApp::EnterBackground()
{
    uStackFrame __("Uno.Platform.CoreApp", "EnterBackground()");
    CoreApp_typeof()->Init();
    int32_t assert9;
    int32_t assert10;

    switch (CoreApp::State())
    {
        case -1:
            return;
        case 0:
            return;
        case 1:
            return;
        case 2:
            break;
        case 3:
        {
            CoreApp::ExitInteractive();
            break;
        }
    }

    assert9 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert9 == 2, ::STRINGS[0/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 210, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), assert9), uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), 2)));
    CoreApp::State(1);
    uDelegate* handler = CoreApp::EnteringBackground1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(CoreApp::State()));

    assert10 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert10 == 1, ::STRINGS[2/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 218, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), assert10), uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), 1)));
}

// internal static void EnterForeground() [static]
void CoreApp::EnterForeground()
{
    uStackFrame __("Uno.Platform.CoreApp", "EnterForeground()");
    CoreApp_typeof()->Init();
    int32_t assert3;
    int32_t assert4;

    switch (CoreApp::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[3/*"EnterForegr...*/], 0, ::STRINGS[1/*"/usr/local/...*/], 92);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[4/*"EnterForegr...*/], 0, ::STRINGS[1/*"/usr/local/...*/], 96);
            return;
        }
        case 1:
            break;
        case 2:
        case 3:
            return;
    }

    assert3 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert3 == 1, ::STRINGS[2/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 108, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), assert3), uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), 1)));
    CoreApp::State(2);
    uDelegate* handler = CoreApp::EnteringForeground1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(CoreApp::State()));

    assert4 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert4 == 2, ::STRINGS[0/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 116, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), assert4), uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), 2)));
}

// internal static void EnterInteractive() [static]
void CoreApp::EnterInteractive()
{
    uStackFrame __("Uno.Platform.CoreApp", "EnterInteractive()");
    CoreApp_typeof()->Init();
    int32_t assert5;
    int32_t assert6;

    switch (CoreApp::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[5/*"EnterIntera...*/], 0, ::STRINGS[1/*"/usr/local/...*/], 128);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[6/*"EnterIntera...*/], 0, ::STRINGS[1/*"/usr/local/...*/], 132);
            return;
        }
        case 1:
        {
            CoreApp::EnterForeground();
            break;
        }
        case 2:
            break;
        case 3:
            return;
    }

    assert5 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert5 == 2, ::STRINGS[0/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 146, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), assert5), uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), 2)));
    CoreApp::State(3);
    uDelegate* handler = CoreApp::EnteringInteractive1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(CoreApp::State()));

    assert6 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert6 == 3, ::STRINGS[7/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 154, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), assert6), uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), 3)));
}

// internal static void ExitInteractive() [static]
void CoreApp::ExitInteractive()
{
    uStackFrame __("Uno.Platform.CoreApp", "ExitInteractive()");
    CoreApp_typeof()->Init();
    int32_t assert7;
    int32_t assert8;

    switch (CoreApp::State())
    {
        case -1:
            return;
        case 0:
            return;
        case 1:
        case 2:
            return;
        case 3:
            break;
    }

    assert7 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert7 == 3, ::STRINGS[7/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 178, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), assert7), uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), 3)));
    CoreApp::State(2);
    uDelegate* handler = CoreApp::ExitedInteractive1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(CoreApp::State()));

    assert8 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert8 == 2, ::STRINGS[0/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 186, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), assert8), uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), 2)));
}

// internal static void OnReceivedLowMemoryWarning() [static]
void CoreApp::OnReceivedLowMemoryWarning()
{
    uStackFrame __("Uno.Platform.CoreApp", "OnReceivedLowMemoryWarning()");
    CoreApp_typeof()->Init();
    uDelegate* handler = CoreApp::ReceivedLowMemoryWarning1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// internal static void Start() [static]
void CoreApp::Start()
{
    uStackFrame __("Uno.Platform.CoreApp", "Start()");
    CoreApp_typeof()->Init();
    int32_t assert1;
    int32_t assert2;

    switch (CoreApp::State())
    {
        case 1:
        {
            CoreApp::Terminate();
            break;
        }
        case 0:
        case -1:
            break;
    }

    uInitRtti();
    assert1 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert1 == 0, ::STRINGS[8/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 74, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), assert1), uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), 0)));
    uStartApp();
    CoreApp::State(1);
    uDelegate* handler = CoreApp::Started1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(CoreApp::State()));

    assert2 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert2 == 1, ::STRINGS[2/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 84, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), assert2), uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), 1)));
}

// internal static void Terminate() [static]
void CoreApp::Terminate()
{
    uStackFrame __("Uno.Platform.CoreApp", "Terminate()");
    CoreApp_typeof()->Init();
    int32_t assert11;
    int32_t assert12;

    switch (CoreApp::State())
    {
        case -1:
        case 0:
            return;
        case 1:
            break;
        case 2:
        case 3:
        {
            CoreApp::EnterBackground();
            break;
        }
    }

    assert11 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert11 == 1, ::STRINGS[2/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 238, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), assert11), uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), 1)));
    CoreApp::State(-1);
    uDelegate* handler = CoreApp::Terminating1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(CoreApp::State()));

    assert12 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert12 == -1, ::STRINGS[9/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 246, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), assert12), uBox<int32_t>(::g::Uno::Platform::ApplicationState_typeof(), -1)));
    CoreApp::State(0);
}

// public static generated Uno.Platform.CoreApp get_Current() [static]
CoreApp* CoreApp::Current()
{
    CoreApp_typeof()->Init();
    return CoreApp::_Current_;
}

// internal static generated void set_Current(Uno.Platform.CoreApp value) [static]
void CoreApp::Current(CoreApp* value)
{
    CoreApp_typeof()->Init();
    CoreApp::_Current_ = value;
}

// public static generated Uno.Platform.ApplicationState get_State() [static]
int32_t CoreApp::State()
{
    CoreApp_typeof()->Init();
    return CoreApp::_State_;
}

// private static generated void set_State(Uno.Platform.ApplicationState value) [static]
void CoreApp::State(int32_t value)
{
    CoreApp_typeof()->Init();
    CoreApp::_State_ = value;
}

// public static generated void add__receivedURI(Uno.EventHandler<string> value) [static]
void CoreApp::add__receivedURI(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add__receivedURI(Uno.EventHandler<string>)");
    CoreApp_typeof()->Init();
    CoreApp::_receivedURI1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::_receivedURI1_, value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void remove__receivedURI(Uno.EventHandler<string> value) [static]
void CoreApp::remove__receivedURI(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove__receivedURI(Uno.EventHandler<string>)");
    CoreApp_typeof()->Init();
    CoreApp::_receivedURI1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::_receivedURI1_, value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void add_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler value) [static]
void CoreApp::add_EnteringBackground(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::EnteringBackground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::EnteringBackground1_, value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler value) [static]
void CoreApp::remove_EnteringBackground(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::EnteringBackground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::EnteringBackground1_, value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler value) [static]
void CoreApp::add_EnteringForeground(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::EnteringForeground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::EnteringForeground1_, value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler value) [static]
void CoreApp::remove_EnteringForeground(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::EnteringForeground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::EnteringForeground1_, value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler value) [static]
void CoreApp::add_EnteringInteractive(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::EnteringInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::EnteringInteractive1_, value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler value) [static]
void CoreApp::remove_EnteringInteractive(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::EnteringInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::EnteringInteractive1_, value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler value) [static]
void CoreApp::add_ExitedInteractive(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::ExitedInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::ExitedInteractive1_, value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler value) [static]
void CoreApp::remove_ExitedInteractive(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::ExitedInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::ExitedInteractive1_, value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_ReceivedLowMemoryWarning(Uno.EventHandler value) [static]
void CoreApp::add_ReceivedLowMemoryWarning(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_ReceivedLowMemoryWarning(Uno.EventHandler)");
    CoreApp_typeof()->Init();
    CoreApp::ReceivedLowMemoryWarning1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::ReceivedLowMemoryWarning1_, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public static generated void remove_ReceivedLowMemoryWarning(Uno.EventHandler value) [static]
void CoreApp::remove_ReceivedLowMemoryWarning(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_ReceivedLowMemoryWarning(Uno.EventHandler)");
    CoreApp_typeof()->Init();
    CoreApp::ReceivedLowMemoryWarning1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::ReceivedLowMemoryWarning1_, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public static void add_ReceivedURI(Uno.EventHandler<string> value) [static]
void CoreApp::add_ReceivedURI(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_ReceivedURI(Uno.EventHandler<string>)");
    CoreApp_typeof()->Init();
    CoreApp::add__receivedURI(value);
    CoreApp::DispatchDelayedUri();
}

// public static void remove_ReceivedURI(Uno.EventHandler<string> value) [static]
void CoreApp::remove_ReceivedURI(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_ReceivedURI(Uno.EventHandler<string>)");
    CoreApp_typeof()->Init();
    CoreApp::remove__receivedURI(value);
}

// public static generated void add_Started(Uno.Platform.ApplicationStateTransitionHandler value) [static]
void CoreApp::add_Started(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_Started(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::Started1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::Started1_, value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_Started(Uno.Platform.ApplicationStateTransitionHandler value) [static]
void CoreApp::remove_Started(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_Started(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::Started1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::Started1_, value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_Terminating(Uno.Platform.ApplicationStateTransitionHandler value) [static]
void CoreApp::add_Terminating(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_Terminating(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::Terminating1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::Terminating1_, value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_Terminating(Uno.Platform.ApplicationStateTransitionHandler value) [static]
void CoreApp::remove_Terminating(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_Terminating(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::Terminating1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::Terminating1_, value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/Displays.uno
// -----------------------------------------------------------------------------

// public abstract class Display
// {
static void Display_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::UInt_typeof(), offsetof(Display, _ticksPerSecond), 0,
        ::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/], offsetof(Display, _tick1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Density", NULL, (void*)Display__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("add_Tick", NULL, (void*)Display__add_Tick_fn, 0, false, uVoid_typeof(), 1, ::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]),
        new uFunction("remove_Tick", NULL, (void*)Display__remove_Tick_fn, 0, false, uVoid_typeof(), 1, ::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]),
        new uFunction("get_TicksPerSecond", NULL, (void*)Display__get_TicksPerSecond_fn, 0, false, ::g::Uno::UInt_typeof(), 0),
        new uFunction("set_TicksPerSecond", NULL, (void*)Display__set_TicksPerSecond_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UInt_typeof()));
}

Display_type* Display_typeof()
{
    static uSStrong<Display_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Display);
    options.TypeSize = sizeof(Display_type);
    type = (Display_type*)uClassType::New("Uno.Platform.Display", options);
    type->fp_build_ = Display_build;
    type->fp_DisableTicks = Display__DisableTicks_fn;
    type->fp_EnableTicks = Display__EnableTicks_fn;
    type->fp_SetTicksPerSecond = Display__SetTicksPerSecond_fn;
    return type;
}

// protected generated Display()
void Display__ctor__fn(Display* __this)
{
    __this->ctor_();
}

// private generated void add__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value)
void Display__add__tick_fn(Display* __this, uDelegate* value)
{
    __this->add__tick(value);
}

// private generated void remove__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value)
void Display__remove__tick_fn(Display* __this, uDelegate* value)
{
    __this->remove__tick(value);
}

// public float get_Density()
void Display__get_Density_fn(Display* __this, float* __retval)
{
    *__retval = __this->Density();
}

// protected virtual void DisableTicks()
void Display__DisableTicks_fn(Display* __this)
{
}

// protected virtual void EnableTicks()
void Display__EnableTicks_fn(Display* __this)
{
}

// internal void OnTick(Uno.Platform.TimerEventArgs args)
void Display__OnTick_fn(Display* __this, ::g::Uno::Platform::TimerEventArgs* args)
{
    __this->OnTick(args);
}

// protected virtual void SetTicksPerSecond(uint value)
void Display__SetTicksPerSecond_fn(Display* __this, uint32_t* value)
{
}

// public void add_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value)
void Display__add_Tick_fn(Display* __this, uDelegate* value)
{
    __this->add_Tick(value);
}

// public void remove_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value)
void Display__remove_Tick_fn(Display* __this, uDelegate* value)
{
    __this->remove_Tick(value);
}

// public uint get_TicksPerSecond()
void Display__get_TicksPerSecond_fn(Display* __this, uint32_t* __retval)
{
    *__retval = __this->TicksPerSecond();
}

// public void set_TicksPerSecond(uint value)
void Display__set_TicksPerSecond_fn(Display* __this, uint32_t* value)
{
    __this->TicksPerSecond(*value);
}

// protected generated Display() [instance]
void Display::ctor_()
{
    _ticksPerSecond = 0U;
}

// private generated void add__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance]
void Display::add__tick(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Display", "add__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs>)");
    _tick1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(_tick1, value), ::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]);
}

// private generated void remove__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance]
void Display::remove__tick(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Display", "remove__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs>)");
    _tick1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(_tick1, value), ::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]);
}

// public float get_Density() [instance]
float Display::Density()
{
    uStackFrame __("Uno.Platform.Display", "get_Density()");
    return GetDensity();
}

// internal void OnTick(Uno.Platform.TimerEventArgs args) [instance]
void Display::OnTick(::g::Uno::Platform::TimerEventArgs* args)
{
    uStackFrame __("Uno.Platform.Display", "OnTick(Uno.Platform.TimerEventArgs)");
    uDelegate* handler = _tick1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, args);
}

// public void add_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance]
void Display::add_Tick(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Display", "add_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs>)");

    if (::g::Uno::Delegate::op_Equality(_tick1, NULL))
        EnableTicks();

    add__tick(value);
}

// public void remove_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance]
void Display::remove_Tick(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Display", "remove_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs>)");

    if (::g::Uno::Delegate::op_Equality(_tick1, NULL))
        return;

    remove__tick(value);

    if (::g::Uno::Delegate::op_Equality(_tick1, NULL))
        DisableTicks();
}

// public uint get_TicksPerSecond() [instance]
uint32_t Display::TicksPerSecond()
{
    return _ticksPerSecond;
}

// public void set_TicksPerSecond(uint value) [instance]
void Display::TicksPerSecond(uint32_t value)
{
    uStackFrame __("Uno.Platform.Display", "set_TicksPerSecond(uint)");

    if (_ticksPerSecond == value)
        return;

    _ticksPerSecond = value;

    if (::g::Uno::Delegate::op_Inequality(_tick1, NULL))
        SetTicksPerSecond(value);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/Displays.uno
// -----------------------------------------------------------------------------

// public static class Displays
// {
// static Displays()
static void Displays__cctor__fn(uType* __type)
{
    Displays::All((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[7/*Uno.Collections.List<Uno.Platform.Display>*/]));
    Displays::PopulateDisplaysList();
}

static void Displays_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Platform::Display_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Platform::Display_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[7/*Uno.Collections.List<Uno.Platform.Display>*/], (uintptr_t)&Displays::_All_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("get_All", NULL, (void*)Displays__get_All_fn, 0, true, ::TYPES[7/*Uno.Collections.List<Uno.Platform.Display>*/], 0),
        new uFunction("get_MainDisplay", NULL, (void*)Displays__get_MainDisplay_fn, 0, true, ::g::Uno::Platform::Display_typeof(), 0));
}

uClassType* Displays_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.Displays", options);
    type->fp_build_ = Displays_build;
    type->fp_cctor_ = Displays__cctor__fn;
    return type;
}

// public static generated Uno.Collections.List<Uno.Platform.Display> get_All()
void Displays__get_All_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = Displays::All();
}

// private static generated void set_All(Uno.Collections.List<Uno.Platform.Display> value)
void Displays__set_All_fn(::g::Uno::Collections::List* value)
{
    Displays::All(value);
}

// private static Uno.Platform.Display GetMainDisplay()
void Displays__GetMainDisplay_fn(::g::Uno::Platform::Display** __retval)
{
    *__retval = Displays::GetMainDisplay();
}

// public static Uno.Platform.Display get_MainDisplay()
void Displays__get_MainDisplay_fn(::g::Uno::Platform::Display** __retval)
{
    *__retval = Displays::MainDisplay();
}

// private static extern void PopulateDisplaysList()
void Displays__PopulateDisplaysList_fn()
{
    Displays::PopulateDisplaysList();
}

// internal static void TickAll(Uno.Platform.TimerEventArgs args)
void Displays__TickAll_fn(::g::Uno::Platform::TimerEventArgs* args)
{
    Displays::TickAll(args);
}

uSStrong< ::g::Uno::Collections::List*> Displays::_All_;

// private static Uno.Platform.Display GetMainDisplay() [static]
::g::Uno::Platform::Display* Displays::GetMainDisplay()
{
    uStackFrame __("Uno.Platform.Displays", "GetMainDisplay()");
    Displays_typeof()->Init();
    ::g::Uno::Platform::Display* ret2;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(Displays::All()), uCRef<int32_t>(0), &ret2), ret2);
}

// private static extern void PopulateDisplaysList() [static]
void Displays::PopulateDisplaysList()
{
    uStackFrame __("Uno.Platform.Displays", "PopulateDisplaysList()");
    Displays_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(Displays::All()), ::g::Uno::Platform::iOSDisplay::WrapMainDisplay());
}

// internal static void TickAll(Uno.Platform.TimerEventArgs args) [static]
void Displays::TickAll(::g::Uno::Platform::TimerEventArgs* args)
{
    uStackFrame __("Uno.Platform.Displays", "TickAll(Uno.Platform.TimerEventArgs)");
    Displays_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Platform::Display*> > ret3;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Platform::Display*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Displays::All()), &ret3), ret3);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[8/*Uno.Collections.List<Uno.Platform.Display>.Enumerator*/]))
                {
                    ::g::Uno::Platform::Display* d = enum1.Current(::TYPES[8/*Uno.Collections.List<Uno.Platform.Display>.Enumerator*/]);
                    uPtr(d)->OnTick(args);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[8/*Uno.Collections.List<Uno.Platform.Display>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            enum1.Dispose(::TYPES[8/*Uno.Collections.List<Uno.Platform.Display>.Enumerator*/]);
        }
        __after_finally_1:;
    }
}

// public static generated Uno.Collections.List<Uno.Platform.Display> get_All() [static]
::g::Uno::Collections::List* Displays::All()
{
    Displays_typeof()->Init();
    return Displays::_All_;
}

// private static generated void set_All(Uno.Collections.List<Uno.Platform.Display> value) [static]
void Displays::All(::g::Uno::Collections::List* value)
{
    Displays_typeof()->Init();
    Displays::_All_ = value;
}

// public static Uno.Platform.Display get_MainDisplay() [static]
::g::Uno::Platform::Display* Displays::MainDisplay()
{
    uStackFrame __("Uno.Platform.Displays", "get_MainDisplay()");
    Displays_typeof()->Init();
    return Displays::GetMainDisplay();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/Enums.uno
// --------------------------------------------------------------------------

// public enum EventModifiers
uEnumType* EventModifiers_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.EventModifiers", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "MetaKey", 1LL,
        "ControlKey", 2LL,
        "ShiftKey", 4LL,
        "AltKey", 8LL,
        "LeftButton", 16LL,
        "MiddleButton", 32LL,
        "RightButton", 64LL,
        "X1Button", 128LL,
        "X2Button", 256LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/Enums.uno
// --------------------------------------------------------------------------

// public enum Key
uEnumType* Key_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.Key", ::g::Uno::Int_typeof(), 82);
    type->SetLiterals(
        "Backspace", 8LL,
        "Tab", 9LL,
        "Enter", 13LL,
        "ShiftKey", 16LL,
        "ControlKey", 17LL,
        "AltKey", 18LL,
        "Break", 19LL,
        "CapsLock", 20LL,
        "Escape", 27LL,
        "Space", 32LL,
        "PageUp", 33LL,
        "PageDown", 34LL,
        "End", 35LL,
        "Home", 36LL,
        "Left", 37LL,
        "Up", 38LL,
        "Right", 39LL,
        "Down", 40LL,
        "Insert", 45LL,
        "Delete", 46LL,
        "D0", 48LL,
        "D1", 49LL,
        "D2", 50LL,
        "D3", 51LL,
        "D4", 52LL,
        "D5", 53LL,
        "D6", 54LL,
        "D7", 55LL,
        "D8", 56LL,
        "D9", 57LL,
        "A", 65LL,
        "B", 66LL,
        "C", 67LL,
        "D", 68LL,
        "E", 69LL,
        "F", 70LL,
        "G", 71LL,
        "H", 72LL,
        "I", 73LL,
        "J", 74LL,
        "K", 75LL,
        "L", 76LL,
        "M", 77LL,
        "N", 78LL,
        "O", 79LL,
        "P", 80LL,
        "Q", 81LL,
        "R", 82LL,
        "S", 83LL,
        "T", 84LL,
        "U", 85LL,
        "V", 86LL,
        "W", 87LL,
        "X", 88LL,
        "Y", 89LL,
        "Z", 90LL,
        "NumPad0", 96LL,
        "NumPad1", 97LL,
        "NumPad2", 98LL,
        "NumPad3", 99LL,
        "NumPad4", 100LL,
        "NumPad5", 101LL,
        "NumPad6", 102LL,
        "NumPad7", 103LL,
        "NumPad8", 104LL,
        "NumPad9", 105LL,
        "F1", 112LL,
        "F2", 113LL,
        "F3", 114LL,
        "F4", 115LL,
        "F5", 116LL,
        "F6", 117LL,
        "F7", 118LL,
        "F8", 119LL,
        "F9", 120LL,
        "F10", 121LL,
        "F11", 122LL,
        "F12", 123LL,
        "MenuButton", 200LL,
        "BackButton", 201LL,
        "OSKey", 202LL,
        "MetaKey", 203LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/KeyEventArgs.uno
// ---------------------------------------------------------------------------------

// public sealed class KeyEventArgs
// {
static void KeyEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(KeyEventArgs, _Handled), 0,
        ::g::Uno::Platform::Key_typeof(), offsetof(KeyEventArgs, _Key), 0,
        ::g::Uno::Platform::EventModifiers_typeof(), offsetof(KeyEventArgs, _Modifiers), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Handled", NULL, (void*)KeyEventArgs__get_Handled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Handled", NULL, (void*)KeyEventArgs__set_Handled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsAltKeyPressed", NULL, (void*)KeyEventArgs__get_IsAltKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsControlKeyPressed", NULL, (void*)KeyEventArgs__get_IsControlKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsMetaKeyPressed", NULL, (void*)KeyEventArgs__get_IsMetaKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsShiftKeyPressed", NULL, (void*)KeyEventArgs__get_IsShiftKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Key", NULL, (void*)KeyEventArgs__get_Key_fn, 0, false, ::g::Uno::Platform::Key_typeof(), 0));
}

uType* KeyEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(KeyEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.KeyEventArgs", options);
    type->fp_build_ = KeyEventArgs_build;
    return type;
}

// public generated bool get_Handled()
void KeyEventArgs__get_Handled_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->Handled();
}

// public generated void set_Handled(bool value)
void KeyEventArgs__set_Handled_fn(KeyEventArgs* __this, bool* value)
{
    __this->Handled(*value);
}

// public bool get_IsAltKeyPressed()
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAltKeyPressed();
}

// public bool get_IsControlKeyPressed()
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsControlKeyPressed();
}

// public bool get_IsMetaKeyPressed()
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsMetaKeyPressed();
}

// public bool get_IsShiftKeyPressed()
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsShiftKeyPressed();
}

// public generated Uno.Platform.Key get_Key()
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int32_t* __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Uno.Platform.Key value)
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int32_t* value)
{
    __this->Key(*value);
}

// internal generated Uno.Platform.EventModifiers get_Modifiers()
void KeyEventArgs__get_Modifiers_fn(KeyEventArgs* __this, int32_t* __retval)
{
    *__retval = __this->Modifiers();
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value)
void KeyEventArgs__set_Modifiers_fn(KeyEventArgs* __this, int32_t* value)
{
    __this->Modifiers(*value);
}

// public generated bool get_Handled() [instance]
bool KeyEventArgs::Handled()
{
    return _Handled;
}

// public generated void set_Handled(bool value) [instance]
void KeyEventArgs::Handled(bool value)
{
    _Handled = value;
}

// public bool get_IsAltKeyPressed() [instance]
bool KeyEventArgs::IsAltKeyPressed()
{
    return (Modifiers() & 8) == 8;
}

// public bool get_IsControlKeyPressed() [instance]
bool KeyEventArgs::IsControlKeyPressed()
{
    return (Modifiers() & 2) == 2;
}

// public bool get_IsMetaKeyPressed() [instance]
bool KeyEventArgs::IsMetaKeyPressed()
{
    return (Modifiers() & 1) == 1;
}

// public bool get_IsShiftKeyPressed() [instance]
bool KeyEventArgs::IsShiftKeyPressed()
{
    return (Modifiers() & 4) == 4;
}

// public generated Uno.Platform.Key get_Key() [instance]
int32_t KeyEventArgs::Key()
{
    return _Key;
}

// private generated void set_Key(Uno.Platform.Key value) [instance]
void KeyEventArgs::Key(int32_t value)
{
    _Key = value;
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() [instance]
int32_t KeyEventArgs::Modifiers()
{
    return _Modifiers;
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) [instance]
void KeyEventArgs::Modifiers(int32_t value)
{
    _Modifiers = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/OSFrame.uno
// ----------------------------------------------------------------------------

// public class OSFrame
// {
static void OSFrame_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), offsetof(OSFrame, _handle), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(OSFrame, Resized1), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("add_Resized", NULL, (void*)OSFrame__add_Resized_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("remove_Resized", NULL, (void*)OSFrame__remove_Resized_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]));
}

uType* OSFrame_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OSFrame);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.OSFrame", options);
    type->fp_build_ = OSFrame_build;
    type->fp_ctor_ = (void*)OSFrame__New1_fn;
    return type;
}

// internal OSFrame()
void OSFrame__ctor__fn(OSFrame* __this)
{
    __this->ctor_();
}

// internal OSFrame New()
void OSFrame__New1_fn(OSFrame** __retval)
{
    *__retval = OSFrame::New1();
}

// public generated void add_Resized(Uno.EventHandler value)
void OSFrame__add_Resized_fn(OSFrame* __this, uDelegate* value)
{
    __this->add_Resized(value);
}

// public generated void remove_Resized(Uno.EventHandler value)
void OSFrame__remove_Resized_fn(OSFrame* __this, uDelegate* value)
{
    __this->remove_Resized(value);
}

// internal OSFrame() [instance]
void OSFrame::ctor_()
{
    _handle = (void*)NULL;
}

// public generated void add_Resized(Uno.EventHandler value) [instance]
void OSFrame::add_Resized(uDelegate* value)
{
    uStackFrame __("Uno.Platform.OSFrame", "add_Resized(Uno.EventHandler)");
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Resized1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_Resized(Uno.EventHandler value) [instance]
void OSFrame::remove_Resized(uDelegate* value)
{
    uStackFrame __("Uno.Platform.OSFrame", "remove_Resized(Uno.EventHandler)");
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Resized1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// internal OSFrame New() [static]
OSFrame* OSFrame::New1()
{
    OSFrame* obj1 = (OSFrame*)uNew(OSFrame_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/Enums.uno
// --------------------------------------------------------------------------

// public enum PointerCursor
uEnumType* PointerCursor_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.PointerCursor", ::g::Uno::Int_typeof(), 17);
    type->SetLiterals(
        "None", 0LL,
        "Default", 1LL,
        "Crosshair", 2LL,
        "Pointer", 3LL,
        "Help", 4LL,
        "Move", 5LL,
        "Wait", 6LL,
        "Progress", 7LL,
        "ResizeNorth", 8LL,
        "ResizeEast", 9LL,
        "ResizeSouth", 10LL,
        "ResizeWest", 11LL,
        "ResizeNorthEast", 12LL,
        "ResizeNorthWest", 13LL,
        "ResizeSouthEast", 14LL,
        "ResizeSouthWest", 15LL,
        "IBeam", 16LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/Enums.uno
// --------------------------------------------------------------------------

// public enum PointerType
uEnumType* PointerType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.PointerType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Mouse", 1LL,
        "Touch", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/TextInputEventArgs.uno
// ---------------------------------------------------------------------------------------

// public sealed class TextInputEventArgs
// {
static void TextInputEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(TextInputEventArgs, _Handled), 0,
        ::g::Uno::String_typeof(), offsetof(TextInputEventArgs, _Text), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Handled", NULL, (void*)TextInputEventArgs__get_Handled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Handled", NULL, (void*)TextInputEventArgs__set_Handled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Text", NULL, (void*)TextInputEventArgs__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

uType* TextInputEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TextInputEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.TextInputEventArgs", options);
    type->fp_build_ = TextInputEventArgs_build;
    return type;
}

// public generated bool get_Handled()
void TextInputEventArgs__get_Handled_fn(TextInputEventArgs* __this, bool* __retval)
{
    *__retval = __this->Handled();
}

// public generated void set_Handled(bool value)
void TextInputEventArgs__set_Handled_fn(TextInputEventArgs* __this, bool* value)
{
    __this->Handled(*value);
}

// public generated string get_Text()
void TextInputEventArgs__get_Text_fn(TextInputEventArgs* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// private generated void set_Text(string value)
void TextInputEventArgs__set_Text_fn(TextInputEventArgs* __this, uString* value)
{
    __this->Text(value);
}

// public generated bool get_Handled() [instance]
bool TextInputEventArgs::Handled()
{
    return _Handled;
}

// public generated void set_Handled(bool value) [instance]
void TextInputEventArgs::Handled(bool value)
{
    _Handled = value;
}

// public generated string get_Text() [instance]
uString* TextInputEventArgs::Text()
{
    return _Text;
}

// private generated void set_Text(string value) [instance]
void TextInputEventArgs::Text(uString* value)
{
    _Text = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/TimerEventArgs.uno
// -----------------------------------------------------------------------------------

// public sealed class TimerEventArgs
// {
static void TimerEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(TimerEventArgs, _CurrentTime), 0,
        ::g::Uno::Double_typeof(), offsetof(TimerEventArgs, _LastTickTimestamp), 0,
        ::g::Uno::Double_typeof(), offsetof(TimerEventArgs, _TickDuration), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_CurrentTime", NULL, (void*)TimerEventArgs__get_CurrentTime_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_LastTickTimestamp", NULL, (void*)TimerEventArgs__get_LastTickTimestamp_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TimerEventArgs__New2_fn, 0, true, type, 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("get_TickDuration", NULL, (void*)TimerEventArgs__get_TickDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0));
}

uType* TimerEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TimerEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.TimerEventArgs", options);
    type->fp_build_ = TimerEventArgs_build;
    return type;
}

// public TimerEventArgs(double lastTickTimestamp, double tickDuration, double currentTime)
void TimerEventArgs__ctor_1_fn(TimerEventArgs* __this, double* lastTickTimestamp, double* tickDuration, double* currentTime)
{
    __this->ctor_1(*lastTickTimestamp, *tickDuration, *currentTime);
}

// public generated double get_CurrentTime()
void TimerEventArgs__get_CurrentTime_fn(TimerEventArgs* __this, double* __retval)
{
    *__retval = __this->CurrentTime();
}

// private generated void set_CurrentTime(double value)
void TimerEventArgs__set_CurrentTime_fn(TimerEventArgs* __this, double* value)
{
    __this->CurrentTime(*value);
}

// public generated double get_LastTickTimestamp()
void TimerEventArgs__get_LastTickTimestamp_fn(TimerEventArgs* __this, double* __retval)
{
    *__retval = __this->LastTickTimestamp();
}

// private generated void set_LastTickTimestamp(double value)
void TimerEventArgs__set_LastTickTimestamp_fn(TimerEventArgs* __this, double* value)
{
    __this->LastTickTimestamp(*value);
}

// public TimerEventArgs New(double lastTickTimestamp, double tickDuration, double currentTime)
void TimerEventArgs__New2_fn(double* lastTickTimestamp, double* tickDuration, double* currentTime, TimerEventArgs** __retval)
{
    *__retval = TimerEventArgs::New2(*lastTickTimestamp, *tickDuration, *currentTime);
}

// public generated double get_TickDuration()
void TimerEventArgs__get_TickDuration_fn(TimerEventArgs* __this, double* __retval)
{
    *__retval = __this->TickDuration();
}

// private generated void set_TickDuration(double value)
void TimerEventArgs__set_TickDuration_fn(TimerEventArgs* __this, double* value)
{
    __this->TickDuration(*value);
}

// public TimerEventArgs(double lastTickTimestamp, double tickDuration, double currentTime) [instance]
void TimerEventArgs::ctor_1(double lastTickTimestamp, double tickDuration, double currentTime)
{
    ctor_();
    LastTickTimestamp(lastTickTimestamp);
    TickDuration(tickDuration);
    CurrentTime(currentTime);
}

// public generated double get_CurrentTime() [instance]
double TimerEventArgs::CurrentTime()
{
    return _CurrentTime;
}

// private generated void set_CurrentTime(double value) [instance]
void TimerEventArgs::CurrentTime(double value)
{
    _CurrentTime = value;
}

// public generated double get_LastTickTimestamp() [instance]
double TimerEventArgs::LastTickTimestamp()
{
    return _LastTickTimestamp;
}

// private generated void set_LastTickTimestamp(double value) [instance]
void TimerEventArgs::LastTickTimestamp(double value)
{
    _LastTickTimestamp = value;
}

// public generated double get_TickDuration() [instance]
double TimerEventArgs::TickDuration()
{
    return _TickDuration;
}

// private generated void set_TickDuration(double value) [instance]
void TimerEventArgs::TickDuration(double value)
{
    _TickDuration = value;
}

// public TimerEventArgs New(double lastTickTimestamp, double tickDuration, double currentTime) [static]
TimerEventArgs* TimerEventArgs::New2(double lastTickTimestamp, double tickDuration, double currentTime)
{
    TimerEventArgs* obj1 = (TimerEventArgs*)uNew(TimerEventArgs_typeof());
    obj1->ctor_1(lastTickTimestamp, tickDuration, currentTime);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/PointerEventArgs.uno
// -------------------------------------------------------------------------------------

// public enum WheelDeltaMode
uEnumType* WheelDeltaMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.WheelDeltaMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "DeltaPixel", 0LL,
        "DeltaLine", 1LL,
        "DeltaPage", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/Window.uno
// ---------------------------------------------------------------------------

// public sealed extern class Window
// {
static void Window_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Window ClientSize not available on mobile");
    ::STRINGS[11] = uString::Const("PointerCursor is invalid on mobile");
    ::STRINGS[12] = uString::Const("<INVALID>");
    ::TYPES[6] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    ::TYPES[9] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TextInputEventArgs_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof(),
        ::g::Uno::Platform::Displays_typeof(),
        ::g::Uno::EventArgs_typeof());
    type->SetFields(2,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(Window, GotFocus1), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(Window, KeyboardResized1), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(Window, LostFocus1), 0,
        ::TYPES[9/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/], offsetof(Window, TextInput1), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(Window, Updating1), 0);
    type->Reflection.SetFunctions(24,
        new uFunction("get_ClientSize", NULL, (void*)Window__get_ClientSize_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_ClientSize", NULL, (void*)Window__set_ClientSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("Close", NULL, (void*)Window__Close_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Fullscreen", NULL, (void*)Window__get_Fullscreen_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Fullscreen", NULL, (void*)Window__set_Fullscreen_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("add_GotFocus", NULL, (void*)Window__add_GotFocus_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("remove_GotFocus", NULL, (void*)Window__remove_GotFocus_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("get_IsTextInputActive", NULL, (void*)Window__get_IsTextInputActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("add_KeyboardResized", NULL, (void*)Window__add_KeyboardResized_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("remove_KeyboardResized", NULL, (void*)Window__remove_KeyboardResized_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("add_KeyPressed", NULL, (void*)Window__add_KeyPressed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL)),
        new uFunction("remove_KeyPressed", NULL, (void*)Window__remove_KeyPressed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL)),
        new uFunction("add_KeyReleased", NULL, (void*)Window__add_KeyReleased_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL)),
        new uFunction("remove_KeyReleased", NULL, (void*)Window__remove_KeyReleased_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL)),
        new uFunction("add_LostFocus", NULL, (void*)Window__add_LostFocus_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("remove_LostFocus", NULL, (void*)Window__remove_LostFocus_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("get_PointerCursor", NULL, (void*)Window__get_PointerCursor_fn, 0, false, ::g::Uno::Platform::PointerCursor_typeof(), 0),
        new uFunction("set_PointerCursor", NULL, (void*)Window__set_PointerCursor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::PointerCursor_typeof()),
        new uFunction("add_TextInput", NULL, (void*)Window__add_TextInput_fn, 0, false, uVoid_typeof(), 1, ::TYPES[9/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/]),
        new uFunction("remove_TextInput", NULL, (void*)Window__remove_TextInput_fn, 0, false, uVoid_typeof(), 1, ::TYPES[9/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/]),
        new uFunction("get_Title", NULL, (void*)Window__get_Title_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Title", NULL, (void*)Window__set_Title_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_Updating", NULL, (void*)Window__add_Updating_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("remove_Updating", NULL, (void*)Window__remove_Updating_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]));
}

uType* Window_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Platform::OSFrame_typeof();
    options.FieldCount = 7;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(Window);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.Window", options);
    type->fp_build_ = Window_build;
    type->fp_ctor_ = (void*)Window__New2_fn;
    return type;
}

// internal Window()
void Window__ctor_1_fn(Window* __this)
{
    __this->ctor_1();
}

// public int2 get_ClientSize()
void Window__get_ClientSize_fn(Window* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->ClientSize();
}

// public void set_ClientSize(int2 value)
void Window__set_ClientSize_fn(Window* __this, ::g::Uno::Int2* value)
{
    __this->ClientSize(*value);
}

// public void Close()
void Window__Close_fn(Window* __this)
{
    __this->Close();
}

// public bool get_Fullscreen()
void Window__get_Fullscreen_fn(Window* __this, bool* __retval)
{
    *__retval = __this->Fullscreen();
}

// public void set_Fullscreen(bool value)
void Window__set_Fullscreen_fn(Window* __this, bool* value)
{
    __this->Fullscreen(*value);
}

// public generated void add_GotFocus(Uno.EventHandler value)
void Window__add_GotFocus_fn(Window* __this, uDelegate* value)
{
    __this->add_GotFocus(value);
}

// public generated void remove_GotFocus(Uno.EventHandler value)
void Window__remove_GotFocus_fn(Window* __this, uDelegate* value)
{
    __this->remove_GotFocus(value);
}

// public bool get_IsTextInputActive()
void Window__get_IsTextInputActive_fn(Window* __this, bool* __retval)
{
    *__retval = __this->IsTextInputActive();
}

// public generated void add_KeyboardResized(Uno.EventHandler value)
void Window__add_KeyboardResized_fn(Window* __this, uDelegate* value)
{
    __this->add_KeyboardResized(value);
}

// public generated void remove_KeyboardResized(Uno.EventHandler value)
void Window__remove_KeyboardResized_fn(Window* __this, uDelegate* value)
{
    __this->remove_KeyboardResized(value);
}

// public void add_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value)
void Window__add_KeyPressed_fn(Window* __this, uDelegate* value)
{
    __this->add_KeyPressed(value);
}

// public void remove_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value)
void Window__remove_KeyPressed_fn(Window* __this, uDelegate* value)
{
    __this->remove_KeyPressed(value);
}

// public void add_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value)
void Window__add_KeyReleased_fn(Window* __this, uDelegate* value)
{
    __this->add_KeyReleased(value);
}

// public void remove_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value)
void Window__remove_KeyReleased_fn(Window* __this, uDelegate* value)
{
    __this->remove_KeyReleased(value);
}

// public generated void add_LostFocus(Uno.EventHandler value)
void Window__add_LostFocus_fn(Window* __this, uDelegate* value)
{
    __this->add_LostFocus(value);
}

// public generated void remove_LostFocus(Uno.EventHandler value)
void Window__remove_LostFocus_fn(Window* __this, uDelegate* value)
{
    __this->remove_LostFocus(value);
}

// internal Window New()
void Window__New2_fn(Window** __retval)
{
    *__retval = Window::New2();
}

// private void OnGotFocus(Uno.Platform.ApplicationState newState)
void Window__OnGotFocus_fn(Window* __this, int32_t* newState)
{
    __this->OnGotFocus(*newState);
}

// private void OnLostFocus(Uno.Platform.ApplicationState newState)
void Window__OnLostFocus_fn(Window* __this, int32_t* newState)
{
    __this->OnLostFocus(*newState);
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args)
void Window__OnTick_fn(Window* __this, uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    __this->OnTick(sender, args);
}

// public Uno.Platform.PointerCursor get_PointerCursor()
void Window__get_PointerCursor_fn(Window* __this, int32_t* __retval)
{
    *__retval = __this->PointerCursor();
}

// public void set_PointerCursor(Uno.Platform.PointerCursor value)
void Window__set_PointerCursor_fn(Window* __this, int32_t* value)
{
    __this->PointerCursor(*value);
}

// public generated void add_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value)
void Window__add_TextInput_fn(Window* __this, uDelegate* value)
{
    __this->add_TextInput(value);
}

// public generated void remove_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value)
void Window__remove_TextInput_fn(Window* __this, uDelegate* value)
{
    __this->remove_TextInput(value);
}

// public string get_Title()
void Window__get_Title_fn(Window* __this, uString** __retval)
{
    *__retval = __this->Title();
}

// public void set_Title(string value)
void Window__set_Title_fn(Window* __this, uString* value)
{
    __this->Title(value);
}

// public generated void add_Updating(Uno.EventHandler value)
void Window__add_Updating_fn(Window* __this, uDelegate* value)
{
    __this->add_Updating(value);
}

// public generated void remove_Updating(Uno.EventHandler value)
void Window__remove_Updating_fn(Window* __this, uDelegate* value)
{
    __this->remove_Updating(value);
}

// internal Window() [instance]
void Window::ctor_1()
{
    uStackFrame __("Uno.Platform.Window", ".ctor()");
    ctor_();
    uPtr(::g::Uno::Platform::Displays::MainDisplay())->add_Tick(uDelegate::New(::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/], (void*)Window__OnTick_fn, this));
    ::g::Uno::Platform::CoreApp::add_EnteringInteractive(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Window__OnGotFocus_fn, this));
    ::g::Uno::Platform::CoreApp::add_ExitedInteractive(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Window__OnLostFocus_fn, this));
}

// public int2 get_ClientSize() [instance]
::g::Uno::Int2 Window::ClientSize()
{
    uStackFrame __("Uno.Platform.Window", "get_ClientSize()");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[10/*"Window Clie...*/]));
    return ::g::Uno::Int2__New2(0, 0);
}

// public void set_ClientSize(int2 value) [instance]
void Window::ClientSize(::g::Uno::Int2 value)
{
}

// public void Close() [instance]
void Window::Close()
{
    ::g::Uno::Runtime::Implementation::Internal::Unsafe::Quit();
}

// public bool get_Fullscreen() [instance]
bool Window::Fullscreen()
{
    return true;
}

// public void set_Fullscreen(bool value) [instance]
void Window::Fullscreen(bool value)
{
}

// public generated void add_GotFocus(Uno.EventHandler value) [instance]
void Window::add_GotFocus(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_GotFocus(Uno.EventHandler)");
    GotFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(GotFocus1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_GotFocus(Uno.EventHandler value) [instance]
void Window::remove_GotFocus(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_GotFocus(Uno.EventHandler)");
    GotFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(GotFocus1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public bool get_IsTextInputActive() [instance]
bool Window::IsTextInputActive()
{
    return ::g::Uno::Platform::EventSources::TextSource::IsTextInputActive();
}

// public generated void add_KeyboardResized(Uno.EventHandler value) [instance]
void Window::add_KeyboardResized(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_KeyboardResized(Uno.EventHandler)");
    KeyboardResized1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(KeyboardResized1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_KeyboardResized(Uno.EventHandler value) [instance]
void Window::remove_KeyboardResized(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_KeyboardResized(Uno.EventHandler)");
    KeyboardResized1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(KeyboardResized1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public void add_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance]
void Window::add_KeyPressed(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs>)");
    ::g::Uno::Platform::EventSources::HardwareKeys::add_KeyDown(value);
}

// public void remove_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance]
void Window::remove_KeyPressed(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs>)");
    ::g::Uno::Platform::EventSources::HardwareKeys::remove_KeyDown(value);
}

// public void add_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance]
void Window::add_KeyReleased(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs>)");
    ::g::Uno::Platform::EventSources::HardwareKeys::add_KeyUp(value);
}

// public void remove_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance]
void Window::remove_KeyReleased(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs>)");
    ::g::Uno::Platform::EventSources::HardwareKeys::remove_KeyUp(value);
}

// public generated void add_LostFocus(Uno.EventHandler value) [instance]
void Window::add_LostFocus(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_LostFocus(Uno.EventHandler)");
    LostFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LostFocus1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_LostFocus(Uno.EventHandler value) [instance]
void Window::remove_LostFocus(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_LostFocus(Uno.EventHandler)");
    LostFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LostFocus1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// private void OnGotFocus(Uno.Platform.ApplicationState newState) [instance]
void Window::OnGotFocus(int32_t newState)
{
    uStackFrame __("Uno.Platform.Window", "OnGotFocus(Uno.Platform.ApplicationState)");
    uDelegate* handler = GotFocus1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnLostFocus(Uno.Platform.ApplicationState newState) [instance]
void Window::OnLostFocus(int32_t newState)
{
    uStackFrame __("Uno.Platform.Window", "OnLostFocus(Uno.Platform.ApplicationState)");
    uDelegate* handler = LostFocus1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args) [instance]
void Window::OnTick(uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    uStackFrame __("Uno.Platform.Window", "OnTick(object,Uno.Platform.TimerEventArgs)");
    uDelegate* handler = Updating1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, sender, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public Uno.Platform.PointerCursor get_PointerCursor() [instance]
int32_t Window::PointerCursor()
{
    uStackFrame __("Uno.Platform.Window", "get_PointerCursor()");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"PointerCurs...*/]));
    return 0;
}

// public void set_PointerCursor(Uno.Platform.PointerCursor value) [instance]
void Window::PointerCursor(int32_t value)
{
    uStackFrame __("Uno.Platform.Window", "set_PointerCursor(Uno.Platform.PointerCursor)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"PointerCurs...*/]));
}

// public generated void add_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) [instance]
void Window::add_TextInput(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs>)");
    TextInput1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextInput1, value), ::TYPES[9/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/]);
}

// public generated void remove_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) [instance]
void Window::remove_TextInput(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs>)");
    TextInput1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextInput1, value), ::TYPES[9/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/]);
}

// public string get_Title() [instance]
uString* Window::Title()
{
    return ::STRINGS[12/*"<INVALID>"*/];
}

// public void set_Title(string value) [instance]
void Window::Title(uString* value)
{
}

// public generated void add_Updating(Uno.EventHandler value) [instance]
void Window::add_Updating(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_Updating(Uno.EventHandler)");
    Updating1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Updating1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_Updating(Uno.EventHandler value) [instance]
void Window::remove_Updating(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_Updating(Uno.EventHandler)");
    Updating1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Updating1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// internal Window New() [static]
Window* Window::New2()
{
    Window* obj1 = (Window*)uNew(Window_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Uno::Platform
