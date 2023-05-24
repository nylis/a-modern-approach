#include <stdio.h>

int main(void)
{
    float incomeInput, tax;

    printf("Enter the monthly income: ");
    scanf("%f", &incomeInput);

    if (incomeInput < 750.f)
        tax = 0.01f * incomeInput;
    else if (incomeInput < 2250.f)
        tax = 7.50f + 0.02f * incomeInput;
    else if (incomeInput < 3750.f)
        tax = 37.50f + 0.03f * incomeInput;
    else if (incomeInput < 5250.f)
        tax = 82.50f + 0.04f * incomeInput;
    else if (incomeInput < 7000.f)
        tax = 142.50f + 0.05f * incomeInput;
    else
        tax = 230.f + 0.06f * incomeInput;

    printf("Tax due: $%.2f", tax);

    return 0;
}