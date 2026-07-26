// Experiment to find out what happens when prints's argument string contains
// \c, where c is some character not listed above. 

#include <stdio.h>

int main() {
    printf("\c%s\n", "hello, world");
}

// \c escape char doesn't escape anything, prints "chello, world"