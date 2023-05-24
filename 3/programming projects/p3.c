#include <stdio.h>

int main(void)
{
    int GS1Prefix, groupIdentifier, publisherCode,
    itemNumber, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1Prefix, &groupIdentifier,
    &publisherCode, &itemNumber, &checkDigit);

    printf("GS1 prefix: %.3d\n", GS1Prefix);
    printf("Group identifier: %.1d\n", groupIdentifier);
    printf("Publisher code: %.3d\n", publisherCode);
    printf("Item number: %.5d\n", itemNumber);
    printf("Check digit: %.1d", checkDigit);

    return 0;
}