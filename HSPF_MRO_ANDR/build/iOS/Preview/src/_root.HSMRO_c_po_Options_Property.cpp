// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.c_po.h>
#include <_root.HSMRO_c_po_Options_Property.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class HSMRO_c_po_Options_Property
// {
static void HSMRO_c_po_Options_Property_build(uType* type)
{
    ::TYPES[0] = ::g::c_po_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*c_po*/], offsetof(HSMRO_c_po_Options_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* HSMRO_c_po_Options_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_c_po_Options_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("HSMRO_c_po_Options_Property", options);
    type->fp_build_ = HSMRO_c_po_Options_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))HSMRO_c_po_Options_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))HSMRO_c_po_Options_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))HSMRO_c_po_Options_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))HSMRO_c_po_Options_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public HSMRO_c_po_Options_Property(c_po obj, Uno.UX.Selector name)
void HSMRO_c_po_Options_Property__ctor_3_fn(HSMRO_c_po_Options_Property* __this, ::g::c_po* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed object Get(Uno.UX.PropertyObject obj)
void HSMRO_c_po_Options_Property__Get1_fn(HSMRO_c_po_Options_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("HSMRO_c_po_Options_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::c_po*>(obj, ::TYPES[0/*c_po*/]))->Options(), void();
}

// public HSMRO_c_po_Options_Property New(c_po obj, Uno.UX.Selector name)
void HSMRO_c_po_Options_Property__New1_fn(::g::c_po* obj, ::g::Uno::UX::Selector* name, HSMRO_c_po_Options_Property** __retval)
{
    *__retval = HSMRO_c_po_Options_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void HSMRO_c_po_Options_Property__get_Object_fn(HSMRO_c_po_Options_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin)
void HSMRO_c_po_Options_Property__Set1_fn(HSMRO_c_po_Options_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("HSMRO_c_po_Options_Property", "Set(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::c_po*>(obj, ::TYPES[0/*c_po*/]))->SetOptions(v, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void HSMRO_c_po_Options_Property__get_SupportsOriginSetter_fn(HSMRO_c_po_Options_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public HSMRO_c_po_Options_Property(c_po obj, Uno.UX.Selector name) [instance]
void HSMRO_c_po_Options_Property::ctor_3(::g::c_po* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public HSMRO_c_po_Options_Property New(c_po obj, Uno.UX.Selector name) [static]
HSMRO_c_po_Options_Property* HSMRO_c_po_Options_Property::New1(::g::c_po* obj, ::g::Uno::UX::Selector name)
{
    HSMRO_c_po_Options_Property* obj1 = (HSMRO_c_po_Options_Property*)uNew(HSMRO_c_po_Options_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
