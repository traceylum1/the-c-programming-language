// Write a program that prints its input one word per line.

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (state == IN) {
            if (c == ' ' || c == '\n' || c == '\t') {
                state = OUT;
                putchar('\n');
            } else {
                putchar(c);
            }
        } else {
            if (c != ' ' && c != '\n' && c != '\t') {
                state = IN;
                putchar(c);
            }
        }
    }
}