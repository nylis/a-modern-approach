#include <stdio.h>

int main(void)
{
    int inputSpeed;

    printf("Enter a wind force: ");
    scanf("%d", &inputSpeed);

    if (inputSpeed < 1)
        printf("Calm");
    else if (inputSpeed < 4)
        printf("Light air");
    else if (inputSpeed < 28)
        printf("Breeze");
    else if (inputSpeed < 64)
        printf("Storm");
    else
        printf("Hurricane");
    
    return 0;
}