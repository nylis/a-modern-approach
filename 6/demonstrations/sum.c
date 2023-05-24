// sums a sereis of numbers

#include <stdio.h>

int main(void)
{
    int sum = 0, inputNumber = 69;

    printf("this program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    while (inputNumber != 0) {
        scanf("%d", &inputNumber);
        sum += inputNumber;
    }

    printf("The sum is: %d\n", sum);

    return 0;
}