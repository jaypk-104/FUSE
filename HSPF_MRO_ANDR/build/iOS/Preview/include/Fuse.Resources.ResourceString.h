// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.12.0/ResourceSetter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Resources.ResourceSetter-1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
namespace g{namespace Fuse{namespace Resources{struct ResourceString;}}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class ResourceString
// {
::g::Fuse::Node_type* ResourceString_typeof();
void ResourceString__ctor_4_fn(ResourceString* __this);
void ResourceString__New2_fn(ResourceString** __retval);

struct ResourceString : ::g::Fuse::Resources::ResourceSetter
{
    void ctor_4();
    static ResourceString* New2();
};
// }

}}} // ::g::Fuse::Resources
