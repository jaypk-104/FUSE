// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Permissions.Internal.Android.h>
#include <Uno.Permissions.PlatformPermission.h>
#include <Uno.String.h>
static uString* STRINGS[5];

namespace g{
namespace Uno{
namespace Permissions{
namespace Internal{

// /usr/local/share/uno/Packages/Uno.Permissions/1.12.0/AndroidPermissionsInternal.uno
// -----------------------------------------------------------------------------------

// internal sealed extern class Android
// {
static void Android_build(uType* type)
{
    ::STRINGS[0] = uString::Const("android.permission.CAMERA");
    ::STRINGS[1] = uString::Const("android.permission.INTERNET");
    ::STRINGS[2] = uString::Const("android.permission.READ_EXTERNAL_STORAGE");
    ::STRINGS[3] = uString::Const("android.permission.VIBRATE");
    ::STRINGS[4] = uString::Const("android.permission.WRITE_EXTERNAL_STORAGE");
}

uType* Android_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Android);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Permissions.Internal.Android", options);
    type->fp_build_ = Android_build;
    return type;
}

// internal static extern Uno.Permissions.PlatformPermission _camera()
void Android___camera_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_camera();
}

// internal static extern Uno.Permissions.PlatformPermission _internet()
void Android___internet_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_internet();
}

// internal static extern Uno.Permissions.PlatformPermission _read_external_storage()
void Android___read_external_storage_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_read_external_storage();
}

// internal static extern Uno.Permissions.PlatformPermission _vibrate()
void Android___vibrate_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_vibrate();
}

// internal static extern Uno.Permissions.PlatformPermission _write_external_storage()
void Android___write_external_storage_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_write_external_storage();
}

// internal static extern Uno.Permissions.PlatformPermission _camera() [static]
::g::Uno::Permissions::PlatformPermission Android::_camera()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[0/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _internet() [static]
::g::Uno::Permissions::PlatformPermission Android::_internet()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[1/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _read_external_storage() [static]
::g::Uno::Permissions::PlatformPermission Android::_read_external_storage()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[2/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _vibrate() [static]
::g::Uno::Permissions::PlatformPermission Android::_vibrate()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[3/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _write_external_storage() [static]
::g::Uno::Permissions::PlatformPermission Android::_write_external_storage()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[4/*"android.per...*/]);
}
// }

}}}} // ::g::Uno::Permissions::Internal
