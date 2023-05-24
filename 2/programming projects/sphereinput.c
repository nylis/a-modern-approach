#include <stdio.h>

int main(void)
{
    float radius, volume;
    
    printf("Enter the radius of the sphere here: ");
    scanf("%f", &radius);

    volume = (4.0f / 3.0f) * 3.14159 * radius * radius * radius;

    printf("The volume of a %.2f radius sphere is: %.2fm3", radius, volume);

    return 0;
}