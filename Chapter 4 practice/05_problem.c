#include <stdio.h>
// Write a program to implement program 4 using ‘for’ and ‘do-while’ loop.
int main() {
    // int sum = 0;
    // for (int i = 1; i <= 10; i++) {
    //     sum += i;
    // }
    // printf("The sum of first ten natural numbers is: %d\n", sum);

    int i =1;
    int sum=0;
    do {
        sum +=i;
        i++;
    } while (i <= 10);
    printf("The sum of first ten natural numbers is: %d\n", sum);

    return 0;
}