// This file was generated based on '.uno/ux15/SubPage_appr_inq.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
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
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Confirm;}
namespace g{struct Confirm_msg;}
namespace g{struct Confirm_return;}
namespace g{struct SubPage_appr_inq;}

namespace g{

// public partial sealed class SubPage_appr_inq
// {
::g::Fuse::Controls::Panel_type* SubPage_appr_inq_typeof();
void SubPage_appr_inq__ctor_8_fn(SubPage_appr_inq* __this, ::g::Fuse::Navigation::Router* router1);
void SubPage_appr_inq__InitializeUX_fn(SubPage_appr_inq* __this);
void SubPage_appr_inq__New5_fn(::g::Fuse::Navigation::Router* router1, SubPage_appr_inq** __retval);

struct SubPage_appr_inq : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> confirmAbandon3_Show_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> confirmAbandon1_Show_inst;
    uStrong< ::g::Uno::UX::Property1*> temp10_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> confirmAbandon2_Show_inst;
    uStrong< ::g::Uno::UX::Property1*> temp11_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> confirmAbandon4_Show_inst;
    uStrong< ::g::Uno::UX::Property1*> temp12_Value_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb20;
    uStrong< ::g::Confirm_msg*> confirmAbandon1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb21;
    uStrong< ::g::Confirm*> confirmAbandon2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb22;
    uStrong< ::g::Confirm_return*> confirmAbandon3;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb23;
    uStrong< ::g::Confirm*> confirmAbandon4;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb24;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return SubPage_appr_inq_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return SubPage_appr_inq_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return SubPage_appr_inq_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return SubPage_appr_inq_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return SubPage_appr_inq_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return SubPage_appr_inq_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return SubPage_appr_inq_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return SubPage_appr_inq_typeof()->Init(), __selector6_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static SubPage_appr_inq* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
