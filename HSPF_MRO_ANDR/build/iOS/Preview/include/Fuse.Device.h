// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/1.12.0/iOSApp.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Device;}}

namespace g{
namespace Fuse{

// internal static extern class Device
// {
uClassType* Device_typeof();
void Device__GetCurrentOrientation_fn(int32_t* __retval);
void Device__GetStatusBarOrientation_fn(int32_t* __retval);
void Device__get_Orientation_fn(int32_t* __retval);
void Device__get_StatusBarOrientation_fn(int32_t* __retval);

struct Device : uObject
{
    static int32_t GetCurrentOrientation();
    static int32_t GetStatusBarOrientation();
    static int32_t Orientation();
    static int32_t StatusBarOrientation();
};
// }

}} // ::g::Fuse
