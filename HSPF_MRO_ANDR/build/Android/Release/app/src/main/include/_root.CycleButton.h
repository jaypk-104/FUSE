// This file was generated based on '.uno/ux15/CycleButton.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Drawing.IDrawObjectWatcherFeedback.h>
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CycleButton;}

namespace g{

// public partial sealed class CycleButton
// {
::g::Fuse::Controls::Shape_type* CycleButton_typeof();
void CycleButton__ctor_8_fn(CycleButton* __this);
void CycleButton__get_CurrentMode_fn(CycleButton* __this, int32_t* __retval);
void CycleButton__set_CurrentMode_fn(CycleButton* __this, int32_t* value);
void CycleButton__InitializeUX_fn(CycleButton* __this);
void CycleButton__get_Modes_fn(CycleButton* __this, uObject** __retval);
void CycleButton__set_Modes_fn(CycleButton* __this, uObject* value);
void CycleButton__New4_fn(CycleButton** __retval);
void CycleButton__SetCurrentMode_fn(CycleButton* __this, int32_t* value, uObject* origin);
void CycleButton__SetModes_fn(CycleButton* __this, uObject* value, uObject* origin);

struct CycleButton : ::g::Fuse::Controls::Rectangle
{
    uStrong<uObject*> _field_Modes;
    int32_t _field_CurrentMode;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Modes_inst;
    uStrong< ::g::Uno::UX::Property1*> this_CurrentMode_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb100;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return CycleButton_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CycleButton_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return CycleButton_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return CycleButton_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return CycleButton_typeof()->Init(), __selector3_; }

    void ctor_8();
    int32_t CurrentMode();
    void CurrentMode(int32_t value);
    void InitializeUX();
    uObject* Modes();
    void Modes(uObject* value);
    void SetCurrentMode(int32_t value, uObject* origin);
    void SetModes(uObject* value, uObject* origin);
    static CycleButton* New4();
};
// }

} // ::g
