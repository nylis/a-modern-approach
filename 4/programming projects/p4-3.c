#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("Enter a two digit number: ");
    scanf("%1d%1d%1d", &i, &j, &k);
    printf("The reversal is: %d%d%d", k, j, i);

    return 0;
}