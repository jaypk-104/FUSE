// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_accessor_MyLoadingIndicator1_ThemeColor.h>
#include <_root.MyLoadingIndicator1.h>
#include <Uno.Bool.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class HSMRO_accessor_MyLoadingIndicator1_ThemeColor
// {
// static generated HSMRO_accessor_MyLoadingIndicator1_ThemeColor()
static void HSMRO_accessor_MyLoadingIndicator1_ThemeColor__cctor__fn(uType* __type)
{
    HSMRO_accessor_MyLoadingIndicator1_ThemeColor::Singleton_ = HSMRO_accessor_MyLoadingIndicator1_ThemeColor::New1();
    HSMRO_accessor_MyLoadingIndicator1_ThemeColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"ThemeColor"*/]);
}

static void HSMRO_accessor_MyLoadingIndicator1_ThemeColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ThemeColor");
    ::TYPES[0] = ::g::MyLoadingIndicator1_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&HSMRO_accessor_MyLoadingIndicator1_ThemeColor::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&HSMRO_accessor_MyLoadingIndicator1_ThemeColor::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* HSMRO_accessor_MyLoadingIndicator1_ThemeColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_accessor_MyLoadingIndicator1_ThemeColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("HSMRO_accessor_MyLoadingIndicator1_ThemeColor", options);
    type->fp_build_ = HSMRO_accessor_MyLoadingIndicator1_ThemeColor_build;
    type->fp_ctor_ = (void*)HSMRO_accessor_MyLoadingIndicator1_ThemeColor__New1_fn;
    type->fp_cctor_ = HSMRO_accessor_MyLoadingIndicator1_ThemeColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))HSMRO_accessor_MyLoadingIndicator1_ThemeColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))HSMRO_accessor_MyLoadingIndicator1_ThemeColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))HSMRO_accessor_MyLoadingIndicator1_ThemeColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))HSMRO_accessor_MyLoadingIndicator1_ThemeColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))HSMRO_accessor_MyLoadingIndicator1_ThemeColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated HSMRO_accessor_MyLoadingIndicator1_ThemeColor()
void HSMRO_accessor_MyLoadingIndicator1_ThemeColor__ctor_1_fn(HSMRO_accessor_MyLoadingIndicator1_ThemeColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj)
void HSMRO_accessor_MyLoadingIndicator1_ThemeColor__GetAsObject_fn(HSMRO_accessor_MyLoadingIndicator1_ThemeColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::MyLoadingIndicator1*>(obj, ::TYPES[0/*MyLoadingIndicator1*/]))->ThemeColor()), void();
}

// public override sealed Uno.UX.Selector get_Name()
void HSMRO_accessor_MyLoadingIndicator1_ThemeColor__get_Name_fn(HSMRO_accessor_MyLoadingIndicator1_ThemeColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = HSMRO_accessor_MyLoadingIndicator1_ThemeColor::_name_, void();
}

// public generated HSMRO_accessor_MyLoadingIndicator1_ThemeColor New()
void HSMRO_accessor_MyLoadingIndicator1_ThemeColor__New1_fn(HSMRO_accessor_MyLoadingIndicator1_ThemeColor** __retval)
{
    *__retval = HSMRO_accessor_MyLoadingIndicator1_ThemeColor::New1();
}

// public override sealed Uno.Type get_PropertyType()
void HSMRO_accessor_MyLoadingIndicator1_ThemeColor__get_PropertyType_fn(HSMRO_accessor_MyLoadingIndicator1_ThemeColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin)
void HSMRO_accessor_MyLoadingIndicator1_ThemeColor__SetAsObject_fn(HSMRO_accessor_MyLoadingIndicator1_ThemeColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::MyLoadingIndicator1*>(obj, ::TYPES[0/*MyLoadingIndicator1*/]))->SetThemeColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter()
void HSMRO_accessor_MyLoadingIndicator1_ThemeColor__get_SupportsOriginSetter_fn(HSMRO_accessor_MyLoadingIndicator1_ThemeColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> HSMRO_accessor_MyLoadingIndicator1_ThemeColor::Singleton_;
::g::Uno::UX::Selector HSMRO_accessor_MyLoadingIndicator1_ThemeColor::_name_;

// public generated HSMRO_accessor_MyLoadingIndicator1_ThemeColor() [instance]
void HSMRO_accessor_MyLoadingIndicator1_ThemeColor::ctor_1()
{
    ctor_();
}

// public generated HSMRO_accessor_MyLoadingIndicator1_ThemeColor New() [static]
HSMRO_accessor_MyLoadingIndicator1_ThemeColor* HSMRO_accessor_MyLoadingIndicator1_ThemeColor::New1()
{
    HSMRO_accessor_MyLoadingIndicator1_ThemeColor* obj1 = (HSMRO_accessor_MyLoadingIndicator1_ThemeColor*)uNew(HSMRO_accessor_MyLoadingIndicator1_ThemeColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
