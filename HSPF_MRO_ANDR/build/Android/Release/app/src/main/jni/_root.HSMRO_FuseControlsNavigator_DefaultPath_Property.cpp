// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_FuseControlsNavigator_DefaultPath_Property.h>
#include <Fuse.Controls.Navigator.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class HSMRO_FuseControlsNavigator_DefaultPath_Property
// {
static void HSMRO_FuseControlsNavigator_DefaultPath_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Navigator_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Navigator*/], offsetof(HSMRO_FuseControlsNavigator_DefaultPath_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* HSMRO_FuseControlsNavigator_DefaultPath_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_FuseControlsNavigator_DefaultPath_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("HSMRO_FuseControlsNavigator_DefaultPath_Property", options);
    type->fp_build_ = HSMRO_FuseControlsNavigator_DefaultPath_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))HSMRO_FuseControlsNavigator_DefaultPath_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))HSMRO_FuseControlsNavigator_DefaultPath_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))HSMRO_FuseControlsNavigator_DefaultPath_Property__Set1_fn;
    return type;
}

// public HSMRO_FuseControlsNavigator_DefaultPath_Property(Fuse.Controls.Navigator obj, Uno.UX.Selector name)
void HSMRO_FuseControlsNavigator_DefaultPath_Property__ctor_3_fn(HSMRO_FuseControlsNavigator_DefaultPath_Property* __this, ::g::Fuse::Controls::Navigator* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj)
void HSMRO_FuseControlsNavigator_DefaultPath_Property__Get1_fn(HSMRO_FuseControlsNavigator_DefaultPath_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Navigator*>(obj, ::TYPES[0/*Fuse.Controls.Navigator*/]))->DefaultPath(), void();
}

// public HSMRO_FuseControlsNavigator_DefaultPath_Property New(Fuse.Controls.Navigator obj, Uno.UX.Selector name)
void HSMRO_FuseControlsNavigator_DefaultPath_Property__New1_fn(::g::Fuse::Controls::Navigator* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseControlsNavigator_DefaultPath_Property** __retval)
{
    *__retval = HSMRO_FuseControlsNavigator_DefaultPath_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void HSMRO_FuseControlsNavigator_DefaultPath_Property__get_Object_fn(HSMRO_FuseControlsNavigator_DefaultPath_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin)
void HSMRO_FuseControlsNavigator_DefaultPath_Property__Set1_fn(HSMRO_FuseControlsNavigator_DefaultPath_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::Navigator*>(obj, ::TYPES[0/*Fuse.Controls.Navigator*/]))->DefaultPath(v);
}

// public HSMRO_FuseControlsNavigator_DefaultPath_Property(Fuse.Controls.Navigator obj, Uno.UX.Selector name) [instance]
void HSMRO_FuseControlsNavigator_DefaultPath_Property::ctor_3(::g::Fuse::Controls::Navigator* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public HSMRO_FuseControlsNavigator_DefaultPath_Property New(Fuse.Controls.Navigator obj, Uno.UX.Selector name) [static]
HSMRO_FuseControlsNavigator_DefaultPath_Property* HSMRO_FuseControlsNavigator_DefaultPath_Property::New1(::g::Fuse::Controls::Navigator* obj, ::g::Uno::UX::Selector name)
{
    HSMRO_FuseControlsNavigator_DefaultPath_Property* obj1 = (HSMRO_FuseControlsNavigator_DefaultPath_Property*)uNew(HSMRO_FuseControlsNavigator_DefaultPath_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
