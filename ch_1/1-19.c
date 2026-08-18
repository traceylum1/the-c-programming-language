// Write a function reverse(s) that reverses the character string s. Use it to
// write a program that reverses its input a line at a time.

#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void reverse(char to[], char from[], int end_idx);

int main() {
    int len;    // current line length
    int max;    // maximum length seen so far
    char line[MAXLINE];     // current input line
    char reversed[MAXLINE];     // reversed line

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        reverse(reversed, line, len);
        printf("%s", reversed);
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

void reverse(char to[], char from[], int end_idx) {
    int i;
    i = 0;

    to[end_idx--] = '\0';
    to[end_idx--] = '\n';

    while ((to[end_idx--] = from[i++]) != '\n');
}