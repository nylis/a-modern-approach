// Converts a Fahrenheit temperature to Celsius

// Defining SCALE_FACTOR to be (5.0f / 9.0f)
// is important, because C would result (5 / 9)
// as integers otherwise

#include <stdio.h>

#define SCALE_FACTOR (5.0f / 9.0f)
#define FREEZING_PT 32.0f

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f", celsius);

    return 0;
}