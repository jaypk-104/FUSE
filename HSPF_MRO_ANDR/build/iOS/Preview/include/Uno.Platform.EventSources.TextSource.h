// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/Platform/EventSources.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Platform{namespace EventSources{struct TextSource;}}}}

namespace g{
namespace Uno{
namespace Platform{
namespace EventSources{

// public static class TextSource
// {
uClassType* TextSource_typeof();
void TextSource__get_IsTextInputActive_fn(bool* __retval);

struct TextSource : uObject
{
    static bool IsTextInputActive();
};
// }

}}}} // ::g::Uno::Platform::EventSources
