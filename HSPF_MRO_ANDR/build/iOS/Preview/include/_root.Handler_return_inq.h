// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/Handler_return_inq.g.uno.
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
namespace g{struct Handler_return_inq;}

namespace g{

// public partial sealed class Handler_return_inq
// {
::g::Fuse::Triggers::Trigger_type* Handler_return_inq_typeof();
void Handler_return_inq__ctor_6_fn(Handler_return_inq* __this);
void Handler_return_inq__InitializeUX_fn(Handler_return_inq* __this);
void Handler_return_inq__New3_fn(Handler_return_inq** __retval);

struct Handler_return_inq : ::g::Fuse::Triggers::OnUserEvent
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Handler_return_inq_typeof()->Init(), __selector0_; }

    void ctor_6();
    void InitializeUX();
    static Handler_return_inq* New3();
};
// }

} // ::g
