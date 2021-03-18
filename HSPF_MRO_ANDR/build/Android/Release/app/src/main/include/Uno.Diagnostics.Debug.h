// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Diagnostics/Debug.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Diagnostics{struct Debug;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public static class Debug
// {
uClassType* Debug_typeof();
void Debug__EmitLog_fn(uString* message, int32_t* type);
void Debug__Log2_fn(uString* message, int32_t* type);

struct Debug : uObject
{
    static uSStrong<uDelegate*> _logHandler_;
    static uSStrong<uDelegate*>& _logHandler() { return Debug_typeof()->Init(), _logHandler_; }
    static uSStrong<uString*> _indentStr_;
    static uSStrong<uString*>& _indentStr() { return Debug_typeof()->Init(), _indentStr_; }

    static void EmitLog(uString* message, int32_t type);
    static void Log2(uString* message, int32_t type);
};
// }

}}} // ::g::Uno::Diagnostics
