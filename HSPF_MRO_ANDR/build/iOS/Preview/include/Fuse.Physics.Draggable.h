// This file was generated based on /usr/local/share/uno/Packages/Fuse.Physics/1.12.0/Draggable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Physics.IRule.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float3.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct Draggable;}}}
namespace g{namespace Fuse{namespace Physics{struct World;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class Draggable
// {
struct Draggable_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Physics::IRule interface7;
};

Draggable_type* Draggable_typeof();
void Draggable__ctor_3_fn(Draggable* __this);
void Draggable__get_Axis_fn(Draggable* __this, int32_t* __retval);
void Draggable__set_Axis_fn(Draggable* __this, int32_t* value);
void Draggable__get_Bounds_fn(Draggable* __this, ::g::Fuse::Elements::Element** __retval);
void Draggable__set_Bounds_fn(Draggable* __this, ::g::Fuse::Elements::Element* value);
void Draggable__FusePhysicsIRuleUpdate_fn(Draggable* __this, double* deltaTime, ::g::Fuse::Physics::World* world);
void Draggable__GetPointerPosition_fn(Draggable* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Uno::Float3* __retval);
void Draggable__New2_fn(Draggable** __retval);
void Draggable__OnMoved_fn(Draggable* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void Draggable__OnPointerLost_fn(Draggable* __this);
void Draggable__OnPressed_fn(Draggable* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void Draggable__OnReleased_fn(Draggable* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void Draggable__OnRooted_fn(Draggable* __this);
void Draggable__OnUnrooted_fn(Draggable* __this);

struct Draggable : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Physics::Body*> _body;
    bool _hasLock;
    ::g::Uno::Float3 _pos;
    ::g::Uno::Float3 _forceMotion;
    int32_t _Axis;
    uStrong< ::g::Fuse::Elements::Element*> _Bounds;

    void ctor_3();
    int32_t Axis();
    void Axis(int32_t value);
    ::g::Fuse::Elements::Element* Bounds();
    void Bounds(::g::Fuse::Elements::Element* value);
    ::g::Uno::Float3 GetPointerPosition(::g::Fuse::Input::PointerEventArgs* args);
    void OnMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerLost();
    void OnPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
    static Draggable* New2();
};
// }

}}} // ::g::Fuse::Physics
