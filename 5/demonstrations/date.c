#include <stdio.h>

int main(void)
{
    int monthInput, dayInput, yearInput;

    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &monthInput, &dayInput, &yearInput);

    switch (dayInput) {
        case 1: case 21: case 31:
            printf("Dated this day the %dst ", dayInput);
            break;
        case 2: case 22:
            printf("Dated this day the %dnd ", dayInput);
            break;
        case 3: case 23:
            printf("Dated this day the %drd ", dayInput);
            break;
        default:
            printf("Dated this day the %dth ", dayInput);
            break;
    }

    switch (monthInput) {
        case 1:
            printf("day of January, 20%d", yearInput);
            break;
        case 2:
            printf("day of February, 20%d", yearInput);
            break;
        case 3:
            printf("day of March, 20%d", yearInput);
            break;
        case 4:
            printf("day of April, 20%d", yearInput);
            break;
        case 5:
            printf("day of May, 20%d", yearInput);
            break;
        case 6:
            printf("day of June, 20%d", yearInput);
            break;
        case 7:
            printf("day of July, 20%d", yearInput);
            break;
        case 8:
            printf("day of August, 20%d", yearInput);
            break;
        case 9:
            printf("day of September, 20%d", yearInput);
            break;
        case 10:
            printf("day of October, 20%d", yearInput);
            break;
        case 11:
            printf("day of November, 20%d", yearInput);
            break;
        case 12:
            printf("day of December, 20%d", yearInput);
            break;
        default:
            printf("... wait what month did you just fill in?");
            break;
    }

    return 0;
}