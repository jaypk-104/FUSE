// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.StatusBarAnimation.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Platform.SystemUI.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Int.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.iOS/1.12.0/StatusBarConfig.uno
// -----------------------------------------------------------------

// public sealed class StatusBarConfig
// {
// static generated StatusBarConfig()
static void StatusBarConfig__cctor_1_fn(uType* __type)
{
    StatusBarConfig::_stack_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.iOS.StatusBarConfig>*/]));
}

static void StatusBarConfig_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(type, NULL);
    type->SetDependencies(
        ::g::Fuse::Platform::SystemUI_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(18,
        ::g::Uno::Bool_typeof(), offsetof(StatusBarConfig, _isVisible), 0,
        ::g::Uno::Bool_typeof(), offsetof(StatusBarConfig, _hasIsVisible), 0,
        ::g::Fuse::Platform::StatusBarStyle_typeof(), offsetof(StatusBarConfig, _style), 0,
        ::g::Uno::Bool_typeof(), offsetof(StatusBarConfig, _hasStyle), 0,
        ::g::Fuse::Platform::StatusBarAnimation_typeof(), offsetof(StatusBarConfig, _animation), 0,
        ::g::Uno::Bool_typeof(), offsetof(StatusBarConfig, _hasAnimation), 0,
        ::TYPES[0/*Uno.Collections.List<Fuse.iOS.StatusBarConfig>*/], (uintptr_t)&StatusBarConfig::_stack_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Animation", NULL, (void*)StatusBarConfig__get_Animation_fn, 0, false, ::g::Fuse::Platform::StatusBarAnimation_typeof(), 0),
        new uFunction("set_Animation", NULL, (void*)StatusBarConfig__set_Animation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Platform::StatusBarAnimation_typeof()),
        new uFunction("get_IsVisible", NULL, (void*)StatusBarConfig__get_IsVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsVisible", NULL, (void*)StatusBarConfig__set_IsVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)StatusBarConfig__New2_fn, 0, true, type, 0),
        new uFunction("get_Style", NULL, (void*)StatusBarConfig__get_Style_fn, 0, false, ::g::Fuse::Platform::StatusBarStyle_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)StatusBarConfig__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Platform::StatusBarStyle_typeof()));
}

::g::Fuse::Node_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 25;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.StatusBarConfig", options);
    type->fp_build_ = StatusBarConfig_build;
    type->fp_ctor_ = (void*)StatusBarConfig__New2_fn;
    type->fp_cctor_ = StatusBarConfig__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))StatusBarConfig__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))StatusBarConfig__OnUnrooted_fn;
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

// public generated StatusBarConfig()
void StatusBarConfig__ctor_3_fn(StatusBarConfig* __this)
{
    __this->ctor_3();
}

// public Fuse.Platform.StatusBarAnimation get_Animation()
void StatusBarConfig__get_Animation_fn(StatusBarConfig* __this, int32_t* __retval)
{
    *__retval = __this->Animation();
}

// public void set_Animation(Fuse.Platform.StatusBarAnimation value)
void StatusBarConfig__set_Animation_fn(StatusBarConfig* __this, int32_t* value)
{
    __this->Animation(*value);
}

// private static void Apply()
void StatusBarConfig__Apply_fn()
{
    StatusBarConfig::Apply();
}

// private static Fuse.Platform.StatusBarAnimation GetAnimation()
void StatusBarConfig__GetAnimation_fn(int32_t* __retval)
{
    *__retval = StatusBarConfig::GetAnimation();
}

// private static bool GetIsVisible()
void StatusBarConfig__GetIsVisible_fn(bool* __retval)
{
    *__retval = StatusBarConfig::GetIsVisible();
}

// private static Fuse.Platform.StatusBarStyle GetStyle()
void StatusBarConfig__GetStyle_fn(int32_t* __retval)
{
    *__retval = StatusBarConfig::GetStyle();
}

// public bool get_IsVisible()
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value)
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public generated StatusBarConfig New()
void StatusBarConfig__New2_fn(StatusBarConfig** __retval)
{
    *__retval = StatusBarConfig::New2();
}

// protected override sealed void OnRooted()
void StatusBarConfig__OnRooted_fn(StatusBarConfig* __this)
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Uno::Collections::List__Add_fn(uPtr(StatusBarConfig::_stack_), __this);
    StatusBarConfig::Apply();
}

// protected override sealed void OnUnrooted()
void StatusBarConfig__OnUnrooted_fn(StatusBarConfig* __this)
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "OnUnrooted()");
    bool ret8;
    ::g::Uno::Collections::List__Remove_fn(uPtr(StatusBarConfig::_stack_), __this, &ret8);
    StatusBarConfig::Apply();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public Fuse.Platform.StatusBarStyle get_Style()
void StatusBarConfig__get_Style_fn(StatusBarConfig* __this, int32_t* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Fuse.Platform.StatusBarStyle value)
void StatusBarConfig__set_Style_fn(StatusBarConfig* __this, int32_t* value)
{
    __this->Style(*value);
}

uSStrong< ::g::Uno::Collections::List*> StatusBarConfig::_stack_;

// public generated StatusBarConfig() [instance]
void StatusBarConfig::ctor_3()
{
    ctor_2();
}

// public Fuse.Platform.StatusBarAnimation get_Animation() [instance]
int32_t StatusBarConfig::Animation()
{
    return _animation;
}

// public void set_Animation(Fuse.Platform.StatusBarAnimation value) [instance]
void StatusBarConfig::Animation(int32_t value)
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "set_Animation(Fuse.Platform.StatusBarAnimation)");

    if (!_hasAnimation || (_animation != value))
    {
        _animation = value;
        _hasAnimation = true;
        StatusBarConfig::Apply();
    }
}

// public bool get_IsVisible() [instance]
bool StatusBarConfig::IsVisible()
{
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance]
void StatusBarConfig::IsVisible(bool value)
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "set_IsVisible(bool)");

    if (!_hasIsVisible || (_isVisible != value))
    {
        _isVisible = value;
        _hasIsVisible = true;
        StatusBarConfig::Apply();
    }
}

// public Fuse.Platform.StatusBarStyle get_Style() [instance]
int32_t StatusBarConfig::Style()
{
    return _style;
}

// public void set_Style(Fuse.Platform.StatusBarStyle value) [instance]
void StatusBarConfig::Style(int32_t value)
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "set_Style(Fuse.Platform.StatusBarStyle)");

    if (!_hasStyle || (_style != value))
    {
        _style = value;
        _hasStyle = true;
        StatusBarConfig::Apply();
    }
}

// private static void Apply() [static]
void StatusBarConfig::Apply()
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "Apply()");
    StatusBarConfig_typeof()->Init();
    int32_t anim = StatusBarConfig::GetAnimation();
    int32_t style = StatusBarConfig::GetStyle();
    bool visible = StatusBarConfig::GetIsVisible();

    if (::g::Fuse::Platform::SystemUI::uStatusBarAnimation1() != anim)
        ::g::Fuse::Platform::SystemUI::uStatusBarAnimation1(anim);

    if (::g::Fuse::Platform::SystemUI::uStatusBarStyle1() != style)
        ::g::Fuse::Platform::SystemUI::uStatusBarStyle1(style);

    if (::g::Fuse::Platform::SystemUI::IsTopFrameVisible() != visible)
        ::g::Fuse::Platform::SystemUI::IsTopFrameVisible(visible);
}

// private static Fuse.Platform.StatusBarAnimation GetAnimation() [static]
int32_t StatusBarConfig::GetAnimation()
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "GetAnimation()");
    StatusBarConfig_typeof()->Init();
    StatusBarConfig* ret2;
    StatusBarConfig* ret3;

    for (int32_t i = uPtr(StatusBarConfig::_stack_)->Count(); (i--) > 0; )
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack_), uCRef<int32_t>(i), &ret2), ret2))->_hasAnimation)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack_), uCRef<int32_t>(i), &ret3), ret3))->Animation();

    return 0;
}

// private static bool GetIsVisible() [static]
bool StatusBarConfig::GetIsVisible()
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "GetIsVisible()");
    StatusBarConfig_typeof()->Init();
    StatusBarConfig* ret4;
    StatusBarConfig* ret5;

    for (int32_t i = uPtr(StatusBarConfig::_stack_)->Count(); (i--) > 0; )
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack_), uCRef<int32_t>(i), &ret4), ret4))->_hasIsVisible)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack_), uCRef<int32_t>(i), &ret5), ret5))->IsVisible();

    return true;
}

// private static Fuse.Platform.StatusBarStyle GetStyle() [static]
int32_t StatusBarConfig::GetStyle()
{
    uStackFrame __("Fuse.iOS.StatusBarConfig", "GetStyle()");
    StatusBarConfig_typeof()->Init();
    StatusBarConfig* ret6;
    StatusBarConfig* ret7;

    for (int32_t i = uPtr(StatusBarConfig::_stack_)->Count(); (i--) > 0; )
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack_), uCRef<int32_t>(i), &ret6), ret6))->_hasStyle)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack_), uCRef<int32_t>(i), &ret7), ret7))->Style();

    return 0;
}

// public generated StatusBarConfig New() [static]
StatusBarConfig* StatusBarConfig::New2()
{
    StatusBarConfig* obj1 = (StatusBarConfig*)uNew(StatusBarConfig_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}} // ::g::Fuse::iOS
