// In this program we will learn how to use bit fields in struct to optimise memory
#include <stdio.h>
typedef struct
{
    int d;
    int m;
    int y;
}Date;
typedef struct
{
    int d:5;// assign 5 bits to d create a bit field of 5 bits
    int m:4;// assign 4 bits to m create of a bit field of 4 bits
    int y;
}Date_optimised;

int main()
{
    Date d1={2,8,2025};
    Date_optimised d2={2,8,2025};
    printf("size of d1=%d bytes\nsize of d2=%d bytes",sizeof(d1),sizeof(d2));
}