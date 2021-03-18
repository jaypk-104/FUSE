// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotArea.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Charting{struct PlotArea;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotBehavior;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Charting{

// public sealed class PlotArea
// {
::g::Fuse::Node_type* PlotArea_typeof();
void PlotArea__ctor_3_fn(PlotArea* __this);
void PlotArea__ListenPlaced_fn(PlotArea* __this, bool* rooted);
void PlotArea__New2_fn(PlotArea** __retval);
void PlotArea__OnPlaced_fn(PlotArea* __this, uObject* sender, ::g::Fuse::PlacedArgs* args);
void PlotArea__OnRooted_fn(PlotArea* __this);
void PlotArea__OnUnrooted_fn(PlotArea* __this);
void PlotArea__Placed_fn(PlotArea* __this, ::g::Uno::Float2* size);
void PlotArea__SetStepSize_fn(PlotArea* __this, int32_t* axis, float* value);
void PlotArea__Update_fn(PlotArea* __this);
void PlotArea__get_XStepSize_fn(PlotArea* __this, float* __retval);
void PlotArea__set_XStepSize_fn(PlotArea* __this, float* value);
void PlotArea__get_YStepSize_fn(PlotArea* __this, float* __retval);
void PlotArea__set_YStepSize_fn(PlotArea* __this, float* value);

struct PlotArea : ::g::Fuse::Behavior
{
    ::g::Uno::Float2 _stepSize;
    uStrong<uArray*> _hasStepSize;
    uStrong< ::g::Fuse::Elements::Element*> _parentElement;
    uStrong< ::g::Fuse::Charting::PlotBehavior*> _plot;
    bool _listenPlaced;

    void ctor_3();
    void ListenPlaced(bool rooted);
    void OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args);
    void Placed(::g::Uno::Float2 size);
    void SetStepSize(int32_t axis, float value);
    void Update();
    float XStepSize();
    void XStepSize(float value);
    float YStepSize();
    void YStepSize(float value);
    static PlotArea* New2();
};
// }

}}} // ::g::Fuse::Charting
