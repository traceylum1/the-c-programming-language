// Write a program to print the value of EOF. 

#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
        printf("%d\n", (c != EOF));
    }
    printf("%d\n", c);
}

// Value of EOF is -1