// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.12.0/RotateGesture.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Gestures.TransformGesture.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct RotateGesture;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class RotateGesture
// {
::g::Fuse::Gestures::TransformGesture_type* RotateGesture_typeof();
void RotateGesture__OnEnded_fn(RotateGesture* __this);
void RotateGesture__OnRooted_fn(RotateGesture* __this);
void RotateGesture__OnRotated_fn(RotateGesture* __this, float* angle);
void RotateGesture__OnStarted_fn(RotateGesture* __this);
void RotateGesture__OnUnrooted_fn(RotateGesture* __this);
void RotateGesture__OnUpdate_fn(RotateGesture* __this);
void RotateGesture__get_Step_fn(RotateGesture* __this, float* __retval);
void RotateGesture__set_Step_fn(RotateGesture* __this, float* value);

struct RotateGesture : ::g::Fuse::Gestures::TransformGesture
{
    float _startRotation;
    float _Step;

    void OnRotated(float angle);
    float Step();
    void Step(float value);
};
// }

}}} // ::g::Fuse::Gestures
