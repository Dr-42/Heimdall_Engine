#include "data_structs/h_hash_map.h"
#include "core/h_memory.h"
#include <stdint.h>
#include <string.h>

#define H_HASH_MAP_INITIAL_CAPACITY 16
#define H_HASH_MAP_LOAD_FACTOR 0.75

typedef struct H_HashMapEntry_s
{
    char *key;
    void *value;
    struct H_HashMapEntry_s *next;
} H_HashMapEntry;

typedef struct H_HashMap_s
{
    H_HashMapEntry **buckets;
    size_t capacity;
    size_t size;
    size_t threshold;
} H_HashMap;

static uint32_t H_HashMap_Hash(const char *key)
{
    uint32_t hash = 5381;
    int c;

    while ((c = *key++))
    {
        hash = ((hash << 5) + hash) + c;
    }

    return hash;
}

static void H_HashMap_Expand(H_HashMap *map)
{
    size_t oldCapacity = map->capacity;
    H_HashMapEntry **oldBuckets = map->buckets;

    map->capacity *= 2;
    map->threshold = (size_t)(map->capacity * H_HASH_MAP_LOAD_FACTOR);
    map->buckets = (H_HashMapEntry **)H_Mem_Calloc(map->capacity, sizeof(H_HashMapEntry *));

    for (size_t i = 0; i < oldCapacity; i++)
    {
        H_HashMapEntry *entry = oldBuckets[i];
        while (entry != NULL)
        {
            H_HashMapEntry *next = entry->next;
            size_t index = H_HashMap_Hash(entry->key) % map->capacity;
            entry->next = map->buckets[index];
            map->buckets[index] = entry;
            entry = next;
        }
    }

    H_Mem_Free(oldBuckets);
}

H_HashMap *H_HashMap_Create(void)
{
    H_HashMap *map = (H_HashMap *)H_Mem_Malloc(sizeof(H_HashMap));
    map->capacity = H_HASH_MAP_INITIAL_CAPACITY;
    map->threshold = (size_t)(map->capacity * H_HASH_MAP_LOAD_FACTOR);
    map->buckets = (H_HashMapEntry **)H_Mem_Calloc(map->capacity, sizeof(H_HashMapEntry *));
    map->size = 0;
    return map;
}

void H_HashMap_Destroy(H_HashMap *map)
{
    if (map == NULL)
    {
        return;
    }

    for (size_t i = 0; i < map->capacity; i++)
    {
        H_HashMapEntry *entry = map->buckets[i];
        while (entry != NULL)
        {
            H_HashMapEntry *next = entry->next;
            H_Mem_Free(entry->key);
            H_Mem_Free(entry);
            entry = next;
        }
    }

    H_Mem_Free(map->buckets);
    H_Mem_Free(map);
}

int H_HashMap_Put(H_HashMap *map, const char *key, void *value)
{
    if (map->size + 1 >= map->threshold)
    {
        H_HashMap_Expand(map);
    }

    size_t index = H_HashMap_Hash(key) % map->capacity;
    H_HashMapEntry *entry = map->buckets[index];
    while (entry != NULL)
    {
        if (strcmp(entry->key, key) == 0)
        {
            entry->value = value;
            return 0;
        }
        entry = entry->next;
    }

    entry = (H_HashMapEntry *)H_Mem_Malloc(sizeof(H_HashMapEntry));
    entry->key = (char *)H_Mem_Malloc(strlen(key) + 1);
    strcpy(entry->key, key);
    entry->value = value;
    entry->next = map->buckets[index];
    map->buckets[index] = entry;
    map->size++;

    return 0;
}

void *H_HashMap_Get(H_HashMap *map, const char *key)
{
    if (map == NULL)
    {
        return NULL;
    }

    size_t index = H_HashMap_Hash(key) % map->capacity;
    H_HashMapEntry *entry = map->buckets[index];
    while (entry != NULL)
    {
        if (strcmp(entry->key, key) == 0)
        {
            return entry->value;
        }
        entry = entry->next;
    }

    return NULL;
}

int H_HashMap_Remove(H_HashMap *map, const char *key)
{
    if (map == NULL)
    {
        return -1;
    }

    size_t index = H_HashMap_Hash(key) % map->capacity;
    H_HashMapEntry *entry = map->buckets[index];
    H_HashMapEntry *prev = NULL;
    while (entry != NULL)
    {
        if (strcmp(entry->key, key) == 0)
        {
            if (prev != NULL)
            {
                prev->next = entry->next;
            }
            else
            {
                map->buckets[index] = entry->next;
            }

            H_Mem_Free(entry->key);
            H_Mem_Free(entry);
            map->size--;
            return 0;
        }

        prev = entry;
        entry = entry->next;
    }

    return -1;
}

size_t H_HashMap_Size(H_HashMap *map)
{
    if (map == NULL)
    {
        return 0;
    }

    return map->size;
}
