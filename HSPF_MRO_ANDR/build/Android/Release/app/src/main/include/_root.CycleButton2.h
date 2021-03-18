// This file was generated based on '.uno/ux15/CycleButton2.g.uno'.
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CycleButton2;}

namespace g{

// public partial sealed class CycleButton2
// {
::g::Fuse::Controls::Shape_type* CycleButton2_typeof();
void CycleButton2__ctor_8_fn(CycleButton2* __this);
void CycleButton2__get_CurrentType_fn(CycleButton2* __this, int32_t* __retval);
void CycleButton2__set_CurrentType_fn(CycleButton2* __this, int32_t* value);
void CycleButton2__InitializeUX_fn(CycleButton2* __this);
void CycleButton2__New4_fn(CycleButton2** __retval);
void CycleButton2__SetCurrentType_fn(CycleButton2* __this, int32_t* value, uObject* origin);
void CycleButton2__SetTypes_fn(CycleButton2* __this, uObject* value, uObject* origin);
void CycleButton2__get_Types_fn(CycleButton2* __this, uObject** __retval);
void CycleButton2__set_Types_fn(CycleButton2* __this, uObject* value);

struct CycleButton2 : ::g::Fuse::Controls::Rectangle
{
    uStrong<uObject*> _field_Types;
    int32_t _field_CurrentType;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Types_inst;
    uStrong< ::g::Uno::UX::Property1*> this_CurrentType_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb101;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return CycleButton2_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CycleButton2_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return CycleButton2_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return CycleButton2_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return CycleButton2_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return CycleButton2_typeof()->Init(), __selector4_; }

    void ctor_8();
    int32_t CurrentType();
    void CurrentType(int32_t value);
    void InitializeUX();
    void SetCurrentType(int32_t value, uObject* origin);
    void SetTypes(uObject* value, uObject* origin);
    uObject* Types();
    void Types(uObject* value);
    static CycleButton2* New4();
};
// }

} // ::g
