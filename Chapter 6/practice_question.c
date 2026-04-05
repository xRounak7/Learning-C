#include <stdio.h>
int main() {

int *ptr;
int x;

ptr = &x;
*ptr = 0;

printf(" x = %d\n", x); 
printf(" *ptr = %d\n", *ptr) ;

*ptr += 5; // *ptr = *ptr + 5
printf(" x = %d\n", x);
printf(" *ptr = %d\n", *ptr);

(*ptr)++; // increment the value pointed to by ptr
printf(" x = %d\n", x);
printf(" *ptr = %d\n", *ptr);

return 0;
}