#include <stdio.h>
//Write a function to convert Celsius temperature into Fahrenheit

float c_to_f(float celsius);
float c_to_f(float celsius){
    return (celsius * 9.0/5.0) + 32.0;
}

int main() {
    float c = 37.0;

    printf("Temperature in Fahrenheit: %.2f\n", c_to_f(c));
    return 0;
}