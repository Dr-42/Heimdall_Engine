#ifndef H_VECTOR_H
#define H_VECTOR_H

#include <stddef.h>

typedef struct H_Vector_s H_Vector;

H_Vector* H_Vector_Create(size_t elementSize);
void H_Vector_Destroy(H_Vector* vector);
int H_Vector_PushBack(H_Vector* vector, const void* element);
void H_Vector_PopBack(H_Vector* vector);
void* H_Vector_At(H_Vector* vector, size_t index);
size_t H_Vector_Size(H_Vector* vector);

#endif
