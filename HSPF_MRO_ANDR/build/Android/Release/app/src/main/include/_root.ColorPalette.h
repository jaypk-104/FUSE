// This file was generated based on '.uno/ux15/ColorPalette.g.uno'.
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
namespace g{namespace Uno{struct Float4;}}
namespace g{struct ColorPalette;}

namespace g{

// public partial sealed class ColorPalette
// {
::g::Fuse::Controls::Panel_type* ColorPalette_typeof();

struct ColorPalette : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::Float4 color0_;
    static ::g::Uno::Float4& color0() { return ColorPalette_typeof()->Init(), color0_; }
    static ::g::Uno::Float4 color1_;
    static ::g::Uno::Float4& color1() { return ColorPalette_typeof()->Init(), color1_; }
    static ::g::Uno::Float4 color2_;
    static ::g::Uno::Float4& color2() { return ColorPalette_typeof()->Init(), color2_; }
    static ::g::Uno::Float4 color3_;
    static ::g::Uno::Float4& color3() { return ColorPalette_typeof()->Init(), color3_; }
    static ::g::Uno::Float4 color4_;
    static ::g::Uno::Float4& color4() { return ColorPalette_typeof()->Init(), color4_; }
};
// }

} // ::g
