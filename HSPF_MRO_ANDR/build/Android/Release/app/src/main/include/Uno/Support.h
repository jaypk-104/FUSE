// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.12.0/Backends/CPlusPlus/Uno/Support.h.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uBase/String.h>
#include <uBase/Vector2.h>
#include <Uno.Int2.h>
#include <Uno.Float2.h>
namespace g{namespace Uno{struct Buffer;}}

namespace uBase { class DataAccessor; }
namespace uBase { class Stream; }
namespace uImage { class Texture; }
struct uString;

/**
    \addtogroup ThreadUtils
    @{
*/
struct uThreadLocal;

uThreadLocal* uCreateThreadLocal(void (*destructor)(void*));
void uDeleteThreadLocal(uThreadLocal* tls);

void uSetThreadLocal(uThreadLocal* tls, void* value);
void* uGetThreadLocal(uThreadLocal* tls);

void uEnterCritical();
bool uEnterCriticalIfNull(void* addr);
void uExitCritical();
/** @} */

/**
    \addtogroup XliUtils
    @{
*/
uBase::String uStringToXliString(uString* ustr);
uString* uStringFromXliString(const uBase::String& str);

::g::Uno::Int2 uInt2FromXliVector2i(const uBase::Vector2i& vec);
uBase::Vector2i uInt2ToXliVector2i(const ::g::Uno::Int2& vec);

::g::Uno::Float2 uFloat2FromXliVector2(const uBase::Vector2& vec);
uBase::Vector2 uFloat2ToXliVector2(const ::g::Uno::Float2& vec);

::g::Uno::Buffer* uBufferFromXliDataAccessor(const uBase::DataAccessor* data);
/** @} */

/**
    \addtogroup TextureUtils
    @{
*/
struct uGLTextureInfo
{
    unsigned int GLTarget;
    int Width;
    int Height;
    int Depth;
    int MipCount;
};

uImage::Texture* uLoadXliTexture(const uBase::String& filename, uArray* data);
unsigned int uCreateGLTexture(uImage::Texture* texData, bool generateMipmap = true, uGLTextureInfo* outInfo = 0);
/** @} */

/**
    \addtogroup BufferUtils
    @{
*/
#define U_BUFFER_PTR(buffer) ((uint8_t*)(buffer)->_data->_ptr + (buffer)->_offset)
#define U_BUFFER_SIZE(buffer) (buffer)->_sizeInBytes

void DEPRECATED("This method will be removed in a future version") uReverseBytes(uint8_t* ptr, size_t size);

template<class T>
void DEPRECATED("This method will be removed in a future version") uReverseBytes(T& ref) {
    uReverseBytes((uint8_t*)&ref, sizeof(T));
}
template<class T>
T DEPRECATED("This method will be removed in a future version") uLoadBytes(uint8_t* ptr, bool littleEndian) {
    T result;
    memcpy(&result, ptr, sizeof(T));

    if (!littleEndian)
        uReverseBytes(result);

    return result;
}
template<class T>
void DEPRECATED("This method will be removed in a future version") uStoreBytes(uint8_t* ptr, T value, bool littleEndian) {
    if (!littleEndian)
        uReverseBytes(value);

    memcpy(ptr, &value, sizeof(T));
}
/** @} */
