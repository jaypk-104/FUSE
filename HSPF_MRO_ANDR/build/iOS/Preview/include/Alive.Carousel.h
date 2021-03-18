// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/Carousel.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Container.h>
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
namespace g{namespace Alive{struct Carousel;}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class Carousel
// {
::g::Fuse::Controls::Panel_type* Carousel_typeof();
void Carousel__ctor_8_fn(Carousel* __this);
void Carousel__InitializeUX_fn(Carousel* __this);
void Carousel__New5_fn(Carousel** __retval);

struct Carousel : ::g::Fuse::Controls::Container
{
    uStrong< ::g::Fuse::Controls::PageControl*> pageControl;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Carousel_typeof()->Init(), __selector0_; }

    void ctor_8();
    void InitializeUX();
    static Carousel* New5();
};
// }

}} // ::g::Alive
