// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.12.0/NodeGroup.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{struct NodeGroup;}}

namespace g{
namespace Fuse{

// public class NodeGroup
// {
struct NodeGroup_type : ::g::Fuse::Node_type
{
    ::g::Fuse::ITemplateSource interface7;
};

NodeGroup_type* NodeGroup_typeof();
void NodeGroup__ctor_4_fn(NodeGroup* __this);
void NodeGroup__get_IsActive_fn(NodeGroup* __this, bool* __retval);
void NodeGroup__set_IsActive_fn(NodeGroup* __this, bool* value);
void NodeGroup__New2_fn(NodeGroup** __retval);

struct NodeGroup : ::g::Fuse::NodeGroupBase
{
    void ctor_4();
    bool IsActive();
    void IsActive(bool value);
    static NodeGroup* New2();
};
// }

}} // ::g::Fuse
