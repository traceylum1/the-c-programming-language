#include <stdio.h>

int main() {
    printf("\c%s\n", "hello, world");
}

// \c escape char doesn't escape anything, prints "chello, world"