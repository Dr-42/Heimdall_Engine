#ifndef H_SHADER_H
#define H_SHADER_H

#include <stddef.h>
#include "math/h_la.h"

typedef struct H_Shader_s
{
    unsigned int id;
} H_Shader;

H_Shader H_Shader_Create(const char* vertexSource, const char* fragmentSource);
void H_Shader_Destroy(H_Shader shader);
void H_Shader_Use(H_Shader shader);
void H_Shader_SetInt(H_Shader shader, const char* name, int value);
void H_Shader_SetFloat(H_Shader shader, const char* name, float value);
void H_Shader_SetVec2(H_Shader shader, const char* name, H_Vec2 value);
void H_Shader_SetVec3(H_Shader shader, const char* name, H_Vec3 value);
void H_Shader_SetVec4(H_Shader shader, const char* name, H_Vec4 value);
void H_Shader_SetMat4(H_Shader shader, const char* name, H_Mat4 value);
#endif  // H_SHADER_H
