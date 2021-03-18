// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotWedge.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Charting.IPlotDataItemListener-1.h>
#include <Fuse.Charting.PlotDataPoint.h>
#include <Fuse.Controls.Ellipse.h>
#include <Fuse.Drawing.IDrawObjectWatcherFeedback.h>
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Animations{struct AttractorConfig;}}}
namespace g{namespace Fuse{namespace Animations{struct DestinationBehavior;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotDataItemWatcher;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotWedge;}}}

namespace g{
namespace Fuse{
namespace Charting{

// public sealed class PlotWedge
// {
struct PlotWedge_type : ::g::Fuse::Controls::Shape_type
{
    ::g::Fuse::Charting::IPlotDataItemListener interface20;
};

PlotWedge_type* PlotWedge_typeof();
void PlotWedge__ctor_9_fn(PlotWedge* __this);
void PlotWedge__AnimEnd_fn(PlotWedge* __this, float* value);
void PlotWedge__AnimStart_fn(PlotWedge* __this, float* value);
void PlotWedge__get_Attractor_fn(PlotWedge* __this, ::g::Fuse::Animations::AttractorConfig** __retval);
void PlotWedge__set_Attractor_fn(PlotWedge* __this, ::g::Fuse::Animations::AttractorConfig* value);
void PlotWedge__FuseChartingIPlotDataItemListenerFuseChartingPlotDataPointOnNewData_fn(PlotWedge* __this, ::g::Fuse::Charting::PlotDataPoint* entry);
void PlotWedge__New4_fn(PlotWedge** __retval);
void PlotWedge__OnRooted_fn(PlotWedge* __this);
void PlotWedge__OnUnrooted_fn(PlotWedge* __this);

struct PlotWedge : ::g::Fuse::Controls::Ellipse
{
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _animStart;
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _animEnd;
    uStrong< ::g::Fuse::Charting::PlotDataItemWatcher*> _watcher1;

    void ctor_9();
    void AnimEnd(float value);
    void AnimStart(float value);
    ::g::Fuse::Animations::AttractorConfig* Attractor();
    void Attractor(::g::Fuse::Animations::AttractorConfig* value);
    static PlotWedge* New4();
};
// }

}}} // ::g::Fuse::Charting
