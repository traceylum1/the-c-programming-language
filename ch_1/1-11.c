// How would you test the word count program? What kinds of input are most
// likely to uncover bugs if there are any? 

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, nl, nw, nc, state;
    nl = nw = nc = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        nc++;
        if (c == '\n') {
            nl++;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            nw++;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);
}


// test every possible transition:
 
// OUT → OUT (more whitespace)
// OUT → IN (start of a word)
// IN → IN (middle of a word)
// IN → OUT (end of a word)