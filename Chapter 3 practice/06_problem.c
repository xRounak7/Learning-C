#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the number a\n");
    scanf("%d", &a);
    printf("Enter the number b\n");
    scanf("%d", &b);
    printf("Enter the number c\n");
    scanf("%d", &c);
    printf("Enter the number d\n");
    scanf("%d", &d);

    /*if (a > b && a > c && a > d) {
        printf("a is the greatest\n");
    } else if (b > c && b > d) {
        printf("b is the greatest\n");
    } else if (c > d) {                            short version
        printf("c is the greatest\n");
    } else {
        printf("d is the greatest\n");
    }*/
   if (a > b && a > c && a > d)
    {
        printf("a is the largest number\n");
    }
    else if (b > c && b > d)
    {
        printf("b is the largest number\n");

    }
    else if (c > d)
    {
        printf("c is the largest number\n");
    }
    else
    {
        printf("d is the largest number\n");
    }

    return 0;
}