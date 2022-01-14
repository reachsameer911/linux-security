#include <stdio.h>
#include <stdlib.h>

const int x = 200;

int main (void)
{
    int svar;
    char *hvar;

    hvar = malloc(100);

    printf("\nRO-Data: %p "
            "Stack: %p Heap: %p \n",
            &x, &svar, hvar);
    free(hvar);

    return (0);
}


// echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
