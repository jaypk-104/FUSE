// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotPoint.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Charting.IPlotDataItemListener-1.h>
#include <Fuse.Charting.PlotDataPoint.h>
#include <Fuse.Charting.PlotElement.h>
#include <Fuse.Charting.PointCalculator.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Animations{struct AttractorConfig;}}}
namespace g{namespace Fuse{namespace Animations{struct DestinationBehavior;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotPoint;}}}

namespace g{
namespace Fuse{
namespace Charting{

// public sealed class PlotPoint
// {
::g::Fuse::Charting::PlotElement_type* PlotPoint_typeof();
void PlotPoint__ctor_8_fn(PlotPoint* __this);
void PlotPoint__AnimUpdate_fn(PlotPoint* __this, ::g::Uno::Float2* value);
void PlotPoint__get_Attractor_fn(PlotPoint* __this, ::g::Fuse::Animations::AttractorConfig** __retval);
void PlotPoint__set_Attractor_fn(PlotPoint* __this, ::g::Fuse::Animations::AttractorConfig* value);
void PlotPoint__get_EffectivePointAnchor_fn(PlotPoint* __this, int32_t* __retval);
void PlotPoint__New4_fn(PlotPoint** __retval);
void PlotPoint__OnDataPointChanged_fn(PlotPoint* __this, ::g::Fuse::Charting::PlotDataPoint* entry);
void PlotPoint__OnRooted_fn(PlotPoint* __this);
void PlotPoint__OnUnrooted_fn(PlotPoint* __this);
void PlotPoint__get_PointAnchor_fn(PlotPoint* __this, int32_t* __retval);
void PlotPoint__set_PointAnchor_fn(PlotPoint* __this, int32_t* value);
void PlotPoint__get_PointOffset_fn(PlotPoint* __this, float* __retval);
void PlotPoint__set_PointOffset_fn(PlotPoint* __this, float* value);
void PlotPoint__get_Style_fn(PlotPoint* __this, int32_t* __retval);
void PlotPoint__set_Style_fn(PlotPoint* __this, int32_t* value);

struct PlotPoint : ::g::Fuse::Charting::PlotElement
{
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _animator;
    ::g::Fuse::Charting::PointCalculator _calc;
    int32_t _anchor;

    void ctor_8();
    void AnimUpdate(::g::Uno::Float2 value);
    ::g::Fuse::Animations::AttractorConfig* Attractor();
    void Attractor(::g::Fuse::Animations::AttractorConfig* value);
    int32_t EffectivePointAnchor();
    int32_t PointAnchor();
    void PointAnchor(int32_t value);
    float PointOffset();
    void PointOffset(float value);
    int32_t Style();
    void Style(int32_t value);
    static PlotPoint* New4();
};
// }

}}} // ::g::Fuse::Charting
