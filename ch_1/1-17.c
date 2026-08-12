// Write a program to print all input lines that are longer than 80 characters.

#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);

int main() {
    int len;    // current line length
    int max;    // maximum length seen so far
    char line[MAXLINE];     // current input line

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > 80)
            printf("%s", line);
    }
    
    return 0;
}

int get_line(char line[], int maxline) {
    char c;
    int i;
    for (i = 0; i < maxline-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}