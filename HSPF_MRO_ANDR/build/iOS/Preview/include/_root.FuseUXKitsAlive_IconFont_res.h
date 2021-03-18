// This file was generated based on /usr/local/share/uno/Packages/Fuse.UXKits.Alive/1.12.0/.uno/ux15/FuseUXKitsAlive_IconFont_res.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Font;}}
namespace g{struct FuseUXKitsAlive_IconFont_res;}

namespace g{

// public partial sealed class FuseUXKitsAlive_IconFont_res
// {
uType* FuseUXKitsAlive_IconFont_res_typeof();
void FuseUXKitsAlive_IconFont_res__ctor__fn(FuseUXKitsAlive_IconFont_res* __this);
void FuseUXKitsAlive_IconFont_res__InitializeUX_fn(FuseUXKitsAlive_IconFont_res* __this);
void FuseUXKitsAlive_IconFont_res__New1_fn(FuseUXKitsAlive_IconFont_res** __retval);

struct FuseUXKitsAlive_IconFont_res : uObject
{
    static uSStrong< ::g::Fuse::Font*> AliveIconFont_;
    static uSStrong< ::g::Fuse::Font*>& AliveIconFont() { return FuseUXKitsAlive_IconFont_res_typeof()->Init(), AliveIconFont_; }

    void ctor_();
    void InitializeUX();
    static FuseUXKitsAlive_IconFont_res* New1();
};
// }

} // ::g
