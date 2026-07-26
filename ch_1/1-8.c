// Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main() {
    int c, bl, tab, nl;
    bl = tab = nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            bl++;
        } else if (c == '\t') {
            tab++;
        } else if (c == '\n') {
            nl++;
        }
    }

    printf("%s: %d\n", "blanks", bl);
    printf("%s: %d\n", "tabs", tab);
    printf("%s %d\n", "newlines", nl);
}