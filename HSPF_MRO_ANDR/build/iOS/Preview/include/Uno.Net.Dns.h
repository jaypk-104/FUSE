// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Sockets/1.12.0/Dns.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{struct Dns;}}}
namespace g{namespace Uno{namespace Net{struct IPAddress;}}}

namespace g{
namespace Uno{
namespace Net{

// public sealed class Dns
// {
uType* Dns_typeof();
void Dns__ctor__fn(Dns* __this);
void Dns__GetHostAddresses_fn(uString* hostNameOrAddress, uArray** __retval);
void Dns__GetHostAddressesImpl_fn(uString* hostNameOrAddress, uArray** __retval);
void Dns__GetLocalAddresses_fn(uArray** __retval);
void Dns__New1_fn(Dns** __retval);

struct Dns : uObject
{
    void ctor_();
    static uArray* GetHostAddresses(uString* hostNameOrAddress);
    static uArray* GetHostAddressesImpl(uString* hostNameOrAddress);
    static uArray* GetLocalAddresses();
    static Dns* New1();
};
// }

}}} // ::g::Uno::Net
