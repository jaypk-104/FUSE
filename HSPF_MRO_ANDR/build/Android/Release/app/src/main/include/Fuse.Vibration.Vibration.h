// This file was generated based on /usr/local/share/uno/Packages/Fuse.Vibration/1.12.0/Vibration.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Vibration{struct Vibration;}}}

namespace g{
namespace Fuse{
namespace Vibration{

// public static class Vibration
// {
uClassType* Vibration_typeof();
void Vibration__Vibrate_fn(double* seconds);

struct Vibration : uObject
{
    static void Vibrate(double seconds);
};
// }

}}} // ::g::Fuse::Vibration
