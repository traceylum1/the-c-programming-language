#include <stdio.h>

/* print Celsius-Fahrenheit table for celsius = 0, 20, ..., 300; */
int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%3s %6s\n", "cel", "fahr");
    for (celsius = upper; celsius >= 0; celsius = celsius - step) {
        fahr = 9 * celsius / 5 + 32;
        printf("%3.0f %6.0f\n", celsius, fahr);
    }
}

// using for loop