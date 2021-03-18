// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_accessor_TypeIndicator_IsActive.h>
#include <_root.TypeIndicator.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class HSMRO_accessor_TypeIndicator_IsActive
// {
// static generated HSMRO_accessor_TypeIndicator_IsActive()
static void HSMRO_accessor_TypeIndicator_IsActive__cctor__fn(uType* __type)
{
    HSMRO_accessor_TypeIndicator_IsActive::Singleton_ = HSMRO_accessor_TypeIndicator_IsActive::New1();
    HSMRO_accessor_TypeIndicator_IsActive::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"IsActive"*/]);
}

static void HSMRO_accessor_TypeIndicator_IsActive_build(uType* type)
{
    ::STRINGS[0] = uString::Const("IsActive");
    ::TYPES[0] = ::g::TypeIndicator_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&HSMRO_accessor_TypeIndicator_IsActive::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&HSMRO_accessor_TypeIndicator_IsActive::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* HSMRO_accessor_TypeIndicator_IsActive_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_accessor_TypeIndicator_IsActive);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("HSMRO_accessor_TypeIndicator_IsActive", options);
    type->fp_build_ = HSMRO_accessor_TypeIndicator_IsActive_build;
    type->fp_ctor_ = (void*)HSMRO_accessor_TypeIndicator_IsActive__New1_fn;
    type->fp_cctor_ = HSMRO_accessor_TypeIndicator_IsActive__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))HSMRO_accessor_TypeIndicator_IsActive__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))HSMRO_accessor_TypeIndicator_IsActive__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))HSMRO_accessor_TypeIndicator_IsActive__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))HSMRO_accessor_TypeIndicator_IsActive__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))HSMRO_accessor_TypeIndicator_IsActive__get_SupportsOriginSetter_fn;
    return type;
}

// public generated HSMRO_accessor_TypeIndicator_IsActive()
void HSMRO_accessor_TypeIndicator_IsActive__ctor_1_fn(HSMRO_accessor_TypeIndicator_IsActive* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj)
void HSMRO_accessor_TypeIndicator_IsActive__GetAsObject_fn(HSMRO_accessor_TypeIndicator_IsActive* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("HSMRO_accessor_TypeIndicator_IsActive", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::TypeIndicator*>(obj, ::TYPES[0/*TypeIndicator*/]))->IsActive()), void();
}

// public override sealed Uno.UX.Selector get_Name()
void HSMRO_accessor_TypeIndicator_IsActive__get_Name_fn(HSMRO_accessor_TypeIndicator_IsActive* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = HSMRO_accessor_TypeIndicator_IsActive::_name_, void();
}

// public generated HSMRO_accessor_TypeIndicator_IsActive New()
void HSMRO_accessor_TypeIndicator_IsActive__New1_fn(HSMRO_accessor_TypeIndicator_IsActive** __retval)
{
    *__retval = HSMRO_accessor_TypeIndicator_IsActive::New1();
}

// public override sealed Uno.Type get_PropertyType()
void HSMRO_accessor_TypeIndicator_IsActive__get_PropertyType_fn(HSMRO_accessor_TypeIndicator_IsActive* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin)
void HSMRO_accessor_TypeIndicator_IsActive__SetAsObject_fn(HSMRO_accessor_TypeIndicator_IsActive* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("HSMRO_accessor_TypeIndicator_IsActive", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::TypeIndicator*>(obj, ::TYPES[0/*TypeIndicator*/]))->SetIsActive(uUnbox<bool>(::g::Uno::Bool_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter()
void HSMRO_accessor_TypeIndicator_IsActive__get_SupportsOriginSetter_fn(HSMRO_accessor_TypeIndicator_IsActive* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> HSMRO_accessor_TypeIndicator_IsActive::Singleton_;
::g::Uno::UX::Selector HSMRO_accessor_TypeIndicator_IsActive::_name_;

// public generated HSMRO_accessor_TypeIndicator_IsActive() [instance]
void HSMRO_accessor_TypeIndicator_IsActive::ctor_1()
{
    ctor_();
}

// public generated HSMRO_accessor_TypeIndicator_IsActive New() [static]
HSMRO_accessor_TypeIndicator_IsActive* HSMRO_accessor_TypeIndicator_IsActive::New1()
{
    HSMRO_accessor_TypeIndicator_IsActive* obj1 = (HSMRO_accessor_TypeIndicator_IsActive*)uNew(HSMRO_accessor_TypeIndicator_IsActive_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
