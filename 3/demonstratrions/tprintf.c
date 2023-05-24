// prints int and float values in various formats

#include <stdio.h>

int main(void)
{
    int i, profit = 10;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
    printf("|%6.2g|\n", .0000009979);

    printf("\"Hello!\"\n"); // prints a " character
    printf("\\"); // prints one \ character
    printf("Net profit: %d%%\n", profit); // prints one % character

    return 0;
}