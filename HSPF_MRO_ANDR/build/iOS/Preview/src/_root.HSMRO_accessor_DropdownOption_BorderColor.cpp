// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownOption.h>
#include <_root.HSMRO_accessor_DropdownOption_BorderColor.h>
#include <Fuse.Drawing.Brush.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class HSMRO_accessor_DropdownOption_BorderColor
// {
// static generated HSMRO_accessor_DropdownOption_BorderColor()
static void HSMRO_accessor_DropdownOption_BorderColor__cctor__fn(uType* __type)
{
    HSMRO_accessor_DropdownOption_BorderColor::Singleton_ = HSMRO_accessor_DropdownOption_BorderColor::New1();
    HSMRO_accessor_DropdownOption_BorderColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"BorderColor"*/]);
}

static void HSMRO_accessor_DropdownOption_BorderColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("BorderColor");
    ::TYPES[0] = ::g::DropdownOption_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&HSMRO_accessor_DropdownOption_BorderColor::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&HSMRO_accessor_DropdownOption_BorderColor::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* HSMRO_accessor_DropdownOption_BorderColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_accessor_DropdownOption_BorderColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("HSMRO_accessor_DropdownOption_BorderColor", options);
    type->fp_build_ = HSMRO_accessor_DropdownOption_BorderColor_build;
    type->fp_ctor_ = (void*)HSMRO_accessor_DropdownOption_BorderColor__New1_fn;
    type->fp_cctor_ = HSMRO_accessor_DropdownOption_BorderColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))HSMRO_accessor_DropdownOption_BorderColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))HSMRO_accessor_DropdownOption_BorderColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))HSMRO_accessor_DropdownOption_BorderColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))HSMRO_accessor_DropdownOption_BorderColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))HSMRO_accessor_DropdownOption_BorderColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated HSMRO_accessor_DropdownOption_BorderColor()
void HSMRO_accessor_DropdownOption_BorderColor__ctor_1_fn(HSMRO_accessor_DropdownOption_BorderColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj)
void HSMRO_accessor_DropdownOption_BorderColor__GetAsObject_fn(HSMRO_accessor_DropdownOption_BorderColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("HSMRO_accessor_DropdownOption_BorderColor", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::DropdownOption*>(obj, ::TYPES[0/*DropdownOption*/]))->BorderColor(), void();
}

// public override sealed Uno.UX.Selector get_Name()
void HSMRO_accessor_DropdownOption_BorderColor__get_Name_fn(HSMRO_accessor_DropdownOption_BorderColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = HSMRO_accessor_DropdownOption_BorderColor::_name_, void();
}

// public generated HSMRO_accessor_DropdownOption_BorderColor New()
void HSMRO_accessor_DropdownOption_BorderColor__New1_fn(HSMRO_accessor_DropdownOption_BorderColor** __retval)
{
    *__retval = HSMRO_accessor_DropdownOption_BorderColor::New1();
}

// public override sealed Uno.Type get_PropertyType()
void HSMRO_accessor_DropdownOption_BorderColor__get_PropertyType_fn(HSMRO_accessor_DropdownOption_BorderColor* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*Fuse.Drawing.Brush*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin)
void HSMRO_accessor_DropdownOption_BorderColor__SetAsObject_fn(HSMRO_accessor_DropdownOption_BorderColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("HSMRO_accessor_DropdownOption_BorderColor", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::DropdownOption*>(obj, ::TYPES[0/*DropdownOption*/]))->SetBorderColor(uCast< ::g::Fuse::Drawing::Brush*>(v, ::TYPES[1/*Fuse.Drawing.Brush*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter()
void HSMRO_accessor_DropdownOption_BorderColor__get_SupportsOriginSetter_fn(HSMRO_accessor_DropdownOption_BorderColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> HSMRO_accessor_DropdownOption_BorderColor::Singleton_;
::g::Uno::UX::Selector HSMRO_accessor_DropdownOption_BorderColor::_name_;

// public generated HSMRO_accessor_DropdownOption_BorderColor() [instance]
void HSMRO_accessor_DropdownOption_BorderColor::ctor_1()
{
    ctor_();
}

// public generated HSMRO_accessor_DropdownOption_BorderColor New() [static]
HSMRO_accessor_DropdownOption_BorderColor* HSMRO_accessor_DropdownOption_BorderColor::New1()
{
    HSMRO_accessor_DropdownOption_BorderColor* obj1 = (HSMRO_accessor_DropdownOption_BorderColor*)uNew(HSMRO_accessor_DropdownOption_BorderColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
