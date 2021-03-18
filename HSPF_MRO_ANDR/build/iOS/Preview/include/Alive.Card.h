// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/Docs/Card.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Alive.ThemedCard.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
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
namespace g{namespace Alive{struct Card;}}

namespace g{
namespace Alive{

// public partial sealed class Card
// {
::g::Fuse::Controls::Shape_type* Card_typeof();
void Card__ctor_9_fn(Card* __this);
void Card__InitializeUX1_fn(Card* __this);
void Card__New5_fn(Card** __retval);

struct Card : ::g::Alive::ThemedCard
{
    void ctor_9();
    void InitializeUX1();
    static Card* New5();
};
// }

}} // ::g::Alive
