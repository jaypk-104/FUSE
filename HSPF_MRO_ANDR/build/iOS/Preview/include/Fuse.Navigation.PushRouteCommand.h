// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.12.0/ModifyRouteCommand.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Navigation.RouteModificationCommand.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Navigation{struct PushRouteCommand;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterRequest;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class PushRouteCommand
// {
::g::Fuse::Navigation::RouteModificationCommand_type* PushRouteCommand_typeof();
void PushRouteCommand__ctor_3_fn(PushRouteCommand* __this);
void PushRouteCommand__New1_fn(PushRouteCommand** __retval);
void PushRouteCommand__ProcessArguments_fn(PushRouteCommand* __this, ::g::Fuse::Navigation::RouterRequest* request, uArray* args, bool* __retval);

struct PushRouteCommand : ::g::Fuse::Navigation::RouteModificationCommand
{
    void ctor_3();
    static PushRouteCommand* New1();
};
// }

}}} // ::g::Fuse::Navigation
