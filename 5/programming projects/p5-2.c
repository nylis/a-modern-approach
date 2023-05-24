#include <stdio.h>

int main(void)
{
    int inputHour, inputMinute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &inputHour, &inputMinute);

    switch (inputHour) {
        case 0:  printf("Equivalent 12-hour time: 12:%d AM", inputMinute); break;
        case 1:  printf("Equivalent 12-hour time: 1:%d AM", inputMinute);  break;
        case 2:  printf("Equivalent 12-hour time: 2:%d AM", inputMinute);  break;
        case 3:  printf("Equivalent 12-hour time: 3:%d AM", inputMinute);  break;
        case 4:  printf("Equivalent 12-hour time: 4:%d AM", inputMinute);  break;
        case 5:  printf("Equivalent 12-hour time: 5:%d AM", inputMinute);  break;
        case 6:  printf("Equivalent 12-hour time: 6:%d AM", inputMinute);  break;
        case 7:  printf("Equivalent 12-hour time: 7:%d AM", inputMinute);  break;
        case 8:  printf("Equivalent 12-hour time: 8:%d AM", inputMinute);  break;
        case 9:  printf("Equivalent 12-hour time: 9:%d AM", inputMinute);  break;
        case 10: printf("Equivalent 12-hour time: 10:%d AM", inputMinute); break;
        case 11: printf("Equivalent 12-hour time: 11:%d AM", inputMinute); break;
        case 12: printf("Equivalent 12-hour time: 12:%d PM", inputMinute); break;
        case 13: printf("Equivalent 12-hour time: 1:%d PM", inputMinute);  break;
        case 14: printf("Equivalent 12-hour time: 2:%d PM", inputMinute);  break;
        case 15: printf("Equivalent 12-hour time: 3:%d PM", inputMinute);  break;
        case 16: printf("Equivalent 12-hour time: 4:%d PM", inputMinute);  break;
        case 17: printf("Equivalent 12-hour time: 5:%d PM", inputMinute);  break;
        case 18: printf("Equivalent 12-hour time: 6:%d PM", inputMinute);  break;
        case 19: printf("Equivalent 12-hour time: 7:%d PM", inputMinute);  break;
        case 20: printf("Equivalent 12-hour time: 8:%d PM", inputMinute);  break;
        case 21: printf("Equivalent 12-hour time: 9:%d PM", inputMinute);  break;
        case 22: printf("Equivalent 12-hour time: 10:%d PM", inputMinute); break;
        case 23: printf("Equivalent 12-hour time: 11:%d PM", inputMinute); break;
    }

    return 0;
}