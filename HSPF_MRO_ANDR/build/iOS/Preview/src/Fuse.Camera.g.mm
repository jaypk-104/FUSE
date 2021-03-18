// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Camera.iOSCamera.h>
#include <Fuse.ImageTools.Image.h>
#include <Fuse.ImageTools.ImagePromiseCallback.h>
#include <Fuse.ImageTools.PromiseCallback-1.h>
#include <iOS/CameraHelper.h>
#include <Uno.Action1-1.h>
#include <Uno.String.h>
#include <Uno.Threading.Promise-1.h>
#include <uObjC.Foreign.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Camera{

// /usr/local/share/uno/Packages/Fuse.Camera/1.12.0/iOS/iOSCamera.uno
// ------------------------------------------------------------------

// public sealed extern class iOSCamera
// {
static void iOSCamera_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::ImageTools::PromiseCallback_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)iOSCamera__New1_fn, 0, true, type, 0));
}

uType* iOSCamera_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(iOSCamera);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Camera.iOSCamera", options);
    type->fp_build_ = iOSCamera_build;
    type->fp_ctor_ = (void*)iOSCamera__New1_fn;
    return type;
}

// public generated iOSCamera()
void iOSCamera__ctor__fn(iOSCamera* __this)
{
    __this->ctor_();
}

// internal static void CheckPermissions(Uno.Threading.Promise<string> p)
void iOSCamera__CheckPermissions_fn(::g::Uno::Threading::Promise* p)
{
    iOSCamera::CheckPermissions(p);
}

// private static void CheckPermissionsInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail)
void iOSCamera__CheckPermissionsInternal_fn(uDelegate* onComplete, uDelegate* onFail)
{
    iOSCamera::CheckPermissionsInternal(onComplete, onFail);
}

// public generated iOSCamera New()
void iOSCamera__New1_fn(iOSCamera** __retval)
{
    *__retval = iOSCamera::New1();
}

// internal static void RequestPermissions(Uno.Threading.Promise<string> p)
void iOSCamera__RequestPermissions_fn(::g::Uno::Threading::Promise* p)
{
    iOSCamera::RequestPermissions(p);
}

// private static void RequestPermissionsInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail)
void iOSCamera__RequestPermissionsInternal_fn(uDelegate* onComplete, uDelegate* onFail)
{
    iOSCamera::RequestPermissionsInternal(onComplete, onFail);
}

// internal static void TakePicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p)
void iOSCamera__TakePicture_fn(::g::Uno::Threading::Promise* p)
{
    iOSCamera::TakePicture(p);
}

// private static void TakePictureInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail)
void iOSCamera__TakePictureInternal_fn(uDelegate* onComplete, uDelegate* onFail)
{
    iOSCamera::TakePictureInternal(onComplete, onFail);
}

// public generated iOSCamera() [instance]
void iOSCamera::ctor_()
{
}

// internal static void CheckPermissions(Uno.Threading.Promise<string> p) [static]
void iOSCamera::CheckPermissions(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::ImageTools::PromiseCallback* cb = (::g::Fuse::ImageTools::PromiseCallback*)::g::Fuse::ImageTools::PromiseCallback::New1(::TYPES[0/*Fuse.ImageTools.PromiseCallback<string>*/], p);
    iOSCamera::CheckPermissionsInternal(uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Resolve_fn, cb), uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Reject_fn, cb));
}

// private static void CheckPermissionsInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail) [static]
void iOSCamera::CheckPermissionsInternal(uDelegate* onComplete, uDelegate* onFail)
{
    @autoreleasepool
    {
        [] (::uObjC::Function<void, ::NSString*> onComplete, ::uObjC::Function<void, ::NSString*> onFail) -> void
        {
            AVAuthorizationStatus status = [AVCaptureDevice authorizationStatusForMediaType:AVMediaTypeVideo];
            if (status == AVAuthorizationStatusAuthorized)
            	onComplete(@"AVAuthorizationStatusAuthorized");
            else if (status == AVAuthorizationStatusNotDetermined)
            	onFail(@"AVAuthorizationStatusNotDetermined");
            else if (status == AVAuthorizationStatusDenied)
            	onFail(@"AVAuthorizationStatusDenied");
            else if (status == AVAuthorizationStatusRestricted)
            	onFail(@"AVAuthorizationStatusRestricted");
        } ([] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onComplete]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onFail]));
        
    }
    
}

// public generated iOSCamera New() [static]
iOSCamera* iOSCamera::New1()
{
    iOSCamera* obj1 = (iOSCamera*)uNew(iOSCamera_typeof());
    obj1->ctor_();
    return obj1;
}

// internal static void RequestPermissions(Uno.Threading.Promise<string> p) [static]
void iOSCamera::RequestPermissions(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::ImageTools::PromiseCallback* cb = (::g::Fuse::ImageTools::PromiseCallback*)::g::Fuse::ImageTools::PromiseCallback::New1(::TYPES[0/*Fuse.ImageTools.PromiseCallback<string>*/], p);
    iOSCamera::RequestPermissionsInternal(uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Resolve_fn, cb), uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Reject_fn, cb));
}

// private static void RequestPermissionsInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail) [static]
void iOSCamera::RequestPermissionsInternal(uDelegate* onComplete, uDelegate* onFail)
{
    @autoreleasepool
    {
        [] (::uObjC::Function<void, ::NSString*> onComplete, ::uObjC::Function<void, ::NSString*> onFail) -> void
        {
            AVAuthorizationStatus status = [AVCaptureDevice authorizationStatusForMediaType:AVMediaTypeVideo];
            if (status == AVAuthorizationStatusNotDetermined)
            	[AVCaptureDevice requestAccessForMediaType:AVMediaTypeVideo completionHandler:^(BOOL granted) {
            		if(granted)
            			onComplete(@"AVAuthorizationStatusAuthorized");
            		else
            			onFail(@"AVAuthorizationStatusDenied");
            	}];
            else if (status == AVAuthorizationStatusAuthorized)
            	onComplete(@"AVAuthorizationStatusAuthorized");
            else
            	dispatch_async(dispatch_get_main_queue(), ^{
            		[[UIApplication sharedApplication] openURL:[NSURL URLWithString:UIApplicationOpenSettingsURLString]];
            	});
        } ([] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onComplete]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onFail]));
        
    }
    
}

// internal static void TakePicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [static]
void iOSCamera::TakePicture(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::ImageTools::ImagePromiseCallback* cb = ::g::Fuse::ImageTools::ImagePromiseCallback::New1(p);
    iOSCamera::TakePictureInternal(uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Resolve_fn, cb), uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Reject_fn, cb));
}

// private static void TakePictureInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail) [static]
void iOSCamera::TakePictureInternal(uDelegate* onComplete, uDelegate* onFail)
{
    @autoreleasepool
    {
        [] (::uObjC::Function<void, ::NSString*> onComplete, ::uObjC::Function<void, ::NSString*> onFail) -> void
        {
            [[CameraHelper instance] takePictureWithCompletionHandler:onComplete onFail:onFail];
        } ([] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onComplete]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onFail]));
        
    }
    
}
// }

}}} // ::g::Fuse::Camera
