#include <stdio.h>

int main(void)
{
    int areaCodeInput;

    printf("Enter an area code: ");
    scanf("%d", &areaCodeInput);

    switch (areaCodeInput) {
        case 229: printf("Albany");     break;
        case 404: printf("Alanta");     break;
        case 470: printf("Atlanta");    break;
        case 478: printf("Macon");      break;
        case 678: printf("Atlanta");    break;
        case 706: printf("Colombus");   break;
        case 762: printf("Colombus");   break;
        case 770: printf("Atlanta");    break;
        case 912: printf("Savannah");   break;
    }

    return 0;
}