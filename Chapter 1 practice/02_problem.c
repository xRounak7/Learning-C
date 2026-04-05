#include <stdio.h>

int main()
{
    int r;
    int h;

    printf("Enter the radius");

    scanf("%d", &r);
    printf("Enter the height");

    scanf("%d", &h);

    printf("The volume of the circle is %d is %f\n", r, 3.14 * r*r*h);

    return 0;
}