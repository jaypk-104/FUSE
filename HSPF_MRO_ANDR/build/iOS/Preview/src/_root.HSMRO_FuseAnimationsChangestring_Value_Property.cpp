// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_FuseAnimationsChangestring_Value_Property.h>
#include <Fuse.Animations.Change-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class HSMRO_FuseAnimationsChangestring_Value_Property
// {
static void HSMRO_FuseAnimationsChangestring_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Animations.Change<string>*/], offsetof(HSMRO_FuseAnimationsChangestring_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* HSMRO_FuseAnimationsChangestring_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_FuseAnimationsChangestring_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("HSMRO_FuseAnimationsChangestring_Value_Property", options);
    type->fp_build_ = HSMRO_FuseAnimationsChangestring_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))HSMRO_FuseAnimationsChangestring_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))HSMRO_FuseAnimationsChangestring_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))HSMRO_FuseAnimationsChangestring_Value_Property__Set1_fn;
    return type;
}

// public HSMRO_FuseAnimationsChangestring_Value_Property(Fuse.Animations.Change<string> obj, Uno.UX.Selector name)
void HSMRO_FuseAnimationsChangestring_Value_Property__ctor_3_fn(HSMRO_FuseAnimationsChangestring_Value_Property* __this, ::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj)
void HSMRO_FuseAnimationsChangestring_Value_Property__Get1_fn(HSMRO_FuseAnimationsChangestring_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("HSMRO_FuseAnimationsChangestring_Value_Property", "Get(Uno.UX.PropertyObject)");
    uString* ret2;
    return *__retval = (::g::Fuse::Animations::Change__get_Value_fn(uPtr(uCast< ::g::Fuse::Animations::Change*>(obj, ::TYPES[0/*Fuse.Animations.Change<string>*/])), &ret2), ret2), void();
}

// public HSMRO_FuseAnimationsChangestring_Value_Property New(Fuse.Animations.Change<string> obj, Uno.UX.Selector name)
void HSMRO_FuseAnimationsChangestring_Value_Property__New1_fn(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseAnimationsChangestring_Value_Property** __retval)
{
    *__retval = HSMRO_FuseAnimationsChangestring_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void HSMRO_FuseAnimationsChangestring_Value_Property__get_Object_fn(HSMRO_FuseAnimationsChangestring_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin)
void HSMRO_FuseAnimationsChangestring_Value_Property__Set1_fn(HSMRO_FuseAnimationsChangestring_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("HSMRO_FuseAnimationsChangestring_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    ::g::Fuse::Animations::Change__set_Value_fn(uPtr(uCast< ::g::Fuse::Animations::Change*>(obj, ::TYPES[0/*Fuse.Animations.Change<string>*/])), v);
}

// public HSMRO_FuseAnimationsChangestring_Value_Property(Fuse.Animations.Change<string> obj, Uno.UX.Selector name) [instance]
void HSMRO_FuseAnimationsChangestring_Value_Property::ctor_3(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public HSMRO_FuseAnimationsChangestring_Value_Property New(Fuse.Animations.Change<string> obj, Uno.UX.Selector name) [static]
HSMRO_FuseAnimationsChangestring_Value_Property* HSMRO_FuseAnimationsChangestring_Value_Property::New1(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name)
{
    HSMRO_FuseAnimationsChangestring_Value_Property* obj1 = (HSMRO_FuseAnimationsChangestring_Value_Property*)uNew(HSMRO_FuseAnimationsChangestring_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
