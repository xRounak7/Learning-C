#include <stdio.h>
// THIS WAS CALL BY FUCNTION VALUE EXAMPLE
// call by value
// we are passing the value of a and b to the function swap

// MAIN CODE

// void swap (int a, int b);

/*int main() {
    int a =3 , b =5;
    swap(a,b);
    printf("Inside main function: a = %d, b = %d\n", a, b);


    return 0;
}
void swap (int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}*/

// THIS IS CALL BY REFERENCE EXAMPLE
// MAIN CODE
// call by reference
// we are passing the address of a and b to the function swap
void _swap(int *a, int *b);

    void _swap(int *a, int *b)
{
    int temp; b
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap fucntion: a = %d, b = %d\n", *a, *b);
}

int main()
{
    int a = 3, b = 5;
    _swap(&a, &b);
    printf("Inside main function: a = %d, b = %d\n", a, b);

    return 0;
}