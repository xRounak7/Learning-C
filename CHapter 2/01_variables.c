#include <stdio.h>

int main() {
    int i = 10;          // Integer variable
    int j = i;
    int a = 2, b = 3, c = 4, d = 5; // Multiple variable declaration
    //%d is called format specifier
    // %d is for int , %f is float and %c is for char
    printf("Value of i is %d and value of j is %d\n", i, j);
    printf("Value of a is %d and value of j is %d\n", a, b);
    printf("Value of c is %d and value of j is %d\n", c, d);
    return 0;
}