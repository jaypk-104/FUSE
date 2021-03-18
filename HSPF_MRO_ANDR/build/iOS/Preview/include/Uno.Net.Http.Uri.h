// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.12.0/Uri.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct Uri;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class Uri
// {
uType* Uri_typeof();
void Uri__ctor__fn(Uri* __this, uString* uriString);
void Uri__get_AbsolutePath_fn(Uri* __this, uString** __retval);
void Uri__get_AbsoluteUri_fn(Uri* __this, uString** __retval);
void Uri__get_Authority_fn(Uri* __this, uString** __retval);
void Uri__set_Authority_fn(Uri* __this, uString* value);
void Uri__CreateThis_fn(Uri* __this, uString* uriString);
void Uri__get_Fragment_fn(Uri* __this, uString** __retval);
void Uri__set_Fragment_fn(Uri* __this, uString* value);
void Uri__get_Host_fn(Uri* __this, uString** __retval);
void Uri__set_Host_fn(Uri* __this, uString* value);
void Uri__New1_fn(uString* uriString, Uri** __retval);
void Uri__get_OriginalString_fn(Uri* __this, uString** __retval);
void Uri__set_OriginalString_fn(Uri* __this, uString* value);
void Uri__get_PathAndQuery_fn(Uri* __this, uString** __retval);
void Uri__get_Port_fn(Uri* __this, int32_t* __retval);
void Uri__set_Port_fn(Uri* __this, int32_t* value);
void Uri__get_Query_fn(Uri* __this, uString** __retval);
void Uri__set_Query_fn(Uri* __this, uString* value);
void Uri__get_Scheme_fn(Uri* __this, uString** __retval);
void Uri__set_Scheme_fn(Uri* __this, uString* value);
void Uri__get_Segments_fn(Uri* __this, uArray** __retval);
void Uri__set_Segments_fn(Uri* __this, uArray* value);
void Uri__get_UserInfo_fn(Uri* __this, uString** __retval);
void Uri__set_UserInfo_fn(Uri* __this, uString* value);

struct Uri : uObject
{
    bool _hasDoubleSlash;
    uStrong<uString*> _Authority;
    uStrong<uString*> _Fragment;
    uStrong<uString*> _Host;
    uStrong<uString*> _OriginalString;
    int32_t _Port;
    uStrong<uString*> _Query;
    uStrong<uString*> _Scheme;
    uStrong<uArray*> _Segments;
    uStrong<uString*> _UserInfo;

    void ctor_(uString* uriString);
    uString* AbsolutePath();
    uString* AbsoluteUri();
    uString* Authority();
    void Authority(uString* value);
    void CreateThis(uString* uriString);
    uString* Fragment();
    void Fragment(uString* value);
    uString* Host();
    void Host(uString* value);
    uString* OriginalString();
    void OriginalString(uString* value);
    uString* PathAndQuery();
    int32_t Port();
    void Port(int32_t value);
    uString* Query();
    void Query(uString* value);
    uString* Scheme();
    void Scheme(uString* value);
    uArray* Segments();
    void Segments(uArray* value);
    uString* UserInfo();
    void UserInfo(uString* value);
    static Uri* New1(uString* uriString);
};
// }

}}}} // ::g::Uno::Net::Http
