// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.12.0/Resources/IDeferredDisposable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Resources{

// internal abstract interface IDeferredDisposable
// {
uInterfaceType* IDeferredDisposable_typeof();

struct IDeferredDisposable
{
    void(*fp_CanDispose)(uObject*, int32_t*, bool*);
    void(*fp_MarkUsed)(uObject*);
    static bool CanDispose(const uInterface& __this, int32_t dr) { bool __retval; return __this.VTable<IDeferredDisposable>()->fp_CanDispose(__this, &dr, &__retval), __retval; }
    static void MarkUsed(const uInterface& __this) { __this.VTable<IDeferredDisposable>()->fp_MarkUsed(__this); }
};
// }

}}} // ::g::Fuse::Resources
