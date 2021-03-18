// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotTicks.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Shape.h>
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
namespace g{namespace Fuse{namespace Charting{struct AxisFilter;}}}
namespace g{namespace Fuse{namespace Charting{struct DataChangedArgs;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotBehavior;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotTicks;}}}
namespace g{namespace Fuse{namespace Drawing{struct LineSegments;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Charting{

// public sealed class PlotTicks
// {
::g::Fuse::Controls::Shape_type* PlotTicks_typeof();
void PlotTicks__get_Axis_fn(PlotTicks* __this, int32_t* __retval);
void PlotTicks__set_Axis_fn(PlotTicks* __this, int32_t* value);
void PlotTicks__get_BaseOffset_fn(PlotTicks* __this, float* __retval);
void PlotTicks__set_BaseOffset_fn(PlotTicks* __this, float* value);
void PlotTicks__CreateSurfacePath_fn(PlotTicks* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Fuse::Drawing::SurfacePath** __retval);
void PlotTicks__DrawLine_fn(PlotTicks* __this, ::g::Fuse::Drawing::LineSegments* list, int32_t* axis);
void PlotTicks__GetOrientation_fn(PlotTicks* __this, int32_t* axis, ::g::Uno::Float2* xVector, ::g::Uno::Float2* yVector);
void PlotTicks__get_NeedSurface_fn(PlotTicks* __this, bool* __retval);
void PlotTicks__OnDataChanged1_fn(PlotTicks* __this, uObject* s, ::g::Fuse::Charting::DataChangedArgs* args);
void PlotTicks__OnRooted_fn(PlotTicks* __this);
void PlotTicks__OnUnrooted_fn(PlotTicks* __this);
void PlotTicks__get_Style_fn(PlotTicks* __this, int32_t* __retval);
void PlotTicks__set_Style_fn(PlotTicks* __this, int32_t* value);

struct PlotTicks : ::g::Fuse::Controls::Shape
{
    int32_t _axes;
    int32_t _style;
    bool _hasAxisLine;
    float _axisLine;
    float _offset;
    uStrong< ::g::Fuse::Charting::AxisFilter*> _filter;
    uStrong< ::g::Fuse::Charting::PlotBehavior*> _plot;

    int32_t Axis();
    void Axis(int32_t value);
    float BaseOffset();
    void BaseOffset(float value);
    void DrawLine(::g::Fuse::Drawing::LineSegments* list, int32_t axis);
    void GetOrientation(int32_t axis, ::g::Uno::Float2* xVector, ::g::Uno::Float2* yVector);
    void OnDataChanged1(uObject* s, ::g::Fuse::Charting::DataChangedArgs* args);
    int32_t Style();
    void Style(int32_t value);
};
// }

}}} // ::g::Fuse::Charting
