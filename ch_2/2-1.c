// Write a program to determine the ranges of char, short, int, and long
// variables, both signed and unsigned, by printing appropriate values from standard headers
// and by direct computation. Harder if you compute them: determine the ranges of the various
// floating-point types. 

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("----------Ranges of Types From Headers----------\n");
    printf("unsigned char:\t\t %d <-> %d\n", CHAR_MIN, CHAR_MAX);
    printf("signed char:\t\t %d <-> %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned short:\t\t %d <-> %d\n", 0, USHRT_MAX);
    printf("signed short:\t\t %d <-> %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned int:\t\t %d <-> %d\n", 0, UINT_MAX);
    printf("signed int:\t\t %d <-> %d\n", INT_MIN, INT_MAX);
    printf("unsigned long:\t\t %d <-> %lu\n", 0, ULONG_MAX);
    printf("signed long:\t\t %ld <-> %ld\n", LONG_MIN, LONG_MAX);

    printf('\n');
    printf('\n');
    
    printf("----------Ranges of Types By Computation----------\n");
    return 0;
}