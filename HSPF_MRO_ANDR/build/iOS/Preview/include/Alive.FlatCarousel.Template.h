// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Alive.FlatCarousel.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Alive{struct FlatCarousel;}}
namespace g{namespace Alive{struct FlatCarousel__Template;}}
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class FlatCarousel.Template
// {
::g::Uno::UX::Template_type* FlatCarousel__Template_typeof();
void FlatCarousel__Template__ctor_1_fn(FlatCarousel__Template* __this, ::g::Alive::FlatCarousel* parent, ::g::Alive::FlatCarousel* parentInstance);
void FlatCarousel__Template__New1_fn(FlatCarousel__Template* __this, uObject** __retval);
void FlatCarousel__Template__New2_fn(::g::Alive::FlatCarousel* parent, ::g::Alive::FlatCarousel* parentInstance, FlatCarousel__Template** __retval);

struct FlatCarousel__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Alive::FlatCarousel*> __parent1;
    uWeak< ::g::Alive::FlatCarousel*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> dot_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Target_inst;
    uStrong< ::g::Fuse::Controls::Circle*> dot;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return FlatCarousel__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return FlatCarousel__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return FlatCarousel__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return FlatCarousel__Template_typeof()->Init(), __selector3_; }

    void ctor_1(::g::Alive::FlatCarousel* parent, ::g::Alive::FlatCarousel* parentInstance);
    static FlatCarousel__Template* New2(::g::Alive::FlatCarousel* parent, ::g::Alive::FlatCarousel* parentInstance);
};
// }

}} // ::g::Alive
