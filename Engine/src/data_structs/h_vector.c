#include "data_structs/h_vector.h"
#include "core/h_memory.h"
#include <string.h>
#include <stdint.h>

struct H_Vector_s
{
    size_t elementSize;
    size_t size;
    size_t capacity;
    uint8_t *data;
};

H_Vector *H_Vector_Create(size_t elementSize)
{
    H_Vector *vector = (H_Vector *)H_Mem_Malloc(sizeof(H_Vector));
    vector->elementSize = elementSize;
    vector->size = 0;
    vector->capacity = 4;
    vector->data = (uint8_t *)H_Mem_Malloc(vector->capacity * elementSize);
    return vector;
}

void H_Vector_Destroy(H_Vector *vector)
{
    if (vector == NULL)
    {
        return;
    }

    H_Mem_Free(vector->data);
    H_Mem_Free(vector);
}

int H_Vector_PushBack(H_Vector *vector, const void *element)
{
    if (vector->size + 1 > vector->capacity)
    {
        size_t newCapacity = vector->capacity * 2;
        uint8_t *newData = (uint8_t *)H_Mem_Malloc(newCapacity * vector->elementSize);
        memcpy(newData, vector->data, vector->size * vector->elementSize);
        H_Mem_Free(vector->data);
        vector->data = newData;
        vector->capacity = newCapacity;
    }

    memcpy(vector->data + vector->size * vector->elementSize, element, vector->elementSize);
    vector->size++;

    return 0;
}

void H_Vector_PopBack(H_Vector *vector)
{
    if (vector->size == 0)
    {
        return;
    }

    vector->size--;
}

void *H_Vector_At(H_Vector *vector, size_t index)
{
    if (index >= vector->size)
    {
        return NULL;
    }

    return vector->data + index * vector->elementSize;
}

size_t H_Vector_Size(H_Vector *vector)
{
    return vector->size;
}
