// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.12.0/ResourceSetter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Resources{struct ResourceSetter;}}}

namespace g{
namespace Fuse{
namespace Resources{

// public abstract class ResourceSetter<T>
// {
::g::Fuse::Node_type* ResourceSetter_typeof();
void ResourceSetter__OnChanged_fn(ResourceSetter* __this);
void ResourceSetter__OnRooted_fn(ResourceSetter* __this);
void ResourceSetter__get_Value_fn(ResourceSetter* __this, uTRef __retval);
void ResourceSetter__set_Value_fn(ResourceSetter* __this, void* value);

struct ResourceSetter : ::g::Fuse::Behavior
{
    uStrong<uString*> _key;
    uTField _value() { return __type->Field(this, 18); }

    void OnChanged();
    template<class T>
    T Value() { T __retval; return ResourceSetter__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { ResourceSetter__set_Value_fn(this, uConstrain(__type->GetBase(ResourceSetter_typeof())->T(0), value)); }
};
// }

}}} // ::g::Fuse::Resources
