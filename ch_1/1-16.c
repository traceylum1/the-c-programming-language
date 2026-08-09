// Revise the main routine of the longest-line program so it will correctly print the
// length of arbitrary long input lines, and as much as possible of the text. 

#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len;    // current line length
    int max;    // maximum length seen so far
    char line[MAXLINE];     // current input line
    char longest[MAXLINE];  // longest line saved here

    max = 0;
    while ((len = getline(line, MAXLINE)) > EOF) {
        if (len > max) {
            max = len;
            copy(line, longest);
        }
    }

    if (max > 0)
        printf("%s", longest);

    return 0;
}

int getline(char line[], int maxline) {
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

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while (from[i] != '\0') {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
}