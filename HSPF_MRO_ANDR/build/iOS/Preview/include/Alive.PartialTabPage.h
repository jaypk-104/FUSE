// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/PartialTabPage.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Alive.TabPage.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
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
namespace g{namespace Alive{struct PartialTabPage;}}

namespace g{
namespace Alive{

// public partial sealed class PartialTabPage
// {
::g::Fuse::Controls::Panel_type* PartialTabPage_typeof();
void PartialTabPage__ctor_10_fn(PartialTabPage* __this);
void PartialTabPage__InitializeUX2_fn(PartialTabPage* __this);
void PartialTabPage__New7_fn(PartialTabPage** __retval);

struct PartialTabPage : ::g::Alive::TabPage
{
    void ctor_10();
    void InitializeUX2();
    static PartialTabPage* New7();
};
// }

}} // ::g::Alive
