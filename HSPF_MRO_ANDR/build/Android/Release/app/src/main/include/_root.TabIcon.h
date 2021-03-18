// This file was generated based on '.uno/ux15/TabIcon.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Gestures.ISizeConstraint.h>
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
namespace g{struct TabIcon;}

namespace g{

// public partial sealed class TabIcon
// {
::g::Fuse::Controls::Image_type* TabIcon_typeof();
void TabIcon__ctor_7_fn(TabIcon* __this);
void TabIcon__InitializeUX_fn(TabIcon* __this);
void TabIcon__New4_fn(TabIcon** __retval);

struct TabIcon : ::g::Fuse::Controls::Image
{
    void ctor_7();
    void InitializeUX();
    static TabIcon* New4();
};
// }

} // ::g
