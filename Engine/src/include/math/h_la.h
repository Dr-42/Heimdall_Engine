#ifndef H_LA_H
#define H_LA_H
#include "defines.h"

#include <stddef.h>

typedef struct H_Vec2_s
{
    f32 x;
    f32 y;
} H_Vec2;

typedef struct H_Vec3_s
{
    f32 x;
    f32 y;
    f32 z;
} H_Vec3;

typedef struct H_Vec4_s
{
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} H_Vec4;

typedef struct H_Mat2_s
{
    f32 m[2][2];
} H_Mat2;

typedef struct H_Mat3_s
{
    f32 m[3][3];
} H_Mat3;

typedef struct H_Mat4_s
{
    f32 m[4][4];
} H_Mat4;

H_Vec2 H_Vec2_Add(H_Vec2 a, H_Vec2 b);
H_Vec2 H_Vec2_Subtract(H_Vec2 a, H_Vec2 b);
H_Vec2 H_Vec2_Multiply(H_Vec2 a, H_Vec2 b);
H_Vec2 H_Vec2_MultiplyScalar(H_Vec2 v, f32 s);
H_Vec2 H_Vec2_DivideScalar(H_Vec2 v, f32 s);
f32 H_Vec2_Dot(H_Vec2 a, H_Vec2 b);
f32 H_Vec2_Length(H_Vec2 v);
H_Vec2 H_Vec2_Normalize(H_Vec2 v);

H_Vec3 H_Vec3_Add(H_Vec3 a, H_Vec3 b);
H_Vec3 H_Vec3_Subtract(H_Vec3 a, H_Vec3 b);
H_Vec3 H_Vec3_Multiply(H_Vec3 a, H_Vec3 b);
H_Vec3 H_Vec3_MultiplyScalar(H_Vec3 v, f32 s);
H_Vec3 H_Vec3_DivideScalar(H_Vec3 v, f32 s);
f32 H_Vec3_Dot(H_Vec3 a, H_Vec3 b);
H_Vec3 H_Vec3_Cross(H_Vec3 a, H_Vec3 b);
f32 H_Vec3_Length(H_Vec3 v);
H_Vec3 H_Vec3_Normalize(H_Vec3 v);

H_Vec4 H_Vec4_Add(H_Vec4 a, H_Vec4 b);
H_Vec4 H_Vec4_Subtract(H_Vec4 a, H_Vec4 b);
H_Vec4 H_Vec4_Multiply(H_Vec4 a, H_Vec4 b);
H_Vec4 H_Vec4_MultiplyScalar(H_Vec4 v, f32 s);
H_Vec4 H_Vec4_DivideScalar(H_Vec4 v, f32 s);
f32 H_Vec4_Dot(H_Vec4 a, H_Vec4 b);
H_Vec4 H_Vec4_Cross(H_Vec4 a, H_Vec4 b);
f32 H_Vec4_Length(H_Vec4 v);
H_Vec4 H_Vec4_Normalize(H_Vec4 v);

H_Mat2 H_Mat2_Create(f32 m00, f32 m01, f32 m10, f32 m11);
H_Mat2 H_Mat2_CreateIdentity();
H_Mat2 H_Mat2_CreateTranslation(H_Vec2 v);
H_Mat2 H_Mat2_CreateRotation(f32 angle);
H_Mat2 H_Mat2_CreateScale(H_Vec2 v);
H_Mat2 H_Mat2_Transpose(H_Mat2 m);
f32 H_Mat2_Determinant(H_Mat2 m);
H_Mat2 H_Mat2_Inverse(H_Mat2 m);
H_Mat2 H_Mat2_Multiply(H_Mat2 a, H_Mat2 b);
H_Mat2 H_Mat2_MultiplyScalar(H_Mat2 m, f32 s);
H_Vec2 H_Mat2_MultiplyVec2(H_Mat2 m, H_Vec2 v);

H_Mat3 H_Mat3_Create(f32 m00, f32 m01, f32 m02, f32 m10, f32 m11,
    f32 m12, f32 m20, f32 m21, f32 m22);
H_Mat3 H_Mat3_CreateIdentity();
H_Mat3 H_Mat3_CreateTranslation(H_Vec3 v);
H_Mat3 H_Mat3_CreateRotationX(f32 angle);
H_Mat3 H_Mat3_CreateRotationY(f32 angle);
H_Mat3 H_Mat3_CreateRotationZ(f32 angle);
H_Mat3 H_Mat3_CreateRotation(f32 angle, H_Vec3 axis);
H_Mat3 H_Mat3_CreateScale(H_Vec3 v);
H_Mat3 H_Mat3_Transpose(H_Mat3 m);
f32 H_Mat3_Determinant(H_Mat3 m);
H_Mat3 H_Mat3_Inverse(H_Mat3 m);
H_Mat3 H_Mat3_Multiply(H_Mat3 a, H_Mat3 b);
H_Mat3 H_Mat3_MultiplyScalar(H_Mat3 m, f32 s);
H_Vec3 H_Mat3_MultiplyVec3(H_Mat3 m, H_Vec3 v);

H_Mat4 H_Mat4_Create(f32 m00, f32 m01, f32 m02, f32 m03, f32 m10,
    f32 m11, f32 m12, f32 m13, f32 m20, f32 m21, f32 m22, f32 m23,
    f32 m30, f32 m31, f32 m32, f32 m33);
H_Mat4 H_Mat4_CreateIdentity();
H_Mat4 H_Mat4_CreateTranslation(H_Vec3 v);
H_Mat4 H_Mat4_CreateRotationX(f32 angle);
H_Mat4 H_Mat4_CreateRotationY(f32 angle);
H_Mat4 H_Mat4_CreateRotationZ(f32 angle);
H_Mat4 H_Mat4_CreateRotation(f32 angle, H_Vec3 axis);
H_Mat4 H_Mat4_CreateScale(H_Vec3 v);
H_Mat4 H_Mat4_CreatePerspective(f32 fov, f32 aspect, f32 near, f32 far);
H_Mat4 H_Mat4_CreateOrthographic(f32 left, f32 right, f32 bottom,
    f32 top, f32 near, f32 far);
H_Mat4 H_Mat4_CreateLookAt(H_Vec3 position, H_Vec3 target, H_Vec3 up);
H_Mat4 H_Mat4_Transpose(H_Mat4 m);
f32 H_Mat4_Determinant(H_Mat4 m);
H_Mat4 H_Mat4_Inverse(H_Mat4 m);
H_Mat4 H_Mat4_Multiply(H_Mat4 a, H_Mat4 b);
H_Mat4 H_Mat4_MultiplyScalar(H_Mat4 m, f32 s);
H_Vec4 H_Mat4_MultiplyVec4(H_Mat4 m, H_Vec4 v);

#endif