#include <stdio.h>

int main(void)
{
    int input, number1, number2, number3, number4, number5;
    
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &input);

    number1 = input % 8;
    input /= 8;
    number2 = input % 8;
    input /= 8;
    number3 = input % 8;
    input /= 8;
    number4 = input % 8;
    input /= 8;
    number5 = input % 8;

    printf("In octal, your number is: %d%d%d%d%d", number5, number4, number3, number2, number1);

    return 0;
}