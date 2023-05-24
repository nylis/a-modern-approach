#include <stdio.h>

int main(void)
{
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11,
    sum1, sum2, total, check, inputCheck;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &a1);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &a2, &a3, &a4, &a5, &a6);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &a7, &a8, &a9, &a10, &a11);
    printf("Enter the check digit: ");
    scanf("%1d", &inputCheck);

    sum1 = a1 + a3 + a5 + a7 + a9 + a11;
    sum2 = a2 + a4 + a6 + a8 + a10;
    total = (sum1 * 3) + sum2 - 1;
    check = 9 - (total % 10);

    if (inputCheck == check)
        printf("VALID\n");
    else
        printf("INVALID\n");

    printf("Check digit: %d", check);

    return 0;
}