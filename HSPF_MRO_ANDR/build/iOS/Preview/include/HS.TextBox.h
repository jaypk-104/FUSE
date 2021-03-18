// This file was generated based on /Users/jay/Dev/Fuse/HSPF_MRO_ANDR/build/iOS/Preview/cache/ux15/HS.TextBox.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ITextEditControl.h>
#include <Fuse.Controls.TextBox.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace HS{struct TextBox;}}

namespace g{
namespace HS{

// public partial sealed class TextBox
// {
::g::Fuse::Controls::TextInput_type* TextBox_typeof();
void TextBox__ctor_9_fn(TextBox* __this);
void TextBox__get_id_fn(TextBox* __this, uString** __retval);
void TextBox__set_id_fn(TextBox* __this, uString* value);
void TextBox__InitializeUX1_fn(TextBox* __this);
void TextBox__New5_fn(TextBox** __retval);
void TextBox__Setid_fn(TextBox* __this, uString* value, uObject* origin);

struct TextBox : ::g::Fuse::Controls::TextBox
{
    uStrong<uString*> _field_id;

    void ctor_9();
    uString* id();
    void id(uString* value);
    void InitializeUX1();
    void Setid(uString* value, uObject* origin);
    static TextBox* New5();
};
// }

}} // ::g::HS
