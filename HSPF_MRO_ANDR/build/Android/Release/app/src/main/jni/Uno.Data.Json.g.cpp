// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.KeyCollection.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Data.Json.Array.h>
#include <Uno.Data.Json.AtomicValue-1.h>
#include <Uno.Data.Json.Boolean.h>
#include <Uno.Data.Json.JsonDataType.h>
#include <Uno.Data.Json.JsonException.h>
#include <Uno.Data.Json.JsonReader.h>
#include <Uno.Data.Json.JsonWriter.h>
#include <Uno.Data.Json.Null.h>
#include <Uno.Data.Json.Number.h>
#include <Uno.Data.Json.Object.h>
#include <Uno.Data.Json.Parser.h>
#include <Uno.Data.Json.String.h>
#include <Uno.Data.Json.Value.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.IO.StringReader.h>
#include <Uno.IO.TextReader.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.UInt.h>
static uString* STRINGS[17];
static uType* TYPES[11];

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// /usr/local/share/uno/Packages/Uno.Data.Json/1.12.0/Source/JsonValue.uno
// -----------------------------------------------------------------------

// internal sealed class Array
// {
static void Array_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Data::Json::Value_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<Uno.Data.Json.Value>*/], offsetof(Array, _values), 0);
}

uType* Array_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Json::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Json.Array", options);
    type->fp_build_ = Array_build;
    type->fp_ctor_ = (void*)Array__New1_fn;
    return type;
}

// public generated Array()
void Array__ctor_1_fn(Array* __this)
{
    __this->ctor_1();
}

// internal void Add(Uno.Data.Json.Value v)
void Array__Add_fn(Array* __this, ::g::Uno::Data::Json::Value* v)
{
    __this->Add(v);
}

// public int get_Count()
void Array__get_Count_fn(Array* __this, int32_t* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Data.Json.Value get_Item(int index)
void Array__get_Item_fn(Array* __this, int32_t* index, ::g::Uno::Data::Json::Value** __retval)
{
    *__retval = __this->Item(*index);
}

// public generated Array New()
void Array__New1_fn(Array** __retval)
{
    *__retval = Array::New1();
}

// public generated Array() [instance]
void Array::ctor_1()
{
    _values = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Uno.Data.Json.Value>*/]));
    ctor_();
}

// internal void Add(Uno.Data.Json.Value v) [instance]
void Array::Add(::g::Uno::Data::Json::Value* v)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_values), v);
}

// public int get_Count() [instance]
int32_t Array::Count()
{
    return uPtr(_values)->Count();
}

// public Uno.Data.Json.Value get_Item(int index) [instance]
::g::Uno::Data::Json::Value* Array::Item(int32_t index)
{
    ::g::Uno::Data::Json::Value* ret2;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int32_t>(index), &ret2), ret2);
}

// public generated Array New() [static]
Array* Array::New1()
{
    Array* obj1 = (Array*)uNew(Array_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Data.Json/1.12.0/Source/JsonValue.uno
// -----------------------------------------------------------------------

// internal abstract class AtomicValue<T>
// {
static void AtomicValue_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* AtomicValue_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Json::Value_typeof();
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(AtomicValue);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Json.AtomicValue`1", options);
    type->fp_build_ = AtomicValue_build;
    type->fp_ToString = (void(*)(uObject*, uString**))AtomicValue__ToString_fn;
    return type;
}

// protected AtomicValue(T val)
void AtomicValue__ctor_1_fn(AtomicValue* __this, void* val)
{
    __this->ctor_();
    __this->_val() = val;
}

// public override sealed string ToString()
void AtomicValue__ToString_fn(AtomicValue* __this, uString** __retval)
{
    return *__retval = ::g::Uno::Object::ToString(uBoxPtr(__this->__type->GetBase(AtomicValue_typeof())->T(0), uPtr(__this->_val()), U_ALLOCA(__this->__type->GetBase(AtomicValue_typeof())->T(0)->ObjectSize))), void();
}

// public T get_Value()
void AtomicValue__get_Value_fn(AtomicValue* __this, uTRef __retval)
{
    return __retval.Store(__this->_val()), void();
}
// }

// /usr/local/share/uno/Packages/Uno.Data.Json/1.12.0/Source/JsonValue.uno
// -----------------------------------------------------------------------

// internal sealed class Boolean
// {
// static generated Boolean()
static void Boolean__cctor__fn(uType* __type)
{
    Boolean::True_ = Boolean::New1(true);
    Boolean::False_ = Boolean::New1(false);
}

static void Boolean_build(uType* type)
{
    type->SetBase(::g::Uno::Data::Json::AtomicValue_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        type, (uintptr_t)&Boolean::True_, uFieldFlagsStatic,
        type, (uintptr_t)&Boolean::False_, uFieldFlagsStatic);
}

uType* Boolean_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Json::AtomicValue_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Boolean);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Json.Boolean", options);
    type->fp_build_ = Boolean_build;
    type->fp_cctor_ = Boolean__cctor__fn;
    return type;
}

// private Boolean(bool b)
void Boolean__ctor_2_fn(Boolean* __this, bool* b)
{
    __this->ctor_2(*b);
}

// private Boolean New(bool b)
void Boolean__New1_fn(bool* b, Boolean** __retval)
{
    *__retval = Boolean::New1(*b);
}

uSStrong<Boolean*> Boolean::True_;
uSStrong<Boolean*> Boolean::False_;

// private Boolean(bool b) [instance]
void Boolean::ctor_2(bool b)
{
    ::g::Uno::Data::Json::AtomicValue__ctor_1_fn(this, uCRef(b));
}

// private Boolean New(bool b) [static]
Boolean* Boolean::New1(bool b)
{
    Boolean* obj1 = (Boolean*)uNew(Boolean_typeof());
    obj1->ctor_2(b);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Data.Json/1.12.0/Source/JsonDataType.uno
// --------------------------------------------------------------------------

// public enum JsonDataType
uEnumType* JsonDataType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Data.Json.JsonDataType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Error", -1LL,
        "Null", 0LL,
        "Number", 1LL,
        "String", 2LL,
        "Boolean", 3LL,
        "Array", 4LL,
        "Object", 5LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Data.Json/1.12.0/Source/JsonException.uno
// ---------------------------------------------------------------------------

// public sealed class JsonException
// {
static void JsonException_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* JsonException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(JsonException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Data.Json.JsonException", options);
    type->fp_build_ = JsonException_build;
    return type;
}

// internal JsonException(string message)
void JsonException__ctor_3_fn(JsonException* __this, uString* message)
{
    __this->ctor_3(message);
}

// internal JsonException New(string message)
void JsonException__New4_fn(uString* message, JsonException** __retval)
{
    *__retval = JsonException::New4(message);
}

// internal JsonException(string message) [instance]
void JsonException::ctor_3(uString* message)
{
    ctor_1(message);
}

// internal JsonException New(string message) [static]
JsonException* JsonException::New4(uString* message)
{
    JsonException* obj1 = (JsonException*)uNew(JsonException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Data.Json/1.12.0/Source/JsonReader.uno
// ------------------------------------------------------------------------

// public sealed class JsonReader
// {
static void JsonReader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Json node is not an array");
    ::TYPES[1] = ::g::Uno::Data::Json::Boolean_typeof();
    ::TYPES[2] = ::g::Uno::Data::Json::Number_typeof();
    ::TYPES[3] = ::g::Uno::Data::Json::String_typeof();
    ::TYPES[4] = ::g::Uno::Data::Json::Object_typeof();
    ::TYPES[5] = ::g::Uno::Data::Json::Array_typeof();
    ::TYPES[6] = ::g::Uno::Data::Json::Null_typeof();
    ::TYPES[7] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Data::Json::Value_typeof(), offsetof(JsonReader, _value), 0);
}

uType* JsonReader_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JsonReader);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Json.JsonReader", options);
    type->fp_build_ = JsonReader_build;
    return type;
}

// private JsonReader(Uno.Data.Json.Value value)
void JsonReader__ctor__fn(JsonReader* __this, ::g::Uno::Data::Json::Value* value)
{
    __this->ctor_(value);
}

// public bool AsBool()
void JsonReader__AsBool_fn(JsonReader* __this, bool* __retval)
{
    *__retval = __this->AsBool();
}

// public double AsNumber()
void JsonReader__AsNumber_fn(JsonReader* __this, double* __retval)
{
    *__retval = __this->AsNumber();
}

// public string AsString()
void JsonReader__AsString_fn(JsonReader* __this, uString** __retval)
{
    *__retval = __this->AsString();
}

// public int get_Count()
void JsonReader__get_Count_fn(JsonReader* __this, int32_t* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Data.Json.JsonReader get_Item(int index)
void JsonReader__get_Item_fn(JsonReader* __this, int32_t* index, JsonReader** __retval)
{
    *__retval = __this->Item(*index);
}

// public Uno.Data.Json.JsonReader get_Item(string key)
void JsonReader__get_Item1_fn(JsonReader* __this, uString* key, JsonReader** __retval)
{
    *__retval = __this->Item1(key);
}

// public Uno.Data.Json.JsonDataType get_JsonDataType()
void JsonReader__get_JsonDataType_fn(JsonReader* __this, int32_t* __retval)
{
    *__retval = __this->JsonDataType();
}

// public string[] get_Keys()
void JsonReader__get_Keys_fn(JsonReader* __this, uArray** __retval)
{
    *__retval = __this->Keys();
}

// private JsonReader New(Uno.Data.Json.Value value)
void JsonReader__New1_fn(::g::Uno::Data::Json::Value* value, JsonReader** __retval)
{
    *__retval = JsonReader::New1(value);
}

// public static explicit operator string(Uno.Data.Json.JsonReader value)
void JsonReader__op_Explicit1_fn(JsonReader* value, uString** __retval)
{
    *__retval = JsonReader::op_Explicit1(value);
}

// public static explicit operator bool(Uno.Data.Json.JsonReader value)
void JsonReader__op_Explicit3_fn(JsonReader* value, bool* __retval)
{
    *__retval = JsonReader::op_Explicit3(value);
}

// public static Uno.Data.Json.JsonReader Parse(string json)
void JsonReader__Parse_fn(uString* json, JsonReader** __retval)
{
    *__retval = JsonReader::Parse(json);
}

// private JsonReader(Uno.Data.Json.Value value) [instance]
void JsonReader::ctor_(::g::Uno::Data::Json::Value* value)
{
    _value = value;
}

// public bool AsBool() [instance]
bool JsonReader::AsBool()
{
    bool ret2;
    return (::g::Uno::Data::Json::AtomicValue__get_Value_fn(uPtr(uCast< ::g::Uno::Data::Json::Boolean*>(_value, ::TYPES[1/*Uno.Data.Json.Boolean*/])), &ret2), ret2);
}

// public double AsNumber() [instance]
double JsonReader::AsNumber()
{
    double ret3;
    return (::g::Uno::Data::Json::AtomicValue__get_Value_fn(uPtr(uCast< ::g::Uno::Data::Json::Number*>(_value, ::TYPES[2/*Uno.Data.Json.Number*/])), &ret3), ret3);
}

// public string AsString() [instance]
uString* JsonReader::AsString()
{
    uString* ret4;
    return (::g::Uno::Data::Json::AtomicValue__get_Value_fn(uPtr(uCast< ::g::Uno::Data::Json::String*>(_value, ::TYPES[3/*Uno.Data.Json.String*/])), &ret4), ret4);
}

// public int get_Count() [instance]
int32_t JsonReader::Count()
{
    ::g::Uno::Data::Json::Object* obj = uAs< ::g::Uno::Data::Json::Object*>(_value, ::TYPES[4/*Uno.Data.Json.Object*/]);

    if (obj != NULL)
        return uPtr(obj)->Count();

    ::g::Uno::Data::Json::Array* array = uAs< ::g::Uno::Data::Json::Array*>(_value, ::TYPES[5/*Uno.Data.Json.Array*/]);

    if (array != NULL)
        return uPtr(array)->Count();

    return 0;
}

// public Uno.Data.Json.JsonReader get_Item(int index) [instance]
JsonReader* JsonReader::Item(int32_t index)
{
    ::g::Uno::Data::Json::Array* array = uAs< ::g::Uno::Data::Json::Array*>(_value, ::TYPES[5/*Uno.Data.Json.Array*/]);

    if (array == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Json node i...*/]));

    return JsonReader::New1(uPtr(array)->Item(index));
}

// public Uno.Data.Json.JsonReader get_Item(string key) [instance]
JsonReader* JsonReader::Item1(uString* key)
{
    ::g::Uno::Data::Json::Object* obj = uAs< ::g::Uno::Data::Json::Object*>(_value, ::TYPES[4/*Uno.Data.Json.Object*/]);

    if ((obj == NULL) || !uPtr(obj)->ContainsKey(key))
        return NULL;

    return JsonReader::New1(uPtr(obj)->Item(key));
}

// public Uno.Data.Json.JsonDataType get_JsonDataType() [instance]
int32_t JsonReader::JsonDataType()
{
    if (uIs((::g::Uno::Data::Json::Value*)_value, ::TYPES[2/*Uno.Data.Json.Number*/]))
        return 1;

    if (uIs((::g::Uno::Data::Json::Value*)_value, ::TYPES[1/*Uno.Data.Json.Boolean*/]))
        return 3;

    if (uIs((::g::Uno::Data::Json::Value*)_value, ::TYPES[3/*Uno.Data.Json.String*/]))
        return 2;

    if (uIs((::g::Uno::Data::Json::Value*)_value, ::TYPES[5/*Uno.Data.Json.Array*/]))
        return 4;

    if (uIs((::g::Uno::Data::Json::Value*)_value, ::TYPES[4/*Uno.Data.Json.Object*/]))
        return 5;

    if (uIs((::g::Uno::Data::Json::Value*)_value, ::TYPES[6/*Uno.Data.Json.Null*/]))
        return 0;

    return -1;
}

// public string[] get_Keys() [instance]
uArray* JsonReader::Keys()
{
    ::g::Uno::Data::Json::Object* obj = uAs< ::g::Uno::Data::Json::Object*>(_value, ::TYPES[4/*Uno.Data.Json.Object*/]);

    if (obj == NULL)
        return uArray::New(::TYPES[7/*string[]*/], 0);

    return uPtr(obj)->Keys();
}

// private JsonReader New(Uno.Data.Json.Value value) [static]
JsonReader* JsonReader::New1(::g::Uno::Data::Json::Value* value)
{
    JsonReader* obj1 = (JsonReader*)uNew(JsonReader_typeof());
    obj1->ctor_(value);
    return obj1;
}

// public static explicit operator string(Uno.Data.Json.JsonReader value) [static]
uString* JsonReader::op_Explicit1(JsonReader* value)
{
    return uPtr(value)->AsString();
}

// public static explicit operator bool(Uno.Data.Json.JsonReader value) [static]
bool JsonReader::op_Explicit3(JsonReader* value)
{
    return uPtr(value)->AsBool();
}

// public static Uno.Data.Json.JsonReader Parse(string json) [static]
JsonReader* JsonReader::Parse(uString* json)
{
    return JsonReader::New1(::g::Uno::Data::Json::Parser::Parse(::g::Uno::IO::StringReader::New1(json)));
}
// }

// /usr/local/share/uno/Packages/Uno.Data.Json/1.12.0/Source/JsonWriter.uno
// ------------------------------------------------------------------------

// public static class JsonWriter
// {
static void JsonWriter_build(uType* type)
{
    ::STRINGS[1] = uString::Const("\\\"");
    ::STRINGS[2] = uString::Const("\\\\");
    ::STRINGS[3] = uString::Const("\\b");
    ::STRINGS[4] = uString::Const("\\f");
    ::STRINGS[5] = uString::Const("\\n");
    ::STRINGS[6] = uString::Const("\\r");
    ::STRINGS[7] = uString::Const("\\t");
    ::STRINGS[8] = uString::Const("\\u{0:x4}");
    ::STRINGS[9] = uString::Const("\"");
    ::TYPES[8] = uObject_typeof()->Array();
}

uClassType* JsonWriter_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Data.Json.JsonWriter", options);
    type->fp_build_ = JsonWriter_build;
    return type;
}

// private static void EscapeString(string str, Uno.Text.StringBuilder sb)
void JsonWriter__EscapeString1_fn(uString* str, ::g::Uno::Text::StringBuilder* sb)
{
    JsonWriter::EscapeString1(str, sb);
}

// public static string QuoteString(string str)
void JsonWriter__QuoteString_fn(uString* str, uString** __retval)
{
    *__retval = JsonWriter::QuoteString(str);
}

// private static void EscapeString(string str, Uno.Text.StringBuilder sb) [static]
void JsonWriter::EscapeString1(uString* str, ::g::Uno::Text::StringBuilder* sb)
{
    for (int32_t i = 0; i < uPtr(str)->Length(); ++i)
    {
        char16_t ch = uPtr(str)->Item(i);

        switch (ch)
        {
            case '"':
            {
                uPtr(sb)->Append2(::STRINGS[1/*"\\\""*/]);
                break;
            }
            case '\\':
            {
                uPtr(sb)->Append2(::STRINGS[2/*"\\\\"*/]);
                break;
            }
            case 8:
            {
                uPtr(sb)->Append2(::STRINGS[3/*"\\b"*/]);
                break;
            }
            case 12:
            {
                uPtr(sb)->Append2(::STRINGS[4/*"\\f"*/]);
                break;
            }
            case 10:
            {
                uPtr(sb)->Append2(::STRINGS[5/*"\\n"*/]);
                break;
            }
            case 13:
            {
                uPtr(sb)->Append2(::STRINGS[6/*"\\r"*/]);
                break;
            }
            case 9:
            {
                uPtr(sb)->Append2(::STRINGS[7/*"\\t"*/]);
                break;
            }
            default:
            {
                if ((int32_t)ch <= 31)
                    uPtr(sb)->Append2(::g::Uno::String::Format(::STRINGS[8/*"\\u{0:x4}"*/], uArray::Init<uObject*>(::TYPES[8/*object[]*/], 1, uBox<int32_t>(::g::Uno::Int_typeof(), (int32_t)ch))));
                else
                    uPtr(sb)->Append(ch);

                break;
            }
        }
    }
}

// public static string QuoteString(string str) [static]
uString* JsonWriter::QuoteString(uString* str)
{
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    sb->Append2(::STRINGS[9/*"\""*/]);
    JsonWriter::EscapeString1(str, sb);
    sb->Append2(::STRINGS[9/*"\""*/]);
    return sb->ToString();
}
// }

// /usr/local/share/uno/Packages/Uno.Data.Json/1.12.0/Source/JsonValue.uno
// -----------------------------------------------------------------------

// internal sealed class Null
// {
// static generated Null()
static void Null__cctor__fn(uType* __type)
{
    Null::Singleton_ = Null::New1();
}

static void Null_build(uType* type)
{
    type->SetFields(0,
        type, (uintptr_t)&Null::Singleton_, uFieldFlagsStatic);
}

uType* Null_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Json::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Null);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Json.Null", options);
    type->fp_build_ = Null_build;
    type->fp_ctor_ = (void*)Null__New1_fn;
    type->fp_cctor_ = Null__cctor__fn;
    return type;
}

// private Null()
void Null__ctor_1_fn(Null* __this)
{
    __this->ctor_1();
}

// private Null New()
void Null__New1_fn(Null** __retval)
{
    *__retval = Null::New1();
}

uSStrong<Null*> Null::Singleton_;

// private Null() [instance]
void Null::ctor_1()
{
    ctor_();
}

// private Null New() [static]
Null* Null::New1()
{
    Null* obj1 = (Null*)uNew(Null_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Data.Json/1.12.0/Source/JsonValue.uno
// -----------------------------------------------------------------------

// internal sealed class Number
// {
static void Number_build(uType* type)
{
    type->SetBase(::g::Uno::Data::Json::AtomicValue_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
    type->SetFields(1);
}

uType* Number_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Json::AtomicValue_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Number);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Json.Number", options);
    type->fp_build_ = Number_build;
    return type;
}

// public Number(double d)
void Number__ctor_2_fn(Number* __this, double* d)
{
    __this->ctor_2(*d);
}

// public Number New(double d)
void Number__New1_fn(double* d, Number** __retval)
{
    *__retval = Number::New1(*d);
}

// public Number(double d) [instance]
void Number::ctor_2(double d)
{
    ::g::Uno::Data::Json::AtomicValue__ctor_1_fn(this, uCRef(d));
}

// public Number New(double d) [static]
Number* Number::New1(double d)
{
    Number* obj1 = (Number*)uNew(Number_typeof());
    obj1->ctor_2(d);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Data.Json/1.12.0/Source/JsonValue.uno
// -----------------------------------------------------------------------

// internal sealed class Object
// {
static void Object_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Data::Json::Value_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(5/*ToArray<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[9/*Uno.Collections.Dictionary<string, Uno.Data.Json.Value>*/], offsetof(Object, _values), 0);
}

uType* Object_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Json::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Json.Object", options);
    type->fp_build_ = Object_build;
    type->fp_ctor_ = (void*)Object__New1_fn;
    return type;
}

// public generated Object()
void Object__ctor_1_fn(Object* __this)
{
    __this->ctor_1();
}

// public void Add(string key, Uno.Data.Json.Value val)
void Object__Add_fn(Object* __this, uString* key, ::g::Uno::Data::Json::Value* val)
{
    __this->Add(key, val);
}

// public bool ContainsKey(string key)
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// public int get_Count()
void Object__get_Count_fn(Object* __this, int32_t* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Data.Json.Value get_Item(string key)
void Object__get_Item_fn(Object* __this, uString* key, ::g::Uno::Data::Json::Value** __retval)
{
    *__retval = __this->Item(key);
}

// public string[] get_Keys()
void Object__get_Keys_fn(Object* __this, uArray** __retval)
{
    *__retval = __this->Keys();
}

// public generated Object New()
void Object__New1_fn(Object** __retval)
{
    *__retval = Object::New1();
}

// public generated Object() [instance]
void Object::ctor_1()
{
    _values = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<string, Uno.Data.Json.Value>*/]));
    ctor_();
}

// public void Add(string key, Uno.Data.Json.Value val) [instance]
void Object::Add(uString* key, ::g::Uno::Data::Json::Value* val)
{
    bool ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_values), key, &ret2), ret2))
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_values), key, val);
    else
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_values), key, val);
}

// public bool ContainsKey(string key) [instance]
bool Object::ContainsKey(uString* key)
{
    bool ret3;
    return (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_values), key, &ret3), ret3);
}

// public int get_Count() [instance]
int32_t Object::Count()
{
    return uPtr(_values)->Count();
}

// public Uno.Data.Json.Value get_Item(string key) [instance]
::g::Uno::Data::Json::Value* Object::Item(uString* key)
{
    ::g::Uno::Data::Json::Value* ret4;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_values), key, &ret4), ret4);
}

// public string[] get_Keys() [instance]
uArray* Object::Keys()
{
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[10/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)((::g::Uno::Collections::Dictionary__KeyCollection*)uPtr(_values)->Keys()));
}

// public generated Object New() [static]
Object* Object::New1()
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Data.Json/1.12.0/Source/Parser.uno
// --------------------------------------------------------------------

// internal sealed class Parser
// {
static void Parser_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Expected end of file");
    ::STRINGS[11] = uString::Const("false");
    ::STRINGS[12] = uString::Const("null");
    ::STRINGS[13] = uString::Const("Expected ':'");
    ::STRINGS[14] = uString::Const("true");
    ::STRINGS[15] = uString::Const("Unexpected character: ");
    ::STRINGS[16] = uString::Const("Unexpected end of file");
    type->SetDependencies(
        ::g::Uno::Data::Json::Boolean_typeof(),
        ::g::Uno::Data::Json::Null_typeof());
    type->SetFields(0,
        ::g::Uno::IO::TextReader_typeof(), offsetof(Parser, _json), 0);
}

uType* Parser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Parser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Json.Parser", options);
    type->fp_build_ = Parser_build;
    return type;
}

// private Parser(Uno.IO.TextReader json)
void Parser__ctor__fn(Parser* __this, ::g::Uno::IO::TextReader* json)
{
    __this->ctor_(json);
}

// private void Advance()
void Parser__Advance_fn(Parser* __this)
{
    __this->Advance();
}

// private char Consume()
void Parser__Consume_fn(Parser* __this, char16_t* __retval)
{
    *__retval = __this->Consume();
}

// private bool Eof()
void Parser__Eof_fn(Parser* __this, bool* __retval)
{
    *__retval = __this->Eof();
}

// private static uint GetHexValue(char hexChar)
void Parser__GetHexValue_fn(char16_t* hexChar, uint32_t* __retval)
{
    *__retval = Parser::GetHexValue(*hexChar);
}

// private static bool IsHexValue(char ch)
void Parser__IsHexValue_fn(char16_t* ch, bool* __retval)
{
    *__retval = Parser::IsHexValue(*ch);
}

// private bool IsNumericStartChar(char c)
void Parser__IsNumericStartChar_fn(Parser* __this, char16_t* c, bool* __retval)
{
    *__retval = __this->IsNumericStartChar(*c);
}

// private Parser New(Uno.IO.TextReader json)
void Parser__New1_fn(::g::Uno::IO::TextReader* json, Parser** __retval)
{
    *__retval = Parser::New1(json);
}

// public static Uno.Data.Json.Value Parse(Uno.IO.TextReader json)
void Parser__Parse_fn(::g::Uno::IO::TextReader* json, ::g::Uno::Data::Json::Value** __retval)
{
    *__retval = Parser::Parse(json);
}

// private Uno.Data.Json.Array ParseArray()
void Parser__ParseArray_fn(Parser* __this, ::g::Uno::Data::Json::Array** __retval)
{
    *__retval = __this->ParseArray();
}

// private Uno.Data.Json.Boolean ParseFalse()
void Parser__ParseFalse_fn(Parser* __this, ::g::Uno::Data::Json::Boolean** __retval)
{
    *__retval = __this->ParseFalse();
}

// private void ParseKeyword(string keyword)
void Parser__ParseKeyword_fn(Parser* __this, uString* keyword)
{
    __this->ParseKeyword(keyword);
}

// private Uno.Data.Json.Null ParseNull()
void Parser__ParseNull_fn(Parser* __this, ::g::Uno::Data::Json::Null** __retval)
{
    *__retval = __this->ParseNull();
}

// private Uno.Data.Json.Number ParseNumber()
void Parser__ParseNumber_fn(Parser* __this, ::g::Uno::Data::Json::Number** __retval)
{
    *__retval = __this->ParseNumber();
}

// private Uno.Data.Json.Object ParseObject()
void Parser__ParseObject_fn(Parser* __this, ::g::Uno::Data::Json::Object** __retval)
{
    *__retval = __this->ParseObject();
}

// private string ParseRawString()
void Parser__ParseRawString_fn(Parser* __this, uString** __retval)
{
    *__retval = __this->ParseRawString();
}

// private Uno.Data.Json.String ParseString()
void Parser__ParseString_fn(Parser* __this, ::g::Uno::Data::Json::String** __retval)
{
    *__retval = __this->ParseString();
}

// private Uno.Data.Json.Boolean ParseTrue()
void Parser__ParseTrue_fn(Parser* __this, ::g::Uno::Data::Json::Boolean** __retval)
{
    *__retval = __this->ParseTrue();
}

// private Uno.Data.Json.Value ParseValue()
void Parser__ParseValue_fn(Parser* __this, ::g::Uno::Data::Json::Value** __retval)
{
    *__retval = __this->ParseValue();
}

// private char Peek()
void Parser__Peek_fn(Parser* __this, char16_t* __retval)
{
    *__retval = __this->Peek();
}

// private void SkipWhiteSpace()
void Parser__SkipWhiteSpace_fn(Parser* __this)
{
    __this->SkipWhiteSpace();
}

// private static Uno.Data.Json.JsonException UnexpectedCharacter(char c)
void Parser__UnexpectedCharacter_fn(char16_t* c, ::g::Uno::Data::Json::JsonException** __retval)
{
    *__retval = Parser::UnexpectedCharacter(*c);
}

// private static Uno.Data.Json.JsonException UnexpectedEndOfFile()
void Parser__UnexpectedEndOfFile_fn(::g::Uno::Data::Json::JsonException** __retval)
{
    *__retval = Parser::UnexpectedEndOfFile();
}

// private Parser(Uno.IO.TextReader json) [instance]
void Parser::ctor_(::g::Uno::IO::TextReader* json)
{
    _json = json;
}

// private void Advance() [instance]
void Parser::Advance()
{
    uPtr(_json)->Read();
}

// private char Consume() [instance]
char16_t Parser::Consume()
{
    int32_t ret = uPtr(_json)->Read();

    if (ret < 0)
        U_THROW(Parser::UnexpectedEndOfFile());

    return (char16_t)ret;
}

// private bool Eof() [instance]
bool Parser::Eof()
{
    return uPtr(_json)->Peek() < 0;
}

// private bool IsNumericStartChar(char c) [instance]
bool Parser::IsNumericStartChar(char16_t c)
{
    return ::g::Uno::Char::IsDigit(c) || (c == '-');
}

// private Uno.Data.Json.Array ParseArray() [instance]
::g::Uno::Data::Json::Array* Parser::ParseArray()
{
    Advance();
    ::g::Uno::Data::Json::Array* a = ::g::Uno::Data::Json::Array::New1();

    while (!Eof())
    {
        SkipWhiteSpace();
        char16_t c = Peek();

        if (c == ']')
        {
            Advance();
            return a;
        }

        ::g::Uno::Data::Json::Value* v = ParseValue();
        uPtr(a)->Add(v);
        SkipWhiteSpace();
        c = Peek();

        if (c == ',')
        {
            Advance();
            continue;
        }
        else if (c == ']')
        {
            Advance();
            return a;
        }
        else
            U_THROW(Parser::UnexpectedCharacter(c));
    }

    U_THROW(Parser::UnexpectedEndOfFile());
}

// private Uno.Data.Json.Boolean ParseFalse() [instance]
::g::Uno::Data::Json::Boolean* Parser::ParseFalse()
{
    ParseKeyword(::STRINGS[11/*"false"*/]);
    return ::g::Uno::Data::Json::Boolean::False();
}

// private void ParseKeyword(string keyword) [instance]
void Parser::ParseKeyword(uString* keyword)
{
    for (int32_t i = 0; i < uPtr(keyword)->Length(); ++i)
    {
        char16_t ch = Consume();

        if (uPtr(keyword)->Item(i) != ch)
            U_THROW(Parser::UnexpectedCharacter(ch));
    }
}

// private Uno.Data.Json.Null ParseNull() [instance]
::g::Uno::Data::Json::Null* Parser::ParseNull()
{
    ParseKeyword(::STRINGS[12/*"null"*/]);
    return ::g::Uno::Data::Json::Null::Singleton();
}

// private Uno.Data.Json.Number ParseNumber() [instance]
::g::Uno::Data::Json::Number* Parser::ParseNumber()
{
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    if (Peek() == '-')
        uPtr(sb)->Append(Consume());

    char16_t c = Peek();

    if (!::g::Uno::Char::IsDigit(c))
        U_THROW(Parser::UnexpectedCharacter(c));

    sb->Append(c);
    Advance();

    if (c != '0')

        while (!Eof() && ::g::Uno::Char::IsDigit(Peek()))
            uPtr(sb)->Append(Consume());

    if (!Eof() && (Peek() == '.'))
    {
        uPtr(sb)->Append(Consume());

        if (!::g::Uno::Char::IsDigit(Peek()))
            U_THROW(Parser::UnexpectedCharacter(Peek()));

        while (!Eof() && ::g::Uno::Char::IsDigit(Peek()))
            uPtr(sb)->Append(Consume());
    }

    if (!Eof() && (::g::Uno::Char::ToLower(Peek()) == 'e'))
    {
        uPtr(sb)->Append(Consume());

        if ((Peek() == '+') || (Peek() == '-'))
            uPtr(sb)->Append(Consume());

        if (!::g::Uno::Char::IsDigit(Peek()))
            U_THROW(Parser::UnexpectedCharacter(Peek()));

        while (!Eof() && ::g::Uno::Char::IsDigit(Peek()))
            uPtr(sb)->Append(Consume());
    }

    return ::g::Uno::Data::Json::Number::New1(::g::Uno::Double::Parse(sb->ToString()));
}

// private Uno.Data.Json.Object ParseObject() [instance]
::g::Uno::Data::Json::Object* Parser::ParseObject()
{
    Advance();
    ::g::Uno::Data::Json::Object* obj = ::g::Uno::Data::Json::Object::New1();

    while (!Eof())
    {
        SkipWhiteSpace();
        char16_t c = Peek();

        if (c == '}')
        {
            Advance();
            return obj;
        }

        uString* key = ParseRawString();
        SkipWhiteSpace();
        c = Peek();

        if (c != ':')
            U_THROW(::g::Uno::Exception::New2(::STRINGS[13/*"Expected ':'"*/]));

        Advance();
        ::g::Uno::Data::Json::Value* val = ParseValue();
        uPtr(obj)->Add(key, val);
        SkipWhiteSpace();
        c = Peek();

        if (c == ',')
        {
            Advance();
            continue;
        }
        else if (c == '}')
        {
            Advance();
            return obj;
        }
        else
            U_THROW(Parser::UnexpectedCharacter(c));
    }

    U_THROW(Parser::UnexpectedEndOfFile());
}

// private string ParseRawString() [instance]
uString* Parser::ParseRawString()
{
    char16_t ch = Consume();

    if (ch != '"')
        U_THROW(Parser::UnexpectedCharacter(ch));

    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    ch = Consume();

    while (ch != '"')
    {
        if (ch == '\\')
        {
            char16_t ch2 = Consume();

            switch (ch2)
            {
                case '\\':
                {
                    uPtr(sb)->Append('\\');
                    break;
                }
                case '/':
                {
                    uPtr(sb)->Append('/');
                    break;
                }
                case '"':
                {
                    uPtr(sb)->Append('"');
                    break;
                }
                case 'n':
                {
                    uPtr(sb)->Append(10);
                    break;
                }
                case 'r':
                {
                    uPtr(sb)->Append(13);
                    break;
                }
                case 't':
                {
                    uPtr(sb)->Append(9);
                    break;
                }
                case 'b':
                {
                    uPtr(sb)->Append(8);
                    break;
                }
                case 'f':
                {
                    uPtr(sb)->Append(12);
                    break;
                }
                case 'u':
                {
                    uint32_t value = 0U;

                    for (int32_t i = 0; i < 4; ++i)
                    {
                        char16_t ch3 = Consume();

                        if (!Parser::IsHexValue(ch3))
                            U_THROW(Parser::UnexpectedCharacter(ch3));

                        value = (value << 4) | Parser::GetHexValue(ch3);
                    }

                    uPtr(sb)->Append((char16_t)value);
                    break;
                }
                default:
                {
                    uPtr(sb)->Append(ch);
                    sb->Append(ch2);
                    break;
                }
            }
        }
        else
            uPtr(sb)->Append(ch);

        ch = Consume();
    }

    return sb->ToString();
}

// private Uno.Data.Json.String ParseString() [instance]
::g::Uno::Data::Json::String* Parser::ParseString()
{
    return ::g::Uno::Data::Json::String::New1(ParseRawString());
}

// private Uno.Data.Json.Boolean ParseTrue() [instance]
::g::Uno::Data::Json::Boolean* Parser::ParseTrue()
{
    ParseKeyword(::STRINGS[14/*"true"*/]);
    return ::g::Uno::Data::Json::Boolean::True();
}

// private Uno.Data.Json.Value ParseValue() [instance]
::g::Uno::Data::Json::Value* Parser::ParseValue()
{
    if (Eof())
        return ::g::Uno::Data::Json::Null::Singleton();

    SkipWhiteSpace();
    char16_t c = Peek();

    switch (c)
    {
        case '"':
            return ParseString();
        case '{':
            return ParseObject();
        case '[':
            return ParseArray();
        case 'f':
            return ParseFalse();
        case 't':
            return ParseTrue();
        case 'n':
            return ParseNull();
        default:
        {
            if (IsNumericStartChar(c))
                return ParseNumber();

            U_THROW(Parser::UnexpectedCharacter(c));
        }
    }
}

// private char Peek() [instance]
char16_t Parser::Peek()
{
    int32_t ret = uPtr(_json)->Peek();

    if (ret < 0)
        U_THROW(Parser::UnexpectedEndOfFile());

    return (char16_t)ret;
}

// private void SkipWhiteSpace() [instance]
void Parser::SkipWhiteSpace()
{
    while (!Eof())
    {
        char16_t c = Peek();

        switch (c)
        {
            case ' ':
            case 9:
            case 10:
            case 13:
            {
                Advance();
                break;
            }
            default:
                return;
        }
    }
}

// private static uint GetHexValue(char hexChar) [static]
uint32_t Parser::GetHexValue(char16_t hexChar)
{
    if ((uint32_t)hexChar >= 65U)
        return (uint32_t)hexChar - 55U;
    else
        return (uint32_t)hexChar - 48U;
}

// private static bool IsHexValue(char ch) [static]
bool Parser::IsHexValue(char16_t ch)
{
    return (((ch >= '0') && (ch <= '9')) || ((ch >= 'a') && (ch <= 'f'))) || ((ch >= 'A') && (ch <= 'F'));
}

// private Parser New(Uno.IO.TextReader json) [static]
Parser* Parser::New1(::g::Uno::IO::TextReader* json)
{
    Parser* obj1 = (Parser*)uNew(Parser_typeof());
    obj1->ctor_(json);
    return obj1;
}

// public static Uno.Data.Json.Value Parse(Uno.IO.TextReader json) [static]
::g::Uno::Data::Json::Value* Parser::Parse(::g::Uno::IO::TextReader* json)
{
    Parser* p = Parser::New1(json);
    ::g::Uno::Data::Json::Value* v = p->ParseValue();
    p->SkipWhiteSpace();

    if (!p->Eof())
        U_THROW(::g::Uno::Data::Json::JsonException::New4(::STRINGS[10/*"Expected en...*/]));

    return v;
}

// private static Uno.Data.Json.JsonException UnexpectedCharacter(char c) [static]
::g::Uno::Data::Json::JsonException* Parser::UnexpectedCharacter(char16_t c)
{
    return ::g::Uno::Data::Json::JsonException::New4(::g::Uno::String::op_Addition1(::STRINGS[15/*"Unexpected ...*/], uBox<char16_t>(::g::Uno::Char_typeof(), c)));
}

// private static Uno.Data.Json.JsonException UnexpectedEndOfFile() [static]
::g::Uno::Data::Json::JsonException* Parser::UnexpectedEndOfFile()
{
    return ::g::Uno::Data::Json::JsonException::New4(::STRINGS[16/*"Unexpected ...*/]);
}
// }

// /usr/local/share/uno/Packages/Uno.Data.Json/1.12.0/Source/JsonValue.uno
// -----------------------------------------------------------------------

// internal sealed class String
// {
static void String_build(uType* type)
{
    type->SetBase(::g::Uno::Data::Json::AtomicValue_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1);
}

uType* String_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Json::AtomicValue_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(String);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Json.String", options);
    type->fp_build_ = String_build;
    return type;
}

// public String(string d)
void String__ctor_2_fn(String* __this, uString* d)
{
    __this->ctor_2(d);
}

// public String New(string d)
void String__New1_fn(uString* d, String** __retval)
{
    *__retval = String::New1(d);
}

// public String(string d) [instance]
void String::ctor_2(uString* d)
{
    ::g::Uno::Data::Json::AtomicValue__ctor_1_fn(this, d);
}

// public String New(string d) [static]
String* String::New1(uString* d)
{
    String* obj1 = (String*)uNew(String_typeof());
    obj1->ctor_2(d);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Data.Json/1.12.0/Source/JsonValue.uno
// -----------------------------------------------------------------------

// internal abstract class Value
// {
static void Value_build(uType* type)
{
}

uType* Value_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Value);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Json.Value", options);
    type->fp_build_ = Value_build;
    return type;
}

// protected generated Value()
void Value__ctor__fn(Value* __this)
{
    __this->ctor_();
}

// protected generated Value() [instance]
void Value::ctor_()
{
}
// }

}}}} // ::g::Uno::Data::Json
