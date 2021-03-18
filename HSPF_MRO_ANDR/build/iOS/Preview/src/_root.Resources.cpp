// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/Resources.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Resources.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroupBase.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[9];
static uType* TYPES[1];

namespace g{

// public partial sealed class Resources
// {
// static Resources()
static void Resources__cctor_1_fn(uType* __type)
{
}

static void Resources_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ColorTextPrime");
    ::STRINGS[1] = uString::Const("ColorTextSecond");
    ::STRINGS[2] = uString::Const("ColorDark");
    ::STRINGS[3] = uString::Const("ColorMid");
    ::STRINGS[4] = uString::Const("ColorWhite");
    ::STRINGS[5] = uString::Const("ColorHigh");
    ::STRINGS[6] = uString::Const("ColorAccent");
    ::STRINGS[7] = uString::Const("ColorWhiteHalf");
    ::STRINGS[8] = uString::Const("Modules/CalendarView/Resources.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::NodeGroup_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::NodeGroup_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::NodeGroup_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::NodeGroup_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::NodeGroup_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::NodeGroup_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::NodeGroup_type, interface6),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::NodeGroup_type, interface7));
    type->SetFields(25);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Resources__New3_fn, 0, true, type, 0));
}

::g::Fuse::NodeGroup_type* Resources_typeof()
{
    static uSStrong< ::g::Fuse::NodeGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::NodeGroup_typeof();
    options.FieldCount = 25;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Resources);
    options.TypeSize = sizeof(::g::Fuse::NodeGroup_type);
    type = (::g::Fuse::NodeGroup_type*)uClassType::New("Resources", options);
    type->fp_build_ = Resources_build;
    type->fp_ctor_ = (void*)Resources__New3_fn;
    type->fp_cctor_ = Resources__cctor_1_fn;
    type->interface7.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::NodeGroupBase__FindTemplate_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Resources()
void Resources__ctor_5_fn(Resources* __this)
{
    __this->ctor_5();
}

// private void InitializeUX()
void Resources__InitializeUX_fn(Resources* __this)
{
    __this->InitializeUX();
}

// public Resources New()
void Resources__New3_fn(Resources** __retval)
{
    *__retval = Resources::New3();
}

// public Resources() [instance]
void Resources::ctor_5()
{
    uStackFrame __("Resources", ".ctor()");
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance]
void Resources::InitializeUX()
{
    uStackFrame __("Resources", "InitializeUX()");
    ::g::Uno::Float4 temp = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.8666667f);
    ::g::Uno::Float4 temp1 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.5333334f);
    ::g::Uno::Float4 temp2 = ::g::Uno::Float4__New2(0.4745098f, 0.5254902f, 0.7960784f, 0.5333334f);
    ::g::Uno::Float4 temp3 = ::g::Uno::Float4__New2(0.4745098f, 0.5254902f, 0.7960784f, 1.0f);
    ::g::Uno::Float4 temp4 = ::g::Uno::Float4__New2(0.9098039f, 0.9176471f, 0.9647059f, 1.0f);
    ::g::Uno::Float4 temp5 = ::g::Uno::Float4__New2(0.772549f, 0.7921569f, 0.9137255f, 1.0f);
    ::g::Uno::Float4 temp6 = ::g::Uno::Float4__New2(1.0f, 0.8196079f, 0.5019608f, 1.0f);
    ::g::Uno::Float4 temp7 = ::g::Uno::Float4__New2(0.772549f, 0.7921569f, 0.9137255f, 1.0f);
    ::g::Uno::UX::Resource* temp8 = ::g::Uno::UX::Resource::New1(::STRINGS[0/*"ColorTextPr...*/], uBox(::g::Uno::Float4_typeof(), temp));
    ::g::Uno::UX::Resource* temp9 = ::g::Uno::UX::Resource::New1(::STRINGS[1/*"ColorTextSe...*/], uBox(::g::Uno::Float4_typeof(), temp1));
    ::g::Uno::UX::Resource* temp10 = ::g::Uno::UX::Resource::New1(::STRINGS[2/*"ColorDark"*/], uBox(::g::Uno::Float4_typeof(), temp2));
    ::g::Uno::UX::Resource* temp11 = ::g::Uno::UX::Resource::New1(::STRINGS[3/*"ColorMid"*/], uBox(::g::Uno::Float4_typeof(), temp3));
    ::g::Uno::UX::Resource* temp12 = ::g::Uno::UX::Resource::New1(::STRINGS[4/*"ColorWhite"*/], uBox(::g::Uno::Float4_typeof(), temp4));
    ::g::Uno::UX::Resource* temp13 = ::g::Uno::UX::Resource::New1(::STRINGS[5/*"ColorHigh"*/], uBox(::g::Uno::Float4_typeof(), temp5));
    ::g::Uno::UX::Resource* temp14 = ::g::Uno::UX::Resource::New1(::STRINGS[6/*"ColorAccent"*/], uBox(::g::Uno::Float4_typeof(), temp6));
    ::g::Uno::UX::Resource* temp15 = ::g::Uno::UX::Resource::New1(::STRINGS[7/*"ColorWhiteH...*/], uBox(::g::Uno::Float4_typeof(), temp7));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[8/*"Modules/Cal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(((::g::Fuse::NodeGroupBase*)this)->Resources()), ::TYPES[0/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(((::g::Fuse::NodeGroupBase*)this)->Resources()), ::TYPES[0/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(((::g::Fuse::NodeGroupBase*)this)->Resources()), ::TYPES[0/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(((::g::Fuse::NodeGroupBase*)this)->Resources()), ::TYPES[0/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(((::g::Fuse::NodeGroupBase*)this)->Resources()), ::TYPES[0/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(((::g::Fuse::NodeGroupBase*)this)->Resources()), ::TYPES[0/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(((::g::Fuse::NodeGroupBase*)this)->Resources()), ::TYPES[0/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(((::g::Fuse::NodeGroupBase*)this)->Resources()), ::TYPES[0/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp15);
}

// public Resources New() [static]
Resources* Resources::New3()
{
    Resources* obj1 = (Resources*)uNew(Resources_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

} // ::g
