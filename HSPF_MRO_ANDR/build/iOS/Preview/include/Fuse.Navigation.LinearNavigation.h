// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.12.0/StructuredNavigation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IParentObserver.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.ISeekableNavigation.h>
#include <Fuse.Navigation.StructuredNavigation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct LinearNavigation;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class LinearNavigation
// {
::g::Fuse::Navigation::StructuredNavigation_type* LinearNavigation_typeof();
void LinearNavigation__ctor_5_fn(LinearNavigation* __this);
void LinearNavigation__New2_fn(LinearNavigation** __retval);

struct LinearNavigation : ::g::Fuse::Navigation::StructuredNavigation
{
    void ctor_5();
    static LinearNavigation* New2();
};
// }

}}} // ::g::Fuse::Navigation
