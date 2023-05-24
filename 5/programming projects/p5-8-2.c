#include <stdio.h>

int main(void)
{
    int inputHour, inputMinute, inputTime,
    d1 = 480,
    d2 = 583,
    d3 = 679,
    d4 = 767,
    d5 = 840,
    d6 = 945,
    d7 = 1140,
    d8 = 1305;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &inputHour, &inputMinute);

    inputTime = ((inputHour * 60) + inputMinute);

    if (inputTime < d1 + ((d2 - d1) / 2))
        printf("Closest depature time is 8:00 AM, arriving at 10:16 AM");
    else if (inputTime < d2 + ((d3 - d2) / 2))
        printf("Closest depature time is 9:43 AM, arriving at 11:52 AM");
    else if (inputTime < d3 + ((d4 - d3) / 2))
        printf("Closest depature time is 11:19 AM, arriving at 1:31 PM");
    else if (inputTime < d4 + ((d5 + d4) / 2))
        printf("Closest depature time is 12:47 PM, arriving at 3:00 PM");
    else if (inputTime < d5 + ((d6 + d5) / 2))
        printf("Closest depature time is 2:00 PM, arriving at 4:08 PM");
    else if (inputTime < d6 + ((d7 + d6) / 2))
        printf("Closest depature time is 3:45 PM, arriving at 5:55 PM");
    else if (inputTime < d7 + ((d8 - d7) / 2))
        printf("Closest depature time is 7:00 PM, arriving at 9:20 PM");
    else
        printf("Closest depature time is 9:45 PM, arriving at 11:58 PM");
    
    return 0;

}