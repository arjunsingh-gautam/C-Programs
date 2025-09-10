#include <stdio.h>
int main()
{
    int x = 5, y, z;
    y = x++; // x++ has least precedece than = operator   Ouptut:y=5 x=6
    printf("the value of x is: %d and y is: %d\n", x, y);
    z = ++x; // ++x has more precedence than assignment = operator   Output:z=7 x=7
    printf("the value of x is: %d and z is: %d\n", x, z);
    return 0;
}