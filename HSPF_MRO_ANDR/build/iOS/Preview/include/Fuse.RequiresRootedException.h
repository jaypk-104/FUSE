// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.12.0/Visual.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Fuse{struct RequiresRootedException;}}

namespace g{
namespace Fuse{

// public sealed class RequiresRootedException
// {
::g::Uno::Exception_type* RequiresRootedException_typeof();
void RequiresRootedException__ctor_3_fn(RequiresRootedException* __this);
void RequiresRootedException__New4_fn(RequiresRootedException** __retval);

struct RequiresRootedException : ::g::Uno::Exception
{
    void ctor_3();
    static RequiresRootedException* New4();
};
// }

}} // ::g::Fuse
