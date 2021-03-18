// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Confirm_return_inq.h>
#include <_root.HSMRO_Confirm_return_inq_Show_Property.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class HSMRO_Confirm_return_inq_Show_Property
// {
static void HSMRO_Confirm_return_inq_Show_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Confirm_return_inq_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Confirm_return_inq*/], offsetof(HSMRO_Confirm_return_inq_Show_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* HSMRO_Confirm_return_inq_Show_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_Confirm_return_inq_Show_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("HSMRO_Confirm_return_inq_Show_Property", options);
    type->fp_build_ = HSMRO_Confirm_return_inq_Show_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))HSMRO_Confirm_return_inq_Show_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))HSMRO_Confirm_return_inq_Show_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))HSMRO_Confirm_return_inq_Show_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))HSMRO_Confirm_return_inq_Show_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public HSMRO_Confirm_return_inq_Show_Property(Confirm_return_inq obj, Uno.UX.Selector name)
void HSMRO_Confirm_return_inq_Show_Property__ctor_3_fn(HSMRO_Confirm_return_inq_Show_Property* __this, ::g::Confirm_return_inq* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj)
void HSMRO_Confirm_return_inq_Show_Property__Get1_fn(HSMRO_Confirm_return_inq_Show_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("HSMRO_Confirm_return_inq_Show_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Confirm_return_inq*>(obj, ::TYPES[0/*Confirm_return_inq*/]))->Show(), void();
}

// public HSMRO_Confirm_return_inq_Show_Property New(Confirm_return_inq obj, Uno.UX.Selector name)
void HSMRO_Confirm_return_inq_Show_Property__New1_fn(::g::Confirm_return_inq* obj, ::g::Uno::UX::Selector* name, HSMRO_Confirm_return_inq_Show_Property** __retval)
{
    *__retval = HSMRO_Confirm_return_inq_Show_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void HSMRO_Confirm_return_inq_Show_Property__get_Object_fn(HSMRO_Confirm_return_inq_Show_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin)
void HSMRO_Confirm_return_inq_Show_Property__Set1_fn(HSMRO_Confirm_return_inq_Show_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("HSMRO_Confirm_return_inq_Show_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Confirm_return_inq*>(obj, ::TYPES[0/*Confirm_return_inq*/]))->SetShow(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void HSMRO_Confirm_return_inq_Show_Property__get_SupportsOriginSetter_fn(HSMRO_Confirm_return_inq_Show_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public HSMRO_Confirm_return_inq_Show_Property(Confirm_return_inq obj, Uno.UX.Selector name) [instance]
void HSMRO_Confirm_return_inq_Show_Property::ctor_3(::g::Confirm_return_inq* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public HSMRO_Confirm_return_inq_Show_Property New(Confirm_return_inq obj, Uno.UX.Selector name) [static]
HSMRO_Confirm_return_inq_Show_Property* HSMRO_Confirm_return_inq_Show_Property::New1(::g::Confirm_return_inq* obj, ::g::Uno::UX::Selector name)
{
    HSMRO_Confirm_return_inq_Show_Property* obj1 = (HSMRO_Confirm_return_inq_Show_Property*)uNew(HSMRO_Confirm_return_inq_Show_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
