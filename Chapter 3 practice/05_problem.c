#include <stdio.h>
/*
Write a program to determine whether a character entered by the user is
lowercase or not.
*/
int main() {
    char ch = 'a';
    printf("Enter The character);\n");
    scanf("%c", &ch);
    printf("The value of character is %d\n", ch);

    //97 and 122
    if (ch>= 97 && ch <= 122){
        printf("The character is lowercase\n");
    }
     else {
        printf("The character is not lowercase\n");
    }

    
    return 0;
}