// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/BusyTask.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IBusyHandler
// {
uInterfaceType* IBusyHandler_typeof();

struct IBusyHandler
{
    void(*fp_get_BusyActivityHandled)(uObject*, int32_t*);
    static int32_t BusyActivityHandled(const uInterface& __this) { int32_t __retval; return __this.VTable<IBusyHandler>()->fp_get_BusyActivityHandled(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Triggers
