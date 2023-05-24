#include <stdio.h>

int main(void)
{
    int height, length, width, volume;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    
    printf("the volume of the box is: %d cm3", volume);
    return 0;
}