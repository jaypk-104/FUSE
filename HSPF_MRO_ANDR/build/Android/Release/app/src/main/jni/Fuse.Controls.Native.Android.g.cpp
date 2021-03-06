// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.AutoCapitalizationHint.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.DatePicker.h>
#include <Fuse.Controls.DatePickerBase.h>
#include <Fuse.Controls.Native.Android.Button.h>
#include <Fuse.Controls.Native.Android.CanvasViewGroup.h>
#include <Fuse.Controls.Native.Android.DatePickerView.h>
#include <Fuse.Controls.Native.Android.DateTimeConverterHelpers.h>
#include <Fuse.Controls.Native.Android.FocusChangedListener.h>
#include <Fuse.Controls.Native.Android.FocusManager.h>
#include <Fuse.Controls.Native.Android.GraphicsViewBase.h>
#include <Fuse.Controls.Native.Android.ImageView.h>
#include <Fuse.Controls.Native.Android.InputDispatch.h>
#include <Fuse.Controls.Native.Android.JavaMap.h>
#include <Fuse.Controls.Native.Android.LeafView.h>
#include <Fuse.Controls.Native.Android.MotionEvent.h>
#include <Fuse.Controls.Native.Android.ScrollView.h>
#include <Fuse.Controls.Native.Android.Slider.h>
#include <Fuse.Controls.Native.Android.SoftKeyboard.h>
#include <Fuse.Controls.Native.Android.SurfaceView.h>
#include <Fuse.Controls.Native.Android.Switch.h>
#include <Fuse.Controls.Native.Android.TextEdit.h>
#include <Fuse.Controls.Native.Android.TextInput.h>
#include <Fuse.Controls.Native.Android.TextureView.h>
#include <Fuse.Controls.Native.Android.TextView.h>
#include <Fuse.Controls.Native.Android.Typeface.h>
#include <Fuse.Controls.Native.Android.TypefaceCache.h>
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.Native.Android.ViewGroup.h>
#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Fuse.Controls.Native.NativeRootViewport.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Controls.Native.ViewHandle.Invalidation.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.Drawing.NativeSurface.h>
#include <Fuse.Drawing.Surface.h>
#include <Fuse.Font.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.LayoutPriority.h>
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
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Action4-4.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Color.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.DateTime.h>
#include <Uno.DateTimeKind.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.UInt.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[5];
static uType* TYPES[27];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/Button.uno
// ----------------------------------------------------------------------------

// public sealed extern class Button
// {
static void Button_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Button_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Button_type, interface1),
        ::g::Fuse::Controls::Native::ILabelView_typeof(), offsetof(Button_type, interface2));
    type->SetFields(6);
}

Button_type* Button_typeof()
{
    static uSStrong<Button_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(Button_type);
    type = (Button_type*)uClassType::New("Fuse.Controls.Native.Android.Button", options);
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New5_fn;
    type->interface2.fp_set_Text = (void(*)(uObject*, uString*))Button__set_Text_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public Button()
void Button__ctor_9_fn(Button* __this)
{
    __this->ctor_9();
}

// private static Java.Object Create()
void Button__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Button::Create();
}

// public Button New()
void Button__New5_fn(Button** __retval)
{
    *__retval = Button::New5();
}

// private static void SetText(Java.Object handle, string text)
void Button__SetText_fn(::g::Java::Object* handle, uString* text)
{
    Button::SetText(handle, text);
}

// public void set_Text(string value)
void Button__set_Text_fn(Button* __this, uString* value)
{
    __this->Text(value);
}

// public Button() [instance]
void Button::ctor_9()
{
    ctor_7(Button::Create());
}

// public void set_Text(string value) [instance]
void Button::Text(uString* value)
{
    Button::SetText(Handle(), value);
}

// private static Java.Object Create() [static]
::g::Java::Object* Button::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create128", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Button New() [static]
Button* Button::New5()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_9();
    return obj1;
}

// private static void SetText(Java.Object handle, string text) [static]
void Button::SetText(::g::Java::Object* handle, uString* text)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText129", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/CanvasViewGroup.uno
// -------------------------------------------------------------------------------------

// public sealed extern class CanvasViewGroup
// {
static void CanvasViewGroup_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Attempt to draw native canvas without surface");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/CanvasViewGroup.uno");
    ::STRINGS[2] = uString::Const("OnDraw");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(CanvasViewGroup_type, interface0),
        ::g::Fuse::Drawing::INativeSurfaceOwner_typeof(), offsetof(CanvasViewGroup_type, interface1));
    type->SetFields(5,
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
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CanvasViewGroup);
    options.TypeSize = sizeof(CanvasViewGroup_type);
    type = (CanvasViewGroup_type*)uClassType::New("Fuse.Controls.Native.Android.CanvasViewGroup", options);
    type->fp_build_ = CanvasViewGroup_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))CanvasViewGroup__Dispose_fn;
    type->interface1.fp_GetSurface = (void(*)(uObject*, ::g::Fuse::Drawing::Surface**))CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CanvasViewGroup__Dispose_fn;
    return type;
}

// public CanvasViewGroup(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint)
void CanvasViewGroup__ctor_4_fn(CanvasViewGroup* __this, uObject* surfaceDrawable, float* pixelsPerPoint)
{
    __this->ctor_4(surfaceDrawable, *pixelsPerPoint);
}

// public override sealed void Dispose()
void CanvasViewGroup__Dispose_fn(CanvasViewGroup* __this)
{
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    __this->_surfaceDrawable = NULL;
    __this->_nativeSurface = NULL;
}

// internal Fuse.Drawing.Surface Fuse.Drawing.INativeSurfaceOwner.GetSurface()
void CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn(CanvasViewGroup* __this, ::g::Fuse::Drawing::Surface** __retval)
{
    if (__this->_nativeSurface == NULL)
    {
        __this->InstallDrawlistener(__this->NativeHandle, uDelegate::New(::TYPES[0/*Uno.Action<Java.Object>*/], (void*)CanvasViewGroup__OnDraw_fn, __this));
        __this->_nativeSurface = ::g::Fuse::Drawing::NativeSurface::New1();
    }

    return *__retval = __this->_nativeSurface, void();
}

// private void InstallDrawlistener(Java.Object handle, Uno.Action<Java.Object> callback)
void CanvasViewGroup__InstallDrawlistener_fn(CanvasViewGroup* __this, ::g::Java::Object* handle, uDelegate* callback)
{
    __this->InstallDrawlistener(handle, callback);
}

// private static Java.Object Instantiate()
void CanvasViewGroup__Instantiate_fn(::g::Java::Object** __retval)
{
    *__retval = CanvasViewGroup::Instantiate();
}

// public CanvasViewGroup New(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint)
void CanvasViewGroup__New5_fn(uObject* surfaceDrawable, float* pixelsPerPoint, CanvasViewGroup** __retval)
{
    *__retval = CanvasViewGroup::New5(surfaceDrawable, *pixelsPerPoint);
}

// private void OnDraw(Java.Object canvas)
void CanvasViewGroup__OnDraw_fn(CanvasViewGroup* __this, ::g::Java::Object* canvas)
{
    __this->OnDraw(canvas);
}

// public CanvasViewGroup(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) [instance]
void CanvasViewGroup::ctor_4(uObject* surfaceDrawable, float pixelsPerPoint)
{
    ctor_3(CanvasViewGroup::Instantiate(), false, false, 1);
    _surfaceDrawable = surfaceDrawable;
    _pixelsPerPoint = pixelsPerPoint;
}

// private void InstallDrawlistener(Java.Object handle, Uno.Action<Java.Object> callback) [instance]
void CanvasViewGroup::InstallDrawlistener(::g::Java::Object* handle, uDelegate* callback)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InstallDrawlistener130", "(Lcom/uno/UnoObject;Ljava/lang/Object;Lcom/foreign/Uno/Action_Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _ucallback=callback;
        jobject _callback = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ucallback, "com.foreign.Uno.Action_Object");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_callback);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_callback!=NULL) { U_JNIVAR->DeleteLocalRef(_callback); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnDraw(Java.Object canvas) [instance]
void CanvasViewGroup::OnDraw(::g::Java::Object* canvas)
{
    if (_nativeSurface == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[0/*"Attempt to ...*/], this, ::STRINGS[1/*"/usr/local/...*/], 38, ::STRINGS[2/*"OnDraw"*/]);
        return;
    }

    uPtr(_nativeSurface)->Begin1(canvas, _pixelsPerPoint);
    uPtr(_nativeSurface)->DrawLocal(_surfaceDrawable);
    uPtr(_nativeSurface)->End();
}

// private static Java.Object Instantiate() [static]
::g::Java::Object* CanvasViewGroup::Instantiate()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Instantiate131", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public CanvasViewGroup New(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) [static]
CanvasViewGroup* CanvasViewGroup::New5(uObject* surfaceDrawable, float pixelsPerPoint)
{
    CanvasViewGroup* obj1 = (CanvasViewGroup*)uNew(CanvasViewGroup_typeof());
    obj1->ctor_4(surfaceDrawable, pixelsPerPoint);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.DatePicker/1.12.0/Android/DatePicker.uno
// ------------------------------------------------------------------------------------

// internal sealed extern class DatePickerView
// {
static void DatePickerView_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(DatePickerView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(DatePickerView_type, interface1),
        ::g::Fuse::Controls::IDatePickerView_typeof(), offsetof(DatePickerView_type, interface2));
    type->SetFields(6,
        ::g::Fuse::Controls::DatePicker_typeof(), offsetof(DatePickerView, _host), 0,
        ::g::Uno::DateTime_typeof(), offsetof(DatePickerView, _pollValueCache), 0,
        ::g::Uno::Int_typeof(), offsetof(DatePickerView, writebackFrameCounter), 0);
}

DatePickerView_type* DatePickerView_typeof()
{
    static uSStrong<DatePickerView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DatePickerView);
    options.TypeSize = sizeof(DatePickerView_type);
    type = (DatePickerView_type*)uClassType::New("Fuse.Controls.Native.Android.DatePickerView", options);
    type->fp_build_ = DatePickerView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))DatePickerView__Dispose_fn;
    type->fp_OnSizeChanged = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))DatePickerView__OnSizeChanged_fn;
    type->interface2.fp_OnRooted = (void(*)(uObject*))DatePickerView__OnRooted_fn;
    type->interface2.fp_OnUnrooted = (void(*)(uObject*))DatePickerView__OnUnrooted_fn;
    type->interface2.fp_set_Value = (void(*)(uObject*, ::g::Uno::DateTime*))DatePickerView__set_Value_fn;
    type->interface2.fp_set_MinValue = (void(*)(uObject*, ::g::Uno::DateTime*))DatePickerView__set_MinValue_fn;
    type->interface2.fp_set_MaxValue = (void(*)(uObject*, ::g::Uno::DateTime*))DatePickerView__set_MaxValue_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))DatePickerView__Dispose_fn;
    return type;
}

// public DatePickerView(Fuse.Controls.DatePicker host)
void DatePickerView__ctor_9_fn(DatePickerView* __this, ::g::Fuse::Controls::DatePicker* host)
{
    __this->ctor_9(host);
}

// private static Java.Object Create()
void DatePickerView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = DatePickerView::Create();
}

// public override sealed void Dispose()
void DatePickerView__Dispose_fn(DatePickerView* __this)
{
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    __this->_host = NULL;
}

// private static int GetApiLevel()
void DatePickerView__GetApiLevel_fn(int32_t* __retval)
{
    *__retval = DatePickerView::GetApiLevel();
}

// private long GetDateInMsSince1970InUtc(Java.Object datePickerHandle)
void DatePickerView__GetDateInMsSince1970InUtc_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* __retval)
{
    *__retval = __this->GetDateInMsSince1970InUtc(datePickerHandle);
}

// private void Init(Java.Object datePickerHandle)
void DatePickerView__Init_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle)
{
    __this->Init(datePickerHandle);
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
void DatePickerView__New5_fn(::g::Fuse::Controls::DatePicker* host, DatePickerView** __retval)
{
    *__retval = DatePickerView::New5(host);
}

// public void OnRooted()
void DatePickerView__OnRooted_fn(DatePickerView* __this)
{
    __this->OnRooted();
}

// protected internal override sealed void OnSizeChanged()
void DatePickerView__OnSizeChanged_fn(DatePickerView* __this)
{
    if (DatePickerView::GetApiLevel() >= 24)
        return;

    __this->writebackFrameCounter = 0;
}

// public void OnUnrooted()
void DatePickerView__OnUnrooted_fn(DatePickerView* __this)
{
    __this->OnUnrooted();
}

// private void OnValueChanged(Uno.DateTime value)
void DatePickerView__OnValueChanged_fn(DatePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->OnValueChanged(*value);
}

// private void PollViewValue()
void DatePickerView__PollViewValue_fn(DatePickerView* __this)
{
    __this->PollViewValue();
}

// private void SetDate(Java.Object datePickerHandle, long msSince1970InUtc)
void DatePickerView__SetDate_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* msSince1970InUtc)
{
    __this->SetDate(datePickerHandle, *msSince1970InUtc);
}

// private void SetMaxValue(Java.Object datePickerHandle, long msSince1970InUtc)
void DatePickerView__SetMaxValue_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* msSince1970InUtc)
{
    __this->SetMaxValue(datePickerHandle, *msSince1970InUtc);
}

// private void SetMinValue(Java.Object datePickerHandle, long msSince1970InUtc)
void DatePickerView__SetMinValue_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* msSince1970InUtc)
{
    __this->SetMinValue(datePickerHandle, *msSince1970InUtc);
}

// public void Update()
void DatePickerView__Update_fn(DatePickerView* __this)
{
    __this->Update();
}

// private void UpdatePollValueCache()
void DatePickerView__UpdatePollValueCache_fn(DatePickerView* __this)
{
    __this->UpdatePollValueCache();
}

// private void UpdateWriteback()
void DatePickerView__UpdateWriteback_fn(DatePickerView* __this)
{
    __this->UpdateWriteback();
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
void DatePickerView::ctor_9(::g::Fuse::Controls::DatePicker* host)
{
    ctor_7(DatePickerView::Create());
    _host = host;
    Init(Handle());
    MinValue(uPtr(_host)->MinValue());
    MaxValue(uPtr(_host)->MaxValue());
    Value(uPtr(_host)->Value());
    UpdatePollValueCache();
}

// private long GetDateInMsSince1970InUtc(Java.Object datePickerHandle) [instance]
int64_t DatePickerView::GetDateInMsSince1970InUtc(::g::Java::Object* datePickerHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDateInMsSince1970InUtc134", "(Lcom/uno/UnoObject;Ljava/lang/Object;)J");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _udatePickerHandle=datePickerHandle;
        jobject _datePickerHandle = (_udatePickerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udatePickerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jlong __jresult = U_JNIVAR->CallStaticLongMethod(__cls,__mtd,_this_,_datePickerHandle);
        int64_t __result = (int64_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_datePickerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_datePickerHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private void Init(Java.Object datePickerHandle) [instance]
void DatePickerView::Init(::g::Java::Object* datePickerHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Init135", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _udatePickerHandle=datePickerHandle;
        jobject _datePickerHandle = (_udatePickerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udatePickerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_datePickerHandle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_datePickerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_datePickerHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void set_MaxValue(Uno.DateTime value) [instance]
void DatePickerView::MaxValue(::g::Uno::DateTime value)
{
    SetMaxValue(Handle(), ::g::Fuse::Controls::Native::Android::DateTimeConverterHelpers::ConvertDateTimeToMsSince1970InUtc(value));
}

// public void set_MinValue(Uno.DateTime value) [instance]
void DatePickerView::MinValue(::g::Uno::DateTime value)
{
    SetMinValue(Handle(), ::g::Fuse::Controls::Native::Android::DateTimeConverterHelpers::ConvertDateTimeToMsSince1970InUtc(value));
}

// public void OnRooted() [instance]
void DatePickerView::OnRooted()
{
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)DatePickerView__Update_fn, this), 0);
}

// public void OnUnrooted() [instance]
void DatePickerView::OnUnrooted()
{
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)DatePickerView__Update_fn, this), 0);
}

// private void OnValueChanged(Uno.DateTime value) [instance]
void DatePickerView::OnValueChanged(::g::Uno::DateTime value)
{
    uPtr(_host)->OnNativeViewValueChanged(value);
}

// private void PollViewValue() [instance]
void DatePickerView::PollViewValue()
{
    if (::g::Uno::DateTime__op_Inequality(Value(), _pollValueCache))
    {
        OnValueChanged(Value());
        UpdatePollValueCache();
    }
}

// private void SetDate(Java.Object datePickerHandle, long msSince1970InUtc) [instance]
void DatePickerView::SetDate(::g::Java::Object* datePickerHandle, int64_t msSince1970InUtc)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetDate136", "(Lcom/uno/UnoObject;Ljava/lang/Object;J)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _udatePickerHandle=datePickerHandle;
        jobject _datePickerHandle = (_udatePickerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udatePickerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int64_t _umsSince1970InUtc=msSince1970InUtc;
        jlong _msSince1970InUtc = (jlong)_umsSince1970InUtc;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_datePickerHandle,_msSince1970InUtc);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_datePickerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_datePickerHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void SetMaxValue(Java.Object datePickerHandle, long msSince1970InUtc) [instance]
void DatePickerView::SetMaxValue(::g::Java::Object* datePickerHandle, int64_t msSince1970InUtc)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMaxValue137", "(Lcom/uno/UnoObject;Ljava/lang/Object;J)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _udatePickerHandle=datePickerHandle;
        jobject _datePickerHandle = (_udatePickerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udatePickerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int64_t _umsSince1970InUtc=msSince1970InUtc;
        jlong _msSince1970InUtc = (jlong)_umsSince1970InUtc;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_datePickerHandle,_msSince1970InUtc);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_datePickerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_datePickerHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void SetMinValue(Java.Object datePickerHandle, long msSince1970InUtc) [instance]
void DatePickerView::SetMinValue(::g::Java::Object* datePickerHandle, int64_t msSince1970InUtc)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMinValue138", "(Lcom/uno/UnoObject;Ljava/lang/Object;J)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _udatePickerHandle=datePickerHandle;
        jobject _datePickerHandle = (_udatePickerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_udatePickerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int64_t _umsSince1970InUtc=msSince1970InUtc;
        jlong _msSince1970InUtc = (jlong)_umsSince1970InUtc;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_datePickerHandle,_msSince1970InUtc);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_datePickerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_datePickerHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void Update() [instance]
void DatePickerView::Update()
{
    PollViewValue();
    UpdateWriteback();
}

// private void UpdatePollValueCache() [instance]
void DatePickerView::UpdatePollValueCache()
{
    _pollValueCache = Value();
}

// private void UpdateWriteback() [instance]
void DatePickerView::UpdateWriteback()
{
    if (DatePickerView::GetApiLevel() >= 24)
        return;

    if (writebackFrameCounter < 2)
    {
        writebackFrameCounter++;

        if (writebackFrameCounter == 2)
        {
            int64_t v = ::g::Fuse::Controls::Native::Android::DateTimeConverterHelpers::ConvertDateTimeToMsSince1970InUtc(Value());
            SetDate(Handle(), v - 1LL);
            SetDate(Handle(), v);
        }
    }
}

// public Uno.DateTime get_Value() [instance]
::g::Uno::DateTime DatePickerView::Value()
{
    int64_t msSince1970InUtc = GetDateInMsSince1970InUtc(Handle());
    return ::g::Fuse::Controls::Native::Android::DateTimeConverterHelpers::ConvertMsSince1970InUtcToDateTime(msSince1970InUtc);
}

// public void set_Value(Uno.DateTime value) [instance]
void DatePickerView::Value(::g::Uno::DateTime value)
{
    SetDate(Handle(), ::g::Fuse::Controls::Native::Android::DateTimeConverterHelpers::ConvertDateTimeToMsSince1970InUtc(value));
    UpdatePollValueCache();
}

// private static Java.Object Create() [static]
::g::Java::Object* DatePickerView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create132", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetApiLevel() [static]
int32_t DatePickerView::GetApiLevel()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetApiLevel133", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int32_t __result = (int32_t)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public DatePickerView New(Fuse.Controls.DatePicker host) [static]
DatePickerView* DatePickerView::New5(::g::Fuse::Controls::DatePicker* host)
{
    DatePickerView* obj1 = (DatePickerView*)uNew(DatePickerView_typeof());
    obj1->ctor_9(host);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/DateTimeConverterHelpers.uno
// ----------------------------------------------------------------------------------------------

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
    type = uClassType::New("Fuse.Controls.Native.Android.DateTimeConverterHelpers", options);
    type->fp_build_ = DateTimeConverterHelpers_build;
    return type;
}

// public static long ConvertDateTimeToMsSince1970InUtc(Uno.DateTime dt)
void DateTimeConverterHelpers__ConvertDateTimeToMsSince1970InUtc_fn(::g::Uno::DateTime* dt, int64_t* __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertDateTimeToMsSince1970InUtc(*dt);
}

// public static Uno.DateTime ConvertMsSince1970InUtcToDateTime(long msSince1970InUtc)
void DateTimeConverterHelpers__ConvertMsSince1970InUtcToDateTime_fn(int64_t* msSince1970InUtc, ::g::Uno::DateTime* __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertMsSince1970InUtcToDateTime(*msSince1970InUtc);
}

// public static long ConvertDateTimeToMsSince1970InUtc(Uno.DateTime dt) [static]
int64_t DateTimeConverterHelpers::ConvertDateTimeToMsSince1970InUtc(::g::Uno::DateTime dt)
{
    dt = dt.ToUniversalTime();
    int64_t dotNetTicks = dt.Ticks();
    int64_t dotNetTicksRelativeToUnixEpoch = dotNetTicks - 621355968000000000LL;
    int64_t msSince1970InUtc = dotNetTicksRelativeToUnixEpoch / 10000LL;
    return msSince1970InUtc;
}

// public static Uno.DateTime ConvertMsSince1970InUtcToDateTime(long msSince1970InUtc) [static]
::g::Uno::DateTime DateTimeConverterHelpers::ConvertMsSince1970InUtcToDateTime(int64_t msSince1970InUtc)
{
    int64_t dotNetTicksRelativeToUnixEpoch = msSince1970InUtc * 10000LL;
    int64_t dotNetTicks = dotNetTicksRelativeToUnixEpoch + 621355968000000000LL;
    return ::g::Uno::DateTime__New1(dotNetTicks, 1);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/TextEdit.uno
// ------------------------------------------------------------------------------

// internal sealed extern class FocusChangedListener
// {
static void FocusChangedListener_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FocusChangedListener_type, interface0));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(FocusChangedListener, _listener), 0,
        ::g::Java::Object_typeof(), offsetof(FocusChangedListener, _view), 0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof(), NULL), offsetof(FocusChangedListener, _callback), 0);
}

FocusChangedListener_type* FocusChangedListener_typeof()
{
    static uSStrong<FocusChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusChangedListener);
    options.TypeSize = sizeof(FocusChangedListener_type);
    type = (FocusChangedListener_type*)uClassType::New("Fuse.Controls.Native.Android.FocusChangedListener", options);
    type->fp_build_ = FocusChangedListener_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))FocusChangedListener__Dispose_fn;
    return type;
}

// private FocusChangedListener(Java.Object view, Uno.Action<Java.Object, bool> callback)
void FocusChangedListener__ctor__fn(FocusChangedListener* __this, ::g::Java::Object* view, uDelegate* callback)
{
    __this->ctor_(view, callback);
}

// public static Uno.IDisposable AddHandler(Java.Object view, Uno.Action<Java.Object, bool> callback)
void FocusChangedListener__AddHandler_fn(::g::Java::Object* view, uDelegate* callback, uObject** __retval)
{
    *__retval = FocusChangedListener::AddHandler(view, callback);
}

// private static void ClearListener(Java.Object viewHandle)
void FocusChangedListener__ClearListener_fn(::g::Java::Object* viewHandle)
{
    FocusChangedListener::ClearListener(viewHandle);
}

// private Java.Object Create()
void FocusChangedListener__Create_fn(FocusChangedListener* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Create();
}

// public void Dispose()
void FocusChangedListener__Dispose_fn(FocusChangedListener* __this)
{
    __this->Dispose();
}

// private FocusChangedListener New(Java.Object view, Uno.Action<Java.Object, bool> callback)
void FocusChangedListener__New1_fn(::g::Java::Object* view, uDelegate* callback, FocusChangedListener** __retval)
{
    *__retval = FocusChangedListener::New1(view, callback);
}

// private void OnFocusChange(bool hasFocus)
void FocusChangedListener__OnFocusChange_fn(FocusChangedListener* __this, bool* hasFocus)
{
    __this->OnFocusChange(*hasFocus);
}

// private static void SetListener(Java.Object viewHandle, Java.Object listenerHandle)
void FocusChangedListener__SetListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    FocusChangedListener::SetListener(viewHandle, listenerHandle);
}

// private FocusChangedListener(Java.Object view, Uno.Action<Java.Object, bool> callback) [instance]
void FocusChangedListener::ctor_(::g::Java::Object* view, uDelegate* callback)
{
    _view = view;
    _callback = callback;
    _listener = Create();
    FocusChangedListener::SetListener(_view, _listener);
}

// private Java.Object Create() [instance]
::g::Java::Object* FocusChangedListener::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create140", "(Lcom/uno/UnoObject;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void Dispose() [instance]
void FocusChangedListener::Dispose()
{
    FocusChangedListener::ClearListener(_view);
}

// private void OnFocusChange(bool hasFocus) [instance]
void FocusChangedListener::OnFocusChange(bool hasFocus)
{
    uPtr(_callback)->Invoke(2, (::g::Java::Object*)_view, uCRef(hasFocus));
}

// public static Uno.IDisposable AddHandler(Java.Object view, Uno.Action<Java.Object, bool> callback) [static]
uObject* FocusChangedListener::AddHandler(::g::Java::Object* view, uDelegate* callback)
{
    return (uObject*)FocusChangedListener::New1(view, callback);
}

// private static void ClearListener(Java.Object viewHandle) [static]
void FocusChangedListener::ClearListener(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearListener139", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private FocusChangedListener New(Java.Object view, Uno.Action<Java.Object, bool> callback) [static]
FocusChangedListener* FocusChangedListener::New1(::g::Java::Object* view, uDelegate* callback)
{
    FocusChangedListener* obj1 = (FocusChangedListener*)uNew(FocusChangedListener_typeof());
    obj1->ctor_(view, callback);
    return obj1;
}

// private static void SetListener(Java.Object viewHandle, Java.Object listenerHandle) [static]
void FocusChangedListener::SetListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetListener142", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistenerHandle=listenerHandle;
        jobject _listenerHandle = (_ulistenerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistenerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_listenerHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_listenerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_listenerHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/TextEdit.uno
// ------------------------------------------------------------------------------

// internal sealed extern class FocusManager
// {
// static generated FocusManager()
static void FocusManager__cctor__fn(uType* __type)
{
    FocusManager::Singleton_ = FocusManager::New1();
}

static void FocusManager_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(FocusManager, LoseFocus), 0,
        ::g::Java::Object_typeof(), offsetof(FocusManager, HideKeyboardContext), 0,
        ::g::Java::Object_typeof(), offsetof(FocusManager, HideKeyboardWindowToken), 0,
        type, (uintptr_t)&FocusManager::Singleton_, uFieldFlagsStatic);
}

uType* FocusManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FocusManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.FocusManager", options);
    type->fp_build_ = FocusManager_build;
    type->fp_ctor_ = (void*)FocusManager__New1_fn;
    type->fp_cctor_ = FocusManager__cctor__fn;
    return type;
}

// public generated FocusManager()
void FocusManager__ctor__fn(FocusManager* __this)
{
    __this->ctor_();
}

// public void CompleteFocusLoss()
void FocusManager__CompleteFocusLoss_fn(FocusManager* __this)
{
    __this->CompleteFocusLoss();
}

// public static Java.Object GetContext(Java.Object viewHandle)
void FocusManager__GetContext_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval)
{
    *__retval = FocusManager::GetContext(viewHandle);
}

// public static Java.Object GetWindowToken(Java.Object viewHandle)
void FocusManager__GetWindowToken_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval)
{
    *__retval = FocusManager::GetWindowToken(viewHandle);
}

// private static bool HasFocus(Java.Object viewHandle)
void FocusManager__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval)
{
    *__retval = FocusManager::HasFocus(viewHandle);
}

// public generated FocusManager New()
void FocusManager__New1_fn(FocusManager** __retval)
{
    *__retval = FocusManager::New1();
}

// private static void RequestRootViewFocus(Java.Object viewHandle)
void FocusManager__RequestRootViewFocus_fn(::g::Java::Object* viewHandle)
{
    FocusManager::RequestRootViewFocus(viewHandle);
}

uSStrong<FocusManager*> FocusManager::Singleton_;

// public generated FocusManager() [instance]
void FocusManager::ctor_()
{
}

// public void CompleteFocusLoss() [instance]
void FocusManager::CompleteFocusLoss()
{
    if (LoseFocus != NULL)
    {
        if (FocusManager::HasFocus(LoseFocus))
            FocusManager::RequestRootViewFocus(LoseFocus);

        LoseFocus = NULL;
    }

    if (HideKeyboardContext != NULL)
    {
        ::g::Fuse::Controls::Native::Android::SoftKeyboard::HideKeyboard(HideKeyboardContext, HideKeyboardWindowToken);
        HideKeyboardContext = NULL;
    }
}

// public static Java.Object GetContext(Java.Object viewHandle) [static]
::g::Java::Object* FocusManager::GetContext(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetContext143", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_viewHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Java.Object GetWindowToken(Java.Object viewHandle) [static]
::g::Java::Object* FocusManager::GetWindowToken(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetWindowToken144", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_viewHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static bool HasFocus(Java.Object viewHandle) [static]
bool FocusManager::HasFocus(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HasFocus145", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_viewHandle);
        bool __result = (bool)__jresult;
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public generated FocusManager New() [static]
FocusManager* FocusManager::New1()
{
    FocusManager* obj1 = (FocusManager*)uNew(FocusManager_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void RequestRootViewFocus(Java.Object viewHandle) [static]
void FocusManager::RequestRootViewFocus(::g::Java::Object* viewHandle)
{
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestRootViewFocus146", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/GraphicsView.uno
// ----------------------------------------------------------------------------------

// public abstract extern class GraphicsViewBase
// {
static void GraphicsViewBase_build(uType* type)
{
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(GraphicsViewBase_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(GraphicsViewBase_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(GraphicsViewBase_type, interface2),
        ::g::Fuse::Controls::Native::IViewHost_typeof(), offsetof(GraphicsViewBase_type, interface3));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(GraphicsViewBase, _graphicsViewHandle), 0,
        ::g::Java::Object_typeof(), offsetof(GraphicsViewBase, _surfaceHandle), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(GraphicsViewBase, _eglSurface), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(GraphicsViewBase, _nativeWindow), 0);
}

GraphicsViewBase_type* GraphicsViewBase_typeof()
{
    static uSStrong<GraphicsViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(GraphicsViewBase);
    options.TypeSize = sizeof(GraphicsViewBase_type);
    type = (GraphicsViewBase_type*)uClassType::New("Fuse.Controls.Native.Android.GraphicsViewBase", options);
    type->fp_build_ = GraphicsViewBase_build;
    type->interface3.fp_Insert = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))GraphicsViewBase__FuseControlsNativeIViewHostInsert_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))GraphicsViewBase__FuseControlsNativeIViewHostRemove_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))GraphicsViewBase__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))GraphicsViewBase__EndDraw_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected GraphicsViewBase(Java.Object handle)
void GraphicsViewBase__ctor_7_fn(GraphicsViewBase* __this, ::g::Java::Object* handle)
{
    __this->ctor_7(handle);
}

// public bool BeginDraw(int2 size)
void GraphicsViewBase__BeginDraw_fn(GraphicsViewBase* __this, ::g::Uno::Int2* size, bool* __retval)
{
    *__retval = __this->BeginDraw(*size);
}

// protected void DestroySurface()
void GraphicsViewBase__DestroySurface_fn(GraphicsViewBase* __this)
{
    __this->DestroySurface();
}

// public void EndDraw()
void GraphicsViewBase__EndDraw_fn(GraphicsViewBase* __this)
{
    __this->EndDraw();
}

// private void Fuse.Controls.Native.IViewHost.Insert(Fuse.Controls.Native.ViewHandle child)
void GraphicsViewBase__FuseControlsNativeIViewHostInsert_fn(GraphicsViewBase* __this, ::g::Fuse::Controls::Native::ViewHandle* child)
{
    ::g::Fuse::Controls::Native::Android::ViewGroup::AddView(__this->Handle(), uPtr(child)->NativeHandle);
}

// private void Fuse.Controls.Native.IViewHost.Remove(Fuse.Controls.Native.ViewHandle child)
void GraphicsViewBase__FuseControlsNativeIViewHostRemove_fn(GraphicsViewBase* __this, ::g::Fuse::Controls::Native::ViewHandle* child)
{
    ::g::Fuse::Controls::Native::Android::ViewGroup::RemoveView(__this->Handle(), uPtr(child)->NativeHandle);
}

// protected Java.Object get_GraphicsViewHandle()
void GraphicsViewBase__get_GraphicsViewHandle_fn(GraphicsViewBase* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->GraphicsViewHandle();
}

// protected void SetSurface(Java.Object surfaceHandle)
void GraphicsViewBase__SetSurface_fn(GraphicsViewBase* __this, ::g::Java::Object* surfaceHandle)
{
    __this->SetSurface(surfaceHandle);
}

// protected GraphicsViewBase(Java.Object handle) [instance]
void GraphicsViewBase::ctor_7(::g::Java::Object* handle)
{
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    ctor_4(::g::Fuse::Controls::Native::Android::ViewGroup::Create());
    _graphicsViewHandle = handle;
    ::g::Fuse::Controls::Native::Android::ViewGroup::AddView1(Handle(), _graphicsViewHandle, 0);
}

// public bool BeginDraw(int2 size) [instance]
bool GraphicsViewBase::BeginDraw(::g::Uno::Int2 size)
{
    if (::g::Uno::IntPtr::op_Equality(_eglSurface, ::g::Uno::IntPtr::Zero_))
        return false;

    double t;
    GLHelper::MakeCurrent( GLHelper::GetSurfaceContext(), (EGLSurface)_eglSurface );
    ::g::OpenGL::GL::Viewport(0, 0, size.X, size.Y);
    return true;
}

// protected void DestroySurface() [instance]
void GraphicsViewBase::DestroySurface()
{
    GLHelper::SwapBackToBackgroundSurface( (EGLSurface)_eglSurface );
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    ANativeWindow_release( (ANativeWindow*)_nativeWindow );
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    _surfaceHandle = NULL;
}

// public void EndDraw() [instance]
void GraphicsViewBase::EndDraw()
{
    double t;
    GLHelper::SwapBuffers( _eglSurface );
}

// protected Java.Object get_GraphicsViewHandle() [instance]
::g::Java::Object* GraphicsViewBase::GraphicsViewHandle()
{
    return _graphicsViewHandle;
}

// protected void SetSurface(Java.Object surfaceHandle) [instance]
void GraphicsViewBase::SetSurface(::g::Java::Object* surfaceHandle)
{
    if (_surfaceHandle != NULL)
        ;

    _surfaceHandle = surfaceHandle;
    _nativeWindow = GLHelper::GetANativeWindowFromSurface(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(_surfaceHandle, ::TYPES[2/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    EGLSurface tempSurface;
    GLHelper::CreateNewSurfaceAndMakeCurrent( (ANativeWindow*)_nativeWindow, tempSurface);
    _eglSurface = tempSurface;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/ImageView.uno
// -------------------------------------------------------------------------------

// internal sealed extern class ImageView
// {
static void ImageView_build(uType* type)
{
    ::STRINGS[3] = uString::Const(" not supported in native context");
    ::TYPES[3] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[7] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[8] = ::g::Uno::IDisposable_typeof();
    ::TYPES[9] = ::g::Java::Object_typeof();
    type->SetDependencies(
        ::g::Uno::Color_typeof(),
        ::g::Fuse::Controls::Native::ImageLoader_typeof(),
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::TYPES[8/*Uno.IDisposable*/], offsetof(ImageView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ImageView_type, interface1),
        ::g::Fuse::Controls::Native::IImageView_typeof(), offsetof(ImageView_type, interface2));
    type->SetFields(6,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ImageView, _imageSource), 0,
        ::g::Uno::Float4_typeof(), offsetof(ImageView, _tintColor), 0,
        ::TYPES[9/*Java.Object*/], offsetof(ImageView, _imageView), 0,
        ::TYPES[8/*Uno.IDisposable*/], offsetof(ImageView, _imageHandle), 0);
}

ImageView_type* ImageView_typeof()
{
    static uSStrong<ImageView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 3;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(ImageView);
    options.TypeSize = sizeof(ImageView_type);
    type = (ImageView_type*)uClassType::New("Fuse.Controls.Native.Android.ImageView", options);
    type->fp_build_ = ImageView_build;
    type->fp_ctor_ = (void*)ImageView__New5_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ImageView__Dispose_fn;
    type->interface2.fp_UpdateImageTransform = (void(*)(uObject*, float*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*))ImageView__UpdateImageTransform_fn;
    type->interface2.fp_set_ImageSource = (void(*)(uObject*, ::g::Fuse::Resources::ImageSource*))ImageView__set_ImageSource_fn;
    type->interface2.fp_set_TintColor = (void(*)(uObject*, ::g::Uno::Float4*))ImageView__set_TintColor_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageView__Dispose_fn;
    return type;
}

// public ImageView()
void ImageView__ctor_7_fn(ImageView* __this)
{
    __this->ctor_7();
}

// private static void ClearBitmap(Java.Object handle)
void ImageView__ClearBitmap_fn(::g::Java::Object* handle)
{
    ImageView::ClearBitmap(handle);
}

// private static Java.Object Create(Java.Object container)
void ImageView__Create_fn(::g::Java::Object* container, ::g::Java::Object** __retval)
{
    *__retval = ImageView::Create(container);
}

// private static Java.Object CreateContainer()
void ImageView__CreateContainer_fn(::g::Java::Object** __retval)
{
    *__retval = ImageView::CreateContainer();
}

// public override sealed void Dispose()
void ImageView__Dispose_fn(ImageView* __this)
{
    __this->ImageHandle(NULL);

    if ((__this->ImageSource() != NULL) && uIs((::g::Fuse::Resources::ImageSource*)__this->ImageSource(), ::TYPES[3/*Fuse.Resources.MultiDensityImageSource*/]))
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(__this->ImageSource(), ::TYPES[3/*Fuse.Resources.MultiDensityImageSource*/]))->remove_ActiveChanged(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, __this));

    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
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
void ImageView__New5_fn(ImageView** __retval)
{
    *__retval = ImageView::New5();
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

// private static void SetBitmap(Java.Object handle, Java.Object bitmapHandle)
void ImageView__SetBitmap_fn(::g::Java::Object* handle, ::g::Java::Object* bitmapHandle)
{
    ImageView::SetBitmap(handle, bitmapHandle);
}

// private static void SetTint(Java.Object handle, int rgba)
void ImageView__SetTint_fn(::g::Java::Object* handle, int32_t* rgba)
{
    ImageView::SetTint(handle, *rgba);
}

// public void set_TintColor(float4 value)
void ImageView__set_TintColor_fn(ImageView* __this, ::g::Uno::Float4* value)
{
    __this->TintColor(*value);
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource)
void ImageView__UpdateImage_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    __this->UpdateImage(fileImageSource);
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http)
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http)
{
    __this->UpdateImage1(http);
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi)
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    __this->UpdateImage2(multi);
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize)
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize)
{
    __this->UpdateImageTransform(*density, *origin, *scale, *drawSize);
}

// private static void UpdateImageTransform(Java.Object handle, float x, float y, float scaleX, float scaleY)
void ImageView__UpdateImageTransform1_fn(::g::Java::Object* handle, float* x, float* y, float* scaleX, float* scaleY)
{
    ImageView::UpdateImageTransform1(handle, *x, *y, *scaleX, *scaleY);
}

// public ImageView() [instance]
void ImageView::ctor_7()
{
    _tintColor = ::g::Uno::Float4__New1(1.0f);
    ctor_4(ImageView::CreateContainer());
    _imageView = ImageView::Create(Handle());
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) [instance]
void ImageView::ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value)
{
    if (_imageHandle != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_imageHandle), ::TYPES[8/*Uno.IDisposable*/]));
        _imageHandle = NULL;
        ImageView::ClearBitmap(_imageView);
    }

    _imageHandle = (uObject*)value;

    if (_imageHandle != NULL)
    {
        ImageView::SetBitmap(_imageView, uCast< ::g::Java::Object*>(uPtr(value)->Handle(), ::TYPES[9/*Java.Object*/]));
        ImageView::SetTint(_imageView, (int32_t)::g::Uno::Color::ToArgb(_tintColor));
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
    if (uIs((::g::Fuse::Resources::ImageSource*)ImageSource(), ::TYPES[3/*Fuse.Resources.MultiDensityImageSource*/]))
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[3/*Fuse.Resources.MultiDensityImageSource*/]))->remove_ActiveChanged(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, this));

    _imageSource = value;

    if (value == NULL)
        return;

    if (uIs(value, ::TYPES[6/*Fuse.Resources.FileImageSource*/]))
        UpdateImage(uCast< ::g::Fuse::Resources::FileImageSource*>(value, ::TYPES[6/*Fuse.Resources.FileImageSource*/]));
    else if (uIs(value, ::TYPES[7/*Fuse.Resources.HttpImageSource*/]))
        UpdateImage1(uCast< ::g::Fuse::Resources::HttpImageSource*>(value, ::TYPES[7/*Fuse.Resources.HttpImageSource*/]));
    else if (uIs(value, ::TYPES[3/*Fuse.Resources.MultiDensityImageSource*/]))
    {
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[3/*Fuse.Resources.MultiDensityImageSource*/]))->add_ActiveChanged(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, this));
        UpdateImage2(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(value, ::TYPES[3/*Fuse.Resources.MultiDensityImageSource*/]));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(value, ::STRINGS[3/*" not suppor...*/])));
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) [instance]
void ImageView::OnImageLoaded(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageHandle(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) [instance]
void ImageView::OnImageLoadFailed(::g::Uno::Exception* e)
{
    ImageHandle(NULL);
}

// private void OnMultiDensityImageSourceActiveChanged() [instance]
void ImageView::OnMultiDensityImageSourceActiveChanged()
{
    if (uIs((::g::Fuse::Resources::ImageSource*)ImageSource(), ::TYPES[3/*Fuse.Resources.MultiDensityImageSource*/]))
        UpdateImage2(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[3/*Fuse.Resources.MultiDensityImageSource*/]));
}

// public void set_TintColor(float4 value) [instance]
void ImageView::TintColor(::g::Uno::Float4 value)
{
    _tintColor = value;
    ImageView::SetTint(_imageView, (int32_t)::g::Uno::Color::ToArgb(_tintColor));
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) [instance]
void ImageView::UpdateImage(::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    ImageHandle(::g::Fuse::Controls::Native::ImageLoader::Load3(uPtr(fileImageSource)->File()));
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) [instance]
void ImageView::UpdateImage1(::g::Fuse::Resources::HttpImageSource* http)
{
    uPtr(::g::Fuse::Controls::Native::ImageLoader::Load(http))->Then1(uDelegate::New(::TYPES[4/*Uno.Action<Fuse.Controls.Native.ImageHandle>*/], (void*)ImageView__OnImageLoaded_fn, this), uDelegate::New(::TYPES[5/*Uno.Action<Uno.Exception>*/], (void*)ImageView__OnImageLoadFailed_fn, this));
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) [instance]
void ImageView::UpdateImage2(::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    ::g::Fuse::Resources::ImageSource* active = uPtr(multi)->Active();

    if (active != NULL)
    {
        if (uIs(active, ::TYPES[6/*Fuse.Resources.FileImageSource*/]))
            UpdateImage(uCast< ::g::Fuse::Resources::FileImageSource*>(active, ::TYPES[6/*Fuse.Resources.FileImageSource*/]));
        else if (uIs(active, ::TYPES[7/*Fuse.Resources.HttpImageSource*/]))
            UpdateImage1(uCast< ::g::Fuse::Resources::HttpImageSource*>(active, ::TYPES[7/*Fuse.Resources.HttpImageSource*/]));
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(active, ::STRINGS[3/*" not suppor...*/])));
    }
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) [instance]
void ImageView::UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize)
{
    ::g::Uno::Int2 imagePos = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply1(origin, density)));
    ::g::Uno::Float2 imageScale = ::g::Uno::Float2__op_Multiply1(scale, density);
    ImageView::UpdateImageTransform1(_imageView, (float)imagePos.X, (float)imagePos.Y, imageScale.X, imageScale.Y);
}

// private static void ClearBitmap(Java.Object handle) [static]
void ImageView::ClearBitmap(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearBitmap148", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create(Java.Object container) [static]
::g::Java::Object* ImageView::Create(::g::Java::Object* container)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create149", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _ucontainer=container;
        jobject _container = (_ucontainer==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucontainer, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_container);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_container!=NULL) { U_JNIVAR->DeleteLocalRef(_container); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object CreateContainer() [static]
::g::Java::Object* ImageView::CreateContainer()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateContainer150", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ImageView New() [static]
ImageView* ImageView::New5()
{
    ImageView* obj1 = (ImageView*)uNew(ImageView_typeof());
    obj1->ctor_7();
    return obj1;
}

// private static void SetBitmap(Java.Object handle, Java.Object bitmapHandle) [static]
void ImageView::SetBitmap(::g::Java::Object* handle, ::g::Java::Object* bitmapHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetBitmap152", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ubitmapHandle=bitmapHandle;
        jobject _bitmapHandle = (_ubitmapHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmapHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_bitmapHandle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_bitmapHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmapHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTint(Java.Object handle, int rgba) [static]
void ImageView::SetTint(::g::Java::Object* handle, int32_t rgba)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTint153", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _urgba=rgba;
        jint _rgba = (jint)_urgba;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_rgba);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void UpdateImageTransform(Java.Object handle, float x, float y, float scaleX, float scaleY) [static]
void ImageView::UpdateImageTransform1(::g::Java::Object* handle, float x, float y, float scaleX, float scaleY)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateImageTransform1154", "(Ljava/lang/Object;FFFF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        float _uscaleX=scaleX;
        jfloat _scaleX = (jfloat)_uscaleX;
        float _uscaleY=scaleY;
        jfloat _scaleY = (jfloat)_uscaleY;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y,_scaleX,_scaleY);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/InputDispatch.uno
// -----------------------------------------------------------------------------------

// internal static extern class InputDispatch
// {
// static generated InputDispatch()
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[10/*Uno.Collections.Dictionary<Java.Object, Fuse.Visual>*/]));
    InputDispatch::_activePointers_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[11/*Uno.Collections.HashSet<int>*/]));
}

static void InputDispatch_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::Visual_typeof();
    ::TYPES[13] = ::g::Fuse::Controls::Native::NativeRootViewport_typeof();
    ::TYPES[14] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[15] = ::g::Uno::Exception_typeof();
    type->SetDependencies(
        ::g::Fuse::Controls::Native::Android::MotionEvent_typeof(),
        ::g::Fuse::Input::Pointer_typeof());
    type->SetFields(0,
        ::TYPES[10/*Uno.Collections.Dictionary<Java.Object, Fuse.Visual>*/], (uintptr_t)&InputDispatch::_listeners_, uFieldFlagsStatic,
        ::TYPES[11/*Uno.Collections.HashSet<int>*/], (uintptr_t)&InputDispatch::_activePointers_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&InputDispatch::_touchListenerHandle_, uFieldFlagsStatic,
        ::g::Fuse::Controls::Native::Android::JavaMap_typeof(), (uintptr_t)&InputDispatch::_viewVisualMap_, uFieldFlagsStatic);
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.InputDispatch", options);
    type->fp_build_ = InputDispatch_build;
    type->fp_cctor_ = InputDispatch__cctor__fn;
    return type;
}

// public static void AddListener(Fuse.Controls.Native.ViewHandle viewHandle, Fuse.Visual owner)
void InputDispatch__AddListener_fn(::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Fuse::Visual* owner)
{
    InputDispatch::AddListener(viewHandle, owner);
}

// public static void AddListener(Java.Object nativeHandle, Fuse.Visual owner)
void InputDispatch__AddListener1_fn(::g::Java::Object* nativeHandle, ::g::Fuse::Visual* owner)
{
    InputDispatch::AddListener1(nativeHandle, owner);
}

// private static void ClearOnTouchListener(Java.Object viewHandle)
void InputDispatch__ClearOnTouchListener_fn(::g::Java::Object* viewHandle)
{
    InputDispatch::ClearOnTouchListener(viewHandle);
}

// private static Java.Object CreateTouchListener()
void InputDispatch__CreateTouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::CreateTouchListener();
}

// private static void DeactivatePointer(int pointerId)
void InputDispatch__DeactivatePointer_fn(int32_t* pointerId)
{
    InputDispatch::DeactivatePointer(*pointerId);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual)
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = InputDispatch::FindRoot(visual);
}

// private static bool IsPointerActive(int pointerId)
void InputDispatch__IsPointerActive_fn(int32_t* pointerId, bool* __retval)
{
    *__retval = InputDispatch::IsPointerActive(*pointerId);
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent)
void InputDispatch__OnTouch_fn(::g::Java::Object* view, ::g::Java::Object* motionEvent, bool* __retval)
{
    *__retval = InputDispatch::OnTouch(view, motionEvent);
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent)
void InputDispatch__RaiseEvent_fn(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    InputDispatch::RaiseEvent(visual, viewHandle, motionEvent);
}

// private static void RaiseMoved(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data)
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(rootVisual, visual, data);
}

// private static void RaisePressed(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data)
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(rootVisual, visual, data);
}

// private static void RaiseReleased(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data)
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(rootVisual, visual, data);
}

// public static void RemoveListener(Fuse.Controls.Native.ViewHandle viewHandle)
void InputDispatch__RemoveListener_fn(::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch::RemoveListener(viewHandle);
}

// public static void RemoveListener(Java.Object nativeHandle)
void InputDispatch__RemoveListener1_fn(::g::Java::Object* nativeHandle)
{
    InputDispatch::RemoveListener1(nativeHandle);
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle)
void InputDispatch__SetOnTouchListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    InputDispatch::SetOnTouchListener(viewHandle, listenerHandle);
}

// private static Java.Object get_TouchListener()
void InputDispatch__get_TouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::TouchListener();
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap()
void InputDispatch__get_ViewVisualMap_fn(::g::Fuse::Controls::Native::Android::JavaMap** __retval)
{
    *__retval = InputDispatch::ViewVisualMap();
}

uSStrong< ::g::Uno::Collections::Dictionary*> InputDispatch::_listeners_;
uSStrong< ::g::Uno::Collections::HashSet*> InputDispatch::_activePointers_;
uSStrong< ::g::Java::Object*> InputDispatch::_touchListenerHandle_;
uSStrong< ::g::Fuse::Controls::Native::Android::JavaMap*> InputDispatch::_viewVisualMap_;

// public static void AddListener(Fuse.Controls.Native.ViewHandle viewHandle, Fuse.Visual owner) [static]
void InputDispatch::AddListener(::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Fuse::Visual* owner)
{
    InputDispatch_typeof()->Init();
    InputDispatch::AddListener1(uPtr(viewHandle)->NativeHandle, owner);
}

// public static void AddListener(Java.Object nativeHandle, Fuse.Visual owner) [static]
void InputDispatch::AddListener1(::g::Java::Object* nativeHandle, ::g::Fuse::Visual* owner)
{
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Put1(nativeHandle, owner);
    InputDispatch::SetOnTouchListener(nativeHandle, InputDispatch::TouchListener());
}

// private static void ClearOnTouchListener(Java.Object viewHandle) [static]
void InputDispatch::ClearOnTouchListener(::g::Java::Object* viewHandle)
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearOnTouchListener155", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object CreateTouchListener() [static]
::g::Java::Object* InputDispatch::CreateTouchListener()
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateTouchListener156", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void DeactivatePointer(int pointerId) [static]
void InputDispatch::DeactivatePointer(int32_t pointerId)
{
    InputDispatch_typeof()->Init();
    bool ret3;
    bool ret4;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(pointerId), &ret3), ret3))
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(pointerId), &ret4);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) [static]
::g::Fuse::Visual* InputDispatch::FindRoot(::g::Fuse::Visual* visual)
{
    InputDispatch_typeof()->Init();
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)InputDispatch::FindRoot(uPtr(visual)->Parent()) : visual;
}

// private static bool IsPointerActive(int pointerId) [static]
bool InputDispatch::IsPointerActive(int32_t pointerId)
{
    InputDispatch_typeof()->Init();
    bool ret5;
    bool ret6;

    if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(pointerId), &ret5), ret5))
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(pointerId), &ret6);
        return false;
    }

    return true;
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent) [static]
bool InputDispatch::OnTouch(::g::Java::Object* view, ::g::Java::Object* motionEvent)
{
    InputDispatch_typeof()->Init();

    if (uPtr(InputDispatch::ViewVisualMap())->ContainsKey(view))
    {
        ::g::Fuse::Controls::Native::Android::MotionEvent* me = ::g::Fuse::Controls::Native::Android::MotionEvent::New1(motionEvent);
        ::g::Fuse::Visual* visual = uCast< ::g::Fuse::Visual*>(uPtr(InputDispatch::ViewVisualMap())->Get(view), ::TYPES[12/*Fuse.Visual*/]);

        if (visual == NULL)
            return false;

        InputDispatch::RaiseEvent(visual, view, me);
    }

    return false;
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent) [static]
void InputDispatch::RaiseEvent(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    InputDispatch_typeof()->Init();
    ::g::Fuse::Visual* rootVisual = InputDispatch::FindRoot(visual);
    ::g::Java::Object* rootView = NULL;
    ::g::Fuse::Controls::Native::NativeRootViewport* rootViewport = uAs< ::g::Fuse::Controls::Native::NativeRootViewport*>(rootVisual, ::TYPES[13/*Fuse.Controls.Native.NativeRootViewport*/]);

    if (rootViewport != NULL)
        rootView = uPtr(uPtr(rootViewport)->RootView())->NativeHandle;

    int32_t action = uPtr(motionEvent)->ActionMasked();
    uArray* data = motionEvent->PointerEventDataForView(rootView, viewHandle, ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(visual)->Viewport()), ::TYPES[14/*Fuse.ICommonViewport*/])));

    switch (action)
    {
        case 3:
        {
            for (int32_t i = 0; i < uPtr(data)->Length(); i++)
                InputDispatch::RaiseReleased(rootVisual, visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i));

            break;
        }
        case 0:
        case 5:
        {
            for (int32_t i1 = 0; i1 < uPtr(data)->Length(); i1++)
                InputDispatch::RaisePressed(rootVisual, visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i1));

            break;
        }
        case 2:
        {
            for (int32_t i2 = 0; i2 < uPtr(data)->Length(); i2++)
                InputDispatch::RaiseMoved(rootVisual, visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i2));

            break;
        }
        case 1:
        case 6:
        {
            int32_t pointerMask = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexMask();
            int32_t pointerShit = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexShift();
            int32_t pointerIndex = (uPtr(motionEvent)->Action() & pointerMask) >> pointerShit;
            InputDispatch::RaiseReleased(rootVisual, visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(pointerIndex));
            break;
        }
    }
}

// private static void RaiseMoved(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) [static]
void InputDispatch::RaiseMoved(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        {
            ::g::Fuse::Input::Pointer::RaiseMoved(rootVisual, data);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) [static]
void InputDispatch::RaisePressed(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    if (InputDispatch::IsPointerActive(uPtr(data)->PointIndex))
        return;

    try
    {
        {
            ::g::Fuse::Input::Pointer::RaisePressed(rootVisual, data);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Visual rootVisual, Fuse.Visual visual, Fuse.Input.PointerEventData data) [static]
void InputDispatch::RaiseReleased(::g::Fuse::Visual* rootVisual, ::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();
    InputDispatch::DeactivatePointer(uPtr(data)->PointIndex);

    try
    {
        {
            ::g::Fuse::Input::Pointer::RaiseReleased(rootVisual, data);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RemoveListener(Fuse.Controls.Native.ViewHandle viewHandle) [static]
void InputDispatch::RemoveListener(::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch_typeof()->Init();
    InputDispatch::RemoveListener1(uPtr(viewHandle)->NativeHandle);
}

// public static void RemoveListener(Java.Object nativeHandle) [static]
void InputDispatch::RemoveListener1(::g::Java::Object* nativeHandle)
{
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Remove(nativeHandle);
    InputDispatch::ClearOnTouchListener(nativeHandle);
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle) [static]
void InputDispatch::SetOnTouchListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetOnTouchListener158", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistenerHandle=listenerHandle;
        jobject _listenerHandle = (_ulistenerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistenerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_listenerHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_listenerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_listenerHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object get_TouchListener() [static]
::g::Java::Object* InputDispatch::TouchListener()
{
    InputDispatch_typeof()->Init();
    ::g::Java::Object* ind1;
    ind1 = InputDispatch::_touchListenerHandle_;
    return (ind1 != NULL) ? ind1 : (::g::Java::Object*)(InputDispatch::_touchListenerHandle_ = InputDispatch::CreateTouchListener());
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap() [static]
::g::Fuse::Controls::Native::Android::JavaMap* InputDispatch::ViewVisualMap()
{
    InputDispatch_typeof()->Init();
    ::g::Fuse::Controls::Native::Android::JavaMap* ind2;
    ind2 = InputDispatch::_viewVisualMap_;
    return (ind2 != NULL) ? ind2 : (::g::Fuse::Controls::Native::Android::JavaMap*)(InputDispatch::_viewVisualMap_ = ::g::Fuse::Controls::Native::Android::JavaMap::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/InputDispatch.uno
// -----------------------------------------------------------------------------------

// internal sealed extern class JavaMap
// {
static void JavaMap_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(JavaMap, _handle), 0);
}

uType* JavaMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JavaMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.JavaMap", options);
    type->fp_build_ = JavaMap_build;
    type->fp_ctor_ = (void*)JavaMap__New1_fn;
    return type;
}

// public JavaMap()
void JavaMap__ctor__fn(JavaMap* __this)
{
    __this->ctor_();
}

// public bool ContainsKey(Java.Object key)
void JavaMap__ContainsKey_fn(JavaMap* __this, ::g::Java::Object* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key)
void JavaMap__ContainsKey1_fn(::g::Java::Object* handle, ::g::Java::Object* key, bool* __retval)
{
    *__retval = JavaMap::ContainsKey1(handle, key);
}

// private static Java.Object Create()
void JavaMap__Create_fn(::g::Java::Object** __retval)
{
    *__retval = JavaMap::Create();
}

// public object Get(Java.Object key)
void JavaMap__Get_fn(JavaMap* __this, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = __this->Get(key);
}

// private static object Get(Java.Object handle, Java.Object key)
void JavaMap__Get1_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = JavaMap::Get1(handle, key);
}

// public JavaMap New()
void JavaMap__New1_fn(JavaMap** __retval)
{
    *__retval = JavaMap::New1();
}

// private static void Put(Java.Object handle, Java.Object key, object value)
void JavaMap__Put_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    JavaMap::Put(handle, key, value);
}

// public void Put(Java.Object key, object value)
void JavaMap__Put1_fn(JavaMap* __this, ::g::Java::Object* key, uObject* value)
{
    __this->Put1(key, value);
}

// public void Remove(Java.Object key)
void JavaMap__Remove_fn(JavaMap* __this, ::g::Java::Object* key)
{
    __this->Remove(key);
}

// private static void Remove(Java.Object handle, Java.Object key)
void JavaMap__Remove1_fn(::g::Java::Object* handle, ::g::Java::Object* key)
{
    JavaMap::Remove1(handle, key);
}

// public JavaMap() [instance]
void JavaMap::ctor_()
{
    _handle = JavaMap::Create();
}

// public bool ContainsKey(Java.Object key) [instance]
bool JavaMap::ContainsKey(::g::Java::Object* key)
{
    return JavaMap::ContainsKey1(_handle, key);
}

// public object Get(Java.Object key) [instance]
uObject* JavaMap::Get(::g::Java::Object* key)
{
    return JavaMap::Get1(_handle, key);
}

// public void Put(Java.Object key, object value) [instance]
void JavaMap::Put1(::g::Java::Object* key, uObject* value)
{
    JavaMap::Put(_handle, key, value);
}

// public void Remove(Java.Object key) [instance]
void JavaMap::Remove(::g::Java::Object* key)
{
    JavaMap::Remove1(_handle, key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key) [static]
bool JavaMap::ContainsKey1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ContainsKey1159", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle,_key);
        bool __result = (bool)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object Create() [static]
::g::Java::Object* JavaMap::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create160", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static object Get(Java.Object handle, Java.Object key) [static]
uObject* JavaMap::Get1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Get1161", "(Ljava/lang/Object;Ljava/lang/Object;)Lcom/uno/UnoObject;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_key);
        uObject* __result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBoxFreeingLocalRef(__jresult);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public JavaMap New() [static]
JavaMap* JavaMap::New1()
{
    JavaMap* obj1 = (JavaMap*)uNew(JavaMap_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void Put(Java.Object handle, Java.Object key, object value) [static]
void JavaMap::Put(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Put162", "(Ljava/lang/Object;Ljava/lang/Object;Lcom/uno/UnoObject;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* _uvalue=value;
        jobject _value = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uvalue);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_key,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        if (_value!=NULL) { U_JNIVAR->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void Remove(Java.Object handle, Java.Object key) [static]
void JavaMap::Remove1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Remove1163", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_key);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/LeafView.uno
// ------------------------------------------------------------------------------

// public abstract extern class LeafView
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View_type, interface1));
    type->SetFields(6);
}

::g::Fuse::Controls::Native::Android::View_type* LeafView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::View_type);
    type = (::g::Fuse::Controls::Native::Android::View_type*)uClassType::New("Fuse.Controls.Native.Android.LeafView", options);
    type->fp_build_ = LeafView_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected LeafView(Java.Object handle)
void LeafView__ctor_7_fn(LeafView* __this, ::g::Java::Object* handle)
{
    __this->ctor_7(handle);
}

// protected LeafView(Java.Object handle) [instance]
void LeafView::ctor_7(::g::Java::Object* handle)
{
    ctor_5(handle, true);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/InputDispatch.uno
// -----------------------------------------------------------------------------------

// public sealed extern class MotionEvent
// {
// static generated MotionEvent()
static void MotionEvent__cctor__fn(uType* __type)
{
    MotionEvent::_locationOnScreen_ = uArray::New(::TYPES[16/*int[]*/], 2);
}

static void MotionEvent_build(uType* type)
{
    ::TYPES[16] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[17] = ::g::Fuse::Input::PointerEventData_typeof()->Array();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(MotionEvent, _handle), 0,
        ::TYPES[16/*int[]*/], (uintptr_t)&MotionEvent::_locationOnScreen_, uFieldFlagsStatic);
}

uType* MotionEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(MotionEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.MotionEvent", options);
    type->fp_build_ = MotionEvent_build;
    type->fp_cctor_ = MotionEvent__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))MotionEvent__Equals_fn;
    return type;
}

// public MotionEvent(Java.Object handle)
void MotionEvent__ctor__fn(MotionEvent* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public int get_Action()
void MotionEvent__get_Action_fn(MotionEvent* __this, int32_t* __retval)
{
    *__retval = __this->Action();
}

// public int get_ActionMasked()
void MotionEvent__get_ActionMasked_fn(MotionEvent* __this, int32_t* __retval)
{
    *__retval = __this->ActionMasked();
}

// private static bool Compare(Java.Object handle1, Java.Object handle2)
void MotionEvent__Compare_fn(::g::Java::Object* handle1, ::g::Java::Object* handle2, bool* __retval)
{
    *__retval = MotionEvent::Compare(handle1, handle2);
}

// public override sealed bool Equals(object obj)
void MotionEvent__Equals_fn(MotionEvent* __this, uObject* obj, bool* __retval)
{
    if (uIs(obj, __this->__type))
        return *__retval = MotionEvent::Compare(__this->_handle, uPtr(uCast<MotionEvent*>(obj, __this->__type))->_handle), void();
    else
        return *__retval = false, void();
}

// public long get_EventTime()
void MotionEvent__get_EventTime_fn(MotionEvent* __this, int64_t* __retval)
{
    *__retval = __this->EventTime();
}

// private int GetAction(Java.Object handle)
void MotionEvent__GetAction_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* __retval)
{
    *__retval = __this->GetAction(handle);
}

// private int GetActionMasked(Java.Object handle)
void MotionEvent__GetActionMasked_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* __retval)
{
    *__retval = __this->GetActionMasked(handle);
}

// private long GetEventTime(Java.Object handle)
void MotionEvent__GetEventTime_fn(MotionEvent* __this, ::g::Java::Object* handle, int64_t* __retval)
{
    *__retval = __this->GetEventTime(handle);
}

// private float2 GetLocationOnScreen(Java.Object viewHandle)
void MotionEvent__GetLocationOnScreen_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetLocationOnScreen(viewHandle);
}

// private void GetLocationOnScreen(Java.Object viewHandle, int[] result)
void MotionEvent__GetLocationOnScreen1_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, uArray* result)
{
    __this->GetLocationOnScreen1(viewHandle, result);
}

// private int GetPointerCount(Java.Object handle)
void MotionEvent__GetPointerCount_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* __retval)
{
    *__retval = __this->GetPointerCount(handle);
}

// public int GetPointerId(int pointerIndex)
void MotionEvent__GetPointerId_fn(MotionEvent* __this, int32_t* pointerIndex, int32_t* __retval)
{
    *__retval = __this->GetPointerId(*pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex)
void MotionEvent__GetPointerId1_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* pointerIndex, int32_t* __retval)
{
    *__retval = __this->GetPointerId1(handle, *pointerIndex);
}

// private static int GetPointerIndexMask()
void MotionEvent__GetPointerIndexMask_fn(int32_t* __retval)
{
    *__retval = MotionEvent::GetPointerIndexMask();
}

// private static int GetPointerIndexShift()
void MotionEvent__GetPointerIndexShift_fn(int32_t* __retval)
{
    *__retval = MotionEvent::GetPointerIndexShift();
}

// public float2 GetPosition(int pointerIndex)
void MotionEvent__GetPosition_fn(MotionEvent* __this, int32_t* pointerIndex, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPosition(*pointerIndex);
}

// private float GetX(Java.Object handle, int pointerIndex)
void MotionEvent__GetX_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* pointerIndex, float* __retval)
{
    *__retval = __this->GetX(handle, *pointerIndex);
}

// private float GetY(Java.Object handle, int pointerIndex)
void MotionEvent__GetY_fn(MotionEvent* __this, ::g::Java::Object* handle, int32_t* pointerIndex, float* __retval)
{
    *__retval = __this->GetY(handle, *pointerIndex);
}

// public MotionEvent New(Java.Object handle)
void MotionEvent__New1_fn(::g::Java::Object* handle, MotionEvent** __retval)
{
    *__retval = MotionEvent::New1(handle);
}

// public int get_PointerCount()
void MotionEvent__get_PointerCount_fn(MotionEvent* __this, int32_t* __retval)
{
    *__retval = __this->PointerCount();
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object rootView, Java.Object view, float pointDensity)
void MotionEvent__PointerEventDataForView_fn(MotionEvent* __this, ::g::Java::Object* rootView, ::g::Java::Object* view, float* pointDensity, uArray** __retval)
{
    *__retval = __this->PointerEventDataForView(rootView, view, *pointDensity);
}

// public static int get_PointerIndexMask()
void MotionEvent__get_PointerIndexMask_fn(int32_t* __retval)
{
    *__retval = MotionEvent::PointerIndexMask();
}

// public static int get_PointerIndexShift()
void MotionEvent__get_PointerIndexShift_fn(int32_t* __retval)
{
    *__retval = MotionEvent::PointerIndexShift();
}

uSStrong<uArray*> MotionEvent::_locationOnScreen_;

// public MotionEvent(Java.Object handle) [instance]
void MotionEvent::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public int get_Action() [instance]
int32_t MotionEvent::Action()
{
    return GetAction(_handle);
}

// public int get_ActionMasked() [instance]
int32_t MotionEvent::ActionMasked()
{
    return GetActionMasked(_handle);
}

// public long get_EventTime() [instance]
int64_t MotionEvent::EventTime()
{
    return GetEventTime(_handle);
}

// private int GetAction(Java.Object handle) [instance]
int32_t MotionEvent::GetAction(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetAction165", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int32_t __result = (int32_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetActionMasked(Java.Object handle) [instance]
int32_t MotionEvent::GetActionMasked(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetActionMasked166", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int32_t __result = (int32_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private long GetEventTime(Java.Object handle) [instance]
int64_t MotionEvent::GetEventTime(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetEventTime167", "(Lcom/uno/UnoObject;Ljava/lang/Object;)J");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jlong __jresult = U_JNIVAR->CallStaticLongMethod(__cls,__mtd,_this_,_handle);
        int64_t __result = (int64_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float2 GetLocationOnScreen(Java.Object viewHandle) [instance]
::g::Uno::Float2 MotionEvent::GetLocationOnScreen(::g::Java::Object* viewHandle)
{
    GetLocationOnScreen1(viewHandle, MotionEvent::_locationOnScreen_);
    return ::g::Uno::Float2__New2((float)uPtr(MotionEvent::_locationOnScreen_)->Item<int32_t>(0), (float)uPtr(MotionEvent::_locationOnScreen_)->Item<int32_t>(1));
}

// private void GetLocationOnScreen(Java.Object viewHandle, int[] result) [instance]
void MotionEvent::GetLocationOnScreen1(::g::Java::Object* viewHandle, uArray* result)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLocationOnScreen1168", "(Lcom/uno/UnoObject;Ljava/lang/Object;Lcom/uno/IntArray;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uArray* _uresult=result;
        jobject _result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_uresult);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_viewHandle,_result);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_result!=NULL) { U_JNIVAR->DeleteLocalRef(_result); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private int GetPointerCount(Java.Object handle) [instance]
int32_t MotionEvent::GetPointerCount(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerCount169", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int32_t __result = (int32_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int GetPointerId(int pointerIndex) [instance]
int32_t MotionEvent::GetPointerId(int32_t pointerIndex)
{
    return GetPointerId1(_handle, pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex) [instance]
int32_t MotionEvent::GetPointerId1(::g::Java::Object* handle, int32_t pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerId1170", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        int32_t __result = (int32_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public float2 GetPosition(int pointerIndex) [instance]
::g::Uno::Float2 MotionEvent::GetPosition(int32_t pointerIndex)
{
    return ::g::Uno::Float2__New2(GetX(_handle, pointerIndex), GetY(_handle, pointerIndex));
}

// private float GetX(Java.Object handle, int pointerIndex) [instance]
float MotionEvent::GetX(::g::Java::Object* handle, int32_t pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetX173", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)F");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float GetY(Java.Object handle, int pointerIndex) [instance]
float MotionEvent::GetY(::g::Java::Object* handle, int32_t pointerIndex)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetY175", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)F");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int get_PointerCount() [instance]
int32_t MotionEvent::PointerCount()
{
    return GetPointerCount(_handle);
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object rootView, Java.Object view, float pointDensity) [instance]
uArray* MotionEvent::PointerEventDataForView(::g::Java::Object* rootView, ::g::Java::Object* view, float pointDensity)
{
    ::g::Fuse::Input::PointerEventData* collection1;
    uArray* pointerEventData = uArray::New(::TYPES[17/*Fuse.Input.PointerEventData[]*/], PointerCount());
    ::g::Uno::Float2 locationOnScreen = ::g::Uno::Float2__op_Subtraction2(GetLocationOnScreen(view), GetLocationOnScreen(rootView));

    for (int32_t i = 0; i < pointerEventData->Length(); i++)
    {
        ::g::Uno::Float2 windowPoint = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(locationOnScreen, GetPosition(i)), pointDensity);
        int32_t pointerId = GetPointerId(i);
        uPtr(pointerEventData)->Strong< ::g::Fuse::Input::PointerEventData*>(i) = (collection1 = ::g::Fuse::Input::PointerEventData::New1(), uPtr(collection1)->PointIndex = pointerId, uPtr(collection1)->WindowPoint = windowPoint, uPtr(collection1)->Timestamp = (((double)EventTime() / 1000.0) - ::g::Fuse::Time::FrameTimeBase()), uPtr(collection1)->PointerType = 2, uPtr(collection1)->IsPrimary = (pointerId == 0), collection1);
    }

    return pointerEventData;
}

// private static bool Compare(Java.Object handle1, Java.Object handle2) [static]
bool MotionEvent::Compare(::g::Java::Object* handle1, ::g::Java::Object* handle2)
{
    MotionEvent_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Compare164", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle1=handle1;
        jobject _handle1 = (_uhandle1==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle1, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uhandle2=handle2;
        jobject _handle2 = (_uhandle2==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle2, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle1,_handle2);
        bool __result = (bool)__jresult;
        if (_handle1!=NULL) { U_JNIVAR->DeleteLocalRef(_handle1); }
        if (_handle2!=NULL) { U_JNIVAR->DeleteLocalRef(_handle2); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexMask() [static]
int32_t MotionEvent::GetPointerIndexMask()
{
    MotionEvent_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexMask171", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int32_t __result = (int32_t)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexShift() [static]
int32_t MotionEvent::GetPointerIndexShift()
{
    MotionEvent_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexShift172", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int32_t __result = (int32_t)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public MotionEvent New(Java.Object handle) [static]
MotionEvent* MotionEvent::New1(::g::Java::Object* handle)
{
    MotionEvent* obj2 = (MotionEvent*)uNew(MotionEvent_typeof());
    obj2->ctor_(handle);
    return obj2;
}

// public static int get_PointerIndexMask() [static]
int32_t MotionEvent::PointerIndexMask()
{
    MotionEvent_typeof()->Init();
    return MotionEvent::GetPointerIndexMask();
}

// public static int get_PointerIndexShift() [static]
int32_t MotionEvent::PointerIndexShift()
{
    MotionEvent_typeof()->Init();
    return MotionEvent::GetPointerIndexShift();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/ScrollView.uno
// --------------------------------------------------------------------------------

// public sealed extern class ScrollView
// {
static void ScrollView_build(uType* type)
{
    ::TYPES[18] = ::g::Uno::Action4_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[19] = ::g::Fuse::Controls::Native::IScrollViewHost_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ScrollView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ScrollView_type, interface1),
        ::g::Fuse::Controls::Native::IScrollView_typeof(), offsetof(ScrollView_type, interface2));
    type->SetFields(6,
        ::TYPES[19/*Fuse.Controls.Native.IScrollViewHost*/], offsetof(ScrollView, _host), 0);
}

ScrollView_type* ScrollView_typeof()
{
    static uSStrong<ScrollView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(ScrollView_type);
    type = (ScrollView_type*)uClassType::New("Fuse.Controls.Native.Android.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ScrollView__Dispose_fn;
    type->interface2.fp_set_ScrollPosition = (void(*)(uObject*, ::g::Uno::Float2*))ScrollView__set_ScrollPosition_fn;
    type->interface2.fp_set_AllowedScrollDirections = (void(*)(uObject*, int32_t*))ScrollView__set_AllowedScrollDirections_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ScrollView__Dispose_fn;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host)
void ScrollView__ctor_7_fn(ScrollView* __this, uObject* host)
{
    __this->ctor_7(host);
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value)
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int32_t* value)
{
    __this->AllowedScrollDirections(*value);
}

// private static Java.Object Create()
void ScrollView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ScrollView::Create();
}

// public override sealed void Dispose()
void ScrollView__Dispose_fn(ScrollView* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private void InstallCallback(Java.Object handle, Uno.Action<int, int, int, int> callback)
void ScrollView__InstallCallback_fn(ScrollView* __this, ::g::Java::Object* handle, uDelegate* callback)
{
    __this->InstallCallback(handle, callback);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host)
void ScrollView__New5_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New5(host);
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy)
void ScrollView__OnScrollChanged_fn(ScrollView* __this, int32_t* x, int32_t* y, int32_t* oldx, int32_t* oldy)
{
    __this->OnScrollChanged(*x, *y, *oldx, *oldy);
}

// public void set_ScrollPosition(float2 value)
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->ScrollPosition(*value);
}

// private void SetIsHorizontal(Java.Object handle, bool isHorizontal)
void ScrollView__SetIsHorizontal_fn(ScrollView* __this, ::g::Java::Object* handle, bool* isHorizontal)
{
    __this->SetIsHorizontal(handle, *isHorizontal);
}

// private static void SetScrollPosition(Java.Object handle, int x, int y)
void ScrollView__SetScrollPosition_fn(::g::Java::Object* handle, int32_t* x, int32_t* y)
{
    ScrollView::SetScrollPosition(handle, *x, *y);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance]
void ScrollView::ctor_7(uObject* host)
{
    ctor_4(ScrollView::Create());
    _host = host;
    InstallCallback(NativeHandle, uDelegate::New(::TYPES[18/*Uno.Action<int, int, int, int>*/], (void*)ScrollView__OnScrollChanged_fn, this));
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) [instance]
void ScrollView::AllowedScrollDirections(int32_t value)
{
    SetIsHorizontal(NativeHandle, (value & 3) == 3);
}

// private void InstallCallback(Java.Object handle, Uno.Action<int, int, int, int> callback) [instance]
void ScrollView::InstallCallback(::g::Java::Object* handle, uDelegate* callback)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InstallCallback178", "(Lcom/uno/UnoObject;Ljava/lang/Object;Lcom/foreign/Uno/Action_int_int_int_int;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _ucallback=callback;
        jobject _callback = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ucallback, "com.foreign.Uno.Action_int_int_int_int");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_callback);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_callback!=NULL) { U_JNIVAR->DeleteLocalRef(_callback); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy) [instance]
void ScrollView::OnScrollChanged(int32_t x, int32_t y, int32_t oldx, int32_t oldy)
{
    float p = ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[19/*Fuse.Controls.Native.IScrollViewHost*/]));
    ::g::Fuse::Controls::Native::IScrollViewHost::OnScrollPositionChanged(uInterface(uPtr(_host), ::TYPES[19/*Fuse.Controls.Native.IScrollViewHost*/]), ::g::Uno::Float2__New2((float)x / p, (float)y / p));
}

// public void set_ScrollPosition(float2 value) [instance]
void ScrollView::ScrollPosition(::g::Uno::Float2 value)
{
    ::g::Uno::Int2 x = ::g::Uno::Int2__op_Explicit1(::g::Uno::Float2__op_Multiply1(value, ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[19/*Fuse.Controls.Native.IScrollViewHost*/]))));
    ScrollView::SetScrollPosition(Handle(), x.X, x.Y);
}

// private void SetIsHorizontal(Java.Object handle, bool isHorizontal) [instance]
void ScrollView::SetIsHorizontal(::g::Java::Object* handle, bool isHorizontal)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetIsHorizontal180", "(Lcom/uno/UnoObject;Ljava/lang/Object;Z)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uisHorizontal=isHorizontal;
        jboolean _isHorizontal = (jboolean)_uisHorizontal;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_isHorizontal);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create() [static]
::g::Java::Object* ScrollView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create177", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static]
ScrollView* ScrollView::New5(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_7(host);
    return obj1;
}

// private static void SetScrollPosition(Java.Object handle, int x, int y) [static]
void ScrollView::SetScrollPosition(::g::Java::Object* handle, int32_t x, int32_t y)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetScrollPosition181", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _ux=x;
        jint _x = (jint)_ux;
        int32_t _uy=y;
        jint _y = (jint)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/Slider.uno
// ----------------------------------------------------------------------------

// public sealed extern class Slider
// {
static void Slider_build(uType* type)
{
    ::TYPES[20] = ::g::Fuse::Controls::Native::IRangeViewHost_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View_type, interface1));
    type->SetFields(6,
        ::TYPES[20/*Fuse.Controls.Native.IRangeViewHost*/], offsetof(Slider, _host), 0);
}

::g::Fuse::Controls::Native::Android::View_type* Slider_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::View_type);
    type = (::g::Fuse::Controls::Native::Android::View_type*)uClassType::New("Fuse.Controls.Native.Android.Slider", options);
    type->fp_build_ = Slider_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))Slider__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Slider__Dispose_fn;
    return type;
}

// public override sealed void Dispose()
void Slider__Dispose_fn(Slider* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private void OnSeekBarChanged(double rel, bool fromUser)
void Slider__OnSeekBarChanged_fn(Slider* __this, double* rel, bool* fromUser)
{
    __this->OnSeekBarChanged(*rel, *fromUser);
}

// private static void SetProgress(Java.Object handle, double progress)
void Slider__SetProgress_fn(::g::Java::Object* handle, double* progress)
{
    Slider::SetProgress(handle, *progress);
}

// private void OnSeekBarChanged(double rel, bool fromUser) [instance]
void Slider::OnSeekBarChanged(double rel, bool fromUser)
{
    if (fromUser)
    {
        double us = ::g::Fuse::Controls::Native::IRangeViewHost::RelativeUserStep(uInterface(uPtr(_host), ::TYPES[20/*Fuse.Controls.Native.IRangeViewHost*/]));

        if (us > 0.0)
        {
            rel = ::g::Uno::Math::Round(rel / us) * us;
            Slider::SetProgress(Handle(), rel * 1000.0);
        }
    }

    ::g::Fuse::Controls::Native::IRangeViewHost::OnProgressChanged(uInterface(uPtr(_host), ::TYPES[20/*Fuse.Controls.Native.IRangeViewHost*/]), rel);
}

// private static void SetProgress(Java.Object handle, double progress) [static]
void Slider::SetProgress(::g::Java::Object* handle, double progress)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetProgress185", "(Ljava/lang/Object;D)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        double _uprogress=progress;
        jdouble _progress = (jdouble)_uprogress;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_progress);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/TextEdit.uno
// ------------------------------------------------------------------------------

// internal static extern class SoftKeyboard
// {
static void SoftKeyboard_build(uType* type)
{
}

uClassType* SoftKeyboard_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.SoftKeyboard", options);
    type->fp_build_ = SoftKeyboard_build;
    return type;
}

// public static void HideKeyboard(Java.Object hideKeyboardContext, Java.Object hideKeyboardWindowToken)
void SoftKeyboard__HideKeyboard_fn(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken)
{
    SoftKeyboard::HideKeyboard(hideKeyboardContext, hideKeyboardWindowToken);
}

// public static void ShowKeyboard(Java.Object viewHandle)
void SoftKeyboard__ShowKeyboard_fn(::g::Java::Object* viewHandle)
{
    SoftKeyboard::ShowKeyboard(viewHandle);
}

// public static void HideKeyboard(Java.Object hideKeyboardContext, Java.Object hideKeyboardWindowToken) [static]
void SoftKeyboard::HideKeyboard(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideKeyboard186", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhideKeyboardContext=hideKeyboardContext;
        jobject _hideKeyboardContext = (_uhideKeyboardContext==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhideKeyboardContext, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uhideKeyboardWindowToken=hideKeyboardWindowToken;
        jobject _hideKeyboardWindowToken = (_uhideKeyboardWindowToken==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhideKeyboardWindowToken, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_hideKeyboardContext,_hideKeyboardWindowToken);
        
        if (_hideKeyboardContext!=NULL) { U_JNIVAR->DeleteLocalRef(_hideKeyboardContext); }
        if (_hideKeyboardWindowToken!=NULL) { U_JNIVAR->DeleteLocalRef(_hideKeyboardWindowToken); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void ShowKeyboard(Java.Object viewHandle) [static]
void SoftKeyboard::ShowKeyboard(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ShowKeyboard187", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/SurfaceView.uno
// ---------------------------------------------------------------------------------

// public sealed extern class SurfaceView
// {
static void SurfaceView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface2),
        ::g::Fuse::Controls::Native::IViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface3));
    type->SetFields(10);
}

::g::Fuse::Controls::Native::Android::GraphicsViewBase_type* SurfaceView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::GraphicsViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsViewBase_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(SurfaceView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type);
    type = (::g::Fuse::Controls::Native::Android::GraphicsViewBase_type*)uClassType::New("Fuse.Controls.Native.Android.SurfaceView", options);
    type->fp_build_ = SurfaceView_build;
    type->fp_ctor_ = (void*)SurfaceView__New5_fn;
    type->interface3.fp_Insert = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__FuseControlsNativeIViewHostInsert_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__FuseControlsNativeIViewHostRemove_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__EndDraw_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public SurfaceView()
void SurfaceView__ctor_8_fn(SurfaceView* __this)
{
    __this->ctor_8();
}

// private void AddCallback(Java.Object handle)
void SurfaceView__AddCallback_fn(SurfaceView* __this, ::g::Java::Object* handle)
{
    __this->AddCallback(handle);
}

// private static Java.Object Create()
void SurfaceView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = SurfaceView::Create();
}

// private static Java.Object GetSurface(Java.Object holder)
void SurfaceView__GetSurface_fn(::g::Java::Object* holder, ::g::Java::Object** __retval)
{
    *__retval = SurfaceView::GetSurface(holder);
}

// public SurfaceView New()
void SurfaceView__New5_fn(SurfaceView** __retval)
{
    *__retval = SurfaceView::New5();
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h)
void SurfaceView__OnSurfaceChanged_fn(SurfaceView* __this, ::g::Java::Object* holder, int32_t* f, int32_t* w, int32_t* h)
{
    __this->OnSurfaceChanged(holder, *f, *w, *h);
}

// private void OnSurfaceCreated(Java.Object holder)
void SurfaceView__OnSurfaceCreated_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceCreated(holder);
}

// private void OnSurfaceDestroyed(Java.Object holder)
void SurfaceView__OnSurfaceDestroyed_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceDestroyed(holder);
}

// private void OnSurfaceRedrawNeeded(Java.Object holder)
void SurfaceView__OnSurfaceRedrawNeeded_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceRedrawNeeded(holder);
}

// public SurfaceView() [instance]
void SurfaceView::ctor_8()
{
    ctor_7(SurfaceView::Create());
    AddCallback(GraphicsViewHandle());
}

// private void AddCallback(Java.Object handle) [instance]
void SurfaceView::AddCallback(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback188", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h) [instance]
void SurfaceView::OnSurfaceChanged(::g::Java::Object* holder, int32_t f, int32_t w, int32_t h)
{
}

// private void OnSurfaceCreated(Java.Object holder) [instance]
void SurfaceView::OnSurfaceCreated(::g::Java::Object* holder)
{
    SetSurface(SurfaceView::GetSurface(holder));
}

// private void OnSurfaceDestroyed(Java.Object holder) [instance]
void SurfaceView::OnSurfaceDestroyed(::g::Java::Object* holder)
{
    DestroySurface();
}

// private void OnSurfaceRedrawNeeded(Java.Object holder) [instance]
void SurfaceView::OnSurfaceRedrawNeeded(::g::Java::Object* holder)
{
}

// private static Java.Object Create() [static]
::g::Java::Object* SurfaceView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create193", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetSurface(Java.Object holder) [static]
::g::Java::Object* SurfaceView::GetSurface(::g::Java::Object* holder)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSurface194", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uholder=holder;
        jobject _holder = (_uholder==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uholder, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_holder);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_holder!=NULL) { U_JNIVAR->DeleteLocalRef(_holder); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public SurfaceView New() [static]
SurfaceView* SurfaceView::New5()
{
    SurfaceView* obj1 = (SurfaceView*)uNew(SurfaceView_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/Switch.uno
// ----------------------------------------------------------------------------

// public sealed extern class Switch
// {
static void Switch_build(uType* type)
{
    ::TYPES[21] = ::g::Fuse::Controls::Native::IToggleViewHost_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Switch_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Switch_type, interface1),
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface2));
    type->SetFields(6,
        ::TYPES[21/*Fuse.Controls.Native.IToggleViewHost*/], offsetof(Switch, _host), 0);
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.Android.Switch", options);
    type->fp_build_ = Switch_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))Switch__Dispose_fn;
    type->interface2.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Switch__Dispose_fn;
    return type;
}

// public override sealed void Dispose()
void Switch__Dispose_fn(Switch* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private void OnToggleChanged(bool value)
void Switch__OnToggleChanged_fn(Switch* __this, bool* value)
{
    __this->OnToggleChanged(*value);
}

// private static void SetValue(Java.Object handle, bool value)
void Switch__SetValue_fn(::g::Java::Object* handle, bool* value)
{
    Switch::SetValue(handle, *value);
}

// public void set_Value(bool value)
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// private void OnToggleChanged(bool value) [instance]
void Switch::OnToggleChanged(bool value)
{
    ::g::Fuse::Controls::Native::IToggleViewHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[21/*Fuse.Controls.Native.IToggleViewHost*/]), value);
}

// public void set_Value(bool value) [instance]
void Switch::Value(bool value)
{
    Switch::SetValue(Handle(), value);
}

// private static void SetValue(Java.Object handle, bool value) [static]
void Switch::SetValue(::g::Java::Object* handle, bool value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetValue198", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/TextEdit.uno
// ------------------------------------------------------------------------------

// public sealed extern class TextEdit
// {
static void TextEdit_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface1),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface2),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface3));
    type->SetFields(15);
}

::g::Fuse::Controls::Native::Android::TextInput_type* TextEdit_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::TextInput_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TextEdit);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::TextInput_type);
    type = (::g::Fuse::Controls::Native::Android::TextInput_type*)uClassType::New("Fuse.Controls.Native.Android.TextEdit", options);
    type->fp_build_ = TextEdit_build;
    type->interface3.fp_FocusGained = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__FuseControlsNativeITextEditFocusGained_fn;
    type->interface3.fp_FocusLost = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__FuseControlsNativeITextEditFocusLost_fn;
    type->interface3.fp_set_IsPassword = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsPassword_fn;
    type->interface3.fp_set_IsReadOnly = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsReadOnly_fn;
    type->interface3.fp_set_InputHint = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextInput__set_InputHint_fn;
    type->interface3.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_CaretColor_fn;
    type->interface3.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_SelectionColor_fn;
    type->interface3.fp_set_ActionStyle = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextInput__set_ActionStyle_fn;
    type->interface3.fp_set_AutoCorrectHint = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextInput__set_AutoCorrectHint_fn;
    type->interface3.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextInput__set_AutoCapitalizationHint_fn;
    type->interface3.fp_set_PlaceholderText = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextInput__set_PlaceholderText_fn;
    type->interface3.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_PlaceholderColor_fn;
    type->interface2.fp_set_Value = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextView__set_Value_fn;
    type->interface2.fp_set_MaxLength = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_MaxLength_fn;
    type->interface2.fp_set_TextWrapping = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_TextWrapping_fn;
    type->interface2.fp_set_LineSpacing = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_LineSpacing_fn;
    type->interface2.fp_set_FontSize = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_FontSize_fn;
    type->interface2.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))::g::Fuse::Controls::Native::Android::TextView__set_Font_fn;
    type->interface2.fp_set_TextAlignment = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_TextAlignment_fn;
    type->interface2.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextView__set_TextColor_fn;
    type->interface2.fp_set_TextTruncation = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_TextTruncation_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__Dispose_fn;
    return type;
}

// public TextEdit(Fuse.Controls.Native.ITextEditHost host, bool isMultiline)
void TextEdit__ctor_12_fn(TextEdit* __this, uObject* host, bool* isMultiline)
{
    __this->ctor_12(host, *isMultiline);
}

// private static void MakeItPlain(Java.Object handle)
void TextEdit__MakeItPlain_fn(::g::Java::Object* handle)
{
    TextEdit::MakeItPlain(handle);
}

// public TextEdit New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline)
void TextEdit__New8_fn(uObject* host, bool* isMultiline, TextEdit** __retval)
{
    *__retval = TextEdit::New8(host, *isMultiline);
}

// public TextEdit(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [instance]
void TextEdit::ctor_12(uObject* host, bool isMultiline)
{
    ctor_11(host, isMultiline);
    TextEdit::MakeItPlain(Handle());
}

// private static void MakeItPlain(Java.Object handle) [static]
void TextEdit::MakeItPlain(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakeItPlain199", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public TextEdit New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [static]
TextEdit* TextEdit::New8(uObject* host, bool isMultiline)
{
    TextEdit* obj1 = (TextEdit*)uNew(TextEdit_typeof());
    obj1->ctor_12(host, isMultiline);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/TextEdit.uno
// ------------------------------------------------------------------------------

// public extern class TextInput
// {
static void TextInput_build(uType* type)
{
    ::TYPES[22] = ::g::Uno::Action2_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::IDisposable_typeof();
    ::TYPES[16] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[23] = ::g::Fuse::Controls::Native::ITextEditHost_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Uno::Color_typeof(),
        ::g::Fuse::Controls::Native::Android::FocusManager_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::TYPES[8/*Uno.IDisposable*/], offsetof(TextInput_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextInput_type, interface1),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextInput_type, interface2),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(TextInput_type, interface3));
    type->SetFields(6,
        ::TYPES[23/*Fuse.Controls.Native.ITextEditHost*/], offsetof(TextInput, _host), 0,
        ::TYPES[8/*Uno.IDisposable*/], offsetof(TextInput, _focusEvent), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextInput, _isMultiline), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextInput, _isPassword), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextInput, _isReadOnly), 0,
        ::g::Fuse::Controls::AutoCorrectHint_typeof(), offsetof(TextInput, _autoCorrentHint), 0,
        ::g::Fuse::Controls::AutoCapitalizationHint_typeof(), offsetof(TextInput, _autoCapitalizationHint), 0,
        ::g::Fuse::Controls::TextInputHint_typeof(), offsetof(TextInput, _inputHint), 0,
        ::g::Fuse::Controls::TextInputActionStyle_typeof(), offsetof(TextInput, _actionStyle), 0);
}

TextInput_type* TextInput_typeof()
{
    static uSStrong<TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::TextView_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(TextInput);
    options.TypeSize = sizeof(TextInput_type);
    type = (TextInput_type*)uClassType::New("Fuse.Controls.Native.Android.TextInput", options);
    type->fp_build_ = TextInput_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))TextInput__Dispose_fn;
    type->fp_Measure = (void(*)(::g::Fuse::Controls::Native::ViewHandle*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))TextInput__Measure_fn;
    type->interface3.fp_FocusGained = (void(*)(uObject*))TextInput__FuseControlsNativeITextEditFocusGained_fn;
    type->interface3.fp_FocusLost = (void(*)(uObject*))TextInput__FuseControlsNativeITextEditFocusLost_fn;
    type->interface3.fp_set_IsPassword = (void(*)(uObject*, bool*))TextInput__set_IsPassword_fn;
    type->interface3.fp_set_IsReadOnly = (void(*)(uObject*, bool*))TextInput__set_IsReadOnly_fn;
    type->interface3.fp_set_InputHint = (void(*)(uObject*, int32_t*))TextInput__set_InputHint_fn;
    type->interface3.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_CaretColor_fn;
    type->interface3.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_SelectionColor_fn;
    type->interface3.fp_set_ActionStyle = (void(*)(uObject*, int32_t*))TextInput__set_ActionStyle_fn;
    type->interface3.fp_set_AutoCorrectHint = (void(*)(uObject*, int32_t*))TextInput__set_AutoCorrectHint_fn;
    type->interface3.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int32_t*))TextInput__set_AutoCapitalizationHint_fn;
    type->interface3.fp_set_PlaceholderText = (void(*)(uObject*, uString*))TextInput__set_PlaceholderText_fn;
    type->interface3.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_PlaceholderColor_fn;
    type->interface2.fp_set_Value = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextView__set_Value_fn;
    type->interface2.fp_set_MaxLength = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_MaxLength_fn;
    type->interface2.fp_set_TextWrapping = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_TextWrapping_fn;
    type->interface2.fp_set_LineSpacing = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_LineSpacing_fn;
    type->interface2.fp_set_FontSize = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_FontSize_fn;
    type->interface2.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))::g::Fuse::Controls::Native::Android::TextView__set_Font_fn;
    type->interface2.fp_set_TextAlignment = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_TextAlignment_fn;
    type->interface2.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextView__set_TextColor_fn;
    type->interface2.fp_set_TextTruncation = (void(*)(uObject*, int32_t*))::g::Fuse::Controls::Native::Android::TextView__set_TextTruncation_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextInput__Dispose_fn;
    return type;
}

// public TextInput(Fuse.Controls.Native.ITextEditHost host, bool isMultiline)
void TextInput__ctor_11_fn(TextInput* __this, uObject* host, bool* isMultiline)
{
    __this->ctor_11(host, *isMultiline);
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value)
void TextInput__set_ActionStyle_fn(TextInput* __this, int32_t* value)
{
    __this->ActionStyle(*value);
}

// private void AddEditorActionListener(Java.Object handle)
void TextInput__AddEditorActionListener_fn(TextInput* __this, ::g::Java::Object* handle)
{
    __this->AddEditorActionListener(handle);
}

// private void AddTextChangedListener(Java.Object handle)
void TextInput__AddTextChangedListener_fn(TextInput* __this, ::g::Java::Object* handle)
{
    __this->AddTextChangedListener(handle);
}

// public void set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value)
void TextInput__set_AutoCapitalizationHint_fn(TextInput* __this, int32_t* value)
{
    __this->AutoCapitalizationHint(*value);
}

// public void set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value)
void TextInput__set_AutoCorrectHint_fn(TextInput* __this, int32_t* value)
{
    __this->AutoCorrectHint(*value);
}

// public void set_CaretColor(float4 value)
void TextInput__set_CaretColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->CaretColor(*value);
}

// private static Java.Object Create()
void TextInput__Create1_fn(::g::Java::Object** __retval)
{
    *__retval = TextInput::Create1();
}

// public override sealed void Dispose()
void TextInput__Dispose_fn(TextInput* __this)
{
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_focusEvent), ::TYPES[8/*Uno.IDisposable*/]));
    __this->_focusEvent = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.ITextEdit.FocusGained()
void TextInput__FuseControlsNativeITextEditFocusGained_fn(TextInput* __this)
{
    TextInput::RequestFocus(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.FocusLost()
void TextInput__FuseControlsNativeITextEditFocusLost_fn(TextInput* __this)
{
    if (TextInput::HasFocus(__this->Handle()))
        __this->ScheduleFocusLoss();
}

// private static bool HasFocus(Java.Object viewHandle)
void TextInput__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval)
{
    *__retval = TextInput::HasFocus(viewHandle);
}

// public void set_InputHint(Fuse.Controls.TextInputHint value)
void TextInput__set_InputHint_fn(TextInput* __this, int32_t* value)
{
    __this->InputHint(*value);
}

// public void set_IsMultiline(bool value)
void TextInput__set_IsMultiline_fn(TextInput* __this, bool* value)
{
    __this->IsMultiline(*value);
}

// public void set_IsPassword(bool value)
void TextInput__set_IsPassword_fn(TextInput* __this, bool* value)
{
    __this->IsPassword(*value);
}

// public void set_IsReadOnly(bool value)
void TextInput__set_IsReadOnly_fn(TextInput* __this, bool* value)
{
    __this->IsReadOnly(*value);
}

// public override sealed float2 Measure(Fuse.LayoutParams lp, float density)
void TextInput__Measure_fn(TextInput* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    float density_ = *density;
    ::g::Uno::Float2 ret2;

    if (__this->_isMultiline)
    {
        ::g::Java::Object* handle = __this->NativeHandle;
        uArray* measuredSize = uArray::New(::TYPES[16/*int[]*/], 2);
        TextInput::Measure2(handle, (int32_t)(lp_.X() * density_), (int32_t)(lp_.Y() * density_), lp_.HasX(), lp_.HasY(), measuredSize);
        return *__retval = ::g::Uno::Float2__New2((float)measuredSize->Item<int32_t>(0) / density_, (float)measuredSize->Item<int32_t>(1) / density_), void();
    }
    else
        return *__retval = (::g::Fuse::Controls::Native::ViewHandle__Measure_fn(__this, uCRef(lp_), uCRef(density_), &ret2), ret2), void();
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY, int[] measuredSize)
void TextInput__Measure2_fn(::g::Java::Object* handle, int32_t* w, int32_t* h, bool* hasX, bool* hasY, uArray* measuredSize)
{
    TextInput::Measure2(handle, *w, *h, *hasX, *hasY, measuredSize);
}

// private bool OnEditorAction(int actionCode)
void TextInput__OnEditorAction_fn(TextInput* __this, int32_t* actionCode, bool* __retval)
{
    *__retval = __this->OnEditorAction(*actionCode);
}

// private void OnNativeFocusChanged(Java.Object view, bool hasFocus)
void TextInput__OnNativeFocusChanged_fn(TextInput* __this, ::g::Java::Object* view, bool* hasFocus)
{
    __this->OnNativeFocusChanged(view, *hasFocus);
}

// private void OnTextChanged(string value)
void TextInput__OnTextChanged_fn(TextInput* __this, uString* value)
{
    __this->OnTextChanged(value);
}

// public void set_PlaceholderColor(float4 value)
void TextInput__set_PlaceholderColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->PlaceholderColor(*value);
}

// public void set_PlaceholderText(string value)
void TextInput__set_PlaceholderText_fn(TextInput* __this, uString* value)
{
    __this->PlaceholderText(value);
}

// private static void RequestFocus(Java.Object viewHandle)
void TextInput__RequestFocus_fn(::g::Java::Object* viewHandle)
{
    TextInput::RequestFocus(viewHandle);
}

// private int get_ReturnKeyType()
void TextInput__get_ReturnKeyType_fn(TextInput* __this, int32_t* __retval)
{
    *__retval = __this->ReturnKeyType();
}

// private void ScheduleFocusLoss()
void TextInput__ScheduleFocusLoss_fn(TextInput* __this)
{
    __this->ScheduleFocusLoss();
}

// public void set_SelectionColor(float4 value)
void TextInput__set_SelectionColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->SelectionColor(*value);
}

// private void SetCursorDrawableColor(Java.Object handle, int color)
void TextInput__SetCursorDrawableColor_fn(TextInput* __this, ::g::Java::Object* handle, int32_t* color)
{
    __this->SetCursorDrawableColor(handle, *color);
}

// private static void SetFocusable(Java.Object handle, bool value)
void TextInput__SetFocusable_fn(::g::Java::Object* handle, bool* value)
{
    TextInput::SetFocusable(handle, *value);
}

// private static void SetFocusableInTouchMode(Java.Object handle, bool value)
void TextInput__SetFocusableInTouchMode_fn(::g::Java::Object* handle, bool* value)
{
    TextInput::SetFocusableInTouchMode(handle, *value);
}

// private static void SetImeOptions(Java.Object handle, int value)
void TextInput__SetImeOptions_fn(::g::Java::Object* handle, int32_t* value)
{
    TextInput::SetImeOptions(handle, *value);
}

// private static void SetInputType(Java.Object handle, int value)
void TextInput__SetInputType_fn(::g::Java::Object* handle, int32_t* value)
{
    TextInput::SetInputType(handle, *value);
}

// private static void SetPlaceholderColor(Java.Object handle, int value)
void TextInput__SetPlaceholderColor_fn(::g::Java::Object* handle, int32_t* value)
{
    TextInput::SetPlaceholderColor(handle, *value);
}

// private static void SetPlaceholderText(Java.Object handle, string value)
void TextInput__SetPlaceholderText_fn(::g::Java::Object* handle, uString* value)
{
    TextInput::SetPlaceholderText(handle, value);
}

// private static void SetSelectionColor(Java.Object handle, int color)
void TextInput__SetSelectionColor_fn(::g::Java::Object* handle, int32_t* color)
{
    TextInput::SetSelectionColor(handle, *color);
}

// private void UpdateFlags()
void TextInput__UpdateFlags_fn(TextInput* __this)
{
    __this->UpdateFlags();
}

// public TextInput(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [instance]
void TextInput::ctor_11(uObject* host, bool isMultiline)
{
    ctor_10(TextInput::Create1());
    _host = host;
    IsMultiline(isMultiline);
    AddEditorActionListener(Handle());
    _focusEvent = ::g::Fuse::Controls::Native::Android::FocusChangedListener::AddHandler(Handle(), uDelegate::New(::TYPES[22/*Uno.Action<Java.Object, bool>*/], (void*)TextInput__OnNativeFocusChanged_fn, this));
    AddTextChangedListener(Handle());
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) [instance]
void TextInput::ActionStyle(int32_t value)
{
    _actionStyle = value;
    UpdateFlags();
}

// private void AddEditorActionListener(Java.Object handle) [instance]
void TextInput::AddEditorActionListener(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddEditorActionListener200", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void AddTextChangedListener(Java.Object handle) [instance]
void TextInput::AddTextChangedListener(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddTextChangedListener202", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) [instance]
void TextInput::AutoCapitalizationHint(int32_t value)
{
    _autoCapitalizationHint = value;
    UpdateFlags();
}

// public void set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) [instance]
void TextInput::AutoCorrectHint(int32_t value)
{
    _autoCorrentHint = value;
    UpdateFlags();
}

// public void set_CaretColor(float4 value) [instance]
void TextInput::CaretColor(::g::Uno::Float4 value)
{
    SetCursorDrawableColor(Handle(), (int32_t)::g::Uno::Color::ToArgb(value));
}

// public void set_InputHint(Fuse.Controls.TextInputHint value) [instance]
void TextInput::InputHint(int32_t value)
{
    _inputHint = value;
    UpdateFlags();
}

// public void set_IsMultiline(bool value) [instance]
void TextInput::IsMultiline(bool value)
{
    _isMultiline = value;
    UpdateFlags();
}

// public void set_IsPassword(bool value) [instance]
void TextInput::IsPassword(bool value)
{
    _isPassword = value;
    UpdateFlags();
}

// public void set_IsReadOnly(bool value) [instance]
void TextInput::IsReadOnly(bool value)
{
    _isReadOnly = value;
    UpdateFlags();
}

// private bool OnEditorAction(int actionCode) [instance]
bool TextInput::OnEditorAction(int32_t actionCode)
{
    switch (actionCode)
    {
        case 6:
        case 5:
        case 2:
        case 3:
        case 4:
            return ::g::Fuse::Controls::Native::ITextEditHost::OnInputAction(uInterface(uPtr(_host), ::TYPES[23/*Fuse.Controls.Native.ITextEditHost*/]), 0);
    }

    return false;
}

// private void OnNativeFocusChanged(Java.Object view, bool hasFocus) [instance]
void TextInput::OnNativeFocusChanged(::g::Java::Object* view, bool hasFocus)
{
    if (!hasFocus)
    {
        ::g::Fuse::Controls::Native::ITextEditHost::OnFocusLost(uInterface(uPtr(_host), ::TYPES[23/*Fuse.Controls.Native.ITextEditHost*/]));
        ScheduleFocusLoss();
    }
    else
    {
        ::g::Fuse::Controls::Native::ITextEditHost::OnFocusGained(uInterface(uPtr(_host), ::TYPES[23/*Fuse.Controls.Native.ITextEditHost*/]));
        uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardContext = NULL;
        ::g::Fuse::Controls::Native::Android::SoftKeyboard::ShowKeyboard(Handle());
    }
}

// private void OnTextChanged(string value) [instance]
void TextInput::OnTextChanged(uString* value)
{
    ::g::Fuse::Controls::Native::ITextEditHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[23/*Fuse.Controls.Native.ITextEditHost*/]), value);
}

// public void set_PlaceholderColor(float4 value) [instance]
void TextInput::PlaceholderColor(::g::Uno::Float4 value)
{
    TextInput::SetPlaceholderColor(Handle(), (int32_t)::g::Uno::Color::ToArgb(value));
}

// public void set_PlaceholderText(string value) [instance]
void TextInput::PlaceholderText(uString* value)
{
    TextInput::SetPlaceholderText(Handle(), value);
}

// private int get_ReturnKeyType() [instance]
int32_t TextInput::ReturnKeyType()
{
    switch (_actionStyle)
    {
        case 1:
            return 6;
        case 2:
            return 5;
        case 3:
            return 2;
        case 4:
            return 3;
        case 5:
            return 4;
    }

    return 0;
}

// private void ScheduleFocusLoss() [instance]
void TextInput::ScheduleFocusLoss()
{
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->LoseFocus = Handle();
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardContext = ::g::Fuse::Controls::Native::Android::FocusManager::GetContext(Handle());
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardWindowToken = ::g::Fuse::Controls::Native::Android::FocusManager::GetWindowToken(Handle());
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)::g::Fuse::Controls::Native::Android::FocusManager__CompleteFocusLoss_fn, uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())), -1, 2);
}

// public void set_SelectionColor(float4 value) [instance]
void TextInput::SelectionColor(::g::Uno::Float4 value)
{
    TextInput::SetSelectionColor(Handle(), (int32_t)::g::Uno::Color::ToArgb(value));
}

// private void SetCursorDrawableColor(Java.Object handle, int color) [instance]
void TextInput::SetCursorDrawableColor(::g::Java::Object* handle, int32_t color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetCursorDrawableColor209", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_color);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void UpdateFlags() [instance]
void TextInput::UpdateFlags()
{
    int32_t flags = 0;

    switch (_inputHint)
    {
        case 1:
        {
            flags = flags | 33;
            break;
        }
        case 2:
        {
            flags = flags | 17;
            break;
        }
        case 3:
        {
            flags = flags | 3;
            break;
        }
        case 4:
        {
            flags = flags | 2;
            break;
        }
        case 5:
        {
            flags = flags | 8194;
            break;
        }
        default:
        {
            flags = flags | 1;

            switch (_autoCorrentHint)
            {
                case 0:
                {
                    flags = flags | 32768;
                    break;
                }
                case 1:
                    break;
                case 2:
                {
                    flags = flags | 32768;
                    break;
                }
            }

            switch (_autoCapitalizationHint)
            {
                case 0:
                    break;
                case 1:
                {
                    flags = flags | 4096;
                    break;
                }
                case 2:
                {
                    flags = flags | 8192;
                    break;
                }
                case 3:
                {
                    flags = flags | 16384;
                    break;
                }
            }

            break;
        }
    }

    if (_isMultiline)
        flags = flags | 131072;

    if (_isPassword)
        flags = flags | 128;

    if (_isReadOnly)
    {
        TextInput::SetInputType(Handle(), 0);
        TextInput::SetFocusable(Handle(), false);
        TextInput::SetFocusableInTouchMode(Handle(), false);
    }
    else
    {
        TextInput::SetInputType(Handle(), flags);
        TextInput::SetImeOptions(Handle(), ReturnKeyType());
        TextInput::SetFocusable(Handle(), true);
        TextInput::SetFocusableInTouchMode(Handle(), true);
    }
}

// private static Java.Object Create() [static]
::g::Java::Object* TextInput::Create1()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create1205", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static bool HasFocus(Java.Object viewHandle) [static]
bool TextInput::HasFocus(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HasFocus206", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_viewHandle);
        bool __result = (bool)__jresult;
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY, int[] measuredSize) [static]
void TextInput::Measure2(::g::Java::Object* handle, int32_t w, int32_t h, bool hasX, bool hasY, uArray* measuredSize)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Measure2207", "(Ljava/lang/Object;IIZZLcom/uno/IntArray;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uw=w;
        jint _w = (jint)_uw;
        int32_t _uh=h;
        jint _h = (jint)_uh;
        bool _uhasX=hasX;
        jboolean _hasX = (jboolean)_uhasX;
        bool _uhasY=hasY;
        jboolean _hasY = (jboolean)_uhasY;
        uArray* _umeasuredSize=measuredSize;
        jobject _measuredSize = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_umeasuredSize);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h,_hasX,_hasY,_measuredSize);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        if (_measuredSize!=NULL) { U_JNIVAR->DeleteLocalRef(_measuredSize); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void RequestFocus(Java.Object viewHandle) [static]
void TextInput::RequestFocus(::g::Java::Object* viewHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestFocus208", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetFocusable(Java.Object handle, bool value) [static]
void TextInput::SetFocusable(::g::Java::Object* handle, bool value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFocusable210", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetFocusableInTouchMode(Java.Object handle, bool value) [static]
void TextInput::SetFocusableInTouchMode(::g::Java::Object* handle, bool value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFocusableInTouchMode211", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetImeOptions(Java.Object handle, int value) [static]
void TextInput::SetImeOptions(::g::Java::Object* handle, int32_t value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetImeOptions212", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetInputType(Java.Object handle, int value) [static]
void TextInput::SetInputType(::g::Java::Object* handle, int32_t value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetInputType213", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPlaceholderColor(Java.Object handle, int value) [static]
void TextInput::SetPlaceholderColor(::g::Java::Object* handle, int32_t value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPlaceholderColor214", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPlaceholderText(Java.Object handle, string value) [static]
void TextInput::SetPlaceholderText(::g::Java::Object* handle, uString* value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPlaceholderText215", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _uvalue=value;
        jstring _value = JniHelper::UnoToJavaString(_uvalue);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_value!=NULL) { U_JNIVAR->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetSelectionColor(Java.Object handle, int color) [static]
void TextInput::SetSelectionColor(::g::Java::Object* handle, int32_t color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetSelectionColor216", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/TextureView.uno
// ---------------------------------------------------------------------------------

// public sealed extern class TextureView
// {
static void TextureView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface2),
        ::g::Fuse::Controls::Native::IViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type, interface3));
    type->SetFields(10);
}

::g::Fuse::Controls::Native::Android::GraphicsViewBase_type* TextureView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::GraphicsViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsViewBase_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TextureView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::GraphicsViewBase_type);
    type = (::g::Fuse::Controls::Native::Android::GraphicsViewBase_type*)uClassType::New("Fuse.Controls.Native.Android.TextureView", options);
    type->fp_build_ = TextureView_build;
    type->fp_ctor_ = (void*)TextureView__New5_fn;
    type->interface3.fp_Insert = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__FuseControlsNativeIViewHostInsert_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__FuseControlsNativeIViewHostRemove_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::GraphicsViewBase__EndDraw_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public TextureView()
void TextureView__ctor_8_fn(TextureView* __this)
{
    __this->ctor_8();
}

// private static Java.Object Create()
void TextureView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextureView::Create();
}

// private void InstallSurfaceListener(Java.Object handle)
void TextureView__InstallSurfaceListener_fn(TextureView* __this, ::g::Java::Object* handle)
{
    __this->InstallSurfaceListener(handle);
}

// public TextureView New()
void TextureView__New5_fn(TextureView** __retval)
{
    *__retval = TextureView::New5();
}

// private void OnSurfaceTextureAvailable(Java.Object surface)
void TextureView__OnSurfaceTextureAvailable_fn(TextureView* __this, ::g::Java::Object* surface)
{
    __this->OnSurfaceTextureAvailable(surface);
}

// private void OnSurfaceTextureDestroyed()
void TextureView__OnSurfaceTextureDestroyed_fn(TextureView* __this)
{
    __this->OnSurfaceTextureDestroyed();
}

// public TextureView() [instance]
void TextureView::ctor_8()
{
    ctor_7(TextureView::Create());
    InstallSurfaceListener(GraphicsViewHandle());
}

// private void InstallSurfaceListener(Java.Object handle) [instance]
void TextureView::InstallSurfaceListener(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InstallSurfaceListener218", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSurfaceTextureAvailable(Java.Object surface) [instance]
void TextureView::OnSurfaceTextureAvailable(::g::Java::Object* surface)
{
    SetSurface(surface);
}

// private void OnSurfaceTextureDestroyed() [instance]
void TextureView::OnSurfaceTextureDestroyed()
{
    DestroySurface();
}

// private static Java.Object Create() [static]
::g::Java::Object* TextureView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create217", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextureView New() [static]
TextureView* TextureView::New5()
{
    TextureView* obj1 = (TextureView*)uNew(TextureView_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/TextView.uno
// ------------------------------------------------------------------------------

// public extern class TextView
// {
static void TextView_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Color_typeof(),
        ::g::Fuse::Font_typeof(),
        ::g::Fuse::Controls::Native::Android::TypefaceCache_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextView_type, interface1),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextView_type, interface2));
    type->SetFields(6);
}

TextView_type* TextView_typeof()
{
    static uSStrong<TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(TextView_type);
    type = (TextView_type*)uClassType::New("Fuse.Controls.Native.Android.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New5_fn;
    type->interface2.fp_set_Value = (void(*)(uObject*, uString*))TextView__set_Value_fn;
    type->interface2.fp_set_MaxLength = (void(*)(uObject*, int32_t*))TextView__set_MaxLength_fn;
    type->interface2.fp_set_TextWrapping = (void(*)(uObject*, int32_t*))TextView__set_TextWrapping_fn;
    type->interface2.fp_set_LineSpacing = (void(*)(uObject*, float*))TextView__set_LineSpacing_fn;
    type->interface2.fp_set_FontSize = (void(*)(uObject*, float*))TextView__set_FontSize_fn;
    type->interface2.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))TextView__set_Font_fn;
    type->interface2.fp_set_TextAlignment = (void(*)(uObject*, int32_t*))TextView__set_TextAlignment_fn;
    type->interface2.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))TextView__set_TextColor_fn;
    type->interface2.fp_set_TextTruncation = (void(*)(uObject*, int32_t*))TextView__set_TextTruncation_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public TextView()
void TextView__ctor_9_fn(TextView* __this)
{
    __this->ctor_9();
}

// public TextView(Java.Object handle)
void TextView__ctor_10_fn(TextView* __this, ::g::Java::Object* handle)
{
    __this->ctor_10(handle);
}

// private static Java.Object Create()
void TextView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextView::Create();
}

// public void set_Font(Fuse.Font value)
void TextView__set_Font_fn(TextView* __this, ::g::Fuse::Font* value)
{
    __this->Font(value);
}

// public void set_FontSize(float value)
void TextView__set_FontSize_fn(TextView* __this, float* value)
{
    __this->FontSize(*value);
}

// public void set_LineSpacing(float value)
void TextView__set_LineSpacing_fn(TextView* __this, float* value)
{
    __this->LineSpacing(*value);
}

// public void set_MaxLength(int value)
void TextView__set_MaxLength_fn(TextView* __this, int32_t* value)
{
    __this->MaxLength(*value);
}

// public TextView New()
void TextView__New5_fn(TextView** __retval)
{
    *__retval = TextView::New5();
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle)
void TextView__SetFont_fn(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    TextView::SetFont(handle, fontHandle);
}

// private static void SetFontSize(Java.Object handle, float size)
void TextView__SetFontSize_fn(::g::Java::Object* handle, float* size)
{
    TextView::SetFontSize(handle, *size);
}

// private static void SetLineSpacing(Java.Object handle, float spacing)
void TextView__SetLineSpacing_fn(::g::Java::Object* handle, float* spacing)
{
    TextView::SetLineSpacing(handle, *spacing);
}

// private static void SetMaxLength(Java.Object handle, int maxLength)
void TextView__SetMaxLength_fn(::g::Java::Object* handle, int32_t* maxLength)
{
    TextView::SetMaxLength(handle, *maxLength);
}

// private static void SetText(Java.Object handle, string text)
void TextView__SetText_fn(::g::Java::Object* handle, uString* text)
{
    TextView::SetText(handle, text);
}

// private static void SetTextAlignment(Java.Object handle, int alignment)
void TextView__SetTextAlignment_fn(::g::Java::Object* handle, int32_t* alignment)
{
    TextView::SetTextAlignment(handle, *alignment);
}

// private static void SetTextColor(Java.Object handle, int color)
void TextView__SetTextColor_fn(::g::Java::Object* handle, int32_t* color)
{
    TextView::SetTextColor(handle, *color);
}

// private static void SetTextWrapping(Java.Object handle, bool wrap)
void TextView__SetTextWrapping_fn(::g::Java::Object* handle, bool* wrap)
{
    TextView::SetTextWrapping(handle, *wrap);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value)
void TextView__set_TextAlignment_fn(TextView* __this, int32_t* value)
{
    __this->TextAlignment(*value);
}

// public void set_TextColor(float4 value)
void TextView__set_TextColor_fn(TextView* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value)
void TextView__set_TextTruncation_fn(TextView* __this, int32_t* value)
{
    __this->TextTruncation(*value);
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value)
void TextView__set_TextWrapping_fn(TextView* __this, int32_t* value)
{
    __this->TextWrapping(*value);
}

// public void set_Value(string value)
void TextView__set_Value_fn(TextView* __this, uString* value)
{
    __this->Value(value);
}

// public TextView() [instance]
void TextView::ctor_9()
{
    ctor_10(TextView::Create());
}

// public TextView(Java.Object handle) [instance]
void TextView::ctor_10(::g::Java::Object* handle)
{
    ctor_7(handle);
}

// public void set_Font(Fuse.Font value) [instance]
void TextView::Font(::g::Fuse::Font* value)
{
    ::g::Fuse::Controls::Native::Android::Typeface* typeface = (value != ::g::Fuse::Font::PlatformDefault()) ? (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::TypefaceCache::GetTypeface(value) : (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::Typeface::Default();
    TextView::SetFont(Handle(), uPtr(typeface)->Handle());
}

// public void set_FontSize(float value) [instance]
void TextView::FontSize(float value)
{
    TextView::SetFontSize(Handle(), value);
}

// public void set_LineSpacing(float value) [instance]
void TextView::LineSpacing(float value)
{
    TextView::SetLineSpacing(Handle(), value);
}

// public void set_MaxLength(int value) [instance]
void TextView::MaxLength(int32_t value)
{
    TextView::SetMaxLength(Handle(), (value == 0) ? 2147483647 : value);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value) [instance]
void TextView::TextAlignment(int32_t value)
{
    switch (value)
    {
        case 0:
        {
            TextView::SetTextAlignment(Handle(), 3);
            break;
        }
        case 1:
        {
            TextView::SetTextAlignment(Handle(), 1);
            break;
        }
        case 2:
        {
            TextView::SetTextAlignment(Handle(), 5);
            break;
        }
    }
}

// public void set_TextColor(float4 value) [instance]
void TextView::TextColor(::g::Uno::Float4 value)
{
    TextView::SetTextColor(Handle(), (int32_t)::g::Uno::Color::ToArgb(value));
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value) [instance]
void TextView::TextTruncation(int32_t value)
{
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value) [instance]
void TextView::TextWrapping(int32_t value)
{
    TextView::SetTextWrapping(Handle(), value == 1);
}

// public void set_Value(string value) [instance]
void TextView::Value(uString* value)
{
    TextView::SetText(Handle(), value);
}

// private static Java.Object Create() [static]
::g::Java::Object* TextView::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create221", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextView New() [static]
TextView* TextView::New5()
{
    TextView* obj2 = (TextView*)uNew(TextView_typeof());
    obj2->ctor_9();
    return obj2;
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle) [static]
void TextView::SetFont(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFont222", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ufontHandle=fontHandle;
        jobject _fontHandle = (_ufontHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ufontHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_fontHandle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_fontHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_fontHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetFontSize(Java.Object handle, float size) [static]
void TextView::SetFontSize(::g::Java::Object* handle, float size)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFontSize223", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _usize=size;
        jfloat _size = (jfloat)_usize;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_size);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetLineSpacing(Java.Object handle, float spacing) [static]
void TextView::SetLineSpacing(::g::Java::Object* handle, float spacing)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetLineSpacing224", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uspacing=spacing;
        jfloat _spacing = (jfloat)_uspacing;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_spacing);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetMaxLength(Java.Object handle, int maxLength) [static]
void TextView::SetMaxLength(::g::Java::Object* handle, int32_t maxLength)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMaxLength225", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _umaxLength=maxLength;
        jint _maxLength = (jint)_umaxLength;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_maxLength);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetText(Java.Object handle, string text) [static]
void TextView::SetText(::g::Java::Object* handle, uString* text)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText226", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextAlignment(Java.Object handle, int alignment) [static]
void TextView::SetTextAlignment(::g::Java::Object* handle, int32_t alignment)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextAlignment227", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _ualignment=alignment;
        jint _alignment = (jint)_ualignment;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_alignment);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextColor(Java.Object handle, int color) [static]
void TextView::SetTextColor(::g::Java::Object* handle, int32_t color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextColor228", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextWrapping(Java.Object handle, bool wrap) [static]
void TextView::SetTextWrapping(::g::Java::Object* handle, bool wrap)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextWrapping229", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uwrap=wrap;
        jboolean _wrap = (jboolean)_uwrap;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_wrap);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/TypefaceCache.uno
// -----------------------------------------------------------------------------------

// internal sealed extern class Typeface
// {
static void Typeface_build(uType* type)
{
    ::TYPES[9] = ::g::Java::Object_typeof();
    type->SetFields(0,
        ::TYPES[9/*Java.Object*/], offsetof(Typeface, _handle), 0);
}

uType* Typeface_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Typeface);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.Typeface", options);
    type->fp_build_ = Typeface_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Typeface__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Typeface__GetHashCode_fn;
    return type;
}

// public Typeface(Java.Object handle)
void Typeface__ctor__fn(Typeface* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// private static Java.Object CreateFromBundleFile(string bundlePath)
void Typeface__CreateFromBundleFile_fn(uString* bundlePath, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromBundleFile(bundlePath);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file)
void Typeface__CreateFromBundleFile1_fn(::g::Uno::IO::BundleFile* file, Typeface** __retval)
{
    *__retval = Typeface::CreateFromBundleFile1(file);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path)
void Typeface__CreateFromFile_fn(uString* path, Typeface** __retval)
{
    *__retval = Typeface::CreateFromFile(path);
}

// private static Java.Object CreateFromFileImpl(string path)
void Typeface__CreateFromFileImpl_fn(uString* path, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromFileImpl(path);
}

// public static Fuse.Controls.Native.Android.Typeface get_Default()
void Typeface__get_Default_fn(Typeface** __retval)
{
    *__retval = Typeface::Default();
}

// public override sealed bool Equals(object obj)
void Typeface__Equals_fn(Typeface* __this, uObject* obj, bool* __retval)
{
    return *__retval = uIs(obj, ::TYPES[9/*Java.Object*/]) ? ::g::Uno::Object::Equals(uPtr(__this->_handle), uCast< ::g::Java::Object*>(obj, ::TYPES[9/*Java.Object*/])) : false, void();
}

// private static Java.Object GetDefault()
void Typeface__GetDefault_fn(::g::Java::Object** __retval)
{
    *__retval = Typeface::GetDefault();
}

// public override sealed int GetHashCode()
void Typeface__GetHashCode_fn(Typeface* __this, int32_t* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_handle)), void();
}

// public Java.Object get_Handle()
void Typeface__get_Handle_fn(Typeface* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Typeface New(Java.Object handle)
void Typeface__New1_fn(::g::Java::Object* handle, Typeface** __retval)
{
    *__retval = Typeface::New1(handle);
}

// public Typeface(Java.Object handle) [instance]
void Typeface::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public Java.Object get_Handle() [instance]
::g::Java::Object* Typeface::Handle()
{
    return _handle;
}

// private static Java.Object CreateFromBundleFile(string bundlePath) [static]
::g::Java::Object* Typeface::CreateFromBundleFile(uString* bundlePath)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromBundleFile234", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _ubundlePath=bundlePath;
        jstring _bundlePath = JniHelper::UnoToJavaString(_ubundlePath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_bundlePath);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_bundlePath!=NULL) { U_JNIVAR->DeleteLocalRef(_bundlePath); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) [static]
Typeface* Typeface::CreateFromBundleFile1(::g::Uno::IO::BundleFile* file)
{
    return Typeface::New1(Typeface::CreateFromBundleFile(uPtr(file)->BundlePath()));
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path) [static]
Typeface* Typeface::CreateFromFile(uString* path)
{
    return Typeface::New1(Typeface::CreateFromFileImpl(path));
}

// private static Java.Object CreateFromFileImpl(string path) [static]
::g::Java::Object* Typeface::CreateFromFileImpl(uString* path)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromFileImpl235", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _upath=path;
        jstring _path = JniHelper::UnoToJavaString(_upath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_path);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_path!=NULL) { U_JNIVAR->DeleteLocalRef(_path); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetDefault() [static]
::g::Java::Object* Typeface::GetDefault()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDefault236", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Typeface New(Java.Object handle) [static]
Typeface* Typeface::New1(::g::Java::Object* handle)
{
    Typeface* obj1 = (Typeface*)uNew(Typeface_typeof());
    obj1->ctor_(handle);
    return obj1;
}

// public static Fuse.Controls.Native.Android.Typeface get_Default() [static]
Typeface* Typeface::Default()
{
    return Typeface::New1(Typeface::GetDefault());
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/TypefaceCache.uno
// -----------------------------------------------------------------------------------

// internal static extern class TypefaceCache
// {
// static generated TypefaceCache()
static void TypefaceCache__cctor__fn(uType* __type)
{
    TypefaceCache::_typefaces_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[24/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.Android.Typeface>*/]));
}

static void TypefaceCache_build(uType* type)
{
    ::STRINGS[4] = uString::Const("/tempFont");
    ::TYPES[24] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::Android::Typeface_typeof(), NULL);
    ::TYPES[25] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[26] = ::g::Fuse::Resources::SystemFileSource_typeof();
    type->SetFields(0,
        ::TYPES[24/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.Android.Typeface>*/], (uintptr_t)&TypefaceCache::_typefaces_, uFieldFlagsStatic);
}

uClassType* TypefaceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.TypefaceCache", options);
    type->fp_build_ = TypefaceCache_build;
    type->fp_cctor_ = TypefaceCache__cctor__fn;
    return type;
}

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font)
void TypefaceCache__GetTypeface_fn(::g::Fuse::Font* font, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypeface(font);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file)
void TypefaceCache__GetTypefaceFromBundleFile_fn(::g::Uno::IO::BundleFile* file, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromBundleFile(file);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource)
void TypefaceCache__GetTypefaceFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromFileSource(fileSource);
}

uSStrong< ::g::Uno::Collections::Dictionary*> TypefaceCache::_typefaces_;

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font) [static]
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypeface(::g::Fuse::Font* font)
{
    TypefaceCache_typeof()->Init();
    return uIs((::g::Uno::UX::FileSource*)uPtr(font)->FileSource(), ::TYPES[25/*Uno.UX.BundleFileSource*/]) ? (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromBundleFile(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(uPtr(font)->FileSource(), ::TYPES[25/*Uno.UX.BundleFileSource*/]))->BundleFile) : (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromFileSource(uPtr(font)->FileSource());
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) [static]
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromBundleFile(::g::Uno::IO::BundleFile* file)
{
    TypefaceCache_typeof()->Init();
    bool ret1;
    ::g::Fuse::Controls::Native::Android::Typeface* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces_), uPtr(file)->BundlePath(), &ret1), ret1))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces_), uPtr(file)->BundlePath(), &ret2), ret2);

    ::g::Fuse::Controls::Native::Android::Typeface* typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromBundleFile1(file);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces_), uPtr(file)->BundlePath(), typeface);
    return typeface;
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) [static]
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromFileSource(::g::Uno::UX::FileSource* fileSource)
{
    TypefaceCache_typeof()->Init();
    bool ret3;
    ::g::Fuse::Controls::Native::Android::Typeface* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces_), uPtr(fileSource)->Name, &ret3), ret3))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces_), uPtr(fileSource)->Name, &ret4), ret4);

    ::g::Fuse::Controls::Native::Android::Typeface* typeface;

    if (uIs(fileSource, ::TYPES[26/*Fuse.Resources.SystemFileSource*/]))
        typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromFile(uPtr(fileSource)->Name);
    else
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(2), ::STRINGS[4/*"/tempFont"*/]);
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromFile(path);
        ::g::Uno::IO::File::Delete(path);
    }

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces_), uPtr(fileSource)->Name, typeface);
    return typeface;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/View.uno
// --------------------------------------------------------------------------

// public abstract extern class View
// {
static void View_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface1));
    type->SetFields(5,
        ::g::Java::Object_typeof(), offsetof(View, _handle), 0);
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.Android.View", options);
    type->fp_build_ = View_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected View(Java.Object handle)
void View__ctor_4_fn(View* __this, ::g::Java::Object* handle)
{
    __this->ctor_4(handle);
}

// protected View(Java.Object handle, bool isLeafView)
void View__ctor_5_fn(View* __this, ::g::Java::Object* handle, bool* isLeafView)
{
    __this->ctor_5(handle, *isLeafView);
}

// protected View(Java.Object handle, bool isLeafView, bool handlesInput)
void View__ctor_6_fn(View* __this, ::g::Java::Object* handle, bool* isLeafView, bool* handlesInput)
{
    __this->ctor_6(handle, *isLeafView, *handlesInput);
}

// public Java.Object get_Handle()
void View__get_Handle_fn(View* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// protected View(Java.Object handle) [instance]
void View::ctor_4(::g::Java::Object* handle)
{
    ctor_5(handle, false);
}

// protected View(Java.Object handle, bool isLeafView) [instance]
void View::ctor_5(::g::Java::Object* handle, bool isLeafView)
{
    ctor_6(handle, isLeafView, false);
}

// protected View(Java.Object handle, bool isLeafView, bool handlesInput) [instance]
void View::ctor_6(::g::Java::Object* handle, bool isLeafView, bool handlesInput)
{
    ctor_2(handle, isLeafView, handlesInput);
    _handle = handle;
}

// public Java.Object get_Handle() [instance]
::g::Java::Object* View::Handle()
{
    return _handle;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/ViewGroup.uno
// -------------------------------------------------------------------------------

// public sealed extern class ViewGroup
// {
static void ViewGroup_build(uType* type)
{
}

uType* ViewGroup_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ViewGroup);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.ViewGroup", options);
    type->fp_build_ = ViewGroup_build;
    return type;
}

// internal static void AddView(Java.Object parentHandle, Java.Object childHandle)
void ViewGroup__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::AddView(parentHandle, childHandle);
}

// internal static void AddView(Java.Object parentHandle, Java.Object childHandle, int index)
void ViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int32_t* index)
{
    ViewGroup::AddView1(parentHandle, childHandle, *index);
}

// internal static Java.Object Create()
void ViewGroup__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ViewGroup::Create();
}

// internal static void RemoveView(Java.Object parentHandle, Java.Object childHandle)
void ViewGroup__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::RemoveView(parentHandle, childHandle);
}

// internal static void AddView(Java.Object parentHandle, Java.Object childHandle) [static]
void ViewGroup::AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView237", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) [static]
void ViewGroup::AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int32_t index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView1238", "(Ljava/lang/Object;Ljava/lang/Object;I)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle,_index);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static Java.Object Create() [static]
::g::Java::Object* ViewGroup::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create239", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static void RemoveView(Java.Object parentHandle, Java.Object childHandle) [static]
void ViewGroup::RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveView240", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::Android
