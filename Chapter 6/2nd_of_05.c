#include <stdio.h>

// function prototype
// call by reference
// we are passing the address of number to the function _square

void _square(int *x)
{
    *x = (*x) * (*x);
    printf("The square is %d\n", *x);
}

int main()
{
    int number = 7;
    _square(&number);
    printf("The number is %d\n", number);

    return 0;
}