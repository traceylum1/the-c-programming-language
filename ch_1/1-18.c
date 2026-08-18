// Write a program to remove trailing blanks and tabs from each line of input,
// and to delete entirely blank lines.

#include <stdio.h>

#define MAXLINE 1000
#define IN 1
#define OUT 0

int get_line(char line[], int maxline);
void trim(char to[], char from[]);

int main() {
    int len;    // current line length
    int max;    // maximum length seen so far
    char line[MAXLINE];     // current input line
    char trimmed[MAXLINE];   // whitespaces trimmed

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        trim(trimmed, line);
        printf("%s\n", line);
        printf("%s\n", trimmed);
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
    int i, j, last_char_idx, state;
    i = j = 0;
    state = OUT;
    while (from[i] != '\0') {
        // iterate through 'from' until non whitespace char found, then state is IN
        if (state == OUT) {
            if (from[i] != ' ' && from[i] != '\t') {
                state = IN;
                to[j] = from[i];
                last_char_idx = j;
                j++;
            }
            i++;
        // while state is IN, copy to 'to', keeping track of last_char_idx
        } else {
            if (from[i] != ' ' && from[i] != '\t') {
                last_char_idx = j;
            }
            to[j] = from[i];
            j++;
            i++;
        }
    }
    // add termination char to end array after last_char_idx
    to[++last_char_idx] = '\0';
    return;
}