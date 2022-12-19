#include "data_structs/h_shader.h"

#include <stdio.h>
#include <GL/glew.h>

void H_Shader_Destroy(H_Shader shader)
{
    glDeleteProgram(shader.id);
}

void H_Shader_Use(H_Shader shader)
{
    glUseProgram(shader.id);
}

void H_Shader_SetInt(H_Shader shader, const char* name, int value)
{
    glUniform1i(glGetUniformLocation(shader.id, name), value);
}

void H_Shader_SetFloat(H_Shader shader, const char* name, float value)
{
    glUniform1f(glGetUniformLocation(shader.id, name), value);
}

void H_Shader_SetVec2(H_Shader shader, const char* name, H_Vec2 value)
{
    glUniform2f(glGetUniformLocation(shader.id, name), value.x, value.y);
}

void H_Shader_SetVec3(H_Shader shader, const char* name, H_Vec3 value)
{
    glUniform3f(glGetUniformLocation(shader.id, name), value.x, value.y, value.z);
}

void H_Shader_SetVec4(H_Shader shader, const char* name, H_Vec4 value)
{
    glUniform4f(glGetUniformLocation(shader.id, name), value.x, value.y, value.z, value.w);
}

void H_Shader_SetMat4(H_Shader shader, const char* name, H_Mat4 value)
{
    glUniformMatrix4fv(glGetUniformLocation(shader.id, name), 1, GL_FALSE, (float*)&value);
}

H_Shader H_Shader_Create(const char* vertexSource, const char* fragmentSource)
{
    H_Shader shader;
    shader.id = glCreateProgram();

    unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertexSource, NULL);
    glCompileShader(vertexShader);
    int success;
    char infoLog[512];
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
        printf("ERROR::SHADER::VERTEX::COMPILATION_FAILED");
        printf(infoLog);
    }

    unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentSource, NULL);
    glCompileShader(fragmentShader);
    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
        printf("ERROR::SHADER::FRAGMENT::COMPILATION_FAILED");
        printf(infoLog);
    }

    glAttachShader(shader.id, vertexShader);
    glAttachShader(shader.id, fragmentShader);
    glLinkProgram(shader.id);
    glGetProgramiv(shader.id, GL_LINK_STATUS, &success);
    if (!success)
    {
        glGetProgramInfoLog(shader.id, 512, NULL, infoLog);
        printf("ERROR::SHADER::PROGRAM::LINKING_FAILED");
        printf(infoLog);
    }

    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);

    return shader;
}