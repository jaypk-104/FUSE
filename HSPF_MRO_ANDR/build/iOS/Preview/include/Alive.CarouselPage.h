// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/Carousel.ux.uno.
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
namespace g{namespace Alive{struct CarouselPage;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class CarouselPage
// {
::g::Fuse::Controls::Panel_type* CarouselPage_typeof();
void CarouselPage__ctor_7_fn(CarouselPage* __this);
void CarouselPage__InitializeUX_fn(CarouselPage* __this);
void CarouselPage__New4_fn(CarouselPage** __retval);

struct CarouselPage : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::Property1*> this_ZOffset_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Opacity_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CarouselPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return CarouselPage_typeof()->Init(), __selector1_; }

    void ctor_7();
    void InitializeUX();
    static CarouselPage* New4();
};
// }

}} // ::g::Alive
