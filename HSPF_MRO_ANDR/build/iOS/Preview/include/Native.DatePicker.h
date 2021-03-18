// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Projects/NativeControls/.uno/ux15/Native.DatePicker.g.uno.
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
#include <Native.DatePickerBase.h>
#include <Native.IDatePickerHost.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Native{struct DatePicker;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Native{

// public partial sealed class DatePicker
// {
::g::Native::DatePickerBase_type* DatePicker_typeof();
void DatePicker__ctor_8_fn(DatePicker* __this);
void DatePicker__InitializeUX_fn(DatePicker* __this);
void DatePicker__New4_fn(DatePicker** __retval);

struct DatePicker : ::g::Native::DatePickerBase
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DatePicker_typeof()->Init(), __selector0_; }

    void ctor_8();
    void InitializeUX();
    static DatePicker* New4();
};
// }

}} // ::g::Native
