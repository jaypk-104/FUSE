// This file was generated based on /usr/local/share/uno/Packages/Android.ActivityUtils/1.12.0/ActivityUtils.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Android{struct ActivityUtils;}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Android{

// public static extern class ActivityUtils
// {
uClassType* ActivityUtils_typeof();
void ActivityUtils__Init_fn(::g::Java::Object** __retval);
void ActivityUtils__OnReceived_fn(int32_t* requestCode, int32_t* resultCode, ::g::Java::Object* data, bool* __retval);
void ActivityUtils__add_Results_fn(uDelegate* value);
void ActivityUtils__remove_Results_fn(uDelegate* value);
void ActivityUtils__StartActivity1_fn(::g::Java::Object* intent, uDelegate* callback);
void ActivityUtils__StartActivity2_fn(::g::Java::Object* intent, uDelegate* callback, uObject* info);
void ActivityUtils__StartForResultJava_fn(int32_t* id, ::g::Java::Object* _intent);

struct ActivityUtils : uObject
{
    static int32_t _requestID_;
    static int32_t& _requestID() { return ActivityUtils_typeof()->Init(), _requestID_; }
    static uSStrong< ::g::Java::Object*> _intentListener_;
    static uSStrong< ::g::Java::Object*>& _intentListener() { return ActivityUtils_typeof()->Init(), _intentListener_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _pendingResults_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _pendingResults() { return ActivityUtils_typeof()->Init(), _pendingResults_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _pendingInfos_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _pendingInfos() { return ActivityUtils_typeof()->Init(), _pendingInfos_; }
    static uSStrong<uDelegate*> Results1_;
    static uSStrong<uDelegate*>& Results1() { return ActivityUtils_typeof()->Init(), Results1_; }

    static ::g::Java::Object* Init();
    static bool OnReceived(int32_t requestCode, int32_t resultCode, ::g::Java::Object* data);
    static void StartActivity1(::g::Java::Object* intent, uDelegate* callback);
    static void StartActivity2(::g::Java::Object* intent, uDelegate* callback, uObject* info);
    static void StartForResultJava(int32_t id, ::g::Java::Object* _intent);
    static void add_Results(uDelegate* value);
    static void remove_Results(uDelegate* value);
};
// }

}} // ::g::Android
