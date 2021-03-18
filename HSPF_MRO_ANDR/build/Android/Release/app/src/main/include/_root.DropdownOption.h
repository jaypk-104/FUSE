// This file was generated based on '.uno/ux15/DropdownOption.g.uno'.
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
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct DropdownOption;}

namespace g{

// public partial sealed class DropdownOption
// {
::g::Fuse::Controls::Panel_type* DropdownOption_typeof();
void DropdownOption__ctor_7_fn(DropdownOption* __this);
void DropdownOption__get_BackgroundColor_fn(DropdownOption* __this, ::g::Fuse::Drawing::Brush** __retval);
void DropdownOption__set_BackgroundColor_fn(DropdownOption* __this, ::g::Fuse::Drawing::Brush* value);
void DropdownOption__get_BorderColor_fn(DropdownOption* __this, ::g::Fuse::Drawing::Brush** __retval);
void DropdownOption__set_BorderColor_fn(DropdownOption* __this, ::g::Fuse::Drawing::Brush* value);
void DropdownOption__get_FontSize_fn(DropdownOption* __this, float* __retval);
void DropdownOption__set_FontSize_fn(DropdownOption* __this, float* value);
void DropdownOption__InitializeUX_fn(DropdownOption* __this);
void DropdownOption__New4_fn(DropdownOption** __retval);
void DropdownOption__SetBackgroundColor_fn(DropdownOption* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin);
void DropdownOption__SetBorderColor_fn(DropdownOption* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin);
void DropdownOption__SetFontSize_fn(DropdownOption* __this, float* value, uObject* origin);
void DropdownOption__SetText_fn(DropdownOption* __this, uString* value, uObject* origin);
void DropdownOption__SetTextColor_fn(DropdownOption* __this, ::g::Uno::Float4* value, uObject* origin);
void DropdownOption__get_Text_fn(DropdownOption* __this, uString** __retval);
void DropdownOption__set_Text_fn(DropdownOption* __this, uString* value);
void DropdownOption__get_TextColor_fn(DropdownOption* __this, ::g::Uno::Float4* __retval);
void DropdownOption__set_TextColor_fn(DropdownOption* __this, ::g::Uno::Float4* value);

struct DropdownOption : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Text;
    uStrong< ::g::Fuse::Drawing::Brush*> _field_BackgroundColor;
    uStrong< ::g::Fuse::Drawing::Brush*> _field_BorderColor;
    float _field_FontSize;
    ::g::Uno::Float4 _field_TextColor;
    uStrong< ::g::Uno::UX::Property1*> bgCol_Fill_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Brush_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_FontSize_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Color_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> bgCol;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DropdownOption_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return DropdownOption_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return DropdownOption_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return DropdownOption_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return DropdownOption_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return DropdownOption_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return DropdownOption_typeof()->Init(), __selector6_; }

    void ctor_7();
    ::g::Fuse::Drawing::Brush* BackgroundColor();
    void BackgroundColor(::g::Fuse::Drawing::Brush* value);
    ::g::Fuse::Drawing::Brush* BorderColor();
    void BorderColor(::g::Fuse::Drawing::Brush* value);
    float FontSize();
    void FontSize(float value);
    void InitializeUX();
    void SetBackgroundColor(::g::Fuse::Drawing::Brush* value, uObject* origin);
    void SetBorderColor(::g::Fuse::Drawing::Brush* value, uObject* origin);
    void SetFontSize(float value, uObject* origin);
    void SetText(uString* value, uObject* origin);
    void SetTextColor(::g::Uno::Float4 value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    ::g::Uno::Float4 TextColor();
    void TextColor(::g::Uno::Float4 value);
    static DropdownOption* New4();
};
// }

} // ::g
