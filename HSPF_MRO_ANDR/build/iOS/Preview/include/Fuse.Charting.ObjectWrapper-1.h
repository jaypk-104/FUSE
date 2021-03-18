// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/ObjectWrapper.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Charting{struct ObjectWrapper;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal sealed class ObjectWrapper<T>
// {
struct ObjectWrapper_type : uType
{
    ::g::Fuse::IObject interface0;
};

ObjectWrapper_type* ObjectWrapper_typeof();
void ObjectWrapper__ctor__fn(ObjectWrapper* __this, uString* name, uObject* data);
void ObjectWrapper__ContainsKey_fn(ObjectWrapper* __this, uString* key, bool* __retval);
void ObjectWrapper__get_Data_fn(ObjectWrapper* __this, uObject** __retval);
void ObjectWrapper__get_Item_fn(ObjectWrapper* __this, uString* key, uObject** __retval);
void ObjectWrapper__get_Keys_fn(ObjectWrapper* __this, uArray** __retval);
void ObjectWrapper__New1_fn(uType* __type, uString* name, uObject* data, ObjectWrapper** __retval);

struct ObjectWrapper : uObject
{
    uStrong<uString*> _name;
    uStrong<uObject*> _data;

    void ctor_(uString* name, uObject* data);
    bool ContainsKey(uString* key);
    uObject* Data();
    uObject* Item(uString* key);
    uArray* Keys();
    static ObjectWrapper* New1(uType* __type, uString* name, uObject* data);
};
// }

}}} // ::g::Fuse::Charting
