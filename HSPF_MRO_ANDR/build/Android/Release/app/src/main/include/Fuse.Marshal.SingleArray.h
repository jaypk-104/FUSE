// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.12.0/Marshal.Convert.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Marshal__SingleArray;}}

namespace g{
namespace Fuse{

// private sealed class Marshal.SingleArray
// {
struct Marshal__SingleArray_type : uType
{
    ::g::Fuse::IArray interface0;
};

Marshal__SingleArray_type* Marshal__SingleArray_typeof();
void Marshal__SingleArray__ctor__fn(Marshal__SingleArray* __this, uObject* obj);
void Marshal__SingleArray__get_Item_fn(Marshal__SingleArray* __this, int32_t* index, uObject** __retval);
void Marshal__SingleArray__get_Length_fn(Marshal__SingleArray* __this, int32_t* __retval);
void Marshal__SingleArray__New1_fn(uObject* obj, Marshal__SingleArray** __retval);

struct Marshal__SingleArray : uObject
{
    uStrong<uObject*> _obj;

    void ctor_(uObject* obj);
    uObject* Item(int32_t index);
    int32_t Length();
    static Marshal__SingleArray* New1(uObject* obj);
};
// }

}} // ::g::Fuse
