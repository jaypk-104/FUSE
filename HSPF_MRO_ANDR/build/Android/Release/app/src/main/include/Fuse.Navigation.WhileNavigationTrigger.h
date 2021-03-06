// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.12.0/WhileNavigationTriggers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct RoutePageProxy;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class WhileNavigationTrigger
// {
struct WhileNavigationTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_MapProgress)(::g::Fuse::Navigation::WhileNavigationTrigger*, double*, double*);
};

WhileNavigationTrigger_type* WhileNavigationTrigger_typeof();
void WhileNavigationTrigger__ctor_6_fn(WhileNavigationTrigger* __this);
void WhileNavigationTrigger__get_Limit_fn(WhileNavigationTrigger* __this, float* __retval);
void WhileNavigationTrigger__set_Limit_fn(WhileNavigationTrigger* __this, float* value);
void WhileNavigationTrigger__OnRooted_fn(WhileNavigationTrigger* __this);
void WhileNavigationTrigger__OnUnrooted_fn(WhileNavigationTrigger* __this);
void WhileNavigationTrigger__get_Path_fn(WhileNavigationTrigger* __this, int32_t* __retval);
void WhileNavigationTrigger__set_Path_fn(WhileNavigationTrigger* __this, int32_t* value);
void WhileNavigationTrigger__ProgressUpdated_fn(WhileNavigationTrigger* __this, double* progress);
void WhileNavigationTrigger__get_Threshold_fn(WhileNavigationTrigger* __this, float* __retval);
void WhileNavigationTrigger__set_Threshold_fn(WhileNavigationTrigger* __this, float* value);

struct WhileNavigationTrigger : ::g::Fuse::Triggers::WhileTrigger
{
    float _threshold;
    float _limit;
    bool _hasLimit;
    int32_t _path;
    uStrong< ::g::Fuse::Navigation::RoutePageProxy*> _proxy;

    void ctor_6();
    float Limit();
    void Limit(float value);
    double MapProgress(double progress) { double __retval; return (((WhileNavigationTrigger_type*)__type)->fp_MapProgress)(this, &progress, &__retval), __retval; }
    int32_t Path();
    void Path(int32_t value);
    void ProgressUpdated(double progress);
    float Threshold();
    void Threshold(float value);
};
// }

}}} // ::g::Fuse::Navigation
