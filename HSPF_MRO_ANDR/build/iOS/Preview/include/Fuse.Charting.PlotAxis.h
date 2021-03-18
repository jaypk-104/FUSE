// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotAxis.uno.
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
namespace g{namespace Fuse{namespace Charting{struct DataChangedArgs;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotAxis;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotAxisData;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotAxisLayout;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Charting{

// public sealed class PlotAxis
// {
::g::Fuse::Controls::Panel_type* PlotAxis_typeof();
void PlotAxis__ctor_7_fn(PlotAxis* __this);
void PlotAxis__get_Axis_fn(PlotAxis* __this, int32_t* __retval);
void PlotAxis__set_Axis_fn(PlotAxis* __this, int32_t* value);
void PlotAxis__get_ContentPosition_fn(PlotAxis* __this, int32_t* __retval);
void PlotAxis__set_ContentPosition_fn(PlotAxis* __this, int32_t* value);
void PlotAxis__get_ExcludeExtend_fn(PlotAxis* __this, bool* __retval);
void PlotAxis__set_ExcludeExtend_fn(PlotAxis* __this, bool* value);
void PlotAxis__get_Group_fn(PlotAxis* __this, int32_t* __retval);
void PlotAxis__set_Group_fn(PlotAxis* __this, int32_t* value);
void PlotAxis__New4_fn(PlotAxis** __retval);
void PlotAxis__OnDataChanged1_fn(PlotAxis* __this, uObject* s, ::g::Fuse::Charting::DataChangedArgs* args);
void PlotAxis__OnRooted_fn(PlotAxis* __this);
void PlotAxis__OnUnrooted_fn(PlotAxis* __this);
void PlotAxis__get_SkipEnds_fn(PlotAxis* __this, ::g::Uno::Int2* __retval);
void PlotAxis__set_SkipEnds_fn(PlotAxis* __this, ::g::Uno::Int2* value);

struct PlotAxis : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Charting::PlotAxisData*> _each;
    uStrong< ::g::Fuse::Charting::PlotAxisLayout*> _layout1;

    void ctor_7();
    int32_t Axis();
    void Axis(int32_t value);
    int32_t ContentPosition();
    void ContentPosition(int32_t value);
    bool ExcludeExtend();
    void ExcludeExtend(bool value);
    int32_t Group();
    void Group(int32_t value);
    void OnDataChanged1(uObject* s, ::g::Fuse::Charting::DataChangedArgs* args);
    ::g::Uno::Int2 SkipEnds();
    void SkipEnds(::g::Uno::Int2 value);
    static PlotAxis* New4();
};
// }

}}} // ::g::Fuse::Charting
