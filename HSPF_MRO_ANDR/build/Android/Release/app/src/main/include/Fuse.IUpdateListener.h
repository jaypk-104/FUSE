// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.12.0/UpdateManager.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface IUpdateListener
// {
uInterfaceType* IUpdateListener_typeof();

struct IUpdateListener
{
    void(*fp_Update)(uObject*);
    static void Update(const uInterface& __this) { __this.VTable<IUpdateListener>()->fp_Update(__this); }
};
// }

}} // ::g::Fuse
