// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.12.0/Resources/DisposalPolicy.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.DisposalPolicy.h>
namespace g{namespace Fuse{namespace Resources{struct RetainDisposalPolicy;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class RetainDisposalPolicy
// {
::g::Fuse::Resources::DisposalPolicy_type* RetainDisposalPolicy_typeof();
void RetainDisposalPolicy__ctor_1_fn(RetainDisposalPolicy* __this);
void RetainDisposalPolicy__CanDispose_fn(RetainDisposalPolicy* __this, int32_t* dr, bool* pinned, bool* __retval);
void RetainDisposalPolicy__Clone_fn(RetainDisposalPolicy* __this, ::g::Fuse::Resources::DisposalPolicy** __retval);
void RetainDisposalPolicy__MarkUsed_fn(RetainDisposalPolicy* __this);
void RetainDisposalPolicy__New1_fn(RetainDisposalPolicy** __retval);

struct RetainDisposalPolicy : ::g::Fuse::Resources::DisposalPolicy
{
    void ctor_1();
    static RetainDisposalPolicy* New1();
};
// }

}}} // ::g::Fuse::Resources
