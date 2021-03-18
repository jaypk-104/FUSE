// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotCurvePoint.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Charting.IPlotDataItemListener-1.h>
#include <Fuse.Charting.PlotDataPoint.h>
#include <Fuse.Charting.PointCalculator.h>
#include <Fuse.Controls.CurvePoint.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Animations{struct AttractorConfig;}}}
namespace g{namespace Fuse{namespace Animations{struct DestinationBehavior;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotCurvePoint;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotDataItemWatcher;}}}

namespace g{
namespace Fuse{
namespace Charting{

// public sealed class PlotCurvePoint
// {
struct PlotCurvePoint_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Charting::IPlotDataItemListener interface7;
};

PlotCurvePoint_type* PlotCurvePoint_typeof();
void PlotCurvePoint__ctor_3_fn(PlotCurvePoint* __this);
void PlotCurvePoint__AnimUpdate_fn(PlotCurvePoint* __this, ::g::Uno::Float2* value);
void PlotCurvePoint__get_Attractor_fn(PlotCurvePoint* __this, ::g::Fuse::Animations::AttractorConfig** __retval);
void PlotCurvePoint__set_Attractor_fn(PlotCurvePoint* __this, ::g::Fuse::Animations::AttractorConfig* value);
void PlotCurvePoint__FuseChartingIPlotDataItemListenerFuseChartingPlotDataPointOnNewData_fn(PlotCurvePoint* __this, ::g::Fuse::Charting::PlotDataPoint* entry);
void PlotCurvePoint__New3_fn(PlotCurvePoint** __retval);
void PlotCurvePoint__get_Offset_fn(PlotCurvePoint* __this, float* __retval);
void PlotCurvePoint__set_Offset_fn(PlotCurvePoint* __this, float* value);
void PlotCurvePoint__OnRooted_fn(PlotCurvePoint* __this);
void PlotCurvePoint__OnUnrooted_fn(PlotCurvePoint* __this);
void PlotCurvePoint__get_Style_fn(PlotCurvePoint* __this, int32_t* __retval);
void PlotCurvePoint__set_Style_fn(PlotCurvePoint* __this, int32_t* value);

struct PlotCurvePoint : ::g::Fuse::Controls::CurvePoint
{
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _animator;
    ::g::Fuse::Charting::PointCalculator _calc;
    uStrong< ::g::Fuse::Charting::PlotDataItemWatcher*> _watcher;

    void ctor_3();
    void AnimUpdate(::g::Uno::Float2 value);
    ::g::Fuse::Animations::AttractorConfig* Attractor();
    void Attractor(::g::Fuse::Animations::AttractorConfig* value);
    float Offset();
    void Offset(float value);
    int32_t Style();
    void Style(int32_t value);
    static PlotCurvePoint* New3();
};
// }

}}} // ::g::Fuse::Charting
