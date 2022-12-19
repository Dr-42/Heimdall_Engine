#ifndef H_TEXTURE_H
#define H_TEXTURE_H
#include "defines.h"

#include <stddef.h>

typedef struct H_Texture_s {
    u32 ID;
    u32 width, height;
    u32 internalFormat;
    u32 imageFormat;
    u32 wrapS, wrapT;
    u32 filterMin, filterMax;
} H_Texture;

H_Texture H_Texture_Create();
void H_Texture_Destroy(H_Texture texture);
void H_Texture_Generate(H_Texture texture, u32 width, u32 height, u8 *data);
void H_Texture_Bind(H_Texture texture);

#endif
