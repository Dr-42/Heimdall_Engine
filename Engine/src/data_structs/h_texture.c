#include "data_structs/h_texture.h"

#include <stdio.h>
#include <GL/glew.h>

H_Texture H_Texture_Create()
{
    H_Texture texture;
    glGenTextures(1, &texture.ID);
    return texture;
}

void H_Texture_Destroy(H_Texture texture)
{
    glDeleteTextures(1, &texture.ID);
}

void H_Texture_Generate(H_Texture texture, u32 width, u32 height, u8 *data)
{
    texture.width = width;
    texture.height = height;
    glBindTexture(GL_TEXTURE_2D, texture.ID);
    glTexImage2D(GL_TEXTURE_2D, 0, texture.internalFormat, width, height, 0, texture.imageFormat, GL_UNSIGNED_BYTE, data);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, texture.wrapS);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, texture.wrapT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, texture.filterMin);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, texture.filterMax);
    glBindTexture(GL_TEXTURE_2D, 0);
}

void H_Texture_Bind(H_Texture texture)
{
    glBindTexture(GL_TEXTURE_2D, texture.ID);
}