// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.12.0/HitTestContext.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Ray.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{

// public sealed class HitTestContext
// {
uType* HitTestContext_typeof();
void HitTestContext__ctor__fn(HitTestContext* __this, ::g::Uno::Float2* windowPoint, uDelegate* callback);
void HitTestContext__get_Callback_fn(HitTestContext* __this, uDelegate** __retval);
void HitTestContext__Dispose_fn(HitTestContext* __this);
void HitTestContext__Hit_fn(HitTestContext* __this, ::g::Fuse::Visual* obj);
void HitTestContext__Hit1_fn(HitTestContext* __this, ::g::Fuse::Visual* obj, float* hitDistance);
void HitTestContext__get_LocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval);
void HitTestContext__New1_fn(::g::Uno::Float2* windowPoint, uDelegate* callback, HitTestContext** __retval);
void HitTestContext__PopLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp);
void HitTestContext__PopWorldRay_fn(HitTestContext* __this, ::g::Fuse::Ray* o);
void HitTestContext__PushLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp, ::g::Uno::Float2* __retval);
void HitTestContext__PushWorldRay_fn(HitTestContext* __this, ::g::Fuse::Ray* n, ::g::Fuse::Ray* __retval);
void HitTestContext__get_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval);
void HitTestContext__set_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* value);
void HitTestContext__get_WorldRay_fn(HitTestContext* __this, ::g::Fuse::Ray* __retval);

struct HitTestContext : uObject
{
    ::g::Uno::Float2 _localPoint;
    ::g::Fuse::Ray _worldRay;
    uStrong<uDelegate*> _callback;
    ::g::Uno::Float2 _WindowPoint;

    void ctor_(::g::Uno::Float2 windowPoint, uDelegate* callback);
    uDelegate* Callback();
    void Dispose();
    void Hit(::g::Fuse::Visual* obj);
    void Hit1(::g::Fuse::Visual* obj, float hitDistance);
    ::g::Uno::Float2 LocalPoint();
    void PopLocalPoint(::g::Uno::Float2 lp);
    void PopWorldRay(::g::Fuse::Ray o);
    ::g::Uno::Float2 PushLocalPoint(::g::Uno::Float2 lp);
    ::g::Fuse::Ray PushWorldRay(::g::Fuse::Ray n);
    ::g::Uno::Float2 WindowPoint();
    void WindowPoint(::g::Uno::Float2 value);
    ::g::Fuse::Ray WorldRay();
    static HitTestContext* New1(::g::Uno::Float2 windowPoint, uDelegate* callback);
};
// }

}} // ::g::Fuse
