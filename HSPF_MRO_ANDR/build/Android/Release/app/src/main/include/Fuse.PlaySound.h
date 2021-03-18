// This file was generated based on /usr/local/share/uno/Packages/Fuse.Audio/1.12.0/PlaySound.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PlaySound;}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{

// public sealed class PlaySound
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PlaySound_typeof();
void PlaySound__get_File_fn(PlaySound* __this, ::g::Uno::UX::FileSource** __retval);
void PlaySound__set_File_fn(PlaySound* __this, ::g::Uno::UX::FileSource* value);
void PlaySound__Perform_fn(PlaySound* __this, ::g::Fuse::Node* n);

struct PlaySound : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Uno::UX::FileSource*> _File;

    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
};
// }

}} // ::g::Fuse
