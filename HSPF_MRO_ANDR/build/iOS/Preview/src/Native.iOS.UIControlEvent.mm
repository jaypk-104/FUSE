// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/iOS/UIControlEvent.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS/UIControlEvent.h>
#include <Native.iOS.UIControlEvent.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action2-2.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Native{
namespace iOS{

// internal sealed extern class UIControlEvent
// {
static void UIControlEvent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(UIControlEvent_type, interface0));
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(UIControlEvent, _handle), 0,
        ::g::ObjC::Object_typeof(), offsetof(UIControlEvent, _uiControl), 0,
        ::g::Uno::Int_typeof(), offsetof(UIControlEvent, _type), 0);
}

UIControlEvent_type* UIControlEvent_typeof()
{
    static uSStrong<UIControlEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIControlEvent);
    options.TypeSize = sizeof(UIControlEvent_type);
    type = (UIControlEvent_type*)uClassType::New("Native.iOS.UIControlEvent", options);
    type->fp_build_ = UIControlEvent_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))UIControlEvent__UnoIDisposableDispose_fn;
    return type;
}

// private UIControlEvent(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type)
void UIControlEvent__ctor__fn(UIControlEvent* __this, ::g::ObjC::Object* uiControl, uDelegate* handler, int32_t* type)
{
    __this->ctor_(uiControl, handler, *type);
}

// public static Uno.IDisposable AddValueChangedCallback(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler)
void UIControlEvent__AddValueChangedCallback_fn(::g::ObjC::Object* uiControl, uDelegate* handler, uObject** __retval)
{
    *__retval = UIControlEvent::AddValueChangedCallback(uiControl, handler);
}

// private static ObjC.Object Create(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type)
void UIControlEvent__Create_fn(::g::ObjC::Object* uiControl, uDelegate* handler, int32_t* type, ::g::ObjC::Object** __retval)
{
    *__retval = UIControlEvent::Create(uiControl, handler, *type);
}

// private UIControlEvent New(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type)
void UIControlEvent__New1_fn(::g::ObjC::Object* uiControl, uDelegate* handler, int32_t* type, UIControlEvent** __retval)
{
    *__retval = UIControlEvent::New1(uiControl, handler, *type);
}

// private static void RemoveHandler(ObjC.Object uiControl, ObjC.Object eventHandler, int type)
void UIControlEvent__RemoveHandler_fn(::g::ObjC::Object* uiControl, ::g::ObjC::Object* eventHandler, int32_t* type)
{
    UIControlEvent::RemoveHandler(uiControl, eventHandler, *type);
}

// private void Uno.IDisposable.Dispose()
void UIControlEvent__UnoIDisposableDispose_fn(UIControlEvent* __this)
{
    UIControlEvent::RemoveHandler(__this->_uiControl, __this->_handle, __this->_type);
    __this->_handle = NULL;
    __this->_uiControl = NULL;
}

// private UIControlEvent(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) [instance]
void UIControlEvent::ctor_(::g::ObjC::Object* uiControl, uDelegate* handler, int32_t type)
{
    _handle = UIControlEvent::Create(uiControl, handler, type);
    _uiControl = uiControl;
    _type = type;
}

// public static Uno.IDisposable AddValueChangedCallback(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler) [static]
uObject* UIControlEvent::AddValueChangedCallback(::g::ObjC::Object* uiControl, uDelegate* handler)
{
    uStackFrame __("Native.iOS.UIControlEvent", "AddValueChangedCallback(ObjC.Object,Uno.Action<ObjC.Object, ObjC.Object>)");
    return (uObject*)UIControlEvent::New1(uiControl, handler, (int)UIControlEventValueChanged);
}

// private static ObjC.Object Create(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) [static]
::g::ObjC::Object* UIControlEvent::Create(::g::ObjC::Object* uiControl, uDelegate* handler, int32_t type)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id uiControl, ::uObjC::Function<void, ::id, ::id> handler, int32_t type) -> ::id
        {
            UIControlEventProxy* h = [[UIControlEventProxy alloc] init];
            [h setCallback:handler];
            UIControl* control = (UIControl*)uiControl;
            [control addTarget:h action:@selector(action:forEvent:) forControlEvents:(UIControlEvents)type];
            return h;
        } (::g::ObjC::Object::GetHandle(uiControl), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id, ::id>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::id, ::id>)nil : (^ void (::id arg1, ::id arg2)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->Invoke(2, ::g::ObjC::Object::Create(arg1), ::g::ObjC::Object::Create(arg2));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: handler]), type));
        
    }
    
}

// private UIControlEvent New(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) [static]
UIControlEvent* UIControlEvent::New1(::g::ObjC::Object* uiControl, uDelegate* handler, int32_t type)
{
    UIControlEvent* obj1 = (UIControlEvent*)uNew(UIControlEvent_typeof());
    obj1->ctor_(uiControl, handler, type);
    return obj1;
}

// private static void RemoveHandler(ObjC.Object uiControl, ObjC.Object eventHandler, int type) [static]
void UIControlEvent::RemoveHandler(::g::ObjC::Object* uiControl, ::g::ObjC::Object* eventHandler, int32_t type)
{
    @autoreleasepool
    {
        [] (::id uiControl, ::id eventHandler, int32_t type) -> void
        {
            UIControlEventProxy* h = (UIControlEventProxy*)eventHandler;
            UIControl* control = (UIControl*)uiControl;
            [control removeTarget:h action:@selector(action:forEvent:) forControlEvents:(UIControlEvents)type];
        } (::g::ObjC::Object::GetHandle(uiControl), ::g::ObjC::Object::GetHandle(eventHandler), type);
        
    }
    
}
// }

}}} // ::g::Native::iOS
