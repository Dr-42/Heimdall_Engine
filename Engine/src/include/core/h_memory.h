#pragma once
#include "defines.h"

#include <stdlib.h>

#define H_MEM_CHUNKS_MAX 1024 * 1024

typedef enum {
    H_MEM_TYPE_VECTOR,
    H_MEM_TYPE_MAP,
    H_MEM_TYPE_LINEAR_ALGEBRA,
    H_MEM_TYPE_STRING,
    H_MEM_TYPE_SHADER,
    H_MEM_TYPE_TEXTURE,
    H_MEM_TYPE_COUNT
} H_Mem_Type;

typedef u64 H_Mem_ID;

typedef struct {
    H_Mem_ID ID;
    void *ptr;
    size_t size;
    H_Mem_Type type;
} H_Mem_Chunk;

H_Mem_ID H_Mem_Malloc(size_t size, H_Mem_Type type);
H_Mem_ID H_Mem_Calloc(size_t num, size_t size, H_Mem_Type type);
H_Mem_ID H_Mem_Realloc(H_Mem_ID chunk, size_t size, H_Mem_Type type);
void H_Mem_Free(H_Mem_ID id);
void* H_Mem_GetPtr(H_Mem_ID id);

void H_Mem_Init();
void H_Mem_Free_All();
