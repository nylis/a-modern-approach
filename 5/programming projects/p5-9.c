#include <stdio.h>

int main(void)
{
    int inputMonth, inputDay, inputYear,
    inputMonth2, inputDay2, inputYear2, i;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &inputMonth, &inputDay, &inputYear);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &inputMonth2, &inputDay2, &inputYear2);

    if (inputYear > inputYear2)
        printf("%d/%d/%d is earlier than %d/%d/%d", 
        inputMonth2, inputDay2, inputYear2, inputMonth, inputDay, inputYear);
    else if (inputMonth > inputMonth2)
        printf("%d/%d/%d is earlier than %d/%d/%d", 
        inputMonth2, inputDay2, inputYear2, inputMonth, inputDay, inputYear);
    else if (inputDay > inputDay2)
        printf("%d/%d/%d is earlier than %d/%d/%d", 
        inputMonth2, inputDay2, inputYear2, inputMonth, inputDay, inputYear);
    else 
        printf("%d/%d/%d is earlier than %d/%d/%d", 
        inputMonth, inputDay, inputYear, inputMonth2, inputDay2, inputYear2);
}