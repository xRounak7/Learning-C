#include <stdio.h>
// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
float gravitaional_force(float mass);
float gravitaional_force(float mass)
{
    return mass * 9.8;
}

int main()
{
    float mass = 10.0;
    printf("The gravitational force on the body is %.2f N\n", gravitaional_force(mass));
    return 0;
}