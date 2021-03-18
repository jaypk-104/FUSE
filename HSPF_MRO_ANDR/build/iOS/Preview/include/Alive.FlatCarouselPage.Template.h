// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Alive.FlatCarouselPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Alive{struct FlatCarouselPage;}}
namespace g{namespace Alive{struct FlatCarouselPage__Template;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class FlatCarouselPage.Template
// {
::g::Uno::UX::Template_type* FlatCarouselPage__Template_typeof();
void FlatCarouselPage__Template__ctor_1_fn(FlatCarouselPage__Template* __this, ::g::Alive::FlatCarouselPage* parent, ::g::Alive::FlatCarouselPage* parentInstance);
void FlatCarouselPage__Template__New1_fn(FlatCarouselPage__Template* __this, uObject** __retval);
void FlatCarouselPage__Template__New2_fn(::g::Alive::FlatCarouselPage* parent, ::g::Alive::FlatCarouselPage* parentInstance, FlatCarouselPage__Template** __retval);

struct FlatCarouselPage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Alive::FlatCarouselPage*> __parent1;
    uWeak< ::g::Alive::FlatCarouselPage*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return FlatCarouselPage__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::Alive::FlatCarouselPage* parent, ::g::Alive::FlatCarouselPage* parentInstance);
    static FlatCarouselPage__Template* New2(::g::Alive::FlatCarouselPage* parent, ::g::Alive::FlatCarouselPage* parentInstance);
};
// }

}} // ::g::Alive
