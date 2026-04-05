#include <stdio.h>


// function prototype 
// call by value
// we are passing the value of number to the function square

void square(int x);

void square(int x)
{
    x = x * x;
    printf("The square is %d\n", x);
}

int main()
{
    int number = 7;
    square(number);
    printf("The number is %d\n", number);

    return 0;
}