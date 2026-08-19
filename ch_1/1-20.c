// Write a program detab that replaces tabs in the input with the proper number
// of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
// Should n be a variable or a symbolic parameter? 

#include <stdio.h>

#define MAXLINE 1000
#define TAB_STOPS 8

int get_line(char line[], int lim);
int detab(char from[], char to[]);

int main() {
    int c, len;
    char line[MAXLINE];
    char detabbed[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        detab(line, detabbed);
        printf("%s", detabbed);
    }

}

int get_line(char line[], int lim) {
    int i, c;
    
    while (i < lim && (c = getchar()) != '\n') {
        line[i] = c;
        i++;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

int detab(char from[], char to[]) {
    
}