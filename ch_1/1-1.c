//  Run the ``hello, world'' program on your system. Experiment with leaving out
// parts of the program, to see what error messages you get.

#include <stdio.h>

int main() {
    printf("%s\n", 'hello, world\n');
    printf("%d\n", 'h');
}

// %s expects pointer char * or const char *, results in segmentation fault when trying to point to invalid address