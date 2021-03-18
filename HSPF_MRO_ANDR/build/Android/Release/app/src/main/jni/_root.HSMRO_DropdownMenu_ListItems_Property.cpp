// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownMenu.h>
#include <_root.HSMRO_DropdownMenu_ListItems_Property.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
static uType* TYPES[1];

namespace g{

// internal sealed class HSMRO_DropdownMenu_ListItems_Property
// {
static void HSMRO_DropdownMenu_ListItems_Property_build(uType* type)
{
    ::TYPES[0] = ::g::DropdownMenu_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*DropdownMenu*/], offsetof(HSMRO_DropdownMenu_ListItems_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* HSMRO_DropdownMenu_ListItems_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_DropdownMenu_ListItems_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("HSMRO_DropdownMenu_ListItems_Property", options);
    type->fp_build_ = HSMRO_DropdownMenu_ListItems_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))HSMRO_DropdownMenu_ListItems_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))HSMRO_DropdownMenu_ListItems_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))HSMRO_DropdownMenu_ListItems_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))HSMRO_DropdownMenu_ListItems_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed object Get(Uno.UX.PropertyObject obj)
void HSMRO_DropdownMenu_ListItems_Property__Get1_fn(HSMRO_DropdownMenu_ListItems_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::DropdownMenu*>(obj, ::TYPES[0/*DropdownMenu*/]))->ListItems(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object()
void HSMRO_DropdownMenu_ListItems_Property__get_Object_fn(HSMRO_DropdownMenu_ListItems_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin)
void HSMRO_DropdownMenu_ListItems_Property__Set1_fn(HSMRO_DropdownMenu_ListItems_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::DropdownMenu*>(obj, ::TYPES[0/*DropdownMenu*/]))->SetListItems(v, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void HSMRO_DropdownMenu_ListItems_Property__get_SupportsOriginSetter_fn(HSMRO_DropdownMenu_ListItems_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

} // ::g
