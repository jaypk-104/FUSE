// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotBar.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Charting.IPlotDataItemListener-1.h>
#include <Fuse.Charting.PlotDataPoint.h>
#include <Fuse.Charting.PlotElement.h>
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Animations{struct AttractorConfig;}}}
namespace g{namespace Fuse{namespace Animations{struct DestinationBehavior;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotBar;}}}

namespace g{
namespace Fuse{
namespace Charting{

// public sealed class PlotBar
// {
::g::Fuse::Charting::PlotElement_type* PlotBar_typeof();
void PlotBar__ctor_8_fn(PlotBar* __this);
void PlotBar__AnimPosition_fn(PlotBar* __this, ::g::Uno::Float4* value);
void PlotBar__AnimSize_fn(PlotBar* __this, ::g::Uno::Float2* value);
void PlotBar__get_Attractor_fn(PlotBar* __this, ::g::Fuse::Animations::AttractorConfig** __retval);
void PlotBar__set_Attractor_fn(PlotBar* __this, ::g::Fuse::Animations::AttractorConfig* value);
void PlotBar__New4_fn(PlotBar** __retval);
void PlotBar__OnDataPointChanged_fn(PlotBar* __this, ::g::Fuse::Charting::PlotDataPoint* entry);
void PlotBar__get_Style_fn(PlotBar* __this, int32_t* __retval);
void PlotBar__set_Style_fn(PlotBar* __this, int32_t* value);

struct PlotBar : ::g::Fuse::Charting::PlotElement
{
    int32_t _style;
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _animPosition;
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _animSize;

    void ctor_8();
    void AnimPosition(::g::Uno::Float4 value);
    void AnimSize(::g::Uno::Float2 value);
    ::g::Fuse::Animations::AttractorConfig* Attractor();
    void Attractor(::g::Fuse::Animations::AttractorConfig* value);
    int32_t Style();
    void Style(int32_t value);
    static PlotBar* New4();
};
// }

}}} // ::g::Fuse::Charting
