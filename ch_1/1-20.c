// Write a program detab that replaces tabs in the input with the proper number
// of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
// Should n be a variable or a symbolic parameter? 

#include <stdio.h>

#define MAXLINE 1000
#define TAB_STOPS 8

int get_line(char line[], int lim);
void detab(char from[], char to[], int len);

int main() {
    int c, len;
    char line[MAXLINE];
    char detabbed[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        detab(line, detabbed, len);
        printf("%s", detabbed);
        // printf("%s", line);
    }
    return 0;
}

int get_line(char line[], int lim) {
    int i, c;
    i = 0;
    
    while (i < lim && (c = getchar()) != '\n') {
        line[i++] = c;
    }
    if (c == '\n') {
        line[i++] = c;
    }
    line[i] = '\0';
    return i;
}

void detab(char from[], char to[], int len) {
    int i, j, dist_from_col;
    j = 0;

    for (i = 0; i < len; i++) {
        if (from[i] == '\t') {
            dist_from_col = TAB_STOPS - (j % TAB_STOPS);
            while (dist_from_col > 0) {
                to[j++] = ' ';
                dist_from_col--;
            }
        } else {
            to[j++] = from[i];
        }
    }
    
}