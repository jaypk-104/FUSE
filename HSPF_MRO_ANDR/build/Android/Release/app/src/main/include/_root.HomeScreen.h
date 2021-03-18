// This file was generated based on Modules/HomeScreen.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{struct HomeScreen;}

namespace g{

// public sealed class HomeScreen
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* HomeScreen_typeof();
void HomeScreen__ctor_2_fn(HomeScreen* __this);
void HomeScreen__ExitAppFinish_fn();
void HomeScreen__ExitAppIntent_fn();
void HomeScreen__New2_fn(HomeScreen** __retval);
void HomeScreen__Perform_fn(HomeScreen* __this, ::g::Fuse::Node* target);
void HomeScreen__get_Type_fn(HomeScreen* __this, int32_t* __retval);
void HomeScreen__set_Type_fn(HomeScreen* __this, int32_t* value);

struct HomeScreen : ::g::Fuse::Triggers::Actions::TriggerAction
{
    int32_t _type;

    void ctor_2();
    int32_t Type();
    void Type(int32_t value);
    static void ExitAppFinish();
    static void ExitAppIntent();
    static HomeScreen* New2();
};
// }

} // ::g
