#include "math/h_la.h"

#include <math.h>


H_Vec2 H_Vec2_Add(H_Vec2 a, H_Vec2 b)
{
    H_Vec2 result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

H_Vec2 H_Vec2_Subtract(H_Vec2 a, H_Vec2 b)
{
    H_Vec2 result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result;
}

H_Vec2 H_Vec2_Multiply(H_Vec2 a, H_Vec2 b)
{
    H_Vec2 result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    return result;
}

H_Vec2 H_Vec2_MultiplyScalar(H_Vec2 v, float s)
{
    H_Vec2 result;
    result.x = v.x * s;
    result.y = v.y * s;
    return result;
}

H_Vec2 H_Vec2_DivideScalar(H_Vec2 v, float s)
{
    H_Vec2 result;
    result.x = v.x / s;
    result.y = v.y / s;
    return result;
}

float H_Vec2_Dot(H_Vec2 a, H_Vec2 b)
{
    return a.x * b.x + a.y * b.y;
}

float H_Vec2_Length(H_Vec2 v)
{
    return sqrt(H_Vec2_Dot(v, v));
}

H_Vec2 H_Vec2_Normalize(H_Vec2 v)
{
    return H_Vec2_DivideScalar(v, H_Vec2_Length(v));
}

H_Vec3 H_Vec3_Add(H_Vec3 a, H_Vec3 b)
{
    H_Vec3 result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

H_Vec3 H_Vec3_Subtract(H_Vec3 a, H_Vec3 b)
{
    H_Vec3 result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    return result;
}

H_Vec3 H_Vec3_Multiply(H_Vec3 a, H_Vec3 b)
{
    H_Vec3 result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    result.z = a.z * b.z;
    return result;
}

H_Vec3 H_Vec3_MultiplyScalar(H_Vec3 v, float s)
{
    H_Vec3 result;
    result.x = v.x * s;
    result.y = v.y * s;
    result.z = v.z * s;
    return result;
}

H_Vec3 H_Vec3_DivideScalar(H_Vec3 v, float s)
{
    H_Vec3 result;
    result.x = v.x / s;
    result.y = v.y / s;
    result.z = v.z / s;
    return result;
}

float H_Vec3_Dot(H_Vec3 a, H_Vec3 b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

H_Vec3 H_Vec3_Cross(H_Vec3 a, H_Vec3 b)
{
    H_Vec3 result;
    result.x = a.y * b.z - a.z * b.y;
    result.y = a.z * b.x - a.x * b.z;
    result.z = a.x * b.y - a.y * b.x;
    return result;
}

float H_Vec3_Length(H_Vec3 v)
{
    return sqrt(H_Vec3_Dot(v, v));
}

H_Vec3 H_Vec3_Normalize(H_Vec3 v)
{
    return H_Vec3_DivideScalar(v, H_Vec3_Length(v));
}

H_Vec4 H_Vec4_Add(H_Vec4 a, H_Vec4 b)
{
    H_Vec4 result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    result.w = a.w + b.w;
    return result;
}

H_Vec4 H_Vec4_Subtract(H_Vec4 a, H_Vec4 b)
{
    H_Vec4 result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    result.w = a.w - b.w;
    return result;
}

H_Vec4 H_Vec4_Multiply(H_Vec4 a, H_Vec4 b)
{
    H_Vec4 result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    result.z = a.z * b.z;
    result.w = a.w * b.w;
    return result;
}

H_Vec4 H_Vec4_MultiplyScalar(H_Vec4 v, float s)
{
    H_Vec4 result;
    result.x = v.x * s;
    result.y = v.y * s;
    result.z = v.z * s;
    result.w = v.w * s;
    return result;
}

H_Vec4 H_Vec4_DivideScalar(H_Vec4 v, float s)
{
    H_Vec4 result;
    result.x = v.x / s;
    result.y = v.y / s;
    result.z = v.z / s;
    result.w = v.w / s;
    return result;
}

float H_Vec4_Dot(H_Vec4 a, H_Vec4 b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

H_Vec4 H_Vec4_Cross(H_Vec4 a, H_Vec4 b)
{
    H_Vec4 result;
    result.x = a.y * b.z - a.z * b.y;
    result.y = a.z * b.x - a.x * b.z;
    result.z = a.x * b.y - a.y * b.x;
    result.w = 0.0f;
    return result;
}

float H_Vec4_Length(H_Vec4 v)
{
    return sqrt(H_Vec4_Dot(v, v));
}

H_Vec4 H_Vec4_Normalize(H_Vec4 v)
{
    return H_Vec4_DivideScalar(v, H_Vec4_Length(v));
}

H_Mat2 H_Mat2_Create(float m00, float m01, float m10, float m11){
    H_Mat2 result;
    result.m[0][0] = m00;
    result.m[0][1] = m01;
    result.m[1][0] = m10;
    result.m[1][1] = m11;
    return result;
}
H_Mat2 H_Mat2_CreateIdentity(){
    return H_Mat2_Create(1.0f, 0.0f, 0.0f, 1.0f);
}

H_Mat2 H_Mat2_CreateTranslation(H_Vec2 v){
    H_Mat2 result = H_Mat2_CreateIdentity();
    result.m[0][1] = v.x;
    result.m[1][1] = v.y;
    return result;
}

H_Mat2 H_Mat2_CreateRotation(float angle){
    H_Mat2 result = H_Mat2_CreateIdentity();
    result.m[0][0] = cos(angle);
    result.m[0][1] = -sin(angle);
    result.m[1][0] = sin(angle);
    result.m[1][1] = cos(angle);
    return result;
}

H_Mat2 H_Mat2_CreateScale(H_Vec2 v){
    H_Mat2 result = H_Mat2_CreateIdentity();
    result.m[0][0] = v.x;
    result.m[1][1] = v.y;
    return result;
}

H_Mat2 H_Mat2_Transpose(H_Mat2 m){
    H_Mat2 result;
    result.m[0][0] = m.m[0][0];
    result.m[0][1] = m.m[1][0];
    result.m[1][0] = m.m[0][1];
    result.m[1][1] = m.m[1][1];
    return result;
}

float H_Mat2_Determinant(H_Mat2 m){
    return m.m[0][0] * m.m[1][1] - m.m[0][1] * m.m[1][0];
}

H_Mat2 H_Mat2_Inverse(H_Mat2 m){
    H_Mat2 result;
    float det = H_Mat2_Determinant(m);
    result.m[0][0] = m.m[1][1] / det;
    result.m[0][1] = -m.m[0][1] / det;
    result.m[1][0] = -m.m[1][0] / det;
    result.m[1][1] = m.m[0][0] / det;
    return result;
}

H_Mat2 H_Mat2_Multiply(H_Mat2 a, H_Mat2 b){
    H_Mat2 result;
    result.m[0][0] = a.m[0][0] * b.m[0][0] + a.m[0][1] * b.m[1][0];
    result.m[0][1] = a.m[0][0] * b.m[0][1] + a.m[0][1] * b.m[1][1];
    result.m[1][0] = a.m[1][0] * b.m[0][0] + a.m[1][1] * b.m[1][0];
    result.m[1][1] = a.m[1][0] * b.m[0][1] + a.m[1][1] * b.m[1][1];
    return result;
}

H_Mat2 H_Mat2_MultiplyScalar(H_Mat2 m, float s){
    H_Mat2 result;
    result.m[0][0] = m.m[0][0] * s;
    result.m[0][1] = m.m[0][1] * s;
    result.m[1][0] = m.m[1][0] * s;
    result.m[1][1] = m.m[1][1] * s;
    return result;
}

H_Vec2 H_Mat2_MultiplyVec2(H_Mat2 m, H_Vec2 v){
    H_Vec2 result;
    result.x = m.m[0][0] * v.x + m.m[0][1] * v.y;
    result.y = m.m[1][0] * v.x + m.m[1][1] * v.y;
    return result;
}

H_Mat3 H_Mat3_Create(float m00, float m01, float m02, float m10, float m11,
    float m12, float m20, float m21, float m22){
    H_Mat3 result;
    result.m[0][0] = m00;
    result.m[0][1] = m01;
    result.m[0][2] = m02;
    result.m[1][0] = m10;
    result.m[1][1] = m11;
    result.m[1][2] = m12;
    result.m[2][0] = m20;
    result.m[2][1] = m21;
    result.m[2][2] = m22;
    return result;
    }
H_Mat3 H_Mat3_CreateIdentity(){
    return H_Mat3_Create(1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f);
}

H_Mat3 H_Mat3_CreateTranslation(H_Vec3 v){
    H_Mat3 result = H_Mat3_CreateIdentity();
    result.m[0][2] = v.x;
    result.m[1][2] = v.y;
    result.m[2][2] = v.z;
    return result;
}

H_Mat3 H_Mat3_CreateRotationX(float angle){
    H_Mat3 result = H_Mat3_CreateIdentity();
    result.m[1][1] = cos(angle);
    result.m[1][2] = -sin(angle);
    result.m[2][1] = sin(angle);
    result.m[2][2] = cos(angle);
    return result;
}

H_Mat3 H_Mat3_CreateRotationY(float angle){
    H_Mat3 result = H_Mat3_CreateIdentity();
    result.m[0][0] = cos(angle);
    result.m[0][2] = sin(angle);
    result.m[2][0] = -sin(angle);
    result.m[2][2] = cos(angle);
    return result;
}

H_Mat3 H_Mat3_CreateRotationZ(float angle){
    H_Mat3 result = H_Mat3_CreateIdentity();
    result.m[0][0] = cos(angle);
    result.m[0][1] = -sin(angle);
    result.m[1][0] = sin(angle);
    result.m[1][1] = cos(angle);
    return result;
}

H_Mat3 H_Mat3_CreateRotation(float angle, H_Vec3 axis){
    H_Mat3 result = H_Mat3_CreateIdentity();
    float c = cos(angle);
    float s = sin(angle);
    float t = 1.0f - c;
    result.m[0][0] = t * axis.x * axis.x + c;
    result.m[0][1] = t * axis.x * axis.y - s * axis.z;
    result.m[0][2] = t * axis.x * axis.z + s * axis.y;
    result.m[1][0] = t * axis.x * axis.y + s * axis.z;
    result.m[1][1] = t * axis.y * axis.y + c;
    result.m[1][2] = t * axis.y * axis.z - s * axis.x;
    result.m[2][0] = t * axis.x * axis.z - s * axis.y;
    result.m[2][1] = t * axis.y * axis.z + s * axis.x;
    result.m[2][2] = t * axis.z * axis.z + c;
    return result;
}

H_Mat3 H_Mat3_CreateScale(H_Vec3 v){
    H_Mat3 result = H_Mat3_CreateIdentity();
    result.m[0][0] = v.x;
    result.m[1][1] = v.y;
    result.m[2][2] = v.z;
    return result;
}

H_Mat3 H_Mat3_Transpose(H_Mat3 m){
    H_Mat3 result;
    result.m[0][0] = m.m[0][0];
    result.m[0][1] = m.m[1][0];
    result.m[0][2] = m.m[2][0];
    result.m[1][0] = m.m[0][1];
    result.m[1][1] = m.m[1][1];
    result.m[1][2] = m.m[2][1];
    result.m[2][0] = m.m[0][2];
    result.m[2][1] = m.m[1][2];
    result.m[2][2] = m.m[2][2];
    return result;
}

float H_Mat3_Determinant(H_Mat3 m){
    float result = 0.0f;
    result += m.m[0][0] * m.m[1][1] * m.m[2][2];
    result += m.m[0][1] * m.m[1][2] * m.m[2][0];
    result += m.m[0][2] * m.m[1][0] * m.m[2][1];
    result -= m.m[0][2] * m.m[1][1] * m.m[2][0];
    result -= m.m[0][1] * m.m[1][0] * m.m[2][2];
    result -= m.m[0][0] * m.m[1][2] * m.m[2][1];
    return result;
}

H_Mat3 H_Mat3_Inverse(H_Mat3 m){
    H_Mat3 result;
    float det = H_Mat3_Determinant(m);
    if(det == 0.0f){
        return H_Mat3_CreateIdentity();
    }
    result.m[0][0] = (m.m[1][1] * m.m[2][2] - m.m[1][2] * m.m[2][1]) / det;
    result.m[0][1] = (m.m[0][2] * m.m[2][1] - m.m[0][1] * m.m[2][2]) / det;
    result.m[0][2] = (m.m[0][1] * m.m[1][2] - m.m[0][2] * m.m[1][1]) / det;
    result.m[1][0] = (m.m[1][2] * m.m[2][0] - m.m[1][0] * m.m[2][2]) / det;
    result.m[1][1] = (m.m[0][0] * m.m[2][2] - m.m[0][2] * m.m[2][0]) / det;
    result.m[1][2] = (m.m[0][2] * m.m[1][0] - m.m[0][0] * m.m[1][2]) / det;
    result.m[2][0] = (m.m[1][0] * m.m[2][1] - m.m[1][1] * m.m[2][0]) / det;
    result.m[2][1] = (m.m[0][1] * m.m[2][0] - m.m[0][0] * m.m[2][1]) / det;
    result.m[2][2] = (m.m[0][0] * m.m[1][1] - m.m[0][1] * m.m[1][0]) / det;
    return result;
}

H_Mat3 H_Mat3_Multiply(H_Mat3 a, H_Mat3 b){
    H_Mat3 result;
    result.m[0][0] = a.m[0][0] * b.m[0][0] + a.m[0][1] * b.m[1][0] + a.m[0][2] * b.m[2][0];
    result.m[0][1] = a.m[0][0] * b.m[0][1] + a.m[0][1] * b.m[1][1] + a.m[0][2] * b.m[2][1];
    result.m[0][2] = a.m[0][0] * b.m[0][2] + a.m[0][1] * b.m[1][2] + a.m[0][2] * b.m[2][2];
    result.m[1][0] = a.m[1][0] * b.m[0][0] + a.m[1][1] * b.m[1][0] + a.m[1][2] * b.m[2][0];
    result.m[1][1] = a.m[1][0] * b.m[0][1] + a.m[1][1] * b.m[1][1] + a.m[1][2] * b.m[2][1];
    result.m[1][2] = a.m[1][0] * b.m[0][2] + a.m[1][1] * b.m[1][2] + a.m[1][2] * b.m[2][2];
    result.m[2][0] = a.m[2][0] * b.m[0][0] + a.m[2][1] * b.m[1][0] + a.m[2][2] * b.m[2][0];
    result.m[2][1] = a.m[2][0] * b.m[0][1] + a.m[2][1] * b.m[1][1] + a.m[2][2] * b.m[2][1];
    result.m[2][2] = a.m[2][0] * b.m[0][2] + a.m[2][1] * b.m[1][2] + a.m[2][2] * b.m[2][2];
    return result;
}

H_Mat3 H_Mat3_MultiplyScalar(H_Mat3 m, float s){
    H_Mat3 result;
    result.m[0][0] = m.m[0][0] * s;
    result.m[0][1] = m.m[0][1] * s;
    result.m[0][2] = m.m[0][2] * s;
    result.m[1][0] = m.m[1][0] * s;
    result.m[1][1] = m.m[1][1] * s;
    result.m[1][2] = m.m[1][2] * s;
    result.m[2][0] = m.m[2][0] * s;
    result.m[2][1] = m.m[2][1] * s;
    result.m[2][2] = m.m[2][2] * s;
    return result;
}

H_Vec3 H_Mat3_MultiplyVec3(H_Mat3 m, H_Vec3 v){
    H_Vec3 result;
    result.x = m.m[0][0] * v.x + m.m[0][1] * v.y + m.m[0][2] * v.z;
    result.y = m.m[1][0] * v.x + m.m[1][1] * v.y + m.m[1][2] * v.z;
    result.z = m.m[2][0] * v.x + m.m[2][1] * v.y + m.m[2][2] * v.z;
    return result;
}

H_Mat4 H_Mat4_Create(float m00, float m01, float m02, float m03, float m10,
    float m11, float m12, float m13, float m20, float m21, float m22, float m23,
    float m30, float m31, float m32, float m33){
    H_Mat4 result;
    result.m[0][0] = m00;
    result.m[0][1] = m01;
    result.m[0][2] = m02;
    result.m[0][3] = m03;
    result.m[1][0] = m10;
    result.m[1][1] = m11;
    result.m[1][2] = m12;
    result.m[1][3] = m13;
    result.m[2][0] = m20;
    result.m[2][1] = m21;
    result.m[2][2] = m22;
    result.m[2][3] = m23;
    result.m[3][0] = m30;
    result.m[3][1] = m31;
    result.m[3][2] = m32;
    result.m[3][3] = m33;
    return result;
    }
H_Mat4 H_Mat4_CreateIdentity(){
    H_Mat4 result;
    result.m[0][0] = 1.0f;
    result.m[0][1] = 0.0f;
    result.m[0][2] = 0.0f;
    result.m[0][3] = 0.0f;
    result.m[1][0] = 0.0f;
    result.m[1][1] = 1.0f;
    result.m[1][2] = 0.0f;
    result.m[1][3] = 0.0f;
    result.m[2][0] = 0.0f;
    result.m[2][1] = 0.0f;
    result.m[2][2] = 1.0f;
    result.m[2][3] = 0.0f;
    result.m[3][0] = 0.0f;
    result.m[3][1] = 0.0f;
    result.m[3][2] = 0.0f;
    result.m[3][3] = 1.0f;
    return result;
}

H_Mat4 H_Mat4_CreateTranslation(H_Vec3 v){
    H_Mat4 result;
    result.m[0][0] = 1.0f;
    result.m[0][1] = 0.0f;
    result.m[0][2] = 0.0f;
    result.m[0][3] = v.x;
    result.m[1][0] = 0.0f;
    result.m[1][1] = 1.0f;
    result.m[1][2] = 0.0f;
    result.m[1][3] = v.y;
    result.m[2][0] = 0.0f;
    result.m[2][1] = 0.0f;
    result.m[2][2] = 1.0f;
    result.m[2][3] = v.z;
    result.m[3][0] = 0.0f;
    result.m[3][1] = 0.0f;
    result.m[3][2] = 0.0f;
    result.m[3][3] = 1.0f;
    return result;
}

H_Mat4 H_Mat4_CreateRotationX(float angle){
    H_Mat4 result;
    float c = cosf(angle);
    float s = sinf(angle);
    result.m[0][0] = 1.0f;
    result.m[0][1] = 0.0f;
    result.m[0][2] = 0.0f;
    result.m[0][3] = 0.0f;
    result.m[1][0] = 0.0f;
    result.m[1][1] = c;
    result.m[1][2] = s;
    result.m[1][3] = 0.0f;
    result.m[2][0] = 0.0f;
    result.m[2][1] = -s;
    result.m[2][2] = c;
    result.m[2][3] = 0.0f;
    result.m[3][0] = 0.0f;
    result.m[3][1] = 0.0f;
    result.m[3][2] = 0.0f;
    result.m[3][3] = 1.0f;
    return result;
}

H_Mat4 H_Mat4_CreateRotationY(float angle){
    H_Mat4 result;
    float c = cosf(angle);
    float s = sinf(angle);
    result.m[0][0] = c;
    result.m[0][1] = 0.0f;
    result.m[0][2] = -s;
    result.m[0][3] = 0.0f;
    result.m[1][0] = 0.0f;
    result.m[1][1] = 1.0f;
    result.m[1][2] = 0.0f;
    result.m[1][3] = 0.0f;
    result.m[2][0] = s;
    result.m[2][1] = 0.0f;
    result.m[2][2] = c;
    result.m[2][3] = 0.0f;
    result.m[3][0] = 0.0f;
    result.m[3][1] = 0.0f;
    result.m[3][2] = 0.0f;
    result.m[3][3] = 1.0f;
    return result;
}

H_Mat4 H_Mat4_CreateRotationZ(float angle){
    H_Mat4 result;
    float c = cosf(angle);
    float s = sinf(angle);
    result.m[0][0] = c;
    result.m[0][1] = s;
    result.m[0][2] = 0.0f;
    result.m[0][3] = 0.0f;
    result.m[1][0] = -s;
    result.m[1][1] = c;
    result.m[1][2] = 0.0f;
    result.m[1][3] = 0.0f;
    result.m[2][0] = 0.0f;
    result.m[2][1] = 0.0f;
    result.m[2][2] = 1.0f;
    result.m[2][3] = 0.0f;
    result.m[3][0] = 0.0f;
    result.m[3][1] = 0.0f;
    result.m[3][2] = 0.0f;
    result.m[3][3] = 1.0f;
    return result;
}

H_Mat4 H_Mat4_CreateRotation(float angle, H_Vec3 axis){
    H_Mat4 result;
    float c = cosf(angle);
    float s = sinf(angle);
    float t = 1.0f - c;
    result.m[0][0] = t * axis.x * axis.x + c;
    result.m[0][1] = t * axis.x * axis.y + s * axis.z;
    result.m[0][2] = t * axis.x * axis.z - s * axis.y;
    result.m[0][3] = 0.0f;
    result.m[1][0] = t * axis.x * axis.y - s * axis.z;
    result.m[1][1] = t * axis.y * axis.y + c;
    result.m[1][2] = t * axis.y * axis.z + s * axis.x;
    result.m[1][3] = 0.0f;
    result.m[2][0] = t * axis.x * axis.z + s * axis.y;
    result.m[2][1] = t * axis.y * axis.z - s * axis.x;
    result.m[2][2] = t * axis.z * axis.z + c;
    result.m[2][3] = 0.0f;
    result.m[3][0] = 0.0f;
    result.m[3][1] = 0.0f;
    result.m[3][2] = 0.0f;
    result.m[3][3] = 1.0f;
    return result;
}

H_Mat4 H_Mat4_CreateScale(H_Vec3 v){
    H_Mat4 result;
    result.m[0][0] = v.x;
    result.m[0][1] = 0.0f;
    result.m[0][2] = 0.0f;
    result.m[0][3] = 0.0f;
    result.m[1][0] = 0.0f;
    result.m[1][1] = v.y;
    result.m[1][2] = 0.0f;
    result.m[1][3] = 0.0f;
    result.m[2][0] = 0.0f;
    result.m[2][1] = 0.0f;
    result.m[2][2] = v.z;
    result.m[2][3] = 0.0f;
    result.m[3][0] = 0.0f;
    result.m[3][1] = 0.0f;
    result.m[3][2] = 0.0f;
    result.m[3][3] = 1.0f;
    return result;
}

H_Mat4 H_Mat4_CreatePerspective(float fov, float aspect, float near, float far){
    H_Mat4 result;
    float f = 1.0f / tanf(fov / 2.0f);
    result.m[0][0] = f / aspect;
    result.m[0][1] = 0.0f;
    result.m[0][2] = 0.0f;
    result.m[0][3] = 0.0f;
    result.m[1][0] = 0.0f;
    result.m[1][1] = f;
    result.m[1][2] = 0.0f;
    result.m[1][3] = 0.0f;
    result.m[2][0] = 0.0f;
    result.m[2][1] = 0.0f;
    result.m[2][2] = (far + near) / (near - far);
    result.m[2][3] = -1.0f;
    result.m[3][0] = 0.0f;
    result.m[3][1] = 0.0f;
    result.m[3][2] = (2.0f * far * near) / (near - far);
    result.m[3][3] = 0.0f;
    return result;
}

H_Mat4 H_Mat4_CreateOrthographic(float left, float right, float bottom,
    float top, float near, float far){
    H_Mat4 result;
    result.m[0][0] = 2.0f / (right - left);
    result.m[0][1] = 0.0f;
    result.m[0][2] = 0.0f;
    result.m[0][3] = 0.0f;
    result.m[1][0] = 0.0f;
    result.m[1][1] = 2.0f / (top - bottom);
    result.m[1][2] = 0.0f;
    result.m[1][3] = 0.0f;
    result.m[2][0] = 0.0f;
    result.m[2][1] = 0.0f;
    result.m[2][2] = -2.0f / (far - near);
    result.m[2][3] = 0.0f;
    result.m[3][0] = -(right + left) / (right - left);
    result.m[3][1] = -(top + bottom) / (top - bottom);
    result.m[3][2] = -(far + near) / (far - near);
    result.m[3][3] = 1.0f;
    return result;
    }
H_Mat4 H_Mat4_CreateLookAt(H_Vec3 position, H_Vec3 target, H_Vec3 up){
    H_Mat4 result;
    H_Vec3 zaxis = H_Vec3_Normalize(H_Vec3_Subtract(position, target));
    H_Vec3 xaxis = H_Vec3_Normalize(H_Vec3_Cross(up, zaxis));
    H_Vec3 yaxis = H_Vec3_Cross(zaxis, xaxis);
    result.m[0][0] = xaxis.x;
    result.m[0][1] = yaxis.x;
    result.m[0][2] = zaxis.x;
    result.m[0][3] = 0.0f;
    result.m[1][0] = xaxis.y;
    result.m[1][1] = yaxis.y;
    result.m[1][2] = zaxis.y;
    result.m[1][3] = 0.0f;
    result.m[2][0] = xaxis.z;
    result.m[2][1] = yaxis.z;
    result.m[2][2] = zaxis.z;
    result.m[2][3] = 0.0f;
    result.m[3][0] = -H_Vec3_Dot(xaxis, position);
    result.m[3][1] = -H_Vec3_Dot(yaxis, position);
    result.m[3][2] = -H_Vec3_Dot(zaxis, position);
    result.m[3][3] = 1.0f;
    return result;
}

H_Mat4 H_Mat4_Transpose(H_Mat4 m){
    H_Mat4 result;
    result.m[0][0] = m.m[0][0];
    result.m[0][1] = m.m[1][0];
    result.m[0][2] = m.m[2][0];
    result.m[0][3] = m.m[3][0];
    result.m[1][0] = m.m[0][1];
    result.m[1][1] = m.m[1][1];
    result.m[1][2] = m.m[2][1];
    result.m[1][3] = m.m[3][1];
    result.m[2][0] = m.m[0][2];
    result.m[2][1] = m.m[1][2];
    result.m[2][2] = m.m[2][2];
    result.m[2][3] = m.m[3][2];
    result.m[3][0] = m.m[0][3];
    result.m[3][1] = m.m[1][3];
    result.m[3][2] = m.m[2][3];
    result.m[3][3] = m.m[3][3];
    return result;
}

float H_Mat4_Determinant(H_Mat4 m){
    float result = 0.0f;
    result += m.m[0][0] * m.m[1][1] * m.m[2][2] * m.m[3][3];
    result += m.m[0][0] * m.m[1][2] * m.m[2][3] * m.m[3][1];
    result += m.m[0][0] * m.m[1][3] * m.m[2][1] * m.m[3][2];
    result += m.m[0][1] * m.m[1][0] * m.m[2][3] * m.m[3][2];
    result += m.m[0][1] * m.m[1][2] * m.m[2][0] * m.m[3][3];
    result += m.m[0][1] * m.m[1][3] * m.m[2][2] * m.m[3][0];
    result += m.m[0][2] * m.m[1][0] * m.m[2][1] * m.m[3][3];
    result += m.m[0][2] * m.m[1][1] * m.m[2][3] * m.m[3][0];
    result += m.m[0][2] * m.m[1][3] * m.m[2][0] * m.m[3][1];
    result += m.m[0][3] * m.m[1][0] * m.m[2][2] * m.m[3][1];
    result += m.m[0][3] * m.m[1][1] * m.m[2][0] * m.m[3][2];
    result += m.m[0][3] * m.m[1][2] * m.m[2][1] * m.m[3][0];
    result -= m.m[0][0] * m.m[1][1] * m.m[2][3] * m.m[3][2];
    result -= m.m[0][0] * m.m[1][2] * m.m[2][1] * m.m[3][3];
    result -= m.m[0][0] * m.m[1][3] * m.m[2][2] * m.m[3][1];
    result -= m.m[0][1] * m.m[1][0] * m.m[2][2] * m.m[3][3];
    result -= m.m[0][1] * m.m[1][2] * m.m[2][3] * m.m[3][0];
    result -= m.m[0][1] * m.m[1][3] * m.m[2][0] * m.m[3][2];
    result -= m.m[0][2] * m.m[1][0] * m.m[2][3] * m.m[3][1];
    result -= m.m[0][2] * m.m[1][1] * m.m[2][0] * m.m[3][3];
    result -= m.m[0][2] * m.m[1][3] * m.m[2][1] * m.m[3][0];
    result -= m.m[0][3] * m.m[1][0] * m.m[2][1] * m.m[3][2];
    result -= m.m[0][3] * m.m[1][1] * m.m[2][2] * m.m[3][0];
    result -= m.m[0][3] * m.m[1][2] * m.m[2][0] * m.m[3][1];
    return result;
}

H_Mat4 H_Mat4_Inverse(H_Mat4 m){
    H_Mat4 result;
    result.m[0][0] = m.m[1][1] * m.m[2][2] * m.m[3][3] + m.m[1][2] * m.m[2][3] * m.m[3][1] + m.m[1][3] * m.m[2][1] * m.m[3][2] - m.m[1][1] * m.m[2][3] * m.m[3][2] - m.m[1][2] * m.m[2][1] * m.m[3][3] - m.m[1][3] * m.m[2][2] * m.m[3][1];
    result.m[0][1] = m.m[0][1] * m.m[2][3] * m.m[3][2] + m.m[0][2] * m.m[2][1] * m.m[3][3] + m.m[0][3] * m.m[2][2] * m.m[3][1] - m.m[0][1] * m.m[2][2] * m.m[3][3] - m.m[0][2] * m.m[2][3] * m.m[3][1] - m.m[0][3] * m.m[2][1] * m.m[3][2];
    result.m[0][2] = m.m[0][1] * m.m[1][2] * m.m[3][3] + m.m[0][2] * m.m[1][3] * m.m[3][1] + m.m[0][3] * m.m[1][1] * m.m[3][2] - m.m[0][1] * m.m[1][3] * m.m[3][2] - m.m[0][2] * m.m[1][1] * m.m[3][3] - m.m[0][3] * m.m[1][2] * m.m[3][1];
    result.m[0][3] = m.m[0][1] * m.m[1][3] * m.m[2][2] + m.m[0][2] * m.m[1][1] * m.m[2][3] + m.m[0][3] * m.m[1][2] * m.m[2][1] - m.m[0][1] * m.m[1][2] * m.m[2][3] - m.m[0][2] * m.m[1][3] * m.m[2][1] - m.m[0][3] * m.m[1][1] * m.m[2][2];
    result.m[1][0] = m.m[1][0] * m.m[2][3] * m.m[3][2] + m.m[1][2] * m.m[2][0] * m.m[3][3] + m.m[1][3] * m.m[2][2] * m.m[3][0] - m.m[1][0] * m.m[2][2] * m.m[3][3] - m.m[1][2] * m.m[2][3] * m.m[3][0] - m.m[1][3] * m.m[2][0] * m.m[3][2];
    result.m[1][1] = m.m[0][0] * m.m[2][2] * m.m[3][3] + m.m[0][2] * m.m[2][3] * m.m[3][0] + m.m[0][3] * m.m[2][0] * m.m[3][2] - m.m[0][0] * m.m[2][3] * m.m[3][2] - m.m[0][2] * m.m[2][0] * m.m[3][3] - m.m[0][3] * m.m[2][2] * m.m[3][0];
    result.m[1][2] = m.m[0][0] * m.m[1][3] * m.m[3][2] + m.m[0][2] * m.m[1][0] * m.m[3][3] + m.m[0][3] * m.m[1][2] * m.m[3][0] - m.m[0][0] * m.m[1][2] * m.m[3][3] - m.m[0][2] * m.m[1][3] * m.m[3][0] - m.m[0][3] * m.m[1][0] * m.m[3][2];
    result.m[1][3] = m.m[0][0] * m.m[1][2] * m.m[2][3] + m.m[0][2] * m.m[1][3] * m.m[2][0] + m.m[0][3] * m.m[1][0] * m.m[2][2] - m.m[0][0] * m.m[1][3] * m.m[2][2] - m.m[0][2] * m.m[1][0] * m.m[2][3] - m.m[0][3] * m.m[1][2] * m.m[2][0];
    result.m[2][0] = m.m[1][0] * m.m[2][1] * m.m[3][3] + m.m[1][1] * m.m[2][3] * m.m[3][0] + m.m[1][3] * m.m[2][0] * m.m[3][1] - m.m[1][0] * m.m[2][3] * m.m[3][1] - m.m[1][1] * m.m[2][0] * m.m[3][3] - m.m[1][3] * m.m[2][1] * m.m[3][0];
    result.m[2][1] = m.m[0][0] * m.m[2][3] * m.m[3][1] + m.m[0][1] * m.m[2][0] * m.m[3][3] + m.m[0][3] * m.m[2][1] * m.m[3][0] - m.m[0][0] * m.m[2][1] * m.m[3][3] - m.m[0][1] * m.m[2][3] * m.m[3][0] - m.m[0][3] * m.m[2][0] * m.m[3][1];
    result.m[2][2] = m.m[0][0] * m.m[1][1] * m.m[3][3] + m.m[0][1] * m.m[1][3] * m.m[3][0] + m.m[0][3] * m.m[1][0] * m.m[3][1] - m.m[0][0] * m.m[1][3] * m.m[3][1] - m.m[0][1] * m.m[1][0] * m.m[3][3] - m.m[0][3] * m.m[1][1] * m.m[3][0];
    result.m[2][3] = m.m[0][0] * m.m[1][3] * m.m[2][1] + m.m[0][1] * m.m[1][0] * m.m[2][3] + m.m[0][3] * m.m[1][1] * m.m[2][0] - m.m[0][0] * m.m[1][1] * m.m[2][3] - m.m[0][1] * m.m[1][3] * m.m[2][0] - m.m[0][3] * m.m[1][0] * m.m[2][1];
    result.m[3][0] = m.m[1][0] * m.m[2][2] * m.m[3][1] + m.m[1][1] * m.m[2][0] * m.m[3][2] + m.m[1][2] * m.m[2][1] * m.m[3][0] - m.m[1][0] * m.m[2][1] * m.m[3][2] - m.m[1][1] * m.m[2][2] * m.m[3][0] - m.m[1][2] * m.m[2][0] * m.m[3][1];
    result.m[3][1] = m.m[0][0] * m.m[2][1] * m.m[3][2] + m.m[0][1] * m.m[2][2] * m.m[3][0] + m.m[0][2] * m.m[2][0] * m.m[3][1] - m.m[0][0] * m.m[2][2] * m.m[3][1] - m.m[0][1] * m.m[2][0] * m.m[3][2] - m.m[0][2] * m.m[2][1] * m.m[3][0];
    result.m[3][2] = m.m[0][0] * m.m[1][2] * m.m[3][1] + m.m[0][1] * m.m[1][0] * m.m[3][2] + m.m[0][2] * m.m[1][1] * m.m[3][0] - m.m[0][0] * m.m[1][1] * m.m[3][2] - m.m[0][1] * m.m[1][2] * m.m[3][0] - m.m[0][2] * m.m[1][0] * m.m[3][1];
    result.m[3][3] = m.m[0][0] * m.m[1][1] * m.m[2][2] + m.m[0][1] * m.m[1][2] * m.m[2][0] + m.m[0][2] * m.m[1][0] * m.m[2][1] - m.m[0][0] * m.m[1][2] * m.m[2][1] - m.m[0][1] * m.m[1][0] * m.m[2][2] - m.m[0][2] * m.m[1][1] * m.m[2][0];
    return result;
}

H_Mat4 H_Mat4_Multiply(H_Mat4 a, H_Mat4 b){
    H_Mat4 result;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            result.m[i][j] = 0;
            for(int k = 0; k < 4; k++){
                result.m[i][j] += a.m[i][k] * b.m[k][j];
            }
        }
    }
    return result;
}

H_Mat4 H_Mat4_MultiplyScalar(H_Mat4 m, float s){
    H_Mat4 result;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            result.m[i][j] = m.m[i][j] * s;
        }
    }
    return result;
}

H_Vec4 H_Mat4_MultiplyVec4(H_Mat4 m, H_Vec4 v){
    H_Vec4 result;
    result.x = m.m[0][0] * v.x + m.m[0][1] * v.y + m.m[0][2] * v.z + m.m[0][3] * v.w;
    result.y = m.m[1][0] * v.x + m.m[1][1] * v.y + m.m[1][2] * v.z + m.m[1][3] * v.w;
    result.z = m.m[2][0] * v.x + m.m[2][1] * v.y + m.m[2][2] * v.z + m.m[2][3] * v.w;
    result.w = m.m[3][0] * v.x + m.m[3][1] * v.y + m.m[3][2] * v.z + m.m[3][3] * v.w;
    return result;
}

