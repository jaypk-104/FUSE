// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/DrawerButtonBackground.ux.uno.
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
namespace g{namespace Alive{struct DrawerButtonBackground;}}

namespace g{
namespace Alive{

// public partial sealed class DrawerButtonBackground
// {
::g::Fuse::Controls::Panel_type* DrawerButtonBackground_typeof();
void DrawerButtonBackground__ctor_7_fn(DrawerButtonBackground* __this);
void DrawerButtonBackground__InitializeUX_fn(DrawerButtonBackground* __this);
void DrawerButtonBackground__New4_fn(DrawerButtonBackground** __retval);

struct DrawerButtonBackground : ::g::Fuse::Controls::Panel
{
    void ctor_7();
    void InitializeUX();
    static DrawerButtonBackground* New4();
};
// }

}} // ::g::Alive
