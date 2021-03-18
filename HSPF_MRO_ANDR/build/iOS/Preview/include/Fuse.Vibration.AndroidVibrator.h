// This file was generated based on /usr/local/share/uno/Packages/Fuse.Vibration/1.12.0/Vibration.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Vibration{struct AndroidVibrator;}}}

namespace g{
namespace Fuse{
namespace Vibration{

// internal sealed class AndroidVibrator
// {
uType* AndroidVibrator_typeof();
void AndroidVibrator__ctor__fn(AndroidVibrator* __this, double* seconds);
void AndroidVibrator__New1_fn(double* seconds, AndroidVibrator** __retval);

struct AndroidVibrator : uObject
{
    double _seconds;

    void ctor_(double seconds);
    static AndroidVibrator* New1(double seconds);
};
// }

}}} // ::g::Fuse::Vibration
