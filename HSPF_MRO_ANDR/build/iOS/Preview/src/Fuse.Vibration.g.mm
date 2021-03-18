// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <AudioToolbox/AudioToolbox.h>
#include <Fuse.Vibration.Vibration.h>
#include <Uno.Double.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Vibration{

// /usr/local/share/uno/Packages/Fuse.Vibration/1.12.0/Vibration.uno
// -----------------------------------------------------------------

// public static class Vibration
// {
static void Vibration_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("Vibrate", NULL, (void*)Vibration__Vibrate_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

uClassType* Vibration_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Vibration.Vibration", options);
    type->fp_build_ = Vibration_build;
    return type;
}

// public static extern void Vibrate(double seconds)
void Vibration__Vibrate_fn(double* seconds)
{
    Vibration::Vibrate(*seconds);
}

// public static extern void Vibrate(double seconds) [static]
void Vibration::Vibrate(double seconds)
{
    @autoreleasepool
    {
        AudioServicesPlayAlertSound(kSystemSoundID_Vibrate);
    }
    
}
// }

}}} // ::g::Fuse::Vibration
