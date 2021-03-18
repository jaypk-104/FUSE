// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/RadarPlot.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Charting.Plot.h>
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Alive{struct RadarPlot;}}
namespace g{namespace Fuse{namespace Animations{struct AttractorConfig;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class RadarPlot
// {
::g::Fuse::Controls::Panel_type* RadarPlot_typeof();
void RadarPlot__ctor_8_fn(RadarPlot* __this);
void RadarPlot__InitializeUX_fn(RadarPlot* __this);
void RadarPlot__New5_fn(RadarPlot** __retval);

struct RadarPlot : ::g::Fuse::Charting::Plot
{
    uStrong< ::g::Uno::UX::Property1*> temp_StrokeColor_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_StrokeColor_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_StrokeColor_inst;
    static uSStrong< ::g::Fuse::Animations::AttractorConfig*> AliveElasticAttractor_;
    static uSStrong< ::g::Fuse::Animations::AttractorConfig*>& AliveElasticAttractor() { return RadarPlot_typeof()->Init(), AliveElasticAttractor_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return RadarPlot_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return RadarPlot_typeof()->Init(), __selector1_; }

    void ctor_8();
    void InitializeUX();
    static RadarPlot* New5();
};
// }

}} // ::g::Alive
