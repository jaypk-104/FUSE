// This file was generated based on /usr/local/share/uno/Packages/Fuse.Testing/1.12.0/JavaScriptTest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Node.ISiblingDataProvider.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.ValueForwarder.IValueListener.h>
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Testing{struct JavaScriptTest;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Testing{

// public sealed class JavaScriptTest
// {
::g::Fuse::Reactive::JavaScript_type* JavaScriptTest_typeof();
void JavaScriptTest__ctor_4_fn(JavaScriptTest* __this, ::g::Uno::UX::NameTable* nameTable);
void JavaScriptTest__New3_fn(::g::Uno::UX::NameTable* nameTable, JavaScriptTest** __retval);

struct JavaScriptTest : ::g::Fuse::Reactive::JavaScript
{
    void ctor_4(::g::Uno::UX::NameTable* nameTable);
    static JavaScriptTest* New3(::g::Uno::UX::NameTable* nameTable);
};
// }

}}} // ::g::Fuse::Testing
