// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Common.Blitter.h>
#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Controls.Native.NativeViewRenderer.h>
#include <Fuse.Controls.Native.ViewFactory.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Controls.Native.ViewHandle.InputMode.h>
#include <Fuse.Controls.Native.ViewHandle.Invalidation.h>
#include <Fuse.iOSDevice.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.VisualBounds.h>
#include <GLKit/GLKit.h>
#include <iOS/CanvasViewGroup.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <OpenGLES/EAGL.h>
#include <QuartzCore/QuartzCore.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[3];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/ImageLoader.uno
// -------------------------------------------------------------------------

// internal static extern class ImageLoader
// {
// static generated ImageLoader()
static void ImageLoader__cctor__fn(uType* __type)
{
    ImageLoader::_imageHandleCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.ImageHandle>*/]));
}

static void ImageLoader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("data/");
    ::STRINGS[1] = uString::Const("/tempImage");
    ::STRINGS[2] = uString::Const("file://");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.ImageHandle>*/], (uintptr_t)&ImageLoader::_imageHandleCache_, uFieldFlagsStatic);
}

uClassType* ImageLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.ImageLoader", options);
    type->fp_build_ = ImageLoader_build;
    type->fp_cctor_ = ImageLoader__cctor__fn;
    return type;
}

// private static extern string GetBundleAbsolutePath(string bundlePath)
void ImageLoader__GetBundleAbsolutePath_fn(uString* bundlePath, uString** __retval)
{
    *__retval = ImageLoader::GetBundleAbsolutePath(bundlePath);
}

// public static extern Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> Load(Fuse.Resources.HttpImageSource http)
void ImageLoader__Load_fn(::g::Fuse::Resources::HttpImageSource* http, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ImageLoader::Load(http);
}

// public static Fuse.Controls.Native.ImageHandle Load(string uri)
void ImageLoader__Load1_fn(uString* uri, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load1(uri);
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.IO.BundleFile bundleFile)
void ImageLoader__Load2_fn(::g::Uno::IO::BundleFile* bundleFile, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load2(bundleFile);
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.UX.FileSource fileSource)
void ImageLoader__Load3_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load3(fileSource);
}

// private static extern ObjC.Object LoadUri(string uri)
void ImageLoader__LoadUri_fn(uString* uri, ::g::ObjC::Object** __retval)
{
    *__retval = ImageLoader::LoadUri(uri);
}

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle)
void ImageLoader__ReleaseHandle_fn(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageLoader::ReleaseHandle(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ImageLoader::_imageHandleCache_;

// private static extern string GetBundleAbsolutePath(string bundlePath) [static]
uString* ImageLoader::GetBundleAbsolutePath(uString* bundlePath)
{
    ImageLoader_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::NSString* bundlePath) -> ::NSString*
        {
            return [[[NSBundle bundleForClass:[StrongUnoObject class]] URLForResource:bundlePath withExtension:@""] absoluteString];
        } (::uObjC::NativeString(bundlePath)));
        
    }
    
}

// public static extern Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> Load(Fuse.Resources.HttpImageSource http) [static]
::g::Uno::Threading::Future1* ImageLoader::Load(::g::Fuse::Resources::HttpImageSource* http)
{
    uStackFrame __("Fuse.Controls.Native.ImageLoader", "Load(Fuse.Resources.HttpImageSource)");
    ImageLoader_typeof()->Init();
    bool ret1;
    ::g::Uno::Threading::Promise* ret2;
    uString* url = uPtr(http)->Url();
    ::g::Fuse::Controls::Native::ImageHandle* handle = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_imageHandleCache_), url, (void**)(&handle), &ret1), ret1))
        uPtr(handle)->Pin();
    else
    {
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(url, ImageLoader::LoadUri(url));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache_), url, handle);
    }

    return (::g::Uno::Threading::Promise__New2_fn(::TYPES[1/*Uno.Threading.Promise<Fuse.Controls.Native.ImageHandle>*/], handle, &ret2), ret2);
}

// public static Fuse.Controls.Native.ImageHandle Load(string uri) [static]
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load1(uString* uri)
{
    uStackFrame __("Fuse.Controls.Native.ImageLoader", "Load(string)");
    ImageLoader_typeof()->Init();
    bool ret3;
    ::g::Fuse::Controls::Native::ImageHandle* handle = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_imageHandleCache_), uri, (void**)(&handle), &ret3), ret3))
        uPtr(handle)->Pin();
    else
    {
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(uri, ImageLoader::LoadUri(uri));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache_), uri, handle);
    }

    return handle;
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.IO.BundleFile bundleFile) [static]
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load2(::g::Uno::IO::BundleFile* bundleFile)
{
    uStackFrame __("Fuse.Controls.Native.ImageLoader", "Load(Uno.IO.BundleFile)");
    ImageLoader_typeof()->Init();
    return ImageLoader::Load1(ImageLoader::GetBundleAbsolutePath(::g::Uno::String::op_Addition2(::STRINGS[0/*"data/"*/], uPtr(bundleFile)->BundlePath())));
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.UX.FileSource fileSource) [static]
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load3(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.Controls.Native.ImageLoader", "Load(Uno.UX.FileSource)");
    ImageLoader_typeof()->Init();
    bool ret4;
    ::g::Fuse::Controls::Native::ImageHandle* handle = NULL;

    if (uIs(fileSource, ::TYPES[2/*Uno.UX.BundleFileSource*/]))
        handle = ImageLoader::Load2(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[2/*Uno.UX.BundleFileSource*/]))->BundleFile);
    else if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_imageHandleCache_), uPtr(fileSource)->Name, (void**)(&handle), &ret4), ret4))
        uPtr(handle)->Pin();
    else
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(2), ::STRINGS[1/*"/tempImage"*/]);
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(fileSource->Name, ImageLoader::LoadUri(::g::Uno::String::op_Addition2(::STRINGS[2/*"file://"*/], path)));
        ::g::Uno::IO::File::Delete(path);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache_), fileSource->Name, handle);
    }

    return handle;
}

// private static extern ObjC.Object LoadUri(string uri) [static]
::g::ObjC::Object* ImageLoader::LoadUri(uString* uri)
{
    ImageLoader_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::NSString* uri) -> ::id
        {
            NSData* data = [NSData dataWithContentsOfURL: [NSURL URLWithString: uri]];
            return [UIImage imageWithData:data];
        } (::uObjC::NativeString(uri)));
        
    }
    
}

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle) [static]
void ImageLoader::ReleaseHandle(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    uStackFrame __("Fuse.Controls.Native.ImageLoader", "ReleaseHandle(Fuse.Controls.Native.ImageHandle)");
    ImageLoader_typeof()->Init();
    bool ret5;
    bool ret6;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ImageLoader::_imageHandleCache_), uPtr(handle)->Name(), &ret5), ret5))
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(ImageLoader::_imageHandleCache_), uPtr(handle)->Name(), &ret6);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.12.0/NativeRenderer.uno
// ----------------------------------------------------------------------------

// public sealed extern class NativeViewRenderer
// {
static void NativeViewRenderer_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Common::Blitter_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(NativeViewRenderer_type, interface0),
        ::g::Fuse::Controls::Native::IViewHandleRenderer_typeof(), offsetof(NativeViewRenderer_type, interface1));
    type->SetFields(0,
        uObject_typeof(), offsetof(NativeViewRenderer, _pixelBuffer), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(NativeViewRenderer, _textureHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(NativeViewRenderer, _valid), 0,
        ::g::Uno::Int2_typeof(), offsetof(NativeViewRenderer, _prevSize), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("Dispose", NULL, (void*)NativeViewRenderer__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Draw", NULL, (void*)NativeViewRenderer__Draw_fn, 0, false, uVoid_typeof(), 5, ::g::Fuse::Controls::Native::ViewHandle_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Invalidate", NULL, (void*)NativeViewRenderer__Invalidate_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)NativeViewRenderer__New1_fn, 0, true, type, 0));
}

NativeViewRenderer_type* NativeViewRenderer_typeof()
{
    static uSStrong<NativeViewRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NativeViewRenderer);
    options.TypeSize = sizeof(NativeViewRenderer_type);
    type = (NativeViewRenderer_type*)uClassType::New("Fuse.Controls.Native.NativeViewRenderer", options);
    type->fp_build_ = NativeViewRenderer_build;
    type->fp_ctor_ = (void*)NativeViewRenderer__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))NativeViewRenderer__Dispose_fn;
    type->interface1.fp_Draw = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))NativeViewRenderer__Draw_fn;
    type->interface1.fp_Invalidate = (void(*)(uObject*))NativeViewRenderer__Invalidate_fn;
    return type;
}

// public generated NativeViewRenderer()
void NativeViewRenderer__ctor__fn(NativeViewRenderer* __this)
{
    __this->ctor_();
}

// private static extern Uno.IntPtr AllocPixelBuffer(int width, int height)
void NativeViewRenderer__AllocPixelBuffer_fn(int32_t* width, int32_t* height, void** __retval)
{
    *__retval = NativeViewRenderer::AllocPixelBuffer(*width, *height);
}

// public void Dispose()
void NativeViewRenderer__Dispose_fn(NativeViewRenderer* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.Controls.Native.ViewHandle viewHandle, float4x4 localToClipTransform, float2 position, float2 size, float density)
void NativeViewRenderer__Draw_fn(NativeViewRenderer* __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    __this->Draw(viewHandle, *localToClipTransform, *position, *size, *density);
}

// private static extern void FreePixelBuffer(Uno.IntPtr buffer)
void NativeViewRenderer__FreePixelBuffer_fn(void** buffer)
{
    NativeViewRenderer::FreePixelBuffer(*buffer);
}

// public void Invalidate()
void NativeViewRenderer__Invalidate_fn(NativeViewRenderer* __this)
{
    __this->Invalidate();
}

// public generated NativeViewRenderer New()
void NativeViewRenderer__New1_fn(NativeViewRenderer** __retval)
{
    *__retval = NativeViewRenderer::New1();
}

// private void ReleaseResources()
void NativeViewRenderer__ReleaseResources_fn(NativeViewRenderer* __this)
{
    __this->ReleaseResources();
}

// private static extern void Upload(ObjC.Object viewHandle, int textureName, Uno.IntPtr pixelBufferHandle, int width, int height, float density, bool reuse)
void NativeViewRenderer__Upload_fn(::g::ObjC::Object* viewHandle, int32_t* textureName, void** pixelBufferHandle, int32_t* width, int32_t* height, float* density, bool* reuse)
{
    NativeViewRenderer::Upload(viewHandle, *textureName, *pixelBufferHandle, *width, *height, *density, *reuse);
}

// public generated NativeViewRenderer() [instance]
void NativeViewRenderer::ctor_()
{
    _prevSize = ::g::Uno::Int2__New1(-1);
}

// public void Dispose() [instance]
void NativeViewRenderer::Dispose()
{
    uStackFrame __("Fuse.Controls.Native.NativeViewRenderer", "Dispose()");
    ReleaseResources();
}

// public void Draw(Fuse.Controls.Native.ViewHandle viewHandle, float4x4 localToClipTransform, float2 position, float2 size, float density) [instance]
void NativeViewRenderer::Draw(::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Float2 position, ::g::Uno::Float2 size, float density)
{
    uStackFrame __("Fuse.Controls.Native.NativeViewRenderer", "Draw(Fuse.Controls.Native.ViewHandle,float4x4,float2,float2,float)");
    ::g::Uno::Int2 pixelSize = ::g::Uno::Int2__op_Explicit1(::g::Uno::Float2__op_Multiply1(size, density));
    bool reuse = true;

    if (::g::Uno::Int2__op_Inequality(_prevSize, pixelSize))
    {
        ReleaseResources();
        _textureHandle = ::g::OpenGL::GL::CreateTexture();
        _pixelBuffer = uBox(::g::Uno::IntPtr_typeof(), NativeViewRenderer::AllocPixelBuffer(pixelSize.X, pixelSize.Y));
        _prevSize = pixelSize;
        reuse = false;
        _valid = false;
    }

    if (!_valid)
    {
        ::g::OpenGL::GL::BindTexture(3553, _textureHandle);
        NativeViewRenderer::Upload(uPtr(viewHandle)->NativeHandle, ::g::OpenGL::GLTextureHandle::op_Explicit2(_textureHandle), uUnbox<void*>(::g::Uno::IntPtr_typeof(), _pixelBuffer), pixelSize.X, pixelSize.Y, density, reuse);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
        _valid = true;
    }

    uPtr(::g::Fuse::Common::Blitter::Singleton())->Blit1(::g::Uno::Graphics::Texture2D::New2(_textureHandle, pixelSize, 1, 3), ::g::Uno::Rect__New2(position, size), localToClipTransform, 1.0f, true, 0);
}

// public void Invalidate() [instance]
void NativeViewRenderer::Invalidate()
{
    _valid = false;
}

// private void ReleaseResources() [instance]
void NativeViewRenderer::ReleaseResources()
{
    uStackFrame __("Fuse.Controls.Native.NativeViewRenderer", "ReleaseResources()");

    if (::g::OpenGL::GLTextureHandle::op_Inequality(_textureHandle, ::g::OpenGL::GLTextureHandle::Zero_))
    {
        ::g::OpenGL::GL::DeleteTexture(_textureHandle);
        _textureHandle = ::g::OpenGL::GLTextureHandle::Zero_;
    }

    if (_pixelBuffer != NULL)
    {
        NativeViewRenderer::FreePixelBuffer(uUnbox<void*>(::g::Uno::IntPtr_typeof(), _pixelBuffer));
        _pixelBuffer = NULL;
    }
}

// private static extern Uno.IntPtr AllocPixelBuffer(int width, int height) [static]
void* NativeViewRenderer::AllocPixelBuffer(int32_t width, int32_t height)
{
    int32_t size = (width * height) * 4;
    return malloc( size );
}

// private static extern void FreePixelBuffer(Uno.IntPtr buffer) [static]
void NativeViewRenderer::FreePixelBuffer(void* buffer)
{
    free( buffer );
}

// public generated NativeViewRenderer New() [static]
NativeViewRenderer* NativeViewRenderer::New1()
{
    NativeViewRenderer* obj1 = (NativeViewRenderer*)uNew(NativeViewRenderer_typeof());
    obj1->ctor_();
    return obj1;
}

// private static extern void Upload(ObjC.Object viewHandle, int textureName, Uno.IntPtr pixelBufferHandle, int width, int height, float density, bool reuse) [static]
void NativeViewRenderer::Upload(::g::ObjC::Object* viewHandle, int32_t textureName, void* pixelBufferHandle, int32_t width, int32_t height, float density, bool reuse)
{
    @autoreleasepool
    {
        [] (::id viewHandle, int32_t textureName, void* pixelBufferHandle, int32_t width, int32_t height, float density, bool reuse) -> void
        {
            ::UIView* view = (::UIView*)viewHandle;
            GLubyte* pixelBuffer = (GLubyte*)pixelBufferHandle;
            
            CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
            CGContextRef context = CGBitmapContextCreate(
            	pixelBuffer,
            	width,
            	height,
            	8,
            	4 * width,
            	colorSpace,
            	kCGImageAlphaPremultipliedLast | kCGBitmapByteOrder32Big);
            
            CGContextClearRect(context, { { 0.0f, 0.0f, }, { (CGFloat)width, (CGFloat)height } });
            CGContextScaleCTM(context, (CGFloat)density, (CGFloat)density);
            
            if ([viewHandle isKindOfClass: [UIScrollView class]])
            {
            	auto scrollview = (UIScrollView*)viewHandle;
            	auto offset = [scrollview contentOffset];
            	CGContextTranslateCTM(context, -offset.x, -offset.y);
            }
            
            CGColorSpaceRelease(colorSpace);
            
            [[view layer] renderInContext:context];
            
            glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
            if (reuse)
            {
            	glTexSubImage2D(
            		GL_TEXTURE_2D,
            		0,
            		0,
            		0,
            		width,
            		height,
            		GL_RGBA,
            		GL_UNSIGNED_BYTE,
            		pixelBuffer);
            
            }
            else
            {
            	glTexImage2D(
            		GL_TEXTURE_2D,
            		0,
            		GL_RGBA,
            		width,
            		height,
            		0,
            		GL_RGBA,
            		GL_UNSIGNED_BYTE,
            		pixelBuffer);
            }
            CGContextRelease(context);
        } (::g::ObjC::Object::GetHandle(viewHandle), textureName, pixelBufferHandle, width, height, density, reuse);
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.12.0/ViewHandle.iOS.uno
// ------------------------------------------------------------------

// internal static extern class ViewFactory
// {
static void ViewFactory_build(uType* type)
{
}

uClassType* ViewFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.ViewFactory", options);
    type->fp_build_ = ViewFactory_build;
    return type;
}

// public static Fuse.Controls.Native.ViewHandle InstantiateViewGroup()
void ViewFactory__InstantiateViewGroup_fn(::g::Fuse::Controls::Native::ViewHandle** __retval)
{
    *__retval = ViewFactory::InstantiateViewGroup();
}

// private static ObjC.Object InstantiateViewGroupImpl()
void ViewFactory__InstantiateViewGroupImpl_fn(::g::ObjC::Object** __retval)
{
    *__retval = ViewFactory::InstantiateViewGroupImpl();
}

// public static Fuse.Controls.Native.ViewHandle InstantiateViewGroup() [static]
::g::Fuse::Controls::Native::ViewHandle* ViewFactory::InstantiateViewGroup()
{
    return ::g::Fuse::Controls::Native::ViewHandle::New2(ViewFactory::InstantiateViewGroupImpl(), false, 0, 0);
}

// private static ObjC.Object InstantiateViewGroupImpl() [static]
::g::ObjC::Object* ViewFactory::InstantiateViewGroupImpl()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIControl* control = [[UIControl alloc] init];
            [control setOpaque:false];
            [control setMultipleTouchEnabled:true];
            return control;
        } ());
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.12.0/ViewHandle.iOS.uno
// ------------------------------------------------------------------

// public extern class ViewHandle
// {
static void ViewHandle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ViewHandle_type, interface0));
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(ViewHandle, NativeHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(ViewHandle, IsLeafView), 0,
        ::g::Uno::Bool_typeof(), offsetof(ViewHandle, NeedsInvalidation), 0,
        ::g::Uno::Bool_typeof(), offsetof(ViewHandle, NeedsRenderBounds), 0,
        ViewHandle__InputMode_typeof(), offsetof(ViewHandle, _inputMode), 0,
        ::g::Uno::Float2_typeof(), offsetof(ViewHandle, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(ViewHandle, _size), 0,
        ::g::Uno::Bool_typeof(), offsetof(ViewHandle, _HitTestEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(ViewHandle, _IsEnabled), 0);
    type->Reflection.SetFields(1,
        new uField("NativeHandle", 0));
    type->Reflection.SetFunctions(23,
        new uFunction("BringToFront", NULL, (void*)ViewHandle__BringToFront_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, NULL, offsetof(ViewHandle_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("Format", NULL, (void*)ViewHandle__Format_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_HitTestHandle", NULL, NULL, offsetof(ViewHandle_type, fp_get_HitTestHandle), false, ::g::ObjC::Object_typeof(), 0),
        new uFunction("InsertChild", NULL, (void*)ViewHandle__InsertChild_fn, 0, false, uVoid_typeof(), 1, type),
        new uFunction("InsertChild", NULL, (void*)ViewHandle__InsertChild1_fn, 0, false, uVoid_typeof(), 2, type, ::g::Uno::Int_typeof()),
        new uFunction("Invalidate", NULL, (void*)ViewHandle__Invalidate_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("IsUIControl", NULL, (void*)ViewHandle__IsUIControl_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Measure", NULL, (void*)ViewHandle__Measure_fn, 0, false, ::g::Uno::Float2_typeof(), 2, ::g::Fuse::LayoutParams_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)ViewHandle__New1_fn, 0, true, type, 2, ::g::ObjC::Object_typeof(), ViewHandle__InputMode_typeof()),
        new uFunction(".ctor", NULL, (void*)ViewHandle__New2_fn, 0, true, type, 4, ::g::ObjC::Object_typeof(), ::g::Uno::Bool_typeof(), ViewHandle__InputMode_typeof(), ViewHandle__Invalidation_typeof()),
        new uFunction("RemoveChild", NULL, (void*)ViewHandle__RemoveChild_fn, 0, false, uVoid_typeof(), 1, type),
        new uFunction("SendToBack", NULL, (void*)ViewHandle__SendToBack_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("SetAccessibilityIdentifier", NULL, (void*)ViewHandle__SetAccessibilityIdentifier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetBackgroundColor", NULL, (void*)ViewHandle__SetBackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("SetClipToBounds", NULL, (void*)ViewHandle__SetClipToBounds_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("SetEnabled", NULL, (void*)ViewHandle__SetEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("SetHitTestEnabled", NULL, (void*)ViewHandle__SetHitTestEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("SetIsVisible", NULL, (void*)ViewHandle__SetIsVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("SetOpacity", NULL, (void*)ViewHandle__SetOpacity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SetSize", NULL, (void*)ViewHandle__SetSize1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("SetTransform", NULL, (void*)ViewHandle__SetTransform1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4x4_typeof()),
        new uFunction("UpdateViewRect", NULL, (void*)ViewHandle__UpdateViewRect_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()));
}

ViewHandle_type* ViewHandle_typeof()
{
    static uSStrong<ViewHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ViewHandle);
    options.TypeSize = sizeof(ViewHandle_type);
    type = (ViewHandle_type*)uClassType::New("Fuse.Controls.Native.ViewHandle", options);
    type->fp_build_ = ViewHandle_build;
    type->fp_Dispose = ViewHandle__Dispose_fn;
    type->fp_get_HitTestHandle = ViewHandle__get_HitTestHandle_fn;
    type->fp_OnSizeChanged = ViewHandle__OnSizeChanged_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ViewHandle__ToString_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ViewHandle__Dispose_fn;
    return type;
}

// public ViewHandle(ObjC.Object nativeHandle, [Fuse.Controls.Native.ViewHandle.InputMode inputMode])
void ViewHandle__ctor__fn(ViewHandle* __this, ::g::ObjC::Object* nativeHandle, int32_t* inputMode)
{
    __this->ctor_(nativeHandle, *inputMode);
}

// public ViewHandle(ObjC.Object nativeHandle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputMode], [Fuse.Controls.Native.ViewHandle.Invalidation invalidation])
void ViewHandle__ctor_1_fn(ViewHandle* __this, ::g::ObjC::Object* nativeHandle, bool* isLeafView, int32_t* inputMode, int32_t* invalidation)
{
    __this->ctor_1(nativeHandle, *isLeafView, *inputMode, *invalidation);
}

// public void BringToFront()
void ViewHandle__BringToFront_fn(ViewHandle* __this)
{
    __this->BringToFront();
}

// public virtual void Dispose()
void ViewHandle__Dispose_fn(ViewHandle* __this)
{
}

// public string Format()
void ViewHandle__Format_fn(ViewHandle* __this, uString** __retval)
{
    *__retval = __this->Format();
}

// private ObjC.Object GetHitTesthandle()
void ViewHandle__GetHitTesthandle_fn(ViewHandle* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->GetHitTesthandle();
}

// internal bool get_HandlesInput()
void ViewHandle__get_HandlesInput_fn(ViewHandle* __this, bool* __retval)
{
    *__retval = __this->HandlesInput();
}

// internal generated bool get_HitTestEnabled()
void ViewHandle__get_HitTestEnabled_fn(ViewHandle* __this, bool* __retval)
{
    *__retval = __this->HitTestEnabled();
}

// internal generated void set_HitTestEnabled(bool value)
void ViewHandle__set_HitTestEnabled_fn(ViewHandle* __this, bool* value)
{
    __this->HitTestEnabled(*value);
}

// public virtual ObjC.Object get_HitTestHandle()
void ViewHandle__get_HitTestHandle_fn(ViewHandle* __this, ::g::ObjC::Object** __retval)
{
    return *__retval = __this->GetHitTesthandle(), void();
}

// private void InitAnchorPoint()
void ViewHandle__InitAnchorPoint_fn(ViewHandle* __this)
{
    __this->InitAnchorPoint();
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle)
void ViewHandle__InsertChild_fn(ViewHandle* __this, ViewHandle* childHandle)
{
    __this->InsertChild(childHandle);
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle, int index)
void ViewHandle__InsertChild1_fn(ViewHandle* __this, ViewHandle* childHandle, int32_t* index)
{
    __this->InsertChild1(childHandle, *index);
}

// public void Invalidate()
void ViewHandle__Invalidate_fn(ViewHandle* __this)
{
    __this->Invalidate();
}

// internal generated bool get_IsEnabled()
void ViewHandle__get_IsEnabled_fn(ViewHandle* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// internal generated void set_IsEnabled(bool value)
void ViewHandle__set_IsEnabled_fn(ViewHandle* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public bool IsUIControl()
void ViewHandle__IsUIControl_fn(ViewHandle* __this, bool* __retval)
{
    *__retval = __this->IsUIControl();
}

// public float2 Measure(Fuse.LayoutParams lp, float density)
void ViewHandle__Measure_fn(ViewHandle* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Measure(*lp, *density);
}

// public ViewHandle New(ObjC.Object nativeHandle, [Fuse.Controls.Native.ViewHandle.InputMode inputMode])
void ViewHandle__New1_fn(::g::ObjC::Object* nativeHandle, int32_t* inputMode, ViewHandle** __retval)
{
    *__retval = ViewHandle::New1(nativeHandle, *inputMode);
}

// public ViewHandle New(ObjC.Object nativeHandle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputMode], [Fuse.Controls.Native.ViewHandle.Invalidation invalidation])
void ViewHandle__New2_fn(::g::ObjC::Object* nativeHandle, bool* isLeafView, int32_t* inputMode, int32_t* invalidation, ViewHandle** __retval)
{
    *__retval = ViewHandle::New2(nativeHandle, *isLeafView, *inputMode, *invalidation);
}

// protected internal void OnPositionChanged()
void ViewHandle__OnPositionChanged_fn(ViewHandle* __this)
{
    __this->OnPositionChanged();
}

// protected internal virtual void OnSizeChanged()
void ViewHandle__OnSizeChanged_fn(ViewHandle* __this)
{
}

// protected internal float2 get_Position()
void ViewHandle__get_Position_fn(ViewHandle* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// private void set_Position(float2 value)
void ViewHandle__set_Position_fn(ViewHandle* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public void RemoveChild(Fuse.Controls.Native.ViewHandle childHandle)
void ViewHandle__RemoveChild_fn(ViewHandle* __this, ViewHandle* childHandle)
{
    __this->RemoveChild(childHandle);
}

// public void SendToBack()
void ViewHandle__SendToBack_fn(ViewHandle* __this)
{
    __this->SendToBack();
}

// public void SetAccessibilityIdentifier(string name)
void ViewHandle__SetAccessibilityIdentifier_fn(ViewHandle* __this, uString* name)
{
    __this->SetAccessibilityIdentifier(name);
}

// private static void SetBackground(ObjC.Object handle, float r, float g, float b, float a)
void ViewHandle__SetBackground_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    ViewHandle::SetBackground(handle, *r, *g, *b, *a);
}

// public void SetBackgroundColor(float4 c)
void ViewHandle__SetBackgroundColor_fn(ViewHandle* __this, ::g::Uno::Float4* c)
{
    __this->SetBackgroundColor(*c);
}

// public void SetClipToBounds(bool clipToBounds)
void ViewHandle__SetClipToBounds_fn(ViewHandle* __this, bool* clipToBounds)
{
    __this->SetClipToBounds(*clipToBounds);
}

// public void SetEnabled(bool value)
void ViewHandle__SetEnabled_fn(ViewHandle* __this, bool* value)
{
    __this->SetEnabled(*value);
}

// private void SetEnabledImpl(bool value)
void ViewHandle__SetEnabledImpl_fn(ViewHandle* __this, bool* value)
{
    __this->SetEnabledImpl(*value);
}

// public void SetHitTestEnabled(bool value)
void ViewHandle__SetHitTestEnabled_fn(ViewHandle* __this, bool* value)
{
    __this->SetHitTestEnabled(*value);
}

// public void SetIsVisible(bool isVisible)
void ViewHandle__SetIsVisible_fn(ViewHandle* __this, bool* isVisible)
{
    __this->SetIsVisible(*isVisible);
}

// public void SetOpacity(float value)
void ViewHandle__SetOpacity_fn(ViewHandle* __this, float* value)
{
    __this->SetOpacity(*value);
}

// private void SetSize(float w, float h)
void ViewHandle__SetSize_fn(ViewHandle* __this, float* w, float* h)
{
    __this->SetSize(*w, *h);
}

// public void SetSize(float2 size)
void ViewHandle__SetSize1_fn(ViewHandle* __this, ::g::Uno::Float2* size)
{
    __this->SetSize1(*size);
}

// private void SetSizeAndBounds(float w, float h, float bx, float by, float bw, float bh)
void ViewHandle__SetSizeAndBounds_fn(ViewHandle* __this, float* w, float* h, float* bx, float* by, float* bw, float* bh)
{
    __this->SetSizeAndBounds(*w, *h, *bx, *by, *bw, *bh);
}

// internal void SetSizeAndVisualBounds(float2 size, Fuse.VisualBounds bounds)
void ViewHandle__SetSizeAndVisualBounds_fn(ViewHandle* __this, ::g::Uno::Float2* size, ::g::Fuse::VisualBounds* bounds)
{
    __this->SetSizeAndVisualBounds(*size, bounds);
}

// private void SetTransform(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
void ViewHandle__SetTransform_fn(ViewHandle* __this, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44)
{
    __this->SetTransform(*m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// public void SetTransform(float4x4 t)
void ViewHandle__SetTransform1_fn(ViewHandle* __this, ::g::Uno::Float4x4* t)
{
    __this->SetTransform1(*t);
}

// protected internal float2 get_Size()
void ViewHandle__get_Size_fn(ViewHandle* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// private void set_Size(float2 value)
void ViewHandle__set_Size_fn(ViewHandle* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// private void SizeThatFits(float w, float h, float& resW, float& resH)
void ViewHandle__SizeThatFits_fn(ViewHandle* __this, float* w, float* h, float* resW, float* resH)
{
    __this->SizeThatFits(*w, *h, resW, resH);
}

// public override sealed string ToString()
void ViewHandle__ToString_fn(ViewHandle* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Fuse.Controls.Native.ViewHandle("), __this->Format()), uString::Const(")")), void();
}

// public void UpdateViewRect(float4x4 transform, float2 size, float density)
void ViewHandle__UpdateViewRect_fn(ViewHandle* __this, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* size, float* density)
{
    __this->UpdateViewRect(*transform, *size, *density);
}

// public ViewHandle(ObjC.Object nativeHandle, [Fuse.Controls.Native.ViewHandle.InputMode inputMode]) [instance]
void ViewHandle::ctor_(::g::ObjC::Object* nativeHandle, int32_t inputMode)
{
    _position = ::g::Uno::Float2__New1(0.0f);
    _size = ::g::Uno::Float2__New1(0.0f);
    ctor_1(nativeHandle, false, inputMode, 0);
}

// public ViewHandle(ObjC.Object nativeHandle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputMode], [Fuse.Controls.Native.ViewHandle.Invalidation invalidation]) [instance]
void ViewHandle::ctor_1(::g::ObjC::Object* nativeHandle, bool isLeafView, int32_t inputMode, int32_t invalidation)
{
    _position = ::g::Uno::Float2__New1(0.0f);
    _size = ::g::Uno::Float2__New1(0.0f);
    NativeHandle = nativeHandle;
    IsLeafView = isLeafView;
    NeedsInvalidation = (invalidation == 1);
    _inputMode = inputMode;
    InitAnchorPoint();
    IsEnabled(true);
    HitTestEnabled(true);
}

// public void BringToFront() [instance]
void ViewHandle::BringToFront()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            auto parent = [view superview];
            if (parent != NULL)
            	[parent bringSubviewToFront:view];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public string Format() [instance]
uString* ViewHandle::Format()
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (id<UnoObject> _this) -> ::NSString*
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            return [view description];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]));
        
    }
    
}

// private ObjC.Object GetHitTesthandle() [instance]
::g::ObjC::Object* ViewHandle::GetHitTesthandle()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (id<UnoObject> _this) -> ::id
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            if ([view isKindOfClass:[ShapeView class]])
            {
            	auto sv = (ShapeView*)view;
            	return [sv childrenView];
            }
            else return view;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]));
        
    }
    
}

// internal bool get_HandlesInput() [instance]
bool ViewHandle::HandlesInput()
{
    return _inputMode == 1;
}

// internal generated bool get_HitTestEnabled() [instance]
bool ViewHandle::HitTestEnabled()
{
    return _HitTestEnabled;
}

// internal generated void set_HitTestEnabled(bool value) [instance]
void ViewHandle::HitTestEnabled(bool value)
{
    _HitTestEnabled = value;
}

// private void InitAnchorPoint() [instance]
void ViewHandle::InitAnchorPoint()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [[view layer] setAnchorPoint: { 0.0f, 0.0f }];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle) [instance]
void ViewHandle::InsertChild(ViewHandle* childHandle)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, id<UnoObject> childHandle) -> void
        {
            UIView* parent = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            UIView* child = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((childHandle).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [parent addSubview:child];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], [::StrongUnoObject strongUnoObjectWithUnoObject: childHandle]);
        
    }
    
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle, int index) [instance]
void ViewHandle::InsertChild1(ViewHandle* childHandle, int32_t index)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, id<UnoObject> childHandle, int32_t index) -> void
        {
            UIView* parent = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            UIView* child = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((childHandle).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [parent insertSubview:child atIndex:index];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], [::StrongUnoObject strongUnoObjectWithUnoObject: childHandle], index);
        
    }
    
}

// public void Invalidate() [instance]
void ViewHandle::Invalidate()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            if ([&]() -> bool { ::uForeignPool __foreignPool; return uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NeedsInvalidation; }())
            {
            	UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            	[view setNeedsDisplay];
            }
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// internal generated bool get_IsEnabled() [instance]
bool ViewHandle::IsEnabled()
{
    return _IsEnabled;
}

// internal generated void set_IsEnabled(bool value) [instance]
void ViewHandle::IsEnabled(bool value)
{
    _IsEnabled = value;
}

// public bool IsUIControl() [instance]
bool ViewHandle::IsUIControl()
{
    @autoreleasepool
    {
        return [] (id<UnoObject> _this) -> bool
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            return [view isKindOfClass:[UIControl class]];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public float2 Measure(Fuse.LayoutParams lp, float density) [instance]
::g::Uno::Float2 ViewHandle::Measure(::g::Fuse::LayoutParams lp, float density)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "Measure(Fuse.LayoutParams,float)");
    ::g::Uno::Float2 fillSize = lp.Size();

    if (!lp.HasX())
        fillSize.X = 1000000.0f;

    if (!lp.HasY())
        fillSize.Y = 1000000.0f;

    ::g::Uno::Float2 maxSize = ::g::Fuse::iOSDevice::CompensateForOrientation(fillSize);
    float resW;
    float resH;
    SizeThatFits(maxSize.X, maxSize.Y, &resW, &resH);
    ::g::Uno::Float2 result = ::g::Uno::Float2__New2(resW, resH);
    return ::g::Fuse::iOSDevice::CompensateForOrientation(result);
}

// protected internal void OnPositionChanged() [instance]
void ViewHandle::OnPositionChanged()
{
}

// protected internal float2 get_Position() [instance]
::g::Uno::Float2 ViewHandle::Position()
{
    return _position;
}

// private void set_Position(float2 value) [instance]
void ViewHandle::Position(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "set_Position(float2)");
    _position = value;
    OnPositionChanged();
}

// public void RemoveChild(Fuse.Controls.Native.ViewHandle childHandle) [instance]
void ViewHandle::RemoveChild(ViewHandle* childHandle)
{
    @autoreleasepool
    {
        [] (id<UnoObject> childHandle) -> void
        {
            UIView* child = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((childHandle).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [child removeFromSuperview];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: childHandle]);
        
    }
    
}

// public void SendToBack() [instance]
void ViewHandle::SendToBack()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            auto parent = [view superview];
            if (parent != NULL)
            	[parent sendSubviewToBack:view];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public void SetAccessibilityIdentifier(string name) [instance]
void ViewHandle::SetAccessibilityIdentifier(uString* name)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* name) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setAccessibilityIdentifier:name];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(name));
        
    }
    
}

// public void SetBackgroundColor(float4 c) [instance]
void ViewHandle::SetBackgroundColor(::g::Uno::Float4 c)
{
    ViewHandle::SetBackground(NativeHandle, c.X, c.Y, c.Z, c.W);
}

// public void SetClipToBounds(bool clipToBounds) [instance]
void ViewHandle::SetClipToBounds(bool clipToBounds)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, bool clipToBounds) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setClipsToBounds:clipToBounds];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], clipToBounds);
        
    }
    
}

// public void SetEnabled(bool value) [instance]
void ViewHandle::SetEnabled(bool value)
{
    IsEnabled(value);
    SetEnabledImpl(HitTestEnabled() && IsEnabled());
}

// private void SetEnabledImpl(bool value) [instance]
void ViewHandle::SetEnabledImpl(bool value)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, bool value) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setUserInteractionEnabled:value];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], value);
        
    }
    
}

// public void SetHitTestEnabled(bool value) [instance]
void ViewHandle::SetHitTestEnabled(bool value)
{
    HitTestEnabled(value);
    SetEnabledImpl(HitTestEnabled() && IsEnabled());
}

// public void SetIsVisible(bool isVisible) [instance]
void ViewHandle::SetIsVisible(bool isVisible)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, bool isVisible) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setHidden: !isVisible];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], isVisible);
        
    }
    
}

// public void SetOpacity(float value) [instance]
void ViewHandle::SetOpacity(float value)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float value) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setAlpha: (CGFloat)value];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], value);
        
    }
    
}

// private void SetSize(float w, float h) [instance]
void ViewHandle::SetSize(float w, float h)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float w, float h) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            auto t = [[view layer] transform];
            [[view layer] setTransform:CATransform3DIdentity];
            [view setCenter: CGPointZero];
            [view setFrame: { { 0.0f, 0.0f }, { w, h } } ];
            
            if ([[view superview] isKindOfClass:[UIScrollView class]])
            {
            	auto sv = (UIScrollView*)[view superview];
            	[sv setContentSize: CGSizeMake(w, h)];
            }
            
            [[view layer] setTransform:t];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], w, h);
        
    }
    
}

// public void SetSize(float2 size) [instance]
void ViewHandle::SetSize1(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "SetSize(float2)");
    SetSize(size.X, size.Y);
    Size(size);
}

// private void SetSizeAndBounds(float w, float h, float bx, float by, float bw, float bh) [instance]
void ViewHandle::SetSizeAndBounds(float w, float h, float bx, float by, float bw, float bh)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float w, float h, float bx, float by, float bw, float bh) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            auto t = [[view layer] transform];
            [[view layer] setTransform:CATransform3DIdentity];
            [view setCenter: CGPointZero];
            [view setFrame: { { 0.0f, 0.0f }, { w, h } } ];
            
            if ([[view superview] isKindOfClass:[UIScrollView class]])
            {
            	auto sv = (UIScrollView*)[view superview];
            	[sv setContentSize: CGSizeMake(w, h)];
            }
            
            if ([view isKindOfClass:[CanvasViewGroup class]])
            {
            	CanvasViewGroup* cvg = (CanvasViewGroup*)view;
            	[cvg setRenderBounds: CGRectMake(bx, by, bw, bh)];
            }
            
            [[view layer] setTransform:t];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], w, h, bx, by, bw, bh);
        
    }
    
}

// internal void SetSizeAndVisualBounds(float2 size, Fuse.VisualBounds bounds) [instance]
void ViewHandle::SetSizeAndVisualBounds(::g::Uno::Float2 size, ::g::Fuse::VisualBounds* bounds)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "SetSizeAndVisualBounds(float2,Fuse.VisualBounds)");
    ::g::Uno::Rect r = uPtr(bounds)->FlatRect();
    SetSizeAndBounds(size.X, size.Y, r.Position().X, r.Position().Y, r.Width(), r.Height());
    Size(size);
}

// private void SetTransform(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [instance]
void ViewHandle::SetTransform(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) -> void
        {
            CATransform3D transform = {
            	m11, m12, m13, m14,
            	m21, m22, m23, m24,
            	m31, m32, m33, m34,
            	m41, m42, m43, m44
            };
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [[view layer] setTransform:transform];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
        
    }
    
}

// public void SetTransform(float4x4 t) [instance]
void ViewHandle::SetTransform1(::g::Uno::Float4x4 t)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "SetTransform(float4x4)");
    SetTransform(t.M11, t.M12, t.M13, t.M14, t.M21, t.M22, t.M23, t.M24, t.M31, t.M32, t.M33, t.M34, t.M41, t.M42, t.M43, t.M44);
    Position(::g::Uno::Float2__New2(t.M41, t.M42));
}

// protected internal float2 get_Size() [instance]
::g::Uno::Float2 ViewHandle::Size()
{
    return _size;
}

// private void set_Size(float2 value) [instance]
void ViewHandle::Size(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "set_Size(float2)");
    _size = value;
    OnSizeChanged();
}

// private void SizeThatFits(float w, float h, float& resW, float& resH) [instance]
void ViewHandle::SizeThatFits(float w, float h, float* resW, float* resH)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float w, float h, float* resW, float* resH) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            CGSize size = { w, h };
            CGSize result = [view sizeThatFits:size];
            *resW = (float)result.width;
            *resH = (float)result.height;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], w, h, resW, resH);
        
    }
    
}

// public void UpdateViewRect(float4x4 transform, float2 size, float density) [instance]
void ViewHandle::UpdateViewRect(::g::Uno::Float4x4 transform, ::g::Uno::Float2 size, float density)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "UpdateViewRect(float4x4,float2,float)");
    SetTransform1(transform);
    SetSize1(size);
}

// public ViewHandle New(ObjC.Object nativeHandle, [Fuse.Controls.Native.ViewHandle.InputMode inputMode]) [static]
ViewHandle* ViewHandle::New1(::g::ObjC::Object* nativeHandle, int32_t inputMode)
{
    ViewHandle* obj1 = (ViewHandle*)uNew(ViewHandle_typeof());
    obj1->ctor_(nativeHandle, inputMode);
    return obj1;
}

// public ViewHandle New(ObjC.Object nativeHandle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputMode], [Fuse.Controls.Native.ViewHandle.Invalidation invalidation]) [static]
ViewHandle* ViewHandle::New2(::g::ObjC::Object* nativeHandle, bool isLeafView, int32_t inputMode, int32_t invalidation)
{
    ViewHandle* obj2 = (ViewHandle*)uNew(ViewHandle_typeof());
    obj2->ctor_1(nativeHandle, isLeafView, inputMode, invalidation);
    return obj2;
}

// private static void SetBackground(ObjC.Object handle, float r, float g, float b, float a) [static]
void ViewHandle::SetBackground(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            UIView* view = (UIView*)handle;
            [view setBackgroundColor:[UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a]];
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}
// }

}}}} // ::g::Fuse::Controls::Native
