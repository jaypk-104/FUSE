// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Tasks.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct Task;}}}
namespace g{namespace Outracks{namespace Simulator{struct Tasks;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static class Tasks
// {
uClassType* Tasks_typeof();
void Tasks__Run_fn(uType* __type, uDelegate* method, ::g::Outracks::Simulator::Task** __retval);
void Tasks__WaitForFirstResult_fn(uType* __type, uObject* tasks, uDelegate* onNoResult, ::g::Outracks::Simulator::Task** __retval);

struct Tasks : uObject
{
    static ::g::Outracks::Simulator::Task* Run(uType* __type, uDelegate* method);
    static ::g::Outracks::Simulator::Task* WaitForFirstResult(uType* __type, uObject* tasks, uDelegate* onNoResult);
};
// }

}}} // ::g::Outracks::Simulator
