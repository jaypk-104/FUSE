// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/Button.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ILabelView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Button;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Button
// {
struct Button_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::Native::ILabelView interface3;
};

Button_type* Button_typeof();
void Button__ctor_5_fn(Button* __this);
void Button__Create_fn(::g::ObjC::Object** __retval);
void Button__FuseControlsNativeILabelViewset_Text_fn(Button* __this, uString* value);
void Button__New3_fn(Button** __retval);
void Button__SetText_fn(::g::ObjC::Object* handle, uString* text);

struct Button : ::g::Fuse::Controls::Native::iOS::LeafView
{
    void ctor_5();
    static ::g::ObjC::Object* Create();
    static Button* New3();
    static void SetText(::g::ObjC::Object* handle, uString* text);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
