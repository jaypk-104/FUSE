// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/.uno/ux15/Native.TimePicker.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
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
#include <Native.ITimePickerHost.h>
#include <Native.TimePickerBase.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Native{struct TimePicker;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Native{

// public partial sealed class TimePicker
// {
::g::Native::TimePickerBase_type* TimePicker_typeof();
void TimePicker__ctor_8_fn(TimePicker* __this);
void TimePicker__InitializeUX_fn(TimePicker* __this);
void TimePicker__New4_fn(TimePicker** __retval);

struct TimePicker : ::g::Native::TimePickerBase
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TimePicker_typeof()->Init(), __selector0_; }

    void ctor_8();
    void InitializeUX();
    static TimePicker* New4();
};
// }

}} // ::g::Native
