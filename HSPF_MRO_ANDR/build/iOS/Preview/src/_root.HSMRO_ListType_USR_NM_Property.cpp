// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_ListType_USR_NM_Property.h>
#include <_root.ListType.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class HSMRO_ListType_USR_NM_Property
// {
static void HSMRO_ListType_USR_NM_Property_build(uType* type)
{
    ::TYPES[0] = ::g::ListType_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*ListType*/], offsetof(HSMRO_ListType_USR_NM_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* HSMRO_ListType_USR_NM_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_ListType_USR_NM_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("HSMRO_ListType_USR_NM_Property", options);
    type->fp_build_ = HSMRO_ListType_USR_NM_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))HSMRO_ListType_USR_NM_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))HSMRO_ListType_USR_NM_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))HSMRO_ListType_USR_NM_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))HSMRO_ListType_USR_NM_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public HSMRO_ListType_USR_NM_Property(ListType obj, Uno.UX.Selector name)
void HSMRO_ListType_USR_NM_Property__ctor_3_fn(HSMRO_ListType_USR_NM_Property* __this, ::g::ListType* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj)
void HSMRO_ListType_USR_NM_Property__Get1_fn(HSMRO_ListType_USR_NM_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("HSMRO_ListType_USR_NM_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::ListType*>(obj, ::TYPES[0/*ListType*/]))->USR_NM(), void();
}

// public HSMRO_ListType_USR_NM_Property New(ListType obj, Uno.UX.Selector name)
void HSMRO_ListType_USR_NM_Property__New1_fn(::g::ListType* obj, ::g::Uno::UX::Selector* name, HSMRO_ListType_USR_NM_Property** __retval)
{
    *__retval = HSMRO_ListType_USR_NM_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void HSMRO_ListType_USR_NM_Property__get_Object_fn(HSMRO_ListType_USR_NM_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin)
void HSMRO_ListType_USR_NM_Property__Set1_fn(HSMRO_ListType_USR_NM_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("HSMRO_ListType_USR_NM_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::ListType*>(obj, ::TYPES[0/*ListType*/]))->SetUSR_NM(v, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void HSMRO_ListType_USR_NM_Property__get_SupportsOriginSetter_fn(HSMRO_ListType_USR_NM_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public HSMRO_ListType_USR_NM_Property(ListType obj, Uno.UX.Selector name) [instance]
void HSMRO_ListType_USR_NM_Property::ctor_3(::g::ListType* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public HSMRO_ListType_USR_NM_Property New(ListType obj, Uno.UX.Selector name) [static]
HSMRO_ListType_USR_NM_Property* HSMRO_ListType_USR_NM_Property::New1(::g::ListType* obj, ::g::Uno::UX::Selector name)
{
    HSMRO_ListType_USR_NM_Property* obj1 = (HSMRO_ListType_USR_NM_Property*)uNew(HSMRO_ListType_USR_NM_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
