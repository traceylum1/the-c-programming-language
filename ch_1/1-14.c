// Write a program to print a histogram of the frequencies of different characters
// in its input.

#include <stdio.h>

#define ALPHA_COUNT 26
#define NUM_COUNT 10

int main() {
    int i;
    char char_freq[ALPHA_COUNT + NUM_COUNT];

    for (i = 0; i < (ALPHA_COUNT + NUM_COUNT); i++) {
        char_freq[i] = 0;   // initialize arr to 0
    }

    int c;
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            char_freq[c - 'a']++;
        } else if (c >= '0' && c <= '9') {
            char_freq[c - '0' + ALPHA_COUNT]++;
        }
    }

    for (i = 0; i < (ALPHA_COUNT + NUM_COUNT); i++) {
        if (i < ALPHA_COUNT) {
            printf("%c: ", 'a' + i);
        } else {
            printf("%c: ", '0' + i - ALPHA_COUNT);
        }

        int j;
        for (j = 0; j < char_freq[i]; j++) {
            printf("#");
        }
        putchar('\n');
    }

    return 0;
}