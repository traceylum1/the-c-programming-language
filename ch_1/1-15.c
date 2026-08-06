// Rewrite the temperature conversion program of Section 1.2 to use a function
// for conversion. 

#include <stdio.h>

float fahr_to_cel(int n);

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; floating-point version */
int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%3s %5s\n", "fahr", "cel");
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, fahr_to_cel(fahr));
        fahr = fahr + step;
    }
}

float fahr_to_cel(int fahr) {
    return (5.0/9.0) * (fahr-32.0);
}