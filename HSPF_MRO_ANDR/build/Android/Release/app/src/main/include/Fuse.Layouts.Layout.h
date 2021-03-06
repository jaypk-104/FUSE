// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.12.0/Layouts/Layout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Controls{struct LayoutControl;}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public abstract class Layout
// {
struct Layout_type : uType
{
    ::g::Fuse::ISourceLocation interface0;
    void(*fp_ArrangePaddingBox)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*);
    void(*fp_GetContentSize)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*);
    void(*fp_IsMarginBoxDependent)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, int32_t*);
    void(*fp_OnRooted)(::g::Fuse::Layouts::Layout*);
    void(*fp_OnUnrooted)(::g::Fuse::Layouts::Layout*);
};

Layout_type* Layout_typeof();
void Layout__ctor_1_fn(Layout* __this);
void Layout__AdjustAlignBox_fn(::g::Fuse::Visual* node, ::g::Uno::Float2* sz, ::g::Uno::Float4* box, int32_t* align);
void Layout__AffectsLayout_fn(Layout* __this, ::g::Fuse::Node* n, bool* __retval);
void Layout__ArrangeMarginBoxSpecial_fn(Layout* __this, ::g::Fuse::Node* n, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp, bool* __retval);
void Layout__FuseISourceLocationget_SourceNearest_fn(Layout* __this, uObject** __retval);
void Layout__GetFillPadding_fn(::g::Fuse::Visual* n, bool* __retval);
void Layout__InvalidateAncestorLayout_fn(::g::Fuse::Visual* child);
void Layout__InvalidateLayout_fn(Layout* __this);
void Layout__IsMarginBoxDependent_fn(Layout* __this, ::g::Fuse::Visual* child, int32_t* __retval);
void Layout__OnRooted_fn(Layout* __this);
void Layout__OnUnrooted_fn(Layout* __this);
void Layout__Rooted_fn(Layout* __this, ::g::Fuse::Controls::LayoutControl* element);
void Layout__SimpleOff_fn(float* sz, ::g::Uno::Float2* range, int32_t* align, float* __retval);
void Layout__Snap_fn(Layout* __this, float* p, float* __retval);
void Layout__Snap1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Layout__get_SnapToPixels_fn(Layout* __this, bool* __retval);
void Layout__SnapUp_fn(Layout* __this, float* p, float* __retval);
void Layout__SnapUp1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Layout__get_SourceFileName_fn(Layout* __this, uString** __retval);
void Layout__set_SourceFileName_fn(Layout* __this, uString* value);
void Layout__get_SourceLineNumber_fn(Layout* __this, int32_t* __retval);
void Layout__set_SourceLineNumber_fn(Layout* __this, int32_t* value);
void Layout__Unrooted_fn(Layout* __this, ::g::Fuse::Controls::LayoutControl* element);

struct Layout : ::g::Uno::UX::PropertyObject
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _fillPaddingProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _fillPaddingProperty() { return Layout_typeof()->Init(), _fillPaddingProperty_; }
    uStrong< ::g::Fuse::Controls::LayoutControl*> Container;
    uStrong<uString*> _SourceFileName;
    int32_t _SourceLineNumber;

    void ctor_1();
    bool AffectsLayout(::g::Fuse::Node* n);
    bool ArrangeMarginBoxSpecial(::g::Fuse::Node* n, ::g::Uno::Float4 padding, ::g::Fuse::LayoutParams lp);
    void ArrangePaddingBox(::g::Fuse::Visual* elementOwner, ::g::Uno::Float4 padding, ::g::Fuse::LayoutParams lp);
    ::g::Uno::Float2 GetContentSize(::g::Fuse::Visual* elementOwner, ::g::Fuse::LayoutParams lp);
    void InvalidateLayout();
    int32_t IsMarginBoxDependent(::g::Fuse::Visual* child) { int32_t __retval; return (((Layout_type*)__type)->fp_IsMarginBoxDependent)(this, child, &__retval), __retval; }
    void OnRooted() { (((Layout_type*)__type)->fp_OnRooted)(this); }
    void OnUnrooted() { (((Layout_type*)__type)->fp_OnUnrooted)(this); }
    void Rooted(::g::Fuse::Controls::LayoutControl* element);
    float Snap(float p);
    ::g::Uno::Float2 Snap1(::g::Uno::Float2 p);
    bool SnapToPixels();
    float SnapUp(float p);
    ::g::Uno::Float2 SnapUp1(::g::Uno::Float2 p);
    uString* SourceFileName();
    void SourceFileName(uString* value);
    int32_t SourceLineNumber();
    void SourceLineNumber(int32_t value);
    void Unrooted(::g::Fuse::Controls::LayoutControl* element);
    static void AdjustAlignBox(::g::Fuse::Visual* node, ::g::Uno::Float2 sz, ::g::Uno::Float4 box, int32_t align);
    static bool GetFillPadding(::g::Fuse::Visual* n);
    static void InvalidateAncestorLayout(::g::Fuse::Visual* child);
    static int32_t IsMarginBoxDependent(Layout* __this, ::g::Fuse::Visual* child) { int32_t __retval; return Layout__IsMarginBoxDependent_fn(__this, child, &__retval), __retval; }
    static void OnRooted(Layout* __this) { Layout__OnRooted_fn(__this); }
    static void OnUnrooted(Layout* __this) { Layout__OnUnrooted_fn(__this); }
    static float SimpleOff(float sz, ::g::Uno::Float2 range, int32_t align);
};

}}} // ::g::Fuse::Layouts

#include <Fuse.LayoutParams.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Layouts{

inline void Layout::ArrangePaddingBox(::g::Fuse::Visual* elementOwner, ::g::Uno::Float4 padding, ::g::Fuse::LayoutParams lp) { (((Layout_type*)__type)->fp_ArrangePaddingBox)(this, elementOwner, &padding, &lp); }
inline ::g::Uno::Float2 Layout::GetContentSize(::g::Fuse::Visual* elementOwner, ::g::Fuse::LayoutParams lp) { ::g::Uno::Float2 __retval; return (((Layout_type*)__type)->fp_GetContentSize)(this, elementOwner, &lp, &__retval), __retval; }
// }

}}} // ::g::Fuse::Layouts
