// This file was generated based on '.uno/ux15/HS MRO.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Resources{struct HttpImageSource;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HSMRO_FuseResourcesHttpImageSource_Url_Property;}

namespace g{

// internal sealed class HSMRO_FuseResourcesHttpImageSource_Url_Property
// {
::g::Uno::UX::Property1_type* HSMRO_FuseResourcesHttpImageSource_Url_Property_typeof();
void HSMRO_FuseResourcesHttpImageSource_Url_Property__ctor_3_fn(HSMRO_FuseResourcesHttpImageSource_Url_Property* __this, ::g::Fuse::Resources::HttpImageSource* obj, ::g::Uno::UX::Selector* name);
void HSMRO_FuseResourcesHttpImageSource_Url_Property__Get1_fn(HSMRO_FuseResourcesHttpImageSource_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void HSMRO_FuseResourcesHttpImageSource_Url_Property__New1_fn(::g::Fuse::Resources::HttpImageSource* obj, ::g::Uno::UX::Selector* name, HSMRO_FuseResourcesHttpImageSource_Url_Property** __retval);
void HSMRO_FuseResourcesHttpImageSource_Url_Property__get_Object_fn(HSMRO_FuseResourcesHttpImageSource_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void HSMRO_FuseResourcesHttpImageSource_Url_Property__Set1_fn(HSMRO_FuseResourcesHttpImageSource_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);

struct HSMRO_FuseResourcesHttpImageSource_Url_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Resources::HttpImageSource*> _obj;

    void ctor_3(::g::Fuse::Resources::HttpImageSource* obj, ::g::Uno::UX::Selector name);
    static HSMRO_FuseResourcesHttpImageSource_Url_Property* New1(::g::Fuse::Resources::HttpImageSource* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
