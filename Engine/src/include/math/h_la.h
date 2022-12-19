#ifndef H_LA_H
#define H_LA_H

#include <stddef.h>

typedef struct H_Vec2_s
{
    float x;
    float y;
} H_Vec2;

typedef struct H_Vec3_s
{
    float x;
    float y;
    float z;
} H_Vec3;

typedef struct H_Vec4_s
{
    float x;
    float y;
    float z;
    float w;
} H_Vec4;

typedef struct H_Mat2_s
{
    float m[2][2];
} H_Mat2;

typedef struct H_Mat3_s
{
    float m[3][3];
} H_Mat3;

typedef struct H_Mat4_s
{
    float m[4][4];
} H_Mat4;

H_Vec2 H_Vec2_Add(H_Vec2 a, H_Vec2 b);
H_Vec2 H_Vec2_Subtract(H_Vec2 a, H_Vec2 b);
H_Vec2 H_Vec2_Multiply(H_Vec2 a, H_Vec2 b);
H_Vec2 H_Vec2_MultiplyScalar(H_Vec2 v, float s);
H_Vec2 H_Vec2_DivideScalar(H_Vec2 v, float s);
float H_Vec2_Dot(H_Vec2 a, H_Vec2 b);
float H_Vec2_Length(H_Vec2 v);
H_Vec2 H_Vec2_Normalize(H_Vec2 v);

H_Vec3 H_Vec3_Add(H_Vec3 a, H_Vec3 b);
H_Vec3 H_Vec3_Subtract(H_Vec3 a, H_Vec3 b);
H_Vec3 H_Vec3_Multiply(H_Vec3 a, H_Vec3 b);
H_Vec3 H_Vec3_MultiplyScalar(H_Vec3 v, float s);
H_Vec3 H_Vec3_DivideScalar(H_Vec3 v, float s);
float H_Vec3_Dot(H_Vec3 a, H_Vec3 b);
H_Vec3 H_Vec3_Cross(H_Vec3 a, H_Vec3 b);
float H_Vec3_Length(H_Vec3 v);
H_Vec3 H_Vec3_Normalize(H_Vec3 v);

H_Vec4 H_Vec4_Add(H_Vec4 a, H_Vec4 b);
H_Vec4 H_Vec4_Subtract(H_Vec4 a, H_Vec4 b);
H_Vec4 H_Vec4_Multiply(H_Vec4 a, H_Vec4 b);
H_Vec4 H_Vec4_MultiplyScalar(H_Vec4 v, float s);
H_Vec4 H_Vec4_DivideScalar(H_Vec4 v, float s);
float H_Vec4_Dot(H_Vec4 a, H_Vec4 b);
H_Vec4 H_Vec4_Cross(H_Vec4 a, H_Vec4 b);
float H_Vec4_Length(H_Vec4 v);
H_Vec4 H_Vec4_Normalize(H_Vec4 v);

H_Mat2 H_Mat2_Create(float m00, float m01, float m10, float m11);
H_Mat2 H_Mat2_CreateIdentity();
H_Mat2 H_Mat2_CreateTranslation(H_Vec2 v);
H_Mat2 H_Mat2_CreateRotation(float angle);
H_Mat2 H_Mat2_CreateScale(H_Vec2 v);
H_Mat2 H_Mat2_Transpose(H_Mat2 m);
float H_Mat2_Determinant(H_Mat2 m);
H_Mat2 H_Mat2_Inverse(H_Mat2 m);
H_Mat2 H_Mat2_Multiply(H_Mat2 a, H_Mat2 b);
H_Mat2 H_Mat2_MultiplyScalar(H_Mat2 m, float s);
H_Vec2 H_Mat2_MultiplyVec2(H_Mat2 m, H_Vec2 v);

H_Mat3 H_Mat3_Create(float m00, float m01, float m02, float m10, float m11,
    float m12, float m20, float m21, float m22);
H_Mat3 H_Mat3_CreateIdentity();
H_Mat3 H_Mat3_CreateTranslation(H_Vec3 v);
H_Mat3 H_Mat3_CreateRotationX(float angle);
H_Mat3 H_Mat3_CreateRotationY(float angle);
H_Mat3 H_Mat3_CreateRotationZ(float angle);
H_Mat3 H_Mat3_CreateRotation(float angle, H_Vec3 axis);
H_Mat3 H_Mat3_CreateScale(H_Vec3 v);
H_Mat3 H_Mat3_Transpose(H_Mat3 m);
float H_Mat3_Determinant(H_Mat3 m);
H_Mat3 H_Mat3_Inverse(H_Mat3 m);
H_Mat3 H_Mat3_Multiply(H_Mat3 a, H_Mat3 b);
H_Mat3 H_Mat3_MultiplyScalar(H_Mat3 m, float s);
H_Vec3 H_Mat3_MultiplyVec3(H_Mat3 m, H_Vec3 v);

H_Mat4 H_Mat4_Create(float m00, float m01, float m02, float m03, float m10,
    float m11, float m12, float m13, float m20, float m21, float m22, float m23,
    float m30, float m31, float m32, float m33);
H_Mat4 H_Mat4_CreateIdentity();
H_Mat4 H_Mat4_CreateTranslation(H_Vec3 v);
H_Mat4 H_Mat4_CreateRotationX(float angle);
H_Mat4 H_Mat4_CreateRotationY(float angle);
H_Mat4 H_Mat4_CreateRotationZ(float angle);
H_Mat4 H_Mat4_CreateRotation(float angle, H_Vec3 axis);
H_Mat4 H_Mat4_CreateScale(H_Vec3 v);
H_Mat4 H_Mat4_CreatePerspective(float fov, float aspect, float near, float far);
H_Mat4 H_Mat4_CreateOrthographic(float left, float right, float bottom,
    float top, float near, float far);
H_Mat4 H_Mat4_CreateLookAt(H_Vec3 position, H_Vec3 target, H_Vec3 up);
H_Mat4 H_Mat4_Transpose(H_Mat4 m);
float H_Mat4_Determinant(H_Mat4 m);
H_Mat4 H_Mat4_Inverse(H_Mat4 m);
H_Mat4 H_Mat4_Multiply(H_Mat4 a, H_Mat4 b);
H_Mat4 H_Mat4_MultiplyScalar(H_Mat4 m, float s);
H_Vec4 H_Mat4_MultiplyVec4(H_Mat4 m, H_Vec4 v);

#endif