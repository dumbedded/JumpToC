#include <stdio.h>

int main(void)
{
    printf("Enter any single symbol: ");
    int value = getchar();
    printf("Your value is: ");
    putchar(value); 

    return 0;
}
