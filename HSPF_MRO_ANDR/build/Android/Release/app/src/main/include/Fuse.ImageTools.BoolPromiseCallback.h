// This file was generated based on /usr/local/share/uno/Packages/Fuse.ImageTools/1.12.0/PromiseCallbacks.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace ImageTools{struct BoolPromiseCallback;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace ImageTools{

// internal sealed class BoolPromiseCallback
// {
uType* BoolPromiseCallback_typeof();
void BoolPromiseCallback__ctor__fn(BoolPromiseCallback* __this, ::g::Uno::Threading::Promise* p);
void BoolPromiseCallback__New1_fn(::g::Uno::Threading::Promise* p, BoolPromiseCallback** __retval);
void BoolPromiseCallback__Reject_fn(BoolPromiseCallback* __this, uString* reason);
void BoolPromiseCallback__Resolve_fn(BoolPromiseCallback* __this);

struct BoolPromiseCallback : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> _p;

    void ctor_(::g::Uno::Threading::Promise* p);
    void Reject(uString* reason);
    void Resolve();
    static BoolPromiseCallback* New1(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::ImageTools
