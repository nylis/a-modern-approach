#include <stdio.h>

int main(void)
{
    int one, two, three;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &one, &two, &three);

    printf("You entered %.3d.%.3d.%.4d", one, two ,three);

    return 0;
}