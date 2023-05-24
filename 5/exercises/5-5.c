#include <stdio.h>

int main(void)
{
    int n = 0;

    if (((n >= 1) <= 10))
        printf("n is between 1 and 10\n");
    
    return 0;
}

// this is technically legal but doesnt work
// as a range