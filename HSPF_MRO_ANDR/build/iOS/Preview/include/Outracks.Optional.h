// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Optionals/Optional.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{struct None;}}
namespace g{namespace Outracks{struct Optional;}}
namespace g{namespace Outracks{template<class T>struct Optional1;}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{

// public partial static class Optional
// {
uClassType* Optional_typeof();
void Optional__None_fn(::g::Outracks::None** __retval);
void Optional__None1_fn(uType* __type, uTRef __retval);
void Optional__Read_fn(uType* __type, ::g::System::IO::BinaryReader* reader, uDelegate* readSome, uTRef __retval);
void Optional__Some_fn(uType* __type, void* value, uTRef __retval);
void Optional__Write_fn(uType* __type, ::g::System::IO::BinaryWriter* writer, void* optional, uDelegate* writeSome);
void Optional__Write1_fn(uType* __type, ::g::System::IO::BinaryWriter* writer, void* optional, uDelegate* writeSome);
void Optional__Write2_fn(uType* __type, ::g::System::IO::BinaryWriter* writer, void* optional, uDelegate* writeSome);

struct Optional : uObject
{
    static ::g::Outracks::None* None();
    template<class T>
    static ::g::Outracks::Optional1<T> None1(uType* __type);
    template<class T>
    static ::g::Outracks::Optional1<T> Read(uType* __type, ::g::System::IO::BinaryReader* reader, uDelegate* readSome);
    template<class T>
    static ::g::Outracks::Optional1<T> Some(uType* __type, T value);
    template<class T>
    static void Write(uType* __type, ::g::System::IO::BinaryWriter* writer, ::g::Outracks::Optional1<T> optional, uDelegate* writeSome);
    template<class T>
    static void Write1(uType* __type, ::g::System::IO::BinaryWriter* writer, ::g::Outracks::Optional1<T> optional, uDelegate* writeSome);
    template<class T>
    static void Write2(uType* __type, ::g::System::IO::BinaryWriter* writer, ::g::Outracks::Optional1<T> optional, uDelegate* writeSome);
};

}} // ::g::Outracks

#include <Outracks.Optional1-1.h>
#include <Uno.Object.h>

namespace g{
namespace Outracks{

template<class T>
::g::Outracks::Optional1<T> Optional::None1(uType* __type) { ::g::Outracks::Optional1<T> __retval; return Optional__None1_fn(__type&__retval), __retval; }
template<class T>
::g::Outracks::Optional1<T> Optional::Read(uType* __type, ::g::System::IO::BinaryReader* reader, uDelegate* readSome) { ::g::Outracks::Optional1<T> __retval; return Optional__Read_fn(__type, reader, readSome, &__retval), __retval; }
template<class T>
::g::Outracks::Optional1<T> Optional::Some(uType* __type, T value) { ::g::Outracks::Optional1<T> __retval; return Optional__Some_fn(__type, uConstrain(__type->U(0), value), &__retval), __retval; }
template<class T>
void Optional::Write(uType* __type, ::g::System::IO::BinaryWriter* writer, ::g::Outracks::Optional1<T> optional, uDelegate* writeSome) { Optional__Write_fn(__type, writer, uConstrain(::g::Outracks::Optional1_typeof()->MakeType(__type->U(0), NULL), optional), writeSome); }
template<class T>
void Optional::Write1(uType* __type, ::g::System::IO::BinaryWriter* writer, ::g::Outracks::Optional1<T> optional, uDelegate* writeSome) { Optional__Write1_fn(__type, writer, uConstrain(::g::Outracks::Optional1_typeof()->MakeType(__type->U(0), NULL), optional), writeSome); }
template<class T>
void Optional::Write2(uType* __type, ::g::System::IO::BinaryWriter* writer, ::g::Outracks::Optional1<T> optional, uDelegate* writeSome) { Optional__Write2_fn(__type, writer, uConstrain(::g::Outracks::Optional1_typeof()->MakeType(__type->U(0), NULL), optional), writeSome); }
// }

}} // ::g::Outracks
