// This file was generated based on '/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HSMRO_FuseReactiveWhileCount_Items_Property.h>
#include <Fuse.Reactive.WhileCount.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class HSMRO_FuseReactiveWhileCount_Items_Property
// {
static void HSMRO_FuseReactiveWhileCount_Items_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::WhileCount_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Reactive.WhileCount*/], offsetof(HSMRO_FuseReactiveWhileCount_Items_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* HSMRO_FuseReactiveWhileCount_Items_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(HSMRO_FuseReactiveWhileCount_Items_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("HSMRO_FuseReactiveWhileCount_Items_Property", options);
    type->fp_build_ = HSMRO_FuseReactiveWhileCount_Items_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))HSMRO_FuseReactiveWhileCount_Items_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))HSMRO_FuseReactiveWhileCount_Items_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))HSMRO_FuseReactiveWhileCount_Items_Property__Set1_fn;
    return type;
}

// public HSMRO_FuseReactiveWhileCount_Items_Property(Fuse.Reactive.WhileCount obj, Uno.UX.Selector name)
void HSMRO_FuseReactiveWhileCount_Items_Property__ctor_3_fn(HSMRO_FuseReactiveWhileCount_Items_Property* __this, ::g::Fuse::Reactive::WhileCount* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed object Get(Uno.UX.PropertyObject obj)
void HSMRO_FuseReactiveWhileCount_Items_Property__Get1_fn(HSMRO_FuseReactiveWhileCount_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("HSMRO_FuseReactiveWhileCount_Items_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Reactive::WhileCount*>(obj, ::TYPES[0/*Fuse.Reactive.WhileCount*/]))->Items(), void();
}

// public HSMRO_FuseReactiveWhileCount_Items_Property New(Fuse.Reactive.WhileCount obj, Uno.UX.Selector name)
void HSMRO_FuseReactiveWhileCount_Items_Property__New1_fn(::g::Fuse::Reactive::WhileCount* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseReactiveWhileCount_Items_Property** __retval)
{
    *__retval = HSMRO_FuseReactiveWhileCount_Items_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void HSMRO_FuseReactiveWhileCount_Items_Property__get_Object_fn(HSMRO_FuseReactiveWhileCount_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin)
void HSMRO_FuseReactiveWhileCount_Items_Property__Set1_fn(HSMRO_FuseReactiveWhileCount_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("HSMRO_FuseReactiveWhileCount_Items_Property", "Set(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Reactive::WhileCount*>(obj, ::TYPES[0/*Fuse.Reactive.WhileCount*/]))->Items(v);
}

// public HSMRO_FuseReactiveWhileCount_Items_Property(Fuse.Reactive.WhileCount obj, Uno.UX.Selector name) [instance]
void HSMRO_FuseReactiveWhileCount_Items_Property::ctor_3(::g::Fuse::Reactive::WhileCount* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public HSMRO_FuseReactiveWhileCount_Items_Property New(Fuse.Reactive.WhileCount obj, Uno.UX.Selector name) [static]
HSMRO_FuseReactiveWhileCount_Items_Property* HSMRO_FuseReactiveWhileCount_Items_Property::New1(::g::Fuse::Reactive::WhileCount* obj, ::g::Uno::UX::Selector name)
{
    HSMRO_FuseReactiveWhileCount_Items_Property* obj1 = (HSMRO_FuseReactiveWhileCount_Items_Property*)uNew(HSMRO_FuseReactiveWhileCount_Items_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
