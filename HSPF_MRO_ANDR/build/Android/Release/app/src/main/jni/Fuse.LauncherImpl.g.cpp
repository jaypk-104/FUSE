// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Android.Bindings.AndroidDeviceInterop.h>
#include <Fuse.LauncherImpl.InterAppLauncher.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Exception.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Permissions.Permissions.Android.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.PlatformPermission.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno/JNIHelper.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace LauncherImpl{

// /usr/local/share/uno/Packages/Fuse.Launcher.InterApp/1.12.0/InterApp/InterAppLauncher.uno
// -----------------------------------------------------------------------------------------

// public static class InterAppLauncher
// {
static void InterAppLauncher_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Exception_typeof();
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

// private static extern string get__actionView()
void InterAppLauncher__get__actionView_fn(uString** __retval)
{
    *__retval = InterAppLauncher::_actionView();
}

// public static void LaunchUri(Uno.Net.Http.Uri uri)
void InterAppLauncher__LaunchUri_fn(::g::Uno::Net::Http::Uri* uri)
{
    InterAppLauncher::LaunchUri(uri);
}

// public static void LaunchUri(Uno.Net.Http.Uri uri) [static]
void InterAppLauncher::LaunchUri(::g::Uno::Net::Http::Uri* uri)
{
    ::g::Uno::Permissions::Permissions::Request(::g::Uno::Permissions::Permissions__Android::INTERNET());

    try
    {
        {
            ::g::Fuse::Android::Bindings::AndroidDeviceInterop::LaunchIntent(InterAppLauncher::_actionView(), uPtr(uri)->AbsoluteUri(), NULL, NULL);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }
}

// private static extern string get__actionView() [static]
uString* InterAppLauncher::_actionView()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "get__actionView406", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

}}} // ::g::Fuse::LauncherImpl
