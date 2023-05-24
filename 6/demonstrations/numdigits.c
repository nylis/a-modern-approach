#include <stdio.h>

int main(void)
{
    int i, n = 0;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &i);

    do {
        i /= 10;
        ++n;
    } while (i != 0);

    printf("The number has %d digit(s).\n", n);

    return 0;
}