#ifndef H_HASH_MAP_H
#define H_HASH_MAP_H

#include <stdlib.h>

typedef struct H_HashMap_s H_HashMap;

H_HashMap* H_HashMap_Create(void);
void H_HashMap_Destroy(H_HashMap* map);
int H_HashMap_Put(H_HashMap* map, const char* key, void* value);
void* H_HashMap_Get(H_HashMap* map, const char* key);
int H_HashMap_Remove(H_HashMap* map, const char* key);
size_t H_HashMap_Size(H_HashMap* map);

#endif
