#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float input, output;

    printf("Enter value of trade: ");
    scanf("%f", &input);

    if (input >= 0 && input < 2500.0f)
    {
        output = (((input / 100.0f) * 1.7f) + 30.0f);
    }

    else if (input >= 2500.0f && input < 6250.0f)
    {
        output = (((input / 100.0f) * 0.66f) + 56.0f);
    }

    else if (input >= 6250.0f && input < 20000.0f)
    {
        output = (((input / 100.0f) * 0.34f) + 76.0f);
    }

    else if (input >= 20000.0f && input < 50000.0f)
    {
        output = (((input / 100.0f) * 0.22f) + 100.0f);
    }

    else if (input >= 50000.0f && input < 500000.0f)
    {
        output = (((input / 100.0f) * 0.11f) + 155.0f);
    }

    else if (input >= 500000.0f)
    {
        output = (((input / 100.0f) * 0.09f) + 255.0f);
    }

    else
    {
        printf("Value is either invalid or negative");
        exit(0);
    }

    printf("Commission: $%.2f", output);

    return 0;
}