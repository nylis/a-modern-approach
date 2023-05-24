#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool teenager;
    int age = 15;

    (age >= 13 && age <= 19) ? (teenager = true) : (teenager = false);

    printf("%d", teenager);

    return 0;
}