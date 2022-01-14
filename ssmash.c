#include <string.h>

void my_func (void)
{
    char buf[3];

    char *c = "1234567";

    memcpy(buf, c, 7);
}


int main (void)
{
    my_func();

    return (0);
}

// -fstack-protector 
// -fstack-clash-protection 

