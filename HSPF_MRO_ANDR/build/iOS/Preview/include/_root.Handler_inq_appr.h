// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/Handler_inq_appr.g.uno.
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
namespace g{struct Handler_inq_appr;}

namespace g{

// public partial sealed class Handler_inq_appr
// {
::g::Fuse::Triggers::Trigger_type* Handler_inq_appr_typeof();
void Handler_inq_appr__ctor_6_fn(Handler_inq_appr* __this);
void Handler_inq_appr__InitializeUX_fn(Handler_inq_appr* __this);
void Handler_inq_appr__New3_fn(Handler_inq_appr** __retval);

struct Handler_inq_appr : ::g::Fuse::Triggers::OnUserEvent
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Handler_inq_appr_typeof()->Init(), __selector0_; }

    void ctor_6();
    void InitializeUX();
    static Handler_inq_appr* New3();
};
// }

} // ::g
