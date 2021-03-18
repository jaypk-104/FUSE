// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/CogWheelReload.g.uno.
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
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{struct Rotation;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct BigCog;}
namespace g{struct CogWheelReload;}
namespace g{struct SmallCog;}

namespace g{

// public partial sealed class CogWheelReload
// {
::g::Fuse::Controls::Panel_type* CogWheelReload_typeof();
void CogWheelReload__ctor_7_fn(CogWheelReload* __this);
void CogWheelReload__InitializeUX_fn(CogWheelReload* __this);
void CogWheelReload__New4_fn(CogWheelReload** __retval);

struct CogWheelReload : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::Property1*> cogPanel_MinHeight_inst;
    uStrong< ::g::Uno::UX::Property1*> cogPanel_Height_inst;
    uStrong< ::g::Uno::UX::Property1*> cog1Rotation_Degrees_inst;
    uStrong< ::g::Uno::UX::Property1*> cog2Rotation_Degrees_inst;
    uStrong< ::g::Uno::UX::Property1*> cog3Rotation_Degrees_inst;
    uStrong< ::g::Uno::UX::Property1*> cog4Rotation_Degrees_inst;
    uStrong< ::g::Uno::UX::Property1*> cog5Rotation_Degrees_inst;
    uStrong< ::g::Uno::UX::Property1*> cog2Trans_Y_inst;
    uStrong< ::g::Uno::UX::Property1*> cog3Trans_Y_inst;
    uStrong< ::g::Uno::UX::Property1*> cog4Trans_Y_inst;
    uStrong< ::g::Uno::UX::Property1*> cog5Trans_Y_inst;
    uStrong< ::g::Uno::UX::Property1*> retainSpace_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_IsLoading_inst;
    uStrong< ::g::Fuse::Controls::Panel*> cogPanel;
    uStrong< ::g::SmallCog*> cog1;
    uStrong< ::g::Fuse::Rotation*> cog1Rotation;
    uStrong< ::g::BigCog*> cog2;
    uStrong< ::g::Fuse::Translation*> cog2Trans;
    uStrong< ::g::Fuse::Rotation*> cog2Rotation;
    uStrong< ::g::BigCog*> cog3;
    uStrong< ::g::Fuse::Translation*> cog3Trans;
    uStrong< ::g::Fuse::Rotation*> cog3Rotation;
    uStrong< ::g::BigCog*> cog4;
    uStrong< ::g::Fuse::Translation*> cog4Trans;
    uStrong< ::g::Fuse::Rotation*> cog4Rotation;
    uStrong< ::g::BigCog*> cog5;
    uStrong< ::g::Fuse::Translation*> cog5Trans;
    uStrong< ::g::Fuse::Rotation*> cog5Rotation;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> retainSpace;
    uStrong< ::g::Fuse::Triggers::Timeline*> moveCogsIntoPlace;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CogWheelReload_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return CogWheelReload_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return CogWheelReload_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return CogWheelReload_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return CogWheelReload_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return CogWheelReload_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return CogWheelReload_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return CogWheelReload_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return CogWheelReload_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return CogWheelReload_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return CogWheelReload_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return CogWheelReload_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return CogWheelReload_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return CogWheelReload_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return CogWheelReload_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return CogWheelReload_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return CogWheelReload_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return CogWheelReload_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return CogWheelReload_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return CogWheelReload_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return CogWheelReload_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return CogWheelReload_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return CogWheelReload_typeof()->Init(), __selector22_; }

    void ctor_7();
    void InitializeUX();
    static CogWheelReload* New4();
};
// }

} // ::g
