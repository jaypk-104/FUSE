// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Messages/ExceptionInfo.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct ExceptionInfo;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class ExceptionInfo
// {
uType* ExceptionInfo_typeof();
void ExceptionInfo__ctor__fn(ExceptionInfo* __this, ::g::Outracks::Simulator::Bytecode::TypeName* type, uString* message, uString* stackTrace, ::g::Outracks::Simulator::ImmutableList* innerExceptions);
void ExceptionInfo__Capture_fn(::g::Uno::Exception* e, ExceptionInfo** __retval);
void ExceptionInfo__New1_fn(::g::Outracks::Simulator::Bytecode::TypeName* type, uString* message, uString* stackTrace, ::g::Outracks::Simulator::ImmutableList* innerExceptions, ExceptionInfo** __retval);
void ExceptionInfo__Read_fn(::g::System::IO::BinaryReader* reader, ExceptionInfo** __retval);
void ExceptionInfo__Write_fn(ExceptionInfo* e, ::g::System::IO::BinaryWriter* writer);

struct ExceptionInfo : uObject
{
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> Type;
    uStrong<uString*> Message;
    uStrong<uString*> StackTrace;
    uStrong< ::g::Outracks::Simulator::ImmutableList*> InnerExceptions;

    void ctor_(::g::Outracks::Simulator::Bytecode::TypeName* type, uString* message, uString* stackTrace, ::g::Outracks::Simulator::ImmutableList* innerExceptions);
    static ExceptionInfo* Capture(::g::Uno::Exception* e);
    static ExceptionInfo* New1(::g::Outracks::Simulator::Bytecode::TypeName* type, uString* message, uString* stackTrace, ::g::Outracks::Simulator::ImmutableList* innerExceptions);
    static ExceptionInfo* Read(::g::System::IO::BinaryReader* reader);
    static void Write(ExceptionInfo* e, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
