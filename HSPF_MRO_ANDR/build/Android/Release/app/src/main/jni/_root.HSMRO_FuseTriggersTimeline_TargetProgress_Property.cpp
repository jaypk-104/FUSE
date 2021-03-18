// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_FuseTriggersTimeline_TargetProgress_Property.h>
#include <Fuse.Triggers.Timeline.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class HSMRO_FuseTriggersTimeline_TargetProgress_Property
// {
static void HSMRO_FuseTriggersTimeline_TargetProgress_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Triggers::Timeline_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Triggers.Timeline*/], offsetof(HSMRO_FuseTriggersTimeline_TargetProgress_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* HSMRO_FuseTriggersTimeline_TargetProgress_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_FuseTriggersTimeline_TargetProgress_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("HSMRO_FuseTriggersTimeline_TargetProgress_Property", options);
    type->fp_build_ = HSMRO_FuseTriggersTimeline_TargetProgress_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))HSMRO_FuseTriggersTimeline_TargetProgress_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))HSMRO_FuseTriggersTimeline_TargetProgress_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))HSMRO_FuseTriggersTimeline_TargetProgress_Property__Set1_fn;
    return type;
}

// public HSMRO_FuseTriggersTimeline_TargetProgress_Property(Fuse.Triggers.Timeline obj, Uno.UX.Selector name)
void HSMRO_FuseTriggersTimeline_TargetProgress_Property__ctor_3_fn(HSMRO_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed double Get(Uno.UX.PropertyObject obj)
void HSMRO_FuseTriggersTimeline_TargetProgress_Property__Get1_fn(HSMRO_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::Timeline*>(obj, ::TYPES[0/*Fuse.Triggers.Timeline*/]))->TargetProgress(), void();
}

// public HSMRO_FuseTriggersTimeline_TargetProgress_Property New(Fuse.Triggers.Timeline obj, Uno.UX.Selector name)
void HSMRO_FuseTriggersTimeline_TargetProgress_Property__New1_fn(::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseTriggersTimeline_TargetProgress_Property** __retval)
{
    *__retval = HSMRO_FuseTriggersTimeline_TargetProgress_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void HSMRO_FuseTriggersTimeline_TargetProgress_Property__get_Object_fn(HSMRO_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, double v, Uno.UX.IPropertyListener origin)
void HSMRO_FuseTriggersTimeline_TargetProgress_Property__Set1_fn(HSMRO_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin)
{
    double v_ = *v;
    uPtr(uCast< ::g::Fuse::Triggers::Timeline*>(obj, ::TYPES[0/*Fuse.Triggers.Timeline*/]))->TargetProgress(v_);
}

// public HSMRO_FuseTriggersTimeline_TargetProgress_Property(Fuse.Triggers.Timeline obj, Uno.UX.Selector name) [instance]
void HSMRO_FuseTriggersTimeline_TargetProgress_Property::ctor_3(::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public HSMRO_FuseTriggersTimeline_TargetProgress_Property New(Fuse.Triggers.Timeline obj, Uno.UX.Selector name) [static]
HSMRO_FuseTriggersTimeline_TargetProgress_Property* HSMRO_FuseTriggersTimeline_TargetProgress_Property::New1(::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector name)
{
    HSMRO_FuseTriggersTimeline_TargetProgress_Property* obj1 = (HSMRO_FuseTriggersTimeline_TargetProgress_Property*)uNew(HSMRO_FuseTriggersTimeline_TargetProgress_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
