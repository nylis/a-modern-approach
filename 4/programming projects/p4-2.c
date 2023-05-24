#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("Enter a two digit number: ");
    scanf("%d", &i);

    k = i % 10;
    j = (i % 100) / 10;
    i = i / 100;

    printf("The reversal is: %d%1d%d", k, j, i);

    return 0;
}