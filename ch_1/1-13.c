//  Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. 

#include <stdio.h>

#define MAX_WORD_LEN 20
#define MAX_WORD_COUNT 10
#define IN 1
#define OUT 0

int main() {
    int wc_arr[MAX_WORD_LEN];
    int i, j, c, state, wl;
    wl = 0;
    state = OUT;

    for (i = 0; i < MAX_WORD_LEN; i++) {
        wc_arr[i] = 0;  // initialize arr elements to 0
    }

    while ((c = getchar()) != EOF) {
        if (state == OUT) {
            if (c != ' ' && c != '\n' && c != '\t') {
                state = IN;
                wl++;
            }
        } else {
            if (c != ' ' && c != '\n' && c != '\t') {
                wl++;
            } else {
                state = OUT;
                if (wl >= MAX_WORD_LEN) {
                    wc_arr[MAX_WORD_LEN-1]++;
                } else {
                    wc_arr[wl-1]++;
                }
                wl = 0;
            }
        }
    }

    // HORIZONTAL
    // printf("%3s\t%s\n", "len", "count");
    // for (i = 0; i < MAX_WORD_LEN; i++) {
    //     printf("%3d\t", i+1);
    //     for (j = 0; j < wc_arr[i]; j++) {
    //         putchar('#');
    //     }
    //     putchar('\n');
    // }

    // VERTICAL
    for (i = MAX_WORD_COUNT; i > 0; i--) {
        printf("%4d", i);
        for (j = 0; j < MAX_WORD_LEN; j++) {
            if (wc_arr[j] >= i) {
                printf("  #");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("%4s", "len");
    for (i = 0; i < MAX_WORD_LEN; i++) {
        printf("%3d", i+1);
    }
    printf("\n");
}