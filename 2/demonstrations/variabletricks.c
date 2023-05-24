#include <stdio.h>

int main(void)
{
    float profit = 2150.4867;
    int number = 5, number2 = 6;
    int number3 = 2;
    
    printf("5 x 6 x 2 + 3 is: %d\n", number * number2 * number3 + 3);
    
    // use %d for integers and %f for float
    // note how one printf shows all decimals and the other only 2
    printf("Profit: $%f\n", profit);
    printf("Profit: $%.2f", profit);

    return 0;
}