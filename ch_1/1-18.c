// Write a program to remove trailing blanks and tabs from each line of input,
// and to delete entirely blank lines.

#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len;    // current line length
    int max;    // maximum length seen so far
    char line[MAXLINE];     // current input line
    char trimmed[MAXLINE];   // whitespaces trimmed

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        
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

void trim(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}