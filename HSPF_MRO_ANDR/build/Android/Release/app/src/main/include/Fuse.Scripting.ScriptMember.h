// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.12.0/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptMember;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class ScriptMember
// {
uType* ScriptMember_typeof();
void ScriptMember__ctor__fn(ScriptMember* __this, uString* name);

struct ScriptMember : uObject
{
    uStrong<uString*> Name;

    void ctor_(uString* name);
};
// }

}}} // ::g::Fuse::Scripting
