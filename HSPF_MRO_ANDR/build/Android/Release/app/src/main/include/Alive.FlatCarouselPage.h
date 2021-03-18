// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/FlatCarousel.ux.uno.
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
namespace g{namespace Alive{struct FlatCarouselPage;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class FlatCarouselPage
// {
::g::Fuse::Controls::Panel_type* FlatCarouselPage_typeof();
void FlatCarouselPage__SetSubtitle_fn(FlatCarouselPage* __this, uString* value, uObject* origin);
void FlatCarouselPage__SetTitle_fn(FlatCarouselPage* __this, uString* value, uObject* origin);
void FlatCarouselPage__get_Subtitle_fn(FlatCarouselPage* __this, uString** __retval);
void FlatCarouselPage__set_Subtitle_fn(FlatCarouselPage* __this, uString* value);
void FlatCarouselPage__get_Title_fn(FlatCarouselPage* __this, uString** __retval);
void FlatCarouselPage__set_Title_fn(FlatCarouselPage* __this, uString* value);

struct FlatCarouselPage : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Title;
    uStrong<uString*> _field_Subtitle;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return FlatCarouselPage_typeof()->Init(), __selector0_; }

    void SetSubtitle(uString* value, uObject* origin);
    void SetTitle(uString* value, uObject* origin);
    uString* Subtitle();
    void Subtitle(uString* value);
    uString* Title();
    void Title(uString* value);
};
// }

}} // ::g::Alive
