#include <stdio.h>

int main(void)
{
    int n = 5;

    if ((n == (1 - 10)))
        printf("n is between 1 and 10\n");

    return 0;
}

// program tries to match 5 with -9, obviously fails