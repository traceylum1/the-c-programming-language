#include <stdio.h>

int main() {
    printf("%s\n", 'hello, world\n');
    printf("%d\n", 'h');
}

// %s expects pointer char * or const char *, results in segmentation fault when trying to point to invalid address