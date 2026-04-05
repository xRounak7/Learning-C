#include <stdio.h>
 float average(int a , int b, int c)
{
    return (a + b + c)/3.0;
}
int main() {
    int a = 5, b = 11, c = 15;
    printf("The average of a, b and c is %f", average(a, b, c));
    return 0;
}