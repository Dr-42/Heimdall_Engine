#pragma once
#include "defines.h"

#include <stdlib.h>

#define N_MEM_CHUNKS_MAX 1024 * 1024

typedef enum {
    N_MEM_TYPE_VECTOR,
    N_MEM_TYPE_MAP,
    N_MEM_TYPE_LINEAR_ALGEBRA,
    N_MEM_TYPE_STRING,
    N_MEM_TYPE_SHADER,
    N_MEM_TYPE_TEXTURE,
    N_MEM_TYPE_COUNT
} N_Mem_Type;

typedef u64 N_Mem_ID;

typedef struct {
    N_Mem_ID ID;
    void *ptr;
    size_t size;
    N_Mem_Type type;
} N_Mem_Chunk;

N_Mem_ID N_Mem_Malloc(size_t size, N_Mem_Type type);
N_Mem_ID N_Mem_Calloc(size_t num, size_t size, N_Mem_Type type);
N_Mem_ID N_Mem_Realloc(N_Mem_ID chunk, size_t size, N_Mem_Type type);
void N_Mem_Free(N_Mem_ID id);
void* N_Mem_GetPtr(N_Mem_ID id);

void N_Mem_Init();
void N_Mem_Free_All();
