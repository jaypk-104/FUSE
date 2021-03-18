// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Modules/HomeScreen.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HomeScreen.h>
#include <_root.HomeScreenType.h>
#include <Fuse.Node.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Int.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public sealed class HomeScreen
// {
static void HomeScreen_build(uType* type)
{
    ::STRINGS[0] = uString::Const("HomeScreen only defined for Android");
    ::STRINGS[1] = uString::Const("/Users/jay/Dev/Fuse/HSPF_MRO_ANDR/Modules/HomeScreen.uno");
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::HomeScreenType_typeof(), offsetof(HomeScreen, _type), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)HomeScreen__New2_fn, 0, true, type, 0),
        new uFunction("get_Type", NULL, (void*)HomeScreen__get_Type_fn, 0, false, ::g::HomeScreenType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)HomeScreen__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::HomeScreenType_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* HomeScreen_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(HomeScreen);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("HomeScreen", options);
    type->fp_build_ = HomeScreen_build;
    type->fp_ctor_ = (void*)HomeScreen__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))HomeScreen__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated HomeScreen()
void HomeScreen__ctor_2_fn(HomeScreen* __this)
{
    __this->ctor_2();
}

// public generated HomeScreen New()
void HomeScreen__New2_fn(HomeScreen** __retval)
{
    *__retval = HomeScreen::New2();
}

// protected override sealed void Perform(Fuse.Node target)
void HomeScreen__Perform_fn(HomeScreen* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("HomeScreen", "Perform(Fuse.Node)");
    ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[0/*"HomeScreen ...*/], 0, ::STRINGS[1/*"/Users/jay/...*/], 39);
}

// public HomeScreenType get_Type()
void HomeScreen__get_Type_fn(HomeScreen* __this, int32_t* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(HomeScreenType value)
void HomeScreen__set_Type_fn(HomeScreen* __this, int32_t* value)
{
    __this->Type(*value);
}

// public generated HomeScreen() [instance]
void HomeScreen::ctor_2()
{
    ctor_1();
}

// public HomeScreenType get_Type() [instance]
int32_t HomeScreen::Type()
{
    return _type;
}

// public void set_Type(HomeScreenType value) [instance]
void HomeScreen::Type(int32_t value)
{
    _type = value;
}

// public generated HomeScreen New() [static]
HomeScreen* HomeScreen::New2()
{
    HomeScreen* obj1 = (HomeScreen*)uNew(HomeScreen_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

} // ::g
