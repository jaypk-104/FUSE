// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.12.0/Route.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct Route;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class Route
// {
uType* Route_typeof();
void Route__ctor__fn(Route* __this, uString* path, uString* parameter, Route* subRoute);
void Route__Append_fn(Route* __this, Route* subRoute, Route** __retval);
void Route__get_Length_fn(Route* __this, int32_t* __retval);
void Route__New1_fn(uString* path, uString* parameter, Route* subRoute, Route** __retval);

struct Route : uObject
{
    uStrong<uString*> Path;
    uStrong<uString*> Parameter;
    uStrong<Route*> SubRoute;
    uStrong< ::g::Fuse::Navigation::RouterPage*> RouterPage;

    void ctor_(uString* path, uString* parameter, Route* subRoute);
    Route* Append(Route* subRoute);
    int32_t Length();
    static Route* New1(uString* path, uString* parameter, Route* subRoute);
};
// }

}}} // ::g::Fuse::Navigation
