#include <stdio.h>

int main(void)
{
    int inputNumber;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    printf("The number has ");
    if (inputNumber >= 0 && inputNumber < 10) {
        printf("1 digit");
    }
    else if (inputNumber < 99) {
        printf("2 digits");
    }
    else if (inputNumber < 999) {
        printf("3 digits");
    }

    return 0;
}