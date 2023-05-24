#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    if (n1 >= n2 && n1 >= n3 && n1 >= n4)
        printf("Largest: %d\n", n1);
    if (n2 >= n1 && n2 >= n3 && n2 >= n4)
        printf("Largest: %d\n", n2);
    if (n3 >= n1 && n1 >= n2 && n1 >= n4)
        printf("Largest: %d\n", n3);
    if (n4 >= n1 && n1 >= n2 && n1 >= n3)
        printf("Largest: %d\n", n4);
    
    if (n1 <= n2 && n1 <= n3 && n1 <= n4)
        printf("Smallest: %d\n", n1);
    if (n2 <= n1 && n2 <= n3 && n2 <= n4)
        printf("Smallest: %d\n", n2);
    if (n3 <= n1 && n1 <= n2 && n1 <= n4)
        printf("Smallest: %d\n", n3);
    if (n4 <= n1 && n1 <= n2 && n1 <= n3)
        printf("Smallest: %d\n", n4);

    return 0;
}