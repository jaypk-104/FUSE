// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Android/TextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct FocusManager;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class FocusManager
// {
uType* FocusManager_typeof();
void FocusManager__ctor__fn(FocusManager* __this);
void FocusManager__CompleteFocusLoss_fn(FocusManager* __this);
void FocusManager__GetContext_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval);
void FocusManager__GetWindowToken_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval);
void FocusManager__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval);
void FocusManager__New1_fn(FocusManager** __retval);
void FocusManager__RequestRootViewFocus_fn(::g::Java::Object* viewHandle);

struct FocusManager : uObject
{
    static uSStrong<FocusManager*> Singleton_;
    static uSStrong<FocusManager*>& Singleton() { return FocusManager_typeof()->Init(), Singleton_; }
    uStrong< ::g::Java::Object*> LoseFocus;
    uStrong< ::g::Java::Object*> HideKeyboardContext;
    uStrong< ::g::Java::Object*> HideKeyboardWindowToken;

    void ctor_();
    void CompleteFocusLoss();
    static ::g::Java::Object* GetContext(::g::Java::Object* viewHandle);
    static ::g::Java::Object* GetWindowToken(::g::Java::Object* viewHandle);
    static bool HasFocus(::g::Java::Object* viewHandle);
    static FocusManager* New1();
    static void RequestRootViewFocus(::g::Java::Object* viewHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
