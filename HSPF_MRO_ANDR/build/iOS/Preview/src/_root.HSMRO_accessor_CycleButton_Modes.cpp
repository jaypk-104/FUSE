// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CycleButton.h>
#include <_root.HSMRO_accessor_CycleButton_Modes.h>
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

// internal sealed class HSMRO_accessor_CycleButton_Modes
// {
// static generated HSMRO_accessor_CycleButton_Modes()
static void HSMRO_accessor_CycleButton_Modes__cctor__fn(uType* __type)
{
    HSMRO_accessor_CycleButton_Modes::Singleton_ = HSMRO_accessor_CycleButton_Modes::New1();
    HSMRO_accessor_CycleButton_Modes::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Modes"*/]);
}

static void HSMRO_accessor_CycleButton_Modes_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Modes");
    ::TYPES[0] = ::g::CycleButton_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&HSMRO_accessor_CycleButton_Modes::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&HSMRO_accessor_CycleButton_Modes::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* HSMRO_accessor_CycleButton_Modes_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_accessor_CycleButton_Modes);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("HSMRO_accessor_CycleButton_Modes", options);
    type->fp_build_ = HSMRO_accessor_CycleButton_Modes_build;
    type->fp_ctor_ = (void*)HSMRO_accessor_CycleButton_Modes__New1_fn;
    type->fp_cctor_ = HSMRO_accessor_CycleButton_Modes__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))HSMRO_accessor_CycleButton_Modes__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))HSMRO_accessor_CycleButton_Modes__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))HSMRO_accessor_CycleButton_Modes__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))HSMRO_accessor_CycleButton_Modes__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))HSMRO_accessor_CycleButton_Modes__get_SupportsOriginSetter_fn;
    return type;
}

// public generated HSMRO_accessor_CycleButton_Modes()
void HSMRO_accessor_CycleButton_Modes__ctor_1_fn(HSMRO_accessor_CycleButton_Modes* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj)
void HSMRO_accessor_CycleButton_Modes__GetAsObject_fn(HSMRO_accessor_CycleButton_Modes* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("HSMRO_accessor_CycleButton_Modes", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::CycleButton*>(obj, ::TYPES[0/*CycleButton*/]))->Modes(), void();
}

// public override sealed Uno.UX.Selector get_Name()
void HSMRO_accessor_CycleButton_Modes__get_Name_fn(HSMRO_accessor_CycleButton_Modes* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = HSMRO_accessor_CycleButton_Modes::_name_, void();
}

// public generated HSMRO_accessor_CycleButton_Modes New()
void HSMRO_accessor_CycleButton_Modes__New1_fn(HSMRO_accessor_CycleButton_Modes** __retval)
{
    *__retval = HSMRO_accessor_CycleButton_Modes::New1();
}

// public override sealed Uno.Type get_PropertyType()
void HSMRO_accessor_CycleButton_Modes__get_PropertyType_fn(HSMRO_accessor_CycleButton_Modes* __this, uType** __retval)
{
    return *__retval = uObject_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin)
void HSMRO_accessor_CycleButton_Modes__SetAsObject_fn(HSMRO_accessor_CycleButton_Modes* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("HSMRO_accessor_CycleButton_Modes", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::CycleButton*>(obj, ::TYPES[0/*CycleButton*/]))->SetModes(v, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void HSMRO_accessor_CycleButton_Modes__get_SupportsOriginSetter_fn(HSMRO_accessor_CycleButton_Modes* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> HSMRO_accessor_CycleButton_Modes::Singleton_;
::g::Uno::UX::Selector HSMRO_accessor_CycleButton_Modes::_name_;

// public generated HSMRO_accessor_CycleButton_Modes() [instance]
void HSMRO_accessor_CycleButton_Modes::ctor_1()
{
    ctor_();
}

// public generated HSMRO_accessor_CycleButton_Modes New() [static]
HSMRO_accessor_CycleButton_Modes* HSMRO_accessor_CycleButton_Modes::New1()
{
    HSMRO_accessor_CycleButton_Modes* obj1 = (HSMRO_accessor_CycleButton_Modes*)uNew(HSMRO_accessor_CycleButton_Modes_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g