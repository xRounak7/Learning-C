#include <stdio.h>

int main()
{
    int age = 50;

    if (age > 60)
    {
        printf("You can drive and you are senior citizen");
    }
    else if(age>40){
            printf("You can drive and you are adult");
    }       
    else if (age >18)
    {
        printf("You can drive");
    }
    // else
    // {                                      (This is optional ,this can be removed)
    //     printf("You cannot drive");         (Last else only executed only if all otherr condition faile)
    // }
    return 0;
}