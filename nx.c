#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_func (void)
{
    printf("my_func called.");
}

int main (void)
{
    void (*ptr)();

    ptr = &my_func;

    printf("\nCalling func from Text: ");

    (ptr)();

    ptr = malloc(1024);

    printf("\nCalling func from Heap: ");

    memcpy(ptr, &my_func, 1024);

    (ptr)();

    printf("\nEnd\n");

    return (0);
}

