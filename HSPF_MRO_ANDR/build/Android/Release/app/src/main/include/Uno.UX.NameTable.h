// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Source/Uno/UX/NameTable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class NameTable
// {
uType* NameTable_typeof();
void NameTable__ctor__fn(NameTable* __this, NameTable* parentTable, uArray* entries);
void NameTable__New1_fn(NameTable* parentTable, uArray* entries, NameTable** __retval);
void NameTable__get_Objects_fn(NameTable* __this, uObject** __retval);
void NameTable__get_Properties_fn(NameTable* __this, uObject** __retval);
void NameTable__set_Properties_fn(NameTable* __this, uObject* value);
void NameTable__get_This_fn(NameTable* __this, uObject** __retval);
void NameTable__set_This_fn(NameTable* __this, uObject* value);

struct NameTable : uObject
{
    static uSStrong<NameTable*> Empty_;
    static uSStrong<NameTable*>& Empty() { return NameTable_typeof()->Init(), Empty_; }
    uStrong<uArray*> Entries;
    uStrong< ::g::Uno::Collections::List*> _objects;
    uStrong<uObject*> _properties;
    uStrong<uObject*> _this;
    uStrong<NameTable*> ParentTable;

    void ctor_(NameTable* parentTable, uArray* entries);
    uObject* Objects();
    uObject* Properties();
    void Properties(uObject* value);
    uObject* This();
    void This(uObject* value);
    static NameTable* New1(NameTable* parentTable, uArray* entries);
};
// }

}}} // ::g::Uno::UX
