// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.12.0/Visual.BeginRemove.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct PendingRemoveVisual;}}

namespace g{
namespace Fuse{

// public abstract interface IBeginRemoveVisualListener
// {
uInterfaceType* IBeginRemoveVisualListener_typeof();

struct IBeginRemoveVisualListener
{
    void(*fp_OnBeginRemoveVisual)(uObject*, ::g::Fuse::PendingRemoveVisual*);
    static void OnBeginRemoveVisual(const uInterface& __this, ::g::Fuse::PendingRemoveVisual* pr) { __this.VTable<IBeginRemoveVisualListener>()->fp_OnBeginRemoveVisual(__this, pr); }
};
// }

}} // ::g::Fuse
