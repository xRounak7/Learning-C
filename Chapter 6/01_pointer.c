#include <stdio.h>

int main() {
    int i = 72;
    int* j=&i; // j is a pointer pointing to i
    int k =67;
    printf("the addres of i is %p\n", &i);
    printf("the addres of i is %p\n", j);
    printf("the addres of k is %p\n", &k);

    printf("The value at adress j is %d\n", *(&j));
    return 0;
}