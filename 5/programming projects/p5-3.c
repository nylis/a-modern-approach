#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float totalPrice, inputShareTotal, inputSharePrice, output;

    printf("Enter the total of shares: ");
    scanf("%f", &inputShareTotal);
    printf("Enter the price per share: ");
    scanf("%f", &inputSharePrice);

    totalPrice = inputSharePrice * inputShareTotal;

    if (totalPrice >= 0 && totalPrice < 2500.0f)
        output = (((totalPrice / 100.0f) * 1.7f) + 30.0f);
    else if (totalPrice >= 2500.0f && totalPrice < 6250.0f)
        output = (((totalPrice / 100.0f) * 0.66f) + 56.0f);
    else if (totalPrice >= 6250.0f && totalPrice < 20000.0f)
        output = (((totalPrice / 100.0f) * 0.34f) + 76.0f);
    else if (totalPrice >= 20000.0f && totalPrice < 50000.0f)
        output = (((totalPrice / 100.0f) * 0.22f) + 100.0f);
    else if (totalPrice >= 50000.0f && totalPrice < 500000.0f)
        output = (((totalPrice / 100.0f) * 0.11f) + 155.0f);
    else if (totalPrice >= 500000.0f)
        output = (((totalPrice / 100.0f) * 0.09f) + 255.0f);
    else {
        printf("Value is either invalid or negative");
        exit(0);
    }

    printf("original commission: $%.2f", output);

    return 0;
}

// skipped for now