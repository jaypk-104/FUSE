// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Targets/Android/Uno/Base/Versions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Android{namespace Base{struct Versions;}}}

namespace g{
namespace Android{
namespace Base{

// public static extern class Versions
// {
uClassType* Versions_typeof();
void Versions__get_ApiLevel_fn(int32_t* __retval);
void Versions__Initialize_fn();

struct Versions : uObject
{
    static int32_t _api_;
    static int32_t& _api() { return Versions_typeof()->Init(), _api_; }
    static uSStrong<uString*> _release_;
    static uSStrong<uString*>& _release() { return Versions_typeof()->Init(), _release_; }

    static void Initialize();
    static int32_t ApiLevel();
};
// }

}}} // ::g::Android::Base
