// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.12.0/.uno/package.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLProgram;}}}}}}
namespace g{struct FuseText_bundle;}

namespace g{

// public static generated class FuseText_bundle
// {
uClassType* FuseText_bundle_typeof();

struct FuseText_bundle : uObject
{
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Renderer0b7f7722_;
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>& Renderer0b7f7722() { return FuseText_bundle_typeof()->Init(), Renderer0b7f7722_; }
};
// }

} // ::g
