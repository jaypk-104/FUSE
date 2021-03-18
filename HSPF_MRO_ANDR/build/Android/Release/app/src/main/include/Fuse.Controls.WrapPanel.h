// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.12.0/WrapPanel.uno.
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
namespace g{namespace Fuse{namespace Controls{struct WrapPanel;}}}
namespace g{namespace Fuse{namespace Layouts{struct WrapLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class WrapPanel
// {
::g::Fuse::Controls::Panel_type* WrapPanel_typeof();
void WrapPanel__ctor_7_fn(WrapPanel* __this);
void WrapPanel__get_FlowDirection_fn(WrapPanel* __this, int32_t* __retval);
void WrapPanel__set_FlowDirection_fn(WrapPanel* __this, int32_t* value);
void WrapPanel__New4_fn(WrapPanel** __retval);
void WrapPanel__get_Orientation_fn(WrapPanel* __this, int32_t* __retval);
void WrapPanel__set_Orientation_fn(WrapPanel* __this, int32_t* value);

struct WrapPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::WrapLayout*> _wrapLayout;

    void ctor_7();
    int32_t FlowDirection();
    void FlowDirection(int32_t value);
    int32_t Orientation();
    void Orientation(int32_t value);
    static WrapPanel* New4();
};
// }

}}} // ::g::Fuse::Controls
