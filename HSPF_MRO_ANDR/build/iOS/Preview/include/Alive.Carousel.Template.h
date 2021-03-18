// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Alive.Carousel.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Alive{struct Carousel;}}
namespace g{namespace Alive{struct Carousel__Template;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class Carousel.Template
// {
::g::Uno::UX::Template_type* Carousel__Template_typeof();
void Carousel__Template__ctor_1_fn(Carousel__Template* __this, ::g::Alive::Carousel* parent, ::g::Alive::Carousel* parentInstance);
void Carousel__Template__New1_fn(Carousel__Template* __this, uObject** __retval);
void Carousel__Template__New2_fn(::g::Alive::Carousel* parent, ::g::Alive::Carousel* parentInstance, Carousel__Template** __retval);

struct Carousel__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Alive::Carousel*> __parent1;
    uWeak< ::g::Alive::Carousel*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> __self_Opacity_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_Color_inst1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Carousel__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Carousel__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Carousel__Template_typeof()->Init(), __selector2_; }

    void ctor_1(::g::Alive::Carousel* parent, ::g::Alive::Carousel* parentInstance);
    static Carousel__Template* New2(::g::Alive::Carousel* parent, ::g::Alive::Carousel* parentInstance);
};
// }

}} // ::g::Alive
