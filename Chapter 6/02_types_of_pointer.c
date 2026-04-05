#include <stdio.h>

int main() {
    char i = 'A';
    char* j=&i; // j is a pointer pointing to i
    // int k =67;

    float k = 5.323;
    float* k1 =&k;
    printf("the address of i is %p\n", &i);
    printf("the address of i is %p\n", j);
    printf("the address of k is %f\n", *(&k));

    printf("The value at adress j is %p\n", *(&j));
    return 0;
}