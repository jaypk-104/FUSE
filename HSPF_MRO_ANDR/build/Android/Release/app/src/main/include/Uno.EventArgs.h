// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/EventArgs.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Uno{

// public class EventArgs
// {
uType* EventArgs_typeof();
void EventArgs__ctor__fn(EventArgs* __this);
void EventArgs__New1_fn(EventArgs** __retval);

struct EventArgs : uObject
{
    static uSStrong<EventArgs*> Empty_;
    static uSStrong<EventArgs*>& Empty() { return EventArgs_typeof()->Init(), Empty_; }

    void ctor_();
    static EventArgs* New1();
};
// }

}} // ::g::Uno
