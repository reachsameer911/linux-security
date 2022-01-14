#include <string.h>

int main (void)
{
    char buf1[10];

    char buf2[10];

    //memcpy(buf1, buf2, 15);


    __builtin_memcpy(buf1, buf2, 15);

    // -D_FORTIFY_SOURCE=2

    // compile-time/run-time

    return (0);

}

