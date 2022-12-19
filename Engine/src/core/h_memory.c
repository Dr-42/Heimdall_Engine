#include "core/h_memory.h"

H_Mem_Chunk H_Mem_Chunks[H_MEM_CHUNKS_MAX] = {0};
static H_Mem_ID chunk_count = 0;

H_Mem_ID H_Mem_Malloc(size_t size, H_Mem_Type type)
{
    H_Mem_Chunk chunk = {0};
    chunk.ID = chunk_count++; 
    chunk.ptr = malloc(size);
    chunk.size = size;
    chunk.type = type;
    H_Mem_Chunks[chunk.ID] = chunk;
    return chunk.ID;
}

H_Mem_ID H_Mem_Calloc(size_t num, size_t size, H_Mem_Type type)
{
    H_Mem_Chunk chunk = {0};
    chunk.ID = chunk_count++; 
    chunk.ptr = calloc(num, size);
    chunk.size = size;
    chunk.type = type;
    H_Mem_Chunks[chunk.ID] = chunk;
    return chunk.ID;
}

H_Mem_ID H_Mem_Realloc(H_Mem_ID id, size_t size, H_Mem_Type type)
{
    H_Mem_Chunk chunk = H_Mem_Chunks[id];
    chunk.ptr = realloc(chunk.ptr, size);
    chunk.size = size;
    chunk.type = type;
    return chunk.ID;
}

void H_Mem_Free(H_Mem_ID id)
{
    H_Mem_Chunk chunk = H_Mem_Chunks[id];
    free(chunk.ptr);
    H_Mem_Chunks[id] = (H_Mem_Chunk){0};
}

void H_Mem_Init()
{
    chunk_count = 0;
}

void H_Mem_Free_All()
{
    for (H_Mem_ID i = 0; i < chunk_count; i++)
    {
        H_Mem_Chunk chunk = H_Mem_Chunks[i];
        if (chunk.ptr)
        {
            free(chunk.ptr);
        }
    }
}

void* H_Mem_GetPtr(H_Mem_ID id)
{
    return H_Mem_Chunks[id].ptr;
}
