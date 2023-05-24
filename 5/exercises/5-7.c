#include <stdio.h>

int main(void)
{
    int i = -17;

    printf("%d\n", i >= 0 ? i : -i);

    return 0;
}

// stays 17 even if 1 is set to -17