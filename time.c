#include <stdio.h>

int main(void)
{
    unsigned char h = 11, m = 8, s = 1;

    printf("%2.2u:%2.2u:%2.2u", h, m, s);

    printf("\nhex format time:\n");
    printf("%#2.2x:%#2.2x:%#2.2x", h, m, s);

    return 0;
}
