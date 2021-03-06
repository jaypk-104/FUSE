// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/TextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.TextView.h>
#include <Fuse.Controls.Native.ITextEdit.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextInput;}}}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public extern class TextInput
// {
struct TextInput_type : ::g::Fuse::Controls::Native::Android::TextView_type
{
    ::g::Fuse::Controls::Native::ITextEdit interface3;
};

TextInput_type* TextInput_typeof();
void TextInput__ctor_11_fn(TextInput* __this, uObject* host, bool* isMultiline);
void TextInput__set_ActionStyle_fn(TextInput* __this, int32_t* value);
void TextInput__AddEditorActionListener_fn(TextInput* __this, ::g::Java::Object* handle);
void TextInput__AddTextChangedListener_fn(TextInput* __this, ::g::Java::Object* handle);
void TextInput__set_AutoCapitalizationHint_fn(TextInput* __this, int32_t* value);
void TextInput__set_AutoCorrectHint_fn(TextInput* __this, int32_t* value);
void TextInput__set_CaretColor_fn(TextInput* __this, ::g::Uno::Float4* value);
void TextInput__Create1_fn(::g::Java::Object** __retval);
void TextInput__Dispose_fn(TextInput* __this);
void TextInput__FuseControlsNativeITextEditFocusGained_fn(TextInput* __this);
void TextInput__FuseControlsNativeITextEditFocusLost_fn(TextInput* __this);
void TextInput__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval);
void TextInput__set_InputHint_fn(TextInput* __this, int32_t* value);
void TextInput__set_IsMultiline_fn(TextInput* __this, bool* value);
void TextInput__set_IsPassword_fn(TextInput* __this, bool* value);
void TextInput__set_IsReadOnly_fn(TextInput* __this, bool* value);
void TextInput__Measure_fn(TextInput* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval);
void TextInput__Measure2_fn(::g::Java::Object* handle, int32_t* w, int32_t* h, bool* hasX, bool* hasY, uArray* measuredSize);
void TextInput__OnEditorAction_fn(TextInput* __this, int32_t* actionCode, bool* __retval);
void TextInput__OnNativeFocusChanged_fn(TextInput* __this, ::g::Java::Object* view, bool* hasFocus);
void TextInput__OnTextChanged_fn(TextInput* __this, uString* value);
void TextInput__set_PlaceholderColor_fn(TextInput* __this, ::g::Uno::Float4* value);
void TextInput__set_PlaceholderText_fn(TextInput* __this, uString* value);
void TextInput__RequestFocus_fn(::g::Java::Object* viewHandle);
void TextInput__get_ReturnKeyType_fn(TextInput* __this, int32_t* __retval);
void TextInput__ScheduleFocusLoss_fn(TextInput* __this);
void TextInput__set_SelectionColor_fn(TextInput* __this, ::g::Uno::Float4* value);
void TextInput__SetCursorDrawableColor_fn(TextInput* __this, ::g::Java::Object* handle, int32_t* color);
void TextInput__SetFocusable_fn(::g::Java::Object* handle, bool* value);
void TextInput__SetFocusableInTouchMode_fn(::g::Java::Object* handle, bool* value);
void TextInput__SetImeOptions_fn(::g::Java::Object* handle, int32_t* value);
void TextInput__SetInputType_fn(::g::Java::Object* handle, int32_t* value);
void TextInput__SetPlaceholderColor_fn(::g::Java::Object* handle, int32_t* value);
void TextInput__SetPlaceholderText_fn(::g::Java::Object* handle, uString* value);
void TextInput__SetSelectionColor_fn(::g::Java::Object* handle, int32_t* color);
void TextInput__UpdateFlags_fn(TextInput* __this);

struct TextInput : ::g::Fuse::Controls::Native::Android::TextView
{
    uStrong<uObject*> _host;
    uStrong<uObject*> _focusEvent;
    bool _isMultiline;
    bool _isPassword;
    bool _isReadOnly;
    int32_t _autoCorrentHint;
    int32_t _autoCapitalizationHint;
    int32_t _inputHint;
    int32_t _actionStyle;

    void ctor_11(uObject* host, bool isMultiline);
    void ActionStyle(int32_t value);
    void AddEditorActionListener(::g::Java::Object* handle);
    void AddTextChangedListener(::g::Java::Object* handle);
    void AutoCapitalizationHint(int32_t value);
    void AutoCorrectHint(int32_t value);
    void CaretColor(::g::Uno::Float4 value);
    void InputHint(int32_t value);
    void IsMultiline(bool value);
    void IsPassword(bool value);
    void IsReadOnly(bool value);
    bool OnEditorAction(int32_t actionCode);
    void OnNativeFocusChanged(::g::Java::Object* view, bool hasFocus);
    void OnTextChanged(uString* value);
    void PlaceholderColor(::g::Uno::Float4 value);
    void PlaceholderText(uString* value);
    int32_t ReturnKeyType();
    void ScheduleFocusLoss();
    void SelectionColor(::g::Uno::Float4 value);
    void SetCursorDrawableColor(::g::Java::Object* handle, int32_t color);
    void UpdateFlags();
    static ::g::Java::Object* Create1();
    static bool HasFocus(::g::Java::Object* viewHandle);
    static void Measure2(::g::Java::Object* handle, int32_t w, int32_t h, bool hasX, bool hasY, uArray* measuredSize);
    static void RequestFocus(::g::Java::Object* viewHandle);
    static void SetFocusable(::g::Java::Object* handle, bool value);
    static void SetFocusableInTouchMode(::g::Java::Object* handle, bool value);
    static void SetImeOptions(::g::Java::Object* handle, int32_t value);
    static void SetInputType(::g::Java::Object* handle, int32_t value);
    static void SetPlaceholderColor(::g::Java::Object* handle, int32_t value);
    static void SetPlaceholderText(::g::Java::Object* handle, uString* value);
    static void SetSelectionColor(::g::Java::Object* handle, int32_t color);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
