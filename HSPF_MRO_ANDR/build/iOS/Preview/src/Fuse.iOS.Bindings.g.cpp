// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.iOS.Bindings.CGColorSpaceRef.h>
#include <Fuse.iOS.Bindings.CGContextRef.h>
#include <Uno.IntPtr.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// /usr/local/share/uno/Packages/Fuse.iOS.TextRenderer/1.12.0/TextRenderer.uno
// ---------------------------------------------------------------------------

// internal extern struct CGColorSpaceRef
// {
static void CGColorSpaceRef_build(uType* type)
{
}

uStructType* CGColorSpaceRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::CGColorSpaceRef);
    options.ValueSize = sizeof(::CGColorSpaceRef);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.iOS.Bindings.CGColorSpaceRef", options);
    type->fp_build_ = CGColorSpaceRef_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS.TextRenderer/1.12.0/TextRenderer.uno
// ---------------------------------------------------------------------------

// internal extern struct CGContextRef
// {
static void CGContextRef_build(uType* type)
{
}

uStructType* CGContextRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::CGContextRef);
    options.ValueSize = sizeof(::CGContextRef);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.iOS.Bindings.CGContextRef", options);
    type->fp_build_ = CGContextRef_build;
    return type;
}
// }

}}}} // ::g::Fuse::iOS::Bindings
