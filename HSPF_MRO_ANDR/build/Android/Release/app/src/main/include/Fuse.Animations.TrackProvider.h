// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.12.0/TrackAnimator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct TrackAnimator;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface TrackProvider
// {
uInterfaceType* TrackProvider_typeof();

struct TrackProvider
{
    void(*fp_GetAnimatorVariant)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int32_t*);
    void(*fp_GetDuration)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int32_t*, double*);
    static int32_t GetAnimatorVariant(const uInterface& __this, ::g::Fuse::Animations::TrackAnimator* tas) { int32_t __retval; return __this.VTable<TrackProvider>()->fp_GetAnimatorVariant(__this, tas, &__retval), __retval; }
    static double GetDuration(const uInterface& __this, ::g::Fuse::Animations::TrackAnimator* tas, int32_t variant) { double __retval; return __this.VTable<TrackProvider>()->fp_GetDuration(__this, tas, &variant, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
