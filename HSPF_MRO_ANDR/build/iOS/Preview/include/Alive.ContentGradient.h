// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/ContentGradient.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Drawing.IDrawObjectWatcherFeedback.h>
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
namespace g{namespace Alive{struct ContentGradient;}}

namespace g{
namespace Alive{

// public partial sealed class ContentGradient
// {
::g::Fuse::Controls::Shape_type* ContentGradient_typeof();
void ContentGradient__ctor_8_fn(ContentGradient* __this);
void ContentGradient__InitializeUX_fn(ContentGradient* __this);
void ContentGradient__New4_fn(ContentGradient** __retval);

struct ContentGradient : ::g::Fuse::Controls::Rectangle
{
    void ctor_8();
    void InitializeUX();
    static ContentGradient* New4();
};
// }

}} // ::g::Alive
