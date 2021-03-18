// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Controls.NavDelegate.h>
#include <Fuse.iOS.Controls.WKWebViewHelpers.h>
#include <iOS/NoZoomDelegate.h>
#include <iOS/WVNavDelegate.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Func-1.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <WebKit/WebKit.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/iOS/NavDelegate.uno
// ------------------------------------------------------------------------------

// public static extern class NavDelegate
// {
static void NavDelegate_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("Create", NULL, (void*)NavDelegate__Create_fn, 0, true, ::g::ObjC::Object_typeof(), 6, ::g::Uno::Action_typeof(), ::g::Uno::Action_typeof(), ::g::Uno::Action_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), ::g::Uno::String_typeof()->Array(), ::g::Uno::Func_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL)));
}

uClassType* NavDelegate_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Controls.NavDelegate", options);
    type->fp_build_ = NavDelegate_build;
    return type;
}

// public static ObjC.Object Create(Uno.Action beginLoading, Uno.Action pageLoaded, Uno.Action urlChanged, Uno.Action<string> OnCustomURI, string[] schemes, Uno.Func<bool> hasURISchemeHandler)
void NavDelegate__Create_fn(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged, uDelegate* OnCustomURI, uArray* schemes, uDelegate* hasURISchemeHandler, ::g::ObjC::Object** __retval)
{
    *__retval = NavDelegate::Create(beginLoading, pageLoaded, urlChanged, OnCustomURI, schemes, hasURISchemeHandler);
}

// public static ObjC.Object Create(Uno.Action beginLoading, Uno.Action pageLoaded, Uno.Action urlChanged, Uno.Action<string> OnCustomURI, string[] schemes, Uno.Func<bool> hasURISchemeHandler) [static]
::g::ObjC::Object* NavDelegate::Create(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged, uDelegate* OnCustomURI, uArray* schemes, uDelegate* hasURISchemeHandler)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::uObjC::Function<void> beginLoading, ::uObjC::Function<void> pageLoaded, ::uObjC::Function<void> urlChanged, ::uObjC::Function<void, ::NSString*> OnCustomURI, id<UnoArray> schemes, ::uObjC::Function<bool> hasURISchemeHandler) -> ::id
        {
            return [[WVNavDelegate alloc] initWithEventHandlers:beginLoading loaded:pageLoaded change:urlChanged uriHandler:OnCustomURI schemes:[schemes copyArray] hasURISchemeHandler:hasURISchemeHandler];
        } ([] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: beginLoading]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: pageLoaded]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: urlChanged]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: OnCustomURI]), [::StrongUnoArray strongUnoArrayWithUnoArray: schemes getAt: ^ id (::uArray* arr, int i) { return (::id)::uObjC::NativeString(arr->Strong<uString*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uString*>(i) = ::uObjC::UnoString((::NSString*)obj); }], [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<bool>
        {
            return __delegateRef == nil ? (::uObjC::Function<bool>)nil : (^ bool ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                return uUnbox<bool>(__unoDelegate->Invoke());
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: hasURISchemeHandler])));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.12.0/iOS/WebView.uno
// --------------------------------------------------------------------------

// internal static extern class WKWebViewHelpers
// {
static void WKWebViewHelpers_build(uType* type)
{
}

uClassType* WKWebViewHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Controls.WKWebViewHelpers", options);
    type->fp_build_ = WKWebViewHelpers_build;
    return type;
}

// public static ObjC.Object CreateWebView(bool zoomEnabled, bool scrollEnabled)
void WKWebViewHelpers__CreateWebView_fn(bool* zoomEnabled, bool* scrollEnabled, ::g::ObjC::Object** __retval)
{
    *__retval = WKWebViewHelpers::CreateWebView(*zoomEnabled, *scrollEnabled);
}

// public static void EvalOnWebView(ObjC.Object webview, string js)
void WKWebViewHelpers__EvalOnWebView_fn(::g::ObjC::Object* webview, uString* js)
{
    WKWebViewHelpers::EvalOnWebView(webview, js);
}

// public static void EvalOnWebViewWithHandler(ObjC.Object webview, string js, Uno.Action<string> handler)
void WKWebViewHelpers__EvalOnWebViewWithHandler_fn(::g::ObjC::Object* webview, uString* js, uDelegate* handler)
{
    WKWebViewHelpers::EvalOnWebViewWithHandler(webview, js, handler);
}

// public static void FreeMemory()
void WKWebViewHelpers__FreeMemory_fn()
{
    WKWebViewHelpers::FreeMemory();
}

// public static string GenBaseUrl(string path)
void WKWebViewHelpers__GenBaseUrl_fn(uString* path, uString** __retval)
{
    *__retval = WKWebViewHelpers::GenBaseUrl(path);
}

// public static bool GetCanGoBack(ObjC.Object handle)
void WKWebViewHelpers__GetCanGoBack_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = WKWebViewHelpers::GetCanGoBack(handle);
}

// public static bool GetCanGoForward(ObjC.Object handle)
void WKWebViewHelpers__GetCanGoForward_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = WKWebViewHelpers::GetCanGoForward(handle);
}

// public static double GetEstimatedProgress(ObjC.Object handle)
void WKWebViewHelpers__GetEstimatedProgress_fn(::g::ObjC::Object* handle, double* __retval)
{
    *__retval = WKWebViewHelpers::GetEstimatedProgress(handle);
}

// public static bool GetIsLoading(ObjC.Object handle)
void WKWebViewHelpers__GetIsLoading_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = WKWebViewHelpers::GetIsLoading(handle);
}

// public static string GetTitle(ObjC.Object handle)
void WKWebViewHelpers__GetTitle_fn(::g::ObjC::Object* handle, uString** __retval)
{
    *__retval = WKWebViewHelpers::GetTitle(handle);
}

// public static string GetURL(ObjC.Object handle)
void WKWebViewHelpers__GetURL_fn(::g::ObjC::Object* handle, uString** __retval)
{
    *__retval = WKWebViewHelpers::GetURL(handle);
}

// public static void GoBack(ObjC.Object handle)
void WKWebViewHelpers__GoBack_fn(::g::ObjC::Object* handle)
{
    WKWebViewHelpers::GoBack(handle);
}

// public static void GoForward(ObjC.Object handle)
void WKWebViewHelpers__GoForward_fn(::g::ObjC::Object* handle)
{
    WKWebViewHelpers::GoForward(handle);
}

// public static void LoadHTML(ObjC.Object webview, string html, string baseURL)
void WKWebViewHelpers__LoadHTML_fn(::g::ObjC::Object* webview, uString* html, uString* baseURL)
{
    WKWebViewHelpers::LoadHTML(webview, html, baseURL);
}

// public static void LoadURL(ObjC.Object handle, string url)
void WKWebViewHelpers__LoadURL_fn(::g::ObjC::Object* handle, uString* url)
{
    WKWebViewHelpers::LoadURL(handle, url);
}

// public static void Reload(ObjC.Object handle)
void WKWebViewHelpers__Reload_fn(::g::ObjC::Object* handle)
{
    WKWebViewHelpers::Reload(handle);
}

// public static void SetNavigationDelegate(ObjC.Object webViewHandle, ObjC.Object delegateHandle)
void WKWebViewHelpers__SetNavigationDelegate_fn(::g::ObjC::Object* webViewHandle, ::g::ObjC::Object* delegateHandle)
{
    WKWebViewHelpers::SetNavigationDelegate(webViewHandle, delegateHandle);
}

// public static void StopLoading(ObjC.Object handle)
void WKWebViewHelpers__StopLoading_fn(::g::ObjC::Object* handle)
{
    WKWebViewHelpers::StopLoading(handle);
}

// public static ObjC.Object CreateWebView(bool zoomEnabled, bool scrollEnabled) [static]
::g::ObjC::Object* WKWebViewHelpers::CreateWebView(bool zoomEnabled, bool scrollEnabled)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (bool zoomEnabled, bool scrollEnabled) -> ::id
        {
            WKWebView* wv = [[WKWebView alloc] init];
            wv.scrollView.delegate = zoomEnabled ? NULL : [[NoZoomDelegate alloc] init];
            wv.scrollView.scrollEnabled = scrollEnabled;
            
            return wv;
        } (zoomEnabled, scrollEnabled));
        
    }
    
}

// public static void EvalOnWebView(ObjC.Object webview, string js) [static]
void WKWebViewHelpers::EvalOnWebView(::g::ObjC::Object* webview, uString* js)
{
    @autoreleasepool
    {
        [] (::id webview, ::NSString* js) -> void
        {
            WKWebView* wv = webview;
            [wv evaluateJavaScript:js completionHandler:nil];
        } (::g::ObjC::Object::GetHandle(webview), ::uObjC::NativeString(js));
        
    }
    
}

// public static void EvalOnWebViewWithHandler(ObjC.Object webview, string js, Uno.Action<string> handler) [static]
void WKWebViewHelpers::EvalOnWebViewWithHandler(::g::ObjC::Object* webview, uString* js, uDelegate* handler)
{
    @autoreleasepool
    {
        [] (::id webview, ::NSString* js, ::uObjC::Function<void, ::NSString*> handler) -> void
        {
            WKWebView* wv = webview;
            [wv evaluateJavaScript:js completionHandler:^(id result, NSError* error) {
            	handler(result);
            }];
        } (::g::ObjC::Object::GetHandle(webview), ::uObjC::NativeString(js), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: handler]));
        
    }
    
}

// public static void FreeMemory() [static]
void WKWebViewHelpers::FreeMemory()
{
    @autoreleasepool
    {
        id cache = [NSURLCache sharedURLCache];
        if(cache!=nil)
        	[cache removeAllCachedResponses];
    }
    
}

// public static string GenBaseUrl(string path) [static]
uString* WKWebViewHelpers::GenBaseUrl(uString* path)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::NSString* path) -> ::NSString*
        {
            NSString *resourcePath = [[[[NSBundle bundleForClass:[StrongUnoObject class]] resourcePath]
            	stringByReplacingOccurrencesOfString:@"/" withString:@"//"]
            	stringByReplacingOccurrencesOfString:@" " withString:@"%20"];
            
            return resourcePath;
        } (::uObjC::NativeString(path)));
        
    }
    
}

// public static bool GetCanGoBack(ObjC.Object handle) [static]
bool WKWebViewHelpers::GetCanGoBack(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            WKWebView* wv = handle;
            return wv.canGoBack;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static bool GetCanGoForward(ObjC.Object handle) [static]
bool WKWebViewHelpers::GetCanGoForward(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            WKWebView* wv = handle;
            return wv.canGoForward;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static double GetEstimatedProgress(ObjC.Object handle) [static]
double WKWebViewHelpers::GetEstimatedProgress(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> double
        {
            WKWebView* wv = handle;
            return wv.estimatedProgress;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static bool GetIsLoading(ObjC.Object handle) [static]
bool WKWebViewHelpers::GetIsLoading(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            WKWebView* wv = handle;
            return wv.loading;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static string GetTitle(ObjC.Object handle) [static]
uString* WKWebViewHelpers::GetTitle(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id handle) -> ::NSString*
        {
            WKWebView* wv = handle;
            return wv.title;
        } (::g::ObjC::Object::GetHandle(handle)));
        
    }
    
}

// public static string GetURL(ObjC.Object handle) [static]
uString* WKWebViewHelpers::GetURL(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id handle) -> ::NSString*
        {
            WKWebView* wv = handle;
            return wv.URL.absoluteString;
        } (::g::ObjC::Object::GetHandle(handle)));
        
    }
    
}

// public static void GoBack(ObjC.Object handle) [static]
void WKWebViewHelpers::GoBack(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            [wv goBack];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static void GoForward(ObjC.Object handle) [static]
void WKWebViewHelpers::GoForward(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            [wv goForward];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static void LoadHTML(ObjC.Object webview, string html, string baseURL) [static]
void WKWebViewHelpers::LoadHTML(::g::ObjC::Object* webview, uString* html, uString* baseURL)
{
    @autoreleasepool
    {
        [] (::id webview, ::NSString* html, ::NSString* baseURL) -> void
        {
            WKWebView* wv = webview;
            [wv loadHTMLString:html baseURL:[NSURL URLWithString:baseURL]];
        } (::g::ObjC::Object::GetHandle(webview), ::uObjC::NativeString(html), ::uObjC::NativeString(baseURL));
        
    }
    
}

// public static void LoadURL(ObjC.Object handle, string url) [static]
void WKWebViewHelpers::LoadURL(::g::ObjC::Object* handle, uString* url)
{
    @autoreleasepool
    {
        [] (::id handle, ::NSString* url) -> void
        {
            WKWebView* wv = handle;
            id nsurl = [NSURL URLWithString:url];
            id request = [[NSURLRequest alloc] initWithURL:nsurl];
            [wv loadRequest:request];
        } (::g::ObjC::Object::GetHandle(handle), ::uObjC::NativeString(url));
        
    }
    
}

// public static void Reload(ObjC.Object handle) [static]
void WKWebViewHelpers::Reload(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            [wv reload];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static void SetNavigationDelegate(ObjC.Object webViewHandle, ObjC.Object delegateHandle) [static]
void WKWebViewHelpers::SetNavigationDelegate(::g::ObjC::Object* webViewHandle, ::g::ObjC::Object* delegateHandle)
{
    @autoreleasepool
    {
        [] (::id webViewHandle, ::id delegateHandle) -> void
        {
            [webViewHandle setNavigationDelegate:delegateHandle];
        } (::g::ObjC::Object::GetHandle(webViewHandle), ::g::ObjC::Object::GetHandle(delegateHandle));
        
    }
    
}

// public static void StopLoading(ObjC.Object handle) [static]
void WKWebViewHelpers::StopLoading(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            [wv stopLoading];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}
// }

}}}} // ::g::Fuse::iOS::Controls
