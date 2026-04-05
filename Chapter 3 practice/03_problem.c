#include <stdio.h>
/* Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab Tax
2.5 – 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/
int main()
{
    int income;
    printf("Enter your income in lakhs per annum: \n");
    scanf("%d", &income);
    if (income < 250000)
    {
        printf("You don't have to pay any taxes. \n");
    }
    if (income >= 250000 && income <= 500000)
    {
        float tax = ((income - 250000) * 0.05);
        printf("You have to pay %.2f as tax. \n", tax);
    }

    if (income >= 500000 && income <= 1000000)
    {
        float tax = ((income - 250000) * 0.05);
        printf("You have to pay %.2f as tax. \n", tax);
    }
    if (income > 1000000)
    {
        float tax = ((income - 250000) * 0.30);
        printf("You have to pay %.2f as tax. \n", tax);
    }

    return 0;
}