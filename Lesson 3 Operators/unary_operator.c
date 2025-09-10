#include <stdio.h>
int main()
{
    // + operator:
    printf(" +  operator\n");
    int x = +5;
    printf("x is: %d\n", x);

    // - operator
    printf(" -  operator\n");
    int y = -93;
    printf("y is: %d\n", y);

    // ++ operator
    printf(" ++  operator\n");
    int z = 4;
    printf("z is: %d\n", z);
    z++; // z++ --> z=z+1
    printf("z is: %d\n", z);
    ++z; // ++z --> z=z+1
    printf("z is: %d\n", z);

    // -- operator:
    printf(" --  operator\n");
    int l = 8;
    printf("l is: %d\n", l);
    l--; // l-- --> l=l-1
    printf("l is: %d\n", l);
    --l; // --l --> l=l-1
    printf("l is: %d\n", l);

    // sizeof() operator:
    printf(" sizeof()  operator\n");
    float p = 3.12;
    printf("sizeof of p is %d bytes\n", sizeof(p));

    return 0;
}
