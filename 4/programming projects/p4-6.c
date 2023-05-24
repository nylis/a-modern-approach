#include <stdio.h>

int main(void)
{
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12,
    sum1, sum2, total, check;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a1, &a2, &a3, &a4, &a5, &a6, 
    &a7, &a8, &a9, &a10, &a11, &a12);

    sum1 = a2 + a4 + a6 + a8 + a10 + a12;
    sum2 = a1 + a3 + a5 + a7 + a9 + a11;
    total = (sum1 * 3) + sum2 - 1;
    check = 9 - (total % 10);

    printf("Check digit: %d", check);

    return 0;
}