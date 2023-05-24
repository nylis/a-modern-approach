#include <stdio.h>

int main(void)
{
    int inputHour, inputMinute, inputTime;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &inputHour, &inputMinute);

    inputTime = ((inputHour * 60) + inputMinute);

    if (inputTime < 480)
        printf("Closest depature time is 8:00 AM, arriving at 10:16 AM");
    else if (inputTime < 583)
        printf("Closest depature time is 9:43 AM, arriving at 11:52 AM");
    else if (inputTime < 679)
        printf("Closest depature time is 11:19 AM, arriving at 1:31 PM");
    else if (inputTime < 767)
        printf("Closest depature time is 12:47 PM, arriving at 3:00 PM");
    else if (inputTime < 840)
        printf("Closest depature time is 2:00 PM, arriving at 4:08 PM");
    else if (inputTime < 945)
        printf("Closest depature time is 3:45 PM, arriving at 5:55 PM");
    else if (inputTime < 1140)
        printf("Closest depature time is 7:00 PM, arriving at 9:20 PM");
    else if (inputTime < 1305)
        printf("Closest depature time is 9:45 PM, arriving at 11:58 PM");
    
    return 0;

}