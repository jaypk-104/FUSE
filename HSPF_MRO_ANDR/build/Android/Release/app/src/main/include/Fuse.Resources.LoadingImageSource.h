// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.12.0/Resources/LoadingImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.IMemoryResource.h>
#include <Uno.Int2.h>
namespace g{namespace Fuse{namespace Resources{struct LoadingImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct MemoryPolicy;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Resources{

// internal abstract class LoadingImageSource
// {
struct LoadingImageSource_type : ::g::Fuse::Resources::ImageSource_type
{
    ::g::Fuse::Resources::IMemoryResource interface0;
    void(*fp_AttemptLoad)(::g::Fuse::Resources::LoadingImageSource*);
};

LoadingImageSource_type* LoadingImageSource_typeof();
void LoadingImageSource__ctor_2_fn(LoadingImageSource* __this);
void LoadingImageSource__Cleanup_fn(LoadingImageSource* __this, int32_t* reason);
void LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn(LoadingImageSource* __this, bool* __retval);
void LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn(LoadingImageSource* __this, double* __retval);
void LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval);
void LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn(LoadingImageSource* __this);
void LoadingImageSource__GetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval);
void LoadingImageSource__get_IsLoaded_fn(LoadingImageSource* __this, bool* __retval);
void LoadingImageSource__LoadTexture_fn(LoadingImageSource* __this);
void LoadingImageSource__MarkUsed_fn(LoadingImageSource* __this);
void LoadingImageSource__OnPinChanged_fn(LoadingImageSource* __this);
void LoadingImageSource__get_PixelSize_fn(LoadingImageSource* __this, ::g::Uno::Int2* __retval);
void LoadingImageSource__get_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval);
void LoadingImageSource__set_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value);
void LoadingImageSource__Reload_fn(LoadingImageSource* __this);
void LoadingImageSource__SetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D* texture);
void LoadingImageSource__get_Size_fn(LoadingImageSource* __this, ::g::Uno::Float2* __retval);
void LoadingImageSource__get_SizeDensity_fn(LoadingImageSource* __this, float* __retval);
void LoadingImageSource__get_State_fn(LoadingImageSource* __this, int32_t* __retval);

struct LoadingImageSource : ::g::Fuse::Resources::ImageSource
{
    double _lastUsed;
    uStrong< ::g::Fuse::Resources::MemoryPolicy*> _policy;
    uStrong< ::g::Uno::Graphics::Texture2D*> _texture;
    ::g::Uno::Int2 _textureSize;
    bool _loading;
    bool _failed;
    bool _inDisposal;
    float _density;

    void ctor_2();
    void AttemptLoad() { (((LoadingImageSource_type*)__type)->fp_AttemptLoad)(this); }
    void Cleanup(int32_t reason);
    bool IsLoaded();
    void LoadTexture();
    void MarkUsed();
    ::g::Fuse::Resources::MemoryPolicy* Policy();
    void Policy(::g::Fuse::Resources::MemoryPolicy* value);
    void SetTexture(::g::Uno::Graphics::Texture2D* texture);
};
// }

}}} // ::g::Fuse::Resources
