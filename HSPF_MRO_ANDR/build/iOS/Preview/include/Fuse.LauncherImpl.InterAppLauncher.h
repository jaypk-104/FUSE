// This file was generated based on /usr/local/share/uno/Packages/Fuse.Launcher.InterApp/1.12.0/InterApp/InterAppLauncher.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace LauncherImpl{struct InterAppLauncher;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct Uri;}}}}

namespace g{
namespace Fuse{
namespace LauncherImpl{

// public static class InterAppLauncher
// {
uClassType* InterAppLauncher_typeof();
void InterAppLauncher__LaunchUri_fn(::g::Uno::Net::Http::Uri* uri);

struct InterAppLauncher : uObject
{
    static void LaunchUri(::g::Uno::Net::Http::Uri* uri);
};
// }

}}} // ::g::Fuse::LauncherImpl
