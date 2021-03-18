// This file was generated based on '.uno/ux15/MonthView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MonthView;}
namespace g{struct MonthView__Template2;}

namespace g{

// public partial sealed class MonthView.Template2
// {
::g::Uno::UX::Template_type* MonthView__Template2_typeof();
void MonthView__Template2__ctor_1_fn(MonthView__Template2* __this, ::g::MonthView* parent, ::g::MonthView* parentInstance);
void MonthView__Template2__New1_fn(MonthView__Template2* __this, uObject** __retval);
void MonthView__Template2__New2_fn(::g::MonthView* parent, ::g::MonthView* parentInstance, MonthView__Template2** __retval);

struct MonthView__Template2 : ::g::Uno::UX::Template
{
    uWeak< ::g::MonthView*> __parent1;
    uWeak< ::g::MonthView*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> here_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb5;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MonthView__Template2_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MonthView__Template2_typeof()->Init(), __selector1_; }

    void ctor_1(::g::MonthView* parent, ::g::MonthView* parentInstance);
    static MonthView__Template2* New2(::g::MonthView* parent, ::g::MonthView* parentInstance);
};
// }

} // ::g
