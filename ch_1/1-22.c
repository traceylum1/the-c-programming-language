// Write a program to ``fold'' long input lines into two or more shorter lines after
// the last non-blank character that occurs before the n-th column of input. Make sure your
// program does something intelligent with very long lines, and if there are no blanks or tabs
// before the specified column


#include <stdio.h>

#define MAXLINE 1000
#define COLUMN_LEN 20

int get_line(char line[], int lim);
void fold_line(char from[], char to[], int len);

int main() {
    int len;
    char line[MAXLINE];
    char folded[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        fold_line(line, folded, len);
        printf("%s", folded);
    }
    return 0;
}


int get_line(char line[], int lim) {
    int c, i;
    i = 0;

    while ((c = getchar()) != '\n' && i < lim) {
        line[i++] = c;
    }

    if (c == '\n')
        line[i++] = '\n';
    
    line[i] = '\0';
    return i;
}

void fold_line(char from[], char to[], int len) {
    int i, j, line_start, last_bl;

    j = 0;
    line_start = 0;
    last_bl = -1;

    for (i = 0; i < len; i++) {
        if ((j - line_start) % COLUMN_LEN == 0) {
            if (last_bl == -1) {
                to[j+1] = to[j-1];
                to[j-1] = '-';
                to[j] = '\n';
                j += 2;
                line_start = j;
            } else {
                to[last_bl] = '\n';
                line_start = last_bl + 1;
            }
        } else {
            if (from[i] == ' ') {
                last_bl = i;
            }
            to[j] = from[i];
        }
    }

    to[j] = '\0';
}