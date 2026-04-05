#include <stdio.h>

/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/

int main()
{
    int sub1, sub2, sub3;
    printf("Enter marks sub1: \n ");
    scanf("%d", &sub1);
    printf("Enter marks sub2: \n ");
    scanf("%d", &sub2);
    printf("Enter marks sub3: \n ");
    scanf("%d", &sub3);
    printf("Marks are %d, %d, %d\n", sub1, sub2, sub3);

    if (sub1 < 33 || sub2 < 33 || sub3 < 33) // || = or && = and
    {
        printf("You have failed because you have less than 33 in one of the subjects.\n");
    }
    /*else
    {
        int total = (sub1 + sub2 + sub3) / 3;
        if (total < 40)
        {
            printf("You have failed because your total percentage is less than 40%%.\n");       Dusra way
        }
        else
        {
            printf("Congratulations! You have passed the exam.\n");
        }
    }*/
    else if ((sub1 + sub2 + sub3) / 3 < 40)
    {
        printf("You have failed because your total percentage is less than 40%. \n");
    }
    else
    {
        printf("Congratulations! You have passed the exam.\n");
    }

    return 0;
}