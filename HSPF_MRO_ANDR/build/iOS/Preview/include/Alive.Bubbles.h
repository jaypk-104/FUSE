// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/Bubbles.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.StackPanel.h>
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
namespace g{namespace Alive{struct Bubbles;}}

namespace g{
namespace Alive{

// public partial sealed class Bubbles
// {
::g::Fuse::Controls::Panel_type* Bubbles_typeof();
void Bubbles__ctor_8_fn(Bubbles* __this);
void Bubbles__InitializeUX_fn(Bubbles* __this);
void Bubbles__New5_fn(Bubbles** __retval);

struct Bubbles : ::g::Fuse::Controls::StackPanel
{
    void ctor_8();
    void InitializeUX();
    static Bubbles* New5();
};
// }

}} // ::g::Alive
