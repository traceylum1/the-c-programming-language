// Write a program entab that replaces strings of blanks by the minimum
// number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
// When either a tab or a single blank would suffice to reach a tab stop, which should be given
// preference?

#include <stdio.h>

#define MAXLINE 1000
#define TAB_STOPS 8

int get_line(char line[], int lim);
void entab(char from[], char to[], int len);

int main() {
    int c, len;
    char line[MAXLINE];
    char entabbed[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        entab(line, entabbed, len);
        printf("%s", entabbed);
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

void entab(char from[], char to[], int len) {
    int i, j, bl_count;

    j = bl_count = 0;

    for (i = 0; i < len; i++) {
        if (i % TAB_STOPS == 0 && i > 0) {
            if (bl_count > 1) {
                to[j++] = '\t';
            } else {
                to[j++] = ' ';
            }
        } else if (from[i] != ' ') {
            while (bl_count > 0) {
                to[j++] = ' ';
                bl_count--; 
            }
            to[j++] = from[i];
        } else if (from[i] == ' ') {
            bl_count++;
        }
    }
    to[j] = '\0';
}