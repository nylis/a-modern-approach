#include <stdio.h>

int main(void)
{
    float amount, amountWithTax;
    int taxPercentage = 5;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    amountWithTax = amount / 100.0f * (100 + taxPercentage);

    printf("With tax added: %.2f", amountWithTax);

    return 0;
}