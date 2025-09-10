#include <stdio.h>
#define PI 3.14

int main() {
    printf("Value of PI: %f\n", PI);
    #undef PI // PI is now undefined //undefines the Macro
    // #define PI 3.14159 // You can redefine PI if needed
    // printf("New value of PI: %f\n", PI); // This will cause an error if PI is not redefined
    return 0;
}