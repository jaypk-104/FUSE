// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.12.0/Actions/Visibility.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Show;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Show
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof();
void Show__Perform_fn(Show* __this, ::g::Fuse::Node* target);

struct Show : ::g::Fuse::Triggers::Actions::TriggerAction
{
};
// }

}}}} // ::g::Fuse::Triggers::Actions
