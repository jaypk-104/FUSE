// This file was generated based on /usr/local/share/uno/Packages/Fuse.Charting/1.12.0/PlotExpression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Charting{struct PlotExpression;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Charting{

// public sealed class PlotExpression
// {
::g::Fuse::Reactive::Expression_type* PlotExpression_typeof();
void PlotExpression__ctor_1_fn(PlotExpression* __this, uString* identifier);
void PlotExpression__AccessField_fn(int32_t* f, uObject* value, uObject** __retval);
void PlotExpression__get_Identifier_fn(PlotExpression* __this, uString** __retval);
void PlotExpression__set_Identifier_fn(PlotExpression* __this, uString* value);
void PlotExpression__LenientToFloat4_fn(uObject* value, ::g::Uno::Float4* __retval);
void PlotExpression__New1_fn(uString* identifier, PlotExpression** __retval);
void PlotExpression__Subscribe_fn(PlotExpression* __this, uObject* context, uObject* listener, uObject** __retval);

struct PlotExpression : ::g::Fuse::Reactive::Expression
{
    uStrong<uString*> _idObject;
    uStrong<uString*> _idProperty;
    int32_t _field;
    static uSStrong<uArray*> _tokenSplit_;
    static uSStrong<uArray*>& _tokenSplit() { return PlotExpression_typeof()->Init(), _tokenSplit_; }
    uStrong<uString*> _Identifier;

    void ctor_1(uString* identifier);
    uString* Identifier();
    void Identifier(uString* value);
    static uObject* AccessField(int32_t f, uObject* value);
    static ::g::Uno::Float4 LenientToFloat4(uObject* value);
    static PlotExpression* New1(uString* identifier);
};
// }

}}} // ::g::Fuse::Charting
