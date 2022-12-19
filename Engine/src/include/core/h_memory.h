#ifndef H_MEM_H
#define H_MEM_H
#include "defines.h"

#include <stdlib.h>

H_API void* H_Mem_Malloc(size_t size);
H_API void* H_Mem_Realloc(void* ptr, size_t size);
H_API void* H_Mem_Calloc(size_t count, size_t size);
H_API void H_Mem_Free(void* ptr);

#endif
