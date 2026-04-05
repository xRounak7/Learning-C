#include <stdio.h>

int main() {
    for ( int i = 0; i <15; i++)
    {
        if(i==5){
            //break;  // break the loop
            continue; // skip the current iteration
        }
        printf("i si %d\n", i);
    }
    printf("Loop is done");

    return 0;
}