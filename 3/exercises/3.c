#include <stdio.h>

int main(void)
{
    int test;
    float test2;

    scanf("%d", &test);
    scanf(" %d", &test);
    
    scanf("%d-%d-%d", test);
    scanf("%d -%d -%d", test);

    scanf("%f", &test2);
    scanf("%f ", &test2);

    scanf("%f,%f", &test2);
    scanf("%f, %f", &test2);

    return 0;
}