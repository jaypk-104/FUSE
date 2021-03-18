// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/Plot.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
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
namespace g{namespace Fuse{namespace Charting{struct DataSeries;}}}
namespace g{namespace Fuse{namespace Charting{struct Plot;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotBehavior;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Charting{

// public partial class Plot
// {
::g::Fuse::Controls::Panel_type* Plot_typeof();
void Plot__ctor_7_fn(Plot* __this);
void Plot__get_DataExtend_fn(Plot* __this, ::g::Uno::Int2* __retval);
void Plot__set_DataExtend_fn(Plot* __this, ::g::Uno::Int2* value);
void Plot__get_DataLimit_fn(Plot* __this, int32_t* __retval);
void Plot__set_DataLimit_fn(Plot* __this, int32_t* value);
void Plot__get_DataOffset_fn(Plot* __this, int32_t* __retval);
void Plot__set_DataOffset_fn(Plot* __this, int32_t* value);
void Plot__New4_fn(Plot** __retval);
void Plot__get_Orientation_fn(Plot* __this, int32_t* __retval);
void Plot__set_Orientation_fn(Plot* __this, int32_t* value);
void Plot__get_RangePadding_fn(Plot* __this, float* __retval);
void Plot__set_RangePadding_fn(Plot* __this, float* value);
void Plot__get_Series_fn(Plot* __this, uObject** __retval);
void Plot__stepOffset_fn(Plot* p, uArray* args);
void Plot__get_WAxisMetric_fn(Plot* __this, int32_t* __retval);
void Plot__set_WAxisMetric_fn(Plot* __this, int32_t* value);
void Plot__get_WRange_fn(Plot* __this, ::g::Uno::Float2* __retval);
void Plot__set_WRange_fn(Plot* __this, ::g::Uno::Float2* value);
void Plot__get_XAxisMetric_fn(Plot* __this, int32_t* __retval);
void Plot__set_XAxisMetric_fn(Plot* __this, int32_t* value);
void Plot__get_XAxisSteps_fn(Plot* __this, int32_t* __retval);
void Plot__set_XAxisSteps_fn(Plot* __this, int32_t* value);
void Plot__get_XRange_fn(Plot* __this, ::g::Uno::Float2* __retval);
void Plot__set_XRange_fn(Plot* __this, ::g::Uno::Float2* value);
void Plot__get_YAxisMetric_fn(Plot* __this, int32_t* __retval);
void Plot__set_YAxisMetric_fn(Plot* __this, int32_t* value);
void Plot__get_YAxisSteps_fn(Plot* __this, int32_t* __retval);
void Plot__set_YAxisSteps_fn(Plot* __this, int32_t* value);
void Plot__get_YRange_fn(Plot* __this, ::g::Uno::Float2* __retval);
void Plot__set_YRange_fn(Plot* __this, ::g::Uno::Float2* value);
void Plot__get_ZAxisMetric_fn(Plot* __this, int32_t* __retval);
void Plot__set_ZAxisMetric_fn(Plot* __this, int32_t* value);
void Plot__get_ZRange_fn(Plot* __this, ::g::Uno::Float2* __retval);
void Plot__set_ZRange_fn(Plot* __this, ::g::Uno::Float2* value);

struct Plot : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Charting::PlotBehavior*> _plot;

    void ctor_7();
    ::g::Uno::Int2 DataExtend();
    void DataExtend(::g::Uno::Int2 value);
    int32_t DataLimit();
    void DataLimit(int32_t value);
    int32_t DataOffset();
    void DataOffset(int32_t value);
    int32_t Orientation();
    void Orientation(int32_t value);
    float RangePadding();
    void RangePadding(float value);
    uObject* Series();
    int32_t WAxisMetric();
    void WAxisMetric(int32_t value);
    ::g::Uno::Float2 WRange();
    void WRange(::g::Uno::Float2 value);
    int32_t XAxisMetric();
    void XAxisMetric(int32_t value);
    int32_t XAxisSteps();
    void XAxisSteps(int32_t value);
    ::g::Uno::Float2 XRange();
    void XRange(::g::Uno::Float2 value);
    int32_t YAxisMetric();
    void YAxisMetric(int32_t value);
    int32_t YAxisSteps();
    void YAxisSteps(int32_t value);
    ::g::Uno::Float2 YRange();
    void YRange(::g::Uno::Float2 value);
    int32_t ZAxisMetric();
    void ZAxisMetric(int32_t value);
    ::g::Uno::Float2 ZRange();
    void ZRange(::g::Uno::Float2 value);
    static Plot* New4();
    static void stepOffset(Plot* p, uArray* args);
};
// }

}}} // ::g::Fuse::Charting
