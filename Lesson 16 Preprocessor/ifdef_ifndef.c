#include <stdio.h>

#define PI 3.14

int main() {
#ifdef PI
    printf("PI is defined: %f\n", PI); // Compiles this statement if PI defined
#endif

#ifndef AREA
    printf("AREA is not defined\n"); // Compiles this statement if AREA not defined
#endif

    return 0;
}