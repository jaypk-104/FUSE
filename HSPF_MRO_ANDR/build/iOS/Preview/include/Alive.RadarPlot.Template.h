// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Alive.RadarPlot.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Alive{struct RadarPlot;}}
namespace g{namespace Alive{struct RadarPlot__Template;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class RadarPlot.Template
// {
::g::Uno::UX::Template_type* RadarPlot__Template_typeof();
void RadarPlot__Template__ctor_1_fn(RadarPlot__Template* __this, ::g::Alive::RadarPlot* parent, ::g::Alive::RadarPlot* parentInstance);
void RadarPlot__Template__New1_fn(RadarPlot__Template* __this, uObject** __retval);
void RadarPlot__Template__New2_fn(::g::Alive::RadarPlot* parent, ::g::Alive::RadarPlot* parentInstance, RadarPlot__Template** __retval);

struct RadarPlot__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Alive::RadarPlot*> __parent1;
    uWeak< ::g::Alive::RadarPlot*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_StrokeColor_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return RadarPlot__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return RadarPlot__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return RadarPlot__Template_typeof()->Init(), __selector2_; }

    void ctor_1(::g::Alive::RadarPlot* parent, ::g::Alive::RadarPlot* parentInstance);
    static RadarPlot__Template* New2(::g::Alive::RadarPlot* parent, ::g::Alive::RadarPlot* parentInstance);
};
// }

}} // ::g::Alive
