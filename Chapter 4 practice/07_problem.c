#include <stdio.h>
// Write a program to calculate the factorial of a given number using a for loop.
int main()
{
    int i = 1;
    int product = 1;
    int n;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     product *= i;
    // }
    // printf("The factorial of %d is: %d\n", n, product);


    while (i<=n)
    {
        product *= i;
        i++;
    }
    printf("The factorial of %d is: %d\n", n, product);
    return 0;
}