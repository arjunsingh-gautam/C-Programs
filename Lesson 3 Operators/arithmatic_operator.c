#include <stdio.h>
int main()
{
    int x = 28, y = 10, z = 2;
    float l = 85.78;
    printf("x+y*z is:%d\n", x + y * z); // * > + precedence
    printf("x%y is: %d\n", x % y);      // % modulo is used only on int operands
    printf("x/y is: %d\n", x / y);      // int/int --> int
    printf("l/y is: %lf\n", l / y);     // float/int and float/float --> float

    return 0;
}