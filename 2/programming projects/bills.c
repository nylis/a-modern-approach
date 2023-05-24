#include <stdio.h>

int main(void)
{
    int dollarAmount, total20Dollars, total10Dollars,
    total5Dollars, total1Dollars;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollarAmount);

    total20Dollars = dollarAmount / 20;
    dollarAmount = dollarAmount - (total20Dollars * 20);
    total10Dollars = dollarAmount / 10;
    dollarAmount = dollarAmount - (total10Dollars * 10);
    total5Dollars = dollarAmount / 5;
    dollarAmount = dollarAmount - (total5Dollars * 5);
    total1Dollars = dollarAmount / 1;
    dollarAmount = dollarAmount - (total1Dollars * 1);

    printf("\n20$ bills: %d\n", total20Dollars);
    printf("10$ bills: %d\n", total10Dollars);
    printf("5$ bills: %d\n", total5Dollars);
    printf("1$ bills: %d", total1Dollars);

    return 0;
}