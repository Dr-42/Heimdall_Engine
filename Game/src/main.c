#include <stdio.h>
#include <core/h_memory.h>

void TestHMem()
{
    printf("Testing h_mem module...\n");

    void* p1 = H_Mem_Malloc(100);
    void* p2 = H_Mem_Malloc(200);
    void* p3 = H_Mem_Malloc(300);
    void* p4 = H_Mem_Malloc(400);

    if (p1 == NULL || p2 == NULL || p3 == NULL || p4 == NULL)
    {
        printf("Error: Failed to allocate memory using H_Mem_Malloc\n");
        return;
    }

    H_Mem_Free(p2);
    H_Mem_Free(p4);

    void* p5 = H_Mem_Malloc(500);
    void* p6 = H_Mem_Malloc(600);

    if (p5 == NULL || p6 == NULL)
    {
        printf("Error: Failed to allocate memory using H_Mem_Malloc after freeing some blocks\n");
        return;
    }

    H_Mem_Free(p1);
    H_Mem_Free(p3);
    H_Mem_Free(p5);
    H_Mem_Free(p6);

    printf("h_mem module tests passed\n");
}

int main(int argc, char** argv)
{
    TestHMem();

    return 0;
}
