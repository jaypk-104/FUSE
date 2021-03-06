// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IViewGroup
// {
uInterfaceType* IViewGroup_typeof();

struct IViewGroup
{
    void(*fp_Add)(uObject*, uObject*);
    void(*fp_Add1)(uObject*, uObject*, int32_t*);
    void(*fp_set_ClipToBounds)(uObject*, bool*);
    void(*fp_set_HitTestEnabled)(uObject*, bool*);
    void(*fp_Remove)(uObject*, uObject*);
    static void Add(const uInterface& __this, uObject* child) { __this.VTable<IViewGroup>()->fp_Add(__this, child); }
    static void Add1(const uInterface& __this, uObject* child, int32_t index) { __this.VTable<IViewGroup>()->fp_Add1(__this, child, &index); }
    static void ClipToBounds(const uInterface& __this, bool value) { __this.VTable<IViewGroup>()->fp_set_ClipToBounds(__this, &value); }
    static void HitTestEnabled(const uInterface& __this, bool value) { __this.VTable<IViewGroup>()->fp_set_HitTestEnabled(__this, &value); }
    static void Remove(const uInterface& __this, uObject* child) { __this.VTable<IViewGroup>()->fp_Remove(__this, child); }
};
// }

}}}} // ::g::Fuse::Controls::Native
