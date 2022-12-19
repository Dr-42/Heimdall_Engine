#include "core/n_memory.h"

N_Mem_Chunk N_Mem_Chunks[N_MEM_CHUNKS_MAX] = {0};
static N_Mem_ID chunk_count = 0;

N_Mem_ID N_Mem_Malloc(size_t size, N_Mem_Type type)
{
    N_Mem_Chunk chunk = {0};
    chunk.ID = chunk_count++; 
    chunk.ptr = malloc(size);
    chunk.size = size;
    chunk.type = type;
    N_Mem_Chunks[chunk.ID] = chunk;
    return chunk.ID;
}

N_Mem_ID N_Mem_Calloc(size_t num, size_t size, N_Mem_Type type)
{
    N_Mem_Chunk chunk = {0};
    chunk.ID = chunk_count++; 
    chunk.ptr = calloc(num, size);
    chunk.size = size;
    chunk.type = type;
    N_Mem_Chunks[chunk.ID] = chunk;
    return chunk.ID;
}

N_Mem_ID N_Mem_Realloc(N_Mem_ID id, size_t size, N_Mem_Type type)
{
    N_Mem_Chunk chunk = N_Mem_Chunks[id];
    chunk.ptr = realloc(chunk.ptr, size);
    chunk.size = size;
    chunk.type = type;
    return chunk.ID;
}

void N_Mem_Free(N_Mem_ID id)
{
    N_Mem_Chunk chunk = N_Mem_Chunks[id];
    free(chunk.ptr);
    N_Mem_Chunks[id] = (N_Mem_Chunk){0};
}

void N_Mem_Init()
{
    chunk_count = 0;
}

void N_Mem_Free_All()
{
    for (N_Mem_ID i = 0; i < chunk_count; i++)
    {
        N_Mem_Chunk chunk = N_Mem_Chunks[i];
        if (chunk.ptr)
        {
            free(chunk.ptr);
        }
    }
}

void* N_Mem_GetPtr(N_Mem_ID id)
{
    return N_Mem_Chunks[id].ptr;
}
