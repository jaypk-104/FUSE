// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownSelectedItem.h>
#include <_root.HSMRO_DropdownSelectedItem_TextColor_Property.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class HSMRO_DropdownSelectedItem_TextColor_Property
// {
static void HSMRO_DropdownSelectedItem_TextColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::DropdownSelectedItem_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*DropdownSelectedItem*/], offsetof(HSMRO_DropdownSelectedItem_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* HSMRO_DropdownSelectedItem_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_DropdownSelectedItem_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("HSMRO_DropdownSelectedItem_TextColor_Property", options);
    type->fp_build_ = HSMRO_DropdownSelectedItem_TextColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))HSMRO_DropdownSelectedItem_TextColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))HSMRO_DropdownSelectedItem_TextColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))HSMRO_DropdownSelectedItem_TextColor_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))HSMRO_DropdownSelectedItem_TextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public HSMRO_DropdownSelectedItem_TextColor_Property(DropdownSelectedItem obj, Uno.UX.Selector name)
void HSMRO_DropdownSelectedItem_TextColor_Property__ctor_3_fn(HSMRO_DropdownSelectedItem_TextColor_Property* __this, ::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj)
void HSMRO_DropdownSelectedItem_TextColor_Property__Get1_fn(HSMRO_DropdownSelectedItem_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("HSMRO_DropdownSelectedItem_TextColor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::DropdownSelectedItem*>(obj, ::TYPES[0/*DropdownSelectedItem*/]))->TextColor(), void();
}

// public HSMRO_DropdownSelectedItem_TextColor_Property New(DropdownSelectedItem obj, Uno.UX.Selector name)
void HSMRO_DropdownSelectedItem_TextColor_Property__New1_fn(::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector* name, HSMRO_DropdownSelectedItem_TextColor_Property** __retval)
{
    *__retval = HSMRO_DropdownSelectedItem_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void HSMRO_DropdownSelectedItem_TextColor_Property__get_Object_fn(HSMRO_DropdownSelectedItem_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin)
void HSMRO_DropdownSelectedItem_TextColor_Property__Set1_fn(HSMRO_DropdownSelectedItem_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("HSMRO_DropdownSelectedItem_TextColor_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::DropdownSelectedItem*>(obj, ::TYPES[0/*DropdownSelectedItem*/]))->SetTextColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void HSMRO_DropdownSelectedItem_TextColor_Property__get_SupportsOriginSetter_fn(HSMRO_DropdownSelectedItem_TextColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public HSMRO_DropdownSelectedItem_TextColor_Property(DropdownSelectedItem obj, Uno.UX.Selector name) [instance]
void HSMRO_DropdownSelectedItem_TextColor_Property::ctor_3(::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public HSMRO_DropdownSelectedItem_TextColor_Property New(DropdownSelectedItem obj, Uno.UX.Selector name) [static]
HSMRO_DropdownSelectedItem_TextColor_Property* HSMRO_DropdownSelectedItem_TextColor_Property::New1(::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector name)
{
    HSMRO_DropdownSelectedItem_TextColor_Property* obj1 = (HSMRO_DropdownSelectedItem_TextColor_Property*)uNew(HSMRO_DropdownSelectedItem_TextColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
