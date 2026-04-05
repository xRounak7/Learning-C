#include <stdio.h>

int main(){
    int i = 0;

    /*do 
    {
    code block to be executed
    } while (condition);
    */
    do
    {
       printf("The value of i is %d\n", i);  
       i++;
    } while (i<4);
    
    
    return 0;
}