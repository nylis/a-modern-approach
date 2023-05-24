// prints a table of squares using a while statement**

#include <stdio.h>

int main(void)
{
    int inputNumber, counter = 1;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &inputNumber);

    while (counter <= inputNumber) {
        printf("\t%d\t%d\n", counter, counter * counter);
        ++counter;
    }

    return 0;
}