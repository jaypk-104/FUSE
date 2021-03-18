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
namespace g{namespace Fuse{namespace Charting{struct Plot;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotBehavior;}}}

namespace g{
namespace Fuse{
namespace Charting{

// public partial class Plot
// {
::g::Fuse::Controls::Panel_type* Plot_typeof();
void Plot__stepOffset_fn(Plot* p, uArray* args);

struct Plot : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Charting::PlotBehavior*> _plot;

    static void stepOffset(Plot* p, uArray* args);
};
// }

}}} // ::g::Fuse::Charting
