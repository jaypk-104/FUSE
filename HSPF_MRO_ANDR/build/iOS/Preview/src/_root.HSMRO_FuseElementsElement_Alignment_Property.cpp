// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_FuseElementsElement_Alignment_Property.h>
#include <Fuse.Elements.Element.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class HSMRO_FuseElementsElement_Alignment_Property
// {
static void HSMRO_FuseElementsElement_Alignment_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Alignment_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(HSMRO_FuseElementsElement_Alignment_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* HSMRO_FuseElementsElement_Alignment_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_FuseElementsElement_Alignment_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("HSMRO_FuseElementsElement_Alignment_Property", options);
    type->fp_build_ = HSMRO_FuseElementsElement_Alignment_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))HSMRO_FuseElementsElement_Alignment_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))HSMRO_FuseElementsElement_Alignment_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))HSMRO_FuseElementsElement_Alignment_Property__Set1_fn;
    return type;
}

// public HSMRO_FuseElementsElement_Alignment_Property(Fuse.Elements.Element obj, Uno.UX.Selector name)
void HSMRO_FuseElementsElement_Alignment_Property__ctor_3_fn(HSMRO_FuseElementsElement_Alignment_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Elements.Alignment Get(Uno.UX.PropertyObject obj)
void HSMRO_FuseElementsElement_Alignment_Property__Get1_fn(HSMRO_FuseElementsElement_Alignment_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* __retval)
{
    uStackFrame __("HSMRO_FuseElementsElement_Alignment_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->Alignment(), void();
}

// public HSMRO_FuseElementsElement_Alignment_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name)
void HSMRO_FuseElementsElement_Alignment_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseElementsElement_Alignment_Property** __retval)
{
    *__retval = HSMRO_FuseElementsElement_Alignment_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void HSMRO_FuseElementsElement_Alignment_Property__get_Object_fn(HSMRO_FuseElementsElement_Alignment_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Elements.Alignment v, Uno.UX.IPropertyListener origin)
void HSMRO_FuseElementsElement_Alignment_Property__Set1_fn(HSMRO_FuseElementsElement_Alignment_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* v, uObject* origin)
{
    uStackFrame __("HSMRO_FuseElementsElement_Alignment_Property", "Set(Uno.UX.PropertyObject,Fuse.Elements.Alignment,Uno.UX.IPropertyListener)");
    int32_t v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->Alignment(v_);
}

// public HSMRO_FuseElementsElement_Alignment_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance]
void HSMRO_FuseElementsElement_Alignment_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public HSMRO_FuseElementsElement_Alignment_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static]
HSMRO_FuseElementsElement_Alignment_Property* HSMRO_FuseElementsElement_Alignment_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    HSMRO_FuseElementsElement_Alignment_Property* obj1 = (HSMRO_FuseElementsElement_Alignment_Property*)uNew(HSMRO_FuseElementsElement_Alignment_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
