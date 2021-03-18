// This file was generated based on '.uno/ux15/Handler.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.OnUserEvent.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Handler;}

namespace g{

// public partial sealed class Handler
// {
::g::Fuse::Triggers::Trigger_type* Handler_typeof();
void Handler__ctor_6_fn(Handler* __this);
void Handler__InitializeUX_fn(Handler* __this);
void Handler__New3_fn(Handler** __retval);

struct Handler : ::g::Fuse::Triggers::OnUserEvent
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Handler_typeof()->Init(), __selector0_; }

    void ctor_6();
    void InitializeUX();
    static Handler* New3();
};
// }

} // ::g
