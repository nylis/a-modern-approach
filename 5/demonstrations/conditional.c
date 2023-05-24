#include <stdio.h>

int main(void)
{
    int i, j, k, a;

    a = -4; 

    i = 1;
    j = 2;
    k = i > j ? i : j;          // k is now 2
    k = (i >= 0 ? i : 0) + j;   // k is now 3

    printf("%d\n", k);
    
    // !!a has the value 1 if expr has a value above 0
    // !a has the value 0 if expr has a value above 1
    printf("%d %d", !!a, !a);
    printf("%d", );

    return 0;
}