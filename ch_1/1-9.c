// Write a program to copy its input to its output, replacing each string of one or
// more blanks by a single blank.

#include <stdio.h>

int main() {
    int c, prev;
    prev = -1;
    
    while ((c = getchar()) != EOF) {
        if (c != ' ' || c == ' ' && prev != ' ') {
            putchar(c);
        }
        prev = c;
    }
}