// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/Alive.TextStyles.g.uno.
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
namespace g{namespace Alive{struct TextStyles;}}
namespace g{namespace Fuse{struct SystemFont;}}

namespace g{
namespace Alive{

// public partial sealed class TextStyles
// {
::g::Fuse::Controls::Panel_type* TextStyles_typeof();
void TextStyles__ctor_7_fn(TextStyles* __this);
void TextStyles__InitializeUX_fn(TextStyles* __this);
void TextStyles__New4_fn(TextStyles** __retval);

struct TextStyles : ::g::Fuse::Controls::Panel
{
    static uSStrong< ::g::Fuse::SystemFont*> AliveRegularFont_;
    static uSStrong< ::g::Fuse::SystemFont*>& AliveRegularFont() { return TextStyles_typeof()->Init(), AliveRegularFont_; }
    static uSStrong< ::g::Fuse::SystemFont*> AliveBoldFont_;
    static uSStrong< ::g::Fuse::SystemFont*>& AliveBoldFont() { return TextStyles_typeof()->Init(), AliveBoldFont_; }
    static uSStrong< ::g::Fuse::SystemFont*> AliveMediumFont_;
    static uSStrong< ::g::Fuse::SystemFont*>& AliveMediumFont() { return TextStyles_typeof()->Init(), AliveMediumFont_; }

    void ctor_7();
    void InitializeUX();
    static TextStyles* New4();
};
// }

}} // ::g::Alive
