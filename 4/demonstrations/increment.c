#include <stdio.h>

int main(void)
{
    int i, j;
    i = 2;
    //j = i * i++;

    printf("%d\n", i + i++);

    return 0;
}

// i dont know what the fuck is going on here

// nvm i do now
// even if post-incrementation is used, it is of no use if i is already fetched beforehand.