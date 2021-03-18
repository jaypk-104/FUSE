// This file was generated based on '.uno/ux15/ListType_inq.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
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
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ListType_inq;}

namespace g{

// public partial sealed class ListType_inq
// {
::g::Fuse::Controls::Panel_type* ListType_inq_typeof();
void ListType_inq__ctor_8_fn(ListType_inq* __this);
void ListType_inq__InitializeUX_fn(ListType_inq* __this);
void ListType_inq__New5_fn(ListType_inq** __retval);
void ListType_inq__SetUSR_ID_fn(ListType_inq* __this, uString* value, uObject* origin);
void ListType_inq__SetUSR_NM_fn(ListType_inq* __this, uString* value, uObject* origin);
void ListType_inq__get_USR_ID_fn(ListType_inq* __this, uString** __retval);
void ListType_inq__set_USR_ID_fn(ListType_inq* __this, uString* value);
void ListType_inq__get_USR_NM_fn(ListType_inq* __this, uString** __retval);
void ListType_inq__set_USR_NM_fn(ListType_inq* __this, uString* value);

struct ListType_inq : ::g::Fuse::Controls::DockPanel
{
    uStrong<uString*> _field_USR_NM;
    uStrong<uString*> _field_USR_ID;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> chk_line_usr_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> theBack_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> theCheck_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> theBack;
    uStrong< ::g::Fuse::Controls::Image*> theCheck;
    uStrong< ::g::Fuse::Controls::Text*> chk_line_usr;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ListType_inq_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ListType_inq_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ListType_inq_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ListType_inq_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ListType_inq_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return ListType_inq_typeof()->Init(), __selector5_; }

    void ctor_8();
    void InitializeUX();
    void SetUSR_ID(uString* value, uObject* origin);
    void SetUSR_NM(uString* value, uObject* origin);
    uString* USR_ID();
    void USR_ID(uString* value);
    uString* USR_NM();
    void USR_NM(uString* value);
    static ListType_inq* New5();
};
// }

} // ::g
