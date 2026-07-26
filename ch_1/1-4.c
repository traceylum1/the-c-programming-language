// Write a program to print the corresponding Celsius to Fahrenheit table

#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; floating-point version */
int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%3s %6s\n", "cel", "fahr");
    while (celsius <= upper) {
        fahr = 9 * celsius / 5 + 32;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}