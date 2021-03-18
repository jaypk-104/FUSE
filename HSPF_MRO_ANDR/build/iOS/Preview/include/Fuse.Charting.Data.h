// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/Data.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Charting{struct Data;}}}
namespace g{namespace Fuse{namespace Charting{struct PlotBehavior;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal sealed class Data
// {
uType* Data_typeof();
void Data__ctor__fn(Data* __this);
void Data__get_Color_fn(Data* __this, ::g::Uno::Float4* __retval);
void Data__set_Color_fn(Data* __this, ::g::Uno::Float4* value);
void Data__get_DefaultValue_fn(::g::Uno::Float4* __retval);
void Data__Invalidate_fn(Data* __this);
void Data__get_Label_fn(Data* __this, uString** __retval);
void Data__set_Label_fn(Data* __this, uString* value);
void Data__New1_fn(Data** __retval);
void Data__get_SourceObject_fn(Data* __this, uObject** __retval);
void Data__set_SourceObject_fn(Data* __this, uObject* value);
void Data__get_SourceValue_fn(Data* __this, ::g::Uno::Float4* __retval);
void Data__set_SourceValue_fn(Data* __this, ::g::Uno::Float4* value);

struct Data : uObject
{
    ::g::Uno::Float4 _sourceValue;
    uStrong<uObject*> _sourceObject;
    uStrong<uString*> _label;
    ::g::Uno::Float4 _color;
    ::g::Uno::Float4 Value;
    ::g::Uno::Float4 CumulativeValue;
    uStrong< ::g::Fuse::Charting::PlotBehavior*> Behavior;

    void ctor_();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    void Invalidate();
    uString* Label();
    void Label(uString* value);
    uObject* SourceObject();
    void SourceObject(uObject* value);
    ::g::Uno::Float4 SourceValue();
    void SourceValue(::g::Uno::Float4 value);
    static Data* New1();
    static ::g::Uno::Float4 DefaultValue();
};
// }

}}} // ::g::Fuse::Charting
