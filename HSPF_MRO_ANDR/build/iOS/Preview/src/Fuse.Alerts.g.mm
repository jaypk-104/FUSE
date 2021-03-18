// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Alerts.NativeAlerts.DialogCallback.h>
#include <Fuse.Alerts.NativeAlerts.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
#include <Uno-iOS/AppDelegate.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Alerts{

// /usr/local/share/uno/Packages/Fuse.Alerts/1.14.0/NativeAlerts.uno
// -----------------------------------------------------------------

// public sealed class NativeAlerts
// {
static void NativeAlerts_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4);
    type->Reflection.SetFunctions(3,
        new uFunction("Alert", NULL, (void*)NativeAlerts__Alert_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), 1, uObject_typeof()->Array()),
        new uFunction("Confirm", NULL, (void*)NativeAlerts__Confirm_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), 1, uObject_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)NativeAlerts__New2_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* NativeAlerts_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NativeAlerts);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Alerts.NativeAlerts", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->fp_build_ = NativeAlerts_build;
    type->fp_ctor_ = (void*)NativeAlerts__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public NativeAlerts()
void NativeAlerts__ctor_2_fn(NativeAlerts* __this)
{
    __this->ctor_2();
}

// public static Uno.Threading.Future<bool> Alert(object[] args)
void NativeAlerts__Alert_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = NativeAlerts::Alert(args);
}

// private static extern Uno.Threading.Future<bool> AlertInternal(string title, string message, string okButtonLabel)
void NativeAlerts__AlertInternal_fn(uString* title, uString* message, uString* okButtonLabel, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = NativeAlerts::AlertInternal(title, message, okButtonLabel);
}

// private static extern void AlertNative(string title, string message, string okButtonLabel, Uno.Action onOK)
void NativeAlerts__AlertNative_fn(uString* title, uString* message, uString* okButtonLabel, uDelegate* onOK)
{
    NativeAlerts::AlertNative(title, message, okButtonLabel, onOK);
}

// public static Uno.Threading.Future<bool> Confirm(object[] args)
void NativeAlerts__Confirm_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = NativeAlerts::Confirm(args);
}

// private static extern Uno.Threading.Future<bool> ConfirmInternal(string title, string message, string okButtonLabel, string cancelButtonLabel)
void NativeAlerts__ConfirmInternal_fn(uString* title, uString* message, uString* okButtonLabel, uString* cancelButtonLabel, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = NativeAlerts::ConfirmInternal(title, message, okButtonLabel, cancelButtonLabel);
}

// private static extern void ConfirmNative(string title, string message, string okButtonLabel, string cancelButtonLabel, Uno.Action onOK, Uno.Action onCancel)
void NativeAlerts__ConfirmNative_fn(uString* title, uString* message, uString* okButtonLabel, uString* cancelButtonLabel, uDelegate* onOK, uDelegate* onCancel)
{
    NativeAlerts::ConfirmNative(title, message, okButtonLabel, cancelButtonLabel, onOK, onCancel);
}

// private static T getOrDefault<T>(object[] args, int index, T defaultValue)
void NativeAlerts__getOrDefault_fn(uType* __type, uArray* args, int32_t* index, void* defaultValue, uTRef __retval)
{
    uStackFrame __("Fuse.Alerts.NativeAlerts", "getOrDefault`1(object[],int,T)");
    int32_t index_ = *index;
    return __retval.Store(__type->U(0), (index_ < uPtr(args)->Length()) ? (void*)uUnboxAny(__type->U(0), uPtr(args)->Strong<uObject*>(index_)) : defaultValue), void();
}

// public NativeAlerts New()
void NativeAlerts__New2_fn(NativeAlerts** __retval)
{
    *__retval = NativeAlerts::New2();
}

// public NativeAlerts() [instance]
void NativeAlerts::ctor_2()
{
    uStackFrame __("Fuse.Alerts.NativeAlerts", ".ctor()");
    ctor_1();
    ::g::Uno::UX::Resource::SetGlobalKey(this, uString::Const("FuseJS/Alerts"));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), NULL), uString::Const("confirm"), uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), (void*)NativeAlerts__Confirm_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), NULL), uString::Const("alert"), uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), (void*)NativeAlerts__Alert_fn), NULL));
}

// public static Uno.Threading.Future<bool> Alert(object[] args) [static]
::g::Uno::Threading::Future1* NativeAlerts::Alert(uArray* args)
{
    uStackFrame __("Fuse.Alerts.NativeAlerts", "Alert(object[])");
    uString* ret2;
    uString* ret3;
    uString* ret4;
    return NativeAlerts::AlertInternal((NativeAlerts__getOrDefault_fn(NativeAlerts_typeof()->MakeMethod(0/*getOrDefault<string>*/, ::g::Uno::String_typeof(), NULL), args, uCRef<int32_t>(0), uString::Const("Alert!"), &ret2), ret2), (NativeAlerts__getOrDefault_fn(NativeAlerts_typeof()->MakeMethod(0/*getOrDefault<string>*/, ::g::Uno::String_typeof(), NULL), args, uCRef<int32_t>(1), uString::Const(""), &ret3), ret3), (NativeAlerts__getOrDefault_fn(NativeAlerts_typeof()->MakeMethod(0/*getOrDefault<string>*/, ::g::Uno::String_typeof(), NULL), args, uCRef<int32_t>(2), uString::Const("OK"), &ret4), ret4));
}

// private static extern Uno.Threading.Future<bool> AlertInternal(string title, string message, string okButtonLabel) [static]
::g::Uno::Threading::Future1* NativeAlerts::AlertInternal(uString* title, uString* message, uString* okButtonLabel)
{
    uStackFrame __("Fuse.Alerts.NativeAlerts", "AlertInternal(string,string,string)");
    ::g::Uno::Threading::Promise* promise = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    NativeAlerts::AlertNative(title, message, okButtonLabel, uDelegate::New(::g::Uno::Action_typeof(), (void*)NativeAlerts__DialogCallback__Positive_fn, NativeAlerts__DialogCallback::New1(promise)));
    return promise;
}

// private static extern void AlertNative(string title, string message, string okButtonLabel, Uno.Action onOK) [static]
void NativeAlerts::AlertNative(uString* title, uString* message, uString* okButtonLabel, uDelegate* onOK)
{
    @autoreleasepool
    {
        [] (::NSString* title, ::NSString* message, ::NSString* okButtonLabel, ::uObjC::Function<void> onOK) -> void
        {
            UIAlertController* alert = [UIAlertController
            	alertControllerWithTitle:title
            	message:message
            	preferredStyle:UIAlertControllerStyleAlert];
            
            UIAlertAction* defaultAction = [UIAlertAction
            	actionWithTitle:okButtonLabel
            	style:UIAlertActionStyleDefault
            	handler:^(UIAlertAction * action) { onOK(); }];
            
            [alert addAction:defaultAction];
            
            dispatch_async(dispatch_get_main_queue(), ^{
            	[(::uAppDelegate*)[[UIApplication sharedApplication] delegate]
            		presentViewController:alert animated:YES completion:nil];
            });
        } (::uObjC::NativeString(title), ::uObjC::NativeString(message), ::uObjC::NativeString(okButtonLabel), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onOK]));
        
    }
    
}

// public static Uno.Threading.Future<bool> Confirm(object[] args) [static]
::g::Uno::Threading::Future1* NativeAlerts::Confirm(uArray* args)
{
    uStackFrame __("Fuse.Alerts.NativeAlerts", "Confirm(object[])");
    uString* ret5;
    uString* ret6;
    uString* ret7;
    uString* ret8;
    return NativeAlerts::ConfirmInternal((NativeAlerts__getOrDefault_fn(NativeAlerts_typeof()->MakeMethod(0/*getOrDefault<string>*/, ::g::Uno::String_typeof(), NULL), args, uCRef<int32_t>(0), uString::Const("Confirm"), &ret5), ret5), (NativeAlerts__getOrDefault_fn(NativeAlerts_typeof()->MakeMethod(0/*getOrDefault<string>*/, ::g::Uno::String_typeof(), NULL), args, uCRef<int32_t>(1), uString::Const(""), &ret6), ret6), (NativeAlerts__getOrDefault_fn(NativeAlerts_typeof()->MakeMethod(0/*getOrDefault<string>*/, ::g::Uno::String_typeof(), NULL), args, uCRef<int32_t>(2), uString::Const("OK"), &ret7), ret7), (NativeAlerts__getOrDefault_fn(NativeAlerts_typeof()->MakeMethod(0/*getOrDefault<string>*/, ::g::Uno::String_typeof(), NULL), args, uCRef<int32_t>(3), uString::Const("Cancel"), &ret8), ret8));
}

// private static extern Uno.Threading.Future<bool> ConfirmInternal(string title, string message, string okButtonLabel, string cancelButtonLabel) [static]
::g::Uno::Threading::Future1* NativeAlerts::ConfirmInternal(uString* title, uString* message, uString* okButtonLabel, uString* cancelButtonLabel)
{
    uStackFrame __("Fuse.Alerts.NativeAlerts", "ConfirmInternal(string,string,string,string)");
    ::g::Uno::Threading::Promise* promise = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    NativeAlerts__DialogCallback* cb = NativeAlerts__DialogCallback::New1(promise);
    NativeAlerts::ConfirmNative(title, message, okButtonLabel, cancelButtonLabel, uDelegate::New(::g::Uno::Action_typeof(), (void*)NativeAlerts__DialogCallback__Positive_fn, cb), uDelegate::New(::g::Uno::Action_typeof(), (void*)NativeAlerts__DialogCallback__Negative_fn, cb));
    return promise;
}

// private static extern void ConfirmNative(string title, string message, string okButtonLabel, string cancelButtonLabel, Uno.Action onOK, Uno.Action onCancel) [static]
void NativeAlerts::ConfirmNative(uString* title, uString* message, uString* okButtonLabel, uString* cancelButtonLabel, uDelegate* onOK, uDelegate* onCancel)
{
    @autoreleasepool
    {
        [] (::NSString* title, ::NSString* message, ::NSString* okButtonLabel, ::NSString* cancelButtonLabel, ::uObjC::Function<void> onOK, ::uObjC::Function<void> onCancel) -> void
        {
            UIAlertController* modalAlert = [UIAlertController
            	alertControllerWithTitle:title
            	message:message
            	preferredStyle:UIAlertControllerStyleAlert];
            
            UIAlertAction* positiveAction = [UIAlertAction
            	actionWithTitle:okButtonLabel
            	style:UIAlertActionStyleDefault
            	handler:^(UIAlertAction * action) { onOK(); }];
            
            UIAlertAction* negativeAction = [UIAlertAction
            	actionWithTitle:cancelButtonLabel
            	style:UIAlertActionStyleCancel
            	handler:^(UIAlertAction * action) { onCancel(); }];
            
            [modalAlert addAction:positiveAction];
            [modalAlert addAction:negativeAction];
            
            dispatch_async(dispatch_get_main_queue(), ^{
            	[(::uAppDelegate*)[[UIApplication sharedApplication] delegate]
            		presentViewController:modalAlert animated:YES completion:nil];
            });
        } (::uObjC::NativeString(title), ::uObjC::NativeString(message), ::uObjC::NativeString(okButtonLabel), ::uObjC::NativeString(cancelButtonLabel), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onOK]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onCancel]));
        
    }
    
}

// public NativeAlerts New() [static]
NativeAlerts* NativeAlerts::New2()
{
    NativeAlerts* obj1 = (NativeAlerts*)uNew(NativeAlerts_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}} // ::g::Fuse::Alerts
