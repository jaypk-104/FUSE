// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.12.0/.uno/package.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLProgram;}}}}}}
namespace g{struct FuseNodes_bundle;}

namespace g{

// public static generated class FuseNodes_bundle
// {
uClassType* FuseNodes_bundle_typeof();

struct FuseNodes_bundle : uObject
{
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> DrawRectVisualizer5cbb2c45_;
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>& DrawRectVisualizer5cbb2c45() { return FuseNodes_bundle_typeof()->Init(), DrawRectVisualizer5cbb2c45_; }
};
// }

} // ::g
