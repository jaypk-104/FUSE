// This file was generated based on '.uno/ux15/DropdownMenu.g.uno'.
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
namespace g{struct DropdownMenu;}

namespace g{

// public partial sealed class DropdownMenu
// {
::g::Fuse::Controls::Panel_type* DropdownMenu_typeof();
void DropdownMenu__get_BackgroundColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush** __retval);
void DropdownMenu__set_BackgroundColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value);
void DropdownMenu__get_BorderColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush** __retval);
void DropdownMenu__set_BorderColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value);
void DropdownMenu__get_FontSize_fn(DropdownMenu* __this, float* __retval);
void DropdownMenu__set_FontSize_fn(DropdownMenu* __this, float* value);
void DropdownMenu__get_ListItems_fn(DropdownMenu* __this, uObject** __retval);
void DropdownMenu__set_ListItems_fn(DropdownMenu* __this, uObject* value);
void DropdownMenu__get_Selected_fn(DropdownMenu* __this, uString** __retval);
void DropdownMenu__set_Selected_fn(DropdownMenu* __this, uString* value);
void DropdownMenu__SetBackgroundColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin);
void DropdownMenu__SetBorderColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin);
void DropdownMenu__SetFontSize_fn(DropdownMenu* __this, float* value, uObject* origin);
void DropdownMenu__SetListItems_fn(DropdownMenu* __this, uObject* value, uObject* origin);
void DropdownMenu__SetSelected_fn(DropdownMenu* __this, uString* value, uObject* origin);
void DropdownMenu__SetTextColor_fn(DropdownMenu* __this, ::g::Uno::Float4* value, uObject* origin);
void DropdownMenu__get_TextColor_fn(DropdownMenu* __this, ::g::Uno::Float4* __retval);
void DropdownMenu__set_TextColor_fn(DropdownMenu* __this, ::g::Uno::Float4* value);

struct DropdownMenu : ::g::Fuse::Controls::Panel
{
    uStrong<uObject*> _field_ListItems;
    uStrong<uString*> _field_Selected;
    ::g::Uno::Float4 _field_TextColor;
    uStrong< ::g::Fuse::Drawing::Brush*> _field_BackgroundColor;
    uStrong< ::g::Fuse::Drawing::Brush*> _field_BorderColor;
    float _field_FontSize;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return DropdownMenu_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DropdownMenu_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return DropdownMenu_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return DropdownMenu_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return DropdownMenu_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return DropdownMenu_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return DropdownMenu_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return DropdownMenu_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return DropdownMenu_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return DropdownMenu_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return DropdownMenu_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return DropdownMenu_typeof()->Init(), __selector10_; }

    ::g::Fuse::Drawing::Brush* BackgroundColor();
    void BackgroundColor(::g::Fuse::Drawing::Brush* value);
    ::g::Fuse::Drawing::Brush* BorderColor();
    void BorderColor(::g::Fuse::Drawing::Brush* value);
    float FontSize();
    void FontSize(float value);
    uObject* ListItems();
    void ListItems(uObject* value);
    uString* Selected();
    void Selected(uString* value);
    void SetBackgroundColor(::g::Fuse::Drawing::Brush* value, uObject* origin);
    void SetBorderColor(::g::Fuse::Drawing::Brush* value, uObject* origin);
    void SetFontSize(float value, uObject* origin);
    void SetListItems(uObject* value, uObject* origin);
    void SetSelected(uString* value, uObject* origin);
    void SetTextColor(::g::Uno::Float4 value, uObject* origin);
    ::g::Uno::Float4 TextColor();
    void TextColor(::g::Uno::Float4 value);
};
// }

} // ::g
