#include <stdio.h>
int factorial(int);
int factorial(int a);

    // factorial(5) = 1 x 2 x 3 x 4 x 5
    // factorial(4) = 1 x 2 x 3 x 4 
    // factorial(3) = 1 x 2 x 3 
    // factorial(n) = 1 x 2 x 3 x ....x n- 1 x n
    // factorial(n-1) = 1 x 2 x 3 x ....x n- 1 
int factorial(int n){
    if( n == 1 || n == 0){ //bse case
      return 1;
    }
    // factorial (n) = factorial (n-1) x n

    return n * factorial(n-1);
}


int main() {
    int a = 6;
    printf("Factorial of %d is %d\n", a, factorial(a));
    
    return 0;
}