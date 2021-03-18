// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.12.0/RootViewport.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct PreviewState;}}
namespace g{namespace Fuse{struct Ray;}}
namespace g{namespace Fuse{struct RootViewport;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// public class RootViewport
// {
struct RootViewport_type : ::g::Fuse::Visual_type
{
    ::g::Fuse::IViewport interface13;
    ::g::Uno::IDisposable interface14;
    ::g::Fuse::ICommonViewport interface15;
};

RootViewport_type* RootViewport_typeof();
void RootViewport__ctor_3_fn(RootViewport* __this);
void RootViewport__ctor_4_fn(RootViewport* __this, uObject* frame);
void RootViewport__Draw_fn(RootViewport* __this, ::g::Fuse::DrawContext* dc);
void RootViewport__EstablishSize_fn(RootViewport* __this);
void RootViewport__EstablishSizeInternals_fn(RootViewport* __this);
void RootViewport__New2_fn(RootViewport** __retval);
void RootViewport__New3_fn(uObject* frame, RootViewport** __retval);
void RootViewport__OnInvalidateLayout_fn(RootViewport* __this);
void RootViewport__OnResized_fn(RootViewport* __this, uObject* s, uObject* a);
void RootViewport__OverrideSize_fn(RootViewport* __this, ::g::Uno::Float2* pixelSize, float* pixelsPerPoint, float* pixelsPerOSPoint);
void RootViewport__get_PixelSize_fn(RootViewport* __this, ::g::Uno::Float2* __retval);
void RootViewport__get_PixelsPerOSPoint_fn(RootViewport* __this, float* __retval);
void RootViewport__get_PixelsPerPoint_fn(RootViewport* __this, float* __retval);
void RootViewport__PointToWorldRay_fn(RootViewport* __this, ::g::Uno::Float2* pixelPos, ::g::Fuse::Ray* __retval);
void RootViewport__get_PreviewState_fn(RootViewport* __this, ::g::Fuse::PreviewState** __retval);
void RootViewport__get_ProjectionTransform_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval);
void RootViewport__get_ProjectionTransformInverse_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval);
void RootViewport__add_Resized_fn(RootViewport* __this, uDelegate* value);
void RootViewport__remove_Resized_fn(RootViewport* __this, uDelegate* value);
void RootViewport__RestorePreviewState_fn(RootViewport* __this, uObject* state);
void RootViewport__SavePreviewState_fn(RootViewport* __this, uObject** __retval);
void RootViewport__get_Size_fn(RootViewport* __this, ::g::Uno::Float2* __retval);
void RootViewport__UnoIDisposableDispose_fn(RootViewport* __this);
void RootViewport__get_ViewOrigin_fn(RootViewport* __this, ::g::Uno::Float3* __retval);
void RootViewport__get_ViewProjectionTransform_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval);
void RootViewport__get_ViewProjectionTransformInverse_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval);
void RootViewport__get_ViewRange_fn(RootViewport* __this, ::g::Uno::Float2* __retval);
void RootViewport__get_ViewTransform_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval);
void RootViewport__get_ViewTransformInverse_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval);
void RootViewport__get_VisualContext_fn(RootViewport* __this, int32_t* __retval);
void RootViewport__WorldToLocalRay_fn(RootViewport* __this, uObject* world, ::g::Fuse::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Fuse::Ray* __retval);

struct RootViewport : ::g::Fuse::Visual
{
    uStrong<uObject*> _frame;
    uStrong<uObject*> Frustum;
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    bool _sizeOverridden;
    float _pixelsPerPoint;
    float _pixelsPerOSPoint;
    float _overridePixelsPerPoint;
    ::g::Uno::Float2 _pixelSize;
    uStrong< ::g::Fuse::PreviewState*> _previewState;
    uStrong<uDelegate*> Resized1;

    void ctor_3();
    void ctor_4(uObject* frame);
    void EstablishSize();
    void EstablishSizeInternals();
    void OnResized(uObject* s, uObject* a);
    void OverrideSize(::g::Uno::Float2 pixelSize, float pixelsPerPoint, float pixelsPerOSPoint);
    ::g::Uno::Float2 PixelSize();
    float PixelsPerOSPoint();
    float PixelsPerPoint();
    ::g::Fuse::Ray PointToWorldRay(::g::Uno::Float2 pixelPos);
    ::g::Fuse::PreviewState* PreviewState();
    ::g::Uno::Float4x4 ProjectionTransform();
    ::g::Uno::Float4x4 ProjectionTransformInverse();
    void add_Resized(uDelegate* value);
    void remove_Resized(uDelegate* value);
    void RestorePreviewState(uObject* state);
    uObject* SavePreviewState();
    ::g::Uno::Float2 Size();
    ::g::Uno::Float3 ViewOrigin();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Uno::Float4x4 ViewProjectionTransformInverse();
    ::g::Uno::Float2 ViewRange();
    ::g::Uno::Float4x4 ViewTransform();
    ::g::Uno::Float4x4 ViewTransformInverse();
    ::g::Fuse::Ray WorldToLocalRay(uObject* world, ::g::Fuse::Ray worldRay, ::g::Fuse::Visual* where);
    static RootViewport* New2();
    static RootViewport* New3(uObject* frame);
};
// }

}} // ::g::Fuse
