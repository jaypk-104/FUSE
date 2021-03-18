// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotElement.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Charting.IPlotDataItemListener-1.h>
#include <Fuse.Charting.PlotDataPoint.h>
#include <Fuse.Controls.Panel.h>
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
namespace g{namespace Fuse{namespace Charting{struct PlotDataItemWatcher;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotElement;}}}

namespace g{
namespace Fuse{
namespace Charting{

// public abstract class PlotElement
// {
struct PlotElement_type : ::g::Fuse::Controls::Panel_type
{
    ::g::Fuse::Charting::IPlotDataItemListener interface19;
    void(*fp_OnDataPointChanged)(::g::Fuse::Charting::PlotElement*, ::g::Fuse::Charting::PlotDataPoint*);
};

PlotElement_type* PlotElement_typeof();
void PlotElement__ctor_7_fn(PlotElement* __this);
void PlotElement__FuseChartingIPlotDataItemListenerFuseChartingPlotDataPointOnNewData_fn(PlotElement* __this, ::g::Fuse::Charting::PlotDataPoint* entry);
void PlotElement__OnRooted_fn(PlotElement* __this);
void PlotElement__OnUnrooted_fn(PlotElement* __this);

struct PlotElement : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Charting::PlotDataItemWatcher*> _watcher;

    void ctor_7();
    void OnDataPointChanged(::g::Fuse::Charting::PlotDataPoint* entry) { (((PlotElement_type*)__type)->fp_OnDataPointChanged)(this, entry); }
};
// }

}}} // ::g::Fuse::Charting
