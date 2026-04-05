#include <stdio.h>

int main() {
    int a = 4; 
    int b = 3;
    int c = a + b;

    printf("The value of a is %d and value of b is %d and the sum is %d\n", a, b, c);
    // Modulus operator is used to find the remainder
    printf("The remainder when a is divided by b is: %d\n", a%b );
    printf("15 / 3 is %d",15%3);


    // This does not work for exponnetiation in c
    // int d = a^b; // This is bitwise xor operator
    // printf("The value of a^b is %d",d);
    return 0;
}