// This file was generated based on /usr/local/share/uno/Packages/Fuse.Desktop/1.12.0/DesktopApp.uno.
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
namespace g{namespace Fuse{struct RootPanel;}}

namespace g{
namespace Fuse{

// internal sealed class RootPanel
// {
::g::Fuse::Controls::Panel_type* RootPanel_typeof();
void RootPanel__ctor_7_fn(RootPanel* __this);
void RootPanel__New4_fn(RootPanel** __retval);
void RootPanel__get_TreeRenderer_fn(RootPanel* __this, uObject** __retval);

struct RootPanel : ::g::Fuse::Controls::Panel
{
    void ctor_7();
    static RootPanel* New4();
};
// }

}} // ::g::Fuse
