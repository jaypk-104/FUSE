// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/iOS/iOSDevice.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct iOSDevice;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct OSVersion;}}}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public static extern class iOSDevice
// {
uClassType* iOSDevice_typeof();
void iOSDevice__CompensateForOrientation_fn(::g::Uno::Float2* size, ::g::Uno::Float2* __retval);
void iOSDevice__CompensateForOrientation1_fn(::g::Uno::Rect* rect, ::g::Uno::Rect* __retval);
void iOSDevice__IsLandscapeOrientation_fn(bool* __retval);
void iOSDevice__get_OperatingSystemVersion_fn(::g::Fuse::Controls::Native::iOS::OSVersion** __retval);
void iOSDevice__get_Orientation_fn(int32_t* __retval);

struct iOSDevice : uObject
{
    static uSStrong< ::g::Fuse::Controls::Native::iOS::OSVersion*> _osVersion_;
    static uSStrong< ::g::Fuse::Controls::Native::iOS::OSVersion*>& _osVersion() { return _osVersion_; }

    static ::g::Uno::Float2 CompensateForOrientation(::g::Uno::Float2 size);
    static ::g::Uno::Rect CompensateForOrientation1(::g::Uno::Rect rect);
    static bool IsLandscapeOrientation();
    static ::g::Fuse::Controls::Native::iOS::OSVersion* OperatingSystemVersion();
    static int32_t Orientation();
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
