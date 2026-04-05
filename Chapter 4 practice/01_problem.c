#include <stdio.h>
//Write a program to print multiplication table of a given number n.

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);

    }    



    return 0;
} 