// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Bindings.iOSDeviceInterop.h>
#include <Fuse.LauncherImpl.InterAppLauncher.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.String.h>

namespace g{
namespace Fuse{
namespace LauncherImpl{

// /usr/local/share/uno/Packages/Fuse.Launcher.InterApp/1.12.0/InterApp/InterAppLauncher.uno
// -----------------------------------------------------------------------------------------

// public static class InterAppLauncher
// {
static void InterAppLauncher_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("LaunchUri", NULL, (void*)InterAppLauncher__LaunchUri_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Net::Http::Uri_typeof()));
}

uClassType* InterAppLauncher_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LauncherImpl.InterAppLauncher", options);
    type->fp_build_ = InterAppLauncher_build;
    return type;
}

// public static void LaunchUri(Uno.Net.Http.Uri uri)
void InterAppLauncher__LaunchUri_fn(::g::Uno::Net::Http::Uri* uri)
{
    InterAppLauncher::LaunchUri(uri);
}

// public static void LaunchUri(Uno.Net.Http.Uri uri) [static]
void InterAppLauncher::LaunchUri(::g::Uno::Net::Http::Uri* uri)
{
    uStackFrame __("Fuse.LauncherImpl.InterAppLauncher", "LaunchUri(Uno.Net.Http.Uri)");
    ::g::Fuse::iOS::Bindings::iOSDeviceInterop::LaunchUriiOS(uPtr(uri)->AbsoluteUri());
}
// }

}}} // ::g::Fuse::LauncherImpl
