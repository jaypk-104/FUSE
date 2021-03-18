// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.CameraRoll.iOSCameraRoll.h>
#include <Fuse.ImageTools.BoolPromiseCallback.h>
#include <Fuse.ImageTools.Image.h>
#include <Fuse.ImageTools.ImagePromiseCallback.h>
#include <Fuse.ImageTools.PromiseCallback-1.h>
#include <iOS/CameraRollHelper.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.Promise-1.h>
#include <uObjC.Foreign.h>
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace CameraRoll{

// /usr/local/share/uno/Packages/Fuse.CameraRoll/1.12.0/iOS/iOSCameraRoll.uno
// --------------------------------------------------------------------------

// public sealed extern class iOSCameraRoll
// {
static void iOSCameraRoll_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::ImageTools::PromiseCallback_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)iOSCameraRoll__New1_fn, 0, true, type, 0));
}

uType* iOSCameraRoll_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(iOSCameraRoll);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.CameraRoll.iOSCameraRoll", options);
    type->fp_build_ = iOSCameraRoll_build;
    type->fp_ctor_ = (void*)iOSCameraRoll__New1_fn;
    return type;
}

// public generated iOSCameraRoll()
void iOSCameraRoll__ctor__fn(iOSCameraRoll* __this)
{
    __this->ctor_();
}

// internal static Uno.Threading.Future<bool> AddToCameraRoll(Fuse.ImageTools.Image photo)
void iOSCameraRoll__AddToCameraRoll_fn(::g::Fuse::ImageTools::Image* photo, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = iOSCameraRoll::AddToCameraRoll(photo);
}

// private static void AddToCameraRollInternal(string path, Uno.Action success, Uno.Action<string> fail)
void iOSCameraRoll__AddToCameraRollInternal_fn(uString* path, uDelegate* success, uDelegate* fail)
{
    iOSCameraRoll::AddToCameraRollInternal(path, success, fail);
}

// internal static void CheckPermissions(Uno.Threading.Promise<string> p)
void iOSCameraRoll__CheckPermissions_fn(::g::Uno::Threading::Promise* p)
{
    iOSCameraRoll::CheckPermissions(p);
}

// private static void CheckPermissionsInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail)
void iOSCameraRoll__CheckPermissionsInternal_fn(uDelegate* onComplete, uDelegate* onFail)
{
    iOSCameraRoll::CheckPermissionsInternal(onComplete, onFail);
}

// public generated iOSCameraRoll New()
void iOSCameraRoll__New1_fn(iOSCameraRoll** __retval)
{
    *__retval = iOSCameraRoll::New1();
}

// internal static void RequestPermissions(Uno.Threading.Promise<string> p)
void iOSCameraRoll__RequestPermissions_fn(::g::Uno::Threading::Promise* p)
{
    iOSCameraRoll::RequestPermissions(p);
}

// private static void RequestPermissionsInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail)
void iOSCameraRoll__RequestPermissionsInternal_fn(uDelegate* onComplete, uDelegate* onFail)
{
    iOSCameraRoll::RequestPermissionsInternal(onComplete, onFail);
}

// internal static void SelectPicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p)
void iOSCameraRoll__SelectPicture_fn(::g::Uno::Threading::Promise* p)
{
    iOSCameraRoll::SelectPicture(p);
}

// private static void SelectPictureInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail)
void iOSCameraRoll__SelectPictureInternal_fn(uDelegate* onComplete, uDelegate* onFail)
{
    iOSCameraRoll::SelectPictureInternal(onComplete, onFail);
}

// public generated iOSCameraRoll() [instance]
void iOSCameraRoll::ctor_()
{
}

// internal static Uno.Threading.Future<bool> AddToCameraRoll(Fuse.ImageTools.Image photo) [static]
::g::Uno::Threading::Future1* iOSCameraRoll::AddToCameraRoll(::g::Fuse::ImageTools::Image* photo)
{
    uStackFrame __("Fuse.CameraRoll.iOSCameraRoll", "AddToCameraRoll(Fuse.ImageTools.Image)");
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[0/*Uno.Threading.Promise<bool>*/]);
    ::g::Fuse::ImageTools::BoolPromiseCallback* cb = ::g::Fuse::ImageTools::BoolPromiseCallback::New1(p);
    iOSCameraRoll::AddToCameraRollInternal(uPtr(photo)->Path(), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)::g::Fuse::ImageTools::BoolPromiseCallback__Resolve_fn, cb), uDelegate::New(::TYPES[2/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::BoolPromiseCallback__Reject_fn, cb));
    return p;
}

// private static void AddToCameraRollInternal(string path, Uno.Action success, Uno.Action<string> fail) [static]
void iOSCameraRoll::AddToCameraRollInternal(uString* path, uDelegate* success, uDelegate* fail)
{
    @autoreleasepool
    {
        [] (::NSString* path, ::uObjC::Function<void> success, ::uObjC::Function<void, ::NSString*> fail) -> void
        {
            [CameraRollHelper addNewAssetWithImagePath:path onSuccess:success onFail:fail];
        } (::uObjC::NativeString(path), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: success]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: fail]));
        
    }
    
}

// internal static void CheckPermissions(Uno.Threading.Promise<string> p) [static]
void iOSCameraRoll::CheckPermissions(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::ImageTools::PromiseCallback* cb = (::g::Fuse::ImageTools::PromiseCallback*)::g::Fuse::ImageTools::PromiseCallback::New1(::TYPES[3/*Fuse.ImageTools.PromiseCallback<string>*/], p);
    iOSCameraRoll::CheckPermissionsInternal(uDelegate::New(::TYPES[2/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Resolve_fn, cb), uDelegate::New(::TYPES[2/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Reject_fn, cb));
}

// private static void CheckPermissionsInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail) [static]
void iOSCameraRoll::CheckPermissionsInternal(uDelegate* onComplete, uDelegate* onFail)
{
    @autoreleasepool
    {
        [] (::uObjC::Function<void, ::NSString*> onComplete, ::uObjC::Function<void, ::NSString*> onFail) -> void
        {
            PHAuthorizationStatus status = [PHPhotoLibrary authorizationStatus];
            if (status == PHAuthorizationStatusAuthorized)
            	onComplete(@"PHAuthorizationStatusAuthorized");
            else if (status == PHAuthorizationStatusNotDetermined)
            	onFail(@"PHAuthorizationStatusNotDetermined");
            else if (status == PHAuthorizationStatusDenied)
            	onFail(@"PHAuthorizationStatusDenied");
            else if (status == PHAuthorizationStatusRestricted)
            	onFail(@"PHAuthorizationStatusRestricted");
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

// public generated iOSCameraRoll New() [static]
iOSCameraRoll* iOSCameraRoll::New1()
{
    iOSCameraRoll* obj1 = (iOSCameraRoll*)uNew(iOSCameraRoll_typeof());
    obj1->ctor_();
    return obj1;
}

// internal static void RequestPermissions(Uno.Threading.Promise<string> p) [static]
void iOSCameraRoll::RequestPermissions(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::ImageTools::PromiseCallback* cb = (::g::Fuse::ImageTools::PromiseCallback*)::g::Fuse::ImageTools::PromiseCallback::New1(::TYPES[3/*Fuse.ImageTools.PromiseCallback<string>*/], p);
    iOSCameraRoll::RequestPermissionsInternal(uDelegate::New(::TYPES[2/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Resolve_fn, cb), uDelegate::New(::TYPES[2/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Reject_fn, cb));
}

// private static void RequestPermissionsInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail) [static]
void iOSCameraRoll::RequestPermissionsInternal(uDelegate* onComplete, uDelegate* onFail)
{
    @autoreleasepool
    {
        [] (::uObjC::Function<void, ::NSString*> onComplete, ::uObjC::Function<void, ::NSString*> onFail) -> void
        {
            PHAuthorizationStatus status = [PHPhotoLibrary authorizationStatus];
            if (status == PHAuthorizationStatusNotDetermined)
            	[PHPhotoLibrary requestAuthorization:^(PHAuthorizationStatus status){
            		if (status == PHAuthorizationStatusAuthorized)
            			onComplete(@"PHAuthorizationStatusAuthorized");
            		else
            			onFail(@"PHAuthorizationStatusDenied");
            	}];
            else if (status == PHAuthorizationStatusAuthorized)
            	onComplete(@"PHAuthorizationStatusAuthorized");
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

// internal static void SelectPicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [static]
void iOSCameraRoll::SelectPicture(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::ImageTools::ImagePromiseCallback* cb = ::g::Fuse::ImageTools::ImagePromiseCallback::New1(p);
    iOSCameraRoll::SelectPictureInternal(uDelegate::New(::TYPES[2/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Resolve_fn, cb), uDelegate::New(::TYPES[2/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Reject_fn, cb));
}

// private static void SelectPictureInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail) [static]
void iOSCameraRoll::SelectPictureInternal(uDelegate* onComplete, uDelegate* onFail)
{
    @autoreleasepool
    {
        [] (::uObjC::Function<void, ::NSString*> onComplete, ::uObjC::Function<void, ::NSString*> onFail) -> void
        {
            PHAuthorizationStatus status = [PHPhotoLibrary authorizationStatus];
            if (status == PHAuthorizationStatusNotDetermined)
            	[PHPhotoLibrary requestAuthorization:^(PHAuthorizationStatus status){
            		if (status == PHAuthorizationStatusAuthorized)
            			dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            				[[CameraRollHelper instance] selectPictureWithCompletionHandler:onComplete onFail:onFail];
            			});
            		else
            			onFail(@"PHAuthorizationStatusDenied");
            	}];
            else if (status == PHAuthorizationStatusAuthorized)
            	dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            		[[CameraRollHelper instance] selectPictureWithCompletionHandler:onComplete onFail:onFail];
            	});
            else if (status == PHAuthorizationStatusRestricted)
            	onFail(@"PHAuthorizationStatusRestricted");
            else if (status == PHAuthorizationStatusDenied)
            	onFail(@"PHAuthorizationStatusDenied");
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

}}} // ::g::Fuse::CameraRoll
