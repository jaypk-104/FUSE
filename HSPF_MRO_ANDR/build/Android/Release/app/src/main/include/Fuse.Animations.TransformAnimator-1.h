// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.12.0/TransformAnimator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TrackAnimator.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator;}}}
namespace g{namespace Fuse{struct Transform;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// public abstract class TransformAnimator<TransformType>
// {
struct TransformAnimator_type : ::g::Fuse::Animations::Animator_type
{
    void(*fp_Update)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*);
};

TransformAnimator_type* TransformAnimator_typeof();
void TransformAnimator__ctor_3_fn(TransformAnimator* __this);
void TransformAnimator__CreateState_fn(TransformAnimator* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval);
void TransformAnimator__get_Priority_fn(TransformAnimator* __this, int32_t* __retval);
void TransformAnimator__set_Priority_fn(TransformAnimator* __this, int32_t* value);
void TransformAnimator__get_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Visual** __retval);
void TransformAnimator__set_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Visual* value);
void TransformAnimator__get_Target_fn(TransformAnimator* __this, ::g::Fuse::Visual** __retval);
void TransformAnimator__set_Target_fn(TransformAnimator* __this, ::g::Fuse::Visual* value);
void TransformAnimator__get_X_fn(TransformAnimator* __this, float* __retval);
void TransformAnimator__set_X_fn(TransformAnimator* __this, float* value);
void TransformAnimator__get_Y_fn(TransformAnimator* __this, float* __retval);
void TransformAnimator__set_Y_fn(TransformAnimator* __this, float* value);

struct TransformAnimator : ::g::Fuse::Animations::TrackAnimator
{
    int32_t _Priority;
    uStrong< ::g::Fuse::Visual*> _RelativeNode;
    uStrong< ::g::Fuse::Visual*> _Target;

    void ctor_3();
    int32_t Priority();
    void Priority(int32_t value);
    ::g::Fuse::Visual* RelativeNode();
    void RelativeNode(::g::Fuse::Visual* value);
    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
    void Update(::g::Fuse::Visual* elm, ::g::Fuse::Transform* transform, ::g::Uno::Float4 value);
    float X();
    void X(float value);
    float Y();
    void Y(float value);
};

}}} // ::g::Fuse::Animations

#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Animations{

inline void TransformAnimator::Update(::g::Fuse::Visual* elm, ::g::Fuse::Transform* transform, ::g::Uno::Float4 value) { (((TransformAnimator_type*)__type)->fp_Update)(this, elm, transform, &value); }
// }

}}} // ::g::Fuse::Animations
