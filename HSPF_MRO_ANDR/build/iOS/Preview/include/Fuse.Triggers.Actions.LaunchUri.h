// This file was generated based on /usr/local/share/uno/Packages/Fuse.Launcher.InterApp/1.12.0/InterApp/InterAppTrigger.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LaunchUri;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LaunchUri
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchUri_typeof();
void LaunchUri__ctor_2_fn(LaunchUri* __this);
void LaunchUri__New2_fn(LaunchUri** __retval);
void LaunchUri__Perform_fn(LaunchUri* __this, ::g::Fuse::Node* target);
void LaunchUri__get_Uri_fn(LaunchUri* __this, uString** __retval);
void LaunchUri__set_Uri_fn(LaunchUri* __this, uString* value);

struct LaunchUri : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uString*> _Uri;

    void ctor_2();
    uString* Uri();
    void Uri(uString* value);
    static LaunchUri* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
