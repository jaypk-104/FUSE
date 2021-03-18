// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_FuseResourcesHttpImageSource_Url_Property.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class HSMRO_FuseResourcesHttpImageSource_Url_Property
// {
static void HSMRO_FuseResourcesHttpImageSource_Url_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Resources::HttpImageSource_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Resources.HttpImageSource*/], offsetof(HSMRO_FuseResourcesHttpImageSource_Url_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* HSMRO_FuseResourcesHttpImageSource_Url_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_FuseResourcesHttpImageSource_Url_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("HSMRO_FuseResourcesHttpImageSource_Url_Property", options);
    type->fp_build_ = HSMRO_FuseResourcesHttpImageSource_Url_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))HSMRO_FuseResourcesHttpImageSource_Url_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))HSMRO_FuseResourcesHttpImageSource_Url_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))HSMRO_FuseResourcesHttpImageSource_Url_Property__Set1_fn;
    return type;
}

// public HSMRO_FuseResourcesHttpImageSource_Url_Property(Fuse.Resources.HttpImageSource obj, Uno.UX.Selector name)
void HSMRO_FuseResourcesHttpImageSource_Url_Property__ctor_3_fn(HSMRO_FuseResourcesHttpImageSource_Url_Property* __this, ::g::Fuse::Resources::HttpImageSource* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj)
void HSMRO_FuseResourcesHttpImageSource_Url_Property__Get1_fn(HSMRO_FuseResourcesHttpImageSource_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Resources::HttpImageSource*>(obj, ::TYPES[0/*Fuse.Resources.HttpImageSource*/]))->Url(), void();
}

// public HSMRO_FuseResourcesHttpImageSource_Url_Property New(Fuse.Resources.HttpImageSource obj, Uno.UX.Selector name)
void HSMRO_FuseResourcesHttpImageSource_Url_Property__New1_fn(::g::Fuse::Resources::HttpImageSource* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseResourcesHttpImageSource_Url_Property** __retval)
{
    *__retval = HSMRO_FuseResourcesHttpImageSource_Url_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void HSMRO_FuseResourcesHttpImageSource_Url_Property__get_Object_fn(HSMRO_FuseResourcesHttpImageSource_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin)
void HSMRO_FuseResourcesHttpImageSource_Url_Property__Set1_fn(HSMRO_FuseResourcesHttpImageSource_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Resources::HttpImageSource*>(obj, ::TYPES[0/*Fuse.Resources.HttpImageSource*/]))->Url(v);
}

// public HSMRO_FuseResourcesHttpImageSource_Url_Property(Fuse.Resources.HttpImageSource obj, Uno.UX.Selector name) [instance]
void HSMRO_FuseResourcesHttpImageSource_Url_Property::ctor_3(::g::Fuse::Resources::HttpImageSource* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public HSMRO_FuseResourcesHttpImageSource_Url_Property New(Fuse.Resources.HttpImageSource obj, Uno.UX.Selector name) [static]
HSMRO_FuseResourcesHttpImageSource_Url_Property* HSMRO_FuseResourcesHttpImageSource_Url_Property::New1(::g::Fuse::Resources::HttpImageSource* obj, ::g::Uno::UX::Selector name)
{
    HSMRO_FuseResourcesHttpImageSource_Url_Property* obj1 = (HSMRO_FuseResourcesHttpImageSource_Url_Property*)uNew(HSMRO_FuseResourcesHttpImageSource_Url_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
