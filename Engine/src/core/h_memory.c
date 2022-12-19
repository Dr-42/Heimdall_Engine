#include "core/h_memory.h"
#include "defines.h"

#include <stdint.h>
#include <stddef.h>
#include <string.h>

#define H_MEM_ALIGNMENT 16
#define H_MEM_ALIGN_MASK (H_MEM_ALIGNMENT - 1)

typedef struct H_MemBlock_s
{
    size_t size;
    uint8_t data[];
} H_MemBlock;

static size_t H_Mem_AlignUp(size_t size)
{
    return (size + H_MEM_ALIGN_MASK) & ~H_MEM_ALIGN_MASK;
}

static H_MemBlock* H_Mem_GetBlockFromPointer(void* ptr)
{
    return (H_MemBlock*)((uint8_t*)ptr - offsetof(H_MemBlock, data));
}

static void* H_Mem_GetPointerFromBlock(H_MemBlock* block)
{
    return (void*)block->data;
}

void* H_Mem_Malloc(size_t size)
{
    size_t totalSize = H_Mem_AlignUp(sizeof(H_MemBlock)) + H_Mem_AlignUp(size);
    H_MemBlock* block = (H_MemBlock*)malloc(totalSize);
    if (block == NULL)
    {
        return NULL;
    }

    block->size = size;
    return H_Mem_GetPointerFromBlock(block);
}

void* H_Mem_Realloc(void* ptr, size_t size)
{
    if (ptr == NULL)
    {
        return H_Mem_Malloc(size);
    }

    H_MemBlock* block = H_Mem_GetBlockFromPointer(ptr);
    size_t totalSize = H_Mem_AlignUp(sizeof(H_MemBlock)) + H_Mem_AlignUp(size);
    block = (H_MemBlock*)realloc(block, totalSize);
    if (block == NULL)
    {
        return NULL;
    }

    block->size = size;
    return H_Mem_GetPointerFromBlock(block);
}

void* H_Mem_Calloc(size_t count, size_t size)
{
    void* ptr = H_Mem_Malloc(count * size);
    if (ptr != NULL)
    {
        memset(ptr, 0, count * size);
    }
    return ptr;
}

void H_Mem_Free(void* ptr)
{
    if (ptr == NULL)
    {
        return;
    }

    H_MemBlock* block = H_Mem_GetBlockFromPointer(ptr);
    free(block);
}
