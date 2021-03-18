// This file was generated based on /usr/local/share/uno/Packages/Fuse.Vibration/1.12.0/Vibrate.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Vibration{struct Vibrate;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Vibration{

// public sealed class Vibrate
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Vibrate_typeof();
void Vibrate__ctor_2_fn(Vibrate* __this);
void Vibrate__get_Duration_fn(Vibrate* __this, double* __retval);
void Vibrate__set_Duration_fn(Vibrate* __this, double* value);
void Vibrate__New2_fn(Vibrate** __retval);
void Vibrate__Perform_fn(Vibrate* __this, ::g::Fuse::Node* target);

struct Vibrate : ::g::Fuse::Triggers::Actions::TriggerAction
{
    double _Duration;

    void ctor_2();
    double Duration();
    void Duration(double value);
    static Vibrate* New2();
};
// }

}}} // ::g::Fuse::Vibration
