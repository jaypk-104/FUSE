// This file was generated based on '.uno/ux15/PagePlaceholder.g.uno'.
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
namespace g{struct PagePlaceholder;}

namespace g{

// public partial sealed class PagePlaceholder
// {
::g::Fuse::Controls::Panel_type* PagePlaceholder_typeof();
void PagePlaceholder__ctor_7_fn(PagePlaceholder* __this);
void PagePlaceholder__InitializeUX_fn(PagePlaceholder* __this);
void PagePlaceholder__New4_fn(PagePlaceholder** __retval);

struct PagePlaceholder : ::g::Fuse::Controls::Panel
{
    void ctor_7();
    void InitializeUX();
    static PagePlaceholder* New4();
};
// }

} // ::g
