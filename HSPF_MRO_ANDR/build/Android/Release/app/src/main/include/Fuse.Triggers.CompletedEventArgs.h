// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Completed.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Triggers{struct CompletedEventArgs;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class CompletedEventArgs
// {
uType* CompletedEventArgs_typeof();
void CompletedEventArgs__ctor_1_fn(CompletedEventArgs* __this);
void CompletedEventArgs__New2_fn(CompletedEventArgs** __retval);

struct CompletedEventArgs : ::g::Uno::EventArgs
{
    void ctor_1();
    static CompletedEventArgs* New2();
};
// }

}}} // ::g::Fuse::Triggers
