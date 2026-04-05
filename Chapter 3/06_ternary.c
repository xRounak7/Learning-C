#include <stdio.h>

int main() {
    //condition ? expression-if-true : expression-if-false
     int a = 345;
     int b = 3277;
     a>b?printf("a is greater than b"):printf("b is greater than a");
    // here condition= a>b
    // expression-if-true= printf("a is greater than b")
    // expression-if-false= printf("b is greater than a")
    return 0;
}