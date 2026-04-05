#include <stdio.h>

int main()
{
    int a = 10;
    // if (a == 11)  this compares a with 11
    // if (a = 11)    this assigns 11 to a, that is why its wrong
    if (a == 11)
        printf("I am 11");
    else
        printf("I am not 11");
    return 0;
}