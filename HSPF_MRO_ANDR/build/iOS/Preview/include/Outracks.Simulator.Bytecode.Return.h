// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Bytecode/Statements.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Statement.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Return;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class Return
// {
::g::Outracks::Simulator::Bytecode::Statement_type* Return_typeof();
void Return__ctor_1_fn(Return* __this, ::g::Outracks::Simulator::Bytecode::Expression* value);
void Return__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* value, Return** __retval);
void Return__Read1_fn(::g::System::IO::BinaryReader* reader, Return** __retval);
void Return__get_StatementId_fn(Return* __this, char16_t* __retval);
void Return__ToString_fn(Return* __this, uString** __retval);
void Return__WriteStatement_fn(Return* __this, ::g::System::IO::BinaryWriter* writer);

struct Return : ::g::Outracks::Simulator::Bytecode::Statement
{
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Value;

    void ctor_1(::g::Outracks::Simulator::Bytecode::Expression* value);
    static Return* New1(::g::Outracks::Simulator::Bytecode::Expression* value);
    static Return* Read1(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
