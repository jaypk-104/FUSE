// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_Tab_Color_Property.h>
#include <_root.Tab.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class HSMRO_Tab_Color_Property
// {
static void HSMRO_Tab_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Tab_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Tab*/], offsetof(HSMRO_Tab_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* HSMRO_Tab_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_Tab_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("HSMRO_Tab_Color_Property", options);
    type->fp_build_ = HSMRO_Tab_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))HSMRO_Tab_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))HSMRO_Tab_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))HSMRO_Tab_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))HSMRO_Tab_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public HSMRO_Tab_Color_Property(Tab obj, Uno.UX.Selector name)
void HSMRO_Tab_Color_Property__ctor_3_fn(HSMRO_Tab_Color_Property* __this, ::g::Tab* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj)
void HSMRO_Tab_Color_Property__Get1_fn(HSMRO_Tab_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("HSMRO_Tab_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Tab*>(obj, ::TYPES[0/*Tab*/]))->Color1(), void();
}

// public HSMRO_Tab_Color_Property New(Tab obj, Uno.UX.Selector name)
void HSMRO_Tab_Color_Property__New1_fn(::g::Tab* obj, ::g::Uno::UX::Selector* name, HSMRO_Tab_Color_Property** __retval)
{
    *__retval = HSMRO_Tab_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void HSMRO_Tab_Color_Property__get_Object_fn(HSMRO_Tab_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin)
void HSMRO_Tab_Color_Property__Set1_fn(HSMRO_Tab_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("HSMRO_Tab_Color_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Tab*>(obj, ::TYPES[0/*Tab*/]))->SetColor1(v, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void HSMRO_Tab_Color_Property__get_SupportsOriginSetter_fn(HSMRO_Tab_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public HSMRO_Tab_Color_Property(Tab obj, Uno.UX.Selector name) [instance]
void HSMRO_Tab_Color_Property::ctor_3(::g::Tab* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public HSMRO_Tab_Color_Property New(Tab obj, Uno.UX.Selector name) [static]
HSMRO_Tab_Color_Property* HSMRO_Tab_Color_Property::New1(::g::Tab* obj, ::g::Uno::UX::Selector name)
{
    HSMRO_Tab_Color_Property* obj1 = (HSMRO_Tab_Color_Property*)uNew(HSMRO_Tab_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
