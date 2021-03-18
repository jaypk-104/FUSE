// This file was generated based on '.uno/ux15/DropdownSelectedItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct DropdownSelectedItem;}

namespace g{

// public partial sealed class DropdownSelectedItem
// {
::g::Fuse::Controls::Panel_type* DropdownSelectedItem_typeof();
void DropdownSelectedItem__get_BackgroundColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush** __retval);
void DropdownSelectedItem__set_BackgroundColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush* value);
void DropdownSelectedItem__get_BorderColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush** __retval);
void DropdownSelectedItem__set_BorderColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush* value);
void DropdownSelectedItem__get_FontSize_fn(DropdownSelectedItem* __this, float* __retval);
void DropdownSelectedItem__set_FontSize_fn(DropdownSelectedItem* __this, float* value);
void DropdownSelectedItem__SetBackgroundColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin);
void DropdownSelectedItem__SetBorderColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin);
void DropdownSelectedItem__SetFontSize_fn(DropdownSelectedItem* __this, float* value, uObject* origin);
void DropdownSelectedItem__SetText_fn(DropdownSelectedItem* __this, uString* value, uObject* origin);
void DropdownSelectedItem__SetTextColor_fn(DropdownSelectedItem* __this, ::g::Uno::Float4* value, uObject* origin);
void DropdownSelectedItem__get_Text_fn(DropdownSelectedItem* __this, uString** __retval);
void DropdownSelectedItem__set_Text_fn(DropdownSelectedItem* __this, uString* value);
void DropdownSelectedItem__get_TextColor_fn(DropdownSelectedItem* __this, ::g::Uno::Float4* __retval);
void DropdownSelectedItem__set_TextColor_fn(DropdownSelectedItem* __this, ::g::Uno::Float4* value);

struct DropdownSelectedItem : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Text;
    uStrong< ::g::Fuse::Drawing::Brush*> _field_BackgroundColor;
    uStrong< ::g::Fuse::Drawing::Brush*> _field_BorderColor;
    float _field_FontSize;
    ::g::Uno::Float4 _field_TextColor;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DropdownSelectedItem_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return DropdownSelectedItem_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return DropdownSelectedItem_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return DropdownSelectedItem_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return DropdownSelectedItem_typeof()->Init(), __selector4_; }

    ::g::Fuse::Drawing::Brush* BackgroundColor();
    void BackgroundColor(::g::Fuse::Drawing::Brush* value);
    ::g::Fuse::Drawing::Brush* BorderColor();
    void BorderColor(::g::Fuse::Drawing::Brush* value);
    float FontSize();
    void FontSize(float value);
    void SetBackgroundColor(::g::Fuse::Drawing::Brush* value, uObject* origin);
    void SetBorderColor(::g::Fuse::Drawing::Brush* value, uObject* origin);
    void SetFontSize(float value, uObject* origin);
    void SetText(uString* value, uObject* origin);
    void SetTextColor(::g::Uno::Float4 value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    ::g::Uno::Float4 TextColor();
    void TextColor(::g::Uno::Float4 value);
};
// }

} // ::g
