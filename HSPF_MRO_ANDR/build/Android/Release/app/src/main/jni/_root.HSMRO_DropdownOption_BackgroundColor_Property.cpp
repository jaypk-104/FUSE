// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownOption.h>
#include <_root.HSMRO_DropdownOption_BackgroundColor_Property.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class HSMRO_DropdownOption_BackgroundColor_Property
// {
static void HSMRO_DropdownOption_BackgroundColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::DropdownOption_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*DropdownOption*/], offsetof(HSMRO_DropdownOption_BackgroundColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* HSMRO_DropdownOption_BackgroundColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_DropdownOption_BackgroundColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("HSMRO_DropdownOption_BackgroundColor_Property", options);
    type->fp_build_ = HSMRO_DropdownOption_BackgroundColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))HSMRO_DropdownOption_BackgroundColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))HSMRO_DropdownOption_BackgroundColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))HSMRO_DropdownOption_BackgroundColor_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))HSMRO_DropdownOption_BackgroundColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public HSMRO_DropdownOption_BackgroundColor_Property(DropdownOption obj, Uno.UX.Selector name)
void HSMRO_DropdownOption_BackgroundColor_Property__ctor_3_fn(HSMRO_DropdownOption_BackgroundColor_Property* __this, ::g::DropdownOption* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj)
void HSMRO_DropdownOption_BackgroundColor_Property__Get1_fn(HSMRO_DropdownOption_BackgroundColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(uCast< ::g::DropdownOption*>(obj, ::TYPES[0/*DropdownOption*/]))->BackgroundColor(), void();
}

// public HSMRO_DropdownOption_BackgroundColor_Property New(DropdownOption obj, Uno.UX.Selector name)
void HSMRO_DropdownOption_BackgroundColor_Property__New1_fn(::g::DropdownOption* obj, ::g::Uno::UX::Selector* name, HSMRO_DropdownOption_BackgroundColor_Property** __retval)
{
    *__retval = HSMRO_DropdownOption_BackgroundColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void HSMRO_DropdownOption_BackgroundColor_Property__get_Object_fn(HSMRO_DropdownOption_BackgroundColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin)
void HSMRO_DropdownOption_BackgroundColor_Property__Set1_fn(HSMRO_DropdownOption_BackgroundColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(uCast< ::g::DropdownOption*>(obj, ::TYPES[0/*DropdownOption*/]))->SetBackgroundColor(v, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void HSMRO_DropdownOption_BackgroundColor_Property__get_SupportsOriginSetter_fn(HSMRO_DropdownOption_BackgroundColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public HSMRO_DropdownOption_BackgroundColor_Property(DropdownOption obj, Uno.UX.Selector name) [instance]
void HSMRO_DropdownOption_BackgroundColor_Property::ctor_3(::g::DropdownOption* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public HSMRO_DropdownOption_BackgroundColor_Property New(DropdownOption obj, Uno.UX.Selector name) [static]
HSMRO_DropdownOption_BackgroundColor_Property* HSMRO_DropdownOption_BackgroundColor_Property::New1(::g::DropdownOption* obj, ::g::Uno::UX::Selector name)
{
    HSMRO_DropdownOption_BackgroundColor_Property* obj1 = (HSMRO_DropdownOption_BackgroundColor_Property*)uNew(HSMRO_DropdownOption_BackgroundColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
