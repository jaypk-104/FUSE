// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Context.h>
#include <CoreFoundation/CoreFoundation.h>
#include <CoreGraphics/CoreGraphics.h>
#include <CoreText/CoreText.h>
#include <Foundation/Foundation.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.AutoCapitalizationHint.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.DatePicker.h>
#include <Fuse.Controls.DatePickerBase.h>
#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Controls.Native.iOS.Button.h>
#include <Fuse.Controls.Native.iOS.CanvasViewGroup.h>
#include <Fuse.Controls.Native.iOS.DatePickerView.h>
#include <Fuse.Controls.Native.iOS.DateTimeConverterHelpers.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.PerformBecomeFirstResponder.h>
#include <Fuse.Controls.Native.iOS.FontCache.h>
#include <Fuse.Controls.Native.iOS.GraphicsView.h>
#include <Fuse.Controls.Native.iOS.ImageView.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.RootInfo.h>
#include <Fuse.Controls.Native.iOS.iOSDevice.h>
#include <Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation.h>
#include <Fuse.Controls.Native.iOS.KeyboardView.h>
#include <Fuse.Controls.Native.iOS.MultiLineTextEdit.h>
#include <Fuse.Controls.Native.iOS.NativeFocus.h>
#include <Fuse.Controls.Native.iOS.NSAttributedStringBuilder.h>
#include <Fuse.Controls.Native.iOS.ObjectExtensions.h>
#include <Fuse.Controls.Native.iOS.OSVersion.h>
#include <Fuse.Controls.Native.iOS.PointerCaptureAdapter.h>
#include <Fuse.Controls.Native.iOS.ScrollView.h>
#include <Fuse.Controls.Native.iOS.SingleLineTextEdit.h>
#include <Fuse.Controls.Native.iOS.Slider.h>
#include <Fuse.Controls.Native.iOS.Switch.h>
#include <Fuse.Controls.Native.iOS.TextEditSpeedHack.h>
#include <Fuse.Controls.Native.iOS.TextView.h>
#include <Fuse.Controls.Native.iOS.TimePickerView.h>
#include <Fuse.Controls.Native.iOS.TouchPhase.h>
#include <Fuse.Controls.Native.iOS.UIControlEvent.h>
#include <Fuse.Controls.Native.iOS.UIEventExtensions.h>
#include <Fuse.Controls.Native.iOS.UITouchExtensions.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Fuse.Controls.Native.NativeRootViewport.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Controls.Native.ViewHandle.InputMode.h>
#include <Fuse.Controls.Native.ViewHandle.Invalidation.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Controls.TimePicker.h>
#include <Fuse.Controls.TimePickerBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.Drawing.NativeSurface.h>
#include <Fuse.Drawing.Surface.h>
#include <Fuse.Font.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <Fuse.Internal.iOSSystemFont.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.MultiDensityImageSource.h>
#include <Fuse.Resources.SystemFileSource.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <GLKit/GLKit.h>
#include <iOS/CanvasViewGroup.h>
#include <iOS/Helpers.h>
#include <iOS/UIViewInputDispatch.h>
#include <ObjC.Object.h>
#include <OpenGLES/EAGL.h>
#include <UIKit/UIKit.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.DateTime.h>
#include <Uno.DateTimeKind.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func1-2.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Platform.iOSDisplay.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Predicate-1.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[7];
static uType* TYPES[27];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/Button.uno
// ------------------------------------------------------------------------

// public sealed extern class Button
// {
static void Button_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Button_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Button_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Button_type, interface2),
        ::g::Fuse::Controls::Native::ILabelView_typeof(), offsetof(Button_type, interface3));
    type->SetFields(10);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Button__New3_fn, 0, true, type, 0));
}

Button_type* Button_typeof()
{
    static uSStrong<Button_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(Button_type);
    type = (Button_type*)uClassType::New("Fuse.Controls.Native.iOS.Button", options);
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New3_fn;
    type->interface3.fp_set_Text = (void(*)(uObject*, uString*))Button__FuseControlsNativeILabelViewset_Text_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public Button()
void Button__ctor_5_fn(Button* __this)
{
    __this->ctor_5();
}

// private static ObjC.Object Create()
void Button__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = Button::Create();
}

// private void Fuse.Controls.Native.ILabelView.set_Text(string value)
void Button__FuseControlsNativeILabelViewset_Text_fn(Button* __this, uString* value)
{
    Button::SetText(__this->Handle(), value);
}

// public Button New()
void Button__New3_fn(Button** __retval)
{
    *__retval = Button::New3();
}

// private static void SetText(ObjC.Object handle, string text)
void Button__SetText_fn(::g::ObjC::Object* handle, uString* text)
{
    Button::SetText(handle, text);
}

// public Button() [instance]
void Button::ctor_5()
{
    ctor_4(Button::Create());
}

// private static ObjC.Object Create() [static]
::g::ObjC::Object* Button::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return [[::UIButton alloc] init];
        } ());
        
    }
    
}

// public Button New() [static]
Button* Button::New3()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_5();
    return obj1;
}

// private static void SetText(ObjC.Object handle, string text) [static]
void Button::SetText(::g::ObjC::Object* handle, uString* text)
{
    @autoreleasepool
    {
        [] (::id handle, ::NSString* text) -> void
        {
            ::UIButton* button = (::UIButton*)handle;
            [button setTitle:text forState:UIControlStateNormal];
            [button setTitleColor:[UIColor colorWithRed:0.0 green:122.0/255.0 blue:1.0 alpha:1.0] forState:UIControlStateNormal];
        } (::g::ObjC::Object::GetHandle(handle), ::uObjC::NativeString(text));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/CanvasViewGroup.uno
// ---------------------------------------------------------------------------------

// internal sealed extern class CanvasViewGroup
// {
static void CanvasViewGroup_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Attempt to draw native canvas without surface");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/CanvasViewGroup.uno");
    ::STRINGS[2] = uString::Const("OnDraw");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IntPtr_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(CanvasViewGroup_type, interface0),
        ::g::Fuse::Drawing::INativeSurfaceOwner_typeof(), offsetof(CanvasViewGroup_type, interface1));
    type->SetFields(9,
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(CanvasViewGroup, _surfaceDrawable), 0,
        ::g::Uno::Float_typeof(), offsetof(CanvasViewGroup, _pixelsPerPoint), 0,
        ::g::Fuse::Drawing::NativeSurface_typeof(), offsetof(CanvasViewGroup, _nativeSurface), 0);
}

CanvasViewGroup_type* CanvasViewGroup_typeof()
{
    static uSStrong<CanvasViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CanvasViewGroup);
    options.TypeSize = sizeof(CanvasViewGroup_type);
    type = (CanvasViewGroup_type*)uClassType::New("Fuse.Controls.Native.iOS.CanvasViewGroup", options);
    type->fp_build_ = CanvasViewGroup_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))CanvasViewGroup__Dispose_fn;
    type->interface1.fp_GetSurface = (void(*)(uObject*, ::g::Fuse::Drawing::Surface**))CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CanvasViewGroup__Dispose_fn;
    return type;
}

// public CanvasViewGroup(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint)
void CanvasViewGroup__ctor_2_fn(CanvasViewGroup* __this, uObject* surfaceDrawable, float* pixelsPerPoint)
{
    __this->ctor_2(surfaceDrawable, *pixelsPerPoint);
}

// private static ObjC.Object Create(float density)
void CanvasViewGroup__Create_fn(float* density, ::g::ObjC::Object** __retval)
{
    *__retval = CanvasViewGroup::Create(*density);
}

// public override sealed void Dispose()
void CanvasViewGroup__Dispose_fn(CanvasViewGroup* __this)
{
    CanvasViewGroup::SetDrawCallback(__this->NativeHandle, NULL);
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    __this->_nativeSurface = NULL;
}

// internal Fuse.Drawing.Surface Fuse.Drawing.INativeSurfaceOwner.GetSurface()
void CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn(CanvasViewGroup* __this, ::g::Fuse::Drawing::Surface** __retval)
{
    if (__this->_nativeSurface == NULL)
    {
        CanvasViewGroup::SetDrawCallback(__this->NativeHandle, uDelegate::New(::TYPES[0/*Uno.Action<Uno.IntPtr>*/], (void*)CanvasViewGroup__OnDraw_fn, __this));
        __this->Invalidate();
        __this->_nativeSurface = ::g::Fuse::Drawing::NativeSurface::New1();
    }

    return *__retval = __this->_nativeSurface, void();
}

// public CanvasViewGroup New(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint)
void CanvasViewGroup__New3_fn(uObject* surfaceDrawable, float* pixelsPerPoint, CanvasViewGroup** __retval)
{
    *__retval = CanvasViewGroup::New3(surfaceDrawable, *pixelsPerPoint);
}

// private void OnDraw(Uno.IntPtr cgContextRef)
void CanvasViewGroup__OnDraw_fn(CanvasViewGroup* __this, void** cgContextRef)
{
    __this->OnDraw(*cgContextRef);
}

// private static void SetDrawCallback(ObjC.Object handle, Uno.Action<Uno.IntPtr> onDrawCallback)
void CanvasViewGroup__SetDrawCallback_fn(::g::ObjC::Object* handle, uDelegate* onDrawCallback)
{
    CanvasViewGroup::SetDrawCallback(handle, onDrawCallback);
}

// public CanvasViewGroup(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) [instance]
void CanvasViewGroup::ctor_2(uObject* surfaceDrawable, float pixelsPerPoint)
{
    ctor_1(CanvasViewGroup::Create(pixelsPerPoint), false, 0, 1);
    NeedsRenderBounds = true;
    _surfaceDrawable = surfaceDrawable;
    _pixelsPerPoint = pixelsPerPoint;
}

// private void OnDraw(Uno.IntPtr cgContextRef) [instance]
void CanvasViewGroup::OnDraw(void* cgContextRef)
{
    uStackFrame __("Fuse.Controls.Native.iOS.CanvasViewGroup", "OnDraw(Uno.IntPtr)");

    if (_nativeSurface == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[0/*"Attempt to ...*/], this, ::STRINGS[1/*"/usr/local/...*/], 33, ::STRINGS[2/*"OnDraw"*/]);
        return;
    }

    uPtr(_nativeSurface)->Begin1(cgContextRef, _pixelsPerPoint);
    uPtr(_nativeSurface)->DrawLocal(_surfaceDrawable);
    uPtr(_nativeSurface)->End();
}

// private static ObjC.Object Create(float density) [static]
::g::ObjC::Object* CanvasViewGroup::Create(float density)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (float density) -> ::id
        {
            ::CanvasViewGroup* cvg = [[::CanvasViewGroup alloc] initWithDensity:density];
            [cvg setOpaque:false];
            [cvg setMultipleTouchEnabled:true];
            return cvg;
        } (density));
        
    }
    
}

// public CanvasViewGroup New(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) [static]
CanvasViewGroup* CanvasViewGroup::New3(uObject* surfaceDrawable, float pixelsPerPoint)
{
    CanvasViewGroup* obj1 = (CanvasViewGroup*)uNew(CanvasViewGroup_typeof());
    obj1->ctor_2(surfaceDrawable, pixelsPerPoint);
    return obj1;
}

// private static void SetDrawCallback(ObjC.Object handle, Uno.Action<Uno.IntPtr> onDrawCallback) [static]
void CanvasViewGroup::SetDrawCallback(::g::ObjC::Object* handle, uDelegate* onDrawCallback)
{
    @autoreleasepool
    {
        [] (::id handle, ::uObjC::Function<void, void*> onDrawCallback) -> void
        {
            ::CanvasViewGroup* cvg = (::CanvasViewGroup*)handle;
            [cvg setOnDrawCallback:onDrawCallback];
        } (::g::ObjC::Object::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, void*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, void*>)nil : (^ void (void* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(uCRef(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onDrawCallback]));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.DatePicker/1.12.0/iOS/DatePicker.uno
// --------------------------------------------------------------------------------

// internal sealed extern class DatePickerView
// {
static void DatePickerView_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(DatePickerView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(DatePickerView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(DatePickerView_type, interface2),
        ::g::Fuse::Controls::IDatePickerView_typeof(), offsetof(DatePickerView_type, interface3));
    type->SetFields(10,
        ::g::Fuse::Controls::DatePicker_typeof(), offsetof(DatePickerView, _host), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(DatePickerView, _valueChangedEvent), 0);
}

DatePickerView_type* DatePickerView_typeof()
{
    static uSStrong<DatePickerView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(DatePickerView);
    options.TypeSize = sizeof(DatePickerView_type);
    type = (DatePickerView_type*)uClassType::New("Fuse.Controls.Native.iOS.DatePickerView", options);
    type->fp_build_ = DatePickerView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))DatePickerView__Dispose_fn;
    type->interface3.fp_OnRooted = (void(*)(uObject*))DatePickerView__OnRooted_fn;
    type->interface3.fp_OnUnrooted = (void(*)(uObject*))DatePickerView__OnUnrooted_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, ::g::Uno::DateTime*))DatePickerView__set_Value_fn;
    type->interface3.fp_set_MinValue = (void(*)(uObject*, ::g::Uno::DateTime*))DatePickerView__set_MinValue_fn;
    type->interface3.fp_set_MaxValue = (void(*)(uObject*, ::g::Uno::DateTime*))DatePickerView__set_MaxValue_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))DatePickerView__Dispose_fn;
    return type;
}

// public DatePickerView(Fuse.Controls.DatePicker host)
void DatePickerView__ctor_5_fn(DatePickerView* __this, ::g::Fuse::Controls::DatePicker* host)
{
    __this->ctor_5(host);
}

// private static ObjC.Object Create()
void DatePickerView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = DatePickerView::Create();
}

// public override sealed void Dispose()
void DatePickerView__Dispose_fn(DatePickerView* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DatePickerView", "Dispose()");
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_valueChangedEvent), ::TYPES[2/*Uno.IDisposable*/]));
    __this->_valueChangedEvent = NULL;
    __this->_host = NULL;
}

// private ObjC.Object GetDate(ObjC.Object datePickerHandle)
void DatePickerView__GetDate_fn(DatePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object** __retval)
{
    *__retval = __this->GetDate(datePickerHandle);
}

// public void set_MaxValue(Uno.DateTime value)
void DatePickerView__set_MaxValue_fn(DatePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->MaxValue(*value);
}

// public void set_MinValue(Uno.DateTime value)
void DatePickerView__set_MinValue_fn(DatePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->MinValue(*value);
}

// public DatePickerView New(Fuse.Controls.DatePicker host)
void DatePickerView__New3_fn(::g::Fuse::Controls::DatePicker* host, DatePickerView** __retval)
{
    *__retval = DatePickerView::New3(host);
}

// public void OnRooted()
void DatePickerView__OnRooted_fn(DatePickerView* __this)
{
    __this->OnRooted();
}

// public void OnUnrooted()
void DatePickerView__OnUnrooted_fn(DatePickerView* __this)
{
    __this->OnUnrooted();
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object args)
void DatePickerView__OnValueChanged_fn(DatePickerView* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    __this->OnValueChanged(sender, args);
}

// private void SetDate(ObjC.Object datePickerHandle, ObjC.Object date)
void DatePickerView__SetDate_fn(DatePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date)
{
    __this->SetDate(datePickerHandle, date);
}

// private void SetMaxValue(ObjC.Object datePickerHandle, ObjC.Object date)
void DatePickerView__SetMaxValue_fn(DatePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date)
{
    __this->SetMaxValue(datePickerHandle, date);
}

// private void SetMinValue(ObjC.Object datePickerHandle, ObjC.Object date)
void DatePickerView__SetMinValue_fn(DatePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date)
{
    __this->SetMinValue(datePickerHandle, date);
}

// public Uno.DateTime get_Value()
void DatePickerView__get_Value_fn(DatePickerView* __this, ::g::Uno::DateTime* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(Uno.DateTime value)
void DatePickerView__set_Value_fn(DatePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->Value(*value);
}

// public DatePickerView(Fuse.Controls.DatePicker host) [instance]
void DatePickerView::ctor_5(::g::Fuse::Controls::DatePicker* host)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DatePickerView", ".ctor(Fuse.Controls.DatePicker)");
    ctor_4(DatePickerView::Create());
    _host = host;
    MinValue(uPtr(_host)->MinValue());
    MaxValue(uPtr(_host)->MaxValue());
    Value(uPtr(_host)->Value());
    _valueChangedEvent = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddValueChangedCallback(Handle(), uDelegate::New(::TYPES[1/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)DatePickerView__OnValueChanged_fn, this));
}

// private ObjC.Object GetDate(ObjC.Object datePickerHandle) [instance]
::g::ObjC::Object* DatePickerView::GetDate(::g::ObjC::Object* datePickerHandle)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id datePickerHandle) -> ::id
        {
            UIDatePicker *dp = (UIDatePicker *)datePickerHandle;
            
            return [dp date];
        } (::g::ObjC::Object::GetHandle(datePickerHandle)));
        
    }
    
}

// public void set_MaxValue(Uno.DateTime value) [instance]
void DatePickerView::MaxValue(::g::Uno::DateTime value)
{
    SetMaxValue(Handle(), ::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ReconstructUtcDate(::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ConvertDateTimeToNSDate(value)));
}

// public void set_MinValue(Uno.DateTime value) [instance]
void DatePickerView::MinValue(::g::Uno::DateTime value)
{
    SetMinValue(Handle(), ::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ReconstructUtcDate(::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ConvertDateTimeToNSDate(value)));
}

// public void OnRooted() [instance]
void DatePickerView::OnRooted()
{
}

// public void OnUnrooted() [instance]
void DatePickerView::OnUnrooted()
{
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object args) [instance]
void DatePickerView::OnValueChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DatePickerView", "OnValueChanged(ObjC.Object,ObjC.Object)");
    uPtr(_host)->OnNativeViewValueChanged(Value());
}

// private void SetDate(ObjC.Object datePickerHandle, ObjC.Object date) [instance]
void DatePickerView::SetDate(::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date)
{
    @autoreleasepool
    {
        [] (::id datePickerHandle, ::id date) -> void
        {
            UIDatePicker *dp = (UIDatePicker *)datePickerHandle;
            
            [dp setDate:date animated:true];
        } (::g::ObjC::Object::GetHandle(datePickerHandle), ::g::ObjC::Object::GetHandle(date));
        
    }
    
}

// private void SetMaxValue(ObjC.Object datePickerHandle, ObjC.Object date) [instance]
void DatePickerView::SetMaxValue(::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date)
{
    @autoreleasepool
    {
        [] (::id datePickerHandle, ::id date) -> void
        {
            UIDatePicker *dp = (UIDatePicker *)datePickerHandle;
            
            [dp setMaximumDate:date];
        } (::g::ObjC::Object::GetHandle(datePickerHandle), ::g::ObjC::Object::GetHandle(date));
        
    }
    
}

// private void SetMinValue(ObjC.Object datePickerHandle, ObjC.Object date) [instance]
void DatePickerView::SetMinValue(::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date)
{
    @autoreleasepool
    {
        [] (::id datePickerHandle, ::id date) -> void
        {
            UIDatePicker *dp = (UIDatePicker *)datePickerHandle;
            
            [dp setMinimumDate:date];
        } (::g::ObjC::Object::GetHandle(datePickerHandle), ::g::ObjC::Object::GetHandle(date));
        
    }
    
}

// public Uno.DateTime get_Value() [instance]
::g::Uno::DateTime DatePickerView::Value()
{
    return ::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ConvertNSDateToDateTime(::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ReconstructUtcDate(GetDate(Handle())));
}

// public void set_Value(Uno.DateTime value) [instance]
void DatePickerView::Value(::g::Uno::DateTime value)
{
    SetDate(Handle(), ::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ReconstructUtcDate(::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ConvertDateTimeToNSDate(value)));
}

// private static ObjC.Object Create() [static]
::g::ObjC::Object* DatePickerView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIDatePicker *dp = [[UIDatePicker alloc] init];
            
            [dp setDatePickerMode:UIDatePickerModeDate];
            
            // Make sure the date picker interprets date values in UTC
            [dp setTimeZone:[NSTimeZone timeZoneForSecondsFromGMT:0]];
            
            return dp;
        } ());
        
    }
    
}

// public DatePickerView New(Fuse.Controls.DatePicker host) [static]
DatePickerView* DatePickerView::New3(::g::Fuse::Controls::DatePicker* host)
{
    DatePickerView* obj1 = (DatePickerView*)uNew(DatePickerView_typeof());
    obj1->ctor_5(host);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/DateTimeConverterHelpers.uno
// ------------------------------------------------------------------------------------------

// internal static extern class DateTimeConverterHelpers
// {
static void DateTimeConverterHelpers_build(uType* type)
{
}

uClassType* DateTimeConverterHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.DateTimeConverterHelpers", options);
    type->fp_build_ = DateTimeConverterHelpers_build;
    return type;
}

// public static ObjC.Object ConvertDateTimeToNSDate(Uno.DateTime dt)
void DateTimeConverterHelpers__ConvertDateTimeToNSDate_fn(::g::Uno::DateTime* dt, ::g::ObjC::Object** __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertDateTimeToNSDate(*dt);
}

// public static Uno.DateTime ConvertNSDateToDateTime(ObjC.Object date)
void DateTimeConverterHelpers__ConvertNSDateToDateTime_fn(::g::ObjC::Object* date, ::g::Uno::DateTime* __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertNSDateToDateTime(date);
}

// public static double NSDateToSecondsSince1970InUtc(ObjC.Object date)
void DateTimeConverterHelpers__NSDateToSecondsSince1970InUtc_fn(::g::ObjC::Object* date, double* __retval)
{
    *__retval = DateTimeConverterHelpers::NSDateToSecondsSince1970InUtc(date);
}

// public static ObjC.Object ReconstructUtcDate(ObjC.Object date)
void DateTimeConverterHelpers__ReconstructUtcDate_fn(::g::ObjC::Object* date, ::g::ObjC::Object** __retval)
{
    *__retval = DateTimeConverterHelpers::ReconstructUtcDate(date);
}

// public static ObjC.Object ReconstructUtcTime(ObjC.Object date)
void DateTimeConverterHelpers__ReconstructUtcTime_fn(::g::ObjC::Object* date, ::g::ObjC::Object** __retval)
{
    *__retval = DateTimeConverterHelpers::ReconstructUtcTime(date);
}

// public static ObjC.Object SecondsSince1970InUtcToNSDate(double secondsSince1970InUtc)
void DateTimeConverterHelpers__SecondsSince1970InUtcToNSDate_fn(double* secondsSince1970InUtc, ::g::ObjC::Object** __retval)
{
    *__retval = DateTimeConverterHelpers::SecondsSince1970InUtcToNSDate(*secondsSince1970InUtc);
}

// public static ObjC.Object ConvertDateTimeToNSDate(Uno.DateTime dt) [static]
::g::ObjC::Object* DateTimeConverterHelpers::ConvertDateTimeToNSDate(::g::Uno::DateTime dt)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DateTimeConverterHelpers", "ConvertDateTimeToNSDate(Uno.DateTime)");
    dt = dt.ToUniversalTime();
    int64_t dotNetTicks = dt.Ticks();
    int64_t dotNetTicksRelativeToUnixEpoch = dotNetTicks - 621355968000000000LL;
    int64_t secondsSince1970InUtc = dotNetTicksRelativeToUnixEpoch / 10000000LL;
    return DateTimeConverterHelpers::SecondsSince1970InUtcToNSDate((double)secondsSince1970InUtc);
}

// public static Uno.DateTime ConvertNSDateToDateTime(ObjC.Object date) [static]
::g::Uno::DateTime DateTimeConverterHelpers::ConvertNSDateToDateTime(::g::ObjC::Object* date)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DateTimeConverterHelpers", "ConvertNSDateToDateTime(ObjC.Object)");
    int64_t secondsSince1970InUtc = (int64_t)DateTimeConverterHelpers::NSDateToSecondsSince1970InUtc(date);
    int64_t dotNetTicksRelativeToUnixEpoch = secondsSince1970InUtc * 10000000LL;
    int64_t dotNetTicks = dotNetTicksRelativeToUnixEpoch + 621355968000000000LL;
    return ::g::Uno::DateTime__New1(dotNetTicks, 1);
}

// public static double NSDateToSecondsSince1970InUtc(ObjC.Object date) [static]
double DateTimeConverterHelpers::NSDateToSecondsSince1970InUtc(::g::ObjC::Object* date)
{
    @autoreleasepool
    {
        return [] (::id date) -> double
        {
            return [date timeIntervalSince1970];
        } (::g::ObjC::Object::GetHandle(date));
        
    }
    
}

// public static ObjC.Object ReconstructUtcDate(ObjC.Object date) [static]
::g::ObjC::Object* DateTimeConverterHelpers::ReconstructUtcDate(::g::ObjC::Object* date)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id date) -> ::id
        {
            if (!date)
            	return [NSDate dateWithTimeIntervalSince1970:0];
            
            // Reconstruct the same date in UTC without time components
            NSCalendar *utcCalendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
            [utcCalendar setTimeZone:[NSTimeZone timeZoneForSecondsFromGMT:0]];
            
            NSDateComponents *components = [utcCalendar components:NSCalendarUnitYear|NSCalendarUnitMonth|NSCalendarUnitDay fromDate:date];
            
            NSDateComponents *utcComponents = [[NSDateComponents alloc] init];
            [utcComponents setYear:[components year]];
            [utcComponents setMonth:[components month]];
            [utcComponents setDay:[components day]];
            
            return [utcCalendar dateFromComponents:utcComponents];
        } (::g::ObjC::Object::GetHandle(date)));
        
    }
    
}

// public static ObjC.Object ReconstructUtcTime(ObjC.Object date) [static]
::g::ObjC::Object* DateTimeConverterHelpers::ReconstructUtcTime(::g::ObjC::Object* date)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id date) -> ::id
        {
            if (!date)
            	return [NSDate dateWithTimeIntervalSince1970:0];
            
            // Reconstruct the same date in UTC without date components
            NSCalendar *utcCalendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
            [utcCalendar setTimeZone:[NSTimeZone timeZoneForSecondsFromGMT:0]];
            
            NSDateComponents *components = [utcCalendar components:NSCalendarUnitHour|NSCalendarUnitMinute fromDate:date];
            
            NSDateComponents *utcComponents = [[NSDateComponents alloc] init];
            [utcComponents setYear:1970];
            [utcComponents setMonth:1];
            [utcComponents setDay:1];
            [utcComponents setHour:[components hour]];
            [utcComponents setMinute:[components minute]];
            
            return [utcCalendar dateFromComponents:utcComponents];
        } (::g::ObjC::Object::GetHandle(date)));
        
    }
    
}

// public static ObjC.Object SecondsSince1970InUtcToNSDate(double secondsSince1970InUtc) [static]
::g::ObjC::Object* DateTimeConverterHelpers::SecondsSince1970InUtcToNSDate(double secondsSince1970InUtc)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (double secondsSince1970InUtc) -> ::id
        {
            return [NSDate dateWithTimeIntervalSince1970:secondsSince1970InUtc];
        } (secondsSince1970InUtc));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/Focus.uno
// -----------------------------------------------------------------------

// internal static extern class FocusHelpers
// {
// static FocusHelpers()
static void FocusHelpers__cctor__fn(uType* __type)
{
    FocusHelpers::_keyboardView_ = ::g::Fuse::Controls::Native::iOS::KeyboardView::New1();
}

static void FocusHelpers_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(0,
        ::g::Fuse::Controls::Native::iOS::KeyboardView_typeof(), (uintptr_t)&FocusHelpers::_keyboardView_, uFieldFlagsStatic);
}

uClassType* FocusHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FocusHelpers", options);
    type->fp_build_ = FocusHelpers_build;
    type->fp_cctor_ = FocusHelpers__cctor__fn;
    return type;
}

// public static void BecomeFirstResponder(ObjC.Object uiView)
void FocusHelpers__BecomeFirstResponder_fn(::g::ObjC::Object* uiView)
{
    FocusHelpers::BecomeFirstResponder(uiView);
}

// public static ObjC.Object GetCurrentFirstResponder()
void FocusHelpers__GetCurrentFirstResponder_fn(::g::ObjC::Object** __retval)
{
    *__retval = FocusHelpers::GetCurrentFirstResponder();
}

// public static bool IsFirstResponder(ObjC.Object handle)
void FocusHelpers__IsFirstResponder_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = FocusHelpers::IsFirstResponder(handle);
}

// public static Fuse.Controls.Native.iOS.KeyboardView get_KeyboardView()
void FocusHelpers__get_KeyboardView_fn(::g::Fuse::Controls::Native::iOS::KeyboardView** __retval)
{
    *__retval = FocusHelpers::KeyboardView();
}

// public static void ResignFirstResponder(ObjC.Object uiView)
void FocusHelpers__ResignFirstResponder_fn(::g::ObjC::Object* uiView)
{
    FocusHelpers::ResignFirstResponder(uiView);
}

// public static void ScheduleBecomeFirstResponder(ObjC.Object target)
void FocusHelpers__ScheduleBecomeFirstResponder_fn(::g::ObjC::Object* target)
{
    FocusHelpers::ScheduleBecomeFirstResponder(target);
}

// public static void ScheduleResignFirstResponder(ObjC.Object target)
void FocusHelpers__ScheduleResignFirstResponder_fn(::g::ObjC::Object* target)
{
    FocusHelpers::ScheduleResignFirstResponder(target);
}

uSStrong< ::g::Fuse::Controls::Native::iOS::KeyboardView*> FocusHelpers::_keyboardView_;

// public static void BecomeFirstResponder(ObjC.Object uiView) [static]
void FocusHelpers::BecomeFirstResponder(::g::ObjC::Object* uiView)
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        [] (::id uiView) -> void
        {
            ::UIView* view = (::UIView*)uiView;
            [view becomeFirstResponder];
        } (::g::ObjC::Object::GetHandle(uiView));
        
    }
    
}

// public static ObjC.Object GetCurrentFirstResponder() [static]
::g::ObjC::Object* FocusHelpers::GetCurrentFirstResponder()
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            id responder = [UIResponder currentFirstResponder];
            if ([responder isKindOfClass: [::UIView class]])
            {
            	return responder;
            }
            else
            {
            	return nil;
            }
        } ());
        
    }
    
}

// public static bool IsFirstResponder(ObjC.Object handle) [static]
bool FocusHelpers::IsFirstResponder(::g::ObjC::Object* handle)
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            ::UIView* view = (::UIView*)handle;
            return [view isFirstResponder];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static void ResignFirstResponder(ObjC.Object uiView) [static]
void FocusHelpers::ResignFirstResponder(::g::ObjC::Object* uiView)
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        [] (::id uiView) -> void
        {
            ::UIView* view = (::UIView*)uiView;
            [view resignFirstResponder];
        } (::g::ObjC::Object::GetHandle(uiView));
        
    }
    
}

// public static void ScheduleBecomeFirstResponder(ObjC.Object target) [static]
void FocusHelpers::ScheduleBecomeFirstResponder(::g::ObjC::Object* target)
{
    uStackFrame __("Fuse.Controls.Native.iOS.FocusHelpers", "ScheduleBecomeFirstResponder(ObjC.Object)");
    FocusHelpers_typeof()->Init();
    FocusHelpers::BecomeFirstResponder(target);
    ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)FocusHelpers__PerformBecomeFirstResponder__BecomeFirstResponder_fn, FocusHelpers__PerformBecomeFirstResponder::New1(target)), 0, 1);
}

// public static void ScheduleResignFirstResponder(ObjC.Object target) [static]
void FocusHelpers::ScheduleResignFirstResponder(::g::ObjC::Object* target)
{
    uStackFrame __("Fuse.Controls.Native.iOS.FocusHelpers", "ScheduleResignFirstResponder(ObjC.Object)");
    FocusHelpers_typeof()->Init();
    uPtr(FocusHelpers::KeyboardView())->HoldFocus(target);
    ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)::g::Fuse::Controls::Native::iOS::KeyboardView__HideKeyboard_fn, uPtr(FocusHelpers::KeyboardView())), 0, 1);
}

// public static Fuse.Controls.Native.iOS.KeyboardView get_KeyboardView() [static]
::g::Fuse::Controls::Native::iOS::KeyboardView* FocusHelpers::KeyboardView()
{
    FocusHelpers_typeof()->Init();
    return FocusHelpers::_keyboardView_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/FontCache.uno
// ---------------------------------------------------------------------------

// internal static extern class FontCache
// {
// static generated FontCache()
static void FontCache__cctor__fn(uType* __type)
{
    FontCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<Fuse.Internal.FontFaceDescriptor, Uno.Collections.Dictionary<float, ObjC.Object>>*/]));
}

static void FontCache_build(uType* type)
{
    ::STRINGS[3] = uString::Const("/tempFont");
    ::STRINGS[4] = uString::Const("data/");
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Float_typeof(), ::g::ObjC::Object_typeof(), NULL), NULL);
    ::TYPES[4] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Float_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Resources::SystemFileSource_typeof();
    ::TYPES[7] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetDependencies(
        ::g::Fuse::Internal::iOSSystemFont_typeof());
    type->SetFields(0,
        ::TYPES[3/*Uno.Collections.Dictionary<Fuse.Internal.FontFaceDescriptor, Uno.Collections.Dictionary<float, ObjC.Object>>*/], (uintptr_t)&FontCache::_cache_, uFieldFlagsStatic);
}

uClassType* FontCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FontCache", options);
    type->fp_build_ = FontCache_build;
    type->fp_cctor_ = FontCache__cctor__fn;
    return type;
}

// private static string BundleFilePath(string resource)
void FontCache__BundleFilePath_fn(uString* resource, uString** __retval)
{
    *__retval = FontCache::BundleFilePath(resource);
}

// public static ObjC.Object Get(Fuse.Internal.FontFaceDescriptor descriptor, float size)
void FontCache__Get_fn(::g::Fuse::Internal::FontFaceDescriptor* descriptor, float* size, ::g::ObjC::Object** __retval)
{
    *__retval = FontCache::Get(descriptor, *size);
}

// private static string GetOptionalPath(Uno.UX.FileSource fileSource)
void FontCache__GetOptionalPath_fn(::g::Uno::UX::FileSource* fileSource, uString** __retval)
{
    *__retval = FontCache::GetOptionalPath(fileSource);
}

// private static ObjC.Object UIFontWithDescriptorAndSize(ObjC.Object descriptor, float size)
void FontCache__UIFontWithDescriptorAndSize_fn(::g::ObjC::Object* descriptor, float* size, ::g::ObjC::Object** __retval)
{
    *__retval = FontCache::UIFontWithDescriptorAndSize(descriptor, *size);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FontCache::_cache_;

// private static string BundleFilePath(string resource) [static]
uString* FontCache::BundleFilePath(uString* resource)
{
    FontCache_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::NSString* resource) -> ::NSString*
        {
            return [[NSBundle bundleForClass:[StrongUnoObject class]] pathForResource:resource ofType:nil];
        } (::uObjC::NativeString(resource)));
        
    }
    
}

// public static ObjC.Object Get(Fuse.Internal.FontFaceDescriptor descriptor, float size) [static]
::g::ObjC::Object* FontCache::Get(::g::Fuse::Internal::FontFaceDescriptor* descriptor, float size)
{
    uStackFrame __("Fuse.Controls.Native.iOS.FontCache", "Get(Fuse.Internal.FontFaceDescriptor,float)");
    FontCache_typeof()->Init();
    bool ret1;
    bool ret2;
    ::g::Uno::Collections::Dictionary* sizeDict;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(FontCache::_cache_), descriptor, (void**)(&sizeDict), &ret1), ret1))
    {
        ::g::ObjC::Object* result;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(sizeDict), uCRef(size), (void**)(&result), &ret2), ret2))
            return result;
    }
    else
    {
        sizeDict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[4/*Uno.Collections.Dictionary<float, ObjC.Object>*/]);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(FontCache::_cache_), descriptor, sizeDict);
    }

    ::g::ObjC::Object* uifont;
    uString* path = FontCache::GetOptionalPath(uPtr(descriptor)->FileSource);

    if (::g::Uno::String::op_Inequality(path, NULL))
    {
        ::g::ObjC::Object* uifontdescriptor = ::g::Fuse::Internal::iOSSystemFont::GetMatchingUIFontDescriptor(path, uPtr(descriptor)->Index, uDelegate::New(::TYPES[5/*Uno.Predicate<string>*/], (void*)::g::Fuse::Internal::FontFaceDescriptor__Match_fn, uPtr(descriptor)));
        uifont = FontCache::UIFontWithDescriptorAndSize(uifontdescriptor, size);
    }
    else
    {
        path = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(2), ::STRINGS[3/*"/tempFont"*/]), uBox<int32_t>(::g::Uno::Int_typeof(), ::g::Uno::Object::GetHashCode(uPtr(uPtr(descriptor)->FileSource))));
        ::g::Uno::IO::File::WriteAllBytes(path, uPtr(descriptor->FileSource)->ReadAllBytes());
        ::g::ObjC::Object* uifontdescriptor1 = ::g::Fuse::Internal::iOSSystemFont::GetMatchingUIFontDescriptor(path, descriptor->Index, uDelegate::New(::TYPES[5/*Uno.Predicate<string>*/], (void*)::g::Fuse::Internal::FontFaceDescriptor__Match_fn, descriptor));
        uifont = FontCache::UIFontWithDescriptorAndSize(uifontdescriptor1, size);
        ::g::Uno::IO::File::Delete(path);
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(sizeDict), uCRef(size), uifont);
    return uifont;
}

// private static string GetOptionalPath(Uno.UX.FileSource fileSource) [static]
uString* FontCache::GetOptionalPath(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.Controls.Native.iOS.FontCache", "GetOptionalPath(Uno.UX.FileSource)");
    FontCache_typeof()->Init();

    if (uIs(fileSource, ::TYPES[6/*Fuse.Resources.SystemFileSource*/]))
        return uPtr(fileSource)->Name;
    else if (uIs(fileSource, ::TYPES[7/*Uno.UX.BundleFileSource*/]))
    {
        ::g::Uno::IO::BundleFile* bundleFile = uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[7/*Uno.UX.BundleFileSource*/]))->BundleFile;
        return FontCache::BundleFilePath(::g::Uno::String::op_Addition2(::STRINGS[4/*"data/"*/], uPtr(bundleFile)->BundlePath()));
    }

    return NULL;
}

// private static ObjC.Object UIFontWithDescriptorAndSize(ObjC.Object descriptor, float size) [static]
::g::ObjC::Object* FontCache::UIFontWithDescriptorAndSize(::g::ObjC::Object* descriptor, float size)
{
    FontCache_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id descriptor, float size) -> ::id
        {
            return [::UIFont fontWithDescriptor:(::UIFontDescriptor*)descriptor size:size];
        } (::g::ObjC::Object::GetHandle(descriptor), size));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/GraphicsView.uno
// ------------------------------------------------------------------------------

// public sealed extern class GraphicsView
// {
static void GraphicsView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(GraphicsView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(GraphicsView_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(GraphicsView_type, interface2),
        ::g::Fuse::Controls::Native::IViewHost_typeof(), offsetof(GraphicsView_type, interface3));
    type->SetFields(10,
        ::g::Fuse::Visual_typeof(), offsetof(GraphicsView, _visual), 0,
        ::g::ObjC::Object_typeof(), offsetof(GraphicsView, _glkViewHandle), 0,
        ::g::ObjC::Object_typeof(), offsetof(GraphicsView, _hitSurface), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsView__New3_fn, 0, true, type, 1, ::g::Fuse::Visual_typeof()));
}

GraphicsView_type* GraphicsView_typeof()
{
    static uSStrong<GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(GraphicsView_type);
    type = (GraphicsView_type*)uClassType::New("Fuse.Controls.Native.iOS.GraphicsView", options);
    type->fp_build_ = GraphicsView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))GraphicsView__Dispose_fn;
    type->fp_get_HitTestHandle = (void(*)(::g::Fuse::Controls::Native::ViewHandle*, ::g::ObjC::Object**))GraphicsView__get_HitTestHandle_fn;
    type->interface3.fp_Insert = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))GraphicsView__FuseControlsNativeIViewHostInsert_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))GraphicsView__FuseControlsNativeIViewHostRemove_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))GraphicsView__FuseControlsNativeIGraphicsViewBeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))GraphicsView__FuseControlsNativeIGraphicsViewEndDraw_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))GraphicsView__Dispose_fn;
    return type;
}

// public GraphicsView(Fuse.Visual visual)
void GraphicsView__ctor_4_fn(GraphicsView* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(visual);
}

// private static bool BeginDraw(ObjC.Object handle, int x, int y)
void GraphicsView__BeginDraw_fn(::g::ObjC::Object* handle, int32_t* x, int32_t* y, bool* __retval)
{
    *__retval = GraphicsView::BeginDraw(handle, *x, *y);
}

// private static ObjC.Object CreateContainer()
void GraphicsView__CreateContainer_fn(::g::ObjC::Object** __retval)
{
    *__retval = GraphicsView::CreateContainer();
}

// private static ObjC.Object CreateGlkView(ObjC.Object container)
void GraphicsView__CreateGlkView_fn(::g::ObjC::Object* container, ::g::ObjC::Object** __retval)
{
    *__retval = GraphicsView::CreateGlkView(container);
}

// private static ObjC.Object CreateHitSurface(ObjC.Object container)
void GraphicsView__CreateHitSurface_fn(::g::ObjC::Object* container, ::g::ObjC::Object** __retval)
{
    *__retval = GraphicsView::CreateHitSurface(container);
}

// private static void DeleteDrawable(ObjC.Object handle)
void GraphicsView__DeleteDrawable_fn(::g::ObjC::Object* handle)
{
    GraphicsView::DeleteDrawable(handle);
}

// public override sealed void Dispose()
void GraphicsView__Dispose_fn(GraphicsView* __this)
{
    __this->_visual = NULL;
    GraphicsView::DeleteDrawable(__this->_glkViewHandle);
    __this->_hitSurface = NULL;
    __this->_glkViewHandle = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static void EndDraw(ObjC.Object handle)
void GraphicsView__EndDraw_fn(::g::ObjC::Object* handle)
{
    GraphicsView::EndDraw(handle);
}

// private bool Fuse.Controls.Native.IGraphicsView.BeginDraw(int2 size)
void GraphicsView__FuseControlsNativeIGraphicsViewBeginDraw_fn(GraphicsView* __this, ::g::Uno::Int2* size, bool* __retval)
{
    ::g::Uno::Int2 size_ = *size;
    return *__retval = GraphicsView::BeginDraw(__this->_glkViewHandle, size_.X, size_.Y), void();
}

// private void Fuse.Controls.Native.IGraphicsView.EndDraw()
void GraphicsView__FuseControlsNativeIGraphicsViewEndDraw_fn(GraphicsView* __this)
{
    GraphicsView::EndDraw(__this->_glkViewHandle);
}

// private void Fuse.Controls.Native.IViewHost.Insert(Fuse.Controls.Native.ViewHandle child)
void GraphicsView__FuseControlsNativeIViewHostInsert_fn(GraphicsView* __this, ::g::Fuse::Controls::Native::ViewHandle* child)
{
    ::g::Fuse::Controls::Native::ViewHandle::New1(__this->_hitSurface, 0)->InsertChild(child);
}

// private void Fuse.Controls.Native.IViewHost.Remove(Fuse.Controls.Native.ViewHandle child)
void GraphicsView__FuseControlsNativeIViewHostRemove_fn(GraphicsView* __this, ::g::Fuse::Controls::Native::ViewHandle* child)
{
    ::g::Fuse::Controls::Native::ViewHandle::New1(__this->_hitSurface, 0)->RemoveChild(child);
}

// public override sealed ObjC.Object get_HitTestHandle()
void GraphicsView__get_HitTestHandle_fn(GraphicsView* __this, ::g::ObjC::Object** __retval)
{
    return *__retval = __this->_hitSurface, void();
}

// public GraphicsView New(Fuse.Visual visual)
void GraphicsView__New3_fn(::g::Fuse::Visual* visual, GraphicsView** __retval)
{
    *__retval = GraphicsView::New3(visual);
}

// public GraphicsView(Fuse.Visual visual) [instance]
void GraphicsView::ctor_4(::g::Fuse::Visual* visual)
{
    ctor_2(GraphicsView::CreateContainer(), 0);
    _glkViewHandle = GraphicsView::CreateGlkView(NativeHandle);
    _hitSurface = GraphicsView::CreateHitSurface(NativeHandle);
    _visual = visual;
}

// private static bool BeginDraw(ObjC.Object handle, int x, int y) [static]
bool GraphicsView::BeginDraw(::g::ObjC::Object* handle, int32_t x, int32_t y)
{
    @autoreleasepool
    {
        return [] (::id handle, int32_t x, int32_t y) -> bool
        {
            if (x < 1 || y < 1)
            	return false;
            
            GLKView* glkView = (GLKView*)handle;
            EAGLContext* ctx = [[uContext sharedContext] glContext];
            
            [glkView setContext:ctx];
            [glkView bindDrawable];
            
            int w = (int)[glkView drawableWidth];
            int h = (int)[glkView drawableHeight];
            
            if (w < 1 || h < 1)
            {
            	// throw or something
            }
            
            return true;
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// private static ObjC.Object CreateContainer() [static]
::g::ObjC::Object* GraphicsView::CreateContainer()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIView* view = [[UIView alloc] init];
            return view;
        } ());
        
    }
    
}

// private static ObjC.Object CreateGlkView(ObjC.Object container) [static]
::g::ObjC::Object* GraphicsView::CreateGlkView(::g::ObjC::Object* container)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id container) -> ::id
        {
            UIView* c = (UIView*)container;
            GLKView* view = [[GLKView alloc] init];
            view.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
            [[view layer] setAnchorPoint: { 0.0f, 0.0f }];
            [view setBackgroundColor: [UIColor colorWithRed:0.0f green: 0.0f blue:0.0f alpha:0.0f]];
            [view setDrawableDepthFormat:GLKViewDrawableDepthFormat16];
            [view setEnableSetNeedsDisplay:true];
            [view setMultipleTouchEnabled:true];
            [c addSubview: view];
            return view;
        } (::g::ObjC::Object::GetHandle(container)));
        
    }
    
}

// private static ObjC.Object CreateHitSurface(ObjC.Object container) [static]
::g::ObjC::Object* GraphicsView::CreateHitSurface(::g::ObjC::Object* container)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id container) -> ::id
        {
            UIView* c = (UIView*)container;
            UIControl* control = [[UIControl alloc] init];
            control.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
            [[control layer] setAnchorPoint: { 0.0f, 0.0f }];
            [control setOpaque:false];
            [control setMultipleTouchEnabled:true];
            [c addSubview: control];
            [c bringSubviewToFront: control];
            return control;
        } (::g::ObjC::Object::GetHandle(container)));
        
    }
    
}

// private static void DeleteDrawable(ObjC.Object handle) [static]
void GraphicsView::DeleteDrawable(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            GLKView* glkView = (GLKView*)handle;
            [glkView deleteDrawable];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static void EndDraw(ObjC.Object handle) [static]
void GraphicsView::EndDraw(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            GLKView* glkView = (GLKView*)handle;
            [glkView display];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public GraphicsView New(Fuse.Visual visual) [static]
GraphicsView* GraphicsView::New3(::g::Fuse::Visual* visual)
{
    GraphicsView* obj1 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj1->ctor_4(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/ImageView.uno
// ---------------------------------------------------------------------------

// internal sealed extern class ImageView
// {
static void ImageView_build(uType* type)
{
    ::STRINGS[5] = uString::Const(" not supported in native context");
    ::TYPES[8] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[13] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[14] = ::g::ObjC::Object_typeof();
    type->SetDependencies(
        ::g::Fuse::Controls::Native::ImageLoader_typeof());
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(ImageView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ImageView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(ImageView_type, interface2),
        ::g::Fuse::Controls::Native::IImageView_typeof(), offsetof(ImageView_type, interface3));
    type->SetFields(10,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ImageView, _imageSource), 0,
        ::g::Uno::Float4_typeof(), offsetof(ImageView, _tintColor), 0,
        ::TYPES[14/*ObjC.Object*/], offsetof(ImageView, _uiImageView), 0,
        ::TYPES[14/*ObjC.Object*/], offsetof(ImageView, _uiImageHandle), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(ImageView, _imageHandle), 0);
}

ImageView_type* ImageView_typeof()
{
    static uSStrong<ImageView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ImageView);
    options.TypeSize = sizeof(ImageView_type);
    type = (ImageView_type*)uClassType::New("Fuse.Controls.Native.iOS.ImageView", options);
    type->fp_build_ = ImageView_build;
    type->fp_ctor_ = (void*)ImageView__New3_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ImageView__Dispose_fn;
    type->interface3.fp_UpdateImageTransform = (void(*)(uObject*, float*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*))ImageView__UpdateImageTransform_fn;
    type->interface3.fp_set_ImageSource = (void(*)(uObject*, ::g::Fuse::Resources::ImageSource*))ImageView__set_ImageSource_fn;
    type->interface3.fp_set_TintColor = (void(*)(uObject*, ::g::Uno::Float4*))ImageView__set_TintColor_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageView__Dispose_fn;
    return type;
}

// public ImageView()
void ImageView__ctor_5_fn(ImageView* __this)
{
    __this->ctor_5();
}

// private static void ClearImage(ObjC.Object imageViewHandle)
void ImageView__ClearImage_fn(::g::ObjC::Object* imageViewHandle)
{
    ImageView::ClearImage(imageViewHandle);
}

// private static ObjC.Object Create()
void ImageView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = ImageView::Create();
}

// private static ObjC.Object CreateImageView(ObjC.Object container)
void ImageView__CreateImageView_fn(::g::ObjC::Object* container, ::g::ObjC::Object** __retval)
{
    *__retval = ImageView::CreateImageView(container);
}

// public override sealed void Dispose()
void ImageView__Dispose_fn(ImageView* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "Dispose()");
    __this->ImageHandle(NULL);

    if ((__this->ImageSource() != NULL) && uIs((::g::Fuse::Resources::ImageSource*)__this->ImageSource(), ::TYPES[8/*Fuse.Resources.MultiDensityImageSource*/]))
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(__this->ImageSource(), ::TYPES[8/*Fuse.Resources.MultiDensityImageSource*/]))->remove_ActiveChanged(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, __this));

    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static float GetImageHeight(ObjC.Object handle)
void ImageView__GetImageHeight_fn(::g::ObjC::Object* handle, float* __retval)
{
    *__retval = ImageView::GetImageHeight(handle);
}

// private float2 GetImageSize()
void ImageView__GetImageSize_fn(ImageView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetImageSize();
}

// private static float GetImageWidth(ObjC.Object handle)
void ImageView__GetImageWidth_fn(::g::ObjC::Object* handle, float* __retval)
{
    *__retval = ImageView::GetImageWidth(handle);
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value)
void ImageView__set_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* value)
{
    __this->ImageHandle(value);
}

// private Fuse.Resources.ImageSource get_ImageSource()
void ImageView__get_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->ImageSource();
}

// public void set_ImageSource(Fuse.Resources.ImageSource value)
void ImageView__set_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->ImageSource(value);
}

// public ImageView New()
void ImageView__New3_fn(ImageView** __retval)
{
    *__retval = ImageView::New3();
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle)
void ImageView__OnImageLoaded_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* handle)
{
    __this->OnImageLoaded(handle);
}

// private void OnImageLoadFailed(Uno.Exception e)
void ImageView__OnImageLoadFailed_fn(ImageView* __this, ::g::Uno::Exception* e)
{
    __this->OnImageLoadFailed(e);
}

// private void OnMultiDensityImageSourceActiveChanged()
void ImageView__OnMultiDensityImageSourceActiveChanged_fn(ImageView* __this)
{
    __this->OnMultiDensityImageSourceActiveChanged();
}

// private static void SetAnchorPoint(ObjC.Object handle)
void ImageView__SetAnchorPoint_fn(::g::ObjC::Object* handle)
{
    ImageView::SetAnchorPoint(handle);
}

// private static void SetBounds(ObjC.Object handle, float x, float y, float w, float h)
void ImageView__SetBounds_fn(::g::ObjC::Object* handle, float* x, float* y, float* w, float* h)
{
    ImageView::SetBounds(handle, *x, *y, *w, *h);
}

// private static void SetImage(ObjC.Object imageViewHandle, ObjC.Object uiImageHandle)
void ImageView__SetImage_fn(::g::ObjC::Object* imageViewHandle, ::g::ObjC::Object* uiImageHandle)
{
    ImageView::SetImage(imageViewHandle, uiImageHandle);
}

// private static void SetTransform(ObjC.Object handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
void ImageView__SetTransform2_fn(::g::ObjC::Object* handle, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44)
{
    ImageView::SetTransform2(handle, *m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// private static void SetTransform(ObjC.Object handle, float4x4 t)
void ImageView__SetTransform3_fn(::g::ObjC::Object* handle, ::g::Uno::Float4x4* t)
{
    ImageView::SetTransform3(handle, *t);
}

// public void set_TintColor(float4 value)
void ImageView__set_TintColor_fn(ImageView* __this, ::g::Uno::Float4* value)
{
    __this->TintColor(*value);
}

// private static ObjC.Object TintImage(ObjC.Object handle, float r, float g, float b, float a)
void ImageView__TintImage_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a, ::g::ObjC::Object** __retval)
{
    *__retval = ImageView::TintImage(handle, *r, *g, *b, *a);
}

// private void UpdateImage()
void ImageView__UpdateImage_fn(ImageView* __this)
{
    __this->UpdateImage();
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource)
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    __this->UpdateImage1(fileImageSource);
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http)
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http)
{
    __this->UpdateImage2(http);
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi)
void ImageView__UpdateImage3_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    __this->UpdateImage3(multi);
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize)
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize)
{
    __this->UpdateImageTransform(*density, *origin, *scale, *drawSize);
}

// public ImageView() [instance]
void ImageView::ctor_5()
{
    _tintColor = ::g::Uno::Float4__New1(1.0f);
    ctor_4(ImageView::Create());
    _uiImageView = ImageView::CreateImageView(Handle());
    ImageView::SetAnchorPoint(_uiImageView);
}

// private float2 GetImageSize() [instance]
::g::Uno::Float2 ImageView::GetImageSize()
{
    return ::g::Uno::Float2__New2(ImageView::GetImageWidth(_uiImageView), ImageView::GetImageHeight(_uiImageView));
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) [instance]
void ImageView::ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "set_ImageHandle(Fuse.Controls.Native.ImageHandle)");

    if (_imageHandle != NULL)
    {
        ImageView::ClearImage(_uiImageView);
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_imageHandle), ::TYPES[2/*Uno.IDisposable*/]));
        _imageHandle = NULL;
    }

    _imageHandle = (uObject*)value;

    if (_imageHandle != NULL)
    {
        _uiImageHandle = uCast< ::g::ObjC::Object*>(uPtr(value)->Handle(), ::TYPES[14/*ObjC.Object*/]);
        UpdateImage();
    }
}

// private Fuse.Resources.ImageSource get_ImageSource() [instance]
::g::Fuse::Resources::ImageSource* ImageView::ImageSource()
{
    return _imageSource;
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) [instance]
void ImageView::ImageSource(::g::Fuse::Resources::ImageSource* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "set_ImageSource(Fuse.Resources.ImageSource)");

    if (uIs((::g::Fuse::Resources::ImageSource*)ImageSource(), ::TYPES[8/*Fuse.Resources.MultiDensityImageSource*/]))
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[8/*Fuse.Resources.MultiDensityImageSource*/]))->remove_ActiveChanged(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, this));

    _imageSource = value;

    if (value == NULL)
        return;

    if (uIs(value, ::TYPES[12/*Fuse.Resources.FileImageSource*/]))
        UpdateImage1(uCast< ::g::Fuse::Resources::FileImageSource*>(value, ::TYPES[12/*Fuse.Resources.FileImageSource*/]));
    else if (uIs(value, ::TYPES[13/*Fuse.Resources.HttpImageSource*/]))
        UpdateImage2(uCast< ::g::Fuse::Resources::HttpImageSource*>(value, ::TYPES[13/*Fuse.Resources.HttpImageSource*/]));
    else if (uIs(value, ::TYPES[8/*Fuse.Resources.MultiDensityImageSource*/]))
    {
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[8/*Fuse.Resources.MultiDensityImageSource*/]))->add_ActiveChanged(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, this));
        UpdateImage3(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(value, ::TYPES[8/*Fuse.Resources.MultiDensityImageSource*/]));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(value, ::STRINGS[5/*" not suppor...*/])));
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) [instance]
void ImageView::OnImageLoaded(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "OnImageLoaded(Fuse.Controls.Native.ImageHandle)");
    ImageHandle(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) [instance]
void ImageView::OnImageLoadFailed(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "OnImageLoadFailed(Uno.Exception)");
    ImageHandle(NULL);
}

// private void OnMultiDensityImageSourceActiveChanged() [instance]
void ImageView::OnMultiDensityImageSourceActiveChanged()
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "OnMultiDensityImageSourceActiveChanged()");

    if (uIs((::g::Fuse::Resources::ImageSource*)ImageSource(), ::TYPES[8/*Fuse.Resources.MultiDensityImageSource*/]))
        UpdateImage3(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[8/*Fuse.Resources.MultiDensityImageSource*/]));
}

// public void set_TintColor(float4 value) [instance]
void ImageView::TintColor(::g::Uno::Float4 value)
{
    _tintColor = value;
    UpdateImage();
}

// private void UpdateImage() [instance]
void ImageView::UpdateImage()
{
    ::g::Uno::Float4 c = _tintColor;
    ::g::ObjC::Object* imageHandle = (_uiImageHandle != NULL) ? (::g::ObjC::Object*)ImageView::TintImage(_uiImageHandle, c.X, c.Y, c.Z, c.W) : NULL;
    ImageView::SetImage(_uiImageView, imageHandle);
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) [instance]
void ImageView::UpdateImage1(::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "UpdateImage(Fuse.Resources.FileImageSource)");
    ImageHandle(::g::Fuse::Controls::Native::ImageLoader::Load3(uPtr(fileImageSource)->File()));
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) [instance]
void ImageView::UpdateImage2(::g::Fuse::Resources::HttpImageSource* http)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "UpdateImage(Fuse.Resources.HttpImageSource)");
    uPtr(::g::Fuse::Controls::Native::ImageLoader::Load(http))->Then1(uDelegate::New(::TYPES[10/*Uno.Action<Fuse.Controls.Native.ImageHandle>*/], (void*)ImageView__OnImageLoaded_fn, this), uDelegate::New(::TYPES[11/*Uno.Action<Uno.Exception>*/], (void*)ImageView__OnImageLoadFailed_fn, this));
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) [instance]
void ImageView::UpdateImage3(::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "UpdateImage(Fuse.Resources.MultiDensityImageSource)");
    ::g::Fuse::Resources::ImageSource* active = uPtr(multi)->Active();

    if (active != NULL)
    {
        if (uIs(active, ::TYPES[12/*Fuse.Resources.FileImageSource*/]))
            UpdateImage1(uCast< ::g::Fuse::Resources::FileImageSource*>(active, ::TYPES[12/*Fuse.Resources.FileImageSource*/]));
        else if (uIs(active, ::TYPES[13/*Fuse.Resources.HttpImageSource*/]))
            UpdateImage2(uCast< ::g::Fuse::Resources::HttpImageSource*>(active, ::TYPES[13/*Fuse.Resources.HttpImageSource*/]));
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(active, ::STRINGS[5/*" not suppor...*/])));
    }
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) [instance]
void ImageView::UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize)
{
    ImageView::SetTransform3(_uiImageView, ::g::Uno::Float4x4__Identity());
    ::g::Uno::Float2 imageSize = GetImageSize();
    ImageView::SetBounds(_uiImageView, 0.0f, 0.0f, imageSize.X, imageSize.Y);
    ::g::Uno::Float4x4 imageTransform = ::g::Uno::Matrix::Compose(::g::Uno::Float3__New4(scale, 0.0f), ::g::Uno::Float4__Identity(), ::g::Uno::Float3__New4(origin, 0.0f));
    ImageView::SetTransform3(_uiImageView, imageTransform);
}

// private static void ClearImage(ObjC.Object imageViewHandle) [static]
void ImageView::ClearImage(::g::ObjC::Object* imageViewHandle)
{
    @autoreleasepool
    {
        [] (::id imageViewHandle) -> void
        {
            UIImageView* imageView = (UIImageView*)imageViewHandle;
            [imageView setImage:nil];
        } (::g::ObjC::Object::GetHandle(imageViewHandle));
        
    }
    
}

// private static ObjC.Object Create() [static]
::g::ObjC::Object* ImageView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIControl* uicontrol = [[UIControl alloc] init];
            [uicontrol setMultipleTouchEnabled:true];
            [uicontrol setAutoresizesSubviews:false];
            [uicontrol setTranslatesAutoresizingMaskIntoConstraints:false];
            [uicontrol setClipsToBounds:true];
            return uicontrol;
        } ());
        
    }
    
}

// private static ObjC.Object CreateImageView(ObjC.Object container) [static]
::g::ObjC::Object* ImageView::CreateImageView(::g::ObjC::Object* container)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id container) -> ::id
        {
            UIImageView* imageView = [[UIImageView alloc] init];
            [container addSubview:imageView];
            return imageView;
        } (::g::ObjC::Object::GetHandle(container)));
        
    }
    
}

// private static float GetImageHeight(ObjC.Object handle) [static]
float ImageView::GetImageHeight(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> float
        {
            UIImageView* imageView = (UIImageView*)handle;
            return (imageView.image)
            	? (float)imageView.image.size.height
            	: 0.0f;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static float GetImageWidth(ObjC.Object handle) [static]
float ImageView::GetImageWidth(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> float
        {
            UIImageView* imageView = (UIImageView*)handle;
            return (imageView.image)
            	? (float)imageView.image.size.width
            	: 0.0f;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public ImageView New() [static]
ImageView* ImageView::New3()
{
    ImageView* obj1 = (ImageView*)uNew(ImageView_typeof());
    obj1->ctor_5();
    return obj1;
}

// private static void SetAnchorPoint(ObjC.Object handle) [static]
void ImageView::SetAnchorPoint(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [[view layer] setAnchorPoint: { 0.0f, 0.0f }];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static void SetBounds(ObjC.Object handle, float x, float y, float w, float h) [static]
void ImageView::SetBounds(::g::ObjC::Object* handle, float x, float y, float w, float h)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y, float w, float h) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [view setBounds: { { x, y }, { w, h } }];
        } (::g::ObjC::Object::GetHandle(handle), x, y, w, h);
        
    }
    
}

// private static void SetImage(ObjC.Object imageViewHandle, ObjC.Object uiImageHandle) [static]
void ImageView::SetImage(::g::ObjC::Object* imageViewHandle, ::g::ObjC::Object* uiImageHandle)
{
    @autoreleasepool
    {
        [] (::id imageViewHandle, ::id uiImageHandle) -> void
        {
            UIImageView* imageView = (UIImageView*)imageViewHandle;
            UIImage* image = (UIImage*)uiImageHandle;
            [imageView setImage:image];
        } (::g::ObjC::Object::GetHandle(imageViewHandle), ::g::ObjC::Object::GetHandle(uiImageHandle));
        
    }
    
}

// private static void SetTransform(ObjC.Object handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [static]
void ImageView::SetTransform2(::g::ObjC::Object* handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    @autoreleasepool
    {
        [] (::id handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) -> void
        {
            CATransform3D transform = {
            	m11, m12, m13, m14,
            	m21, m22, m23, m24,
            	m31, m32, m33, m34,
            	m41, m42, m43, m44
            };
            ::UIView* view = (::UIView*)handle;
            [[view layer] setTransform:transform];
        } (::g::ObjC::Object::GetHandle(handle), m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
        
    }
    
}

// private static void SetTransform(ObjC.Object handle, float4x4 t) [static]
void ImageView::SetTransform3(::g::ObjC::Object* handle, ::g::Uno::Float4x4 t)
{
    ImageView::SetTransform2(handle, t.M11, t.M12, t.M13, t.M14, t.M21, t.M22, t.M23, t.M24, t.M31, t.M32, t.M33, t.M34, t.M41, t.M42, t.M43, t.M44);
}

// private static ObjC.Object TintImage(ObjC.Object handle, float r, float g, float b, float a) [static]
::g::ObjC::Object* ImageView::TintImage(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, float r, float g, float b, float a) -> ::id
        {
            UIImage* image = (UIImage*)handle;
            UIGraphicsBeginImageContextWithOptions(image.size, NO, image.scale);
            CGRect imageRect = CGRectMake(0.0f, 0.0f, image.size.width, image.size.height);
            CGContextRef ctx = UIGraphicsGetCurrentContext();
            [[UIColor colorWithRed:r green:g blue:b alpha:a] setFill];
            CGContextTranslateCTM(ctx, 0, image.size.height);
            CGContextScaleCTM(ctx, 1.0, -1.0);
            CGContextSetBlendMode(ctx, kCGBlendModeMultiply);
            CGContextDrawImage(ctx, imageRect, image.CGImage);
            CGContextClipToMask(ctx, imageRect, image.CGImage);
            CGContextAddRect(ctx, imageRect);
            CGContextDrawPath(ctx, kCGPathFill);
            UIImage* result = UIGraphicsGetImageFromCurrentImageContext();
            UIGraphicsEndImageContext();
            return result;
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/InputDispatch.uno
// -------------------------------------------------------------------------------

// internal static extern class InputDispatch
// {
// static generated InputDispatch()
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_activePointers_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::TYPES[14/*ObjC.Object*/], NULL)));
}

static void InputDispatch_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Input::Pointer_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::ObjC::Object_typeof(), NULL), (uintptr_t)&InputDispatch::_activePointers_, uFieldFlagsStatic);
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.InputDispatch", options);
    type->fp_build_ = InputDispatch_build;
    type->fp_cctor_ = InputDispatch__cctor__fn;
    return type;
}

// public static void AddInputHandler(Fuse.Visual owner, Fuse.Controls.Native.ViewHandle viewHandle)
void InputDispatch__AddInputHandler_fn(::g::Fuse::Visual* owner, ::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch::AddInputHandler(owner, viewHandle);
}

// private static bool CompareUITouch(ObjC.Object a, ObjC.Object b)
void InputDispatch__CompareUITouch_fn(::g::ObjC::Object* a, ::g::ObjC::Object* b, bool* __retval)
{
    *__retval = InputDispatch::CompareUITouch(a, b);
}

// private static void DeactivateTouch(ObjC.Object uiTouch)
void InputDispatch__DeactivateTouch_fn(::g::ObjC::Object* uiTouch)
{
    InputDispatch::DeactivateTouch(uiTouch);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual)
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = InputDispatch::FindRoot(visual);
}

// private static int GetPointIndex(ObjC.Object uiTouch)
void InputDispatch__GetPointIndex_fn(::g::ObjC::Object* uiTouch, int32_t* __retval)
{
    *__retval = InputDispatch::GetPointIndex(uiTouch);
}

// private static Fuse.Controls.Native.iOS.InputDispatch.RootInfo GetRootInfo(Fuse.Visual origin)
void InputDispatch__GetRootInfo_fn(::g::Fuse::Visual* origin, InputDispatch__RootInfo* __retval)
{
    *__retval = InputDispatch::GetRootInfo(origin);
}

// private static double GetTimestamp(ObjC.Object uiTouch)
void InputDispatch__GetTimestamp_fn(::g::ObjC::Object* uiTouch, double* __retval)
{
    *__retval = InputDispatch::GetTimestamp(uiTouch);
}

// private static float2 GetWindowPoint(ObjC.Object uiTouch, ObjC.Object rootView)
void InputDispatch__GetWindowPoint_fn(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, ::g::Uno::Float2* __retval)
{
    *__retval = InputDispatch::GetWindowPoint(uiTouch, rootView);
}

// private static void GetWindowPoint(ObjC.Object uiTouch, ObjC.Object rootView, float& x, float& y)
void InputDispatch__GetWindowPoint1_fn(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, float* x, float* y)
{
    InputDispatch::GetWindowPoint1(uiTouch, rootView, x, y);
}

// private static Fuse.Input.PointerEventData[] MakePointerEventData(ObjC.Object touches, ObjC.Object rootView)
void InputDispatch__MakePointerEventData_fn(::g::ObjC::Object* touches, ::g::ObjC::Object* rootView, uArray** __retval)
{
    *__retval = InputDispatch::MakePointerEventData(touches, rootView);
}

// private static Fuse.Input.PointerEventData NewPointerEventData(ObjC.Object uiTouch, ObjC.Object rootView)
void InputDispatch__NewPointerEventData_fn(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, ::g::Fuse::Input::PointerEventData** __retval)
{
    *__retval = InputDispatch::NewPointerEventData(uiTouch, rootView);
}

// private static int NSArrayCount(ObjC.Object nsArray)
void InputDispatch__NSArrayCount_fn(::g::ObjC::Object* nsArray, int32_t* __retval)
{
    *__retval = InputDispatch::NSArrayCount(nsArray);
}

// private static ObjC.Object NSArrayObjectAtIndex(ObjC.Object nsArray, int index)
void InputDispatch__NSArrayObjectAtIndex_fn(::g::ObjC::Object* nsArray, int32_t* index, ::g::ObjC::Object** __retval)
{
    *__retval = InputDispatch::NSArrayObjectAtIndex(nsArray, *index);
}

// public static void OnTouchesBegan(Fuse.Visual origin, ObjC.Object touches)
void InputDispatch__OnTouchesBegan_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch::OnTouchesBegan(origin, touches);
}

// public static void OnTouchesCancelled(Fuse.Visual origin, ObjC.Object touches)
void InputDispatch__OnTouchesCancelled_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch::OnTouchesCancelled(origin, touches);
}

// public static void OnTouchesEnded(Fuse.Visual origin, ObjC.Object touches)
void InputDispatch__OnTouchesEnded_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch::OnTouchesEnded(origin, touches);
}

// public static void OnTouchesMoved(Fuse.Visual origin, ObjC.Object touches)
void InputDispatch__OnTouchesMoved_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch::OnTouchesMoved(origin, touches);
}

// private static void RaiseCancelled(Fuse.Visual visual, Fuse.Input.PointerEventData data)
void InputDispatch__RaiseCancelled_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseCancelled(visual, data);
}

// private static void RaiseMoved(Fuse.Visual root, Fuse.Input.PointerEventData data)
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(root, data);
}

// private static void RaisePressed(Fuse.Visual root, Fuse.Input.PointerEventData data)
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(root, data);
}

// private static void RaiseReleased(Fuse.Visual root, Fuse.Input.PointerEventData data)
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(root, data);
}

// public static void RemoveInputHandler(Fuse.Controls.Native.ViewHandle viewHandle)
void InputDispatch__RemoveInputHandler_fn(::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch::RemoveInputHandler(viewHandle);
}

uSStrong< ::g::Uno::Collections::List*> InputDispatch::_activePointers_;

// public static void AddInputHandler(Fuse.Visual owner, Fuse.Controls.Native.ViewHandle viewHandle) [static]
void InputDispatch::AddInputHandler(::g::Fuse::Visual* owner, ::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        [] (id<UnoObject> owner, id<UnoObject> viewHandle) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<::g::Fuse::Controls::Native::ViewHandle*>((viewHandle).unoObject, ::g::Fuse::Controls::Native::ViewHandle_typeof())->HitTestHandle()); }();
            addInputHandler(view, ^void(int type, id<UnoObject> visual, id touches) {
            	switch(type)
            	{
            		case EVENTTYPE_PRESSED:
            			[&]() -> void { ::uForeignPool __foreignPool; InputDispatch::OnTouchesBegan(uCast<::g::Fuse::Visual*>((visual).unoObject, ::g::Fuse::Visual_typeof()), ::g::ObjC::Object::Create(touches)); }();
            			break;
            		case EVENTTYPE_MOVED:
            			[&]() -> void { ::uForeignPool __foreignPool; InputDispatch::OnTouchesMoved(uCast<::g::Fuse::Visual*>((visual).unoObject, ::g::Fuse::Visual_typeof()), ::g::ObjC::Object::Create(touches)); }();
            			break;
            		case EVENTTYPE_RELEASED:
            			[&]() -> void { ::uForeignPool __foreignPool; InputDispatch::OnTouchesEnded(uCast<::g::Fuse::Visual*>((visual).unoObject, ::g::Fuse::Visual_typeof()), ::g::ObjC::Object::Create(touches)); }();
            			break;
            		case EVENTTYPE_CANCELLED:
            			[&]() -> void { ::uForeignPool __foreignPool; InputDispatch::OnTouchesCancelled(uCast<::g::Fuse::Visual*>((visual).unoObject, ::g::Fuse::Visual_typeof()), ::g::ObjC::Object::Create(touches)); }();
            			break;
            		default:
            			break;
            	}
            }, owner);
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: owner], [::StrongUnoObject strongUnoObjectWithUnoObject: viewHandle]);
        
    }
    
}

// private static bool CompareUITouch(ObjC.Object a, ObjC.Object b) [static]
bool InputDispatch::CompareUITouch(::g::ObjC::Object* a, ::g::ObjC::Object* b)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id a, ::id b) -> bool
        {
            return (UITouch*)a == (UITouch*)b;
        } (::g::ObjC::Object::GetHandle(a), ::g::ObjC::Object::GetHandle(b));
        
    }
    
}

// private static void DeactivateTouch(ObjC.Object uiTouch) [static]
void InputDispatch::DeactivateTouch(::g::ObjC::Object* uiTouch)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "DeactivateTouch(ObjC.Object)");
    InputDispatch_typeof()->Init();
    ::g::ObjC::Object* ret8;

    for (int32_t i = 0; i < uPtr(InputDispatch::_activePointers_)->Count(); i++)
        if (InputDispatch::CompareUITouch((::g::Uno::Collections::List__get_Item_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(i), &ret8), ret8), uiTouch))
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(i), NULL);
            return;
        }
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) [static]
::g::Fuse::Visual* InputDispatch::FindRoot(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "FindRoot(Fuse.Visual)");
    InputDispatch_typeof()->Init();
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)InputDispatch::FindRoot(uPtr(visual)->Parent()) : visual;
}

// private static int GetPointIndex(ObjC.Object uiTouch) [static]
int32_t InputDispatch::GetPointIndex(::g::ObjC::Object* uiTouch)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "GetPointIndex(ObjC.Object)");
    InputDispatch_typeof()->Init();
    ::g::ObjC::Object* ret9;
    int32_t firstUnused = -1;

    for (int32_t i = 0; i < uPtr(InputDispatch::_activePointers_)->Count(); ++i)
    {
        ::g::ObjC::Object* pointer = (::g::Uno::Collections::List__get_Item_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(i), &ret9), ret9);

        if (InputDispatch::CompareUITouch(pointer, NULL) && (firstUnused < 0))
            firstUnused = i;
        else if (InputDispatch::CompareUITouch(pointer, uiTouch))
            return i;
    }

    if (firstUnused < 0)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(InputDispatch::_activePointers_), uiTouch);
        firstUnused = uPtr(InputDispatch::_activePointers_)->Count() - 1;
    }

    ::g::Uno::Collections::List__set_Item_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(firstUnused), uiTouch);
    return firstUnused;
}

// private static Fuse.Controls.Native.iOS.InputDispatch.RootInfo GetRootInfo(Fuse.Visual origin) [static]
InputDispatch__RootInfo InputDispatch::GetRootInfo(::g::Fuse::Visual* origin)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "GetRootInfo(Fuse.Visual)");
    InputDispatch_typeof()->Init();
    ::g::Fuse::Visual* rootVisual = InputDispatch::FindRoot(origin);
    ::g::ObjC::Object* rootView = NULL;
    ::g::Fuse::Controls::Native::NativeRootViewport* rootViewport = uAs< ::g::Fuse::Controls::Native::NativeRootViewport*>(rootVisual, ::g::Fuse::Controls::Native::NativeRootViewport_typeof());

    if (rootViewport != NULL)
        rootView = uPtr(uPtr(rootViewport)->RootView())->NativeHandle;

    return InputDispatch__RootInfo__New1(rootVisual, rootView);
}

// private static double GetTimestamp(ObjC.Object uiTouch) [static]
double InputDispatch::GetTimestamp(::g::ObjC::Object* uiTouch)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id uiTouch) -> double
        {
            ::UITouch* touch = (::UITouch*)uiTouch;
            return [touch timestamp];
        } (::g::ObjC::Object::GetHandle(uiTouch));
        
    }
    
}

// private static float2 GetWindowPoint(ObjC.Object uiTouch, ObjC.Object rootView) [static]
::g::Uno::Float2 InputDispatch::GetWindowPoint(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView)
{
    InputDispatch_typeof()->Init();
    float x;
    float y;
    InputDispatch::GetWindowPoint1(uiTouch, rootView, &x, &y);
    return ::g::Uno::Float2__New2(x, y);
}

// private static void GetWindowPoint(ObjC.Object uiTouch, ObjC.Object rootView, float& x, float& y) [static]
void InputDispatch::GetWindowPoint1(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, float* x, float* y)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        [] (::id uiTouch, ::id rootView, float* x, float* y) -> void
        {
            ::UITouch* touch = (::UITouch*)uiTouch;
            UIView* relativeView = (UIView*)rootView;
            UIWindow* window = [touch window];
            CGPoint location = [touch locationInView:window];
            CGPoint localLocation = [window convertPoint:location toView:relativeView];
            *x = (float)localLocation.x;
            *y = (float)localLocation.y;
        } (::g::ObjC::Object::GetHandle(uiTouch), ::g::ObjC::Object::GetHandle(rootView), x, y);
        
    }
    
}

// private static Fuse.Input.PointerEventData[] MakePointerEventData(ObjC.Object touches, ObjC.Object rootView) [static]
uArray* InputDispatch::MakePointerEventData(::g::ObjC::Object* touches, ::g::ObjC::Object* rootView)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "MakePointerEventData(ObjC.Object,ObjC.Object)");
    InputDispatch_typeof()->Init();
    int32_t count = InputDispatch::NSArrayCount(touches);
    uArray* data = uArray::New(::g::Fuse::Input::PointerEventData_typeof()->Array(), count);

    for (int32_t i = 0; i < count; i++)
        uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i) = InputDispatch::NewPointerEventData(InputDispatch::NSArrayObjectAtIndex(touches, i), rootView);

    return data;
}

// private static Fuse.Input.PointerEventData NewPointerEventData(ObjC.Object uiTouch, ObjC.Object rootView) [static]
::g::Fuse::Input::PointerEventData* InputDispatch::NewPointerEventData(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "NewPointerEventData(ObjC.Object,ObjC.Object)");
    InputDispatch_typeof()->Init();
    ::g::Fuse::Input::PointerEventData* collection7;
    int32_t pointIndex = InputDispatch::GetPointIndex(uiTouch);
    collection7 = ::g::Fuse::Input::PointerEventData::New1();
    uPtr(collection7)->PointIndex = pointIndex;
    uPtr(collection7)->WindowPoint = InputDispatch::GetWindowPoint(uiTouch, rootView);
    uPtr(collection7)->Timestamp = (InputDispatch::GetTimestamp(uiTouch) - ::g::Fuse::Time::FrameTimeBase());
    uPtr(collection7)->PointerType = 2;
    uPtr(collection7)->IsPrimary = (pointIndex == 0);
    return collection7;
}

// private static int NSArrayCount(ObjC.Object nsArray) [static]
int32_t InputDispatch::NSArrayCount(::g::ObjC::Object* nsArray)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id nsArray) -> int32_t
        {
            return (int)((NSArray*)nsArray).count;
        } (::g::ObjC::Object::GetHandle(nsArray));
        
    }
    
}

// private static ObjC.Object NSArrayObjectAtIndex(ObjC.Object nsArray, int index) [static]
::g::ObjC::Object* InputDispatch::NSArrayObjectAtIndex(::g::ObjC::Object* nsArray, int32_t index)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id nsArray, int32_t index) -> ::id
        {
            return [((NSArray*)nsArray) objectAtIndex:index];
        } (::g::ObjC::Object::GetHandle(nsArray), index));
        
    }
    
}

// public static void OnTouchesBegan(Fuse.Visual origin, ObjC.Object touches) [static]
void InputDispatch::OnTouchesBegan(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "OnTouchesBegan(Fuse.Visual,ObjC.Object)");
    InputDispatch_typeof()->Init();
    uArray* array1;
    int32_t index2;
    int32_t length3;
    InputDispatch__RootInfo rootInfo = InputDispatch::GetRootInfo(origin);

    for (array1 = InputDispatch::MakePointerEventData(touches, rootInfo.RootView), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Input::PointerEventData* data = uPtr(array1)->Strong< ::g::Fuse::Input::PointerEventData*>(index2);
        InputDispatch::RaisePressed(rootInfo.RootVisual, data);
    }
}

// public static void OnTouchesCancelled(Fuse.Visual origin, ObjC.Object touches) [static]
void InputDispatch::OnTouchesCancelled(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "OnTouchesCancelled(Fuse.Visual,ObjC.Object)");
    InputDispatch_typeof()->Init();
    InputDispatch__RootInfo rootInfo = InputDispatch::GetRootInfo(origin);
    int32_t count = InputDispatch::NSArrayCount(touches);

    for (int32_t i = 0; i < count; i++)
    {
        ::g::ObjC::Object* uiTouch = InputDispatch::NSArrayObjectAtIndex(touches, i);
        InputDispatch::RaiseCancelled(rootInfo.RootVisual, InputDispatch::NewPointerEventData(uiTouch, rootInfo.RootView));
        InputDispatch::DeactivateTouch(uiTouch);
    }
}

// public static void OnTouchesEnded(Fuse.Visual origin, ObjC.Object touches) [static]
void InputDispatch::OnTouchesEnded(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "OnTouchesEnded(Fuse.Visual,ObjC.Object)");
    InputDispatch_typeof()->Init();
    InputDispatch__RootInfo rootInfo = InputDispatch::GetRootInfo(origin);
    int32_t count = InputDispatch::NSArrayCount(touches);

    for (int32_t i = 0; i < count; i++)
    {
        ::g::ObjC::Object* uiTouch = InputDispatch::NSArrayObjectAtIndex(touches, i);
        InputDispatch::RaiseReleased(rootInfo.RootVisual, InputDispatch::NewPointerEventData(uiTouch, rootInfo.RootView));
        InputDispatch::DeactivateTouch(uiTouch);
    }
}

// public static void OnTouchesMoved(Fuse.Visual origin, ObjC.Object touches) [static]
void InputDispatch::OnTouchesMoved(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "OnTouchesMoved(Fuse.Visual,ObjC.Object)");
    InputDispatch_typeof()->Init();
    uArray* array4;
    int32_t index5;
    int32_t length6;
    InputDispatch__RootInfo rootInfo = InputDispatch::GetRootInfo(origin);

    for (array4 = InputDispatch::MakePointerEventData(touches, rootInfo.RootView), index5 = 0, length6 = uPtr(array4)->Length(); index5 < length6; ++index5)
    {
        ::g::Fuse::Input::PointerEventData* data = uPtr(array4)->Strong< ::g::Fuse::Input::PointerEventData*>(index5);
        InputDispatch::RaiseMoved(rootInfo.RootVisual, data);
    }
}

// private static void RaiseCancelled(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static]
void InputDispatch::RaiseCancelled(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RaiseCancelled(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        {
            ::g::Fuse::Input::Pointer::LoseCapture(uPtr(data)->PointIndex);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseMoved(Fuse.Visual root, Fuse.Input.PointerEventData data) [static]
void InputDispatch::RaiseMoved(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RaiseMoved(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        {
            bool args = ::g::Fuse::Input::Pointer::RaiseMoved(root, data);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Visual root, Fuse.Input.PointerEventData data) [static]
void InputDispatch::RaisePressed(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RaisePressed(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        {
            bool args = ::g::Fuse::Input::Pointer::RaisePressed(root, data);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Visual root, Fuse.Input.PointerEventData data) [static]
void InputDispatch::RaiseReleased(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RaiseReleased(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        {
            bool args = ::g::Fuse::Input::Pointer::RaiseReleased(root, data);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RemoveInputHandler(Fuse.Controls.Native.ViewHandle viewHandle) [static]
void InputDispatch::RemoveInputHandler(::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        [] (id<UnoObject> viewHandle) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<::g::Fuse::Controls::Native::ViewHandle*>((viewHandle).unoObject, ::g::Fuse::Controls::Native::ViewHandle_typeof())->HitTestHandle()); }();
            removeInputHandler(view);
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: viewHandle]);
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/iOSDevice.uno
// ---------------------------------------------------------------------------

// public static extern class iOSDevice
// {
static void iOSDevice_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Controls::Native::iOS::OSVersion_typeof(), (uintptr_t)&iOSDevice::_osVersion_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("CompensateForOrientation", NULL, (void*)iOSDevice__CompensateForOrientation_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("CompensateForOrientation", NULL, (void*)iOSDevice__CompensateForOrientation1_fn, 0, true, ::g::Uno::Rect_typeof(), 1, ::g::Uno::Rect_typeof()),
        new uFunction("get_OperatingSystemVersion", NULL, (void*)iOSDevice__get_OperatingSystemVersion_fn, 0, true, ::g::Fuse::Controls::Native::iOS::OSVersion_typeof(), 0),
        new uFunction("get_Orientation", NULL, (void*)iOSDevice__get_Orientation_fn, 0, true, iOSDevice__ScreenOrientation_typeof(), 0));
}

uClassType* iOSDevice_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.iOSDevice", options);
    type->fp_build_ = iOSDevice_build;
    return type;
}

// public static float2 CompensateForOrientation(float2 size)
void iOSDevice__CompensateForOrientation_fn(::g::Uno::Float2* size, ::g::Uno::Float2* __retval)
{
    *__retval = iOSDevice::CompensateForOrientation(*size);
}

// public static Uno.Rect CompensateForOrientation(Uno.Rect rect)
void iOSDevice__CompensateForOrientation1_fn(::g::Uno::Rect* rect, ::g::Uno::Rect* __retval)
{
    *__retval = iOSDevice::CompensateForOrientation1(*rect);
}

// private static bool IsLandscapeOrientation()
void iOSDevice__IsLandscapeOrientation_fn(bool* __retval)
{
    *__retval = iOSDevice::IsLandscapeOrientation();
}

// public static Fuse.Controls.Native.iOS.OSVersion get_OperatingSystemVersion()
void iOSDevice__get_OperatingSystemVersion_fn(::g::Fuse::Controls::Native::iOS::OSVersion** __retval)
{
    *__retval = iOSDevice::OperatingSystemVersion();
}

// public static Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation get_Orientation()
void iOSDevice__get_Orientation_fn(int32_t* __retval)
{
    *__retval = iOSDevice::Orientation();
}

uSStrong< ::g::Fuse::Controls::Native::iOS::OSVersion*> iOSDevice::_osVersion_;

// public static float2 CompensateForOrientation(float2 size) [static]
::g::Uno::Float2 iOSDevice::CompensateForOrientation(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.Controls.Native.iOS.iOSDevice", "CompensateForOrientation(float2)");
    return ((uPtr(iOSDevice::OperatingSystemVersion())->Major < 8) && (iOSDevice::Orientation() == 1)) ? ::g::Uno::Float2__New2(size.Y, size.X) : size;
}

// public static Uno.Rect CompensateForOrientation(Uno.Rect rect) [static]
::g::Uno::Rect iOSDevice::CompensateForOrientation1(::g::Uno::Rect rect)
{
    uStackFrame __("Fuse.Controls.Native.iOS.iOSDevice", "CompensateForOrientation(Uno.Rect)");
    ::g::Uno::Float2 ind1;
    ::g::Uno::Float2 ind2;
    return ((uPtr(iOSDevice::OperatingSystemVersion())->Major < 8) && (iOSDevice::Orientation() == 1)) ? ::g::Uno::Rect__New2((ind1 = rect.Position(), ::g::Uno::Float2__New2(ind1.Y, ind1.X)), (ind2 = rect.Size(), ::g::Uno::Float2__New2(ind2.Y, ind2.X))) : rect;
}

// private static bool IsLandscapeOrientation() [static]
bool iOSDevice::IsLandscapeOrientation()
{
    @autoreleasepool
    {
        UIInterfaceOrientation o = [[UIApplication sharedApplication] statusBarOrientation];
        return (o == UIInterfaceOrientationLandscapeLeft || o == UIInterfaceOrientationLandscapeRight);
    }
    
}

// public static Fuse.Controls.Native.iOS.OSVersion get_OperatingSystemVersion() [static]
::g::Fuse::Controls::Native::iOS::OSVersion* iOSDevice::OperatingSystemVersion()
{
    if (iOSDevice::_osVersion_ != NULL)
        return iOSDevice::_osVersion_;

    int32_t major = (int)[[NSProcessInfo processInfo] operatingSystemVersion].majorVersion;
    int32_t minor = (int)[[NSProcessInfo processInfo] operatingSystemVersion].minorVersion;
    int32_t patch = (int)[[NSProcessInfo processInfo] operatingSystemVersion].patchVersion;
    return iOSDevice::_osVersion_ = ::g::Fuse::Controls::Native::iOS::OSVersion::New1(major, minor, patch);
}

// public static Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation get_Orientation() [static]
int32_t iOSDevice::Orientation()
{
    return iOSDevice::IsLandscapeOrientation() ? 1 : 0;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/KeyboardView.uno
// ------------------------------------------------------------------------------

// internal sealed extern class KeyboardView
// {
static void KeyboardView_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Controls::Native::iOS::FocusHelpers_typeof());
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(KeyboardView, _handle), 0);
}

uType* KeyboardView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(KeyboardView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.KeyboardView", options);
    type->fp_build_ = KeyboardView_build;
    type->fp_ctor_ = (void*)KeyboardView__New1_fn;
    return type;
}

// public KeyboardView()
void KeyboardView__ctor__fn(KeyboardView* __this)
{
    __this->ctor_();
}

// private static void CopyKeyboardType(ObjC.Object handle, ObjC.Object source)
void KeyboardView__CopyKeyboardType_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* source)
{
    KeyboardView::CopyKeyboardType(handle, source);
}

// private static ObjC.Object Create()
void KeyboardView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = KeyboardView::Create();
}

// private static bool GetIsFocusable(ObjC.Object handle)
void KeyboardView__GetIsFocusable_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = KeyboardView::GetIsFocusable(handle);
}

// public ObjC.Object get_Handle()
void KeyboardView__get_Handle_fn(KeyboardView* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Handle();
}

// public void HideKeyboard()
void KeyboardView__HideKeyboard_fn(KeyboardView* __this)
{
    __this->HideKeyboard();
}

// public void HoldFocus(ObjC.Object focusedObject)
void KeyboardView__HoldFocus_fn(KeyboardView* __this, ::g::ObjC::Object* focusedObject)
{
    __this->HoldFocus(focusedObject);
}

// private bool get_IsFocusable()
void KeyboardView__get_IsFocusable_fn(KeyboardView* __this, bool* __retval)
{
    *__retval = __this->IsFocusable();
}

// private void set_IsFocusable(bool value)
void KeyboardView__set_IsFocusable_fn(KeyboardView* __this, bool* value)
{
    __this->IsFocusable(*value);
}

// public KeyboardView New()
void KeyboardView__New1_fn(KeyboardView** __retval)
{
    *__retval = KeyboardView::New1();
}

// private static void SetIsFocusable(ObjC.Object handle, bool value)
void KeyboardView__SetIsFocusable_fn(::g::ObjC::Object* handle, bool* value)
{
    KeyboardView::SetIsFocusable(handle, *value);
}

// public KeyboardView() [instance]
void KeyboardView::ctor_()
{
    _handle = KeyboardView::Create();
}

// public ObjC.Object get_Handle() [instance]
::g::ObjC::Object* KeyboardView::Handle()
{
    return _handle;
}

// public void HideKeyboard() [instance]
void KeyboardView::HideKeyboard()
{
    if (::g::Fuse::Controls::Native::iOS::FocusHelpers::IsFirstResponder(_handle))
        ::g::Fuse::Controls::Native::iOS::FocusHelpers::ResignFirstResponder(_handle);
}

// public void HoldFocus(ObjC.Object focusedObject) [instance]
void KeyboardView::HoldFocus(::g::ObjC::Object* focusedObject)
{
    KeyboardView::CopyKeyboardType(Handle(), focusedObject);
    IsFocusable(true);
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::BecomeFirstResponder(Handle());
    IsFocusable(false);
}

// private bool get_IsFocusable() [instance]
bool KeyboardView::IsFocusable()
{
    return KeyboardView::GetIsFocusable(_handle);
}

// private void set_IsFocusable(bool value) [instance]
void KeyboardView::IsFocusable(bool value)
{
    KeyboardView::SetIsFocusable(_handle, value);
}

// private static void CopyKeyboardType(ObjC.Object handle, ObjC.Object source) [static]
void KeyboardView::CopyKeyboardType(::g::ObjC::Object* handle, ::g::ObjC::Object* source)
{
    @autoreleasepool
    {
        [] (::id handle, ::id source) -> void
        {
            ::KeyboardView* kv = (::KeyboardView*)handle;
            
            if (source != nil && [source isKindOfClass: [NSObject<UIKeyInput> class]])
            {
            	[kv setKeyboardType: [((NSObject<UIKeyInput>*)source) keyboardType]];
            	[kv setReturnKeyType: [((NSObject<UIKeyInput>*)source) returnKeyType]];
            }
            else
            {
            	[kv setKeyboardType: UIKeyboardTypeDefault];
            	[kv setReturnKeyType:UIReturnKeyDefault];
            }
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(source));
        
    }
    
}

// private static ObjC.Object Create() [static]
::g::ObjC::Object* KeyboardView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return [[::KeyboardView alloc] init];
        } ());
        
    }
    
}

// private static bool GetIsFocusable(ObjC.Object handle) [static]
bool KeyboardView::GetIsFocusable(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            return [handle isFocusable];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public KeyboardView New() [static]
KeyboardView* KeyboardView::New1()
{
    KeyboardView* obj1 = (KeyboardView*)uNew(KeyboardView_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void SetIsFocusable(ObjC.Object handle, bool value) [static]
void KeyboardView::SetIsFocusable(::g::ObjC::Object* handle, bool value)
{
    @autoreleasepool
    {
        [] (::id handle, bool value) -> void
        {
            return [handle setIsFocusable:value];
        } (::g::ObjC::Object::GetHandle(handle), value);
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/TextEdit.uno
// --------------------------------------------------------------------------

// public sealed extern class MultiLineTextEdit
// {
static void MultiLineTextEdit_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Action1_typeof()->MakeType(::g::ObjC::Object_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Action_typeof();
    ::TYPES[16] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[19] = ::g::Fuse::Controls::Native::ITextEditHost_typeof();
    type->SetDependencies(
        ::g::Fuse::Controls::Native::iOS::FocusHelpers_typeof(),
        ::g::Fuse::Controls::Native::iOS::FontCache_typeof(),
        ::g::Fuse::Controls::Native::iOS::NativeFocus_typeof(),
        ::g::Fuse::Input::Pointer_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(MultiLineTextEdit_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(MultiLineTextEdit_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(MultiLineTextEdit_type, interface2),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(MultiLineTextEdit_type, interface3),
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof(), offsetof(MultiLineTextEdit_type, interface4),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(MultiLineTextEdit_type, interface5));
    type->SetFields(10,
        ::TYPES[19/*Fuse.Controls.Native.ITextEditHost*/], offsetof(MultiLineTextEdit, _host), 0,
        ::g::ObjC::Object_typeof(), offsetof(MultiLineTextEdit, _delegate), 0,
        ::g::Fuse::Internal::FontFaceDescriptor_typeof(), offsetof(MultiLineTextEdit, _descriptor), 0,
        ::g::Fuse::Visual_typeof(), offsetof(MultiLineTextEdit, _visual), 0,
        ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder_typeof(), offsetof(MultiLineTextEdit, _builder), 0,
        ::g::Uno::Int_typeof(), offsetof(MultiLineTextEdit, _inputFrame), 0,
        ::g::Uno::Float2_typeof(), offsetof(MultiLineTextEdit, _pointerPosition), 0,
        ::g::Uno::Float_typeof(), offsetof(MultiLineTextEdit, _fontSize), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MultiLineTextEdit__New3_fn, 0, true, type, 2, ::TYPES[19/*Fuse.Controls.Native.ITextEditHost*/], ::g::Fuse::Visual_typeof()));
}

MultiLineTextEdit_type* MultiLineTextEdit_typeof()
{
    static uSStrong<MultiLineTextEdit_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 18;
    options.InterfaceCount = 6;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(MultiLineTextEdit);
    options.TypeSize = sizeof(MultiLineTextEdit_type);
    type = (MultiLineTextEdit_type*)uClassType::New("Fuse.Controls.Native.iOS.MultiLineTextEdit", options);
    type->fp_build_ = MultiLineTextEdit_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))MultiLineTextEdit__Dispose_fn;
    type->fp_OnSizeChanged = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))MultiLineTextEdit__OnSizeChanged_fn;
    type->interface3.fp_FocusGained = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeITextEditFocusGained_fn;
    type->interface3.fp_FocusLost = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_FocusGained = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn;
    type->interface5.fp_set_Value = (void(*)(uObject*, uString*))MultiLineTextEdit__FuseControlsNativeITextViewset_Value_fn;
    type->interface5.fp_set_MaxLength = (void(*)(uObject*, int32_t*))MultiLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn;
    type->interface5.fp_set_TextWrapping = (void(*)(uObject*, int32_t*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn;
    type->interface5.fp_set_LineSpacing = (void(*)(uObject*, float*))MultiLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn;
    type->interface5.fp_set_FontSize = (void(*)(uObject*, float*))MultiLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn;
    type->interface5.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))MultiLineTextEdit__FuseControlsNativeITextViewset_Font_fn;
    type->interface5.fp_set_TextAlignment = (void(*)(uObject*, int32_t*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn;
    type->interface5.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn;
    type->interface5.fp_set_TextTruncation = (void(*)(uObject*, int32_t*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn;
    type->interface3.fp_set_IsMultiline = (void(*)(uObject*, bool*))MultiLineTextEdit__FuseControlsNativeITextEditset_IsMultiline_fn;
    type->interface3.fp_set_IsPassword = (void(*)(uObject*, bool*))MultiLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn;
    type->interface3.fp_set_IsReadOnly = (void(*)(uObject*, bool*))MultiLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn;
    type->interface3.fp_set_InputHint = (void(*)(uObject*, int32_t*))MultiLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn;
    type->interface3.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn;
    type->interface3.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn;
    type->interface3.fp_set_ActionStyle = (void(*)(uObject*, int32_t*))MultiLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn;
    type->interface3.fp_set_AutoCorrectHint = (void(*)(uObject*, int32_t*))MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn;
    type->interface3.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int32_t*))MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn;
    type->interface3.fp_set_PlaceholderText = (void(*)(uObject*, uString*))MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn;
    type->interface3.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))MultiLineTextEdit__Dispose_fn;
    return type;
}

// public MultiLineTextEdit(Fuse.Controls.Native.ITextEditHost host, Fuse.Visual visual)
void MultiLineTextEdit__ctor_5_fn(MultiLineTextEdit* __this, uObject* host, ::g::Fuse::Visual* visual)
{
    __this->ctor_5(host, visual);
}

// private static ObjC.Object Create()
void MultiLineTextEdit__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = MultiLineTextEdit::Create();
}

// private static ObjC.Object CreateDelegate(ObjC.Object handle, Uno.Action<ObjC.Object> callback, Uno.Action didBeginEditingCallback)
void MultiLineTextEdit__CreateDelegate_fn(::g::ObjC::Object* handle, uDelegate* callback, uDelegate* didBeginEditingCallback, ::g::ObjC::Object** __retval)
{
    *__retval = MultiLineTextEdit::CreateDelegate(handle, callback, didBeginEditingCallback);
}

// public override sealed void Dispose()
void MultiLineTextEdit__Dispose_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Dispose()");
    ::g::Fuse::Controls::Native::iOS::NativeFocus::RemoveListener(__this->Handle());
    ::g::Fuse::Input::Pointer::RemoveHandlers(__this->_visual, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)MultiLineTextEdit__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[17/*Fuse.Input.PointerMovedHandler*/], (void*)MultiLineTextEdit__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[18/*Fuse.Input.PointerReleasedHandler*/], (void*)MultiLineTextEdit__OnPointerReleased_fn, __this), NULL, NULL, NULL);
    __this->_host = NULL;
    __this->_delegate = NULL;
    __this->_visual = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.iOS.INativeFocusListener.FocusGained()
void MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.iOS.INativeFocusListener.FocusGained()");
    ::g::Fuse::Controls::Native::ITextEditHost::OnFocusGained(uInterface(uPtr(__this->_host), ::TYPES[19/*Fuse.Controls.Native.ITextEditHost*/]));
}

// private void Fuse.Controls.Native.iOS.INativeFocusListener.FocusLost()
void MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.iOS.INativeFocusListener.FocusLost()");
    ::g::Fuse::Controls::Native::ITextEditHost::OnFocusLost(uInterface(uPtr(__this->_host), ::TYPES[19/*Fuse.Controls.Native.ITextEditHost*/]));
}

// private void Fuse.Controls.Native.ITextEdit.set_ActionStyle(Fuse.Controls.TextInputActionStyle value)
void MultiLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn(MultiLineTextEdit* __this, int32_t* value)
{
}

// private void Fuse.Controls.Native.ITextEdit.set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value)
void MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn(MultiLineTextEdit* __this, int32_t* value)
{
    int32_t value_ = *value;

    switch (value_)
    {
        case 0:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeNone);
            break;
        }
        case 1:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeAllCharacters);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeWords);
            break;
        }
        case 3:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeSentences);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value)
void MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn(MultiLineTextEdit* __this, int32_t* value)
{
    int32_t value_ = *value;

    switch (value_)
    {
        case 1:
        {
            MultiLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeNo);
            break;
        }
        case 0:
        {
            MultiLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeDefault);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeYes);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_CaretColor(float4 value)
void MultiLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    MultiLineTextEdit::SetCaretColor(__this->Handle(), value_.X, value_.Y, value_.Z, value_.W);
}

// private void Fuse.Controls.Native.ITextEdit.FocusGained()
void MultiLineTextEdit__FuseControlsNativeITextEditFocusGained_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextEdit.FocusGained()");
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::ScheduleBecomeFirstResponder(__this->Handle());
    __this->UpdateCaretPosition();
}

// private void Fuse.Controls.Native.ITextEdit.FocusLost()
void MultiLineTextEdit__FuseControlsNativeITextEditFocusLost_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextEdit.FocusLost()");
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::ScheduleResignFirstResponder(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.set_InputHint(Fuse.Controls.TextInputHint value)
void MultiLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn(MultiLineTextEdit* __this, int32_t* value)
{
    int32_t value_ = *value;

    switch (value_)
    {
        case 0:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeDefault);
            break;
        }
        case 1:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeEmailAddress);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeURL);
            break;
        }
        case 3:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypePhonePad);
            break;
        }
        case 4:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeNumberPad);
            break;
        }
        case 5:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeDecimalPad);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_IsMultiline(bool value)
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsMultiline_fn(MultiLineTextEdit* __this, bool* value)
{
    bool value_ = *value;
    MultiLineTextEdit::SetIsMultiline(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.ITextEdit.set_IsPassword(bool value)
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn(MultiLineTextEdit* __this, bool* value)
{
    bool value_ = *value;
    MultiLineTextEdit::SetIsPassword(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.ITextEdit.set_IsReadOnly(bool value)
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn(MultiLineTextEdit* __this, bool* value)
{
    bool value_ = *value;
    MultiLineTextEdit::SetIsReadOnly(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.ITextEdit.set_PlaceholderColor(float4 value)
void MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
}

// private void Fuse.Controls.Native.ITextEdit.set_PlaceholderText(string value)
void MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn(MultiLineTextEdit* __this, uString* value)
{
}

// private void Fuse.Controls.Native.ITextEdit.set_SelectionColor(float4 value)
void MultiLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_Font(Fuse.Font value)
void MultiLineTextEdit__FuseControlsNativeITextViewset_Font_fn(MultiLineTextEdit* __this, ::g::Fuse::Font* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_Font(Fuse.Font)");
    ::g::Fuse::Internal::FontFaceDescriptor* ret2;

    if (uPtr(uPtr(value)->Descriptors)->Count() > 0)
    {
        ::g::Fuse::Internal::FontFaceDescriptor* descriptor = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(value)->Descriptors), uCRef<int32_t>(0), &ret2), ret2);
        __this->_descriptor = descriptor;
        MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetFont(::g::Fuse::Controls::Native::iOS::FontCache::Get(__this->_descriptor, __this->_fontSize)))->BuildAttributedString());
    }
}

// private void Fuse.Controls.Native.ITextView.set_FontSize(float value)
void MultiLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn(MultiLineTextEdit* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_FontSize(float)");
    float value_ = *value;

    if (__this->_fontSize != value_)
    {
        __this->_fontSize = value_;

        if (__this->_descriptor != NULL)
            MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetFont(::g::Fuse::Controls::Native::iOS::FontCache::Get(__this->_descriptor, __this->_fontSize)))->BuildAttributedString());
    }
}

// private void Fuse.Controls.Native.ITextView.set_LineSpacing(float value)
void MultiLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn(MultiLineTextEdit* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_LineSpacing(float)");
    float value_ = *value;
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetLineSpacing(value_))->BuildAttributedString());
}

// private void Fuse.Controls.Native.ITextView.set_MaxLength(int value)
void MultiLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn(MultiLineTextEdit* __this, int32_t* value)
{
    int32_t value_ = *value;
    MultiLineTextEdit::SetMaxLength(__this->_delegate, (value_ == 0) ? 2147483647 : value_);
}

// private void Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment value)
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn(MultiLineTextEdit* __this, int32_t* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment)");
    int32_t value_ = *value;
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetTextAlignment(value_))->BuildAttributedString());
}

// private void Fuse.Controls.Native.ITextView.set_TextColor(float4 value)
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_TextColor(float4)");
    ::g::Uno::Float4 value_ = *value;
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetTextColor(value_))->BuildAttributedString());
}

// private void Fuse.Controls.Native.ITextView.set_TextTruncation(Fuse.Controls.TextTruncation value)
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn(MultiLineTextEdit* __this, int32_t* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping value)
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn(MultiLineTextEdit* __this, int32_t* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping)");
    int32_t value_ = *value;
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetTextWrapping(value_))->BuildAttributedString());
}

// private void Fuse.Controls.Native.ITextView.set_Value(string value)
void MultiLineTextEdit__FuseControlsNativeITextViewset_Value_fn(MultiLineTextEdit* __this, uString* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_Value(string)");
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetValue(value))->BuildAttributedString());
}

// private static string GetValue(ObjC.Object handle)
void MultiLineTextEdit__GetValue_fn(::g::ObjC::Object* handle, uString** __retval)
{
    *__retval = MultiLineTextEdit::GetValue(handle);
}

// public MultiLineTextEdit New(Fuse.Controls.Native.ITextEditHost host, Fuse.Visual visual)
void MultiLineTextEdit__New3_fn(uObject* host, ::g::Fuse::Visual* visual, MultiLineTextEdit** __retval)
{
    *__retval = MultiLineTextEdit::New3(host, visual);
}

// private void OnDidBeginEditing()
void MultiLineTextEdit__OnDidBeginEditing_fn(MultiLineTextEdit* __this)
{
    __this->OnDidBeginEditing();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args)
void MultiLineTextEdit__OnPointerMoved_fn(MultiLineTextEdit* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args)
void MultiLineTextEdit__OnPointerPressed_fn(MultiLineTextEdit* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args)
void MultiLineTextEdit__OnPointerReleased_fn(MultiLineTextEdit* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// protected internal override sealed void OnSizeChanged()
void MultiLineTextEdit__OnSizeChanged_fn(MultiLineTextEdit* __this)
{
    MultiLineTextEdit::UpdateContentOffset(__this->Handle());
}

// private void OnTextChanged(ObjC.Object uitextView)
void MultiLineTextEdit__OnTextChanged_fn(MultiLineTextEdit* __this, ::g::ObjC::Object* uitextView)
{
    __this->OnTextChanged(uitextView);
}

// private static void SetAutoCapitalizationHint(ObjC.Object handle, int hint)
void MultiLineTextEdit__SetAutoCapitalizationHint_fn(::g::ObjC::Object* handle, int32_t* hint)
{
    MultiLineTextEdit::SetAutoCapitalizationHint(handle, *hint);
}

// private static void SetAutoCorrectHint(ObjC.Object handle, int hint)
void MultiLineTextEdit__SetAutoCorrectHint_fn(::g::ObjC::Object* handle, int32_t* hint)
{
    MultiLineTextEdit::SetAutoCorrectHint(handle, *hint);
}

// private static void SetCaretColor(ObjC.Object handle, float r, float g, float b, float a)
void MultiLineTextEdit__SetCaretColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    MultiLineTextEdit::SetCaretColor(handle, *r, *g, *b, *a);
}

// private static void SetCaretPosition(ObjC.Object handle, float x, float y)
void MultiLineTextEdit__SetCaretPosition_fn(::g::ObjC::Object* handle, float* x, float* y)
{
    MultiLineTextEdit::SetCaretPosition(handle, *x, *y);
}

// private static void SetInputHint(ObjC.Object handle, int hint)
void MultiLineTextEdit__SetInputHint_fn(::g::ObjC::Object* handle, int32_t* hint)
{
    MultiLineTextEdit::SetInputHint(handle, *hint);
}

// private static void SetIsMultiline(ObjC.Object handle, bool isMultiline)
void MultiLineTextEdit__SetIsMultiline_fn(::g::ObjC::Object* handle, bool* isMultiline)
{
    MultiLineTextEdit::SetIsMultiline(handle, *isMultiline);
}

// private static void SetIsPassword(ObjC.Object handle, bool isPassword)
void MultiLineTextEdit__SetIsPassword_fn(::g::ObjC::Object* handle, bool* isPassword)
{
    MultiLineTextEdit::SetIsPassword(handle, *isPassword);
}

// private static void SetIsReadOnly(ObjC.Object handle, bool isReadOnly)
void MultiLineTextEdit__SetIsReadOnly_fn(::g::ObjC::Object* handle, bool* isReadOnly)
{
    MultiLineTextEdit::SetIsReadOnly(handle, *isReadOnly);
}

// private static void SetMaxLength(ObjC.Object delegateHandle, int maxLength)
void MultiLineTextEdit__SetMaxLength_fn(::g::ObjC::Object* delegateHandle, int32_t* maxLength)
{
    MultiLineTextEdit::SetMaxLength(delegateHandle, *maxLength);
}

// private static void SetTypingAttributes(ObjC.Object handle, ObjC.Object typingAttributes)
void MultiLineTextEdit__SetTypingAttributes_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* typingAttributes)
{
    MultiLineTextEdit::SetTypingAttributes(handle, typingAttributes);
}

// private static void SetValue(ObjC.Object handle, ObjC.Object value)
void MultiLineTextEdit__SetValue_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* value)
{
    MultiLineTextEdit::SetValue(handle, value);
}

// private void UpdateCaretPosition()
void MultiLineTextEdit__UpdateCaretPosition_fn(MultiLineTextEdit* __this)
{
    __this->UpdateCaretPosition();
}

// private static void UpdateContentOffset(ObjC.Object handle)
void MultiLineTextEdit__UpdateContentOffset_fn(::g::ObjC::Object* handle)
{
    MultiLineTextEdit::UpdateContentOffset(handle);
}

// private void UpdatePointer(Fuse.Input.PointerEventArgs args)
void MultiLineTextEdit__UpdatePointer_fn(MultiLineTextEdit* __this, ::g::Fuse::Input::PointerEventArgs* args)
{
    __this->UpdatePointer(args);
}

// public MultiLineTextEdit(Fuse.Controls.Native.ITextEditHost host, Fuse.Visual visual) [instance]
void MultiLineTextEdit::ctor_5(uObject* host, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", ".ctor(Fuse.Controls.Native.ITextEditHost,Fuse.Visual)");
    _builder = ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder::New1();
    _inputFrame = -1;
    _pointerPosition = ::g::Uno::Float2__New1(0.0f);
    _fontSize = 12.0f;
    ctor_4(MultiLineTextEdit::Create());
    ::g::Fuse::Controls::Native::iOS::TextEditSpeedHack::Run();
    _host = host;
    _visual = visual;
    _delegate = MultiLineTextEdit::CreateDelegate(Handle(), uDelegate::New(::TYPES[15/*Uno.Action<ObjC.Object>*/], (void*)MultiLineTextEdit__OnTextChanged_fn, this), uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)MultiLineTextEdit__OnDidBeginEditing_fn, this));
    ::g::Fuse::Controls::Native::iOS::NativeFocus::AddListener(Handle(), (uObject*)this);
    ::g::Fuse::Input::Pointer::AddHandlers(_visual, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)MultiLineTextEdit__OnPointerPressed_fn, this), uDelegate::New(::TYPES[17/*Fuse.Input.PointerMovedHandler*/], (void*)MultiLineTextEdit__OnPointerMoved_fn, this), uDelegate::New(::TYPES[18/*Fuse.Input.PointerReleasedHandler*/], (void*)MultiLineTextEdit__OnPointerReleased_fn, this), NULL, NULL, NULL);
}

// private void OnDidBeginEditing() [instance]
void MultiLineTextEdit::OnDidBeginEditing()
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "OnDidBeginEditing()");
    MultiLineTextEdit::SetTypingAttributes(Handle(), uPtr(_builder)->BuildAttributes());
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance]
void MultiLineTextEdit::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");
    UpdatePointer(args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance]
void MultiLineTextEdit::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");
    UpdatePointer(args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance]
void MultiLineTextEdit::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");
    UpdatePointer(args);
}

// private void OnTextChanged(ObjC.Object uitextView) [instance]
void MultiLineTextEdit::OnTextChanged(::g::ObjC::Object* uitextView)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "OnTextChanged(ObjC.Object)");
    uString* value = MultiLineTextEdit::GetValue(Handle());
    uPtr(_builder)->SetValue(value);
    ::g::Fuse::Controls::Native::ITextEditHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[19/*Fuse.Controls.Native.ITextEditHost*/]), value);
}

// private void UpdateCaretPosition() [instance]
void MultiLineTextEdit::UpdateCaretPosition()
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "UpdateCaretPosition()");

    if (_inputFrame == ::g::Fuse::UpdateManager::FrameIndex())
    {
        ::g::Uno::Float2 p = uPtr(_visual)->WindowToLocal(_pointerPosition);
        MultiLineTextEdit::SetCaretPosition(Handle(), p.X, p.Y);
    }
}

// private void UpdatePointer(Fuse.Input.PointerEventArgs args) [instance]
void MultiLineTextEdit::UpdatePointer(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "UpdatePointer(Fuse.Input.PointerEventArgs)");

    if (uPtr(args)->IsPrimary())
    {
        _pointerPosition = uPtr(args)->WindowPoint();
        _inputFrame = ::g::Fuse::UpdateManager::FrameIndex();
    }
}

// private static ObjC.Object Create() [static]
::g::ObjC::Object* MultiLineTextEdit::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            ::UITextView* tv = [[::UITextView alloc] init];
            [tv setBackgroundColor:[::UIColor colorWithRed:(CGFloat)0.0f green:(CGFloat)0.0f blue:(CGFloat)0.0f alpha:(CGFloat)0.0f]];
            return tv;
        } ());
        
    }
    
}

// private static ObjC.Object CreateDelegate(ObjC.Object handle, Uno.Action<ObjC.Object> callback, Uno.Action didBeginEditingCallback) [static]
::g::ObjC::Object* MultiLineTextEdit::CreateDelegate(::g::ObjC::Object* handle, uDelegate* callback, uDelegate* didBeginEditingCallback)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, ::uObjC::Function<void, ::id> callback, ::uObjC::Function<void> didBeginEditingCallback) -> ::id
        {
            ::UITextView* textView = (::UITextView*)handle;
            ::TextViewDelegate* del = [[::TextViewDelegate alloc] init];
            [del setTextChangedCallback: callback];
            [del setDidBeginEditingCallback: didBeginEditingCallback];
            [del setMaxLength: INT_MAX];
            [textView setDelegate:del];
            return del;
        } (::g::ObjC::Object::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::id>)nil : (^ void (::id arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::g::ObjC::Object::Create(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: didBeginEditingCallback])));
        
    }
    
}

// private static string GetValue(ObjC.Object handle) [static]
uString* MultiLineTextEdit::GetValue(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id handle) -> ::NSString*
        {
            ::UITextView* textView = (::UITextView*)handle;
            return [textView text];
        } (::g::ObjC::Object::GetHandle(handle)));
        
    }
    
}

// public MultiLineTextEdit New(Fuse.Controls.Native.ITextEditHost host, Fuse.Visual visual) [static]
MultiLineTextEdit* MultiLineTextEdit::New3(uObject* host, ::g::Fuse::Visual* visual)
{
    MultiLineTextEdit* obj1 = (MultiLineTextEdit*)uNew(MultiLineTextEdit_typeof());
    obj1->ctor_5(host, visual);
    return obj1;
}

// private static void SetAutoCapitalizationHint(ObjC.Object handle, int hint) [static]
void MultiLineTextEdit::SetAutoCapitalizationHint(::g::ObjC::Object* handle, int32_t hint)
{
    @autoreleasepool
    {
        [] (::id handle, int32_t hint) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setAutocapitalizationType: (UITextAutocapitalizationType)hint];
        } (::g::ObjC::Object::GetHandle(handle), hint);
        
    }
    
}

// private static void SetAutoCorrectHint(ObjC.Object handle, int hint) [static]
void MultiLineTextEdit::SetAutoCorrectHint(::g::ObjC::Object* handle, int32_t hint)
{
    @autoreleasepool
    {
        [] (::id handle, int32_t hint) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setAutocorrectionType: (UITextAutocorrectionType)hint];
        } (::g::ObjC::Object::GetHandle(handle), hint);
        
    }
    
}

// private static void SetCaretColor(ObjC.Object handle, float r, float g, float b, float a) [static]
void MultiLineTextEdit::SetCaretColor(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            ::UIColor* color = [::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a];
            [textView setTintColor:color];
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}

// private static void SetCaretPosition(ObjC.Object handle, float x, float y) [static]
void MultiLineTextEdit::SetCaretPosition(::g::ObjC::Object* handle, float x, float y)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y) -> void
        {
            UITextView* textView = (::UITextView*)handle;
            UITextPosition* textPos = [textView closestPositionToPoint: CGPointMake(x, y)];
            auto offset = [textView offsetFromPosition:textView.beginningOfDocument toPosition:textPos];
            [textView setSelectedRange:NSMakeRange(offset, 0)];
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// private static void SetInputHint(ObjC.Object handle, int hint) [static]
void MultiLineTextEdit::SetInputHint(::g::ObjC::Object* handle, int32_t hint)
{
    @autoreleasepool
    {
        [] (::id handle, int32_t hint) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setKeyboardType:(UIKeyboardType)hint];
        } (::g::ObjC::Object::GetHandle(handle), hint);
        
    }
    
}

// private static void SetIsMultiline(ObjC.Object handle, bool isMultiline) [static]
void MultiLineTextEdit::SetIsMultiline(::g::ObjC::Object* handle, bool isMultiline)
{
    @autoreleasepool
    {
        [] (::id handle, bool isMultiline) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [[textView textContainer] setMaximumNumberOfLines:((isMultiline) ? 0 : 1)];
        } (::g::ObjC::Object::GetHandle(handle), isMultiline);
        
    }
    
}

// private static void SetIsPassword(ObjC.Object handle, bool isPassword) [static]
void MultiLineTextEdit::SetIsPassword(::g::ObjC::Object* handle, bool isPassword)
{
    @autoreleasepool
    {
        [] (::id handle, bool isPassword) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setSecureTextEntry: isPassword];
        } (::g::ObjC::Object::GetHandle(handle), isPassword);
        
    }
    
}

// private static void SetIsReadOnly(ObjC.Object handle, bool isReadOnly) [static]
void MultiLineTextEdit::SetIsReadOnly(::g::ObjC::Object* handle, bool isReadOnly)
{
    @autoreleasepool
    {
        [] (::id handle, bool isReadOnly) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setEditable: !isReadOnly];
        } (::g::ObjC::Object::GetHandle(handle), isReadOnly);
        
    }
    
}

// private static void SetMaxLength(ObjC.Object delegateHandle, int maxLength) [static]
void MultiLineTextEdit::SetMaxLength(::g::ObjC::Object* delegateHandle, int32_t maxLength)
{
    @autoreleasepool
    {
        [] (::id delegateHandle, int32_t maxLength) -> void
        {
            ::TextViewDelegate* textViewDelegate = (::TextViewDelegate*)delegateHandle;
            [textViewDelegate setMaxLength: maxLength];
        } (::g::ObjC::Object::GetHandle(delegateHandle), maxLength);
        
    }
    
}

// private static void SetTypingAttributes(ObjC.Object handle, ObjC.Object typingAttributes) [static]
void MultiLineTextEdit::SetTypingAttributes(::g::ObjC::Object* handle, ::g::ObjC::Object* typingAttributes)
{
    @autoreleasepool
    {
        [] (::id handle, ::id typingAttributes) -> void
        {
            UITextView* textView = (UITextView*)handle;
            textView.typingAttributes = typingAttributes;
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(typingAttributes));
        
    }
    
}

// private static void SetValue(ObjC.Object handle, ObjC.Object value) [static]
void MultiLineTextEdit::SetValue(::g::ObjC::Object* handle, ::g::ObjC::Object* value)
{
    @autoreleasepool
    {
        [] (::id handle, ::id value) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            textView.attributedText = (NSAttributedString*)value;
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(value));
        
    }
    
}

// private static void UpdateContentOffset(ObjC.Object handle) [static]
void MultiLineTextEdit::UpdateContentOffset(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            // If viewSize == contentSize the contentOffset should no change.
            // However iOS sets the contentOffset if viewSize and contentSize changes
            // even if the condition above is true.
            // This prevents spastic behavior like https://github.com/fusetools/ManualTestApp/issues/334
            auto contentSize = [handle contentSize];
            auto viewSize = [handle frame].size;
            // viewSize is sometimes 0.5 smaller than contentSize
            viewSize = CGSizeMake(ceilf(viewSize.width), ceilf(viewSize.height));
            if (viewSize.width >= contentSize.width && viewSize.height >= contentSize.height)
            {
            	[handle setContentOffset: CGPointMake(0.0, 0.0) animated:false];
            }
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/NSAttributedStringBuilder.uno
// -------------------------------------------------------------------------------------------

// internal sealed extern class NSAttributedStringBuilder
// {
static void NSAttributedStringBuilder_build(uType* type)
{
    ::STRINGS[6] = uString::Const("");
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), offsetof(NSAttributedStringBuilder, _color), 0,
        ::g::Uno::Float_typeof(), offsetof(NSAttributedStringBuilder, _lineSpacing), 0,
        ::g::Uno::String_typeof(), offsetof(NSAttributedStringBuilder, _value), 0,
        ::g::ObjC::Object_typeof(), offsetof(NSAttributedStringBuilder, _font), 0,
        ::g::Fuse::Controls::TextAlignment_typeof(), offsetof(NSAttributedStringBuilder, _alignment), 0,
        ::g::Fuse::Controls::TextWrapping_typeof(), offsetof(NSAttributedStringBuilder, _textWrapping), 0);
}

uType* NSAttributedStringBuilder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NSAttributedStringBuilder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.NSAttributedStringBuilder", options);
    type->fp_build_ = NSAttributedStringBuilder_build;
    type->fp_ctor_ = (void*)NSAttributedStringBuilder__New1_fn;
    return type;
}

// public NSAttributedStringBuilder()
void NSAttributedStringBuilder__ctor__fn(NSAttributedStringBuilder* __this)
{
    __this->ctor_();
}

// public ObjC.Object BuildAttributedString()
void NSAttributedStringBuilder__BuildAttributedString_fn(NSAttributedStringBuilder* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->BuildAttributedString();
}

// public ObjC.Object BuildAttributes()
void NSAttributedStringBuilder__BuildAttributes_fn(NSAttributedStringBuilder* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->BuildAttributes();
}

// private static ObjC.Object Create(string value, ObjC.Object attributes)
void NSAttributedStringBuilder__Create_fn(uString* value, ::g::ObjC::Object* attributes, ::g::ObjC::Object** __retval)
{
    *__retval = NSAttributedStringBuilder::Create(value, attributes);
}

// private int GetTextAlignment(Fuse.Controls.TextAlignment alignment)
void NSAttributedStringBuilder__GetTextAlignment_fn(NSAttributedStringBuilder* __this, int32_t* alignment, int32_t* __retval)
{
    *__retval = __this->GetTextAlignment(*alignment);
}

// public NSAttributedStringBuilder New()
void NSAttributedStringBuilder__New1_fn(NSAttributedStringBuilder** __retval)
{
    *__retval = NSAttributedStringBuilder::New1();
}

// private static ObjC.Object NewDictionary()
void NSAttributedStringBuilder__NewDictionary_fn(::g::ObjC::Object** __retval)
{
    *__retval = NSAttributedStringBuilder::NewDictionary();
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetFont(ObjC.Object font)
void NSAttributedStringBuilder__SetFont_fn(NSAttributedStringBuilder* __this, ::g::ObjC::Object* font, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetFont(font);
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle)
void NSAttributedStringBuilder__SetFont1_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* fontHandle)
{
    NSAttributedStringBuilder::SetFont1(handle, fontHandle);
}

// private static void SetForegroundColor(ObjC.Object handle, float r, float g, float b, float a)
void NSAttributedStringBuilder__SetForegroundColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    NSAttributedStringBuilder::SetForegroundColor(handle, *r, *g, *b, *a);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetLineSpacing(float lineSpacing)
void NSAttributedStringBuilder__SetLineSpacing_fn(NSAttributedStringBuilder* __this, float* lineSpacing, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetLineSpacing(*lineSpacing);
}

// private static void SetParagraphStyle(ObjC.Object handle, float lineSpacing, int textAlignment, bool wrapText)
void NSAttributedStringBuilder__SetParagraphStyle_fn(::g::ObjC::Object* handle, float* lineSpacing, int32_t* textAlignment, bool* wrapText)
{
    NSAttributedStringBuilder::SetParagraphStyle(handle, *lineSpacing, *textAlignment, *wrapText);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextAlignment(Fuse.Controls.TextAlignment alignment)
void NSAttributedStringBuilder__SetTextAlignment_fn(NSAttributedStringBuilder* __this, int32_t* alignment, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetTextAlignment(*alignment);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextColor(float4 color)
void NSAttributedStringBuilder__SetTextColor_fn(NSAttributedStringBuilder* __this, ::g::Uno::Float4* color, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetTextColor(*color);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextWrapping(Fuse.Controls.TextWrapping wrapping)
void NSAttributedStringBuilder__SetTextWrapping_fn(NSAttributedStringBuilder* __this, int32_t* wrapping, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetTextWrapping(*wrapping);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetValue(string value)
void NSAttributedStringBuilder__SetValue_fn(NSAttributedStringBuilder* __this, uString* value, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetValue(value);
}

// public NSAttributedStringBuilder() [instance]
void NSAttributedStringBuilder::ctor_()
{
    _color = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
}

// public ObjC.Object BuildAttributedString() [instance]
::g::ObjC::Object* NSAttributedStringBuilder::BuildAttributedString()
{
    uString* ind1;
    return NSAttributedStringBuilder::Create((ind1 = _value, (ind1 != NULL) ? ind1 : ::STRINGS[6/*""*/]), BuildAttributes());
}

// public ObjC.Object BuildAttributes() [instance]
::g::ObjC::Object* NSAttributedStringBuilder::BuildAttributes()
{
    ::g::ObjC::Object* attributes = NSAttributedStringBuilder::NewDictionary();
    NSAttributedStringBuilder::SetForegroundColor(attributes, _color.X, _color.Y, _color.Z, _color.W);
    NSAttributedStringBuilder::SetParagraphStyle(attributes, _lineSpacing, GetTextAlignment(_alignment), _textWrapping == 1);
    NSAttributedStringBuilder::SetFont1(attributes, _font);
    return attributes;
}

// private int GetTextAlignment(Fuse.Controls.TextAlignment alignment) [instance]
int32_t NSAttributedStringBuilder::GetTextAlignment(int32_t alignment)
{
    int32_t nsAlignment = 0;

    switch (alignment)
    {
        case 0:
        {
            nsAlignment = NSTextAlignmentLeft;
            break;
        }
        case 1:
        {
            nsAlignment = NSTextAlignmentCenter;
            break;
        }
        case 2:
        {
            nsAlignment = NSTextAlignmentRight;
            break;
        }
    }

    return nsAlignment;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetFont(ObjC.Object font) [instance]
NSAttributedStringBuilder* NSAttributedStringBuilder::SetFont(::g::ObjC::Object* font)
{
    _font = font;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetLineSpacing(float lineSpacing) [instance]
NSAttributedStringBuilder* NSAttributedStringBuilder::SetLineSpacing(float lineSpacing)
{
    _lineSpacing = lineSpacing;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextAlignment(Fuse.Controls.TextAlignment alignment) [instance]
NSAttributedStringBuilder* NSAttributedStringBuilder::SetTextAlignment(int32_t alignment)
{
    _alignment = alignment;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextColor(float4 color) [instance]
NSAttributedStringBuilder* NSAttributedStringBuilder::SetTextColor(::g::Uno::Float4 color)
{
    _color = color;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextWrapping(Fuse.Controls.TextWrapping wrapping) [instance]
NSAttributedStringBuilder* NSAttributedStringBuilder::SetTextWrapping(int32_t wrapping)
{
    _textWrapping = wrapping;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetValue(string value) [instance]
NSAttributedStringBuilder* NSAttributedStringBuilder::SetValue(uString* value)
{
    _value = value;
    return this;
}

// private static ObjC.Object Create(string value, ObjC.Object attributes) [static]
::g::ObjC::Object* NSAttributedStringBuilder::Create(uString* value, ::g::ObjC::Object* attributes)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::NSString* value, ::id attributes) -> ::id
        {
            return [[NSAttributedString alloc] initWithString:value attributes:attributes];
        } (::uObjC::NativeString(value), ::g::ObjC::Object::GetHandle(attributes)));
        
    }
    
}

// public NSAttributedStringBuilder New() [static]
NSAttributedStringBuilder* NSAttributedStringBuilder::New1()
{
    NSAttributedStringBuilder* obj2 = (NSAttributedStringBuilder*)uNew(NSAttributedStringBuilder_typeof());
    obj2->ctor_();
    return obj2;
}

// private static ObjC.Object NewDictionary() [static]
::g::ObjC::Object* NSAttributedStringBuilder::NewDictionary()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return [[NSMutableDictionary alloc] init];
        } ());
        
    }
    
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle) [static]
void NSAttributedStringBuilder::SetFont1(::g::ObjC::Object* handle, ::g::ObjC::Object* fontHandle)
{
    @autoreleasepool
    {
        [] (::id handle, ::id fontHandle) -> void
        {
            auto dict = (NSMutableDictionary*)handle;
            auto font = (UIFont*)fontHandle;
            if (font != nil)
            	dict[NSFontAttributeName] = font;
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(fontHandle));
        
    }
    
}

// private static void SetForegroundColor(ObjC.Object handle, float r, float g, float b, float a) [static]
void NSAttributedStringBuilder::SetForegroundColor(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            auto dict = (NSMutableDictionary*)handle;
            auto color = [::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a];
            dict[NSForegroundColorAttributeName] = color;
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}

// private static void SetParagraphStyle(ObjC.Object handle, float lineSpacing, int textAlignment, bool wrapText) [static]
void NSAttributedStringBuilder::SetParagraphStyle(::g::ObjC::Object* handle, float lineSpacing, int32_t textAlignment, bool wrapText)
{
    @autoreleasepool
    {
        [] (::id handle, float lineSpacing, int32_t textAlignment, bool wrapText) -> void
        {
            auto dict = (NSMutableDictionary*)handle;
            auto paragraphStyle = [[NSMutableParagraphStyle alloc] init];
            paragraphStyle.lineSpacing = lineSpacing;
            paragraphStyle.alignment = (NSTextAlignment)textAlignment;
            paragraphStyle.lineBreakMode = wrapText
            	? NSLineBreakByWordWrapping
            	: NSLineBreakByTruncatingTail;
            dict[NSParagraphStyleAttributeName] = paragraphStyle;
        } (::g::ObjC::Object::GetHandle(handle), lineSpacing, textAlignment, wrapText);
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/ObjectExtensions.uno
// ----------------------------------------------------------------------------------

// internal static extern class ObjectExtensions
// {
static void ObjectExtensions_build(uType* type)
{
}

uClassType* ObjectExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.ObjectExtensions", options);
    type->fp_build_ = ObjectExtensions_build;
    return type;
}

// public static bool IsUIControl(ObjC.Object obj)
void ObjectExtensions__IsUIControl_fn(::g::ObjC::Object* obj, bool* __retval)
{
    *__retval = ObjectExtensions::IsUIControl(obj);
}

// public static bool IsUIEvent(ObjC.Object obj)
void ObjectExtensions__IsUIEvent_fn(::g::ObjC::Object* obj, bool* __retval)
{
    *__retval = ObjectExtensions::IsUIEvent(obj);
}

// public static bool IsUIControl(ObjC.Object obj) [static]
bool ObjectExtensions::IsUIControl(::g::ObjC::Object* obj)
{
    @autoreleasepool
    {
        return [] (::id obj) -> bool
        {
            return [obj isKindOfClass:[UIControl class]];
        } (::g::ObjC::Object::GetHandle(obj));
        
    }
    
}

// public static bool IsUIEvent(ObjC.Object obj) [static]
bool ObjectExtensions::IsUIEvent(::g::ObjC::Object* obj)
{
    @autoreleasepool
    {
        return [] (::id obj) -> bool
        {
            return [obj isKindOfClass:[UIEvent class]];
        } (::g::ObjC::Object::GetHandle(obj));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/ScrollView.uno
// ----------------------------------------------------------------------------

// public sealed extern class ScrollView
// {
static void ScrollView_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Action1_typeof()->MakeType(::g::ObjC::Object_typeof(), NULL);
    ::TYPES[20] = ::g::Fuse::Controls::Native::IScrollViewHost_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ScrollView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ScrollView_type, interface1),
        ::g::Fuse::Controls::Native::IScrollView_typeof(), offsetof(ScrollView_type, interface2));
    type->SetFields(10,
        ::g::ObjC::Object_typeof(), offsetof(ScrollView, _delegateHandle), 0,
        ::TYPES[20/*Fuse.Controls.Native.IScrollViewHost*/], offsetof(ScrollView, _host), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("set_AllowedScrollDirections", NULL, (void*)ScrollView__set_AllowedScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollDirections_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollView__New3_fn, 0, true, type, 1, ::TYPES[20/*Fuse.Controls.Native.IScrollViewHost*/]),
        new uFunction("set_ScrollPosition", NULL, (void*)ScrollView__set_ScrollPosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
}

ScrollView_type* ScrollView_typeof()
{
    static uSStrong<ScrollView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(ScrollView_type);
    type = (ScrollView_type*)uClassType::New("Fuse.Controls.Native.iOS.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ScrollView__Dispose_fn;
    type->fp_OnSizeChanged = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ScrollView__OnSizeChanged_fn;
    type->interface2.fp_set_ScrollPosition = (void(*)(uObject*, ::g::Uno::Float2*))ScrollView__set_ScrollPosition_fn;
    type->interface2.fp_set_AllowedScrollDirections = (void(*)(uObject*, int32_t*))ScrollView__set_AllowedScrollDirections_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ScrollView__Dispose_fn;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host)
void ScrollView__ctor_4_fn(ScrollView* __this, uObject* host)
{
    __this->ctor_4(host);
}

// private static ObjC.Object AddCallback(ObjC.Object handle, Uno.Action<ObjC.Object> callback)
void ScrollView__AddCallback_fn(::g::ObjC::Object* handle, uDelegate* callback, ::g::ObjC::Object** __retval)
{
    *__retval = ScrollView::AddCallback(handle, callback);
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value)
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int32_t* value)
{
    __this->AllowedScrollDirections(*value);
}

// private static ObjC.Object Create()
void ScrollView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = ScrollView::Create();
}

// public override sealed void Dispose()
void ScrollView__Dispose_fn(ScrollView* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static void GetContentOffset(ObjC.Object handle, float& x, float& y)
void ScrollView__GetContentOffset_fn(::g::ObjC::Object* handle, float* x, float* y)
{
    ScrollView::GetContentOffset(handle, x, y);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host)
void ScrollView__New3_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New3(host);
}

// private void OnScrollViewDidScroll(ObjC.Object scrollViewHandle)
void ScrollView__OnScrollViewDidScroll_fn(ScrollView* __this, ::g::ObjC::Object* scrollViewHandle)
{
    __this->OnScrollViewDidScroll(scrollViewHandle);
}

// protected internal override sealed void OnSizeChanged()
void ScrollView__OnSizeChanged_fn(ScrollView* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ScrollView", "OnSizeChanged()");
    ::g::Uno::Float2 contentSize = ::g::Fuse::Controls::Native::IScrollViewHost::ContentSize(uInterface(uPtr(__this->_host), ::TYPES[20/*Fuse.Controls.Native.IScrollViewHost*/]));
    ScrollView::SetContentSize(__this->Handle(), contentSize.X, contentSize.Y);
}

// public void set_ScrollPosition(float2 value)
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->ScrollPosition(*value);
}

// private static void SetContentOffset(ObjC.Object handle, float x, float y)
void ScrollView__SetContentOffset_fn(::g::ObjC::Object* handle, float* x, float* y)
{
    ScrollView::SetContentOffset(handle, *x, *y);
}

// private static void SetContentSize(ObjC.Object handle, float w, float h)
void ScrollView__SetContentSize_fn(::g::ObjC::Object* handle, float* w, float* h)
{
    ScrollView::SetContentSize(handle, *w, *h);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance]
void ScrollView::ctor_4(uObject* host)
{
    ctor_2(ScrollView::Create(), 0);
    _host = host;
    _delegateHandle = ScrollView::AddCallback(Handle(), uDelegate::New(::TYPES[15/*Uno.Action<ObjC.Object>*/], (void*)ScrollView__OnScrollViewDidScroll_fn, this));
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) [instance]
void ScrollView::AllowedScrollDirections(int32_t value)
{
}

// private void OnScrollViewDidScroll(ObjC.Object scrollViewHandle) [instance]
void ScrollView::OnScrollViewDidScroll(::g::ObjC::Object* scrollViewHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ScrollView", "OnScrollViewDidScroll(ObjC.Object)");
    float x = 0.0f;
    float y = 0.0f;
    ScrollView::GetContentOffset(Handle(), &x, &y);
    ::g::Fuse::Controls::Native::IScrollViewHost::OnScrollPositionChanged(uInterface(uPtr(_host), ::TYPES[20/*Fuse.Controls.Native.IScrollViewHost*/]), ::g::Uno::Float2__New2(x, y));
}

// public void set_ScrollPosition(float2 value) [instance]
void ScrollView::ScrollPosition(::g::Uno::Float2 value)
{
    ScrollView::SetContentOffset(Handle(), value.X, value.Y);
}

// private static ObjC.Object AddCallback(ObjC.Object handle, Uno.Action<ObjC.Object> callback) [static]
::g::ObjC::Object* ScrollView::AddCallback(::g::ObjC::Object* handle, uDelegate* callback)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, ::uObjC::Function<void, ::id> callback) -> ::id
        {
            ScrollViewDelegate* del = [[ScrollViewDelegate alloc] init];
            [del setDidScrollCallback: callback];
            ::UIScrollView* scrollView =  (::UIScrollView*)handle;
            [scrollView setDelegate:del];
            return del;
        } (::g::ObjC::Object::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::id>)nil : (^ void (::id arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::g::ObjC::Object::Create(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback])));
        
    }
    
}

// private static ObjC.Object Create() [static]
::g::ObjC::Object* ScrollView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            ::UIScrollView* scrollView = [[::UIScrollView alloc] init];
            [scrollView setMultipleTouchEnabled:true];
            [scrollView setOpaque:true];
            return  scrollView;
        } ());
        
    }
    
}

// private static void GetContentOffset(ObjC.Object handle, float& x, float& y) [static]
void ScrollView::GetContentOffset(::g::ObjC::Object* handle, float* x, float* y)
{
    @autoreleasepool
    {
        [] (::id handle, float* x, float* y) -> void
        {
            ::UIScrollView* scrollView = (::UIScrollView*)handle;
            CGPoint offset = [scrollView contentOffset];
            *x = offset.x;
            *y = offset.y;
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static]
ScrollView* ScrollView::New3(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_4(host);
    return obj1;
}

// private static void SetContentOffset(ObjC.Object handle, float x, float y) [static]
void ScrollView::SetContentOffset(::g::ObjC::Object* handle, float x, float y)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y) -> void
        {
            ::UIScrollView* scrollView = (::UIScrollView*)handle;
            CGPoint p = { 0 };
            p.x = (CGFloat)x;
            p.y = (CGFloat)y;
            [scrollView setContentOffset:p];
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// private static void SetContentSize(ObjC.Object handle, float w, float h) [static]
void ScrollView::SetContentSize(::g::ObjC::Object* handle, float w, float h)
{
    @autoreleasepool
    {
        [] (::id handle, float w, float h) -> void
        {
            ::UIScrollView* scrollView = (::UIScrollView*)handle;
            CGSize size = { 0 };
            size.width = (CGFloat)w;
            size.height = (CGFloat)h;
            [scrollView setContentSize:size];
        } (::g::ObjC::Object::GetHandle(handle), w, h);
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/TextEdit.uno
// --------------------------------------------------------------------------

// public sealed extern class SingleLineTextEdit
// {
static void SingleLineTextEdit_build(uType* type)
{
    ::STRINGS[6] = uString::Const("");
    ::TYPES[1] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Func1_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[19] = ::g::Fuse::Controls::Native::ITextEditHost_typeof();
    type->SetDependencies(
        ::g::Fuse::Controls::Native::iOS::FocusHelpers_typeof(),
        ::g::Fuse::Controls::Native::iOS::FontCache_typeof(),
        ::g::Fuse::Controls::Native::iOS::NativeFocus_typeof());
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(SingleLineTextEdit_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(SingleLineTextEdit_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(SingleLineTextEdit_type, interface2),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(SingleLineTextEdit_type, interface3),
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof(), offsetof(SingleLineTextEdit_type, interface4),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(SingleLineTextEdit_type, interface5));
    type->SetFields(10,
        ::TYPES[19/*Fuse.Controls.Native.ITextEditHost*/], offsetof(SingleLineTextEdit, _textEditHost), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(SingleLineTextEdit, _editingEvents), 0,
        ::g::ObjC::Object_typeof(), offsetof(SingleLineTextEdit, _delegate), 0,
        ::g::Fuse::Internal::FontFaceDescriptor_typeof(), offsetof(SingleLineTextEdit, _descriptor), 0,
        ::g::Uno::Bool_typeof(), offsetof(SingleLineTextEdit, _isReadonly), 0,
        ::g::Uno::Float_typeof(), offsetof(SingleLineTextEdit, _fontSize), 0,
        ::g::Uno::String_typeof(), offsetof(SingleLineTextEdit, _placeholderText), 0,
        ::g::Uno::Float4_typeof(), offsetof(SingleLineTextEdit, _placeholderColor), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SingleLineTextEdit__New3_fn, 0, true, type, 1, ::TYPES[19/*Fuse.Controls.Native.ITextEditHost*/]));
}

SingleLineTextEdit_type* SingleLineTextEdit_typeof()
{
    static uSStrong<SingleLineTextEdit_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 18;
    options.InterfaceCount = 6;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(SingleLineTextEdit);
    options.TypeSize = sizeof(SingleLineTextEdit_type);
    type = (SingleLineTextEdit_type*)uClassType::New("Fuse.Controls.Native.iOS.SingleLineTextEdit", options);
    type->fp_build_ = SingleLineTextEdit_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))SingleLineTextEdit__Dispose_fn;
    type->interface3.fp_FocusGained = (void(*)(uObject*))SingleLineTextEdit__FuseControlsNativeITextEditFocusGained_fn;
    type->interface3.fp_FocusLost = (void(*)(uObject*))SingleLineTextEdit__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_FocusGained = (void(*)(uObject*))SingleLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))SingleLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn;
    type->interface5.fp_set_Value = (void(*)(uObject*, uString*))SingleLineTextEdit__FuseControlsNativeITextViewset_Value_fn;
    type->interface5.fp_set_MaxLength = (void(*)(uObject*, int32_t*))SingleLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn;
    type->interface5.fp_set_TextWrapping = (void(*)(uObject*, int32_t*))SingleLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn;
    type->interface5.fp_set_LineSpacing = (void(*)(uObject*, float*))SingleLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn;
    type->interface5.fp_set_FontSize = (void(*)(uObject*, float*))SingleLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn;
    type->interface5.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))SingleLineTextEdit__FuseControlsNativeITextViewset_Font_fn;
    type->interface5.fp_set_TextAlignment = (void(*)(uObject*, int32_t*))SingleLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn;
    type->interface5.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))SingleLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn;
    type->interface5.fp_set_TextTruncation = (void(*)(uObject*, int32_t*))SingleLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn;
    type->interface3.fp_set_IsMultiline = (void(*)(uObject*, bool*))SingleLineTextEdit__FuseControlsNativeITextEditset_IsMultiline_fn;
    type->interface3.fp_set_IsPassword = (void(*)(uObject*, bool*))SingleLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn;
    type->interface3.fp_set_IsReadOnly = (void(*)(uObject*, bool*))SingleLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn;
    type->interface3.fp_set_InputHint = (void(*)(uObject*, int32_t*))SingleLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn;
    type->interface3.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))SingleLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn;
    type->interface3.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))SingleLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn;
    type->interface3.fp_set_ActionStyle = (void(*)(uObject*, int32_t*))SingleLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn;
    type->interface3.fp_set_AutoCorrectHint = (void(*)(uObject*, int32_t*))SingleLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn;
    type->interface3.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int32_t*))SingleLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn;
    type->interface3.fp_set_PlaceholderText = (void(*)(uObject*, uString*))SingleLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn;
    type->interface3.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))SingleLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))SingleLineTextEdit__Dispose_fn;
    return type;
}

// public SingleLineTextEdit(Fuse.Controls.Native.ITextEditHost textEditHost)
void SingleLineTextEdit__ctor_5_fn(SingleLineTextEdit* __this, uObject* textEditHost)
{
    __this->ctor_5(textEditHost);
}

// private static ObjC.Object Create()
void SingleLineTextEdit__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = SingleLineTextEdit::Create();
}

// private static ObjC.Object CreateDelegate(ObjC.Object handle, Uno.Func<ObjC.Object, bool> callback, Uno.Func<ObjC.Object, bool> shouldEditingCallback)
void SingleLineTextEdit__CreateDelegate_fn(::g::ObjC::Object* handle, uDelegate* callback, uDelegate* shouldEditingCallback, ::g::ObjC::Object** __retval)
{
    *__retval = SingleLineTextEdit::CreateDelegate(handle, callback, shouldEditingCallback);
}

// public override sealed void Dispose()
void SingleLineTextEdit__Dispose_fn(SingleLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Dispose()");
    ::g::Fuse::Controls::Native::iOS::NativeFocus::RemoveListener(__this->Handle());
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_editingEvents), ::TYPES[2/*Uno.IDisposable*/]));
    __this->_editingEvents = NULL;
    __this->_delegate = NULL;
    __this->_textEditHost = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.iOS.INativeFocusListener.FocusGained()
void SingleLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn(SingleLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Fuse.Controls.Native.iOS.INativeFocusListener.FocusGained()");
    ::g::Fuse::Controls::Native::ITextEditHost::OnFocusGained(uInterface(uPtr(__this->_textEditHost), ::TYPES[19/*Fuse.Controls.Native.ITextEditHost*/]));
}

// private void Fuse.Controls.Native.iOS.INativeFocusListener.FocusLost()
void SingleLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn(SingleLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Fuse.Controls.Native.iOS.INativeFocusListener.FocusLost()");
    ::g::Fuse::Controls::Native::ITextEditHost::OnFocusLost(uInterface(uPtr(__this->_textEditHost), ::TYPES[19/*Fuse.Controls.Native.ITextEditHost*/]));
}

// private void Fuse.Controls.Native.ITextEdit.set_ActionStyle(Fuse.Controls.TextInputActionStyle value)
void SingleLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn(SingleLineTextEdit* __this, int32_t* value)
{
    int32_t value_ = *value;

    switch (value_)
    {
        case 0:
        {
            SingleLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyDefault);
            break;
        }
        case 1:
        {
            SingleLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyDone);
            break;
        }
        case 2:
        {
            SingleLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyNext);
            break;
        }
        case 3:
        {
            SingleLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyGo);
            break;
        }
        case 4:
        {
            SingleLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeySearch);
            break;
        }
        case 5:
        {
            SingleLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeySend);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value)
void SingleLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn(SingleLineTextEdit* __this, int32_t* value)
{
    int32_t value_ = *value;

    switch (value_)
    {
        case 0:
        {
            SingleLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeNone);
            break;
        }
        case 1:
        {
            SingleLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeAllCharacters);
            break;
        }
        case 2:
        {
            SingleLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeWords);
            break;
        }
        case 3:
        {
            SingleLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeSentences);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value)
void SingleLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn(SingleLineTextEdit* __this, int32_t* value)
{
    int32_t value_ = *value;

    switch (value_)
    {
        case 1:
        {
            SingleLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeNo);
            break;
        }
        case 0:
        {
            SingleLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeDefault);
            break;
        }
        case 2:
        {
            SingleLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeYes);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_CaretColor(float4 value)
void SingleLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    SingleLineTextEdit::SetCaretColor(__this->Handle(), value_.X, value_.Y, value_.Z, value_.W);
}

// private void Fuse.Controls.Native.ITextEdit.FocusGained()
void SingleLineTextEdit__FuseControlsNativeITextEditFocusGained_fn(SingleLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Fuse.Controls.Native.ITextEdit.FocusGained()");
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::ScheduleBecomeFirstResponder(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.FocusLost()
void SingleLineTextEdit__FuseControlsNativeITextEditFocusLost_fn(SingleLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Fuse.Controls.Native.ITextEdit.FocusLost()");
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::ScheduleResignFirstResponder(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.set_InputHint(Fuse.Controls.TextInputHint value)
void SingleLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn(SingleLineTextEdit* __this, int32_t* value)
{
    int32_t value_ = *value;

    switch (value_)
    {
        case 0:
        {
            SingleLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeDefault);
            break;
        }
        case 1:
        {
            SingleLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeEmailAddress);
            break;
        }
        case 2:
        {
            SingleLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeURL);
            break;
        }
        case 3:
        {
            SingleLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypePhonePad);
            break;
        }
        case 4:
        {
            SingleLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeNumberPad);
            break;
        }
        case 5:
        {
            SingleLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeDecimalPad);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_IsMultiline(bool value)
void SingleLineTextEdit__FuseControlsNativeITextEditset_IsMultiline_fn(SingleLineTextEdit* __this, bool* value)
{
}

// private void Fuse.Controls.Native.ITextEdit.set_IsPassword(bool value)
void SingleLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn(SingleLineTextEdit* __this, bool* value)
{
    bool value_ = *value;
    SingleLineTextEdit::SetIsPassword(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.ITextEdit.set_IsReadOnly(bool value)
void SingleLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn(SingleLineTextEdit* __this, bool* value)
{
    bool value_ = *value;
    __this->_isReadonly = value_;
}

// private void Fuse.Controls.Native.ITextEdit.set_PlaceholderColor(float4 value)
void SingleLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    ::g::Uno::Float4 c = __this->_placeholderColor = value_;
    SingleLineTextEdit::SetPlaceholderText(__this->Handle(), __this->_placeholderText, c.X, c.Y, c.Z, c.W);
}

// private void Fuse.Controls.Native.ITextEdit.set_PlaceholderText(string value)
void SingleLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn(SingleLineTextEdit* __this, uString* value)
{
    ::g::Uno::Float4 c = __this->_placeholderColor;
    SingleLineTextEdit::SetPlaceholderText(__this->Handle(), __this->_placeholderText = value, c.X, c.Y, c.Z, c.W);
}

// private void Fuse.Controls.Native.ITextEdit.set_SelectionColor(float4 value)
void SingleLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_Font(Fuse.Font value)
void SingleLineTextEdit__FuseControlsNativeITextViewset_Font_fn(SingleLineTextEdit* __this, ::g::Fuse::Font* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Fuse.Controls.Native.ITextView.set_Font(Fuse.Font)");
    ::g::Fuse::Internal::FontFaceDescriptor* ret2;

    if (uPtr(uPtr(value)->Descriptors)->Count() > 0)
    {
        __this->_descriptor = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(value)->Descriptors), uCRef<int32_t>(0), &ret2), ret2);
        SingleLineTextEdit::SetFont(__this->Handle(), ::g::Fuse::Controls::Native::iOS::FontCache::Get(__this->_descriptor, __this->_fontSize));
    }
}

// private void Fuse.Controls.Native.ITextView.set_FontSize(float value)
void SingleLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn(SingleLineTextEdit* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Fuse.Controls.Native.ITextView.set_FontSize(float)");
    float value_ = *value;

    if (__this->_fontSize != value_)
    {
        __this->_fontSize = value_;

        if (__this->_descriptor != NULL)
            SingleLineTextEdit::SetFont(__this->Handle(), ::g::Fuse::Controls::Native::iOS::FontCache::Get(__this->_descriptor, __this->_fontSize));
    }
}

// private void Fuse.Controls.Native.ITextView.set_LineSpacing(float value)
void SingleLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn(SingleLineTextEdit* __this, float* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_MaxLength(int value)
void SingleLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn(SingleLineTextEdit* __this, int32_t* value)
{
    int32_t value_ = *value;
    SingleLineTextEdit::SetMaxLength(__this->_delegate, (value_ == 0) ? 2147483647 : value_);
}

// private void Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment value)
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn(SingleLineTextEdit* __this, int32_t* value)
{
    int32_t value_ = *value;

    switch (value_)
    {
        case 0:
        {
            SingleLineTextEdit::SetTextAlignment(__this->Handle(), NSTextAlignmentLeft);
            break;
        }
        case 1:
        {
            SingleLineTextEdit::SetTextAlignment(__this->Handle(), NSTextAlignmentCenter);
            break;
        }
        case 2:
        {
            SingleLineTextEdit::SetTextAlignment(__this->Handle(), NSTextAlignmentRight);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextView.set_TextColor(float4 value)
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    SingleLineTextEdit::SetTextColor(__this->Handle(), value_.X, value_.Y, value_.Z, value_.W);
}

// private void Fuse.Controls.Native.ITextView.set_TextTruncation(Fuse.Controls.TextTruncation value)
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn(SingleLineTextEdit* __this, int32_t* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping value)
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn(SingleLineTextEdit* __this, int32_t* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_Value(string value)
void SingleLineTextEdit__FuseControlsNativeITextViewset_Value_fn(SingleLineTextEdit* __this, uString* value)
{
    SingleLineTextEdit::SetValue(__this->Handle(), value);
}

// private static string GetValue(ObjC.Object handle)
void SingleLineTextEdit__GetValue_fn(::g::ObjC::Object* handle, uString** __retval)
{
    *__retval = SingleLineTextEdit::GetValue(handle);
}

// public SingleLineTextEdit New(Fuse.Controls.Native.ITextEditHost textEditHost)
void SingleLineTextEdit__New3_fn(uObject* textEditHost, SingleLineTextEdit** __retval)
{
    *__retval = SingleLineTextEdit::New3(textEditHost);
}

// private bool OnAction(ObjC.Object sender)
void SingleLineTextEdit__OnAction_fn(SingleLineTextEdit* __this, ::g::ObjC::Object* sender, bool* __retval)
{
    *__retval = __this->OnAction(sender);
}

// private void OnTextEdit(ObjC.Object sender, ObjC.Object args)
void SingleLineTextEdit__OnTextEdit_fn(SingleLineTextEdit* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    __this->OnTextEdit(sender, args);
}

// private void OnValueChanged()
void SingleLineTextEdit__OnValueChanged_fn(SingleLineTextEdit* __this)
{
    __this->OnValueChanged();
}

// private static void SetActionStyle(ObjC.Object handle, int style)
void SingleLineTextEdit__SetActionStyle_fn(::g::ObjC::Object* handle, int32_t* style)
{
    SingleLineTextEdit::SetActionStyle(handle, *style);
}

// private static void SetAutoCapitalizationHint(ObjC.Object handle, int hint)
void SingleLineTextEdit__SetAutoCapitalizationHint_fn(::g::ObjC::Object* handle, int32_t* hint)
{
    SingleLineTextEdit::SetAutoCapitalizationHint(handle, *hint);
}

// private static void SetAutoCorrectHint(ObjC.Object handle, int hint)
void SingleLineTextEdit__SetAutoCorrectHint_fn(::g::ObjC::Object* handle, int32_t* hint)
{
    SingleLineTextEdit::SetAutoCorrectHint(handle, *hint);
}

// private static void SetCaretColor(ObjC.Object handle, float r, float g, float b, float a)
void SingleLineTextEdit__SetCaretColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    SingleLineTextEdit::SetCaretColor(handle, *r, *g, *b, *a);
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle)
void SingleLineTextEdit__SetFont_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* fontHandle)
{
    SingleLineTextEdit::SetFont(handle, fontHandle);
}

// private static void SetInputHint(ObjC.Object handle, int hint)
void SingleLineTextEdit__SetInputHint_fn(::g::ObjC::Object* handle, int32_t* hint)
{
    SingleLineTextEdit::SetInputHint(handle, *hint);
}

// private static void SetIsPassword(ObjC.Object handle, bool isPassword)
void SingleLineTextEdit__SetIsPassword_fn(::g::ObjC::Object* handle, bool* isPassword)
{
    SingleLineTextEdit::SetIsPassword(handle, *isPassword);
}

// private static void SetMaxLength(ObjC.Object delegateHandle, int maxLength)
void SingleLineTextEdit__SetMaxLength_fn(::g::ObjC::Object* delegateHandle, int32_t* maxLength)
{
    SingleLineTextEdit::SetMaxLength(delegateHandle, *maxLength);
}

// private static void SetPlaceholderText(ObjC.Object handle, string text, float r, float g, float b, float a)
void SingleLineTextEdit__SetPlaceholderText_fn(::g::ObjC::Object* handle, uString* text, float* r, float* g, float* b, float* a)
{
    SingleLineTextEdit::SetPlaceholderText(handle, text, *r, *g, *b, *a);
}

// private static void SetTextAlignment(ObjC.Object handle, int alignmnet)
void SingleLineTextEdit__SetTextAlignment_fn(::g::ObjC::Object* handle, int32_t* alignmnet)
{
    SingleLineTextEdit::SetTextAlignment(handle, *alignmnet);
}

// private static void SetTextColor(ObjC.Object handle, float r, float g, float b, float a)
void SingleLineTextEdit__SetTextColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    SingleLineTextEdit::SetTextColor(handle, *r, *g, *b, *a);
}

// private static void SetValue(ObjC.Object handle, string value)
void SingleLineTextEdit__SetValue_fn(::g::ObjC::Object* handle, uString* value)
{
    SingleLineTextEdit::SetValue(handle, value);
}

// private bool ShouldEditingCallback(ObjC.Object sender)
void SingleLineTextEdit__ShouldEditingCallback_fn(SingleLineTextEdit* __this, ::g::ObjC::Object* sender, bool* __retval)
{
    *__retval = __this->ShouldEditingCallback(sender);
}

// public SingleLineTextEdit(Fuse.Controls.Native.ITextEditHost textEditHost) [instance]
void SingleLineTextEdit::ctor_5(uObject* textEditHost)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", ".ctor(Fuse.Controls.Native.ITextEditHost)");
    _fontSize = 12.0f;
    _placeholderText = ::STRINGS[6/*""*/];
    _placeholderColor = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
    ctor_4(SingleLineTextEdit::Create());
    ::g::Fuse::Controls::Native::iOS::TextEditSpeedHack::Run();
    _textEditHost = textEditHost;
    _editingEvents = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddAllEditingEventsCallback(Handle(), uDelegate::New(::TYPES[1/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)SingleLineTextEdit__OnTextEdit_fn, this));
    _delegate = SingleLineTextEdit::CreateDelegate(Handle(), uDelegate::New(::TYPES[21/*Uno.Func<ObjC.Object, bool>*/], (void*)SingleLineTextEdit__OnAction_fn, this), uDelegate::New(::TYPES[21/*Uno.Func<ObjC.Object, bool>*/], (void*)SingleLineTextEdit__ShouldEditingCallback_fn, this));
    ::g::Fuse::Controls::Native::iOS::NativeFocus::AddListener(Handle(), (uObject*)this);
}

// private bool OnAction(ObjC.Object sender) [instance]
bool SingleLineTextEdit::OnAction(::g::ObjC::Object* sender)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "OnAction(ObjC.Object)");
    OnValueChanged();
    return ::g::Fuse::Controls::Native::ITextEditHost::OnInputAction(uInterface(uPtr(_textEditHost), ::TYPES[19/*Fuse.Controls.Native.ITextEditHost*/]), 0);
}

// private void OnTextEdit(ObjC.Object sender, ObjC.Object args) [instance]
void SingleLineTextEdit::OnTextEdit(::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "OnTextEdit(ObjC.Object,ObjC.Object)");
    OnValueChanged();
}

// private void OnValueChanged() [instance]
void SingleLineTextEdit::OnValueChanged()
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "OnValueChanged()");
    ::g::Fuse::Controls::Native::ITextEditHost::OnValueChanged(uInterface(uPtr(_textEditHost), ::TYPES[19/*Fuse.Controls.Native.ITextEditHost*/]), SingleLineTextEdit::GetValue(Handle()));
}

// private bool ShouldEditingCallback(ObjC.Object sender) [instance]
bool SingleLineTextEdit::ShouldEditingCallback(::g::ObjC::Object* sender)
{
    return !_isReadonly;
}

// private static ObjC.Object Create() [static]
::g::ObjC::Object* SingleLineTextEdit::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return [[::UITextField alloc] init];
        } ());
        
    }
    
}

// private static ObjC.Object CreateDelegate(ObjC.Object handle, Uno.Func<ObjC.Object, bool> callback, Uno.Func<ObjC.Object, bool> shouldEditingCallback) [static]
::g::ObjC::Object* SingleLineTextEdit::CreateDelegate(::g::ObjC::Object* handle, uDelegate* callback, uDelegate* shouldEditingCallback)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, ::uObjC::Function<bool, ::id> callback, ::uObjC::Function<bool, ::id> shouldEditingCallback) -> ::id
        {
            ::UITextField* textField = (::UITextField*)handle;
            ::TextFieldDelegate* textFieldDelegate = [[::TextFieldDelegate alloc] init];
            [textFieldDelegate setOnActionCallback:callback];
            [textFieldDelegate setMaxLength: INT_MAX];
            [textFieldDelegate setShouldEditingCallback:shouldEditingCallback];
            [textField setDelegate: textFieldDelegate];
            return textFieldDelegate;
        } (::g::ObjC::Object::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<bool, ::id>
        {
            return __delegateRef == nil ? (::uObjC::Function<bool, ::id>)nil : (^ bool (::id arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                return uUnbox<bool>(__unoDelegate->Invoke(1, ::g::ObjC::Object::Create(arg)));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<bool, ::id>
        {
            return __delegateRef == nil ? (::uObjC::Function<bool, ::id>)nil : (^ bool (::id arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                return uUnbox<bool>(__unoDelegate->Invoke(1, ::g::ObjC::Object::Create(arg)));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: shouldEditingCallback])));
        
    }
    
}

// private static string GetValue(ObjC.Object handle) [static]
uString* SingleLineTextEdit::GetValue(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id handle) -> ::NSString*
        {
            ::UITextField* textField = (::UITextField*)handle;
            return [textField text];
        } (::g::ObjC::Object::GetHandle(handle)));
        
    }
    
}

// public SingleLineTextEdit New(Fuse.Controls.Native.ITextEditHost textEditHost) [static]
SingleLineTextEdit* SingleLineTextEdit::New3(uObject* textEditHost)
{
    SingleLineTextEdit* obj1 = (SingleLineTextEdit*)uNew(SingleLineTextEdit_typeof());
    obj1->ctor_5(textEditHost);
    return obj1;
}

// private static void SetActionStyle(ObjC.Object handle, int style) [static]
void SingleLineTextEdit::SetActionStyle(::g::ObjC::Object* handle, int32_t style)
{
    @autoreleasepool
    {
        [] (::id handle, int32_t style) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setReturnKeyType: (UIReturnKeyType)style];
        } (::g::ObjC::Object::GetHandle(handle), style);
        
    }
    
}

// private static void SetAutoCapitalizationHint(ObjC.Object handle, int hint) [static]
void SingleLineTextEdit::SetAutoCapitalizationHint(::g::ObjC::Object* handle, int32_t hint)
{
    @autoreleasepool
    {
        [] (::id handle, int32_t hint) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setAutocapitalizationType: (UITextAutocapitalizationType)hint];
        } (::g::ObjC::Object::GetHandle(handle), hint);
        
    }
    
}

// private static void SetAutoCorrectHint(ObjC.Object handle, int hint) [static]
void SingleLineTextEdit::SetAutoCorrectHint(::g::ObjC::Object* handle, int32_t hint)
{
    @autoreleasepool
    {
        [] (::id handle, int32_t hint) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setAutocorrectionType: (UITextAutocorrectionType)hint];
        } (::g::ObjC::Object::GetHandle(handle), hint);
        
    }
    
}

// private static void SetCaretColor(ObjC.Object handle, float r, float g, float b, float a) [static]
void SingleLineTextEdit::SetCaretColor(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            ::UIColor* color = [::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a];
            [textField setTintColor:color];
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle) [static]
void SingleLineTextEdit::SetFont(::g::ObjC::Object* handle, ::g::ObjC::Object* fontHandle)
{
    @autoreleasepool
    {
        [] (::id handle, ::id fontHandle) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            ::UIFont* font = (::UIFont*)fontHandle;
            [textField setFont: font];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(fontHandle));
        
    }
    
}

// private static void SetInputHint(ObjC.Object handle, int hint) [static]
void SingleLineTextEdit::SetInputHint(::g::ObjC::Object* handle, int32_t hint)
{
    @autoreleasepool
    {
        [] (::id handle, int32_t hint) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setKeyboardType:(UIKeyboardType)hint];
        } (::g::ObjC::Object::GetHandle(handle), hint);
        
    }
    
}

// private static void SetIsPassword(ObjC.Object handle, bool isPassword) [static]
void SingleLineTextEdit::SetIsPassword(::g::ObjC::Object* handle, bool isPassword)
{
    @autoreleasepool
    {
        [] (::id handle, bool isPassword) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            BOOL isFirstResponder = textField.isFirstResponder;
            
            if (isFirstResponder)
            	[textField resignFirstResponder];
            
            [textField setSecureTextEntry: isPassword];
            
            if (isFirstResponder)
            	[textField becomeFirstResponder];
        } (::g::ObjC::Object::GetHandle(handle), isPassword);
        
    }
    
}

// private static void SetMaxLength(ObjC.Object delegateHandle, int maxLength) [static]
void SingleLineTextEdit::SetMaxLength(::g::ObjC::Object* delegateHandle, int32_t maxLength)
{
    @autoreleasepool
    {
        [] (::id delegateHandle, int32_t maxLength) -> void
        {
            ::TextFieldDelegate* textFieldDelegate = (::TextFieldDelegate*)delegateHandle;
            [textFieldDelegate setMaxLength: maxLength];
        } (::g::ObjC::Object::GetHandle(delegateHandle), maxLength);
        
    }
    
}

// private static void SetPlaceholderText(ObjC.Object handle, string text, float r, float g, float b, float a) [static]
void SingleLineTextEdit::SetPlaceholderText(::g::ObjC::Object* handle, uString* text, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, ::NSString* text, float r, float g, float b, float a) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            ::UIColor* color = [::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a];
              			textField.attributedPlaceholder = [[NSAttributedString alloc] initWithString:text attributes:[NSDictionary dictionaryWithObjects:@[color] forKeys:@[NSForegroundColorAttributeName]]];
        } (::g::ObjC::Object::GetHandle(handle), ::uObjC::NativeString(text), r, g, b, a);
        
    }
    
}

// private static void SetTextAlignment(ObjC.Object handle, int alignmnet) [static]
void SingleLineTextEdit::SetTextAlignment(::g::ObjC::Object* handle, int32_t alignmnet)
{
    @autoreleasepool
    {
        [] (::id handle, int32_t alignmnet) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setTextAlignment: (NSTextAlignment)alignmnet];
        } (::g::ObjC::Object::GetHandle(handle), alignmnet);
        
    }
    
}

// private static void SetTextColor(ObjC.Object handle, float r, float g, float b, float a) [static]
void SingleLineTextEdit::SetTextColor(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setTextColor:[::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a]];
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}

// private static void SetValue(ObjC.Object handle, string value) [static]
void SingleLineTextEdit::SetValue(::g::ObjC::Object* handle, uString* value)
{
    @autoreleasepool
    {
        [] (::id handle, ::NSString* value) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setText:value];
        } (::g::ObjC::Object::GetHandle(handle), ::uObjC::NativeString(value));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/Slider.uno
// ------------------------------------------------------------------------

// public sealed extern class Slider
// {
static void Slider_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[22] = ::g::Fuse::Controls::Native::IRangeViewHost_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(Slider_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Slider_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Slider_type, interface2),
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface3));
    type->SetFields(10,
        ::TYPES[22/*Fuse.Controls.Native.IRangeViewHost*/], offsetof(Slider, _host), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Slider, _visual), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(Slider, _valueChangedEvent), 0,
        ::g::Fuse::Controls::Native::iOS::PointerCaptureAdapter_typeof(), offsetof(Slider, _captureAdapter), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Slider__New3_fn, 0, true, type, 2, ::TYPES[22/*Fuse.Controls.Native.IRangeViewHost*/], ::g::Fuse::Visual_typeof()),
        new uFunction("set_Progress", NULL, (void*)Slider__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.iOS.Slider", options);
    type->fp_build_ = Slider_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))Slider__Dispose_fn;
    type->interface3.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Slider__Dispose_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual)
void Slider__ctor_5_fn(Slider* __this, uObject* host, ::g::Fuse::Visual* visual)
{
    __this->ctor_5(host, visual);
}

// private static ObjC.Object Create()
void Slider__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = Slider::Create();
}

// public override sealed void Dispose()
void Slider__Dispose_fn(Slider* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Slider", "Dispose()");
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_valueChangedEvent), ::TYPES[2/*Uno.IDisposable*/]));
    uPtr(__this->_captureAdapter)->Dispose();
    __this->_valueChangedEvent = NULL;
    __this->_captureAdapter = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static float GetValue(ObjC.Object handle)
void Slider__GetValue_fn(::g::ObjC::Object* handle, float* __retval)
{
    *__retval = Slider::GetValue(handle);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual)
void Slider__New3_fn(uObject* host, ::g::Fuse::Visual* visual, Slider** __retval)
{
    *__retval = Slider::New3(host, visual);
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent)
void Slider__OnValueChanged_fn(Slider* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    __this->OnValueChanged(sender, uiEvent);
}

// public void set_Progress(double value)
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// private static void SetValue(ObjC.Object handle, float value)
void Slider__SetValue_fn(::g::ObjC::Object* handle, float* value)
{
    Slider::SetValue(handle, *value);
}

// private float get_Value()
void Slider__get_Value_fn(Slider* __this, float* __retval)
{
    *__retval = __this->Value();
}

// private void set_Value(float value)
void Slider__set_Value_fn(Slider* __this, float* value)
{
    __this->Value(*value);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) [instance]
void Slider::ctor_5(uObject* host, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Slider", ".ctor(Fuse.Controls.Native.IRangeViewHost,Fuse.Visual)");
    ctor_4(Slider::Create());
    _host = host;
    _visual = visual;
    _valueChangedEvent = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddValueChangedCallback(Handle(), uDelegate::New(::TYPES[1/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)Slider__OnValueChanged_fn, this));
    _captureAdapter = ::g::Fuse::Controls::Native::iOS::PointerCaptureAdapter::New1(_visual, Handle());
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent) [instance]
void Slider::OnValueChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Slider", "OnValueChanged(ObjC.Object,ObjC.Object)");
    double rel = (double)(Value() / 100.0f);
    double us = ::g::Fuse::Controls::Native::IRangeViewHost::RelativeUserStep(uInterface(uPtr(_host), ::TYPES[22/*Fuse.Controls.Native.IRangeViewHost*/]));

    if (us > 0.0)
    {
        rel = ::g::Uno::Math::Round(rel / us) * us;
        Slider::SetValue(Handle(), (float)rel * 100.0f);
    }

    ::g::Fuse::Controls::Native::IRangeViewHost::OnProgressChanged(uInterface(uPtr(_host), ::TYPES[22/*Fuse.Controls.Native.IRangeViewHost*/]), rel);
}

// public void set_Progress(double value) [instance]
void Slider::Progress(double value)
{
    Value((float)value * 100.0f);
}

// private float get_Value() [instance]
float Slider::Value()
{
    return Slider::GetValue(Handle());
}

// private void set_Value(float value) [instance]
void Slider::Value(float value)
{
    Slider::SetValue(Handle(), value);
}

// private static ObjC.Object Create() [static]
::g::ObjC::Object* Slider::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            ::UISlider* slider = [[::UISlider alloc] init];
            [slider setMinimumValue:   0.0f];
            [slider setMaximumValue: 100.0f];
            return slider;
        } ());
        
    }
    
}

// private static float GetValue(ObjC.Object handle) [static]
float Slider::GetValue(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> float
        {
            ::UISlider* slider = (::UISlider*)handle;
            return [slider value];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) [static]
Slider* Slider::New3(uObject* host, ::g::Fuse::Visual* visual)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_5(host, visual);
    return obj1;
}

// private static void SetValue(ObjC.Object handle, float value) [static]
void Slider::SetValue(::g::ObjC::Object* handle, float value)
{
    @autoreleasepool
    {
        [] (::id handle, float value) -> void
        {
            ::UISlider* slider = (::UISlider*)handle;
            [slider setValue:value animated:false];
        } (::g::ObjC::Object::GetHandle(handle), value);
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/Switch.uno
// ------------------------------------------------------------------------

// public sealed extern class Switch
// {
static void Switch_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[23] = ::g::Fuse::Controls::Native::IToggleViewHost_typeof();
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(Switch_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Switch_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Switch_type, interface2),
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface3));
    type->SetFields(10,
        ::TYPES[23/*Fuse.Controls.Native.IToggleViewHost*/], offsetof(Switch, _host), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(Switch, _valueChangedEvent), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Switch__New3_fn, 0, true, type, 1, ::TYPES[23/*Fuse.Controls.Native.IToggleViewHost*/]),
        new uFunction("set_Value", NULL, (void*)Switch__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.iOS.Switch", options);
    type->fp_build_ = Switch_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))Switch__Dispose_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Switch__Dispose_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host)
void Switch__ctor_5_fn(Switch* __this, uObject* host)
{
    __this->ctor_5(host);
}

// private static ObjC.Object Create()
void Switch__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = Switch::Create();
}

// public override sealed void Dispose()
void Switch__Dispose_fn(Switch* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Switch", "Dispose()");
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_valueChangedEvent), ::TYPES[2/*Uno.IDisposable*/]));
    __this->_valueChangedEvent = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static bool GetValue(ObjC.Object handle)
void Switch__GetValue_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = Switch::GetValue(handle);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host)
void Switch__New3_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New3(host);
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent)
void Switch__OnValueChanged_fn(Switch* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    __this->OnValueChanged(sender, uiEvent);
}

// private static void SetValue(ObjC.Object handle, bool value)
void Switch__SetValue_fn(::g::ObjC::Object* handle, bool* value)
{
    Switch::SetValue(handle, *value);
}

// public void set_Value(bool value)
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance]
void Switch::ctor_5(uObject* host)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Switch", ".ctor(Fuse.Controls.Native.IToggleViewHost)");
    ctor_4(Switch::Create());
    _host = host;
    _valueChangedEvent = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddValueChangedCallback(Handle(), uDelegate::New(::TYPES[1/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)Switch__OnValueChanged_fn, this));
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent) [instance]
void Switch::OnValueChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Switch", "OnValueChanged(ObjC.Object,ObjC.Object)");
    ::g::Fuse::Controls::Native::IToggleViewHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[23/*Fuse.Controls.Native.IToggleViewHost*/]), Switch::GetValue(Handle()));
}

// public void set_Value(bool value) [instance]
void Switch::Value(bool value)
{
    Switch::SetValue(Handle(), value);
}

// private static ObjC.Object Create() [static]
::g::ObjC::Object* Switch::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return [[::UISwitch alloc] init];
        } ());
        
    }
    
}

// private static bool GetValue(ObjC.Object handle) [static]
bool Switch::GetValue(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            ::UISwitch* sw = (::UISwitch*)handle;
            return [sw isOn];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static]
Switch* Switch::New3(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_5(host);
    return obj1;
}

// private static void SetValue(ObjC.Object handle, bool value) [static]
void Switch::SetValue(::g::ObjC::Object* handle, bool value)
{
    @autoreleasepool
    {
        [] (::id handle, bool value) -> void
        {
            ::UISwitch* sw = (::UISwitch*)handle;
            [sw setOn:value];
        } (::g::ObjC::Object::GetHandle(handle), value);
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/TextEdit.uno
// --------------------------------------------------------------------------

// internal static extern class TextEditSpeedHack
// {
static void TextEditSpeedHack_build(uType* type)
{
    ::TYPES[24] = ::g::Uno::Platform::iOSDisplay_typeof();
    type->SetDependencies(
        ::g::Uno::Platform::Displays_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&TextEditSpeedHack::_done_, uFieldFlagsStatic);
}

uClassType* TextEditSpeedHack_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.TextEditSpeedHack", options);
    type->fp_build_ = TextEditSpeedHack_build;
    return type;
}

// public static void Run()
void TextEditSpeedHack__Run_fn()
{
    TextEditSpeedHack::Run();
}

// private static void RunInner(ObjC.Object win)
void TextEditSpeedHack__RunInner_fn(::g::ObjC::Object* win)
{
    TextEditSpeedHack::RunInner(win);
}

bool TextEditSpeedHack::_done_;

// public static void Run() [static]
void TextEditSpeedHack::Run()
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextEditSpeedHack", "Run()");

    if (TextEditSpeedHack::_done_)
        return;

    TextEditSpeedHack::_done_ = true;
    ::g::Uno::Platform::iOSDisplay* d = uCast< ::g::Uno::Platform::iOSDisplay*>(::g::Uno::Platform::Displays::MainDisplay(), ::TYPES[24/*Uno.Platform.iOSDisplay*/]);
    ::g::ObjC::Object* wobj = d->_handle;
    TextEditSpeedHack::RunInner(wobj);
}

// private static void RunInner(ObjC.Object win) [static]
void TextEditSpeedHack::RunInner(::g::ObjC::Object* win)
{
    @autoreleasepool
    {
        [] (::id win) -> void
        {
            UITextField* lagFreeField = [[UITextField alloc] init];
            UIWindow* window = (UIWindow*)win;
            [window addSubview:lagFreeField];
            [lagFreeField becomeFirstResponder];
            [lagFreeField resignFirstResponder];
            [lagFreeField removeFromSuperview];
        } (::g::ObjC::Object::GetHandle(win));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/TextView.uno
// --------------------------------------------------------------------------

// public sealed extern class TextView
// {
static void TextView_build(uType* type)
{
    ::TYPES[25] = ::g::Fuse::Controls::Native::ITextView_typeof();
    type->SetDependencies(
        ::g::Fuse::Controls::Native::iOS::FontCache_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextView_type, interface2),
        ::TYPES[25/*Fuse.Controls.Native.ITextView*/], offsetof(TextView_type, interface3));
    type->SetFields(10,
        ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder_typeof(), offsetof(TextView, _builder), 0,
        ::g::Uno::Float_typeof(), offsetof(TextView, _fontSize), 0,
        ::g::Fuse::Font_typeof(), offsetof(TextView, _font), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)TextView__New3_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)TextView__New4_fn, 0, true, type, 1, ::g::ObjC::Object_typeof()));
}

TextView_type* TextView_typeof()
{
    static uSStrong<TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(TextView_type);
    type = (TextView_type*)uClassType::New("Fuse.Controls.Native.iOS.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New3_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))TextView__FuseControlsNativeITextViewset_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int32_t*))TextView__FuseControlsNativeITextViewset_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int32_t*))TextView__FuseControlsNativeITextViewset_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))TextView__FuseControlsNativeITextViewset_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))TextView__FuseControlsNativeITextViewset_FontSize_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int32_t*))TextView__FuseControlsNativeITextViewset_TextAlignment_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))TextView__FuseControlsNativeITextViewset_Font_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))TextView__FuseControlsNativeITextViewset_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int32_t*))TextView__FuseControlsNativeITextViewset_TextTruncation_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public TextView()
void TextView__ctor_5_fn(TextView* __this)
{
    __this->ctor_5();
}

// public TextView(ObjC.Object handle)
void TextView__ctor_6_fn(TextView* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_6(handle);
}

// private static ObjC.Object Create()
void TextView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = TextView::Create();
}

// private void Fuse.Controls.Native.ITextView.set_Font(Fuse.Font value)
void TextView__FuseControlsNativeITextViewset_Font_fn(TextView* __this, ::g::Fuse::Font* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_Font(Fuse.Font)");
    ::g::Fuse::Internal::FontFaceDescriptor* ret3;
    __this->_font = value;

    if (value == NULL)
        return;

    if (uPtr(uPtr(value)->Descriptors)->Count() > 0)
    {
        ::g::ObjC::Object* font = ::g::Fuse::Controls::Native::iOS::FontCache::Get((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(value)->Descriptors), uCRef<int32_t>(0), &ret3), ret3), __this->_fontSize);
        uPtr(__this->_builder)->SetFont(font);
        __this->UpdateText();
    }
}

// private void Fuse.Controls.Native.ITextView.set_FontSize(float value)
void TextView__FuseControlsNativeITextViewset_FontSize_fn(TextView* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_FontSize(float)");
    float value_ = *value;
    __this->_fontSize = value_;
    ::g::Fuse::Controls::Native::ITextView::Font(uInterface((uObject*)__this, ::TYPES[25/*Fuse.Controls.Native.ITextView*/]), __this->_font);
}

// private void Fuse.Controls.Native.ITextView.set_LineSpacing(float value)
void TextView__FuseControlsNativeITextViewset_LineSpacing_fn(TextView* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_LineSpacing(float)");
    float value_ = *value;
    uPtr(__this->_builder)->SetLineSpacing(value_);
    __this->UpdateText();
}

// private void Fuse.Controls.Native.ITextView.set_MaxLength(int value)
void TextView__FuseControlsNativeITextViewset_MaxLength_fn(TextView* __this, int32_t* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment value)
void TextView__FuseControlsNativeITextViewset_TextAlignment_fn(TextView* __this, int32_t* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment)");
    int32_t value_ = *value;
    uPtr(__this->_builder)->SetTextAlignment(value_);
    __this->UpdateText();
}

// private void Fuse.Controls.Native.ITextView.set_TextColor(float4 value)
void TextView__FuseControlsNativeITextViewset_TextColor_fn(TextView* __this, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_TextColor(float4)");
    ::g::Uno::Float4 value_ = *value;
    uPtr(__this->_builder)->SetTextColor(value_);
    __this->UpdateText();
}

// private void Fuse.Controls.Native.ITextView.set_TextTruncation(Fuse.Controls.TextTruncation value)
void TextView__FuseControlsNativeITextViewset_TextTruncation_fn(TextView* __this, int32_t* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping value)
void TextView__FuseControlsNativeITextViewset_TextWrapping_fn(TextView* __this, int32_t* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping)");
    int32_t value_ = *value;
    uPtr(__this->_builder)->SetTextWrapping(value_);
    __this->UpdateText();
}

// private void Fuse.Controls.Native.ITextView.set_Value(string value)
void TextView__FuseControlsNativeITextViewset_Value_fn(TextView* __this, uString* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_Value(string)");
    uPtr(__this->_builder)->SetValue(value);
    __this->UpdateText();
}

// public TextView New()
void TextView__New3_fn(TextView** __retval)
{
    *__retval = TextView::New3();
}

// public TextView New(ObjC.Object handle)
void TextView__New4_fn(::g::ObjC::Object* handle, TextView** __retval)
{
    *__retval = TextView::New4(handle);
}

// private static void SetValue(ObjC.Object handle, ObjC.Object attributedString)
void TextView__SetValue_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* attributedString)
{
    TextView::SetValue(handle, attributedString);
}

// private void UpdateText()
void TextView__UpdateText_fn(TextView* __this)
{
    __this->UpdateText();
}

// public TextView() [instance]
void TextView::ctor_5()
{
    _builder = ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder::New1();
    _fontSize = 12.0f;
    ctor_6(TextView::Create());
}

// public TextView(ObjC.Object handle) [instance]
void TextView::ctor_6(::g::ObjC::Object* handle)
{
    _builder = ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder::New1();
    _fontSize = 12.0f;
    ctor_4(handle);
}

// private void UpdateText() [instance]
void TextView::UpdateText()
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "UpdateText()");
    TextView::SetValue(Handle(), uPtr(_builder)->BuildAttributedString());
}

// private static ObjC.Object Create() [static]
::g::ObjC::Object* TextView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            auto label = [[::UILabel alloc] init];
            label.numberOfLines = 0;
            return label;
        } ());
        
    }
    
}

// public TextView New() [static]
TextView* TextView::New3()
{
    TextView* obj2 = (TextView*)uNew(TextView_typeof());
    obj2->ctor_5();
    return obj2;
}

// public TextView New(ObjC.Object handle) [static]
TextView* TextView::New4(::g::ObjC::Object* handle)
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_6(handle);
    return obj1;
}

// private static void SetValue(ObjC.Object handle, ObjC.Object attributedString) [static]
void TextView::SetValue(::g::ObjC::Object* handle, ::g::ObjC::Object* attributedString)
{
    @autoreleasepool
    {
        [] (::id handle, ::id attributedString) -> void
        {
            ::UILabel* label = (::UILabel*)handle;
            label.attributedText = (NSAttributedString*)attributedString;
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(attributedString));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.TimePicker/1.12.0/iOS/TimePicker.uno
// --------------------------------------------------------------------------------

// internal sealed extern class TimePickerView
// {
static void TimePickerView_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(TimePickerView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TimePickerView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TimePickerView_type, interface2),
        ::g::Fuse::Controls::ITimePickerView_typeof(), offsetof(TimePickerView_type, interface3));
    type->SetFields(10,
        ::g::Fuse::Controls::TimePicker_typeof(), offsetof(TimePickerView, _host), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(TimePickerView, _valueChangedEvent), 0);
}

TimePickerView_type* TimePickerView_typeof()
{
    static uSStrong<TimePickerView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TimePickerView);
    options.TypeSize = sizeof(TimePickerView_type);
    type = (TimePickerView_type*)uClassType::New("Fuse.Controls.Native.iOS.TimePickerView", options);
    type->fp_build_ = TimePickerView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))TimePickerView__Dispose_fn;
    type->interface3.fp_OnRooted = (void(*)(uObject*))TimePickerView__OnRooted_fn;
    type->interface3.fp_OnUnrooted = (void(*)(uObject*))TimePickerView__OnUnrooted_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, ::g::Uno::DateTime*))TimePickerView__set_Value_fn;
    type->interface3.fp_set_Is24HourView = (void(*)(uObject*, bool*))TimePickerView__set_Is24HourView_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TimePickerView__Dispose_fn;
    return type;
}

// public TimePickerView(Fuse.Controls.TimePicker host)
void TimePickerView__ctor_5_fn(TimePickerView* __this, ::g::Fuse::Controls::TimePicker* host)
{
    __this->ctor_5(host);
}

// private static ObjC.Object Create()
void TimePickerView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = TimePickerView::Create();
}

// public override sealed void Dispose()
void TimePickerView__Dispose_fn(TimePickerView* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TimePickerView", "Dispose()");
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_valueChangedEvent), ::TYPES[2/*Uno.IDisposable*/]));
    __this->_valueChangedEvent = NULL;
    __this->_host = NULL;
}

// private ObjC.Object GetTime(ObjC.Object datePickerHandle)
void TimePickerView__GetTime_fn(TimePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object** __retval)
{
    *__retval = __this->GetTime(datePickerHandle);
}

// public void set_Is24HourView(bool value)
void TimePickerView__set_Is24HourView_fn(TimePickerView* __this, bool* value)
{
    __this->Is24HourView(*value);
}

// public TimePickerView New(Fuse.Controls.TimePicker host)
void TimePickerView__New3_fn(::g::Fuse::Controls::TimePicker* host, TimePickerView** __retval)
{
    *__retval = TimePickerView::New3(host);
}

// public void OnRooted()
void TimePickerView__OnRooted_fn(TimePickerView* __this)
{
    __this->OnRooted();
}

// public void OnUnrooted()
void TimePickerView__OnUnrooted_fn(TimePickerView* __this)
{
    __this->OnUnrooted();
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object args)
void TimePickerView__OnValueChanged_fn(TimePickerView* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    __this->OnValueChanged(sender, args);
}

// private void SetTime(ObjC.Object datePickerHandle, ObjC.Object time)
void TimePickerView__SetTime_fn(TimePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* time)
{
    __this->SetTime(datePickerHandle, time);
}

// public Uno.DateTime get_Value()
void TimePickerView__get_Value_fn(TimePickerView* __this, ::g::Uno::DateTime* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(Uno.DateTime value)
void TimePickerView__set_Value_fn(TimePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->Value(*value);
}

// public TimePickerView(Fuse.Controls.TimePicker host) [instance]
void TimePickerView::ctor_5(::g::Fuse::Controls::TimePicker* host)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TimePickerView", ".ctor(Fuse.Controls.TimePicker)");
    ctor_4(TimePickerView::Create());
    _host = host;
    Value(uPtr(_host)->Value());
    _valueChangedEvent = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddValueChangedCallback(Handle(), uDelegate::New(::TYPES[1/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)TimePickerView__OnValueChanged_fn, this));
}

// private ObjC.Object GetTime(ObjC.Object datePickerHandle) [instance]
::g::ObjC::Object* TimePickerView::GetTime(::g::ObjC::Object* datePickerHandle)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id datePickerHandle) -> ::id
        {
            UIDatePicker *dp = (UIDatePicker *)datePickerHandle;
            
            return [dp date];
        } (::g::ObjC::Object::GetHandle(datePickerHandle)));
        
    }
    
}

// public void set_Is24HourView(bool value) [instance]
void TimePickerView::Is24HourView(bool value)
{
}

// public void OnRooted() [instance]
void TimePickerView::OnRooted()
{
}

// public void OnUnrooted() [instance]
void TimePickerView::OnUnrooted()
{
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object args) [instance]
void TimePickerView::OnValueChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TimePickerView", "OnValueChanged(ObjC.Object,ObjC.Object)");
    uPtr(_host)->OnNativeViewValueChanged(Value());
}

// private void SetTime(ObjC.Object datePickerHandle, ObjC.Object time) [instance]
void TimePickerView::SetTime(::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* time)
{
    @autoreleasepool
    {
        [] (::id datePickerHandle, ::id time) -> void
        {
            UIDatePicker *dp = (UIDatePicker *)datePickerHandle;
            
            [dp setDate:time animated:true];
        } (::g::ObjC::Object::GetHandle(datePickerHandle), ::g::ObjC::Object::GetHandle(time));
        
    }
    
}

// public Uno.DateTime get_Value() [instance]
::g::Uno::DateTime TimePickerView::Value()
{
    uStackFrame __("Fuse.Controls.Native.iOS.TimePickerView", "get_Value()");
    return ::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ConvertNSDateToDateTime(::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ReconstructUtcTime(GetTime(Handle())));
}

// public void set_Value(Uno.DateTime value) [instance]
void TimePickerView::Value(::g::Uno::DateTime value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TimePickerView", "set_Value(Uno.DateTime)");
    SetTime(Handle(), ::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ReconstructUtcTime(::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ConvertDateTimeToNSDate(value)));
}

// private static ObjC.Object Create() [static]
::g::ObjC::Object* TimePickerView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIDatePicker *dp = [[UIDatePicker alloc] init];
            
            [dp setDatePickerMode:UIDatePickerModeTime];
            
            // Make sure the time picker interprets date values in UTC
            [dp setTimeZone:[NSTimeZone timeZoneForSecondsFromGMT:0]];
            
            return dp;
        } ());
        
    }
    
}

// public TimePickerView New(Fuse.Controls.TimePicker host) [static]
TimePickerView* TimePickerView::New3(::g::Fuse::Controls::TimePicker* host)
{
    TimePickerView* obj1 = (TimePickerView*)uNew(TimePickerView_typeof());
    obj1->ctor_5(host);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/UIControlEvent.uno
// --------------------------------------------------------------------------------

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
    type = (UIControlEvent_type*)uClassType::New("Fuse.Controls.Native.iOS.UIControlEvent", options);
    type->fp_build_ = UIControlEvent_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))UIControlEvent__UnoIDisposableDispose_fn;
    return type;
}

// private UIControlEvent(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type)
void UIControlEvent__ctor__fn(UIControlEvent* __this, ::g::ObjC::Object* uiControl, uDelegate* handler, int32_t* type)
{
    __this->ctor_(uiControl, handler, *type);
}

// public static Uno.IDisposable AddAllEditingEventsCallback(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler)
void UIControlEvent__AddAllEditingEventsCallback_fn(::g::ObjC::Object* uiControl, uDelegate* handler, uObject** __retval)
{
    *__retval = UIControlEvent::AddAllEditingEventsCallback(uiControl, handler);
}

// public static Uno.IDisposable AddAllTouchEventsCallback(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler)
void UIControlEvent__AddAllTouchEventsCallback_fn(::g::ObjC::Object* uiControl, uDelegate* handler, uObject** __retval)
{
    *__retval = UIControlEvent::AddAllTouchEventsCallback(uiControl, handler);
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

// public static Uno.IDisposable AddAllEditingEventsCallback(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler) [static]
uObject* UIControlEvent::AddAllEditingEventsCallback(::g::ObjC::Object* uiControl, uDelegate* handler)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIControlEvent", "AddAllEditingEventsCallback(ObjC.Object,Uno.Action<ObjC.Object, ObjC.Object>)");
    return (uObject*)UIControlEvent::New1(uiControl, handler, (int)UIControlEventAllEditingEvents);
}

// public static Uno.IDisposable AddAllTouchEventsCallback(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler) [static]
uObject* UIControlEvent::AddAllTouchEventsCallback(::g::ObjC::Object* uiControl, uDelegate* handler)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIControlEvent", "AddAllTouchEventsCallback(ObjC.Object,Uno.Action<ObjC.Object, ObjC.Object>)");
    return (uObject*)UIControlEvent::New1(uiControl, handler, (int)UIControlEventAllTouchEvents);
}

// public static Uno.IDisposable AddValueChangedCallback(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler) [static]
uObject* UIControlEvent::AddValueChangedCallback(::g::ObjC::Object* uiControl, uDelegate* handler)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIControlEvent", "AddValueChangedCallback(ObjC.Object,Uno.Action<ObjC.Object, ObjC.Object>)");
    return (uObject*)UIControlEvent::New1(uiControl, handler, (int)UIControlEventValueChanged);
}

// private static ObjC.Object Create(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) [static]
::g::ObjC::Object* UIControlEvent::Create(::g::ObjC::Object* uiControl, uDelegate* handler, int32_t type)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id uiControl, ::uObjC::Function<void, ::id, ::id> handler, int32_t type) -> ::id
        {
            UIControlEventHandler* h = [[UIControlEventHandler alloc] init];
            [h setCallback:handler];
            ::UIControl* control = (::UIControl*)uiControl;
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
            UIControlEventHandler* h = (UIControlEventHandler*)eventHandler;
            ::UIControl* control = (::UIControl*)uiControl;
            [control removeTarget:h action:@selector(action:forEvent:) forControlEvents:(UIControlEvents)type];
        } (::g::ObjC::Object::GetHandle(uiControl), ::g::ObjC::Object::GetHandle(eventHandler), type);
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/PointerCaptureAdapter.uno
// ---------------------------------------------------------------------------------------

// internal static extern class UIEventExtensions
// {
static void UIEventExtensions_build(uType* type)
{
    ::TYPES[26] = ::g::ObjC::Object_typeof()->Array();
}

uClassType* UIEventExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.UIEventExtensions", options);
    type->fp_build_ = UIEventExtensions_build;
    return type;
}

// public static ObjC.Object[] GetTouchesForView(ObjC.Object handle, ObjC.Object viewHandle)
void UIEventExtensions__GetTouchesForView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, uArray** __retval)
{
    *__retval = UIEventExtensions::GetTouchesForView(handle, viewHandle);
}

// private static long GetTouchesForViewCount(ObjC.Object handle, ObjC.Object viewHandle)
void UIEventExtensions__GetTouchesForViewCount_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int64_t* __retval)
{
    *__retval = UIEventExtensions::GetTouchesForViewCount(handle, viewHandle);
}

// private static ObjC.Object GetTouchForView(ObjC.Object handle, ObjC.Object viewHandle, int index)
void UIEventExtensions__GetTouchForView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int32_t* index, ::g::ObjC::Object** __retval)
{
    *__retval = UIEventExtensions::GetTouchForView(handle, viewHandle, *index);
}

// public static ObjC.Object[] GetTouchesForView(ObjC.Object handle, ObjC.Object viewHandle) [static]
uArray* UIEventExtensions::GetTouchesForView(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIEventExtensions", "GetTouchesForView(ObjC.Object,ObjC.Object)");
    int32_t touchCount = (int32_t)UIEventExtensions::GetTouchesForViewCount(handle, viewHandle);
    uArray* touches = uArray::New(::TYPES[26/*ObjC.Object[]*/], touchCount);

    for (int32_t i = 0; i < touchCount; i++)
        uPtr(touches)->Strong< ::g::ObjC::Object*>(i) = UIEventExtensions::GetTouchForView(handle, viewHandle, i);

    return touches;
}

// private static long GetTouchesForViewCount(ObjC.Object handle, ObjC.Object viewHandle) [static]
int64_t UIEventExtensions::GetTouchesForViewCount(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle)
{
    @autoreleasepool
    {
        return [] (::id handle, ::id viewHandle) -> int64_t
        {
            ::UIEvent* ev = (::UIEvent*)handle;
            ::UIView* view = (::UIView*)viewHandle;
            return [[[ev touchesForView:view] allObjects] count];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(viewHandle));
        
    }
    
}

// private static ObjC.Object GetTouchForView(ObjC.Object handle, ObjC.Object viewHandle, int index) [static]
::g::ObjC::Object* UIEventExtensions::GetTouchForView(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int32_t index)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, ::id viewHandle, int32_t index) -> ::id
        {
            ::UIEvent* ev = (::UIEvent*)handle;
            ::UIView* view = (::UIView*)viewHandle;
            return [[[ev touchesForView:view] allObjects] objectAtIndex:index];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(viewHandle), index));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/PointerCaptureAdapter.uno
// ---------------------------------------------------------------------------------------

// internal static extern class UITouchExtensions
// {
static void UITouchExtensions_build(uType* type)
{
}

uClassType* UITouchExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.UITouchExtensions", options);
    type->fp_build_ = UITouchExtensions_build;
    return type;
}

// public static Fuse.Controls.Native.iOS.TouchPhase GetTouchPhase(ObjC.Object handle)
void UITouchExtensions__GetTouchPhase_fn(::g::ObjC::Object* handle, int32_t* __retval)
{
    *__retval = UITouchExtensions::GetTouchPhase(handle);
}

// public static Fuse.Controls.Native.iOS.TouchPhase GetTouchPhase(ObjC.Object handle) [static]
int32_t UITouchExtensions::GetTouchPhase(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> int32_t
        {
            ::UITouch* touch = (::UITouch*)handle;
            UITouchPhase phase = [touch phase];
            
            switch (phase)
            {
            	case UITouchPhaseBegan:
            		return 0;
            	case UITouchPhaseMoved:
            		return 1;
            	case UITouchPhaseStationary:
            		return 2;
            	case UITouchPhaseEnded:
            		return 3;
            	case UITouchPhaseCancelled:
            		return 4;
            	default:
            		[NSException raise:@"Unknown touchphase" format:@"Touch phase of %ld is invalid", (long)phase];
                    return true;
            		break;
            }
            
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/View.uno
// ----------------------------------------------------------------------

// public abstract extern class View
// {
static void View_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface1));
    type->SetFields(9,
        ::g::ObjC::Object_typeof(), offsetof(View, _handle), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Handle", NULL, (void*)View__get_Handle_fn, 0, false, ::g::ObjC::Object_typeof(), 0));
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.iOS.View", options);
    type->fp_build_ = View_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected View(ObjC.Object handle, [Fuse.Controls.Native.ViewHandle.InputMode inputmode])
void View__ctor_2_fn(View* __this, ::g::ObjC::Object* handle, int32_t* inputmode)
{
    __this->ctor_2(handle, *inputmode);
}

// protected View(ObjC.Object handle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputmode])
void View__ctor_3_fn(View* __this, ::g::ObjC::Object* handle, bool* isLeafView, int32_t* inputmode)
{
    __this->ctor_3(handle, *isLeafView, *inputmode);
}

// public ObjC.Object get_Handle()
void View__get_Handle_fn(View* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Handle();
}

// protected View(ObjC.Object handle, [Fuse.Controls.Native.ViewHandle.InputMode inputmode]) [instance]
void View::ctor_2(::g::ObjC::Object* handle, int32_t inputmode)
{
    ctor_3(handle, false, inputmode);
}

// protected View(ObjC.Object handle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputmode]) [instance]
void View::ctor_3(::g::ObjC::Object* handle, bool isLeafView, int32_t inputmode)
{
    ctor_1(handle, isLeafView, inputmode, 0);
    _handle = handle;
}

// public ObjC.Object get_Handle() [instance]
::g::ObjC::Object* View::Handle()
{
    return _handle;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
